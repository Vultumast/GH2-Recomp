#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823CDE54"))) PPC_WEAK_FUNC(sub_823CDE54);
PPC_FUNC_IMPL(__imp__sub_823CDE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDE58"))) PPC_WEAK_FUNC(sub_823CDE58);
PPC_FUNC_IMPL(__imp__sub_823CDE58) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x823cde8c
	if (!cr6.gt) goto loc_823CDE8C;
	// bl 0x823cbb30
	sub_823CBB30(ctx, base);
loc_823CDE8C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_823CDEC4"))) PPC_WEAK_FUNC(sub_823CDEC4);
PPC_FUNC_IMPL(__imp__sub_823CDEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDEC8"))) PPC_WEAK_FUNC(sub_823CDEC8);
PPC_FUNC_IMPL(__imp__sub_823CDEC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x823cdefc
	if (!cr6.gt) goto loc_823CDEFC;
	// bl 0x823cbbc0
	sub_823CBBC0(ctx, base);
loc_823CDEFC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_823CDF34"))) PPC_WEAK_FUNC(sub_823CDF34);
PPC_FUNC_IMPL(__imp__sub_823CDF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDF38"))) PPC_WEAK_FUNC(sub_823CDF38);
PPC_FUNC_IMPL(__imp__sub_823CDF38) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x823cdf6c
	if (!cr6.gt) goto loc_823CDF6C;
	// bl 0x823cbc50
	sub_823CBC50(ctx, base);
loc_823CDF6C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_823CDFA4"))) PPC_WEAK_FUNC(sub_823CDFA4);
PPC_FUNC_IMPL(__imp__sub_823CDFA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CDFA8"))) PPC_WEAK_FUNC(sub_823CDFA8);
PPC_FUNC_IMPL(__imp__sub_823CDFA8) {
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
	// bl 0x823cc448
	sub_823CC448(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x823cdfe8
	if (!cr6.lt) goto loc_823CDFE8;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x823cb980
	sub_823CB980(ctx, base);
loc_823CDFE8:
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(r11.u32, 50, xer);
	// bge cr6,0x823ce008
	if (!cr6.lt) goto loc_823CE008;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x823cba10
	sub_823CBA10(ctx, base);
loc_823CE008:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19764(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19764);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce03c
	if (cr0.eq) goto loc_823CE03C;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x823ce09c
	if (!cr6.lt) goto loc_823CE09C;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823cbaa0
	sub_823CBAA0(ctx, base);
	// b 0x823ce09c
	goto loc_823CE09C;
loc_823CE03C:
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x823ce05c
	if (!cr6.lt) goto loc_823CE05C;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823cbb30
	sub_823CBB30(ctx, base);
loc_823CE05C:
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x823ce07c
	if (!cr6.lt) goto loc_823CE07C;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823cbbc0
	sub_823CBBC0(ctx, base);
loc_823CE07C:
	// addi r3,r31,228
	ctx.r3.s64 = r31.s64 + 228;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x823ce09c
	if (!cr6.lt) goto loc_823CE09C;
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823cbc50
	sub_823CBC50(ctx, base);
loc_823CE09C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823CE0A4"))) PPC_WEAK_FUNC(sub_823CE0A4);
PPC_FUNC_IMPL(__imp__sub_823CE0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE0A8"))) PPC_WEAK_FUNC(sub_823CE0A8);
PPC_FUNC_IMPL(__imp__sub_823CE0A8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,19764(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19764);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce100
	if (cr0.eq) goto loc_823CE100;
	// rlwinm r10,r6,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r11,r6,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	// rlwimi r5,r4,4,24,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF0F);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r10,r6,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// rlwimi r11,r5,9,15,22
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 9) & 0x1FE00) | (r11.u64 & 0xFFFFFFFFFFFE01FF);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// addi r3,r3,192
	ctx.r3.s64 = ctx.r3.s64 + 192;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823cdde8
	sub_823CDDE8(ctx, base);
	// b 0x823ce120
	goto loc_823CE120;
loc_823CE100:
	// rlwimi r4,r5,4,24,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0xF0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF0F);
	// addi r5,r3,4
	ctx.r5.s64 = ctx.r3.s64 + 4;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r11,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x823cdf38
	sub_823CDF38(ctx, base);
loc_823CE120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CE130"))) PPC_WEAK_FUNC(sub_823CE130);
PPC_FUNC_IMPL(__imp__sub_823CE130) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19764(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19764);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce6b0
	if (cr0.eq) goto loc_823CE6B0;
	// bl 0x823cb1f8
	sub_823CB1F8(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce194
	if (cr0.eq) goto loc_823CE194;
	// li r10,4096
	ctx.r10.s64 = 4096;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// b 0x823ce250
	goto loc_823CE250;
loc_823CE194:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r9,r11,-8
	ctx.r9.s64 = r11.s64 + -8;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,0,17,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,24576
	cr6.compare<uint32_t>(r11.u32, 24576, xer);
	// bge cr6,0x823ce1c4
	if (!cr6.lt) goto loc_823CE1C4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823ce260
	if (cr6.eq) goto loc_823CE260;
loc_823CE1C4:
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x823ce6b0
	if (cr6.lt) goto loc_823CE6B0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// beq 0x823ce204
	if (cr0.eq) goto loc_823CE204;
	// lis r7,-32249
	ctx.r7.s64 = -2113470464;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r7,r7,-19100
	ctx.r7.s64 = ctx.r7.s64 + -19100;
	// lbzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// b 0x823ce214
	goto loc_823CE214;
loc_823CE204:
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// addi r8,r8,-19100
	ctx.r8.s64 = ctx.r8.s64 + -19100;
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
loc_823CE214:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r11,r10,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// ld r11,0(r9)
	r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r8,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r10,r9,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// andi. r11,r10,36863
	r11.u64 = ctx.r10.u64 & 36863;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_823CE250:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cdd70
	sub_823CDD70(ctx, base);
loc_823CE260:
	// li r27,0
	r27.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r27,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r27.u32);
	// blt cr6,0x823ce6b0
	if (cr6.lt) goto loc_823CE6B0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi. r24,r29,24
	r24.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r21,1
	r21.s64 = 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r25,r11,-8
	r25.s64 = r11.s64 + -8;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwinm r23,r11,20,29,31
	r23.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// addi r11,r10,4096
	r11.s64 = ctx.r10.s64 + 4096;
	// rlwimi r11,r9,0,20,16
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFF8FFF) | (r11.u64 & 0x7000);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// beq 0x823ce2c8
	if (cr0.eq) goto loc_823CE2C8;
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r21,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r21.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,16,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r10.u64 & 0xFFF0000);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
loc_823CE2C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19764(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19764);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce66c
	if (cr0.eq) goto loc_823CE66C;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r26,r27
	r26.u64 = r27.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r27.u64);
	// std r27,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r27.u64);
	// std r27,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r27.u64);
	// std r27,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r27.u64);
	// std r27,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r27.u64);
	// std r27,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r27.u64);
	// std r27,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r27.u64);
	// beq cr6,0x823ce518
	if (cr6.eq) goto loc_823CE518;
	// lwz r29,0(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lbz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// clrlwi r11,r29,27
	r11.u64 = r29.u32 & 0x1F;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823ce358
	if (cr0.eq) goto loc_823CE358;
	// addi r10,r11,-24
	ctx.r10.s64 = r11.s64 + -24;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// ble cr6,0x823ce354
	if (!cr6.gt) goto loc_823CE354;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ce358
	if (!cr6.eq) goto loc_823CE358;
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce358
	if (cr0.eq) goto loc_823CE358;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ce358
	if (!cr0.eq) goto loc_823CE358;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ce358
	if (!cr0.eq) goto loc_823CE358;
loc_823CE354:
	// mr r26,r21
	r26.u64 = r21.u64;
loc_823CE358:
	// rlwinm. r11,r29,0,13,13
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce384
	if (cr0.eq) goto loc_823CE384;
	// rlwinm r28,r29,20,26,31
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0x3F;
	// li r30,64
	r30.s64 = 64;
loc_823CE368:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823cb250
	sub_823CB250(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x823ce368
	if (!cr0.eq) goto loc_823CE368;
	// b 0x823ce394
	goto loc_823CE394;
loc_823CE384:
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// rlwinm r4,r29,20,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0x3F;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823cb250
	sub_823CB250(ctx, base);
loc_823CE394:
	// rlwinm. r11,r29,0,20,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r28,r20,24
	r28.u64 = r20.u32 & 0xFF;
	// beq 0x823ce3c8
	if (cr0.eq) goto loc_823CE3C8;
	// mr r30,r27
	r30.u64 = r27.u64;
loc_823CE3A4:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823cb328
	sub_823CB328(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(r30.u32, 64, xer);
	// blt cr6,0x823ce3a4
	if (cr6.lt) goto loc_823CE3A4;
	// b 0x823ce3dc
	goto loc_823CE3DC;
loc_823CE3C8:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// rlwinm r4,r29,27,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x3F;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x823cb328
	sub_823CB328(ctx, base);
loc_823CE3DC:
	// addi r30,r31,116
	r30.s64 = r31.s64 + 116;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r29,r31,148
	r29.s64 = r31.s64 + 148;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_823CE400:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823ce400
	if (!cr0.eq) goto loc_823CE400;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823CE424:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blt cr6,0x823ce424
	if (cr6.lt) goto loc_823CE424;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823c9888
	sub_823C9888(ctx, base);
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// blt cr6,0x823ce524
	if (cr6.lt) goto loc_823CE524;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// beq cr6,0x823ce4a4
	if (cr6.eq) goto loc_823CE4A4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r10,8
	ctx.r10.s64 = 8;
loc_823CE480:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823ce480
	if (!cr0.eq) goto loc_823CE480;
	// b 0x823ce4d8
	goto loc_823CE4D8;
loc_823CE4A4:
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
loc_823CE4B8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823ce4b8
	if (!cr0.eq) goto loc_823CE4B8;
loc_823CE4D8:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823CE4DC:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blt cr6,0x823ce4dc
	if (cr6.lt) goto loc_823CE4DC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823c9888
	sub_823C9888(ctx, base);
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// bge cr6,0x823ce528
	if (!cr6.lt) goto loc_823CE528;
	// b 0x823ce524
	goto loc_823CE524;
loc_823CE518:
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823ce528
	if (cr0.eq) goto loc_823CE528;
loc_823CE524:
	// mr r26,r21
	r26.u64 = r21.u64;
loc_823CE528:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce594
	if (cr0.eq) goto loc_823CE594;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r23,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,16,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r10.u64 & 0xFFF0000);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// stb r27,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r27.u8);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823CE594:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x823ce66c
	if (cr6.eq) goto loc_823CE66C;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// blt cr6,0x823ce5b4
	if (cr6.lt) goto loc_823CE5B4;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// ble cr6,0x823ce5b8
	if (!cr6.gt) goto loc_823CE5B8;
loc_823CE5B4:
	// stb r21,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r21.u8);
loc_823CE5B8:
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r10,8
	ctx.r10.s64 = 8;
	// beq 0x823ce61c
	if (cr0.eq) goto loc_823CE61C;
	// addi r11,r31,52
	r11.s64 = r31.s64 + 52;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_823CE5D0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823ce5d0
	if (!cr0.eq) goto loc_823CE5D0;
	// addi r11,r31,116
	r11.s64 = r31.s64 + 116;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_823CE5FC:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823ce5fc
	if (!cr0.eq) goto loc_823CE5FC;
	// b 0x823ce66c
	goto loc_823CE66C;
loc_823CE61C:
	// addi r11,r31,84
	r11.s64 = r31.s64 + 84;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_823CE624:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823ce624
	if (!cr0.eq) goto loc_823CE624;
	// addi r11,r31,148
	r11.s64 = r31.s64 + 148;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_823CE650:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823ce650
	if (!cr0.eq) goto loc_823CE650;
loc_823CE66C:
	// clrlwi. r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce6b0
	if (cr0.eq) goto loc_823CE6B0;
	// cmplwi cr6,r23,4
	cr6.compare<uint32_t>(r23.u32, 4, xer);
	// bge cr6,0x823ce698
	if (!cr6.lt) goto loc_823CE698;
	// slw r10,r21,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (r21.u32 << (r23.u8 & 0x3F));
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r10,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xF0000000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,4,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFFF0000000);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// b 0x823ce6b0
	goto loc_823CE6B0;
loc_823CE698:
	// addi r11,r23,-4
	r11.s64 = r23.s64 + -4;
	// slw r10,r21,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (r21.u32 << (r11.u8 & 0x3F));
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r10.u32);
loc_823CE6B0:
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_823CE6B8"))) PPC_WEAK_FUNC(sub_823CE6B8);
PPC_FUNC_IMPL(__imp__sub_823CE6B8) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,19764(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19764);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823ce704
	if (!cr0.eq) goto loc_823CE704;
	// rlwimi r4,r5,1,27,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0x1E) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFE1);
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r10,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// addi r3,r11,204
	ctx.r3.s64 = r11.s64 + 204;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x823cde58
	sub_823CDE58(ctx, base);
loc_823CE704:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CE714"))) PPC_WEAK_FUNC(sub_823CE714);
PPC_FUNC_IMPL(__imp__sub_823CE714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE718"))) PPC_WEAK_FUNC(sub_823CE718);
PPC_FUNC_IMPL(__imp__sub_823CE718) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r25,64
	r25.s64 = 64;
	// addi r27,r30,304
	r27.s64 = r30.s64 + 304;
	// addi r26,r30,10176
	r26.s64 = r30.s64 + 10176;
	// li r28,0
	r28.s64 = 0;
	// li r24,1
	r24.s64 = 1;
loc_823CE73C:
	// subfic r29,r28,63
	xer.ca = r28.u32 <= 63;
	r29.s64 = 63 - r28.s64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r29,2,0,29
	r31.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823cb568
	sub_823CB568(ctx, base);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cb568
	sub_823CB568(ctx, base);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or. r11,r5,r4
	r11.u64 = ctx.r5.u64 | ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce7f8
	if (cr0.eq) goto loc_823CE7F8;
	// and. r3,r5,r4
	ctx.r3.u64 = ctx.r5.u64 & ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ce7ec
	if (cr0.eq) goto loc_823CE7EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823CE794:
	// slw r11,r24,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r24.u32 << (ctx.r6.u8 & 0x3F));
	// and. r11,r11,r3
	r11.u64 = r11.u64 & ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ce7dc
	if (cr0.eq) goto loc_823CE7DC;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
loc_823CE7B4:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r31,0(r10)
	r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - r31.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823ce7d4
	if (!cr0.eq) goto loc_823CE7D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x823ce7b4
	if (!cr6.eq) goto loc_823CE7B4;
loc_823CE7D4:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823ce7ec
	if (!cr0.eq) goto loc_823CE7EC;
loc_823CE7DC:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// blt cr6,0x823ce794
	if (cr6.lt) goto loc_823CE794;
loc_823CE7EC:
	// andc. r11,r5,r4
	r11.u64 = ctx.r5.u64 & ~ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ce804
	if (!cr0.eq) goto loc_823CE804;
	// mr r25,r29
	r25.u64 = r29.u64;
loc_823CE7F8:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r28,64
	cr6.compare<uint32_t>(r28.u32, 64, xer);
	// blt cr6,0x823ce73c
	if (cr6.lt) goto loc_823CE73C;
loc_823CE804:
	// addi r31,r30,19812
	r31.s64 = r30.s64 + 19812;
	// stw r25,19808(r30)
	PPC_STORE_U32(r30.u32 + 19808, r25.u32);
	// stw r24,19804(r30)
	PPC_STORE_U32(r30.u32 + 19804, r24.u32);
	// subfic r29,r25,64
	xer.ca = r25.u32 <= 64;
	r29.s64 = 64 - r25.s64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x823ce830
	if (!cr6.gt) goto loc_823CE830;
	// addi r5,r30,19772
	ctx.r5.s64 = r30.s64 + 19772;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cbce0
	sub_823CBCE0(ctx, base);
loc_823CE830:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823CE83C"))) PPC_WEAK_FUNC(sub_823CE83C);
PPC_FUNC_IMPL(__imp__sub_823CE83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE840"))) PPC_WEAK_FUNC(sub_823CE840);
PPC_FUNC_IMPL(__imp__sub_823CE840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823cc508
	sub_823CC508(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CE854"))) PPC_WEAK_FUNC(sub_823CE854);
PPC_FUNC_IMPL(__imp__sub_823CE854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE858"))) PPC_WEAK_FUNC(sub_823CE858);
PPC_FUNC_IMPL(__imp__sub_823CE858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823ce0a8
	sub_823CE0A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CE86C"))) PPC_WEAK_FUNC(sub_823CE86C);
PPC_FUNC_IMPL(__imp__sub_823CE86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE870"))) PPC_WEAK_FUNC(sub_823CE870);
PPC_FUNC_IMPL(__imp__sub_823CE870) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ce6b8
	sub_823CE6B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CE874"))) PPC_WEAK_FUNC(sub_823CE874);
PPC_FUNC_IMPL(__imp__sub_823CE874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE878"))) PPC_WEAK_FUNC(sub_823CE878);
PPC_FUNC_IMPL(__imp__sub_823CE878) {
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
	// lwz r11,19760(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 19760);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,19760(r31)
	PPC_STORE_U32(r31.u32 + 19760, r30.u32);
	// bne 0x823ce8b0
	if (!cr0.eq) goto loc_823CE8B0;
	// bl 0x823cda18
	sub_823CDA18(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823CE8B0:
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

__attribute__((alias("__imp__sub_823CE8CC"))) PPC_WEAK_FUNC(sub_823CE8CC);
PPC_FUNC_IMPL(__imp__sub_823CE8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE8D0"))) PPC_WEAK_FUNC(sub_823CE8D0);
PPC_FUNC_IMPL(__imp__sub_823CE8D0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x823cd0b8
	sub_823CD0B8(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// stw r28,19764(r31)
	PPC_STORE_U32(r31.u32 + 19764, r28.u32);
	// li r29,2
	r29.s64 = 2;
loc_823CE8F4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cdfa8
	sub_823CDFA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,288
	ctx.r3.s64 = r30.s64 + 288;
	// bl 0x823ca908
	sub_823CA908(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,9872
	r30.s64 = r30.s64 + 9872;
	// bne 0x823ce8f4
	if (!cr0.eq) goto loc_823CE8F4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,19784(r31)
	PPC_STORE_U32(r31.u32 + 19784, r11.u32);
	// lwz r10,19764(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 19764);
	// stw r11,19796(r31)
	PPC_STORE_U32(r31.u32 + 19796, r11.u32);
	// rlwinm r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// stw r11,19768(r31)
	PPC_STORE_U32(r31.u32 + 19768, r11.u32);
	// subfic r11,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	r11.s64 = 0 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823CE944"))) PPC_WEAK_FUNC(sub_823CE944);
PPC_FUNC_IMPL(__imp__sub_823CE944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CE948"))) PPC_WEAK_FUNC(sub_823CE948);
PPC_FUNC_IMPL(__imp__sub_823CE948) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r31,r30,19780
	r31.s64 = r30.s64 + 19780;
	// addi r11,r28,3
	r11.s64 = r28.s64 + 3;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// rlwinm r29,r11,30,2,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x823ce988
	if (!cr6.gt) goto loc_823CE988;
	// addi r5,r30,19772
	ctx.r5.s64 = r30.s64 + 19772;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cbce0
	sub_823CBCE0(ctx, base);
loc_823CE988:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,19772(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19772);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x823ce9a8
	if (cr6.lt) goto loc_823CE9A8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_823CE9A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823CE9B0"))) PPC_WEAK_FUNC(sub_823CE9B0);
PPC_FUNC_IMPL(__imp__sub_823CE9B0) {
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
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,-19084
	ctx.r4.s64 = r11.s64 + -19084;
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823ce9e8
	if (!cr0.eq) goto loc_823CE9E8;
	// addi r26,r26,10
	r26.s64 = r26.s64 + 10;
loc_823CE9E8:
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823CE9F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823ce9f0
	if (!cr6.eq) goto loc_823CE9F0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r27,0
	r27.s64 = 0;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// rotlwi r29,r10,0
	r29.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r31,r28,19792
	r31.s64 = r28.s64 + 19792;
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// addi r11,r29,3
	r11.s64 = r29.s64 + 3;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r30,r11,2
	r30.s64 = r11.s64 + 2;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823cea4c
	if (!cr6.gt) goto loc_823CEA4C;
	// addi r5,r28,19772
	ctx.r5.s64 = r28.s64 + 19772;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cbce0
	sub_823CBCE0(ctx, base);
loc_823CEA4C:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,19772(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 19772);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x823cea84
	if (cr6.lt) goto loc_823CEA84;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r27,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, r27.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_823CEA84:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823CEA8C"))) PPC_WEAK_FUNC(sub_823CEA8C);
PPC_FUNC_IMPL(__imp__sub_823CEA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEA90"))) PPC_WEAK_FUNC(sub_823CEA90);
PPC_FUNC_IMPL(__imp__sub_823CEA90) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,19772(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19772);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r11
	r31.u64 = r11.u64;
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// blt cr6,0x823ceafc
	if (cr6.lt) goto loc_823CEAFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cdac8
	sub_823CDAC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823ceafc
	if (cr0.lt) goto loc_823CEAFC;
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823CEAFC:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823ceb08
	if (cr6.eq) goto loc_823CEB08;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_823CEB08:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823ceb14
	if (cr6.eq) goto loc_823CEB14;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
loc_823CEB14:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823CEB1C"))) PPC_WEAK_FUNC(sub_823CEB1C);
PPC_FUNC_IMPL(__imp__sub_823CEB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEB20"))) PPC_WEAK_FUNC(sub_823CEB20);
PPC_FUNC_IMPL(__imp__sub_823CEB20) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r3,19772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19772);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823cebf0
	if (cr0.lt) goto loc_823CEBF0;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x823cdac8
	sub_823CDAC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,19772(r31)
	PPC_STORE_U32(r31.u32 + 19772, ctx.r3.u32);
	// blt 0x823cebf0
	if (cr0.lt) goto loc_823CEBF0;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,112(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r27,r5,r30
	r27.u64 = ctx.r5.u64 + r30.u64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// ble cr6,0x823cebac
	if (!cr6.gt) goto loc_823CEBAC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823cebf0
	goto loc_823CEBF0;
loc_823CEBAC:
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c87a0
	sub_823C87A0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x823c87a0
	sub_823C87A0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cdac8
	sub_823CDAC8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,19772(r31)
	PPC_STORE_U32(r31.u32 + 19772, ctx.r3.u32);
	// blt 0x823cebec
	if (cr0.lt) goto loc_823CEBEC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823cebec
	if (cr6.eq) goto loc_823CEBEC;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
loc_823CEBEC:
	// lwz r3,19772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19772);
loc_823CEBF0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823CEBF8"))) PPC_WEAK_FUNC(sub_823CEBF8);
PPC_FUNC_IMPL(__imp__sub_823CEBF8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ce130
	sub_823CE130(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823cdcf0
	sub_823CDCF0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_823CEC58"))) PPC_WEAK_FUNC(sub_823CEC58);
PPC_FUNC_IMPL(__imp__sub_823CEC58) {
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
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ce130
	sub_823CE130(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823cdcf0
	sub_823CDCF0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_823CECBC"))) PPC_WEAK_FUNC(sub_823CECBC);
PPC_FUNC_IMPL(__imp__sub_823CECBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CECC0"))) PPC_WEAK_FUNC(sub_823CECC0);
PPC_FUNC_IMPL(__imp__sub_823CECC0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ce130
	sub_823CE130(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// addi r27,r31,4
	r27.s64 = r31.s64 + 4;
	// rlwimi r11,r28,6,25,25
	r11.u64 = (__builtin_rotateleft32(r28.u32, 6) & 0x40) | (r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,216
	ctx.r3.s64 = r31.s64 + 216;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// andi. r11,r11,79
	r11.u64 = r11.u64 & 79;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwimi r30,r11,8,0,23
	r30.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (r30.u64 & 0xFFFFFFFF000000FF);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwimi r11,r30,8,0,19
	r11.u64 = (__builtin_rotateleft32(r30.u32, 8) & 0xFFFFF000) | (r11.u64 & 0xFFFFFFFF00000FFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823cdec8
	sub_823CDEC8(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823cdcf0
	sub_823CDCF0(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823CED44"))) PPC_WEAK_FUNC(sub_823CED44);
PPC_FUNC_IMPL(__imp__sub_823CED44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CED48"))) PPC_WEAK_FUNC(sub_823CED48);
PPC_FUNC_IMPL(__imp__sub_823CED48) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823ce130
	sub_823CE130(ctx, base);
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x823cdcf0
	sub_823CDCF0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19764(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19764);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823cedd4
	if (!cr0.eq) goto loc_823CEDD4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823c8880
	sub_823C8880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823cedd4
	if (cr0.eq) goto loc_823CEDD4;
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lbz r10,244(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 244);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,244(r11)
	PPC_STORE_U8(r11.u32 + 244, ctx.r10.u8);
loc_823CEDD4:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_823CEDF4"))) PPC_WEAK_FUNC(sub_823CEDF4);
PPC_FUNC_IMPL(__imp__sub_823CEDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEDF8"))) PPC_WEAK_FUNC(sub_823CEDF8);
PPC_FUNC_IMPL(__imp__sub_823CEDF8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19764(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19764);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cee74
	if (cr0.eq) goto loc_823CEE74;
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823cee74
	if (cr0.eq) goto loc_823CEE74;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r9,25,3,7
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 25) & 0x1F000000) | (r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823ced48
	sub_823CED48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cab90
	sub_823CAB90(ctx, base);
loc_823CEE74:
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

__attribute__((alias("__imp__sub_823CEE88"))) PPC_WEAK_FUNC(sub_823CEE88);
PPC_FUNC_IMPL(__imp__sub_823CEE88) {
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
	// lwz r11,19764(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 19764);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ceeb0
	if (cr0.eq) goto loc_823CEEB0;
	// bl 0x823ce718
	sub_823CE718(ctx, base);
	// b 0x823ceec4
	goto loc_823CEEC4;
loc_823CEEB0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x823cc508
	sub_823CC508(ctx, base);
loc_823CEEC4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,19776(r31)
	PPC_STORE_U32(r31.u32 + 19776, r11.u32);
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

__attribute__((alias("__imp__sub_823CEEE0"))) PPC_WEAK_FUNC(sub_823CEEE0);
PPC_FUNC_IMPL(__imp__sub_823CEEE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ce878
	sub_823CE878(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEEE4"))) PPC_WEAK_FUNC(sub_823CEEE4);
PPC_FUNC_IMPL(__imp__sub_823CEEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEEE8"))) PPC_WEAK_FUNC(sub_823CEEE8);
PPC_FUNC_IMPL(__imp__sub_823CEEE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ce8d0
	sub_823CE8D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEEEC"))) PPC_WEAK_FUNC(sub_823CEEEC);
PPC_FUNC_IMPL(__imp__sub_823CEEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEEF0"))) PPC_WEAK_FUNC(sub_823CEEF0);
PPC_FUNC_IMPL(__imp__sub_823CEEF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ce948
	sub_823CE948(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEEF4"))) PPC_WEAK_FUNC(sub_823CEEF4);
PPC_FUNC_IMPL(__imp__sub_823CEEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEEF8"))) PPC_WEAK_FUNC(sub_823CEEF8);
PPC_FUNC_IMPL(__imp__sub_823CEEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823cebf8
	sub_823CEBF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEF0C"))) PPC_WEAK_FUNC(sub_823CEF0C);
PPC_FUNC_IMPL(__imp__sub_823CEF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEF10"))) PPC_WEAK_FUNC(sub_823CEF10);
PPC_FUNC_IMPL(__imp__sub_823CEF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823cec58
	sub_823CEC58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEF24"))) PPC_WEAK_FUNC(sub_823CEF24);
PPC_FUNC_IMPL(__imp__sub_823CEF24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEF28"))) PPC_WEAK_FUNC(sub_823CEF28);
PPC_FUNC_IMPL(__imp__sub_823CEF28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823cecc0
	sub_823CECC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEF3C"))) PPC_WEAK_FUNC(sub_823CEF3C);
PPC_FUNC_IMPL(__imp__sub_823CEF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEF40"))) PPC_WEAK_FUNC(sub_823CEF40);
PPC_FUNC_IMPL(__imp__sub_823CEF40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823ced48
	sub_823CED48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEF54"))) PPC_WEAK_FUNC(sub_823CEF54);
PPC_FUNC_IMPL(__imp__sub_823CEF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEF58"))) PPC_WEAK_FUNC(sub_823CEF58);
PPC_FUNC_IMPL(__imp__sub_823CEF58) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ce9b0
	sub_823CE9B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEF5C"))) PPC_WEAK_FUNC(sub_823CEF5C);
PPC_FUNC_IMPL(__imp__sub_823CEF5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEF60"))) PPC_WEAK_FUNC(sub_823CEF60);
PPC_FUNC_IMPL(__imp__sub_823CEF60) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cee88
	sub_823CEE88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEF64"))) PPC_WEAK_FUNC(sub_823CEF64);
PPC_FUNC_IMPL(__imp__sub_823CEF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEF68"))) PPC_WEAK_FUNC(sub_823CEF68);
PPC_FUNC_IMPL(__imp__sub_823CEF68) {
	PPC_FUNC_PROLOGUE();
	// b 0x823ceb20
	sub_823CEB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CEF6C"))) PPC_WEAK_FUNC(sub_823CEF6C);
PPC_FUNC_IMPL(__imp__sub_823CEF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CEF70"))) PPC_WEAK_FUNC(sub_823CEF70);
PPC_FUNC_IMPL(__imp__sub_823CEF70) {
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
	// lwz r11,19772(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19772);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x823cef90
	if (!cr6.lt) goto loc_823CEF90;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823cefa8
	goto loc_823CEFA8;
loc_823CEF90:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x823cea90
	sub_823CEA90(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_823CEFA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823CEFB8"))) PPC_WEAK_FUNC(sub_823CEFB8);
PPC_FUNC_IMPL(__imp__sub_823CEFB8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r26,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r26.u32);
	// lwz r11,19764(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19764);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cf0b8
	if (cr0.eq) goto loc_823CF0B8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// rlwinm r27,r10,20,28,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r28,r11,r27
	r28.u64 = r27.u8 & 0x20 ? 0 : (r11.u32 << (r27.u8 & 0x3F));
	// andi. r11,r28,28664
	r11.u64 = r28.u64 & 28664;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823cf04c
	if (cr0.eq) goto loc_823CF04C;
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x823cedf8
	sub_823CEDF8(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf. r10,r29,r11
	ctx.r10.s64 = r11.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823cf04c
	if (cr0.eq) goto loc_823CF04C;
	// andi. r11,r28,24702
	r11.u64 = r28.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823cf04c
	if (cr0.eq) goto loc_823CF04C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_823CF04C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19764(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19764);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cf0b8
	if (cr0.eq) goto loc_823CF0B8;
	// cmplwi cr6,r27,12
	cr6.compare<uint32_t>(r27.u32, 12, xer);
	// bne cr6,0x823cf0b8
	if (!cr6.eq) goto loc_823CF0B8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823cf0b8
	if (!cr0.eq) goto loc_823CF0B8;
	// li r5,32
	ctx.r5.s64 = 32;
	// stb r26,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r26.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_823CF0B8:
	// addi r5,r31,4
	ctx.r5.s64 = r31.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x823cdd70
	sub_823CDD70(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823CF0D8"))) PPC_WEAK_FUNC(sub_823CF0D8);
PPC_FUNC_IMPL(__imp__sub_823CF0D8) {
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
	// bl 0x823cedf8
	sub_823CEDF8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19764(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19764);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cf150
	if (cr0.eq) goto loc_823CF150;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823cf150
	if (cr0.eq) goto loc_823CF150;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addic. r11,r11,-8
	xer.ca = r11.u32 > 7;
	r11.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cf150
	if (cr0.eq) goto loc_823CF150;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823cf150
	if (cr0.eq) goto loc_823CF150;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_823CF150:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
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

__attribute__((alias("__imp__sub_823CF168"))) PPC_WEAK_FUNC(sub_823CF168);
PPC_FUNC_IMPL(__imp__sub_823CF168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823cefb8
	sub_823CEFB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF17C"))) PPC_WEAK_FUNC(sub_823CF17C);
PPC_FUNC_IMPL(__imp__sub_823CF17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF180"))) PPC_WEAK_FUNC(sub_823CF180);
PPC_FUNC_IMPL(__imp__sub_823CF180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9872
	r11.s64 = r11.s64 * 9872;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x823cf0d8
	sub_823CF0D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF194"))) PPC_WEAK_FUNC(sub_823CF194);
PPC_FUNC_IMPL(__imp__sub_823CF194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF198"))) PPC_WEAK_FUNC(sub_823CF198);
PPC_FUNC_IMPL(__imp__sub_823CF198) {
	PPC_FUNC_PROLOGUE();
	// b 0x823cef70
	sub_823CEF70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF19C"))) PPC_WEAK_FUNC(sub_823CF19C);
PPC_FUNC_IMPL(__imp__sub_823CF19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF1A0"))) PPC_WEAK_FUNC(sub_823CF1A0);
PPC_FUNC_IMPL(__imp__sub_823CF1A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r31,16560
	r30.s64 = r31.s64 + 16560;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e513c
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,16396(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16396);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16396(r31)
	PPC_STORE_U32(r31.u32 + 16396, r11.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,16400(r31)
	PPC_STORE_U32(r31.u32 + 16400, r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,16552(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16552);
	// lwz r10,16548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16548);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823cf25c
	if (cr6.eq) goto loc_823CF25C;
loc_823CF1E8:
	// lwz r11,16548(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16548);
	// lwz r10,16396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16396);
	// rlwinm r11,r11,3,25,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x78;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r8,16424(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16424);
	// lwz r11,16420(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16420);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823cf25c
	if (cr6.gt) goto loc_823CF25C;
	// lwz r10,16416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16416);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16416(r31)
	PPC_STORE_U32(r31.u32 + 16416, ctx.r10.u32);
	// bne cr6,0x823cf228
	if (!cr6.eq) goto loc_823CF228;
	// lwz r11,10772(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10772);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x823cf238
	goto loc_823CF238;
loc_823CF228:
	// lis r10,32712
	ctx.r10.s64 = 2143813632;
	// stw r11,24848(r10)
	PPC_MM_STORE_U32(ctx.r10.u32 + 24848, r11.u32);
	// eieio 
	// sync 
loc_823CF238:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r11,16548(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16548);
	// stw r10,21540(r31)
	PPC_STORE_U32(r31.u32 + 21540, ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16548(r31)
	PPC_STORE_U32(r31.u32 + 16548, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,16552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16552);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823cf1e8
	if (!cr6.eq) goto loc_823CF1E8;
loc_823CF25C:
	// lwz r11,16392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16392);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823cf288
	if (cr0.eq) goto loc_823CF288;
	// lwz r10,16416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16416);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r10,16396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16396);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823CF288:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e512c
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823CF29C"))) PPC_WEAK_FUNC(sub_823CF29C);
PPC_FUNC_IMPL(__imp__sub_823CF29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF2A0"))) PPC_WEAK_FUNC(sub_823CF2A0);
PPC_FUNC_IMPL(__imp__sub_823CF2A0) {
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lis r11,10280
	r11.s64 = 673710080;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r30,r11,310
	r30.u64 = r11.u64 | 310;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x823cf2ec
	if (!cr6.eq) goto loc_823CF2EC;
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x823cf2e4
	if (!cr6.eq) goto loc_823CF2E4;
	// bl 0x823d34e0
	sub_823D34E0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823cf2f4
	goto loc_823CF2F4;
loc_823CF2E4:
	// bl 0x823d3488
	sub_823D3488(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_823CF2EC:
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bne cr6,0x823cf300
	if (!cr6.eq) goto loc_823CF300;
loc_823CF2F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d3398
	sub_823D3398(ctx, base);
	// b 0x823cf308
	goto loc_823CF308;
loc_823CF300:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d32b8
	sub_823D32B8(ctx, base);
loc_823CF308:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823CF310"))) PPC_WEAK_FUNC(sub_823CF310);
PPC_FUNC_IMPL(__imp__sub_823CF310) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r25,r31,16560
	r25.s64 = r31.s64 + 16560;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e513c
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r10,16412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16412);
	// lwz r11,21400(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21400);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r29,r30,24,28,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xF;
	// clrlwi r26,r30,24
	r26.u64 = r30.u32 & 0xFF;
	// rlwinm r27,r30,0,0,19
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,16412(r31)
	PPC_STORE_U32(r31.u32 + 16412, ctx.r10.u32);
	// mr r28,r11
	r28.u64 = r11.u64;
	// bne 0x823cf368
	if (!cr0.eq) goto loc_823CF368;
	// li r28,60
	r28.s64 = 60;
loc_823CF368:
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,16400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16400);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r30,r10,r11
	r30.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x826e4cbc
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// mulli r11,r30,100
	r11.s64 = r30.s64 * 100;
	// divwu r10,r10,r28
	ctx.r10.u32 = ctx.r10.u32 / r28.u32;
	// twllei r28,0
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// cmplwi cr6,r7,100
	cr6.compare<uint32_t>(ctx.r7.u32, 100, xer);
	// ble cr6,0x823cf3a4
	if (!cr6.gt) goto loc_823CF3A4;
	// li r7,100
	ctx.r7.s64 = 100;
loc_823CF3A4:
	// lwz r8,16404(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16404);
	// lwz r10,16396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16396);
	// add r11,r8,r29
	r11.u64 = ctx.r8.u64 + r29.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823cf3d0
	if (cr6.gt) goto loc_823CF3D0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823cf3d0
	if (cr6.eq) goto loc_823CF3D0;
	// cmplw cr6,r7,r26
	cr6.compare<uint32_t>(ctx.r7.u32, r26.u32, xer);
	// ble cr6,0x823cf3d0
	if (!cr6.gt) goto loc_823CF3D0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823CF3D0:
	// lwz r9,16388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16388);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x823cf414
	if (cr0.eq) goto loc_823CF414;
	// cntlzw r6,r27
	ctx.r6.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r5,16412(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16412);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r6,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_823CF414:
	// lwz r10,16396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16396);
	// stw r11,16404(r31)
	PPC_STORE_U32(r31.u32 + 16404, r11.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823cf454
	if (cr6.eq) goto loc_823CF454;
	// lwz r10,16412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16412);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x823cf454
	if (cr6.eq) goto loc_823CF454;
	// lwz r10,16552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16552);
	// rlwinm r10,r10,3,25,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x78;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r11,16424(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16424, r11.u32);
	// stw r27,16420(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16420, r27.u32);
	// lwz r11,16552(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16552);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16552(r31)
	PPC_STORE_U32(r31.u32 + 16552, r11.u32);
	// b 0x823cf490
	goto loc_823CF490;
loc_823CF454:
	// lwz r11,16416(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16416);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16416(r31)
	PPC_STORE_U32(r31.u32 + 16416, r11.u32);
	// beq cr6,0x823cf47c
	if (cr6.eq) goto loc_823CF47C;
	// lis r11,32712
	r11.s64 = 2143813632;
	// stw r27,24848(r11)
	PPC_MM_STORE_U32(r11.u32 + 24848, r27.u32);
	// eieio 
	// sync 
	// b 0x823cf488
	goto loc_823CF488;
loc_823CF47C:
	// lwz r11,10772(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10772);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_823CF488:
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,21540(r31)
	PPC_STORE_U32(r31.u32 + 21540, r11.u32);
loc_823CF490:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e512c
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823CF4A4"))) PPC_WEAK_FUNC(sub_823CF4A4);
PPC_FUNC_IMPL(__imp__sub_823CF4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CF4A8"))) PPC_WEAK_FUNC(sub_823CF4A8);
PPC_FUNC_IMPL(__imp__sub_823CF4A8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823d96c8
	sub_823D96C8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0018
	sub_823D0018(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823cf4ec
	if (!cr6.gt) goto loc_823CF4EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823CF4EC:
	// lis r10,-16380
	ctx.r10.s64 = -1073479680;
	// li r29,-1
	r29.s64 = -1;
	// ori r30,r10,15360
	r30.u64 = ctx.r10.u64 | 15360;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x823cf55c
	if (!cr6.eq) goto loc_823CF55C;
	// li r10,1401
	ctx.r10.s64 = 1401;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r8,19
	ctx.r8.s64 = 19;
	// li r6,1
	ctx.r6.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lwz r10,10772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10772);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r8,512
	ctx.r10.s64 = ctx.r8.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
loc_823CF55C:
	// lwz r10,13444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13444);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823cf5a4
	if (cr0.eq) goto loc_823CF5A4;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x823cf5a4
	if (cr6.eq) goto loc_823CF5A4;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x823cf59c
	if (cr6.eq) goto loc_823CF59C;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// beq cr6,0x823cf594
	if (cr6.eq) goto loc_823CF594;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x823cf5ac
	if (!cr6.eq) goto loc_823CF5AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823cf5b0
	goto loc_823CF5B0;
loc_823CF594:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x823cf5b0
	goto loc_823CF5B0;
loc_823CF59C:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x823cf5b0
	goto loc_823CF5B0;
loc_823CF5A4:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823cf5b0
	goto loc_823CF5B0;
loc_823CF5AC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823CF5B0:
	// lwz r9,11716(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 11716);
	// rlwinm r8,r10,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// rlwinm r9,r9,9,25,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0x7F;
	// addi r6,r10,-3312
	ctx.r6.s64 = ctx.r10.s64 + -3312;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// or r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 | r28.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1d30
	sub_823D1D30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x823cf62c
	if (!cr6.eq) goto loc_823CF62C;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// li r10,19
	ctx.r10.s64 = 19;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10772);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r8,512
	ctx.r10.s64 = ctx.r8.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
loc_823CF62C:
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d96c8
	sub_823D96C8(ctx, base);
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823CF650"))) PPC_WEAK_FUNC(sub_823CF650);
PPC_FUNC_IMPL(__imp__sub_823CF650) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823cf684
	if (!cr6.gt) goto loc_823CF684;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823CF684:
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// li r8,6209
	ctx.r8.s64 = 6209;
	// ori r9,r10,8448
	ctx.r9.u64 = ctx.r10.u64 | 8448;
	// lis r10,10280
	ctx.r10.s64 = 673710080;
	// li r7,-1793
	ctx.r7.s64 = -1793;
	// ori r10,r10,310
	ctx.r10.u64 = ctx.r10.u64 | 310;
	// li r6,6448
	ctx.r6.s64 = 6448;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// subf r9,r31,r10
	ctx.r9.s64 = ctx.r10.s64 - r31.s64;
	// cmpw cr6,r31,r10
	cr6.compare<int32_t>(r31.s32, ctx.r10.s32, xer);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r10,r9,3,23,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x100;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,3
	ctx.r10.s64 = 3;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// beq cr6,0x823cf6d0
	if (cr6.eq) goto loc_823CF6D0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823CF6D0:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
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

__attribute__((alias("__imp__sub_823CF6F0"))) PPC_WEAK_FUNC(sub_823CF6F0);
PPC_FUNC_IMPL(__imp__sub_823CF6F0) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,22136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22136);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cf71c
	if (cr0.eq) goto loc_823CF71C;
	// bl 0x823cf4a8
	sub_823CF4A8(ctx, base);
	// b 0x823cf768
	goto loc_823CF768;
loc_823CF71C:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823cf738
	if (!cr6.gt) goto loc_823CF738;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823CF738:
	// rlwinm r10,r30,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// li r8,6212
	ctx.r8.s64 = 6212;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r9,r30,3
	ctx.r9.u64 = r30.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x823cf650
	sub_823CF650(ctx, base);
loc_823CF768:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823CF770"))) PPC_WEAK_FUNC(sub_823CF770);
PPC_FUNC_IMPL(__imp__sub_823CF770) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// lwz r11,22136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22136);
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cf7b0
	if (cr0.eq) goto loc_823CF7B0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823cf4a8
	sub_823CF4A8(ctx, base);
loc_823CF7B0:
	// lis r11,-16380
	r11.s64 = -1073479680;
	// rlwinm. r26,r24,0,29,29
	r26.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ori r31,r11,15360
	r31.u64 = r11.u64 | 15360;
	// beq 0x823cf888
	if (cr0.eq) goto loc_823CF888;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823cf7dc
	if (!cr6.gt) goto loc_823CF7DC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823CF7DC:
	// li r10,6515
	ctx.r10.s64 = 6515;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// li r8,6500
	ctx.r8.s64 = 6500;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r5,6200
	ctx.r5.s64 = 6200;
	// li r21,0
	r21.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r19,r31
	r19.u64 = r31.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// li r20,3
	r20.s64 = 3;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r18,6515
	r18.s64 = 6515;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// li r17,0
	r17.s64 = 0;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// li r16,1
	r16.s64 = 1;
	// li r15,256
	r15.s64 = 256;
	// li r14,6226
	r14.s64 = 6226;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r21.u32);
	r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r19.u32);
	r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r20.u32);
	r11.u32 = ea;
	// stwu r18,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r18.u32);
	r11.u32 = ea;
	// stwu r17,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r17.u32);
	r11.u32 = ea;
	// stwu r16,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r16.u32);
	r11.u32 = ea;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwu r15,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r15.u32);
	r11.u32 = ea;
	// stwu r14,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r14.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// bl 0x823db560
	sub_823DB560(ctx, base);
loc_823CF888:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cf650
	sub_823CF650(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823cf8b0
	if (!cr6.gt) goto loc_823CF8B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823CF8B0:
	// rlwinm r10,r25,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 12) & 0xFFF;
	// li r8,6212
	ctx.r8.s64 = 6212;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r9,r25,3
	ctx.r9.u64 = r25.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// beq cr6,0x823cf924
	if (cr6.eq) goto loc_823CF924;
	// li r10,6200
	ctx.r10.s64 = 6200;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,6515
	ctx.r10.s64 = 6515;
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,6226
	ctx.r4.s64 = 6226;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r31,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r31.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
loc_823CF924:
	// rlwinm. r10,r24,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// beq 0x823cf940
	if (cr0.eq) goto loc_823CF940;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cf2a0
	sub_823CF2A0(ctx, base);
loc_823CF940:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823CF948"))) PPC_WEAK_FUNC(sub_823CF948);
PPC_FUNC_IMPL(__imp__sub_823CF948) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823cf4a8
	sub_823CF4A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823CF950"))) PPC_WEAK_FUNC(sub_823CF950);
PPC_FUNC_IMPL(__imp__sub_823CF950) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r4,r28,28
	ctx.r4.s64 = r28.s64 + 28;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r11,16408(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16408);
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16408(r31)
	PPC_STORE_U32(r31.u32 + 16408, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r29,132(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,13456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13456);
	// clrlwi r11,r29,26
	r11.u64 = r29.u32 & 0x3F;
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(r11.u32, 50, xer);
	// bne cr6,0x823cf9a0
	if (!cr6.eq) goto loc_823CF9A0;
	// li r11,3
	r11.s64 = 3;
	// b 0x823cf9ac
	goto loc_823CF9AC;
loc_823CF9A0:
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x823cf9b4
	if (!cr6.eq) goto loc_823CF9B4;
	// li r11,27
	r11.s64 = 27;
loc_823CF9AC:
	// rlwimi r29,r11,1,26,31
	r29.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x3F) | (r29.u64 & 0xFFFFFFFFFFFFFFC0);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r29.u32);
loc_823CF9B4:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r30,r10,15,17,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7FFF;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r31,14692
	ctx.r3.s64 = r31.s64 + 14692;
	// rlwimi r11,r30,0,19,30
	r11.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0x1FFE) | (r11.u64 & 0xFFFFFFFFFFFFE001);
	// rlwimi r9,r10,25,22,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x3FC) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC03);
	// rlwimi r30,r11,0,0,30
	r30.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFE) | (r30.u64 & 0xFFFFFFFF00000001);
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r9,13460(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13460);
	// rlwinm r6,r29,0,0,19
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFF000;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r11,r30,2,30,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x2;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r7,21472(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 21472);
	// clrlwi r8,r10,19
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + r11.u64;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// clrlwi r6,r29,26
	ctx.r6.u64 = r29.u32 & 0x3F;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r24,0
	r24.s64 = 0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r29,r24
	r29.u64 = r24.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// beq cr6,0x823cfaa0
	if (cr6.eq) goto loc_823CFAA0;
	// lwz r10,21464(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 21464);
	// lwz r11,21468(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21468);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bge cr6,0x823cfaa0
	if (!cr6.lt) goto loc_823CFAA0;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r24.u32);
	// lwz r11,21468(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21468);
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r24,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r24.u32);
	// lwz r11,21468(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21468);
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823d95f8
	sub_823D95F8(ctx, base);
	// li r29,1
	r29.s64 = 1;
loc_823CFAA0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823cfae0
	if (cr6.eq) goto loc_823CFAE0;
	// mr r11,r26
	r11.u64 = r26.u64;
	// addi r10,r31,13488
	ctx.r10.s64 = r31.s64 + 13488;
	// addi r9,r11,28
	ctx.r9.s64 = r11.s64 + 28;
loc_823CFAB4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823cfad4
	if (!cr0.eq) goto loc_823CFAD4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x823cfab4
	if (!cr6.eq) goto loc_823CFAB4;
loc_823CFAD4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r27,1
	r27.s64 = 1;
	// bne 0x823cfae4
	if (!cr0.eq) goto loc_823CFAE4;
loc_823CFAE0:
	// mr r27,r24
	r27.u64 = r24.u64;
loc_823CFAE4:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17964(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17964);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823cfb10
	if (cr6.eq) goto loc_823CFB10;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823cfb0c
	if (!cr6.gt) goto loc_823CFB0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823CFB0C:
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_823CFB10:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x823cfb24
	if (cr6.eq) goto loc_823CFB24;
	// lwz r11,22120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22120);
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r11,22120(r31)
	PPC_STORE_U32(r31.u32 + 22120, r11.u32);
loc_823CFB24:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dd670
	sub_823DD670(ctx, base);
	// lwz r11,21380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21380);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823cfb50
	if (cr6.eq) goto loc_823CFB50;
	// li r5,148
	ctx.r5.s64 = 148;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// b 0x823cfba8
	goto loc_823CFBA8;
loc_823CFB50:
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// bl 0x826e516c
	__imp__VdGetSystemCommandBuffer(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d24b8
	sub_823D24B8(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,10768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e515c
	__imp__VdSwap(ctx, base);
	// addi r11,r30,256
	r11.s64 = r30.s64 + 256;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_823CFBA8:
	// lwz r11,212(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r11,21512(r31)
	PPC_STORE_U32(r31.u32 + 21512, r11.u32);
	// beq cr6,0x823cfbe8
	if (cr6.eq) goto loc_823CFBE8;
	// lwz r11,21468(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21468);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823d95f8
	sub_823D95F8(ctx, base);
	// lwz r11,21468(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21468);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,21468(r31)
	PPC_STORE_U32(r31.u32 + 21468, r11.u32);
loc_823CFBE8:
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823cfbf8
	if (cr6.eq) goto loc_823CFBF8;
	// stw r11,22132(r31)
	PPC_STORE_U32(r31.u32 + 22132, r11.u32);
loc_823CFBF8:
	// lwz r29,16556(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 16556);
	// stw r24,16556(r31)
	PPC_STORE_U32(r31.u32 + 16556, r24.u32);
	// rlwinm. r11,r29,0,28,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cfc18
	if (cr0.eq) goto loc_823CFC18;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,13392
	ctx.r4.s64 = r31.s64 + 13392;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7db0
	sub_823D7DB0(ctx, base);
loc_823CFC18:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x823cfc3c
	if (cr6.eq) goto loc_823CFC3C;
	// addi r3,r31,13488
	ctx.r3.s64 = r31.s64 + 13488;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823db7b0
	sub_823DB7B0(ctx, base);
loc_823CFC3C:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// lwz r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r26,r11,r10
	r26.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x823cfd28
	if (cr6.eq) goto loc_823CFD28;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bne cr6,0x823cfd28
	if (!cr6.eq) goto loc_823CFD28;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r3,r31,13516
	ctx.r3.s64 = r31.s64 + 13516;
	// mr r27,r24
	r27.u64 = r24.u64;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r28,10280
	r28.s64 = 673710080;
	// bne cr6,0x823cfc90
	if (!cr6.eq) goto loc_823CFC90;
	// ori r28,r28,310
	r28.u64 = r28.u64 | 310;
	// b 0x823cfc94
	goto loc_823CFC94;
loc_823CFC90:
	// ori r28,r28,262
	r28.u64 = r28.u64 | 262;
loc_823CFC94:
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823cfcf0
	if (cr6.eq) goto loc_823CFCF0;
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r8,r11,56
	ctx.r8.s64 = r11.s64 + 56;
loc_823CFCAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823cfccc
	if (!cr0.eq) goto loc_823CFCCC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x823cfcac
	if (!cr6.eq) goto loc_823CFCAC;
loc_823CFCCC:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823cfcf0
	if (cr0.eq) goto loc_823CFCF0;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,10814(r31)
	PPC_STORE_U8(r31.u32 + 10814, r11.u8);
	// b 0x823cfd0c
	goto loc_823CFD0C;
loc_823CFCF0:
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cfd10
	if (cr0.eq) goto loc_823CFD10;
	// lwz r11,352(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823cfd10
	if (!cr6.eq) goto loc_823CFD10;
	// addi r30,r31,13572
	r30.s64 = r31.s64 + 13572;
loc_823CFD0C:
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
loc_823CFD10:
	// lbz r11,10815(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823cfd20
	if (!cr0.eq) goto loc_823CFD20;
	// ori r29,r29,3
	r29.u64 = r29.u64 | 3;
loc_823CFD20:
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// b 0x823cfd74
	goto loc_823CFD74;
loc_823CFD28:
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// addi r30,r31,13572
	r30.s64 = r31.s64 + 13572;
	// lwz r28,13456(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 13456);
	// addi r27,r31,14852
	r27.s64 = r31.s64 + 14852;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cfd60
	if (cr0.eq) goto loc_823CFD60;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,13516
	ctx.r3.s64 = r31.s64 + 13516;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
	// andi. r11,r11,239
	r11.u64 = r11.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,10814(r31)
	PPC_STORE_U8(r31.u32 + 10814, r11.u8);
loc_823CFD60:
	// lbz r11,10815(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823cfd70
	if (cr0.eq) goto loc_823CFD70;
	// ori r29,r29,3
	r29.u64 = r29.u64 | 3;
loc_823CFD70:
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
loc_823CFD74:
	// stb r11,10815(r31)
	PPC_STORE_U8(r31.u32 + 10815, r11.u8);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823cfda8
	if (cr6.eq) goto loc_823CFDA8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823cf770
	sub_823CF770(ctx, base);
	// b 0x823cfdb4
	goto loc_823CFDB4;
loc_823CFDA8:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823cf6f0
	sub_823CF6F0(ctx, base);
loc_823CFDB4:
	// rlwinm. r11,r29,0,28,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cfe2c
	if (cr0.eq) goto loc_823CFE2C;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823cfdd8
	if (!cr6.gt) goto loc_823CFDD8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823CFDD8:
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// li r8,7758
	ctx.r8.s64 = 7758;
	// ori r9,r10,8448
	ctx.r9.u64 = ctx.r10.u64 | 8448;
	// li r7,-2
	ctx.r7.s64 = -2;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// std r24,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r24.u64);
	// stw r24,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r24.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x826e514c
	__imp__VdPersistDisplay(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823cfe2c
	if (cr0.eq) goto loc_823CFE2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x826e4c2c
	__imp__MmFreePhysicalMemory(ctx, base);
loc_823CFE2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,10780(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823db7e0
	sub_823DB7E0(ctx, base);
	// lwz r11,14760(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14760);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,30,2,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x823d1fb8
	sub_823D1FB8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r4,14788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 14788);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1c68
	sub_823D1C68(ctx, base);
	// lwz r11,22136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22136);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823cfeb8
	if (cr0.eq) goto loc_823CFEB8;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823c69a0
	sub_823C69A0(ctx, base);
loc_823CFE88:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823c6b50
	sub_823C6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823cfeac
	if (cr0.eq) goto loc_823CFEAC;
	// lwz r11,16416(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16416);
	// lwz r10,16408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16408);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bge cr6,0x823cfe88
	if (!cr6.lt) goto loc_823CFE88;
loc_823CFEAC:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823c69d0
	sub_823C69D0(ctx, base);
	// b 0x823cfebc
	goto loc_823CFEBC;
loc_823CFEB8:
	// stw r30,14788(r31)
	PPC_STORE_U32(r31.u32 + 14788, r30.u32);
loc_823CFEBC:
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// andi. r11,r11,239
	r11.u64 = r11.u64 & 239;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, r11.u8);
	// bl 0x823d97a8
	sub_823D97A8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0270
	sub_823C0270(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823CFEE4"))) PPC_WEAK_FUNC(sub_823CFEE4);
PPC_FUNC_IMPL(__imp__sub_823CFEE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823CFEE8"))) PPC_WEAK_FUNC(sub_823CFEE8);
PPC_FUNC_IMPL(__imp__sub_823CFEE8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r31,12512
	ctx.r4.s64 = r31.s64 + 12512;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r10,r31,12540
	ctx.r10.s64 = r31.s64 + 12540;
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lwz r5,14680(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 14680);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x823c0718
	sub_823C0718(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cf4a8
	sub_823CF4A8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// lwz r6,14676(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 14676);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f1,124(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stfs f1,120(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,0
	ctx.r9.s64 = 0;
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,0
	ctx.r8.s64 = 0;
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v12,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v11,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// li r7,0
	ctx.r7.s64 = 0;
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823c2770
	sub_823C2770(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0660
	sub_823C0660(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bfcd0
	sub_823BFCD0(ctx, base);
	// addi r5,r31,13488
	ctx.r5.s64 = r31.s64 + 13488;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,14676(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 14676);
	// bl 0x823cf950
	sub_823CF950(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0018"))) PPC_WEAK_FUNC(sub_823D0018);
PPC_FUNC_IMPL(__imp__sub_823D0018) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x823d011c
	if (!cr6.eq) goto loc_823D011C;
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// stw r9,12580(r31)
	PPC_STORE_U32(r31.u32 + 12580, ctx.r9.u32);
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d0108
	if (!cr0.eq) goto loc_823D0108;
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d0108
	if (!cr0.eq) goto loc_823D0108;
	// lbz r11,12051(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12051);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d0108
	if (!cr0.eq) goto loc_823D0108;
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d006c
	if (cr0.eq) goto loc_823D006C;
	// li r11,1
	r11.s64 = 1;
	// b 0x823d00fc
	goto loc_823D00FC;
loc_823D006C:
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d00f4
	if (cr0.eq) goto loc_823D00F4;
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// lwz r8,12592(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x823d008c
	if (cr6.eq) goto loc_823D008C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d00f4
	if (!cr6.eq) goto loc_823D00F4;
loc_823D008C:
	// lwz r11,12308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r8,12596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x823d00a4
	if (cr6.eq) goto loc_823D00A4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d00f4
	if (!cr6.eq) goto loc_823D00F4;
loc_823D00A4:
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r8,12600(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x823d00bc
	if (cr6.eq) goto loc_823D00BC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d00f4
	if (!cr6.eq) goto loc_823D00F4;
loc_823D00BC:
	// lwz r11,12316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r8,12604(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x823d00d4
	if (cr6.eq) goto loc_823D00D4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d00f4
	if (!cr6.eq) goto loc_823D00F4;
loc_823D00D4:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r8,12608(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// beq cr6,0x823d00ec
	if (cr6.eq) goto loc_823D00EC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d00f4
	if (!cr6.eq) goto loc_823D00F4;
loc_823D00EC:
	// li r11,1
	r11.s64 = 1;
	// b 0x823d00f8
	goto loc_823D00F8;
loc_823D00F4:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823D00F8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823D00FC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x823d010c
	if (!cr0.eq) goto loc_823D010C;
loc_823D0108:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823D010C:
	// li r8,-1
	ctx.r8.s64 = -1;
	// rlwimi r11,r10,0,24,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r8,12572(r31)
	PPC_STORE_U32(r31.u32 + 12572, ctx.r8.u32);
	// b 0x823d0130
	goto loc_823D0130;
loc_823D011C:
	// li r11,1
	r11.s64 = 1;
	// stw r4,12572(r31)
	PPC_STORE_U32(r31.u32 + 12572, ctx.r4.u32);
	// stw r11,12580(r31)
	PPC_STORE_U32(r31.u32 + 12580, r11.u32);
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_823D0130:
	// stb r11,10812(r31)
	PPC_STORE_U8(r31.u32 + 10812, r11.u8);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r9,12576(r31)
	PPC_STORE_U32(r31.u32 + 12576, ctx.r9.u32);
	// stw r4,10804(r31)
	PPC_STORE_U32(r31.u32 + 10804, ctx.r4.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// stw r9,10808(r31)
	PPC_STORE_U32(r31.u32 + 10808, ctx.r9.u32);
	// ble cr6,0x823d0158
	if (!cr6.gt) goto loc_823D0158;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823D0158:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,24576
	r11.u64 = r11.u64 | 24576;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12572(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12572);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823D0184"))) PPC_WEAK_FUNC(sub_823D0184);
PPC_FUNC_IMPL(__imp__sub_823D0184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0188"))) PPC_WEAK_FUNC(sub_823D0188);
PPC_FUNC_IMPL(__imp__sub_823D0188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// li r26,0
	r26.s64 = 0;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
	// li r22,1
	r22.s64 = 1;
	// rlwinm. r30,r23,0,30,30
	r30.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823d0234
	if (cr0.eq) goto loc_823D0234;
	// li r11,92
	r11.s64 = 92;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r22.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,324
	r11.s64 = ctx.r1.s64 + 324;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823d0218
	if (cr6.eq) goto loc_823D0218;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d02ac
	if (cr0.eq) goto loc_823D02AC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d02ac
	if (cr0.eq) goto loc_823D02AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823d029c
	goto loc_823D029C;
loc_823D0218:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d02ac
	if (cr0.eq) goto loc_823D02AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823d0298
	goto loc_823D0298;
loc_823D0234:
	// li r11,86
	r11.s64 = 86;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// stw r22,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r22.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r11,r1,324
	r11.s64 = ctx.r1.s64 + 324;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823d0280
	if (cr6.eq) goto loc_823D0280;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d02ac
	if (cr0.eq) goto loc_823D02AC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d02ac
	if (cr0.eq) goto loc_823D02AC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x823d029c
	goto loc_823D029C;
loc_823D0280:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d02ac
	if (cr0.eq) goto loc_823D02AC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_823D0298:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823D029C:
	// li r3,43
	ctx.r3.s64 = 43;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,324(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
loc_823D02AC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r5,12612(r31)
	PPC_STORE_U32(r31.u32 + 12612, ctx.r5.u32);
	// beq cr6,0x823d033c
	if (cr6.eq) goto loc_823D033C;
	// addi r9,r31,12860
	ctx.r9.s64 = r31.s64 + 12860;
	// addi r11,r21,12
	r11.s64 = r21.s64 + 12;
	// addi r10,r31,12620
	ctx.r10.s64 = r31.s64 + 12620;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_823D02C8:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, xer);
	// bgt cr6,0x823d02d8
	if (cr6.gt) goto loc_823D02D8;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
loc_823D02D8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, xer);
	// bgt cr6,0x823d02e8
	if (cr6.gt) goto loc_823D02E8;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
loc_823D02E8:
	// addi r8,r11,-12
	ctx.r8.s64 = r11.s64 + -12;
	// addi r7,r11,-8
	ctx.r7.s64 = r11.s64 + -8;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r4,0(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r4,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r4.u32);
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r4,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r4.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r8,r8,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r8,-4(r9)
	PPC_STORE_U32(ctx.r9.u32 + -4, ctx.r8.u32);
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r8,r8,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bne 0x823d02c8
	if (!cr0.eq) goto loc_823D02C8;
loc_823D033C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823d0464
	if (cr6.eq) goto loc_823D0464;
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbz r11,10815(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stb r11,10815(r31)
	PPC_STORE_U8(r31.u32 + 10815, r11.u8);
	// beq 0x823d0360
	if (cr0.eq) goto loc_823D0360;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,10815(r31)
	PPC_STORE_U8(r31.u32 + 10815, r11.u8);
loc_823D0360:
	// lhz r11,10240(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 10240);
	// clrlwi. r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d0374
	if (!cr0.eq) goto loc_823D0374;
	// li r30,16
	r30.s64 = 16;
	// b 0x823d0380
	goto loc_823D0380;
loc_823D0374:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r30,8
	r30.s64 = 8;
	// bne cr6,0x823d038c
	if (!cr6.eq) goto loc_823D038C;
loc_823D0380:
	// li r10,32
	ctx.r10.s64 = 32;
	// li r29,80
	r29.s64 = 80;
	// b 0x823d0394
	goto loc_823D0394;
loc_823D038C:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r29,40
	r29.s64 = 40;
loc_823D0394:
	// add r11,r10,r28
	r11.u64 = ctx.r10.u64 + r28.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// andc r4,r11,r9
	ctx.r4.u64 = r11.u64 & ~ctx.r9.u64;
	// twllei r10,0
	// divwu r3,r4,r10
	ctx.r3.u32 = ctx.r4.u32 / ctx.r10.u32;
	// beq cr6,0x823d03f4
	if (cr6.eq) goto loc_823D03F4;
	// addi r8,r31,12976
	ctx.r8.s64 = r31.s64 + 12976;
	// addi r11,r31,12856
	r11.s64 = r31.s64 + 12856;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_823D03C0:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// twllei r30,0
	// divwu r7,r7,r30
	ctx.r7.u32 = ctx.r7.u32 / r30.u32;
	// divwu r6,r6,r10
	ctx.r6.u32 = ctx.r6.u32 / ctx.r10.u32;
	// mullw r7,r7,r3
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// twllei r10,0
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x823d03c0
	if (!cr0.eq) goto loc_823D03C0;
loc_823D03F4:
	// lwz r10,10240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10240);
	// add r11,r29,r28
	r11.u64 = r29.u64 + r28.u64;
	// stw r4,13036(r31)
	PPC_STORE_U32(r31.u32 + 13036, ctx.r4.u32);
	// twllei r29,0
	// rlwimi r10,r4,18,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 18) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// divwu r11,r11,r29
	r11.u32 = r11.u32 / r29.u32;
	// stw r10,10240(r31)
	PPC_STORE_U32(r31.u32 + 10240, ctx.r10.u32);
	// mullw r11,r11,r29
	r11.s64 = int64_t(r11.s32) * int64_t(r29.s32);
	// ld r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// std r10,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r10.u64);
	// lbz r10,10815(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// stw r11,13040(r31)
	PPC_STORE_U32(r31.u32 + 13040, r11.u32);
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d0458
	if (!cr0.eq) goto loc_823D0458;
	// lwz r11,11716(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11716);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// rlwinm r11,r11,0,12,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823d0458
	if (!cr6.eq) goto loc_823D0458;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// li r12,-257
	r12.s64 = -257;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// b 0x823d0460
	goto loc_823D0460;
loc_823D0458:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
loc_823D0460:
	// std r11,40(r31)
	PPC_STORE_U64(r31.u32 + 40, r11.u64);
loc_823D0464:
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,13044(r31)
	PPC_STORE_U32(r31.u32 + 13044, r28.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r27,13048(r31)
	PPC_STORE_U32(r31.u32 + 13048, r27.u32);
	// stw r23,13052(r31)
	PPC_STORE_U32(r31.u32 + 13052, r23.u32);
	// addi r30,r11,-20440
	r30.s64 = r11.s64 + -20440;
	// bne 0x823d057c
	if (!cr0.eq) goto loc_823D057C;
	// lbz r11,10815(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d057c
	if (!cr0.eq) goto loc_823D057C;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823d04e4
	if (cr6.eq) goto loc_823D04E4;
	// addi r10,r31,12628
	ctx.r10.s64 = r31.s64 + 12628;
	// addi r11,r31,12860
	r11.s64 = r31.s64 + 12860;
loc_823D04A4:
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r9,-4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r7,r7,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r7.s64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bgt cr6,0x823d04c8
	if (cr6.gt) goto loc_823D04C8;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_823D04C8:
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// bgt cr6,0x823d04d4
	if (cr6.gt) goto loc_823D04D4;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_823D04D4:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x823d04a4
	if (!cr0.eq) goto loc_823D04A4;
loc_823D04E4:
	// addi r4,r31,12512
	ctx.r4.s64 = r31.s64 + 12512;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r26.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r10,r31,12540
	ctx.r10.s64 = r31.s64 + 12540;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x823c05e0
	sub_823C05E0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-20416
	ctx.r4.s64 = r11.s64 + -20416;
	// bl 0x823bfcd0
	sub_823BFCD0(ctx, base);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,63
	ctx.r4.s64 = 63;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c1ea8
	sub_823C1EA8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0660
	sub_823C0660(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bfcd0
	sub_823BFCD0(ctx, base);
loc_823D057C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823d0594
	if (cr6.eq) goto loc_823D0594;
	// addi r11,r31,13056
	r11.s64 = r31.s64 + 13056;
	// lvx128 v0,r0,r25
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r25.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x823d059c
	goto loc_823D059C;
loc_823D0594:
	// std r26,13056(r31)
	PPC_STORE_U64(r31.u32 + 13056, r26.u64);
	// std r26,13064(r31)
	PPC_STORE_U64(r31.u32 + 13064, r26.u64);
loc_823D059C:
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// stfs f31,13072(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 13072, temp.u32);
	// stw r24,13076(r31)
	PPC_STORE_U32(r31.u32 + 13076, r24.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x823d05b8
	if (!cr0.eq) goto loc_823D05B8;
	// lwz r10,12320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12320);
loc_823D05B8:
	// stw r11,12592(r31)
	PPC_STORE_U32(r31.u32 + 12592, r11.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// lwz r9,12308(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// lwz r8,12312(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r7,12316(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r6,12320(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// stw r10,12588(r31)
	PPC_STORE_U32(r31.u32 + 12588, ctx.r10.u32);
	// stw r9,12596(r31)
	PPC_STORE_U32(r31.u32 + 12596, ctx.r9.u32);
	// stw r8,12600(r31)
	PPC_STORE_U32(r31.u32 + 12600, ctx.r8.u32);
	// stw r7,12604(r31)
	PPC_STORE_U32(r31.u32 + 12604, ctx.r7.u32);
	// stw r6,12608(r31)
	PPC_STORE_U32(r31.u32 + 12608, ctx.r6.u32);
	// stw r5,12584(r31)
	PPC_STORE_U32(r31.u32 + 12584, ctx.r5.u32);
	// stw r26,12580(r31)
	PPC_STORE_U32(r31.u32 + 12580, r26.u32);
	// stb r11,10812(r31)
	PPC_STORE_U8(r31.u32 + 10812, r11.u8);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d0644
	if (!cr0.eq) goto loc_823D0644;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d0644
	if (!cr0.eq) goto loc_823D0644;
	// lbz r11,12051(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12051);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d0644
	if (!cr0.eq) goto loc_823D0644;
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d062c
	if (cr0.eq) goto loc_823D062C;
	// mr r11,r22
	r11.u64 = r22.u64;
	// b 0x823d0638
	goto loc_823D0638;
loc_823D062C:
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823D0638:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r22
	r11.u64 = r22.u64;
	// bne 0x823d0648
	if (!cr0.eq) goto loc_823D0648;
loc_823D0644:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823D0648:
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r26,12576(r31)
	PPC_STORE_U32(r31.u32 + 12576, r26.u32);
	// rlwimi r11,r10,0,24,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r26,10804(r31)
	PPC_STORE_U32(r31.u32 + 10804, r26.u32);
	// stw r26,10808(r31)
	PPC_STORE_U32(r31.u32 + 10808, r26.u32);
	// stw r9,12572(r31)
	PPC_STORE_U32(r31.u32 + 12572, ctx.r9.u32);
	// stb r11,10812(r31)
	PPC_STORE_U8(r31.u32 + 10812, r11.u8);
	// bl 0x823d6858
	sub_823D6858(ctx, base);
	// addi r3,r31,13224
	ctx.r3.s64 = r31.s64 + 13224;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d0690
	if (!cr6.gt) goto loc_823D0690;
	// bl 0x823d1ec0
	sub_823D1EC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D0690:
	// lis r10,-31232
	ctx.r10.s64 = -2046820352;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stw r9,13232(r31)
	PPC_STORE_U32(r31.u32 + 13232, ctx.r9.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d06bc
	if (!cr6.gt) goto loc_823D06BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D06BC:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,25
	ctx.r9.s64 = 25;
	// ori r10,r10,17920
	ctx.r10.u64 = ctx.r10.u64 | 17920;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r6,324(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x823d9688
	sub_823D9688(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823c05e0
	sub_823C05E0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0270
	sub_823C0270(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823D070C"))) PPC_WEAK_FUNC(sub_823D070C);
PPC_FUNC_IMPL(__imp__sub_823D070C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0710"))) PPC_WEAK_FUNC(sub_823D0710);
PPC_FUNC_IMPL(__imp__sub_823D0710) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823d0754
	if (!cr6.eq) goto loc_823D0754;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823d08b4
	if (cr6.eq) goto loc_823D08B4;
	// addi r5,r31,12616
	ctx.r5.s64 = r31.s64 + 12616;
loc_823D0754:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823d08b4
	if (cr6.eq) goto loc_823D08B4;
	// lwz r11,12612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// mr r27,r22
	r27.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823d08b4
	if (!cr6.gt) goto loc_823D08B4;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_823D0774:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,12588(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12588);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r6.u32);
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r11,r11,14,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3FFF;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x823d07c0
	if (!cr6.eq) goto loc_823D07C0;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
loc_823D07C0:
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r11,r11,29,17,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x7FFF;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823d07e4
	if (!cr6.eq) goto loc_823D07E4;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
loc_823D07E4:
	// li r11,3
	r11.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// slw r4,r11,r28
	ctx.r4.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// bl 0x823d0018
	sub_823D0018(ctx, base);
	// lbz r11,10815(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r4,r11,28,30,30
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x2;
	// bl 0x823bf1a8
	sub_823BF1A8(ctx, base);
	// lwz r11,12612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bge cr6,0x823d0870
	if (!cr6.lt) goto loc_823D0870;
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d082c
	if (cr6.eq) goto loc_823D082C;
	// ori r4,r26,256
	ctx.r4.u64 = r26.u64 | 256;
loc_823D082C:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d083c
	if (cr6.eq) goto loc_823D083C;
	// ori r4,r4,512
	ctx.r4.u64 = ctx.r4.u64 | 512;
loc_823D083C:
	// lwz r11,13076(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13076);
	// addi r10,r31,13056
	ctx.r10.s64 = r31.s64 + 13056;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,13072(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 13072);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r22,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r22.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c2770
	sub_823C2770(ctx, base);
	// b 0x823d089c
	goto loc_823D089C;
loc_823D0870:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r24.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c2770
	sub_823C2770(ctx, base);
loc_823D089C:
	// lwz r11,12612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x823d0774
	if (cr6.lt) goto loc_823D0774;
loc_823D08B4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0018
	sub_823D0018(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bf1a8
	sub_823BF1A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// lwz r11,13052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13052);
	// lwz r10,11184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11184);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// rlwinm. r11,r11,0,2,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// slw r27,r9,r10
	r27.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// beq 0x823d08f0
	if (cr0.eq) goto loc_823D08F0;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_823D08F0:
	// lwz r11,12612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x823d0a28
	if (cr6.eq) goto loc_823D0A28;
	// lis r29,-32768
	r29.s64 = -2147483648;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823d0018
	sub_823D0018(ctx, base);
	// addi r30,r31,13224
	r30.s64 = r31.s64 + 13224;
	// lis r28,16384
	r28.s64 = 1073741824;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d0928
	if (!cr0.eq) goto loc_823D0928;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// b 0x823d0940
	goto loc_823D0940;
loc_823D0928:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r6,r28,r11
	ctx.r6.s64 = r11.s64 - r28.s64;
loc_823D0940:
	// lis r11,-32195
	r11.s64 = -2109931520;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r5,r11,26496
	ctx.r5.s64 = r11.s64 + 26496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d2598
	sub_823D2598(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0018
	sub_823D0018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x823d0984
	if (!cr6.gt) goto loc_823D0984;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d1ec0
	sub_823D1EC0(ctx, base);
loc_823D0984:
	// lis r11,-30720
	r11.s64 = -2013265920;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r29.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,13232(r31)
	PPC_STORE_U32(r31.u32 + 13232, ctx.r10.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x823d09b4
	if (!cr6.gt) goto loc_823D09B4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d1ec0
	sub_823D1EC0(ctx, base);
loc_823D09B4:
	// lis r11,-30464
	r11.s64 = -1996488704;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,13104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13104);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d09d0
	if (!cr0.eq) goto loc_823D09D0;
	// mr r11,r22
	r11.u64 = r22.u64;
	// b 0x823d09e8
	goto loc_823D09E8;
loc_823D09D0:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
loc_823D09E8:
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,13204(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13204);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d0a00
	if (!cr0.eq) goto loc_823D0A00;
	// mr r11,r22
	r11.u64 = r22.u64;
	// b 0x823d0a18
	goto loc_823D0A18;
loc_823D0A00:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
loc_823D0A18:
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,13232(r31)
	PPC_STORE_U32(r31.u32 + 13232, ctx.r10.u32);
	// b 0x823d0a2c
	goto loc_823D0A2C;
loc_823D0A28:
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823D0A2C:
	// addi r3,r31,13224
	ctx.r3.s64 = r31.s64 + 13224;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d0a4c
	if (!cr6.gt) goto loc_823D0A4C;
	// bl 0x823d1ec0
	sub_823D1EC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D0A4C:
	// lis r10,-30976
	ctx.r10.s64 = -2030043136;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// lbz r10,10815(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// stw r9,13232(r31)
	PPC_STORE_U32(r31.u32 + 13232, ctx.r9.u32);
	// stw r22,12588(r31)
	PPC_STORE_U32(r31.u32 + 12588, r22.u32);
	// stw r22,12580(r31)
	PPC_STORE_U32(r31.u32 + 12580, r22.u32);
	// andi. r11,r11,223
	r11.u64 = r11.u64 & 223;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// andi. r10,r10,207
	ctx.r10.u64 = ctx.r10.u64 & 207;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,10812(r31)
	PPC_STORE_U8(r31.u32 + 10812, r11.u8);
	// stb r10,10815(r31)
	PPC_STORE_U8(r31.u32 + 10815, ctx.r10.u8);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d0b50
	if (!cr0.eq) goto loc_823D0B50;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d0b50
	if (!cr0.eq) goto loc_823D0B50;
	// lbz r11,12051(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12051);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d0b50
	if (!cr0.eq) goto loc_823D0B50;
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d0ab0
	if (cr0.eq) goto loc_823D0AB0;
	// li r11,1
	r11.s64 = 1;
	// b 0x823d0b44
	goto loc_823D0B44;
loc_823D0AB0:
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d0b3c
	if (cr0.eq) goto loc_823D0B3C;
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// lwz r10,12592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823d0ad4
	if (cr6.eq) goto loc_823D0AD4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d0b3c
	if (!cr6.eq) goto loc_823D0B3C;
loc_823D0AD4:
	// lwz r11,12308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r10,12596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823d0aec
	if (cr6.eq) goto loc_823D0AEC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d0b3c
	if (!cr6.eq) goto loc_823D0B3C;
loc_823D0AEC:
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r10,12600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823d0b04
	if (cr6.eq) goto loc_823D0B04;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d0b3c
	if (!cr6.eq) goto loc_823D0B3C;
loc_823D0B04:
	// lwz r11,12316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r10,12604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823d0b1c
	if (cr6.eq) goto loc_823D0B1C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d0b3c
	if (!cr6.eq) goto loc_823D0B3C;
loc_823D0B1C:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r10,12608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823d0b34
	if (cr6.eq) goto loc_823D0B34;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d0b3c
	if (!cr6.eq) goto loc_823D0B3C;
loc_823D0B34:
	// li r11,1
	r11.s64 = 1;
	// b 0x823d0b40
	goto loc_823D0B40;
loc_823D0B3C:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_823D0B40:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823D0B44:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x823d0b54
	if (!cr0.eq) goto loc_823D0B54;
loc_823D0B50:
	// mr r11,r22
	r11.u64 = r22.u64;
loc_823D0B54:
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,12612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// rlwimi r11,r10,0,24,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r22,12576(r31)
	PPC_STORE_U32(r31.u32 + 12576, r22.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r22,10804(r31)
	PPC_STORE_U32(r31.u32 + 10804, r22.u32);
	// stw r22,10808(r31)
	PPC_STORE_U32(r31.u32 + 10808, r22.u32);
	// stw r9,12572(r31)
	PPC_STORE_U32(r31.u32 + 12572, ctx.r9.u32);
	// stb r11,10812(r31)
	PPC_STORE_U8(r31.u32 + 10812, r11.u8);
	// bl 0x823d69c8
	sub_823D69C8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-20440
	ctx.r4.s64 = r11.s64 + -20440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c05e0
	sub_823C05E0(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823d0bb8
	if (cr6.eq) goto loc_823D0BB8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0270
	sub_823C0270(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823d0bbc
	goto loc_823D0BBC;
loc_823D0BB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D0BBC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823D0BC8"))) PPC_WEAK_FUNC(sub_823D0BC8);
PPC_FUNC_IMPL(__imp__sub_823D0BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,13364(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 13364);
	// beq 0x823d0c50
	if (cr0.eq) goto loc_823D0C50;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,14764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14764);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823d0bfc
	if (!cr0.eq) goto loc_823D0BFC;
	// lwz r10,156(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// lwz r9,152(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823D0BFC:
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// subf r8,r8,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r9,r9,164
	ctx.r9.s64 = ctx.r9.s64 + 164;
	// andc r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// bge cr6,0x823d0c24
	if (!cr6.lt) goto loc_823D0C24;
loc_823D0C1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823D0C24:
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// lwz r8,56(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// stw r3,14764(r11)
	PPC_STORE_U32(r11.u32 + 14764, ctx.r3.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r9,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r9.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// blr 
	return;
loc_823D0C50:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d0c1c
	if (!cr6.eq) goto loc_823D0C1C;
	// lwz r10,152(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// stw r10,14776(r11)
	PPC_STORE_U32(r11.u32 + 14776, ctx.r10.u32);
	// lwz r11,156(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 156);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r3,152(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 152);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0C74"))) PPC_WEAK_FUNC(sub_823D0C74);
PPC_FUNC_IMPL(__imp__sub_823D0C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0C78"))) PPC_WEAK_FUNC(sub_823D0C78);
PPC_FUNC_IMPL(__imp__sub_823D0C78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r9,156(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r5,r8,512
	ctx.r5.s64 = ctx.r8.s64 + 512;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r10,r5,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// subf r4,r7,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r3,r6,r11
	ctx.r3.s64 = r11.s64 - ctx.r6.s64;
	// b 0x823d5498
	sub_823D5498(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D0CD0"))) PPC_WEAK_FUNC(sub_823D0CD0);
PPC_FUNC_IMPL(__imp__sub_823D0CD0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0CD4"))) PPC_WEAK_FUNC(sub_823D0CD4);
PPC_FUNC_IMPL(__imp__sub_823D0CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0CD8"))) PPC_WEAK_FUNC(sub_823D0CD8);
PPC_FUNC_IMPL(__imp__sub_823D0CD8) {
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
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,502
	ctx.r4.s64 = 502;
	// lwz r29,13368(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 13368);
	// bl 0x823d1618
	sub_823D1618(ctx, base);
	// lbz r11,10813(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10813);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d0d10
	if (cr0.eq) goto loc_823D0D10;
	// lwz r31,16576(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16576);
	// b 0x823d0d68
	goto loc_823D0D68;
loc_823D0D10:
	// rlwinm r11,r31,12,20,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// stw r31,13368(r30)
	PPC_STORE_U32(r30.u32 + 13368, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addis r3,r11,-16384
	ctx.r3.s64 = r11.s64 + -1073741824;
	// bne cr6,0x823d0d48
	if (!cr6.eq) goto loc_823D0D48;
	// lwz r11,13364(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13364);
	// stw r3,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r3.u32);
	// b 0x823d0d60
	goto loc_823D0D60;
loc_823D0D48:
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,13372(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13372);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_823D0D60:
	// addi r4,r3,2008
	ctx.r4.s64 = ctx.r3.s64 + 2008;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
loc_823D0D68:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r31,2008
	r11.s64 = r31.s64 + 2008;
	// stw r3,13372(r30)
	PPC_STORE_U32(r30.u32 + 13372, ctx.r3.u32);
	// stw r11,13376(r30)
	PPC_STORE_U32(r30.u32 + 13376, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D0D80"))) PPC_WEAK_FUNC(sub_823D0D80);
PPC_FUNC_IMPL(__imp__sub_823D0D80) {
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
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,136
	ctx.r4.s64 = 136;
	// lwz r29,13380(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 13380);
	// bl 0x823d1618
	sub_823D1618(ctx, base);
	// lbz r11,10813(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10813);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d0db8
	if (cr0.eq) goto loc_823D0DB8;
	// lwz r31,16576(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16576);
	// b 0x823d0e10
	goto loc_823D0E10;
loc_823D0DB8:
	// rlwinm r11,r31,12,20,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// stw r31,13380(r30)
	PPC_STORE_U32(r30.u32 + 13380, r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addis r3,r11,-16384
	ctx.r3.s64 = r11.s64 + -1073741824;
	// bne cr6,0x823d0df0
	if (!cr6.eq) goto loc_823D0DF0;
	// lwz r11,13364(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13364);
	// stw r3,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r3.u32);
	// b 0x823d0e08
	goto loc_823D0E08;
loc_823D0DF0:
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// lwz r11,13384(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13384);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_823D0E08:
	// addi r4,r3,136
	ctx.r4.s64 = ctx.r3.s64 + 136;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
loc_823D0E10:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// stw r3,13384(r30)
	PPC_STORE_U32(r30.u32 + 13384, ctx.r3.u32);
	// stw r11,13388(r30)
	PPC_STORE_U32(r30.u32 + 13388, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D0E28"))) PPC_WEAK_FUNC(sub_823D0E28);
PPC_FUNC_IMPL(__imp__sub_823D0E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r10,2052(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2052);
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bge cr6,0x823d0e64
	if (!cr6.lt) goto loc_823D0E64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_823D0E64:
	// addi r29,r10,14820
	r29.s64 = ctx.r10.s64 + 14820;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r11,172(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823D0EA4"))) PPC_WEAK_FUNC(sub_823D0EA4);
PPC_FUNC_IMPL(__imp__sub_823D0EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0EA8"))) PPC_WEAK_FUNC(sub_823D0EA8);
PPC_FUNC_IMPL(__imp__sub_823D0EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r30,r11,14820
	r30.s64 = r11.s64 + 14820;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r11,176(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 176);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_823D0F08"))) PPC_WEAK_FUNC(sub_823D0F08);
PPC_FUNC_IMPL(__imp__sub_823D0F08) {
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
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d0f30
	if (!cr6.eq) goto loc_823D0F30;
	// bl 0x823d0ea8
	sub_823D0EA8(ctx, base);
	// b 0x823d0f40
	goto loc_823D0F40;
loc_823D0F30:
	// bl 0x823d0c78
	sub_823D0C78(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823D0F40:
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

__attribute__((alias("__imp__sub_823D0F54"))) PPC_WEAK_FUNC(sub_823D0F54);
PPC_FUNC_IMPL(__imp__sub_823D0F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0F58"))) PPC_WEAK_FUNC(sub_823D0F58);
PPC_FUNC_IMPL(__imp__sub_823D0F58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,14776(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14776);
	// lwz r8,14772(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14772);
	// lwz r7,14764(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14764);
	// lwz r6,14768(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14768);
	// stw r11,13264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13264, r11.u32);
	// stw r10,13268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13268, ctx.r10.u32);
	// stw r9,13272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13272, ctx.r9.u32);
	// stw r8,13276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13276, ctx.r8.u32);
	// stw r7,13280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13280, ctx.r7.u32);
	// stw r6,13284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13284, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0F8C"))) PPC_WEAK_FUNC(sub_823D0F8C);
PPC_FUNC_IMPL(__imp__sub_823D0F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0F90"))) PPC_WEAK_FUNC(sub_823D0F90);
PPC_FUNC_IMPL(__imp__sub_823D0F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,13264(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13264);
	// lwz r11,13268(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13268);
	// lwz r9,13272(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13272);
	// lwz r8,13276(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13276);
	// lwz r7,13280(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13280);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// addi r10,r11,-160
	ctx.r10.s64 = r11.s64 + -160;
	// lwz r6,13284(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13284);
	// stw r9,14776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14776, ctx.r9.u32);
	// stw r8,14772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14772, ctx.r8.u32);
	// stw r7,14764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14764, ctx.r7.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r6,14768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14768, ctx.r6.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D0FCC"))) PPC_WEAK_FUNC(sub_823D0FCC);
PPC_FUNC_IMPL(__imp__sub_823D0FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D0FD0"))) PPC_WEAK_FUNC(sub_823D0FD0);
PPC_FUNC_IMPL(__imp__sub_823D0FD0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,10768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d1060
	if (cr0.eq) goto loc_823D1060;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x823d1010
	if (!cr6.eq) goto loc_823D1010;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x823d1060
	if (!cr6.gt) goto loc_823D1060;
loc_823D1010:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c69a0
	sub_823C69A0(ctx, base);
loc_823D1020:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c6b50
	sub_823C6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d1058
	if (cr0.eq) goto loc_823D1058;
	// lwz r11,10768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d1058
	if (cr0.eq) goto loc_823D1058;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x823d1020
	if (!cr6.eq) goto loc_823D1020;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x823d1020
	if (cr6.gt) goto loc_823D1020;
loc_823D1058:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c69d0
	sub_823C69D0(ctx, base);
loc_823D1060:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D1068"))) PPC_WEAK_FUNC(sub_823D1068);
PPC_FUNC_IMPL(__imp__sub_823D1068) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// add r10,r31,r5
	ctx.r10.u64 = r31.u64 + ctx.r5.u64;
	// lwz r11,14748(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 14748);
	// and r30,r10,r11
	r30.u64 = ctx.r10.u64 & r11.u64;
	// lwz r11,10768(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 10768);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bge cr6,0x823d10ac
	if (!cr6.lt) goto loc_823D10AC;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x823d1108
	if (!cr6.lt) goto loc_823D1108;
loc_823D10A0:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x823d10b4
	if (!cr6.gt) goto loc_823D10B4;
	// b 0x823d1108
	goto loc_823D1108;
loc_823D10AC:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x823d10a0
	if (!cr6.lt) goto loc_823D10A0;
loc_823D10B4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c69a0
	sub_823C69A0(ctx, base);
loc_823D10C4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c6b50
	sub_823C6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d1100
	if (cr0.eq) goto loc_823D1100;
	// lwz r11,10768(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 10768);
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bge cr6,0x823d10f0
	if (!cr6.lt) goto loc_823D10F0;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x823d1100
	if (!cr6.lt) goto loc_823D1100;
	// b 0x823d10f8
	goto loc_823D10F8;
loc_823D10F0:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x823d10c4
	if (cr6.lt) goto loc_823D10C4;
loc_823D10F8:
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// ble cr6,0x823d10c4
	if (!cr6.gt) goto loc_823D10C4;
loc_823D1100:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c69d0
	sub_823C69D0(ctx, base);
loc_823D1108:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D1114"))) PPC_WEAK_FUNC(sub_823D1114);
PPC_FUNC_IMPL(__imp__sub_823D1114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1118"))) PPC_WEAK_FUNC(sub_823D1118);
PPC_FUNC_IMPL(__imp__sub_823D1118) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r31,10824(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 10824);
	// lwz r27,14748(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 14748);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r26,14744(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 14744);
	// bl 0x823d1068
	sub_823D1068(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823d1170
	if (cr6.eq) goto loc_823D1170;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823D1150:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,1
	ctx.r8.s64 = r31.s64 + 1;
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// and r31,r8,r27
	r31.u64 = ctx.r8.u64 & r27.u64;
	// stwx r10,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + r26.u32, ctx.r10.u32);
	// bne 0x823d1150
	if (!cr0.eq) goto loc_823D1150;
loc_823D1170:
	// stw r31,10824(r30)
	PPC_STORE_U32(r30.u32 + 10824, r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823D117C"))) PPC_WEAK_FUNC(sub_823D117C);
PPC_FUNC_IMPL(__imp__sub_823D117C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1180"))) PPC_WEAK_FUNC(sub_823D1180);
PPC_FUNC_IMPL(__imp__sub_823D1180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_823D1180:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// bge cr6,0x823d1194
	if (!cr6.lt) goto loc_823D1194;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_823D1194:
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmplw cr6,r5,r9
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, xer);
	// ble cr6,0x823d11a8
	if (!cr6.gt) goto loc_823D11A8;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_823D11A8:
	// rldicr r9,r9,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
loc_823D11B4:
	// mfmsr r7
	// mtmsrd r13,1
	// ldarx r8,0,r3
	reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r8.u64 = __builtin_bswap64(reserved.u64);
	// cmpd cr6,r8,r11
	cr6.compare<int64_t>(ctx.r8.s64, r11.s64, xer);
	// bne cr6,0x823d11d8
	if (!cr6.eq) goto loc_823D11D8;
	// stdcx. r10,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x823d11b4
	if (!cr0.eq) goto loc_823D11B4;
	// b 0x823d11e0
	goto loc_823D11E0;
loc_823D11D8:
	// stdcx. r8,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), reserved.s64, __builtin_bswap64(ctx.r8.s64));
	cr0.so = xer.so;
	// mtmsrd r7,1
loc_823D11E0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// bne cr6,0x823d1180
	if (!cr6.eq) goto loc_823D1180;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D11F0"))) PPC_WEAK_FUNC(sub_823D11F0);
PPC_FUNC_IMPL(__imp__sub_823D11F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
loc_823D11F0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_823D11FC:
	// mfmsr r8
	// mtmsrd r13,1
	// ldarx r9,0,r3
	reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r9.u64 = __builtin_bswap64(reserved.u64);
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, r11.s64, xer);
	// bne cr6,0x823d1220
	if (!cr6.eq) goto loc_823D1220;
	// stdcx. r10,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), reserved.s64, __builtin_bswap64(ctx.r10.s64));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823d11fc
	if (!cr0.eq) goto loc_823D11FC;
	// b 0x823d1228
	goto loc_823D1228;
loc_823D1220:
	// stdcx. r9,0,r3
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), reserved.s64, __builtin_bswap64(ctx.r9.s64));
	cr0.so = xer.so;
	// mtmsrd r8,1
loc_823D1228:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// bne cr6,0x823d11f0
	if (!cr6.eq) goto loc_823D11F0;
	// rldicl r10,r11,32,32
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1244"))) PPC_WEAK_FUNC(sub_823D1244);
PPC_FUNC_IMPL(__imp__sub_823D1244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1248"))) PPC_WEAK_FUNC(sub_823D1248);
PPC_FUNC_IMPL(__imp__sub_823D1248) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x823d12d8
	if (!cr6.eq) goto loc_823D12D8;
	// lwz r10,10772(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 10772);
	// lis r11,2989
	r11.s64 = 195887104;
	// ori r11,r11,61453
	r11.u64 = r11.u64 | 61453;
	// lwz r31,16(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823d1288
	if (!cr6.eq) goto loc_823D1288;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-19048
	ctx.r3.s64 = r11.s64 + -19048;
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
	// twi 31,r0,22
loc_823D1288:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823d12a0
	if (cr6.eq) goto loc_823D12A0;
	// lwz r11,10772(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10772);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D12A0:
	// lbz r10,268(r13)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// li r11,1
	r11.s64 = 1;
	// addi r31,r30,10776
	r31.s64 = r30.s64 + 10776;
	// lwz r30,10772(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 10772);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// slw r29,r11,r10
	r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// andc r11,r11,r29
	r11.u64 = r11.u64 & ~r29.u64;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// b 0x823d12f8
	goto loc_823D12F8;
loc_823D12D8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823d12f8
	if (!cr6.eq) goto loc_823D12F8;
	// lis r11,32712
	r11.s64 = 2143813632;
	// lwz r11,25924(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 25924);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d12f8
	if (cr0.eq) goto loc_823D12F8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823cf1a0
	sub_823CF1A0(ctx, base);
loc_823D12F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D1300"))) PPC_WEAK_FUNC(sub_823D1300);
PPC_FUNC_IMPL(__imp__sub_823D1300) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x823d1338
	if (cr0.eq) goto loc_823D1338;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r11,r11,-16384
	r11.s64 = r11.s64 + -1073741824;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
loc_823D1338:
	// li r11,0
	r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1344"))) PPC_WEAK_FUNC(sub_823D1344);
PPC_FUNC_IMPL(__imp__sub_823D1344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1348"))) PPC_WEAK_FUNC(sub_823D1348);
PPC_FUNC_IMPL(__imp__sub_823D1348) {
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
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r7,r5,3
	ctx.r7.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// addi r9,r10,512
	ctx.r9.s64 = ctx.r10.s64 + 512;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// subf r4,r10,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// clrlwi r8,r11,3
	ctx.r8.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
	// stw r4,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// rlwinm r11,r31,12,20,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// subf r30,r10,r9
	r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r29,r8,r11
	r29.s64 = r11.s64 - ctx.r8.s64;
	// eieio 
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
	// stw r30,0(r31)
	PPC_MM_STORE_U32(r31.u32 + 0, r30.u32);
	// eieio 
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D13E4"))) PPC_WEAK_FUNC(sub_823D13E4);
PPC_FUNC_IMPL(__imp__sub_823D13E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D13E8"))) PPC_WEAK_FUNC(sub_823D13E8);
PPC_FUNC_IMPL(__imp__sub_823D13E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,16576(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16576);
	// lbz r9,10813(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10813);
	// addi r10,r11,4800
	ctx.r10.s64 = r11.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// addi r11,r10,-160
	r11.s64 = ctx.r10.s64 + -160;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// stb r9,10813(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10813, ctx.r9.u8);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1410"))) PPC_WEAK_FUNC(sub_823D1410);
PPC_FUNC_IMPL(__imp__sub_823D1410) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,14764(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14764);
	// beq 0x823d1510
	if (cr0.eq) goto loc_823D1510;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d1444
	if (!cr0.eq) goto loc_823D1444;
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,60
	r11.s64 = r11.s64 + 60;
loc_823D1444:
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// lwz r8,14756(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14756);
	// add r10,r11,r6
	ctx.r10.u64 = r11.u64 + ctx.r6.u64;
	// lwz r5,14768(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14768);
	// not r11,r9
	r11.u64 = ~ctx.r9.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r31,r9,r11
	r31.u64 = ctx.r9.u64 & r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r4,r8
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, xer);
	// bgt cr6,0x823d14ac
	if (cr6.gt) goto loc_823D14AC;
	// lwz r10,13088(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13088);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823d14a4
	if (cr0.eq) goto loc_823D14A4;
	// lwz r11,13092(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13092);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x823d149c
	if (cr6.eq) goto loc_823D149C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d14a4
	if (!cr6.eq) goto loc_823D14A4;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x823d14a4
	if (!cr6.lt) goto loc_823D14A4;
loc_823D149C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d160c
	goto loc_823D160C;
loc_823D14A4:
	// stw r4,14764(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14764, ctx.r4.u32);
	// b 0x823d1504
	goto loc_823D1504;
loc_823D14AC:
	// lwz r9,14772(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14772);
	// lwz r8,13088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13088);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r31,r9,r11
	r31.u64 = ctx.r9.u64 & r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// beq 0x823d14f0
	if (cr0.eq) goto loc_823D14F0;
	// lwz r11,13092(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13092);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x823d149c
	if (cr6.eq) goto loc_823D149C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d14f0
	if (!cr6.eq) goto loc_823D14F0;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// blt cr6,0x823d149c
	if (cr6.lt) goto loc_823D149C;
loc_823D14F0:
	// lwz r11,14776(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14776);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x823d149c
	if (cr6.gt) goto loc_823D149C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,14772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14772, ctx.r4.u32);
loc_823D1504:
	// bl 0x823d0fd0
	sub_823D0FD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x823d160c
	goto loc_823D160C;
loc_823D1510:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d1520
	if (!cr0.eq) goto loc_823D1520;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_823D1520:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// rlwinm r30,r11,0,0,26
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x823d1534
	if (!cr6.eq) goto loc_823D1534;
	// li r7,54
	ctx.r7.s64 = 54;
loc_823D1534:
	// lwz r11,14760(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14760);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// ble cr6,0x823d1548
	if (!cr6.gt) goto loc_823D1548;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823D1548:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,14756(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14756);
	// add r31,r10,r30
	r31.u64 = ctx.r10.u64 + r30.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x823d1560
	if (!cr6.gt) goto loc_823D1560;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_823D1560:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// bge cr6,0x823d15a0
	if (!cr6.lt) goto loc_823D15A0;
	// lwz r9,14772(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14772);
	// lwz r11,14768(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14768);
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// lbz r6,10814(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10814);
	// lwz r8,14752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14752);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r30,r9,0,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// ori r9,r6,4
	ctx.r9.u64 = ctx.r6.u64 | 4;
	// add r31,r10,r30
	r31.u64 = ctx.r10.u64 + r30.u64;
	// stw r8,14772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14772, ctx.r8.u32);
	// stw r11,14768(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14768, r11.u32);
	// stb r9,10814(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10814, ctx.r9.u8);
loc_823D15A0:
	// lwz r8,13088(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13088);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x823d15ec
	if (cr0.eq) goto loc_823D15EC;
	// lwz r11,13092(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13092);
	// lwz r10,14768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14768);
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x823d15d0
	if (cr6.eq) goto loc_823D15D0;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x823d15ec
	if (!cr6.eq) goto loc_823D15EC;
	// cmplw cr6,r8,r31
	cr6.compare<uint32_t>(ctx.r8.u32, r31.u32, xer);
	// bge cr6,0x823d15ec
	if (!cr6.lt) goto loc_823D15EC;
loc_823D15D0:
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823d149c
	if (!cr6.eq) goto loc_823D149C;
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r11,r7
	cr6.compare<int32_t>(r11.s32, ctx.r7.s32, xer);
	// blt cr6,0x823d149c
	if (cr6.lt) goto loc_823D149C;
loc_823D15EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,14768(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14768);
	// bl 0x823d0fd0
	sub_823D0FD0(ctx, base);
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823D160C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D1614"))) PPC_WEAK_FUNC(sub_823D1614);
PPC_FUNC_IMPL(__imp__sub_823D1614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1618"))) PPC_WEAK_FUNC(sub_823D1618);
PPC_FUNC_IMPL(__imp__sub_823D1618) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d1644
	if (cr0.eq) goto loc_823D1644;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d16ec
	goto loc_823D16EC;
loc_823D1644:
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,13364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13364);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne 0x823d166c
	if (!cr0.eq) goto loc_823D166C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1410
	sub_823D1410(ctx, base);
	// b 0x823d1688
	goto loc_823D1688;
loc_823D166C:
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d1684
	if (cr6.eq) goto loc_823D1684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0bc8
	sub_823D0BC8(ctx, base);
	// b 0x823d1688
	goto loc_823D1688;
loc_823D1684:
	// bl 0x823d0e28
	sub_823D0E28(ctx, base);
loc_823D1688:
	// lwz r11,14780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14780);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,14784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 14784);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stw r11,14780(r31)
	PPC_STORE_U32(r31.u32 + 14780, r11.u32);
	// ble cr6,0x823d16d8
	if (!cr6.gt) goto loc_823D16D8;
	// lwz r11,13088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d16d8
	if (!cr6.eq) goto loc_823D16D8;
	// lwz r10,14772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 14772);
	// lwz r9,14752(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 14752);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// addi r10,r11,160
	ctx.r10.s64 = r11.s64 + 160;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// beq cr6,0x823d16d8
	if (cr6.eq) goto loc_823D16D8;
	// lwz r11,14756(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14756);
	// stw r11,14764(r31)
	PPC_STORE_U32(r31.u32 + 14764, r11.u32);
loc_823D16D8:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823d16ec
	if (!cr6.eq) goto loc_823D16EC;
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stb r11,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, r11.u8);
loc_823D16EC:
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

__attribute__((alias("__imp__sub_823D1700"))) PPC_WEAK_FUNC(sub_823D1700);
PPC_FUNC_IMPL(__imp__sub_823D1700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lbz r11,10813(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 10813);
	// lwz r25,14748(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 14748);
	// lwz r24,14744(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 14744);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d17a4
	if (cr0.eq) goto loc_823D17A4;
	// lwz r11,21380(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 21380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d18dc
	if (cr6.eq) goto loc_823D18DC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823d18dc
	if (cr6.eq) goto loc_823D18DC;
	// lis r21,8192
	r21.s64 = 536870912;
	// lis r22,16384
	r22.s64 = 1073741824;
	// lis r23,16640
	r23.s64 = 1090519040;
loc_823D174C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// clrlwi r5,r10,8
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFFF;
	// subf r4,r22,r11
	ctx.r4.s64 = r11.s64 - r22.s64;
	// blt cr6,0x823d1768
	if (cr6.lt) goto loc_823D1768;
	// subf r4,r23,r11
	ctx.r4.s64 = r11.s64 - r23.s64;
loc_823D1768:
	// lwz r3,21380(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 21380);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,21380(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 21380);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x823d174c
	if (!cr0.eq) goto loc_823D174C;
	// b 0x823d18dc
	goto loc_823D18DC;
loc_823D17A4:
	// lwz r29,10824(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 10824);
	// mulli r5,r31,3
	ctx.r5.s64 = r31.s64 * 3;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d1068
	sub_823D1068(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823d1884
	if (cr6.eq) goto loc_823D1884;
	// mr r27,r31
	r27.u64 = r31.u64;
	// lis r21,8192
	r21.s64 = 536870912;
	// lis r22,16384
	r22.s64 = 1073741824;
	// lis r23,16640
	r23.s64 = 1090519040;
loc_823D17D0:
	// lwz r3,21380(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 21380);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// clrlwi r28,r11,8
	r28.u64 = r11.u32 & 0xFFFFFF;
	// beq 0x823d1810
	if (cr0.eq) goto loc_823D1810;
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(r31.u32, r21.u32, xer);
	// subf r4,r22,r31
	ctx.r4.s64 = r31.s64 - r22.s64;
	// blt cr6,0x823d17f8
	if (cr6.lt) goto loc_823D17F8;
	// subf r4,r23,r31
	ctx.r4.s64 = r31.s64 - r23.s64;
loc_823D17F8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D1810:
	// lwz r11,21520(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 21520);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d1840
	if (cr0.eq) goto loc_823D1840;
	// cmplw cr6,r31,r21
	cr6.compare<uint32_t>(r31.u32, r21.u32, xer);
	// subf r4,r22,r31
	ctx.r4.s64 = r31.s64 - r22.s64;
	// blt cr6,0x823d182c
	if (cr6.lt) goto loc_823D182C;
	// subf r4,r23,r31
	ctx.r4.s64 = r31.s64 - r23.s64;
loc_823D182C:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D1840:
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r9,r9,16128
	ctx.r9.u64 = ctx.r9.u64 | 16128;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// and r11,r11,r25
	r11.u64 = r11.u64 & r25.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// stwx r9,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + r24.u32, ctx.r9.u32);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// and r11,r10,r25
	r11.u64 = ctx.r10.u64 & r25.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwx r31,r9,r24
	PPC_STORE_U32(ctx.r9.u32 + r24.u32, r31.u32);
	// and r29,r11,r25
	r29.u64 = r11.u64 & r25.u64;
	// stwx r28,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + r24.u32, r28.u32);
	// bne 0x823d17d0
	if (!cr0.eq) goto loc_823D17D0;
loc_823D1884:
	// stw r29,10824(r26)
	PPC_STORE_U32(r26.u32 + 10824, r29.u32);
	// sync 
	// lis r11,32712
	r11.s64 = 2143813632;
	// stw r29,1812(r11)
	PPC_MM_STORE_U32(r11.u32 + 1812, r29.u32);
	// eieio 
	// sync 
	// lwz r3,21380(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 21380);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d18b8
	if (cr0.eq) goto loc_823D18B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D18B8:
	// lwz r11,21520(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 21520);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d18dc
	if (cr0.eq) goto loc_823D18DC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D18DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823D18E4"))) PPC_WEAK_FUNC(sub_823D18E4);
PPC_FUNC_IMPL(__imp__sub_823D18E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D18E8"))) PPC_WEAK_FUNC(sub_823D18E8);
PPC_FUNC_IMPL(__imp__sub_823D18E8) {
	PPC_FUNC_PROLOGUE();
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r11,-1
	r11.s64 = -1;
	// addi r27,r29,11688
	r27.s64 = r29.s64 + 11688;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// li r26,0
	r26.s64 = 0;
	// ld r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U64(r27.u32 + 0);
	// li r28,1
	r28.s64 = 1;
	// cmpld cr6,r10,r11
	cr6.compare<uint64_t>(ctx.r10.u64, r11.u64, xer);
	// bne cr6,0x823d1924
	if (!cr6.eq) goto loc_823D1924;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_823D1924:
	// lbz r11,10814(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 10814);
	// rlwinm r24,r11,30,31,31
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// add r11,r24,r28
	r11.u64 = r24.u64 + r28.u64;
	// mulli r23,r11,11
	r23.s64 = r11.s64 * 11;
	// cmplwi r23,0
	cr0.compare<uint32_t>(r23.u32, 0, xer);
	// bne 0x823d1944
	if (!cr0.eq) goto loc_823D1944;
loc_823D193C:
	// stw r26,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r26.u32);
	// b 0x823d1aa0
	goto loc_823D1AA0;
loc_823D1944:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d1618
	sub_823D1618(ctx, base);
	// mr. r25,r3
	r25.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x823d193c
	if (cr0.eq) goto loc_823D193C;
	// lis r11,1
	r11.s64 = 65536;
	// addi r7,r25,-4
	ctx.r7.s64 = r25.s64 + -4;
	// ori r30,r11,2607
	r30.u64 = r11.u64 | 2607;
	// lis r11,-16380
	r11.s64 = -1073479680;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// ori r31,r11,15360
	r31.u64 = r11.u64 | 15360;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x823d19fc
	if (cr6.eq) goto loc_823D19FC;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823d11f0
	sub_823D11F0(ctx, base);
	// li r11,2609
	r11.s64 = 2609;
	// lis r8,768
	ctx.r8.s64 = 50331648;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// li r3,2609
	ctx.r3.s64 = 2609;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// addi r9,r11,4095
	ctx.r9.s64 = r11.s64 + 4095;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// li r7,3
	ctx.r7.s64 = 3;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r27,8
	r27.s64 = 8;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r20.u32);
	r11.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_823D19FC:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x823d1a84
	if (cr6.eq) goto loc_823D1A84;
	// li r9,2609
	ctx.r9.s64 = 2609;
	// lwz r11,14752(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 14752);
	// lwz r10,14756(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 14756);
	// lis r5,256
	ctx.r5.s64 = 16777216;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,2609
	ctx.r3.s64 = 2609;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r8,512
	r11.s64 = ctx.r8.s64 + 512;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwu r30,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r7.u32 = ea;
	// li r29,8
	r29.s64 = 8;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r7.u32 = ea;
	// stwu r31,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r31.u32);
	ctx.r7.u32 = ea;
	// stwu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r7.u32 = ea;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// stwu r26,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r7.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// stwu r29,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r7.u32 = ea;
loc_823D1A84:
	// rlwinm r11,r25,12,20,31
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r25,3
	ctx.r10.u64 = r25.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// stw r23,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r23.u32);
loc_823D1AA0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_823D1AA8"))) PPC_WEAK_FUNC(sub_823D1AA8);
PPC_FUNC_IMPL(__imp__sub_823D1AA8) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// ori r4,r9,15104
	ctx.r4.u64 = ctx.r9.u64 | 15104;
	// lis r9,-16382
	ctx.r9.s64 = -1073610752;
	// lwz r8,14768(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 14768);
	// li r3,32767
	ctx.r3.s64 = 32767;
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// ori r9,r9,22528
	ctx.r9.u64 = ctx.r9.u64 | 22528;
	// lwz r6,10780(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 10780);
	// clrlwi r5,r8,30
	ctx.r5.u64 = ctx.r8.u32 & 0x3;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lwz r9,10768(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 10768);
	// stw r8,13100(r11)
	PPC_STORE_U32(r11.u32 + 13100, ctx.r8.u32);
	// or r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 | ctx.r7.u64;
	// stw r7,13096(r11)
	PPC_STORE_U32(r11.u32 + 13096, ctx.r7.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// rlwinm r4,r9,12,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r7,r9,3
	ctx.r7.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r9,r4,512
	ctx.r9.s64 = ctx.r4.s64 + 512;
	// li r31,3
	r31.s64 = 3;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// li r29,3
	r29.s64 = 3;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// ori r7,r9,2
	ctx.r7.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r8,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r10.u32 = ea;
	// clrlwi r8,r8,3
	ctx.r8.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r31.u32);
	ctx.r10.u32 = ea;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r28,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r10.u32 = ea;
	// stwu r29,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// lwz r9,21380(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 21380);
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823d1b84
	if (!cr6.eq) goto loc_823D1B84;
	// lbz r10,10813(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 10813);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d1b84
	if (cr0.eq) goto loc_823D1B84;
	// lwz r10,10768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 10768);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r10,10768(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 10768);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
loc_823D1B84:
	// addi r10,r6,2
	ctx.r10.s64 = ctx.r6.s64 + 2;
	// stw r10,10780(r11)
	PPC_STORE_U32(r11.u32 + 10780, ctx.r10.u32);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823D1B90"))) PPC_WEAK_FUNC(sub_823D1B90);
PPC_FUNC_IMPL(__imp__sub_823D1B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// lwz r11,10872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10872);
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823d1c2c
	if (cr6.eq) goto loc_823D1C2C;
	// addi r24,r30,10876
	r24.s64 = r30.s64 + 10876;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826e513c
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,10872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10872);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823d1c18
	if (cr6.eq) goto loc_823D1C18;
	// oris r11,r27,33024
	r11.u64 = r27.u64 | 2164260864;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823d1348
	sub_823D1348(ctx, base);
	// lwz r11,10872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10872);
	// li r29,1
	r29.s64 = 1;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,10872(r30)
	PPC_STORE_U32(r30.u32 + 10872, r11.u32);
loc_823D1C18:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826e512c
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x823d1c58
	if (!cr6.eq) goto loc_823D1C58;
loc_823D1C2C:
	// lwz r11,10872(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10872);
	// clrlwi r10,r27,8
	ctx.r10.u64 = r27.u32 & 0xFFFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// oris r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 2164260864;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,10872(r30)
	PPC_STORE_U32(r30.u32 + 10872, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x823d1700
	sub_823D1700(ctx, base);
loc_823D1C58:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823D1C64"))) PPC_WEAK_FUNC(sub_823D1C64);
PPC_FUNC_IMPL(__imp__sub_823D1C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1C68"))) PPC_WEAK_FUNC(sub_823D1C68);
PPC_FUNC_IMPL(__imp__sub_823D1C68) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// beq cr6,0x823d1d24
	if (cr6.eq) goto loc_823D1D24;
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// subf r9,r30,r11
	ctx.r9.s64 = r11.s64 - r30.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x823d1d24
	if (!cr6.lt) goto loc_823D1D24;
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x823d1cc0
	if (!cr6.eq) goto loc_823D1CC0;
	// lwz r11,13088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d1d24
	if (!cr6.eq) goto loc_823D1D24;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823D1CC0:
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// subf r9,r30,r11
	ctx.r9.s64 = r11.s64 - r30.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x823d1d24
	if (!cr6.lt) goto loc_823D1D24;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c69a0
	sub_823C69A0(ctx, base);
	// b 0x823d1d00
	goto loc_823D1D00;
loc_823D1CF0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c6b50
	sub_823C6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d1d1c
	if (cr0.eq) goto loc_823D1D1C;
loc_823D1D00:
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// subf r9,r30,r11
	ctx.r9.s64 = r11.s64 - r30.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x823d1cf0
	if (cr6.lt) goto loc_823D1CF0;
loc_823D1D1C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c69d0
	sub_823C69D0(ctx, base);
loc_823D1D24:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D1D2C"))) PPC_WEAK_FUNC(sub_823D1D2C);
PPC_FUNC_IMPL(__imp__sub_823D1D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1D30"))) PPC_WEAK_FUNC(sub_823D1D30);
PPC_FUNC_IMPL(__imp__sub_823D1D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// rlwinm. r8,r5,0,29,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// rlwinm r10,r5,8,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x3F;
	// bne 0x823d1d50
	if (!cr0.eq) goto loc_823D1D50;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
loc_823D1D50:
	// rlwinm. r8,r5,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r3,-1
	ctx.r3.s64 = -1;
	// beq 0x823d1e18
	if (cr0.eq) goto loc_823D1E18;
	// clrlwi. r8,r5,31
	ctx.r8.u64 = ctx.r5.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lbz r8,10815(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 10815);
	// ori r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 8;
	// stb r8,10815(r11)
	PPC_STORE_U8(r11.u32 + 10815, ctx.r8.u8);
	// bne 0x823d1d80
	if (!cr0.eq) goto loc_823D1D80;
	// li r8,1480
	ctx.r8.s64 = 1480;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
loc_823D1D80:
	// lis r8,1
	ctx.r8.s64 = 65536;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ori r8,r8,1404
	ctx.r8.u64 = ctx.r8.u64 | 1404;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r6,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r9.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// bne cr6,0x823d1da0
	if (!cr6.eq) goto loc_823D1DA0;
	// li r10,4
	ctx.r10.s64 = 4;
loc_823D1DA0:
	// li r8,1400
	ctx.r8.s64 = 1400;
	// li r7,19
	ctx.r7.s64 = 19;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,256
	r31.s64 = 256;
	// li r30,1118
	r30.s64 = 1118;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// lwz r8,12580(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12580);
	// oris r8,r8,49156
	ctx.r8.u64 = ctx.r8.u64 | 3221487616;
	// ori r8,r8,15360
	ctx.r8.u64 = ctx.r8.u64 | 15360;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r9.u32 = ea;
	// lwz r8,10772(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 10772);
	// rlwinm r6,r8,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// clrlwi r7,r8,3
	ctx.r7.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// addi r8,r6,512
	ctx.r8.s64 = ctx.r6.s64 + 512;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// stwu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r9.u32 = ea;
	// stwu r31,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r31.u32);
	ctx.r9.u32 = ea;
	// lwz r8,12580(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12580);
	// oris r8,r8,49152
	ctx.r8.u64 = ctx.r8.u64 | 3221225472;
	// ori r8,r8,21504
	ctx.r8.u64 = ctx.r8.u64 | 21504;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// stwu r30,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r9.u32 = ea;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_823D1E18:
	// rlwinm. r10,r5,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d1e90
	if (cr0.eq) goto loc_823D1E90;
	// lbz r31,10815(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 10815);
	// lis r10,-16380
	ctx.r10.s64 = -1073479680;
	// li r8,19
	ctx.r8.s64 = 19;
	// ori r10,r10,15361
	ctx.r10.u64 = ctx.r10.u64 | 15361;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// li r5,1404
	ctx.r5.s64 = 1404;
	// lis r4,2989
	ctx.r4.s64 = 195887104;
	// ori r4,r4,61453
	ctx.r4.u64 = ctx.r4.u64 | 61453;
	// andi. r31,r31,247
	r31.u64 = r31.u64 & 247;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stb r31,10815(r11)
	PPC_STORE_U8(r11.u32 + 10815, r31.u8);
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lwz r11,10772(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 10772);
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r8,512
	r11.s64 = ctx.r8.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_823D1E90:
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D1EA0"))) PPC_WEAK_FUNC(sub_823D1EA0);
PPC_FUNC_IMPL(__imp__sub_823D1EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x823d1c68
	sub_823D1C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D1EBC"))) PPC_WEAK_FUNC(sub_823D1EBC);
PPC_FUNC_IMPL(__imp__sub_823D1EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D1EC0"))) PPC_WEAK_FUNC(sub_823D1EC0);
PPC_FUNC_IMPL(__imp__sub_823D1EC0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r29,16384
	r29.s64 = 1073741824;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x823d1f00
	if (cr0.eq) goto loc_823D1F00;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
loc_823D1F00:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r4,4224
	ctx.r4.s64 = 4224;
	// bl 0x823d1618
	sub_823D1618(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823d1f2c
	if (!cr0.eq) goto loc_823D1F2C;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,16576(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 16576);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// b 0x823d1f9c
	goto loc_823D1F9C;
loc_823D1F2C:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d1f78
	if (cr0.eq) goto loc_823D1F78;
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r31,3
	ctx.r9.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - r29.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823d1f7c
	goto loc_823D1F7C;
loc_823D1F78:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_823D1F7C:
	// rlwinm r11,r31,12,20,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r31,3
	ctx.r10.u64 = r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r3,r29,r11
	ctx.r3.s64 = r11.s64 - r29.s64;
	// addi r4,r3,4224
	ctx.r4.s64 = ctx.r3.s64 + 4224;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
loc_823D1F9C:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// addi r11,r31,4220
	r11.s64 = r31.s64 + 4220;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D1FB8"))) PPC_WEAK_FUNC(sub_823D1FB8);
PPC_FUNC_IMPL(__imp__sub_823D1FB8) {
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
	// lbz r10,10813(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d1ffc
	if (cr0.eq) goto loc_823D1FFC;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// lwz r11,16576(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16576);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, ctx.r10.u8);
	// addi r10,r11,4800
	ctx.r10.s64 = r11.s64 + 4800;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r11,r10,-160
	r11.s64 = ctx.r10.s64 + -160;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// b 0x823d2108
	goto loc_823D2108;
loc_823D1FFC:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x823d2010
	if (!cr6.eq) goto loc_823D2010;
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x823d2018
	goto loc_823D2018;
loc_823D2010:
	// addi r11,r4,14
	r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823D2018:
	// lwz r3,13364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13364);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d2040
	if (cr0.eq) goto loc_823D2040;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823d2040
	if (cr6.eq) goto loc_823D2040;
	// lwz r10,14760(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 14760);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823d2040
	if (cr6.gt) goto loc_823D2040;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823D2040:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bne 0x823d2064
	if (!cr0.eq) goto loc_823D2064;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1410
	sub_823D1410(ctx, base);
	// b 0x823d2080
	goto loc_823D2080;
loc_823D2064:
	// lwz r11,152(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d207c
	if (cr6.eq) goto loc_823D207C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0bc8
	sub_823D0BC8(ctx, base);
	// b 0x823d2080
	goto loc_823D2080;
loc_823D207C:
	// bl 0x823d0e28
	sub_823D0E28(ctx, base);
loc_823D2080:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823d20a4
	if (!cr6.eq) goto loc_823D20A4;
	// lbz r10,10813(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// lwz r11,16576(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16576);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, ctx.r10.u8);
	// addi r10,r11,4800
	ctx.r10.s64 = r11.s64 + 4800;
	// b 0x823d20c8
	goto loc_823D20C8;
loc_823D20A4:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,-4
	r11.s64 = r30.s64 + -4;
	// stw r30,14776(r31)
	PPC_STORE_U32(r31.u32 + 14776, r30.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r29,14764(r31)
	PPC_STORE_U32(r31.u32 + 14764, r29.u32);
	// stw r29,14780(r31)
	PPC_STORE_U32(r31.u32 + 14780, r29.u32);
	// addi r10,r10,-14
	ctx.r10.s64 = ctx.r10.s64 + -14;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_823D20C8:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r11,r10,-160
	r11.s64 = ctx.r10.s64 + -160;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r11,22136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22136);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d2104
	if (!cr0.eq) goto loc_823D2104;
	// lwz r4,14788(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 14788);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823d2104
	if (cr0.eq) goto loc_823D2104;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1c68
	sub_823D1C68(ctx, base);
	// stw r29,14788(r31)
	PPC_STORE_U32(r31.u32 + 14788, r29.u32);
loc_823D2104:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823D2108:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D2110"))) PPC_WEAK_FUNC(sub_823D2110);
PPC_FUNC_IMPL(__imp__sub_823D2110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823d1ec0
	sub_823D1EC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D212C"))) PPC_WEAK_FUNC(sub_823D212C);
PPC_FUNC_IMPL(__imp__sub_823D212C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D2130"))) PPC_WEAK_FUNC(sub_823D2130);
PPC_FUNC_IMPL(__imp__sub_823D2130) {
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
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// lwz r30,14776(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 14776);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r28,r11,4
	r28.s64 = r11.s64 + 4;
	// bne 0x823d2270
	if (!cr0.eq) goto loc_823D2270;
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d21cc
	if (cr0.eq) goto loc_823D21CC;
	// lwz r11,13364(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13364);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d2270
	if (cr0.eq) goto loc_823D2270;
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d2270
	if (!cr6.eq) goto loc_823D2270;
	// subf r11,r30,r28
	r11.s64 = r28.s64 - r30.s64;
	// srawi. r29,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r29.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x823d2270
	if (cr0.eq) goto loc_823D2270;
	// lwz r11,13388(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13388);
	// lwz r3,13384(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13384);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x823d21a0
	if (cr6.lt) goto loc_823D21A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0d80
	sub_823D0D80(ctx, base);
loc_823D21A0:
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// oris r9,r29,33024
	ctx.r9.u64 = r29.u64 | 2164260864;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r8,13384(r31)
	PPC_STORE_U32(r31.u32 + 13384, ctx.r8.u32);
	// b 0x823d2270
	goto loc_823D2270;
loc_823D21CC:
	// lwz r11,13088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d2230
	if (cr6.eq) goto loc_823D2230;
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// subf r10,r30,r28
	ctx.r10.s64 = r28.s64 - r30.s64;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// srawi. r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r29.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// beq 0x823d2270
	if (cr0.eq) goto loc_823D2270;
	// addi r3,r31,13224
	ctx.r3.s64 = r31.s64 + 13224;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d2218
	if (!cr6.gt) goto loc_823D2218;
	// bl 0x823d1ec0
	sub_823D1EC0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D2218:
	// oris r10,r29,33024
	ctx.r10.u64 = r29.u64 | 2164260864;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,13232(r31)
	PPC_STORE_U32(r31.u32 + 13232, ctx.r9.u32);
	// b 0x823d2270
	goto loc_823D2270;
loc_823D2230:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1aa8
	sub_823D1AA8(ctx, base);
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r8,r31,13224
	ctx.r8.s64 = r31.s64 + 13224;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// subf r11,r30,r4
	r11.s64 = ctx.r4.s64 - r30.s64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r6,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r6.s64 = r11.s32 >> 2;
	// bl 0x823d1b90
	sub_823D1B90(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_823D2270:
	// addi r11,r28,31
	r11.s64 = r28.s64 + 31;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d229c
	if (!cr6.gt) goto loc_823D229C;
	// addi r11,r28,-4
	r11.s64 = r28.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x823d1fb8
	sub_823D1FB8(ctx, base);
	// b 0x823d22ac
	goto loc_823D22AC;
loc_823D229C:
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r11,-4
	ctx.r10.s64 = r11.s64 + -4;
	// stw r11,14776(r31)
	PPC_STORE_U32(r31.u32 + 14776, r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_823D22AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823D22B4"))) PPC_WEAK_FUNC(sub_823D22B4);
PPC_FUNC_IMPL(__imp__sub_823D22B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D22B8"))) PPC_WEAK_FUNC(sub_823D22B8);
PPC_FUNC_IMPL(__imp__sub_823D22B8) {
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
	// lwz r11,13088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13088);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d2330
	if (!cr6.eq) goto loc_823D2330;
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d2330
	if (!cr0.eq) goto loc_823D2330;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x823d18e8
	sub_823D18E8(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823d2330
	if (cr6.eq) goto loc_823D2330;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1618
	sub_823D1618(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x823d2330
	if (cr0.eq) goto loc_823D2330;
	// addi r8,r31,13224
	ctx.r8.s64 = r31.s64 + 13224;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1b90
	sub_823D1B90(ctx, base);
loc_823D2330:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d2130
	sub_823D2130(ctx, base);
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d2384
	if (!cr0.eq) goto loc_823D2384;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17968(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17968);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823d2384
	if (cr6.eq) goto loc_823D2384;
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d2384
	if (!cr0.eq) goto loc_823D2384;
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2
	ctx.r4.s64 = r11.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1c68
	sub_823D1C68(ctx, base);
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stb r11,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, r11.u8);
loc_823D2384:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
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

__attribute__((alias("__imp__sub_823D23A0"))) PPC_WEAK_FUNC(sub_823D23A0);
PPC_FUNC_IMPL(__imp__sub_823D23A0) {
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
	// lwz r31,10780(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10780);
	// stw r31,10800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10800, r31.u32);
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
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

__attribute__((alias("__imp__sub_823D23D4"))) PPC_WEAK_FUNC(sub_823D23D4);
PPC_FUNC_IMPL(__imp__sub_823D23D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D23D8"))) PPC_WEAK_FUNC(sub_823D23D8);
PPC_FUNC_IMPL(__imp__sub_823D23D8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823d2438
	if (cr6.eq) goto loc_823D2438;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x823d2418
	if (!cr6.eq) goto loc_823D2418;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823D2418:
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// subf r9,r30,r11
	ctx.r9.s64 = r11.s64 - r30.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subfc r11,r11,r9
	xer.ca = ctx.r9.u32 >= r11.u32;
	r11.s64 = ctx.r9.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
loc_823D2438:
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

__attribute__((alias("__imp__sub_823D2450"))) PPC_WEAK_FUNC(sub_823D2450);
PPC_FUNC_IMPL(__imp__sub_823D2450) {
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
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823d247c
	if (!cr6.gt) goto loc_823D247C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823D247C:
	// li r11,1480
	r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,3332
	ctx.r9.s64 = 3332;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823D24B4"))) PPC_WEAK_FUNC(sub_823D24B4);
PPC_FUNC_IMPL(__imp__sub_823D24B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D24B8"))) PPC_WEAK_FUNC(sub_823D24B8);
PPC_FUNC_IMPL(__imp__sub_823D24B8) {
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
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d2514
	if (!cr6.gt) goto loc_823D2514;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d2514
	if (!cr6.gt) goto loc_823D2514;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1fb8
	sub_823D1FB8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x823d2518
	if (cr0.eq) goto loc_823D2518;
loc_823D2514:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
loc_823D2518:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D2520"))) PPC_WEAK_FUNC(sub_823D2520);
PPC_FUNC_IMPL(__imp__sub_823D2520) {
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
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d254c
	if (!cr6.gt) goto loc_823D254C;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D254C:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r4,10780(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x823d1c68
	sub_823D1C68(ctx, base);
loc_823D2574:
	// lwz r11,10872(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10872);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d2574
	if (!cr6.eq) goto loc_823D2574;
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

__attribute__((alias("__imp__sub_823D2594"))) PPC_WEAK_FUNC(sub_823D2594);
PPC_FUNC_IMPL(__imp__sub_823D2594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D2598"))) PPC_WEAK_FUNC(sub_823D2598);
PPC_FUNC_IMPL(__imp__sub_823D2598) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823d25cc
	if (!cr6.gt) goto loc_823D25CC;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823D25CC:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1d30
	sub_823D1D30(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823D25EC"))) PPC_WEAK_FUNC(sub_823D25EC);
PPC_FUNC_IMPL(__imp__sub_823D25EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D25F0"))) PPC_WEAK_FUNC(sub_823D25F0);
PPC_FUNC_IMPL(__imp__sub_823D25F0) {
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
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d2614
	if (cr6.eq) goto loc_823D2614;
	// bl 0x823d2520
	sub_823D2520(ctx, base);
loc_823D2614:
	// lwz r10,14752(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 14752);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823d2664
	if (cr0.eq) goto loc_823D2664;
	// lwz r11,14756(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14756);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// rlwinm r8,r11,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// addi r5,r9,512
	ctx.r5.s64 = ctx.r9.s64 + 512;
	// rlwinm r9,r8,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// clrlwi r8,r11,3
	ctx.r8.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r5,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r4,r7,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r7.s64;
	// subf r3,r6,r11
	ctx.r3.s64 = r11.s64 - ctx.r6.s64;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
loc_823D2664:
	// lis r30,-20096
	r30.s64 = -1317011456;
	// lwz r3,14684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 14684);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,14688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 14688);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,14684(r31)
	PPC_STORE_U32(r31.u32 + 14684, r29.u32);
	// stw r29,14688(r31)
	PPC_STORE_U32(r31.u32 + 14688, r29.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// bl 0x826e51ec
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,10772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 10772);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,10768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x823d26c4
	if (!cr6.eq) goto loc_823D26C4;
loc_823D26BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d29f8
	goto loc_823D29F8;
loc_823D26C4:
	// lwz r26,4(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r28,8(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r25,12(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// lwz r30,16(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// bne 0x823d26e8
	if (!cr0.eq) goto loc_823D26E8;
	// lis r26,0
	r26.s64 = 0;
	// ori r26,r26,32768
	r26.u64 = r26.u64 | 32768;
loc_823D26E8:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x823d26f4
	if (!cr6.eq) goto loc_823D26F4;
	// lis r25,32
	r25.s64 = 2097152;
loc_823D26F4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d2700
	if (!cr6.eq) goto loc_823D2700;
	// li r11,32
	r11.s64 = 32;
loc_823D2700:
	// divwu r27,r25,r11
	r27.u32 = r25.u32 / r11.u32;
	// twllei r11,0
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x823d2724
	if (!cr6.eq) goto loc_823D2724;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,14684(r31)
	PPC_STORE_U32(r31.u32 + 14684, r28.u32);
loc_823D2724:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823d2750
	if (!cr6.eq) goto loc_823D2750;
	// lis r11,8
	r11.s64 = 524288;
	// lis r4,-30848
	ctx.r4.s64 = -2021654528;
	// subfc r11,r11,r25
	xer.ca = r25.u32 >= r11.u32;
	r11.s64 = r25.s64 - r11.s64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwimi r4,r11,28,2,3
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x30000000) | (ctx.r4.u64 & 0xFFFFFFFFCFFFFFFF);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,14688(r31)
	PPC_STORE_U32(r31.u32 + 14688, r30.u32);
loc_823D2750:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823d29f0
	if (cr6.eq) goto loc_823D29F0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823d29f0
	if (cr6.eq) goto loc_823D29F0;
	// lis r4,-23168
	ctx.r4.s64 = -1518338048;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,10768(r31)
	PPC_STORE_U32(r31.u32 + 10768, ctx.r3.u32);
	// beq 0x823d29f0
	if (cr0.eq) goto loc_823D29F0;
	// lis r4,-27264
	ctx.r4.s64 = -1786773504;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,10772(r31)
	PPC_STORE_U32(r31.u32 + 10772, ctx.r3.u32);
	// beq 0x823d29f0
	if (cr0.eq) goto loc_823D29F0;
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r3,10768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,10772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 10772);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// cntlzw r11,r26
	r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// subfic r24,r11,28
	xer.ca = r11.u32 <= 28;
	r24.s64 = 28 - r11.s64;
	// bl 0x826e51dc
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826e51cc
	__imp__VdInitializeRingBuffer(ctx, base);
	// rlwinm r11,r26,23,9,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 23) & 0x7FFFFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r4,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r4.s64 = 31 - r11.s64;
	// cmplwi cr6,r4,19
	cr6.compare<uint32_t>(ctx.r4.u32, 19, xer);
	// ble cr6,0x823d27e0
	if (!cr6.gt) goto loc_823D27E0;
	// li r4,19
	ctx.r4.s64 = 19;
loc_823D27E0:
	// lwz r11,10768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// addi r11,r11,60
	r11.s64 = r11.s64 + 60;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x826e51bc
	__imp__VdEnableRingBufferRPtrWriteBack(ctx, base);
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// rlwinm r11,r25,30,2,31
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 30) & 0x3FFFFFFF;
	// ori r8,r9,61453
	ctx.r8.u64 = ctx.r9.u64 | 61453;
	// rlwinm r9,r26,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r27,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// addi r6,r30,-4
	ctx.r6.s64 = r30.s64 + -4;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r5,r10,-160
	ctx.r5.s64 = ctx.r10.s64 + -160;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lwz r8,10768(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// stw r11,14784(r31)
	PPC_STORE_U32(r31.u32 + 14784, r11.u32);
	// stw r28,14744(r31)
	PPC_STORE_U32(r31.u32 + 14744, r28.u32);
	// stw r30,14752(r31)
	PPC_STORE_U32(r31.u32 + 14752, r30.u32);
	// stw r30,14772(r31)
	PPC_STORE_U32(r31.u32 + 14772, r30.u32);
	// stw r9,14756(r31)
	PPC_STORE_U32(r31.u32 + 14756, ctx.r9.u32);
	// stw r30,14776(r31)
	PPC_STORE_U32(r31.u32 + 14776, r30.u32);
	// stw r27,14760(r31)
	PPC_STORE_U32(r31.u32 + 14760, r27.u32);
	// stw r7,14748(r31)
	PPC_STORE_U32(r31.u32 + 14748, ctx.r7.u32);
	// stw r29,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, r29.u32);
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// stw r29,10824(r31)
	PPC_STORE_U32(r31.u32 + 10824, r29.u32);
	// stw r6,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r6.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r5,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r5.u32);
	// stw r29,14764(r31)
	PPC_STORE_U32(r31.u32 + 14764, r29.u32);
	// bne cr6,0x823d2884
	if (!cr6.eq) goto loc_823D2884;
	// li r11,3
	r11.s64 = 3;
	// stw r11,10780(r31)
	PPC_STORE_U32(r31.u32 + 10780, r11.u32);
loc_823D2884:
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,14768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14768);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// lwz r9,10768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
	// lwz r11,10768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x826e51ec
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// lis r10,-16367
	ctx.r10.s64 = -1072627712;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// ori r10,r10,18432
	ctx.r10.u64 = ctx.r10.u64 | 18432;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// addi r11,r11,-18972
	r11.s64 = r11.s64 + -18972;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,1023
	ctx.r10.s64 = 1023;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823D28E8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823d28e8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823D28E8;
	// li r11,2048
	r11.s64 = 2048;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r29.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r29.u32);
	// sth r11,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, r11.u16);
	// sth r11,10798(r31)
	PPC_STORE_U16(r31.u32 + 10798, r11.u16);
	// li r11,7
	r11.s64 = 7;
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// sth r10,10796(r31)
	PPC_STORE_U16(r31.u32 + 10796, ctx.r10.u16);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// bl 0x826e51ac
	__imp__KiApcNormalRoutineNop(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1118
	sub_823D1118(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d2968
	if (!cr6.gt) goto loc_823D2968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D2968:
	// li r10,3330
	ctx.r10.s64 = 3330;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// ori r9,r9,2048
	ctx.r9.u64 = ctx.r9.u64 | 2048;
	// ori r8,r8,2562
	ctx.r8.u64 = ctx.r8.u64 | 2562;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r10,-16368
	ctx.r10.s64 = -1072693248;
	// lis r7,2032
	ctx.r7.s64 = 133169152;
	// lis r6,-16384
	ctx.r6.s64 = -1073741824;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// li r4,477
	ctx.r4.s64 = 477;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r30,476
	r30.s64 = 476;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r29,r3,51
	r29.u64 = ctx.r3.u64 | 51;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// lwz r10,10772(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10772);
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r8,512
	ctx.r10.s64 = ctx.r8.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x823d2450
	sub_823D2450(ctx, base);
	// b 0x823d26bc
	goto loc_823D26BC;
loc_823D29F0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_823D29F8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823D2A00"))) PPC_WEAK_FUNC(sub_823D2A00);
PPC_FUNC_IMPL(__imp__sub_823D2A00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r7,r3,32
	ctx.r7.s64 = ctx.r3.s64 + 32;
	// addi r6,r3,800
	ctx.r6.s64 = ctx.r3.s64 + 800;
	// rlwinm r11,r10,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x823d2a24
	if (!cr6.eq) goto loc_823D2A24;
loc_823D2A1C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823D2A24:
	// clrlwi r8,r10,27
	ctx.r8.u64 = ctx.r10.u32 & 0x1F;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r10,-1
	ctx.r10.s64 = -1;
	// srw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// andc r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmplwi cr6,r8,32
	cr6.compare<uint32_t>(ctx.r8.u32, 32, xer);
	// bne cr6,0x823d2a68
	if (!cr6.eq) goto loc_823D2A68;
loc_823D2A44:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x823d2a44
	if (cr6.eq) goto loc_823D2A44;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// beq cr6,0x823d2a1c
	if (cr6.eq) goto loc_823D2A1C;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
loc_823D2A68:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// srw r5,r5,r8
	ctx.r5.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// bne cr6,0x823d2ab4
	if (!cr6.eq) goto loc_823D2AB4;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// b 0x823d2a90
	goto loc_823D2A90;
loc_823D2A8C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823D2A90:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823d2a8c
	if (cr6.eq) goto loc_823D2A8C;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bne cr6,0x823d2aac
	if (!cr6.eq) goto loc_823D2AAC;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823d2ab4
	goto loc_823D2AB4;
loc_823D2AAC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
loc_823D2AB4:
	// subf r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D2AE0"))) PPC_WEAK_FUNC(sub_823D2AE0);
PPC_FUNC_IMPL(__imp__sub_823D2AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r8,r5,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r4,27
	ctx.r7.u64 = ctx.r4.u32 & 0x1F;
	// clrlwi r5,r5,27
	ctx.r5.u64 = ctx.r5.u32 & 0x1F;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// beq cr6,0x823d2b90
	if (cr6.eq) goto loc_823D2B90;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// li r10,-1
	ctx.r10.s64 = -1;
	// bne cr6,0x823d2b34
	if (!cr6.eq) goto loc_823D2B34;
	// srw r8,r10,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// b 0x823d2c10
	goto loc_823D2C10;
loc_823D2B34:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x823d2b80
	if (!cr6.lt) goto loc_823D2B80;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r9,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823d2b78
	if (cr0.eq) goto loc_823D2B78;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823D2B6C:
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823d2b6c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823D2B6C;
loc_823D2B78:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_823D2B80:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// orc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ~ctx.r10.u64;
	// b 0x823d2c10
	goto loc_823D2C10;
loc_823D2B90:
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// li r10,-1
	ctx.r10.s64 = -1;
	// bne cr6,0x823d2bb4
	if (!cr6.eq) goto loc_823D2BB4;
	// srw r8,r10,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// andc r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r8.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// b 0x823d2c10
	goto loc_823D2C10;
loc_823D2BB4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r7,r10,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x823d2c04
	if (!cr6.lt) goto loc_823D2C04;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addic. r9,r9,1
	xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823d2bfc
	if (cr0.eq) goto loc_823D2BFC;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823D2BF0:
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x823d2bf0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823D2BF0;
loc_823D2BFC:
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_823D2C04:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
loc_823D2C10:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D2C18"))) PPC_WEAK_FUNC(sub_823D2C18);
PPC_FUNC_IMPL(__imp__sub_823D2C18) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,17976(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 17976);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// add r5,r30,r29
	ctx.r5.u64 = r30.u64 + r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x823d2ae0
	sub_823D2AE0(ctx, base);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D2C68"))) PPC_WEAK_FUNC(sub_823D2C68);
PPC_FUNC_IMPL(__imp__sub_823D2C68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// li r27,-1
	r27.s64 = -1;
	// addi r30,r11,17976
	r30.s64 = r11.s64 + 17976;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r27
	r26.u64 = r27.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823d2d20
	if (!cr0.eq) goto loc_823D2D20;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,804
	ctx.r3.s64 = 804;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823d2cb8
	if (!cr0.eq) goto loc_823D2CB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d2dd4
	goto loc_823D2DD4;
loc_823D2CB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4bdc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r10,21845
	ctx.r10.s64 = 1431633920;
	// li r11,6144
	r11.s64 = 6144;
	// ori r10,r10,21845
	ctx.r10.u64 = ctx.r10.u64 | 21845;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r10,800(r31)
	PPC_STORE_U32(r31.u32 + 800, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823D2CD8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r9,r29
	cr6.compare<int32_t>(ctx.r9.s32, r29.s32, xer);
	// bne cr6,0x823d2cfc
	if (!cr6.eq) goto loc_823D2CFC;
	// stwcx. r31,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(r31.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823d2cd8
	if (!cr0.eq) goto loc_823D2CD8;
	// b 0x823d2d04
	goto loc_823D2D04;
loc_823D2CFC:
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
loc_823D2D04:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d2d20
	if (cr6.eq) goto loc_823D2D20;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_823D2D20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bgt cr6,0x823d2db8
	if (cr6.gt) goto loc_823D2DB8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// bl 0x823d2a00
	sub_823D2A00(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d2db8
	if (cr0.eq) goto loc_823D2DB8;
loc_823D2D54:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// blt cr6,0x823d2d70
	if (cr6.lt) goto loc_823D2D70;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x823d2d70
	if (!cr6.lt) goto loc_823D2D70;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_823D2D70:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823d2a00
	sub_823D2A00(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d2d54
	if (!cr0.eq) goto loc_823D2D54;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x823d2db8
	if (cr6.eq) goto loc_823D2DB8;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r6,1
	ctx.r6.s64 = 1;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x823d2ae0
	sub_823D2AE0(ctx, base);
	// mr r26,r30
	r26.u64 = r30.u64;
loc_823D2DB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// subf r11,r26,r27
	r11.s64 = r27.s64 - r26.s64;
	// stw r26,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r26.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_823D2DD4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823D2DDC"))) PPC_WEAK_FUNC(sub_823D2DDC);
PPC_FUNC_IMPL(__imp__sub_823D2DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D2DE0"))) PPC_WEAK_FUNC(sub_823D2DE0);
PPC_FUNC_IMPL(__imp__sub_823D2DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r9,2(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r10,r11,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r11,r9,26,6,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r9,1023
	cr6.compare<uint32_t>(ctx.r9.u32, 1023, xer);
	// ble cr6,0x823d2e04
	if (!cr6.gt) goto loc_823D2E04;
	// li r11,1023
	r11.s64 = 1023;
loc_823D2E04:
	// rlwinm r10,r10,1,15,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFE;
	// rlwinm r11,r11,1,15,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1FFFE;
	// lhzx r9,r10,r5
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// rotlwi r9,r9,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// sth r9,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r9.u16);
	// lhzx r11,r11,r5
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r5.u32);
	// lhzx r10,r10,r5
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r5.u32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D2E30"))) PPC_WEAK_FUNC(sub_823D2E30);
PPC_FUNC_IMPL(__imp__sub_823D2E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x823d2e8c
	if (cr6.eq) goto loc_823D2E8C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-18792(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18792);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x823d2e60
	if (cr6.gt) goto loc_823D2E60;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-18796(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18796);
	f0.f64 = double(temp.f32);
	// b 0x823d2ea4
	goto loc_823D2EA4;
loc_823D2E60:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-18800(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18800);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfd f2,-18808(r11)
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -18808);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-18816(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18816);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x823d2ed0
	goto loc_823D2ED0;
loc_823D2E8C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-18824(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18824);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x823d2eac
	if (cr6.gt) goto loc_823D2EAC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-18832(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18832);
	f0.f64 = double(temp.f32);
loc_823D2EA4:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// b 0x823d2ed0
	goto loc_823D2ED0;
loc_823D2EAC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f2,-18840(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -18840);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,-18844(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18844);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,-18800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18800);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
loc_823D2ED0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D2EE0"))) PPC_WEAK_FUNC(sub_823D2EE0);
PPC_FUNC_IMPL(__imp__sub_823D2EE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x823d2f3c
	if (cr6.eq) goto loc_823D2F3C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-18728(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18728);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x823d2f10
	if (!cr6.lt) goto loc_823D2F10;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-18732(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18732);
	f0.f64 = double(temp.f32);
	// b 0x823d2f54
	goto loc_823D2F54;
loc_823D2F10:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-18736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18736);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfd f2,-18744(r11)
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -18744);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-18752(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18752);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x823d2f80
	goto loc_823D2F80;
loc_823D2F3C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-18760(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -18760);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bge cr6,0x823d2f5c
	if (!cr6.lt) goto loc_823D2F5C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-18768(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18768);
	f0.f64 = double(temp.f32);
loc_823D2F54:
	// fmuls f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// b 0x823d2f80
	goto loc_823D2F80;
loc_823D2F5C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f2,-18776(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -18776);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfs f0,-18784(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18784);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,-18736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18736);
	ctx.f13.f64 = double(temp.f32);
	// fmsubs f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 - ctx.f13.f64));
loc_823D2F80:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D2F90"))) PPC_WEAK_FUNC(sub_823D2F90);
PPC_FUNC_IMPL(__imp__sub_823D2F90) {
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
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x826e51fc
	__imp__VdGetCurrentDisplayGamma(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r31,0
	r31.s64 = 0;
	// lfd f29,-28592(r8)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + -28592);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// lfd f30,-18712(r9)
	f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18712);
	// lfs f31,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lfs f28,-18720(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18720);
	f28.f64 = double(temp.f32);
loc_823D2FE4:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(f0.f64 * f28.f64));
	// bne cr6,0x823d300c
	if (!cr6.eq) goto loc_823D300C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d2e30
	sub_823D2E30(ctx, base);
loc_823D300C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x823d3058
	if (cr6.eq) goto loc_823D3058;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x823d304c
	if (cr6.eq) goto loc_823D304C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x823d304c
	if (!cr6.eq) goto loc_823D304C;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x823d3038
	if (cr6.eq) goto loc_823D3038;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// b 0x823d3040
	goto loc_823D3040;
loc_823D3038:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fdivs f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 / f0.f64));
loc_823D3040:
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x823d3060
	goto loc_823D3060;
loc_823D304C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823d2ee0
	sub_823D2EE0(ctx, base);
	// b 0x823d3060
	goto loc_823D3060;
loc_823D3058:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823d2e30
	sub_823D2E30(ctx, base);
loc_823D3060:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x823d3070
	if (cr6.eq) goto loc_823D3070;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d2e30
	sub_823D2E30(ctx, base);
loc_823D3070:
	// fmadd f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f30.f64 + f29.f64;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x823d3094
	if (!cr6.lt) goto loc_823D3094;
	// li r11,0
	r11.s64 = 0;
	// b 0x823d30a0
	goto loc_823D30A0;
loc_823D3094:
	// cmpwi cr6,r11,1023
	cr6.compare<int32_t>(r11.s32, 1023, xer);
	// ble cr6,0x823d30a0
	if (!cr6.gt) goto loc_823D30A0;
	// li r11,1023
	r11.s64 = 1023;
loc_823D30A0:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpwi cr6,r31,1024
	cr6.compare<int32_t>(r31.s32, 1024, xer);
	// blt cr6,0x823d2fe4
	if (cr6.lt) goto loc_823D2FE4;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r11,r29,512
	r11.s64 = r29.s64 + 512;
	// subf r8,r29,r28
	ctx.r8.s64 = r28.s64 - r29.s64;
	// li r9,256
	ctx.r9.s64 = 256;
loc_823D30C4:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// rlwinm r7,r7,27,5,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFE;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lhzx r7,r7,r6
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r6.u32);
	// rotlwi r7,r7,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// sth r7,-512(r11)
	PPC_STORE_U16(r11.u32 + -512, ctx.r7.u16);
	// lhzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// rlwinm r7,r7,27,5,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r7,r7,r5
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r5.u32);
	// rotlwi r7,r7,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// sth r7,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r7.u16);
	// lhz r7,1024(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 1024);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r7,r7,27,5,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFE;
	// lhzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// rotlwi r7,r7,6
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 6);
	// sth r7,512(r11)
	PPC_STORE_U16(r11.u32 + 512, ctx.r7.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// bne 0x823d30c4
	if (!cr0.eq) goto loc_823D30C4;
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d634
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823D312C"))) PPC_WEAK_FUNC(sub_823D312C);
PPC_FUNC_IMPL(__imp__sub_823D312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3130"))) PPC_WEAK_FUNC(sub_823D3130);
PPC_FUNC_IMPL(__imp__sub_823D3130) {
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
	// stwu r1,-2240(r1)
	ea = -2240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x826e51fc
	__imp__VdGetCurrentDisplayGamma(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r31,0
	r31.s64 = 0;
	// lfd f29,-28592(r8)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + -28592);
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// lfd f30,-18712(r9)
	f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -18712);
	// lfs f31,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f31.f64 = double(temp.f32);
	// lfs f28,-18720(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18720);
	f28.f64 = double(temp.f32);
loc_823D3184:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f1,f0,f28
	ctx.f1.f64 = double(float(f0.f64 * f28.f64));
	// bne cr6,0x823d31ac
	if (!cr6.eq) goto loc_823D31AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823d2e30
	sub_823D2E30(ctx, base);
loc_823D31AC:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x823d31f8
	if (cr6.eq) goto loc_823D31F8;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x823d31ec
	if (cr6.eq) goto loc_823D31EC;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x823d31ec
	if (!cr6.eq) goto loc_823D31EC;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x823d31d8
	if (cr6.eq) goto loc_823D31D8;
	// lfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// b 0x823d31e0
	goto loc_823D31E0;
loc_823D31D8:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// fdivs f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 / f0.f64));
loc_823D31E0:
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// b 0x823d3200
	goto loc_823D3200;
loc_823D31EC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823d2ee0
	sub_823D2EE0(ctx, base);
	// b 0x823d3200
	goto loc_823D3200;
loc_823D31F8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823d2e30
	sub_823D2E30(ctx, base);
loc_823D3200:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x823d3210
	if (cr6.eq) goto loc_823D3210;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823d2e30
	sub_823D2E30(ctx, base);
loc_823D3210:
	// fmadd f0,f1,f30,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64 * f30.f64 + f29.f64;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x823d3234
	if (!cr6.lt) goto loc_823D3234;
	// li r11,0
	r11.s64 = 0;
	// b 0x823d3240
	goto loc_823D3240;
loc_823D3234:
	// cmpwi cr6,r11,1023
	cr6.compare<int32_t>(r11.s32, 1023, xer);
	// ble cr6,0x823d3240
	if (!cr6.gt) goto loc_823D3240;
	// li r11,1023
	r11.s64 = 1023;
loc_823D3240:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// cmpwi cr6,r31,1024
	cr6.compare<int32_t>(r31.s32, 1024, xer);
	// blt cr6,0x823d3184
	if (cr6.lt) goto loc_823D3184;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r8,r29,512
	ctx.r8.s64 = r29.s64 + 512;
	// subf r31,r29,r28
	r31.s64 = r28.s64 - r29.s64;
	// li r6,128
	ctx.r6.s64 = 128;
loc_823D3264:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r8,-512
	ctx.r3.s64 = ctx.r8.s64 + -512;
	// bl 0x823d2de0
	sub_823D2DE0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// add r4,r31,r8
	ctx.r4.u64 = r31.u64 + ctx.r8.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x823d2de0
	sub_823D2DE0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r7,1024
	ctx.r4.s64 = ctx.r7.s64 + 1024;
	// addi r3,r8,512
	ctx.r3.s64 = ctx.r8.s64 + 512;
	// bl 0x823d2de0
	sub_823D2DE0(ctx, base);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x823d3264
	if (!cr0.eq) goto loc_823D3264;
	// addi r1,r1,2240
	ctx.r1.s64 = ctx.r1.s64 + 2240;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d634
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823D32B4"))) PPC_WEAK_FUNC(sub_823D32B4);
PPC_FUNC_IMPL(__imp__sub_823D32B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D32B8"))) PPC_WEAK_FUNC(sub_823D32B8);
PPC_FUNC_IMPL(__imp__sub_823D32B8) {
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
	// li r4,2309
	ctx.r4.s64 = 2309;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823d24b8
	sub_823D24B8(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r11,6433
	ctx.r8.u64 = r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,1024
	r11.s64 = r31.s64 + 1024;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_823D3314:
	// lhz r8,-1024(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -1024);
	// li r6,6437
	ctx.r6.s64 = 6437;
	// lhz r7,-512(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + -512);
	// lis r4,-16379
	ctx.r4.s64 = -1073414144;
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// li r3,6434
	ctx.r3.s64 = 6434;
	// rlwimi r7,r8,10,6,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 10) & 0x3FF0000) | (ctx.r7.u64 & 0xFFFFFFFFFC00FFFF);
	// rlwinm r8,r5,26,6,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 26) & 0x3FFFFFF;
	// rlwinm r7,r7,4,2,21
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0x3FFFFC00;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// ori r4,r4,17664
	ctx.r4.u64 = ctx.r4.u64 | 17664;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r9,256
	cr6.compare<uint32_t>(ctx.r9.u32, 256, xer);
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x823d3314
	if (cr6.lt) goto loc_823D3314;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_823D3398"))) PPC_WEAK_FUNC(sub_823D3398);
PPC_FUNC_IMPL(__imp__sub_823D3398) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,1413
	ctx.r4.s64 = 1413;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823d24b8
	sub_823D24B8(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r8,r11,6433
	ctx.r8.u64 = r11.u64 | 6433;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,6439
	ctx.r6.s64 = 6439;
	// li r5,7
	ctx.r5.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// addi r11,r31,514
	r11.s64 = r31.s64 + 514;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
loc_823D33EC:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,-16379
	ctx.r7.s64 = -1073414144;
	// ori r8,r8,39204
	ctx.r8.u64 = ctx.r8.u64 | 39204;
	// ori r7,r7,17664
	ctx.r7.u64 = ctx.r7.u64 | 17664;
	// li r6,7
	ctx.r6.s64 = 7;
	// li r5,6436
	ctx.r5.s64 = 6436;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lhz r8,-512(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -512);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhz r31,-514(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + -514);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// cmplwi cr6,r9,128
	cr6.compare<uint32_t>(ctx.r9.u32, 128, xer);
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | r31.u64;
	// li r31,6434
	r31.s64 = 6434;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// lhz r29,-2(r11)
	r29.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | r29.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// lhz r8,512(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 512);
	// lhz r29,510(r11)
	r29.u64 = PPC_LOAD_U16(r11.u32 + 510);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rotlwi r8,r8,16
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 16);
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | r29.u64;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r4,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r10.u32 = ea;
	// stwu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r10.u32 = ea;
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r31.u32);
	ctx.r10.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x823d33ec
	if (cr6.lt) goto loc_823D33EC;
	// stw r10,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D3488"))) PPC_WEAK_FUNC(sub_823D3488);
PPC_FUNC_IMPL(__imp__sub_823D3488) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,1024
	r11.s64 = ctx.r3.s64 + 1024;
loc_823D3490:
	// li r9,255
	ctx.r9.s64 = 255;
	// lis r8,3
	ctx.r8.s64 = 196608;
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// ori r8,r8,65280
	ctx.r8.u64 = ctx.r8.u64 | 65280;
	// rlwinm r9,r9,6,10,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3FFFC0;
	// addi r10,r10,1023
	ctx.r10.s64 = ctx.r10.s64 + 1023;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// sth r9,-1024(r11)
	PPC_STORE_U16(r11.u32 + -1024, ctx.r9.u16);
	// sth r9,-512(r11)
	PPC_STORE_U16(r11.u32 + -512, ctx.r9.u16);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// blt cr6,0x823d3490
	if (cr6.lt) goto loc_823D3490;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d2f90
	sub_823D2F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D34D8"))) PPC_WEAK_FUNC(sub_823D34D8);
PPC_FUNC_IMPL(__imp__sub_823D34D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D34DC"))) PPC_WEAK_FUNC(sub_823D34DC);
PPC_FUNC_IMPL(__imp__sub_823D34DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D34E0"))) PPC_WEAK_FUNC(sub_823D34E0);
PPC_FUNC_IMPL(__imp__sub_823D34E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r3,512
	r11.s64 = ctx.r3.s64 + 512;
	// li r7,127
	ctx.r7.s64 = 127;
loc_823D34EC:
	// divwu r10,r9,r7
	ctx.r10.u32 = ctx.r9.u32 / ctx.r7.u32;
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r6,r8,65408
	ctx.r6.u64 = ctx.r8.u64 | 65408;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// divwu r8,r9,r7
	ctx.r8.u32 = ctx.r9.u32 / ctx.r7.u32;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r10,-512(r11)
	PPC_STORE_U16(r11.u32 + -512, ctx.r10.u16);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// sth r10,512(r11)
	PPC_STORE_U16(r11.u32 + 512, ctx.r10.u16);
	// sth r8,-510(r11)
	PPC_STORE_U16(r11.u32 + -510, ctx.r8.u16);
	// sth r8,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r8.u16);
	// sth r8,514(r11)
	PPC_STORE_U16(r11.u32 + 514, ctx.r8.u16);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// blt cr6,0x823d34ec
	if (cr6.lt) goto loc_823D34EC;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823d3130
	sub_823D3130(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D3548"))) PPC_WEAK_FUNC(sub_823D3548);
PPC_FUNC_IMPL(__imp__sub_823D3548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D354C"))) PPC_WEAK_FUNC(sub_823D354C);
PPC_FUNC_IMPL(__imp__sub_823D354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3550"))) PPC_WEAK_FUNC(sub_823D3550);
PPC_FUNC_IMPL(__imp__sub_823D3550) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
loc_823D3570:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// twllei r30,0
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// divw. r11,r10,r30
	r11.s32 = ctx.r10.s32 / r30.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r10,r30,r10
	ctx.r10.u64 = r30.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	// ble 0x823d35e0
	if (!cr0.gt) goto loc_823D35E0;
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x823d35ac
	if (cr6.lt) goto loc_823D35AC;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823D35AC:
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// beq cr6,0x823d35dc
	if (cr6.eq) goto loc_823D35DC;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823D35CC:
	// lwzu r9,4(r27)
	ea = 4 + r27.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	r27.u32 = ea;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwu r9,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r4.u32 = ea;
	// bne 0x823d35cc
	if (!cr0.eq) goto loc_823D35CC;
loc_823D35DC:
	// add r28,r11,r28
	r28.u64 = r11.u64 + r28.u64;
loc_823D35E0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823d35fc
	if (cr6.eq) goto loc_823D35FC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r4,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r4.u32);
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// lwz r4,48(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// b 0x823d3570
	goto loc_823D3570;
loc_823D35FC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823D3608"))) PPC_WEAK_FUNC(sub_823D3608);
PPC_FUNC_IMPL(__imp__sub_823D3608) {
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
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,12556(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12556);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d3644
	if (cr0.eq) goto loc_823D3644;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// rlwinm r8,r11,5,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x1;
loc_823D3644:
	// lwz r9,11716(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 11716);
	// lwz r10,10420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10420);
	// rlwinm r9,r9,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r6,10432(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 10432);
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// rlwimi r11,r6,0,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,10432(r31)
	PPC_STORE_U32(r31.u32 + 10432, r11.u32);
	// rlwinm. r5,r9,0,30,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x823d367c
	if (!cr0.eq) goto loc_823D367C;
	// clrlwi r11,r9,31
	r11.u64 = ctx.r9.u32 & 0x1;
	// b 0x823d371c
	goto loc_823D371C;
loc_823D367C:
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// rlwinm r9,r10,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// bne 0x823d3698
	if (!cr0.eq) goto loc_823D3698;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x823d36b4
	if (cr6.eq) goto loc_823D36B4;
	// cmplwi cr6,r9,3
	cr6.compare<uint32_t>(ctx.r9.u32, 3, xer);
	// b 0x823d36a4
	goto loc_823D36A4;
loc_823D3698:
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// beq cr6,0x823d36b4
	if (cr6.eq) goto loc_823D36B4;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
loc_823D36A4:
	// beq cr6,0x823d36b4
	if (cr6.eq) goto loc_823D36B4;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne cr6,0x823d36b8
	if (!cr6.eq) goto loc_823D36B8;
loc_823D36B4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_823D36B8:
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// clrlwi. r6,r10,31
	ctx.r6.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r11,r8,r11
	r11.u64 = ctx.r8.u64 & r11.u64;
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// beq 0x823d371c
	if (cr0.eq) goto loc_823D371C;
	// rlwinm r9,r10,0,18,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3800;
	// rlwinm r8,r10,0,12,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm. r6,r10,0,24,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
	// beq 0x823d371c
	if (cr0.eq) goto loc_823D371C;
	// rlwinm r9,r10,0,0,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0000000;
	// rlwinm r8,r10,0,6,8
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3800000;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
loc_823D371C:
	// lwz r9,10432(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10432);
	// rlwimi r9,r11,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r9,10432(r31)
	PPC_STORE_U32(r31.u32 + 10432, ctx.r9.u32);
	// rlwinm. r11,r9,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d3778
	if (cr0.eq) goto loc_823D3778;
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d37d0
	if (cr0.eq) goto loc_823D37D0;
	// andi. r11,r11,251
	r11.u64 = r11.u64 & 251;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// stb r11,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, r11.u8);
	// ble cr6,0x823d375c
	if (!cr6.gt) goto loc_823D375C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823D375C:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,15
	ctx.r10.s64 = 15;
	// ori r11,r11,17920
	r11.u64 = r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// b 0x823d37d0
	goto loc_823D37D0;
loc_823D3778:
	// clrlwi. r11,r7,31
	r11.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d37d0
	if (cr0.eq) goto loc_823D37D0;
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d37d0
	if (cr0.eq) goto loc_823D37D0;
	// rlwinm r11,r10,28,29,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x7;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x823d37c4
	if (cr6.eq) goto loc_823D37C4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x823d37c4
	if (cr6.eq) goto loc_823D37C4;
	// rlwinm. r10,r9,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d37b4
	if (!cr0.eq) goto loc_823D37B4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x823d37c4
	if (cr6.eq) goto loc_823D37C4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// b 0x823d37c0
	goto loc_823D37C0;
loc_823D37B4:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x823d37c4
	if (cr6.eq) goto loc_823D37C4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
loc_823D37C0:
	// bne cr6,0x823d37d0
	if (!cr6.eq) goto loc_823D37D0;
loc_823D37C4:
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, r11.u8);
loc_823D37D0:
	// ori r3,r30,256
	ctx.r3.u64 = r30.u64 | 256;
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

__attribute__((alias("__imp__sub_823D37EC"))) PPC_WEAK_FUNC(sub_823D37EC);
PPC_FUNC_IMPL(__imp__sub_823D37EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D37F0"))) PPC_WEAK_FUNC(sub_823D37F0);
PPC_FUNC_IMPL(__imp__sub_823D37F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d3820
	if (!cr6.gt) goto loc_823D3820;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D3820:
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r9,r21,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x100;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// ori r25,r10,24832
	r25.u64 = ctx.r10.u64 | 24832;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r28,r10,24576
	r28.u64 = ctx.r10.u64 | 24576;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// ori r26,r10,11521
	r26.u64 = ctx.r10.u64 | 11521;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r24,r10,515
	r24.u64 = ctx.r10.u64 | 515;
	// beq cr6,0x823d3a64
	if (cr6.eq) goto loc_823D3A64;
	// lbz r10,10815(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d3a24
	if (cr0.eq) goto loc_823D3A24;
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823d387c
	if (cr0.eq) goto loc_823D387C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823d390c
	goto loc_823D390C;
loc_823D387C:
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d3904
	if (cr0.eq) goto loc_823D3904;
	// lwz r10,12304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// lwz r9,12592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823d389c
	if (cr6.eq) goto loc_823D389C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d3904
	if (!cr6.eq) goto loc_823D3904;
loc_823D389C:
	// lwz r10,12308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r9,12596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823d38b4
	if (cr6.eq) goto loc_823D38B4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d3904
	if (!cr6.eq) goto loc_823D3904;
loc_823D38B4:
	// lwz r10,12312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r9,12600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823d38cc
	if (cr6.eq) goto loc_823D38CC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d3904
	if (!cr6.eq) goto loc_823D3904;
loc_823D38CC:
	// lwz r10,12316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r9,12604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823d38e4
	if (cr6.eq) goto loc_823D38E4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d3904
	if (!cr6.eq) goto loc_823D3904;
loc_823D38E4:
	// lwz r10,12320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r9,12608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823d38fc
	if (cr6.eq) goto loc_823D38FC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d3904
	if (!cr6.eq) goto loc_823D3904;
loc_823D38FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823d3908
	goto loc_823D3908;
loc_823D3904:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823D3908:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_823D390C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d3a24
	if (cr0.eq) goto loc_823D3A24;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r10,12612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// addic. r30,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	r30.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823d39c4
	if (cr0.lt) goto loc_823D39C4;
loc_823D3930:
	// lwz r10,11716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11716);
	// addi r9,r30,3244
	ctx.r9.s64 = r30.s64 + 3244;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// rlwimi r27,r9,17,0,14
	r27.u64 = (__builtin_rotateleft32(ctx.r9.u32, 17) & 0xFFFE0000) | (r27.u64 & 0xFFFFFFFF0001FFFF);
	// mr r29,r27
	r29.u64 = r27.u64;
	// rlwinm. r10,r10,15,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x7;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d396c
	if (cr0.eq) goto loc_823D396C;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x823d3970
	if (!cr6.eq) goto loc_823D3970;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x823d396c
	if (!cr6.eq) goto loc_823D396C;
	// lbz r10,10815(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d3970
	if (!cr0.eq) goto loc_823D3970;
loc_823D396C:
	// rlwinm r29,r27,0,0,30
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
loc_823D3970:
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,3
	ctx.r8.s64 = 3;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ble cr6,0x823d39b8
	if (!cr6.gt) goto loc_823D39B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D39B8:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x823d3930
	if (!cr0.lt) goto loc_823D3930;
	// b 0x823d39c8
	goto loc_823D39C8;
loc_823D39C4:
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823D39C8:
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// beq cr6,0x823d3a00
	if (cr6.eq) goto loc_823D3A00;
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d3a00
	if (cr0.eq) goto loc_823D3A00;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
loc_823D3A00:
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,12572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12572);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r10,12576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12576);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// b 0x823d3a5c
	goto loc_823D3A5C;
loc_823D3A24:
	// lwz r9,11716(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 11716);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// rlwinm. r9,r9,0,12,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE0000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823d3a38
	if (!cr0.eq) goto loc_823D3A38;
	// rlwinm r10,r27,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFE;
loc_823D3A38:
	// li r9,8707
	ctx.r9.s64 = 8707;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// beq cr6,0x823d3a5c
	if (cr6.eq) goto loc_823D3A5C;
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d3a5c
	if (cr0.eq) goto loc_823D3A5C;
	// mr r23,r27
	r23.u64 = r27.u64;
loc_823D3A5C:
	// li r12,-257
	r12.s64 = -257;
	// and r21,r21,r12
	r21.u64 = r21.u64 & r12.u64;
loc_823D3A64:
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// li r12,1
	r12.s64 = 1;
	// and r9,r10,r21
	ctx.r9.u64 = ctx.r10.u64 & r21.u64;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r9,r12
	ctx.r10.u64 = ctx.r9.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823d3aa4
	if (cr6.eq) goto loc_823D3AA4;
	// li r8,8192
	ctx.r8.s64 = 8192;
	// lwz r10,10240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10240);
	// li r12,-2
	r12.s64 = -2;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// and r21,r21,r12
	r21.u64 = r21.u64 & r12.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r22,13040(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 13040);
	// rlwimi r22,r10,0,0,17
	r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFC000) | (r22.u64 & 0xFFFFFFFF00003FFF);
loc_823D3AA4:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// and r10,r9,r12
	ctx.r10.u64 = ctx.r9.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823d3ad8
	if (cr6.eq) goto loc_823D3AD8;
	// li r10,8452
	ctx.r10.s64 = 8452;
	// li r12,-2
	r12.s64 = -2;
	// li r20,0
	r20.s64 = 0;
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// and r21,r21,r12
	r21.u64 = r21.u64 & r12.u64;
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10332);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_823D3AD8:
	// and r10,r20,r22
	ctx.r10.u64 = r20.u64 & r22.u64;
	// and r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 & r23.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x823d3b74
	if (cr6.eq) goto loc_823D3B74;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lis r8,5461
	ctx.r8.s64 = 357892096;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// ori r8,r8,21845
	ctx.r8.u64 = ctx.r8.u64 | 21845;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// beq cr6,0x823d3b24
	if (cr6.eq) goto loc_823D3B24;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r24.u32);
	r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
loc_823D3B24:
	// cmpwi cr6,r22,-1
	cr6.compare<int32_t>(r22.s32, -1, xer);
	// beq cr6,0x823d3b40
	if (cr6.eq) goto loc_823D3B40;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r22.u32);
	r11.u32 = ea;
loc_823D3B40:
	// cmpwi cr6,r20,-1
	cr6.compare<int32_t>(r20.s32, -1, xer);
	// beq cr6,0x823d3b5c
	if (cr6.eq) goto loc_823D3B5C;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r20.u32);
	r11.u32 = ea;
loc_823D3B5C:
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// lwz r10,12572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12572);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// lwz r10,12576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12576);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_823D3B74:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_823D3B84"))) PPC_WEAK_FUNC(sub_823D3B84);
PPC_FUNC_IMPL(__imp__sub_823D3B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3B88"))) PPC_WEAK_FUNC(sub_823D3B88);
PPC_FUNC_IMPL(__imp__sub_823D3B88) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r6,-4
	r29.s64 = ctx.r6.s64 + -4;
	// lwz r4,48(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 48);
loc_823D3BA4:
	// cntlzd r11,r31
	r11.u64 = r31.u64 == 0 ? 64 : __builtin_clzll(r31.u64);
	// lwz r9,52(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r11,r5
	r28.u64 = r11.u64 + ctx.r5.u64;
	// add r29,r10,r29
	r29.u64 = ctx.r10.u64 + r29.u64;
	// sld r31,r31,r8
	r31.u64 = ctx.r8.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r8.u8 & 0x7F));
	// not r11,r31
	r11.u64 = ~r31.u64;
	// cntlzd r30,r11
	r30.u64 = r11.u64 == 0 ? 64 : __builtin_clzll(r11.u64);
	// rlwinm r27,r30,2,0,29
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r30
	r11.u64 = r30.u64;
	// add r10,r27,r4
	ctx.r10.u64 = r27.u64 + ctx.r4.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x823d3c0c
	if (cr6.lt) goto loc_823D3C0C;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d3550
	sub_823D3550(ctx, base);
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r29,r27,r29
	r29.u64 = r27.u64 + r29.u64;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// sld r31,r31,r11
	r31.u64 = r11.u8 & 0x40 ? 0 : (r31.u64 << (r11.u8 & 0x7F));
	// b 0x823d3c34
	goto loc_823D3C34;
loc_823D3C0C:
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// add r5,r30,r28
	ctx.r5.u64 = r30.u64 + r28.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | r28.u64;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
loc_823D3C20:
	// lwzu r10,4(r29)
	ea = 4 + r29.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	r29.u32 = ea;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rldicr r31,r31,1,62
	r31.u64 = __builtin_rotateleft64(r31.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// bne 0x823d3c20
	if (!cr0.eq) goto loc_823D3C20;
loc_823D3C34:
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// bne cr6,0x823d3ba4
	if (!cr6.eq) goto loc_823D3BA4;
	// stw r4,48(r26)
	PPC_STORE_U32(r26.u32 + 48, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823D3C48"))) PPC_WEAK_FUNC(sub_823D3C48);
PPC_FUNC_IMPL(__imp__sub_823D3C48) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,9096
	r29.s64 = 9096;
	// addi r31,r30,10144
	r31.s64 = r30.s64 + 10144;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d3c7c
	if (!cr6.gt) goto loc_823D3C7C;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D3C7C:
	// li r10,8199
	ctx.r10.s64 = 8199;
	// li r9,2609
	ctx.r9.s64 = 2609;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// lis r7,1
	ctx.r7.s64 = 65536;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// ori r7,r7,2607
	ctx.r7.u64 = ctx.r7.u64 | 2607;
	// lwz r10,10268(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 10268);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// lis r4,-16380
	ctx.r4.s64 = -1073479680;
	// li r3,3
	ctx.r3.s64 = 3;
	// ori r4,r4,15360
	ctx.r4.u64 = ctx.r4.u64 | 15360;
	// li r27,2609
	r27.s64 = 2609;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r26,0
	r26.s64 = 0;
	// lis r24,-32768
	r24.s64 = -2147483648;
	// li r25,8
	r25.s64 = 8;
	// mr r23,r24
	r23.u64 = r24.u64;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r4,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r4.u32);
loc_823D3CFC:
	// cntlzd r11,r28
	r11.u64 = r28.u64 == 0 ? 64 : __builtin_clzll(r28.u64);
	// lwz r9,52(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r31
	r31.u64 = ctx.r10.u64 + r31.u64;
	// add r27,r11,r29
	r27.u64 = r11.u64 + r29.u64;
	// sld r28,r28,r8
	r28.u64 = ctx.r8.u8 & 0x40 ? 0 : (r28.u64 << (ctx.r8.u8 & 0x7F));
	// not r11,r28
	r11.u64 = ~r28.u64;
	// cntlzd r26,r11
	r26.u64 = r11.u64 == 0 ? 64 : __builtin_clzll(r11.u64);
	// rlwinm r29,r26,2,0,29
	r29.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r29,2,0,29
	r25.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r25,r4
	r11.u64 = r25.u64 + ctx.r4.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x823d3d6c
	if (cr6.lt) goto loc_823D3D6C;
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d3550
	sub_823D3550(ctx, base);
	// clrldi r11,r26,32
	r11.u64 = r26.u64 & 0xFFFFFFFF;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r31,r25,r31
	r31.u64 = r25.u64 + r31.u64;
	// add r29,r29,r27
	r29.u64 = r29.u64 + r27.u64;
	// sld r28,r28,r11
	r28.u64 = r11.u8 & 0x40 ? 0 : (r28.u64 << (r11.u8 & 0x7F));
	// b 0x823d3db0
	goto loc_823D3DB0;
loc_823D3D6C:
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// stw r24,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r24.u32);
	// clrlwi r11,r4,29
	r11.u64 = ctx.r4.u32 & 0x7;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// or r11,r10,r27
	r11.u64 = ctx.r10.u64 | r27.u64;
	// add r29,r29,r27
	r29.u64 = r29.u64 + r27.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
loc_823D3D8C:
	// ld r11,4(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 4);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ld r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 12);
	// rldicr r28,r28,1,62
	r28.u64 = __builtin_rotateleft64(r28.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// std r11,4(r4)
	PPC_STORE_U64(ctx.r4.u32 + 4, r11.u64);
	// std r10,12(r4)
	PPC_STORE_U64(ctx.r4.u32 + 12, ctx.r10.u64);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// bne 0x823d3d8c
	if (!cr0.eq) goto loc_823D3D8C;
loc_823D3DB0:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// bne cr6,0x823d3cfc
	if (!cr6.eq) goto loc_823D3CFC;
	// stw r4,48(r30)
	PPC_STORE_U32(r30.u32 + 48, ctx.r4.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823D3DC4"))) PPC_WEAK_FUNC(sub_823D3DC4);
PPC_FUNC_IMPL(__imp__sub_823D3DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D3DC8"))) PPC_WEAK_FUNC(sub_823D3DC8);
PPC_FUNC_IMPL(__imp__sub_823D3DC8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r11,r28,1024
	r11.s64 = r28.s64 + 1024;
	// li r10,18432
	ctx.r10.s64 = 18432;
	// addi r30,r11,-4
	r30.s64 = r11.s64 + -4;
	// lwz r4,48(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 48);
loc_823D3DEC:
	// cntlzd r11,r31
	r11.u64 = r31.u64 == 0 ? 64 : __builtin_clzll(r31.u64);
	// lwz r8,52(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// clrldi r7,r11,32
	ctx.r7.u64 = r11.u64 & 0xFFFFFFFF;
	// mulli r9,r11,24
	ctx.r9.s64 = r11.s64 * 24;
	// mulli r11,r11,6
	r11.s64 = r11.s64 * 6;
	// sld r31,r31,r7
	r31.u64 = ctx.r7.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r7.u8 & 0x7F));
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// not r11,r31
	r11.u64 = ~r31.u64;
	// add r30,r9,r30
	r30.u64 = ctx.r9.u64 + r30.u64;
	// cntlzd r26,r11
	r26.u64 = r11.u64 == 0 ? 64 : __builtin_clzll(r11.u64);
	// mulli r29,r26,6
	r29.s64 = r26.s64 * 6;
	// addi r11,r29,5
	r11.s64 = r29.s64 + 5;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x823d3eb0
	if (cr6.lt) goto loc_823D3EB0;
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d3550
	sub_823D3550(ctx, base);
	// clrldi r9,r26,32
	ctx.r9.u64 = r26.u64 & 0xFFFFFFFF;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// sld r31,r31,r9
	r31.u64 = ctx.r9.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r9.u8 & 0x7F));
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// bne cr6,0x823d3dec
	if (!cr6.eq) goto loc_823D3DEC;
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r4,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r4.u32);
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d3e84
	if (!cr6.gt) goto loc_823D3E84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D3E84:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,20480
	ctx.r10.u64 = ctx.r10.u64 | 20480;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stw r11,48(r28)
	PPC_STORE_U32(r28.u32 + 48, r11.u32);
	// b 0x823d3f20
	goto loc_823D3F20;
loc_823D3EB0:
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r29,-1
	ctx.r9.s64 = r29.s64 + -1;
	// clrlwi r11,r4,29
	r11.u64 = ctx.r4.u32 & 0x7;
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// or r11,r9,r27
	r11.u64 = ctx.r9.u64 | r27.u64;
	// add r10,r29,r27
	ctx.r10.u64 = r29.u64 + r27.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
loc_823D3ED4:
	// ld r11,4(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 4);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ld r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 12);
	// rldicr r31,r31,1,62
	r31.u64 = __builtin_rotateleft64(r31.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// ld r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 20);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// std r11,4(r4)
	PPC_STORE_U64(ctx.r4.u32 + 4, r11.u64);
	// std r9,12(r4)
	PPC_STORE_U64(ctx.r4.u32 + 12, ctx.r9.u64);
	// std r8,20(r4)
	PPC_STORE_U64(ctx.r4.u32 + 20, ctx.r8.u64);
	// addi r4,r4,24
	ctx.r4.s64 = ctx.r4.s64 + 24;
	// bne 0x823d3ed4
	if (!cr0.eq) goto loc_823D3ED4;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// bne cr6,0x823d3dec
	if (!cr6.eq) goto loc_823D3DEC;
	// li r11,37
	r11.s64 = 37;
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// rldicr r11,r11,44,19
	r11.u64 = __builtin_rotateleft64(r11.u64, 44) & 0xFFFFF00000000000;
	// stw r10,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r10.u32);
	// std r11,4(r4)
	PPC_STORE_U64(ctx.r4.u32 + 4, r11.u64);
	// std r11,12(r4)
	PPC_STORE_U64(ctx.r4.u32 + 12, r11.u64);
loc_823D3F20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823D3F28"))) PPC_WEAK_FUNC(sub_823D3F28);
PPC_FUNC_IMPL(__imp__sub_823D3F28) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r30,r6,-4
	r30.s64 = ctx.r6.s64 + -4;
	// lis r25,-32768
	r25.s64 = -2147483648;
	// lwz r4,48(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 48);
loc_823D3F48:
	// cntlzd r11,r31
	r11.u64 = r31.u64 == 0 ? 64 : __builtin_clzll(r31.u64);
	// lwz r9,52(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 52);
	// clrldi r8,r11,32
	ctx.r8.u64 = r11.u64 & 0xFFFFFFFF;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// add r27,r11,r5
	r27.u64 = r11.u64 + ctx.r5.u64;
	// sld r31,r31,r8
	r31.u64 = ctx.r8.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r8.u8 & 0x7F));
	// not r11,r31
	r11.u64 = ~r31.u64;
	// cntlzd r28,r11
	r28.u64 = r11.u64 == 0 ? 64 : __builtin_clzll(r11.u64);
	// rlwinm r29,r28,4,0,27
	r29.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r29,3
	r11.s64 = r29.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x823d3fbc
	if (cr6.lt) goto loc_823D3FBC;
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d3550
	sub_823D3550(ctx, base);
	// clrldi r10,r28,32
	ctx.r10.u64 = r28.u64 & 0xFFFFFFFF;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r30,r11,r30
	r30.u64 = r11.u64 + r30.u64;
	// add r5,r29,r27
	ctx.r5.u64 = r29.u64 + r27.u64;
	// sld r31,r31,r10
	r31.u64 = ctx.r10.u8 & 0x40 ? 0 : (r31.u64 << (ctx.r10.u8 & 0x7F));
	// b 0x823d4080
	goto loc_823D4080;
loc_823D3FBC:
	// clrlwi r11,r4,28
	r11.u64 = ctx.r4.u32 & 0xF;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x823d3fd4
	if (!cr6.eq) goto loc_823D3FD4;
	// mr r11,r25
	r11.u64 = r25.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
	// b 0x823d4018
	goto loc_823D4018;
loc_823D3FD4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d3ff0
	if (!cr6.eq) goto loc_823D3FF0;
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// b 0x823d4018
	goto loc_823D4018;
loc_823D3FF0:
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x823d4018
	if (!cr6.eq) goto loc_823D4018;
	// mr r11,r25
	r11.u64 = r25.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_823D4018:
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// add r5,r29,r27
	ctx.r5.u64 = r29.u64 + r27.u64;
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r27
	r11.u64 = r11.u64 | r27.u64;
	// stwu r11,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r4.u32 = ea;
loc_823D402C:
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r10,r30,20
	ctx.r10.s64 = r30.s64 + 20;
	// addi r9,r30,36
	ctx.r9.s64 = r30.s64 + 36;
	// addi r8,r30,52
	ctx.r8.s64 = r30.s64 + 52;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// lvx128 v12,r0,r9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r4,36
	ctx.r9.s64 = ctx.r4.s64 + 36;
	// lvx128 v11,r0,r8
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r4,52
	ctx.r8.s64 = ctx.r4.s64 + 52;
	// addi r30,r30,64
	r30.s64 = r30.s64 + 64;
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rldicr r31,r31,1,62
	r31.u64 = __builtin_rotateleft64(r31.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// stvx v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne 0x823d402c
	if (!cr0.eq) goto loc_823D402C;
loc_823D4080:
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// bne cr6,0x823d3f48
	if (!cr6.eq) goto loc_823D3F48;
	// stw r4,48(r26)
	PPC_STORE_U32(r26.u32 + 48, ctx.r4.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823D4094"))) PPC_WEAK_FUNC(sub_823D4094);
PPC_FUNC_IMPL(__imp__sub_823D4094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D4098"))) PPC_WEAK_FUNC(sub_823D4098);
PPC_FUNC_IMPL(__imp__sub_823D4098) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r7,112
	ctx.r10.s64 = ctx.r7.s64 + 112;
	// lwz r25,24(r5)
	r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mulli r11,r7,416
	r11.s64 = ctx.r7.s64 * 416;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r9,r11,68
	ctx.r9.s64 = r11.s64 + 68;
	// lwzx r11,r10,r3
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,872
	r11.s64 = r11.s64 + 872;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r26,28(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// beq 0x823d43cc
	if (cr0.eq) goto loc_823D43CC;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r24,r5,52
	r24.s64 = ctx.r5.s64 + 52;
	// subf r23,r11,r9
	r23.s64 = ctx.r9.s64 - r11.s64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-18704
	ctx.r4.s64 = r11.s64 + -18704;
loc_823D410C:
	// add r9,r23,r7
	ctx.r9.u64 = r23.u64 + ctx.r7.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r29,4(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r28,8(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// beq cr6,0x823d4168
	if (cr6.eq) goto loc_823D4168;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r31,r9,20,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
loc_823D4134:
	// lbz r21,9(r5)
	r21.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// cmplw cr6,r21,r31
	cr6.compare<uint32_t>(r21.u32, r31.u32, xer);
	// bne cr6,0x823d4150
	if (!cr6.eq) goto loc_823D4150;
	// lbz r21,10(r5)
	r21.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// rlwinm r20,r9,16,28,31
	r20.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// cmplw cr6,r21,r20
	cr6.compare<uint32_t>(r21.u32, r20.u32, xer);
	// beq cr6,0x823d4160
	if (cr6.eq) goto loc_823D4160;
loc_823D4150:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// blt cr6,0x823d4134
	if (cr6.lt) goto loc_823D4134;
loc_823D4160:
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// blt cr6,0x823d4198
	if (cr6.lt) goto loc_823D4198;
loc_823D4168:
	// lis r12,-16442
	r12.s64 = -1077542912;
	// lbz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// li r10,95
	ctx.r10.s64 = 95;
	// ori r12,r12,53247
	r12.u64 = r12.u64 | 53247;
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// rlwimi r11,r10,20,2,11
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3FF00000) | (r11.u64 & 0xFFFFFFFFC00FFFFF);
	// and r10,r29,r12
	ctx.r10.u64 = r29.u64 & r12.u64;
	// rlwinm r8,r28,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80000000;
	// ori r9,r9,37456
	ctx.r9.u64 = ctx.r9.u64 | 37456;
	// oris r10,r10,6
	ctx.r10.u64 = ctx.r10.u64 | 393216;
	// or r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 | ctx.r5.u64;
	// b 0x823d42b8
	goto loc_823D42B8;
loc_823D4198:
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// clrlwi r9,r8,28
	ctx.r9.u64 = ctx.r8.u32 & 0xF;
	// rlwinm r31,r10,16,29,31
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7;
	// rlwinm r8,r10,22,26,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x38;
	// rlwinm r21,r10,13,29,31
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | r31.u64;
	// rlwinm r31,r10,0,16,21
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC00;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r10,0,24,25
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// or r8,r8,r21
	ctx.r8.u64 = ctx.r8.u64 | r21.u64;
	// cmplwi cr6,r20,64
	cr6.compare<uint32_t>(r20.u32, 64, xer);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// or r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 | r31.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// bne cr6,0x823d425c
	if (!cr6.eq) goto loc_823D425C;
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r31,r8,0,0,18
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFE000;
	// cmplwi cr6,r31,24576
	cr6.compare<uint32_t>(r31.u32, 24576, xer);
	// bgt cr6,0x823d41fc
	if (cr6.gt) goto loc_823D41FC;
	// rlwinm r9,r8,0,16,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xE000;
	// clrlwi r8,r8,19
	ctx.r8.u64 = ctx.r8.u32 & 0x1FFF;
	// xori r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 ^ 8192;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_823D41FC:
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r31,r8,0,19,21
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1C00;
	// cmplwi cr6,r31,3072
	cr6.compare<uint32_t>(r31.u32, 3072, xer);
	// bgt cr6,0x823d421c
	if (cr6.gt) goto loc_823D421C;
	// rlwinm r9,r8,0,19,21
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1C00;
	// andi. r8,r8,58367
	ctx.r8.u64 = ctx.r8.u64 & 58367;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// xori r9,r9,1024
	ctx.r9.u64 = ctx.r9.u64 ^ 1024;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_823D421C:
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r31,r8,0,22,24
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x380;
	// cmplwi cr6,r31,384
	cr6.compare<uint32_t>(r31.u32, 384, xer);
	// bgt cr6,0x823d423c
	if (cr6.gt) goto loc_823D423C;
	// rlwinm r9,r8,0,22,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x380;
	// andi. r8,r8,64639
	ctx.r8.u64 = ctx.r8.u64 & 64639;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// xori r9,r9,128
	ctx.r9.u64 = ctx.r9.u64 ^ 128;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_823D423C:
	// clrlwi r8,r9,16
	ctx.r8.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r31,r8,0,25,27
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x70;
	// cmplwi cr6,r31,48
	cr6.compare<uint32_t>(r31.u32, 48, xer);
	// bgt cr6,0x823d425c
	if (cr6.gt) goto loc_823D425C;
	// rlwinm r9,r8,0,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x70;
	// andi. r8,r8,65423
	ctx.r8.u64 = ctx.r8.u64 & 65423;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// xori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 ^ 16;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
loc_823D425C:
	// rlwinm r21,r10,12,14,19
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F000;
	// lhz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// rlwinm r10,r10,0,22,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300;
	// lhz r5,2(r5)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// lis r12,-16448
	r12.s64 = -1077936128;
	// or r10,r21,r10
	ctx.r10.u64 = r21.u64 | ctx.r10.u64;
	// ori r12,r12,53247
	r12.u64 = r12.u64 | 53247;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lbzx r21,r8,r6
	r21.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// and r29,r29,r12
	r29.u64 = r29.u64 & r12.u64;
	// lis r31,342
	r31.s64 = 22413312;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | r29.u64;
	// ori r31,r31,86
	r31.u64 = r31.u64 | 86;
	// subfic r29,r8,95
	xer.ca = ctx.r8.u32 <= 95;
	r29.s64 = 95 - ctx.r8.s64;
	// rlwinm r5,r5,6,1,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x7FFFFF00;
	// mullw r8,r29,r31
	ctx.r8.s64 = int64_t(r29.s32) * int64_t(r31.s32);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// rlwinm r28,r28,0,0,0
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80000000;
	// or r5,r5,r21
	ctx.r5.u64 = ctx.r5.u64 | r21.u64;
	// rlwimi r31,r8,11,8,12
	r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0xF80000) | (r31.u64 & 0xFFFFFFFFFF07FFFF);
	// or r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 | r28.u64;
	// rlwimi r11,r31,1,5,11
	r11.u64 = (__builtin_rotateleft32(r31.u32, 1) & 0x7F00000) | (r11.u64 & 0xFFFFFFFFF80FFFFF);
	// rlwinm r11,r11,0,5,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFC7FFFFFF;
loc_823D42B8:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// stw r5,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r5.u32);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ori r8,r9,14
	ctx.r8.u64 = ctx.r9.u64 | 14;
	// rlwinm r9,r10,1,28,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xE;
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r31,r8,16
	r31.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r29,r8,16
	r29.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r28,r8,16
	r28.u64 = ctx.r8.u32 & 0xFFFF;
	// lhzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwimi r10,r11,31,29,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 31) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r11,r9,30,28,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xE;
	// lhzx r11,r11,r4
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r4.u32);
	// and r11,r11,r31
	r11.u64 = r11.u64 & r31.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r10,r11,r31
	ctx.r10.u64 = r11.u64 | r31.u64;
	// rlwimi r10,r9,0,29,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFFFC7) | (ctx.r10.u64 & 0x38);
	// rlwinm r11,r10,27,28,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0xE;
	// lhzx r11,r11,r4
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r4.u32);
	// and r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r31,r11,3,0,28
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// or r31,r31,r11
	r31.u64 = r31.u64 | r11.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r31,r31,2,0,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r9,r11,r31
	ctx.r9.u64 = r11.u64 | r31.u64;
	// rlwimi r9,r10,0,26,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFFFFE3F) | (ctx.r9.u64 & 0x1C0);
	// rlwinm r11,r9,24,28,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xE;
	// lhzx r11,r11,r4
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r4.u32);
	// and r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r11,29,3,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// or r31,r31,r11
	r31.u64 = r31.u64 | r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r31
	r11.u64 = r11.u64 | r31.u64;
	// rlwimi r11,r9,0,23,19
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFFF1FF) | (r11.u64 & 0xE00);
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, r11.u32);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// bne 0x823d410c
	if (!cr0.eq) goto loc_823D410C;
loc_823D43CC:
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r30
	r27.u64 = r30.u64;
	// add r26,r11,r30
	r26.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bge cr6,0x823d465c
	if (!cr6.lt) goto loc_823D465C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r25,r11,-18688
	r25.s64 = r11.s64 + -18688;
loc_823D43E8:
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// bge cr6,0x823d465c
	if (!cr6.lt) goto loc_823D465C;
loc_823D43F0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,10,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x300000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d4408
	if (!cr0.eq) goto loc_823D4408;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// blt cr6,0x823d43f0
	if (cr6.lt) goto loc_823D43F0;
loc_823D4408:
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// bge cr6,0x823d465c
	if (!cr6.lt) goto loc_823D465C;
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x823d465c
	if (!cr6.lt) goto loc_823D465C;
loc_823D4420:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r9,r9,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x300000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823d4438
	if (!cr0.eq) goto loc_823D4438;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// blt cr6,0x823d4420
	if (cr6.lt) goto loc_823D4420;
loc_823D4438:
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// bge cr6,0x823d465c
	if (!cr6.lt) goto loc_823D465C;
	// subf r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - r30.s64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// mulli r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 * 12;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r5,0,10,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x300000;
	// lis r7,48
	ctx.r7.s64 = 3145728;
	// addi r9,r6,-1
	ctx.r9.s64 = ctx.r6.s64 + -1;
	// addi r27,r11,4
	r27.s64 = r11.s64 + 4;
	// li r31,-1
	r31.s64 = -1;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne cr6,0x823d44b0
	if (!cr6.eq) goto loc_823D44B0;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lwzx r11,r11,r8
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// rlwinm r9,r11,14,25,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x7C;
	// rlwinm r11,r11,7,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x3;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// or r31,r9,r11
	r31.u64 = ctx.r9.u64 | r11.u64;
loc_823D44B0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823d45a4
	if (cr6.eq) goto loc_823D45A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_823D44C4:
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// bge cr6,0x823d4594
	if (!cr6.lt) goto loc_823D4594;
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// subf r29,r4,r5
	r29.s64 = ctx.r5.s64 - ctx.r4.s64;
loc_823D44D4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r9,14,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x7C;
	// rlwinm r9,r9,7,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x3;
	// rlwinm r24,r8,14,25,29
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x7C;
	// rlwinm r23,r8,7,30,31
	r23.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0x3;
	// or r8,r7,r9
	ctx.r8.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r7,r24,r23
	ctx.r7.u64 = r24.u64 | r23.u64;
	// subf. r9,r8,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823d4514
	if (cr0.eq) goto loc_823D4514;
	// cmpw cr6,r31,r8
	cr6.compare<int32_t>(r31.s32, ctx.r8.s32, xer);
	// beq cr6,0x823d4558
	if (cr6.eq) goto loc_823D4558;
	// cmpw cr6,r31,r7
	cr6.compare<int32_t>(r31.s32, ctx.r7.s32, xer);
	// bne cr6,0x823d4550
	if (!cr6.eq) goto loc_823D4550;
	// li r9,-1
	ctx.r9.s64 = -1;
	// b 0x823d4550
	goto loc_823D4550;
loc_823D4514:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r9,9
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 9;
	// srawi r8,r8,9
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 9;
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823d4550
	if (!cr0.eq) goto loc_823D4550;
	// lhz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// clrlwi r8,r8,26
	ctx.r8.u64 = ctx.r8.u32 & 0x3F;
	// lbzx r9,r9,r25
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + r25.u32);
	// lbzx r8,r8,r25
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + r25.u32);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
loc_823D4550:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble cr6,0x823d4588
	if (!cr6.gt) goto loc_823D4588;
loc_823D4558:
	// lwz r24,0(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// lwz r24,4(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// lwz r24,8(r10)
	r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r24,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r24.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_823D4588:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x823d44d4
	if (!cr0.eq) goto loc_823D44D4;
loc_823D4594:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x823d44c4
	if (!cr0.eq) goto loc_823D44C4;
loc_823D45A4:
	// mulli r11,r6,12
	r11.s64 = ctx.r6.s64 * 12;
	// add r6,r11,r3
	ctx.r6.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// b 0x823d4650
	goto loc_823D4650;
loc_823D45B8:
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// rlwimi r9,r8,25,12,13
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 25) & 0xC0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF3FFFF);
	// rlwimi r5,r10,25,12,13
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xC0000) | (ctx.r5.u64 & 0xFFFFFFFFFFF3FFFF);
	// rlwinm r10,r9,0,7,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FC0000;
	// rlwinm r9,r5,0,7,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1FC0000;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x823d4648
	if (!cr6.eq) goto loc_823D4648;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,9
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 9;
	// srawi r9,r9,9
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 9;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x823d4648
	if (cr6.gt) goto loc_823D4648;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// clrlwi r5,r5,26
	ctx.r5.u64 = ctx.r5.u32 & 0x3F;
	// lbzx r5,r5,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + r25.u32);
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x823d4648
	if (cr6.gt) goto loc_823D4648;
	// rlwinm r9,r8,5,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x7;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d4630
	if (!cr6.gt) goto loc_823D4630;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823D4630:
	// rlwimi r8,r10,27,2,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x38000000) | (ctx.r8.u64 & 0xFFFFFFFFC7FFFFFF);
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// oris r10,r10,16384
	ctx.r10.u64 = ctx.r10.u64 | 1073741824;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// b 0x823d464c
	goto loc_823D464C;
loc_823D4648:
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
loc_823D464C:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
loc_823D4650:
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x823d45b8
	if (cr6.lt) goto loc_823D45B8;
	// b 0x823d43e8
	goto loc_823D43E8;
loc_823D465C:
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// b 0x823d4690
	goto loc_823D4690;
loc_823D4664:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r22
	ctx.r3.u64 = r11.u64 + r22.u64;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x823d4688
	if (cr6.eq) goto loc_823D4688;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_823D4688:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_823D4690:
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x823d4664
	if (cr6.lt) goto loc_823D4664;
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_823D46A0"))) PPC_WEAK_FUNC(sub_823D46A0);
PPC_FUNC_IMPL(__imp__sub_823D46A0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r7,r10,27,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// std r6,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r6.u64);
	// stw r6,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r6.u32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r11,r4,25,3,7
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 25) & 0x1F000000) | (r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r3
	r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_823D4718:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// beq cr6,0x823d4740
	if (cr6.eq) goto loc_823D4740;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_823D4740:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d4754
	if (!cr0.eq) goto loc_823D4754;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x823d4718
	goto loc_823D4718;
loc_823D4754:
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

__attribute__((alias("__imp__sub_823D476C"))) PPC_WEAK_FUNC(sub_823D476C);
PPC_FUNC_IMPL(__imp__sub_823D476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D4770"))) PPC_WEAK_FUNC(sub_823D4770);
PPC_FUNC_IMPL(__imp__sub_823D4770) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r8,r11,27,27,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// lhz r11,0(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r3
	r30.u64 = r11.u64 + ctx.r3.u64;
loc_823D47B4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r31,r11,r29
	r31.u64 = r11.u64 + r29.u64;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x823d47e0
	if (cr6.eq) goto loc_823D47E0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_823D47E0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// rlwimi r10,r11,24,28,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x823d480c
	if (cr6.eq) goto loc_823D480C;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_823D480C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d4820
	if (!cr0.eq) goto loc_823D4820;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// b 0x823d47b4
	goto loc_823D47B4;
loc_823D4820:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823D4828"))) PPC_WEAK_FUNC(sub_823D4828);
PPC_FUNC_IMPL(__imp__sub_823D4828) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// lbz r11,8(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x823d4970
	if (cr6.eq) goto loc_823D4970;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r11,r10,0,13,13
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d4970
	if (!cr0.eq) goto loc_823D4970;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823d4870
	if (cr6.eq) goto loc_823D4870;
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// rlwinm. r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d4970
	if (!cr0.eq) goto loc_823D4970;
loc_823D4870:
	// rlwinm r26,r10,27,27,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1F;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// beq cr6,0x823d48b4
	if (cr6.eq) goto loc_823D48B4;
	// lwz r11,20(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 20);
	// addi r28,r7,32
	r28.s64 = ctx.r7.s64 + 32;
	// clrlwi. r24,r11,27
	r24.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// rlwinm r11,r11,27,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// beq 0x823d48c0
	if (cr0.eq) goto loc_823D48C0;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// b 0x823d48c0
	goto loc_823D48C0;
loc_823D48B4:
	// li r28,0
	r28.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_823D48C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d493c
	if (cr6.eq) goto loc_823D493C;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_823D48CC:
	// lbz r27,3(r28)
	r27.u64 = PPC_LOAD_U8(r28.u32 + 3);
	// b 0x823d48f8
	goto loc_823D48F8;
loc_823D48D4:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bge cr6,0x823d4900
	if (!cr6.lt) goto loc_823D4900;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d46a0
	sub_823D46A0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823D48F8:
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// blt cr6,0x823d48d4
	if (cr6.lt) goto loc_823D48D4;
loc_823D4900:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// xor r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,20,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d4928
	if (cr0.eq) goto loc_823D4928;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d4770
	sub_823D4770(ctx, base);
loc_823D4928:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// bne 0x823d48cc
	if (!cr0.eq) goto loc_823D48CC;
loc_823D493C:
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// bge cr6,0x823d4964
	if (!cr6.lt) goto loc_823D4964;
	// subf r29,r29,r26
	r29.s64 = r26.s64 - r29.s64;
loc_823D4948:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d46a0
	sub_823D46A0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823d4948
	if (!cr0.eq) goto loc_823D4948;
loc_823D4964:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// rlwimi r11,r24,20,8,11
	r11.u64 = (__builtin_rotateleft32(r24.u32, 20) & 0xF00000) | (r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_823D4970:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823D4978"))) PPC_WEAK_FUNC(sub_823D4978);
PPC_FUNC_IMPL(__imp__sub_823D4978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x8239bcd4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r11,r23,112
	r11.s64 = r23.s64 + 112;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// rlwinm r30,r11,3,0,28
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r27,876(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 876);
	// rlwinm r28,r27,30,2,31
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r4,r28,5
	ctx.r4.s64 = r28.s64 + 5;
	// bl 0x823d24b8
	sub_823D24B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d4ad0
	if (cr0.eq) goto loc_823D4AD0;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,256
	ctx.r10.s64 = 256;
	// ori r11,r11,15104
	r11.u64 = r11.u64 | 15104;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// addi r9,r28,1
	ctx.r9.s64 = r28.s64 + 1;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwimi r8,r9,16,2,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3FFF0000) | (ctx.r8.u64 & 0xFFFFFFFFC000FFFF);
	// clrlwi r11,r28,18
	r11.u64 = r28.u32 & 0x3FFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r26,r25,4
	r26.s64 = r25.s64 + 4;
	// lwz r11,872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r30,r11,-16384
	r30.s64 = r11.s64 + -1073741824;
	// sync 
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// add r4,r30,r27
	ctx.r4.u64 = r30.u64 + r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x823d4a78
	if (cr6.eq) goto loc_823D4A78;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d4828
	sub_823D4828(ctx, base);
loc_823D4A78:
	// cntlzw r11,r24
	r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// lbz r10,10814(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 10814);
	// addi r30,r29,12392
	r30.s64 = r29.s64 + 12392;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,25
	ctx.r10.u64 = ctx.r10.u32 & 0x7F;
	// rlwinm r11,r11,7,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x80;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// xori r11,r11,128
	r11.u64 = r11.u64 ^ 128;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stb r11,10814(r29)
	PPC_STORE_U8(r29.u32 + 10814, r11.u8);
	// bl 0x823d4098
	sub_823D4098(ctx, base);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// ld r9,12400(r29)
	ctx.r9.u64 = PPC_LOAD_U64(r29.u32 + 12400);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// std r10,11696(r29)
	PPC_STORE_U64(r29.u32 + 11696, ctx.r10.u64);
	// std r9,11704(r29)
	PPC_STORE_U64(r29.u32 + 11704, ctx.r9.u64);
	// stw r11,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r11.u32);
loc_823D4AD0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823D4AD8"))) PPC_WEAK_FUNC(sub_823D4AD8);
PPC_FUNC_IMPL(__imp__sub_823D4AD8) {
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
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d4b80
	if (cr0.eq) goto loc_823D4B80;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// add r27,r11,r31
	r27.u64 = r11.u64 + r31.u64;
	// b 0x823d4b78
	goto loc_823D4B78;
loc_823D4B0C:
	// lhz r28,2(r31)
	r28.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lhz r26,0(r31)
	r26.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x823d4b80
	if (cr0.eq) goto loc_823D4B80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// lwz r3,48(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// add r30,r10,r25
	r30.u64 = ctx.r10.u64 + r25.u64;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823d4b44
	if (!cr6.gt) goto loc_823D4B44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823D4B44:
	// lis r11,-16382
	r11.s64 = -1073610752;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// ori r9,r11,12032
	ctx.r9.u64 = r11.u64 | 12032;
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r29)
	PPC_STORE_U32(r29.u32 + 48, ctx.r3.u32);
loc_823D4B78:
	// cmplw cr6,r31,r27
	cr6.compare<uint32_t>(r31.u32, r27.u32, xer);
	// blt cr6,0x823d4b0c
	if (cr6.lt) goto loc_823D4B0C;
loc_823D4B80:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823D4B88"))) PPC_WEAK_FUNC(sub_823D4B88);
PPC_FUNC_IMPL(__imp__sub_823D4B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mulli r11,r7,416
	r11.s64 = ctx.r7.s64 * 416;
	// add r28,r11,r4
	r28.u64 = r11.u64 + ctx.r4.u64;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823d4bf0
	if (!cr6.eq) goto loc_823D4BF0;
	// addi r29,r31,12392
	r29.s64 = r31.s64 + 12392;
	// ld r11,48(r28)
	r11.u64 = PPC_LOAD_U64(r28.u32 + 48);
	// ld r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U64(r28.u32 + 56);
	// ld r6,12400(r31)
	ctx.r6.u64 = PPC_LOAD_U64(r31.u32 + 12400);
	// ld r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// ld r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U64(r30.u32 + 40);
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// ld r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// xor r11,r11,r5
	r11.u64 = r11.u64 ^ ctx.r5.u64;
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823d4cac
	if (cr6.eq) goto loc_823D4CAC;
loc_823D4BF0:
	// lwz r9,64(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 64);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x823d4c20
	if (cr0.eq) goto loc_823D4C20;
	// lwz r10,10768(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x823d4c20
	if (!cr6.lt) goto loc_823D4C20;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d4cc0
	goto loc_823D4CC0;
loc_823D4C20:
	// addi r11,r7,112
	r11.s64 = ctx.r7.s64 + 112;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// addi r29,r31,12392
	r29.s64 = r31.s64 + 12392;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwzx r11,r11,r4
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// lwz r11,872(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823d4098
	sub_823D4098(ctx, base);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d4c94
	if (!cr6.eq) goto loc_823D4C94;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r10,r11,17980
	ctx.r10.s64 = r11.s64 + 17980;
loc_823D4C64:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823D4C68:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r11,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stwcx. r11,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823d4c68
	if (!cr0.eq) goto loc_823D4C68;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// blt cr6,0x823d4c64
	if (cr6.lt) goto loc_823D4C64;
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
loc_823D4C94:
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stw r11,40(r28)
	PPC_STORE_U32(r28.u32 + 40, r11.u32);
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// std r11,48(r28)
	PPC_STORE_U64(r28.u32 + 48, r11.u64);
	// ld r11,12400(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 12400);
	// std r11,56(r28)
	PPC_STORE_U64(r28.u32 + 56, r11.u64);
loc_823D4CAC:
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r10,12400(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 12400);
	// std r11,11696(r31)
	PPC_STORE_U64(r31.u32 + 11696, r11.u64);
	// std r10,11704(r31)
	PPC_STORE_U64(r31.u32 + 11704, ctx.r10.u64);
loc_823D4CC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823D4CC8"))) PPC_WEAK_FUNC(sub_823D4CC8);
PPC_FUNC_IMPL(__imp__sub_823D4CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	r11.s64 = -1;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r10,r20,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x20000;
	// mr r14,r11
	r14.u64 = r11.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r15,r11
	r15.u64 = r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r19,r11
	r19.u64 = r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823d4d0c
	if (cr6.eq) goto loc_823D4D0C;
	// bl 0x823d3608
	sub_823D3608(ctx, base);
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
loc_823D4D0C:
	// lwz r31,12560(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12560);
	// lwz r21,11684(r30)
	r21.u64 = PPC_LOAD_U32(r30.u32 + 11684);
	// lwz r29,12556(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12556);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823d5488
	if (cr0.eq) goto loc_823D5488;
	// lwz r11,896(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 896);
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// li r23,5
	r23.s64 = 5;
	// addi r25,r11,872
	r25.s64 = r11.s64 + 872;
	// lis r11,-16383
	r11.s64 = -1073676288;
	// ori r17,r11,9984
	r17.u64 = r11.u64 | 9984;
	// bne cr6,0x823d4dbc
	if (!cr6.eq) goto loc_823D4DBC;
	// lwz r11,872(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 872);
	// li r28,0
	r28.s64 = 0;
	// li r18,0
	r18.s64 = 0;
	// li r16,0
	r16.s64 = 0;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d4d6c
	if (cr0.eq) goto loc_823D4D6C;
	// lwz r11,904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 904);
	// li r24,1
	r24.s64 = 1;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r25,r11,872
	r25.s64 = r11.s64 + 872;
loc_823D4D6C:
	// lwz r11,10452(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10452);
	// clrlwi r10,r11,29
	ctx.r10.u64 = r11.u32 & 0x7;
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// beq cr6,0x823d4db0
	if (cr6.eq) goto loc_823D4DB0;
	// lbz r10,10815(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 10815);
	// rlwimi r11,r23,0,29,31
	r11.u64 = (__builtin_rotateleft32(r23.u32, 0) & 0x7) | (r11.u64 & 0xFFFFFFFFFFFFFFF8);
	// oris r20,r20,8
	r20.u64 = r20.u64 | 524288;
	// ori r20,r20,8
	r20.u64 = r20.u64 | 8;
	// stw r11,10452(r30)
	PPC_STORE_U32(r30.u32 + 10452, r11.u32);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d4db0
	if (cr0.eq) goto loc_823D4DB0;
	// lwz r11,10244(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10244);
	// li r12,1
	r12.s64 = 1;
	// rlwinm r11,r11,0,16,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r20,r20,r12
	r20.u64 = r20.u64 | r12.u64;
	// stw r11,10244(r30)
	PPC_STORE_U32(r30.u32 + 10244, r11.u32);
loc_823D4DB0:
	// lwz r11,20(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// b 0x823d4ee4
	goto loc_823D4EE4;
loc_823D4DBC:
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// rlwinm r11,r20,0,11,11
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x100000;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// lbz r11,10814(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10814);
	// addi r28,r10,40
	r28.s64 = ctx.r10.s64 + 40;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r18,8(r28)
	r18.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r16,12(r28)
	r16.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// rlwinm r8,r18,0,1,3
	ctx.r8.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x70000000;
	// subfc r9,r8,r9
	xer.ca = ctx.r9.u32 >= ctx.r8.u32;
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r9,r9,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x8;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwimi r10,r11,0,28,28
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x8) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r10,10814(r30)
	PPC_STORE_U8(r30.u32 + 10814, ctx.r10.u8);
	// beq cr6,0x823d4ed4
	if (cr6.eq) goto loc_823D4ED4;
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d4ad8
	sub_823D4AD8(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d4e30
	if (!cr6.gt) goto loc_823D4E30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D4E30:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// ori r20,r20,16384
	r20.u64 = r20.u64 | 16384;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r10,0,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r8,512
	ctx.r10.s64 = ctx.r8.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 64);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 10452);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// stw r11,10408(r30)
	PPC_STORE_U32(r30.u32 + 10408, r11.u32);
	// clrlwi r11,r10,29
	r11.u64 = ctx.r10.u32 & 0x7;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x823d4ed4
	if (cr6.eq) goto loc_823D4ED4;
	// lbz r11,10815(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10815);
	// li r9,1
	ctx.r9.s64 = 1;
	// oris r20,r20,8
	r20.u64 = r20.u64 | 524288;
	// rlwimi r10,r9,2,29,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// ori r20,r20,8
	r20.u64 = r20.u64 | 8;
	// stw r10,10452(r30)
	PPC_STORE_U32(r30.u32 + 10452, ctx.r10.u32);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d4ed4
	if (cr0.eq) goto loc_823D4ED4;
	// lwz r11,12304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12304);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r20,r20,r12
	r20.u64 = r20.u64 | r12.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,10244(r30)
	PPC_STORE_U32(r30.u32 + 10244, r11.u32);
loc_823D4ED4:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// lwz r10,20(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 20);
	// xor r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	// clrlwi r11,r11,13
	r11.u64 = r11.u32 & 0x7FFFF;
loc_823D4EE4:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lwz r26,10452(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 10452);
	// lwz r22,12(r25)
	r22.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r29,r26
	r29.u64 = r26.u64;
	// xori r27,r11,1
	r27.u64 = r11.u64 ^ 1;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lbz r11,10812(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10812);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d4f88
	if (cr0.eq) goto loc_823D4F88;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823d4f38
	if (cr6.eq) goto loc_823D4F38;
	// lwz r11,10428(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10428);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d4f3c
	if (!cr0.eq) goto loc_823D4F3C;
	// lwz r11,28(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d4f3c
	if (!cr0.eq) goto loc_823D4F3C;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d4f3c
	if (!cr0.eq) goto loc_823D4F3C;
loc_823D4F38:
	// rlwimi r29,r23,0,29,31
	r29.u64 = (__builtin_rotateleft32(r23.u32, 0) & 0x7) | (r29.u64 & 0xFFFFFFFFFFFFFFF8);
loc_823D4F3C:
	// lwz r11,12564(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12564);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x823d4f54
	if (!cr6.eq) goto loc_823D4F54;
	// rlwinm r11,r20,0,28,28
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x8;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823d4f88
	if (cr6.eq) goto loc_823D4F88;
loc_823D4F54:
	// lbz r11,10815(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10815);
	// ori r20,r20,8
	r20.u64 = r20.u64 | 8;
	// mr r14,r29
	r14.u64 = r29.u64;
	// stw r29,12564(r30)
	PPC_STORE_U32(r30.u32 + 12564, r29.u32);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d4f88
	if (cr0.eq) goto loc_823D4F88;
	// clrlwi r10,r29,29
	ctx.r10.u64 = r29.u32 & 0x7;
	// lwz r11,10244(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10244);
	// cmplwi cr6,r10,5
	cr6.compare<uint32_t>(ctx.r10.u32, 5, xer);
	// bne cr6,0x823d4f80
	if (!cr6.eq) goto loc_823D4F80;
	// rlwinm r11,r11,0,16,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
loc_823D4F80:
	// mr r23,r11
	r23.u64 = r11.u64;
	// b 0x823d4f8c
	goto loc_823D4F8C;
loc_823D4F88:
	// lwz r23,84(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823D4F8C:
	// lbz r11,10814(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10814);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d50a4
	if (!cr0.eq) goto loc_823D50A4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x823d50a4
	if (!cr6.eq) goto loc_823D50A4;
	// rlwinm r11,r20,0,12,12
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x80000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823d50ec
	if (cr6.eq) goto loc_823D50EC;
	// addi r27,r31,872
	r27.s64 = r31.s64 + 872;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823d4ad8
	sub_823D4AD8(ctx, base);
	// lbz r11,10814(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10814);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,10814(r30)
	PPC_STORE_U8(r30.u32 + 10814, r11.u8);
	// beq cr6,0x823d5084
	if (cr6.eq) goto loc_823D5084;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d5084
	if (!cr0.eq) goto loc_823D5084;
	// lbz r11,10812(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10812);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d4ff8
	if (cr0.eq) goto loc_823D4FF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823d50d0
	goto loc_823D50D0;
loc_823D4FF8:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823d4b88
	sub_823D4B88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d5018
	if (cr0.eq) goto loc_823D5018;
	// mr r19,r24
	r19.u64 = r24.u64;
	// b 0x823d503c
	goto loc_823D503C;
loc_823D5018:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d4978
	sub_823D4978(ctx, base);
loc_823D503C:
	// xor r11,r29,r26
	r11.u64 = r29.u64 ^ r26.u64;
	// clrlwi. r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d50ec
	if (cr0.eq) goto loc_823D50EC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d50ec
	if (cr0.eq) goto loc_823D50EC;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d4b88
	sub_823D4B88(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d50ec
	if (cr0.eq) goto loc_823D50EC;
	// lbz r11,10814(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10814);
loc_823D5074:
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// li r15,1
	r15.s64 = 1;
	// stb r11,10814(r30)
	PPC_STORE_U8(r30.u32 + 10814, r11.u8);
	// b 0x823d50ec
	goto loc_823D50EC;
loc_823D5084:
	// xor r10,r29,r26
	ctx.r10.u64 = r29.u64 ^ r26.u64;
	// mr r19,r24
	r19.u64 = r24.u64;
	// clrlwi. r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d50ec
	if (cr0.eq) goto loc_823D50EC;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d50ec
	if (cr0.eq) goto loc_823D50EC;
	// b 0x823d5074
	goto loc_823D5074;
loc_823D50A4:
	// rlwinm r10,r20,0,11,12
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x180000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823d50ec
	if (cr6.eq) goto loc_823D50EC;
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r4,r31,872
	ctx.r4.s64 = r31.s64 + 872;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,10814(r30)
	PPC_STORE_U8(r30.u32 + 10814, r11.u8);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// bl 0x823d4ad8
	sub_823D4AD8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823D50D0:
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823d4978
	sub_823D4978(ctx, base);
loc_823D50EC:
	// rlwinm r11,r20,0,11,12
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x180000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823d513c
	if (cr6.eq) goto loc_823D513C;
	// lbz r11,10814(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10814);
	// or r9,r22,r16
	ctx.r9.u64 = r22.u64 | r16.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// oris r20,r20,1
	r20.u64 = r20.u64 | 65536;
	// or r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 | r18.u64;
	// ori r20,r20,32768
	r20.u64 = r20.u64 | 32768;
	// stw r9,10404(r30)
	PPC_STORE_U32(r30.u32 + 10404, ctx.r9.u32);
	// stw r10,10400(r30)
	PPC_STORE_U32(r30.u32 + 10400, ctx.r10.u32);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d513c
	if (cr0.eq) goto loc_823D513C;
	// lwz r11,904(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 904);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lwz r10,880(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 880);
	// lwz r11,884(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 884);
	// or r29,r10,r18
	r29.u64 = ctx.r10.u64 | r18.u64;
	// or r28,r11,r16
	r28.u64 = r11.u64 | r16.u64;
	// b 0x823d5144
	goto loc_823D5144;
loc_823D513C:
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823D5144:
	// lbz r11,10812(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10812);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d5404
	if (cr0.eq) goto loc_823D5404;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d516c
	if (!cr6.gt) goto loc_823D516C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D516C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,5461
	ctx.r9.s64 = 357892096;
	// ori r5,r10,24576
	ctx.r5.u64 = ctx.r10.u64 | 24576;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// ori r9,r9,21845
	ctx.r9.u64 = ctx.r9.u64 | 21845;
	// ori r4,r8,24832
	ctx.r4.u64 = ctx.r8.u64 | 24832;
	// rlwinm r7,r20,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x8;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpldi cr6,r7,0
	cr6.compare<uint64_t>(ctx.r7.u64, 0, xer);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// beq cr6,0x823d51c4
	if (cr6.eq) goto loc_823D51C4;
	// li r10,8712
	ctx.r10.s64 = 8712;
	// li r12,-9
	r12.s64 = -9;
	// and r20,r20,r12
	r20.u64 = r20.u64 & r12.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10452(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 10452);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_823D51C4:
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// cmpwi cr6,r14,-1
	cr6.compare<int32_t>(r14.s32, -1, xer);
	// ori r10,r10,11521
	ctx.r10.u64 = ctx.r10.u64 | 11521;
	// beq cr6,0x823d51ec
	if (cr6.eq) goto loc_823D51EC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r8,r8,520
	ctx.r8.u64 = ctx.r8.u64 | 520;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r14,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r14.u32);
	r11.u32 = ea;
loc_823D51EC:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r9,r20,r12
	ctx.r9.u64 = r20.u64 & r12.u64;
	// cmpldi cr6,r9,0
	cr6.compare<uint64_t>(ctx.r9.u64, 0, xer);
	// beq cr6,0x823d521c
	if (cr6.eq) goto loc_823D521C;
	// li r9,8193
	ctx.r9.s64 = 8193;
	// li r12,-2
	r12.s64 = -2;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// and r20,r20,r12
	r20.u64 = r20.u64 & r12.u64;
	// lwz r9,10244(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 10244);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_823D521C:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x823d5238
	if (cr6.eq) goto loc_823D5238;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
loc_823D5238:
	// rlwinm r10,r20,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0x10000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823d526c
	if (cr6.eq) goto loc_823D526C;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r12,-2
	r12.s64 = -131072;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r12,r12,32767
	r12.u64 = r12.u64 | 32767;
	// and r20,r20,r12
	r20.u64 = r20.u64 & r12.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10400(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 10400);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10404(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 10404);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_823D526C:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x823d5294
	if (cr6.eq) goto loc_823D5294;
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r10,r10,11521
	ctx.r10.u64 = ctx.r10.u64 | 11521;
	// ori r9,r9,384
	ctx.r9.u64 = ctx.r9.u64 | 384;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
loc_823D5294:
	// cmpwi cr6,r15,-1
	cr6.compare<int32_t>(r15.s32, -1, xer);
	// beq cr6,0x823d5384
	if (cr6.eq) goto loc_823D5384;
	// addi r10,r15,112
	ctx.r10.s64 = r15.s64 + 112;
	// mulli r9,r15,416
	ctx.r9.s64 = r15.s64 * 416;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// add r3,r9,r31
	ctx.r3.u64 = ctx.r9.u64 + r31.u64;
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(r19.s32, -1, xer);
	// ori r10,r10,9985
	ctx.r10.u64 = ctx.r10.u64 | 9985;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// lwz r9,872(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 872);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r7,r9,3
	ctx.r7.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r9,r6,512
	ctx.r9.s64 = ctx.r6.s64 + 512;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// lwz r9,876(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 876);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r9,10780(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 10780);
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// beq cr6,0x823d53e8
	if (cr6.eq) goto loc_823D53E8;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lis r9,10922
	ctx.r9.s64 = 715784192;
	// addi r7,r19,112
	ctx.r7.s64 = r19.s64 + 112;
	// ori r6,r9,43690
	ctx.r6.u64 = ctx.r9.u64 | 43690;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mulli r10,r19,416
	ctx.r10.s64 = r19.s64 * 416;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + r31.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 872);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r7,512
	ctx.r10.s64 = ctx.r7.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 876);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 10780);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// b 0x823d53e8
	goto loc_823D53E8;
loc_823D5384:
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(r19.s32, -1, xer);
	// beq cr6,0x823d53e8
	if (cr6.eq) goto loc_823D53E8;
	// addi r10,r19,112
	ctx.r10.s64 = r19.s64 + 112;
	// stwu r17,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r17.u32);
	r11.u32 = ea;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r10,r19,416
	ctx.r10.s64 = r19.s64 * 416;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 872);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r7,512
	ctx.r10.s64 = ctx.r7.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 876);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 10780);
	// stw r10,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r10.u32);
loc_823D53E8:
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// lwz r10,12572(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12572);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// lwz r10,12576(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12576);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// b 0x823d5484
	goto loc_823D5484;
loc_823D5404:
	// cmpwi cr6,r19,-1
	cr6.compare<int32_t>(r19.s32, -1, xer);
	// beq cr6,0x823d5488
	if (cr6.eq) goto loc_823D5488;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d5428
	if (!cr6.gt) goto loc_823D5428;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D5428:
	// addi r10,r19,112
	ctx.r10.s64 = r19.s64 + 112;
	// stwu r17,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r17.u32);
	r11.u32 = ea;
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r10,r19,416
	ctx.r10.s64 = r19.s64 * 416;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + r31.u64;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 872);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r7,512
	ctx.r10.s64 = ctx.r7.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// lwz r10,876(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 876);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,10780(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 10780);
	// stw r10,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r10.u32);
loc_823D5484:
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
loc_823D5488:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823D5494"))) PPC_WEAK_FUNC(sub_823D5494);
PPC_FUNC_IMPL(__imp__sub_823D5494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D5498"))) PPC_WEAK_FUNC(sub_823D5498);
PPC_FUNC_IMPL(__imp__sub_823D5498) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,2031
	r11.s64 = 133103616;
	// addis r10,r3,-32528
	ctx.r10.s64 = ctx.r3.s64 + -2131755008;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// addi r10,r4,127
	ctx.r10.s64 = ctx.r4.s64 + 127;
	// rlwinm r11,r3,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,7
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 7;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// stw r8,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r8.u32);
	// rlwinm. r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// b 0x823d5518
	goto loc_823D5518;
loc_823D54D4:
	// dcbf r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbf r10,r11
	// li r10,256
	ctx.r10.s64 = 256;
	// dcbf r10,r11
	// li r10,384
	ctx.r10.s64 = 384;
	// dcbf r10,r11
	// li r10,512
	ctx.r10.s64 = 512;
	// dcbf r10,r11
	// li r10,640
	ctx.r10.s64 = 640;
	// dcbf r10,r11
	// li r10,768
	ctx.r10.s64 = 768;
	// dcbf r10,r11
	// li r10,896
	ctx.r10.s64 = 896;
	// dcbf r10,r11
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
loc_823D5518:
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// bne 0x823d54d4
	if (!cr0.eq) goto loc_823D54D4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// beq cr6,0x823d554c
	if (cr6.eq) goto loc_823D554C;
loc_823D5530:
	// dcbf r0,r11
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// blt cr6,0x823d5530
	if (cr6.lt) goto loc_823D5530;
loc_823D554C:
	// sync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D5554"))) PPC_WEAK_FUNC(sub_823D5554);
PPC_FUNC_IMPL(__imp__sub_823D5554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D5558"))) PPC_WEAK_FUNC(sub_823D5558);
PPC_FUNC_IMPL(__imp__sub_823D5558) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r10,r11,-31168
	ctx.r10.s64 = r11.s64 + -31168;
loc_823D5560:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r6,r11,2
	ctx.r6.s64 = r11.s64 + 2;
	// clrlwi r6,r6,20
	ctx.r6.u64 = ctx.r6.u32 & 0xFFF;
loc_823D5570:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x823d5594
	if (!cr6.eq) goto loc_823D5594;
	// stwcx. r6,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x823d5570
	if (!cr0.eq) goto loc_823D5570;
	// b 0x823d559c
	goto loc_823D559C;
loc_823D5594:
	// stwcx. r9,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
loc_823D559C:
	// mr r9,r9
	ctx.r9.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x823d5560
	if (!cr6.eq) goto loc_823D5560;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lbz r8,268(r13)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,17984
	ctx.r10.s64 = ctx.r10.s64 + 17984;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stwx r8,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r8.u32);
	// stwx r3,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// lwsync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D55CC"))) PPC_WEAK_FUNC(sub_823D55CC);
PPC_FUNC_IMPL(__imp__sub_823D55CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D55D0"))) PPC_WEAK_FUNC(sub_823D55D0);
PPC_FUNC_IMPL(__imp__sub_823D55D0) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r31,4
	r31.s64 = 262144;
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// bne 0x823d55fc
	if (!cr0.eq) goto loc_823D55FC;
	// lis r31,2
	r31.s64 = 131072;
loc_823D55FC:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r30,32528
	r30.s64 = 2131755008;
	// ori r7,r11,1
	ctx.r7.u64 = r11.u64 | 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lis r4,32528
	ctx.r4.s64 = 2131755008;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x826e520c
	__imp__KeLockL2(ctx, base);
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_823D5628:
	// dcbzl r0,r30
	memset(base + ((r30.u32) & ~127), 0, 128);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// dcbzl r10,r11
	memset(base + ((ctx.r10.u32 + r11.u32) & ~127), 0, 128);
	// li r10,256
	ctx.r10.s64 = 256;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// dcbzl r10,r11
	memset(base + ((ctx.r10.u32 + r11.u32) & ~127), 0, 128);
	// li r10,384
	ctx.r10.s64 = 384;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// dcbzl r10,r11
	memset(base + ((ctx.r10.u32 + r11.u32) & ~127), 0, 128);
	// li r10,512
	ctx.r10.s64 = 512;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// dcbzl r10,r11
	memset(base + ((ctx.r10.u32 + r11.u32) & ~127), 0, 128);
	// li r10,640
	ctx.r10.s64 = 640;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// dcbzl r10,r11
	memset(base + ((ctx.r10.u32 + r11.u32) & ~127), 0, 128);
	// li r10,768
	ctx.r10.s64 = 768;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// dcbzl r10,r11
	memset(base + ((ctx.r10.u32 + r11.u32) & ~127), 0, 128);
	// li r10,896
	ctx.r10.s64 = 896;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// dcbzl r10,r11
	memset(base + ((ctx.r10.u32 + r11.u32) & ~127), 0, 128);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r30,r11,1024
	r30.s64 = r11.s64 + 1024;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// blt cr6,0x823d5628
	if (cr6.lt) goto loc_823D5628;
	// sync 
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

__attribute__((alias("__imp__sub_823D56B4"))) PPC_WEAK_FUNC(sub_823D56B4);
PPC_FUNC_IMPL(__imp__sub_823D56B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D56B8"))) PPC_WEAK_FUNC(sub_823D56B8);
PPC_FUNC_IMPL(__imp__sub_823D56B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// srawi. r9,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823d56d0
	if (cr0.eq) goto loc_823D56D0;
	// lis r11,10922
	r11.s64 = 715784192;
	// ori r11,r11,43690
	r11.u64 = r11.u64 | 43690;
	// b 0x823d56e8
	goto loc_823D56E8;
loc_823D56D0:
	// rlwinm. r11,r10,0,1,1
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d56e4
	if (cr0.eq) goto loc_823D56E4;
	// lis r11,5461
	r11.s64 = 357892096;
	// ori r11,r11,21845
	r11.u64 = r11.u64 | 21845;
	// b 0x823d56e8
	goto loc_823D56E8;
loc_823D56E4:
	// li r11,-1
	r11.s64 = -1;
loc_823D56E8:
	// rlwinm. r10,r10,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d5718
	if (cr0.eq) goto loc_823D5718;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// bne 0x823d5718
	if (!cr0.eq) goto loc_823D5718;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x823d5718
	if (!cr6.eq) goto loc_823D5718;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
loc_823D5718:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D5720"))) PPC_WEAK_FUNC(sub_823D5720);
PPC_FUNC_IMPL(__imp__sub_823D5720) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// lwz r26,4(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_823D5740:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x823d57f8
	if (!cr6.lt) goto loc_823D57F8;
	// addi r28,r26,-1
	r28.s64 = r26.s64 + -1;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
loc_823D5758:
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lhz r8,-2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + -2);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lhz r31,-4(r11)
	r31.u64 = PPC_LOAD_U16(r11.u32 + -4);
	// lhz r30,0(r11)
	r30.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r29,r9,3,0,28
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r31,r31,3
	r31.u64 = __builtin_rotateleft32(r31.u32, 3);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r30,r30,3
	r30.u64 = __builtin_rotateleft32(r30.u32, 3);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
loc_823D5798:
	// lwz r24,-4(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r24,r8
	cr6.compare<uint32_t>(r24.u32, ctx.r8.u32, xer);
	// bge cr6,0x823d57d0
	if (!cr6.lt) goto loc_823D57D0;
	// lwz r24,4(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r24,r31
	cr6.compare<uint32_t>(r24.u32, r31.u32, xer);
	// ble cr6,0x823d57d0
	if (!cr6.gt) goto loc_823D57D0;
	// lwz r24,0(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(r24.u32, r29.u32, xer);
	// bge cr6,0x823d57d0
	if (!cr6.lt) goto loc_823D57D0;
	// lwz r24,8(r9)
	r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r24,r30
	cr6.compare<uint32_t>(r24.u32, r30.u32, xer);
	// ble cr6,0x823d57d0
	if (!cr6.gt) goto loc_823D57D0;
	// ori r6,r6,3
	ctx.r6.u64 = ctx.r6.u64 | 3;
loc_823D57D0:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// bne cr6,0x823d5798
	if (!cr6.eq) goto loc_823D5798;
	// oris r9,r6,32768
	ctx.r9.u64 = ctx.r6.u64 | 2147483648;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// blt cr6,0x823d5758
	if (cr6.lt) goto loc_823D5758;
loc_823D57F8:
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x823d5808
	if (cr6.eq) goto loc_823D5808;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
loc_823D5808:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823d5740
	if (!cr6.eq) goto loc_823D5740;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823D5820"))) PPC_WEAK_FUNC(sub_823D5820);
PPC_FUNC_IMPL(__imp__sub_823D5820) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x823d5720
	sub_823D5720(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823D5840:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// b 0x823d5860
	goto loc_823D5860;
loc_823D584C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d5720
	sub_823D5720(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823D5860:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x823d584c
	if (cr6.lt) goto loc_823D584C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823d5840
	if (!cr6.eq) goto loc_823D5840;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D5880"))) PPC_WEAK_FUNC(sub_823D5880);
PPC_FUNC_IMPL(__imp__sub_823D5880) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d55d0
	sub_823D55D0(ctx, base);
	// li r29,0
	r29.s64 = 0;
	// lis r26,256
	r26.s64 = 16777216;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823D58B4:
	// slw r9,r26,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 & r27.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823d58c4
	if (cr0.eq) goto loc_823D58C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823D58C4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// blt cr6,0x823d58b4
	if (cr6.lt) goto loc_823D58B4;
	// rlwinm r11,r27,0,2,7
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x3F000000;
	// clrlwi. r9,r27,31
	ctx.r9.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// lis r11,4
	r11.s64 = 262144;
	// bne 0x823d58e8
	if (!cr0.eq) goto loc_823D58E8;
	// lis r11,2
	r11.s64 = 131072;
loc_823D58E8:
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// lwz r10,11668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 11668);
	// rlwinm r6,r11,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lis r9,32528
	ctx.r9.s64 = 2131755008;
	// addi r11,r31,11204
	r11.s64 = r31.s64 + 11204;
loc_823D5904:
	// slw r8,r26,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r7.u8 & 0x3F));
	// and. r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 & r27.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823d595c
	if (cr0.eq) goto loc_823D595C;
	// lis r5,-16382
	ctx.r5.s64 = -1073610752;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r29.u32);
	// rotlwi r3,r9,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// ori r5,r5,22528
	ctx.r5.u64 = ctx.r5.u64 | 22528;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r3,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r3.u32);
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// lwz r5,-4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// rlwimi r8,r5,0,30,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 0) & 0x3) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_823D595C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// cmplwi cr6,r7,6
	cr6.compare<uint32_t>(ctx.r7.u32, 6, xer);
	// blt cr6,0x823d5904
	if (cr6.lt) goto loc_823D5904;
	// lwz r11,11668(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11668);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r29.u32);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// oris r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 2164260864;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x823d1700
	sub_823D1700(ctx, base);
	// addi r30,r31,11196
	r30.s64 = r31.s64 + 11196;
loc_823D59B8:
	// slw r11,r26,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r26.u32 << (r29.u8 & 0x3F));
	// and. r11,r11,r27
	r11.u64 = r11.u64 & r27.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d5a08
	if (cr0.eq) goto loc_823D5A08;
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwimi r28,r11,0,0,29
	r28.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFC) | (r28.u64 & 0xFFFFFFFF00000003);
	// bl 0x823c69a0
	sub_823C69A0(ctx, base);
loc_823D59E0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823c6b50
	sub_823C6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d5a00
	if (cr0.eq) goto loc_823D5A00;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x823d59e0
	if (!cr6.eq) goto loc_823D59E0;
loc_823D5A00:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823c69d0
	sub_823C69D0(ctx, base);
loc_823D5A08:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// cmplwi cr6,r29,6
	cr6.compare<uint32_t>(r29.u32, 6, xer);
	// blt cr6,0x823d59b8
	if (cr6.lt) goto loc_823D59B8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823D5A20"))) PPC_WEAK_FUNC(sub_823D5A20);
PPC_FUNC_IMPL(__imp__sub_823D5A20) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// bl 0x823d56b8
	sub_823D56B8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,348(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 348);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x823d5b08
	if (cr6.eq) goto loc_823D5B08;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r3,348(r6)
	PPC_STORE_U32(ctx.r6.u32 + 348, ctx.r3.u32);
	// ori r11,r11,25088
	r11.u64 = r11.u64 | 25088;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,21380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d5a90
	if (cr6.eq) goto loc_823D5A90;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D5A90:
	// lwz r11,21520(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21520);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d5ab4
	if (cr0.eq) goto loc_823D5AB4;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D5AB4:
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1118
	sub_823D1118(ctx, base);
	// lwz r11,21380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d5ae4
	if (cr6.eq) goto loc_823D5AE4;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D5AE4:
	// lwz r11,21520(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21520);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d5b08
	if (cr0.eq) goto loc_823D5B08;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D5B08:
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

__attribute__((alias("__imp__sub_823D5B1C"))) PPC_WEAK_FUNC(sub_823D5B1C);
PPC_FUNC_IMPL(__imp__sub_823D5B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D5B20"))) PPC_WEAK_FUNC(sub_823D5B20);
PPC_FUNC_IMPL(__imp__sub_823D5B20) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,6
	r28.s64 = 6;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r29,11200
	r31.s64 = r29.s64 + 11200;
loc_823D5B40:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d5b90
	if (cr6.eq) goto loc_823D5B90;
	// lwz r30,-4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwimi r30,r11,0,30,31
	r30.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x3) | (r30.u64 & 0xFFFFFFFFFFFFFFFC);
	// bl 0x823c69a0
	sub_823C69A0(ctx, base);
loc_823D5B68:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c6b50
	sub_823C6B50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d5b88
	if (cr0.eq) goto loc_823D5B88;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bne cr6,0x823d5b68
	if (!cr6.eq) goto loc_823D5B68;
loc_823D5B88:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823c69d0
	sub_823C69D0(ctx, base);
loc_823D5B90:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// bne 0x823d5b40
	if (!cr0.eq) goto loc_823D5B40;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823D5BA4"))) PPC_WEAK_FUNC(sub_823D5BA4);
PPC_FUNC_IMPL(__imp__sub_823D5BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D5BA8"))) PPC_WEAK_FUNC(sub_823D5BA8);
PPC_FUNC_IMPL(__imp__sub_823D5BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
loc_823D5BAC:
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// b 0x823d5c54
	goto loc_823D5C54;
loc_823D5BB8:
	// rlwinm r8,r11,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// clrlwi. r7,r11,31
	ctx.r7.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// subf r11,r4,r8
	r11.s64 = ctx.r8.s64 - ctx.r4.s64;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// beq 0x823d5bf0
	if (cr0.eq) goto loc_823D5BF0;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// subfc r8,r7,r8
	xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// b 0x823d5c24
	goto loc_823D5C24;
loc_823D5BF0:
	// addi r8,r11,48
	ctx.r8.s64 = r11.s64 + 48;
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// addi r6,r11,52
	ctx.r6.s64 = r11.s64 + 52;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// lwbrx r6,0,r6
	ctx.r6.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwbrx r7,0,r3
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r3.u32));
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subfic r8,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
loc_823D5C24:
	// rlwinm r8,r9,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// clrlwi r7,r9,3
	ctx.r7.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// rlwinm r8,r8,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1000;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// subf r9,r4,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r4.s64;
	// dcbf r0,r9
	// dcbf r0,r11
	// li r9,24
	ctx.r9.s64 = 24;
	// dcbf r9,r11
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
loc_823D5C54:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// blt cr6,0x823d5bb8
	if (cr6.lt) goto loc_823D5BB8;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// stw r11,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r11.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x823d5bac
	if (!cr6.eq) goto loc_823D5BAC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D5C7C"))) PPC_WEAK_FUNC(sub_823D5C7C);
PPC_FUNC_IMPL(__imp__sub_823D5C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D5C80"))) PPC_WEAK_FUNC(sub_823D5C80);
PPC_FUNC_IMPL(__imp__sub_823D5C80) {
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
	// mflr r12
	// bl 0x8239bce8
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
	// li r26,0
	r26.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lis r28,16384
	r28.s64 = 1073741824;
	// stw r31,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, r31.u32);
	// stw r30,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, r30.u32);
	// stw r26,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r26.u32);
	// stw r27,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r27.u32);
loc_823D5CAC:
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r4,4
	ctx.r6.s64 = ctx.r4.s64 + 4;
	// b 0x823d5df4
	goto loc_823D5DF4;
loc_823D5CB8:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm r11,r10,0,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// stw r10,-120(r1)
	PPC_STORE_U32(ctx.r1.u32 + -120, ctx.r10.u32);
	// stw r3,-116(r1)
	PPC_STORE_U32(ctx.r1.u32 + -116, ctx.r3.u32);
	// stw r11,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, r11.u32);
	// dcbf r0,r11
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d5d90
	if (!cr0.eq) goto loc_823D5D90;
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// addi r7,r31,-1
	ctx.r7.s64 = r31.s64 + -1;
	// lhz r9,6(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r4,r8,1
	ctx.r4.s64 = ctx.r8.s64 + 1;
	// lhz r25,4(r11)
	r25.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r24,r9,1
	r24.s64 = ctx.r9.s64 + 1;
	// rotlwi r8,r5,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// stw r11,-108(r1)
	PPC_STORE_U32(ctx.r1.u32 + -108, r11.u32);
	// rlwinm r9,r4,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// rotlwi r5,r25,3
	ctx.r5.u64 = __builtin_rotateleft32(r25.u32, 3);
	// rlwinm r4,r24,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r10,r30
	r11.u64 = ctx.r10.u64 + r30.u64;
	// stw r8,-104(r1)
	PPC_STORE_U32(ctx.r1.u32 + -104, ctx.r8.u32);
	// stw r9,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r5,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r5.u32);
	// stw r4,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r4.u32);
loc_823D5D30:
	// lwz r25,-4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// bge cr6,0x823d5d6c
	if (!cr6.lt) goto loc_823D5D6C;
	// lwz r25,4(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r25,r8
	cr6.compare<uint32_t>(r25.u32, ctx.r8.u32, xer);
	// ble cr6,0x823d5d6c
	if (!cr6.gt) goto loc_823D5D6C;
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r25,r4
	cr6.compare<uint32_t>(r25.u32, ctx.r4.u32, xer);
	// bge cr6,0x823d5d6c
	if (!cr6.lt) goto loc_823D5D6C;
	// lwz r25,8(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r25,r5
	cr6.compare<uint32_t>(r25.u32, ctx.r5.u32, xer);
	// ble cr6,0x823d5d6c
	if (!cr6.gt) goto loc_823D5D6C;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
loc_823D5D6C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r11,r11,-16
	r11.s64 = r11.s64 + -16;
	// bne cr6,0x823d5d30
	if (!cr6.eq) goto loc_823D5D30;
	// add r27,r27,r31
	r27.u64 = r27.u64 + r31.u64;
	// stw r7,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r7.u32);
	// stw r26,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, r26.u32);
	// stw r27,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, r27.u32);
	// b 0x823d5dcc
	goto loc_823D5DCC;
loc_823D5D90:
	// addi r10,r11,48
	ctx.r10.s64 = r11.s64 + 48;
	// stw r11,-84(r1)
	PPC_STORE_U32(ctx.r1.u32 + -84, r11.u32);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r8,r11,52
	ctx.r8.s64 = r11.s64 + 52;
	// addi r7,r11,20
	ctx.r7.s64 = r11.s64 + 20;
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// lwbrx r9,0,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// subf r11,r10,r9
	r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwbrx r9,0,r8
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// lwbrx r10,0,r7
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,-80(r1)
	PPC_STORE_U32(ctx.r1.u32 + -80, r11.u32);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r10,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
loc_823D5DCC:
	// rlwinm r11,r3,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// stw r10,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r10.u32);
	// clrlwi r9,r3,3
	ctx.r9.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// dcbf r0,r11
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
loc_823D5DF4:
	// cmplw cr6,r6,r29
	cr6.compare<uint32_t>(ctx.r6.u32, r29.u32, xer);
	// stw r6,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r6.u32);
	// blt cr6,0x823d5cb8
	if (cr6.lt) goto loc_823D5CB8;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// stw r4,-76(r1)
	PPC_STORE_U32(ctx.r1.u32 + -76, ctx.r4.u32);
	// bne cr6,0x823d5cac
	if (!cr6.eq) goto loc_823D5CAC;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823D5E18"))) PPC_WEAK_FUNC(sub_823D5E18);
PPC_FUNC_IMPL(__imp__sub_823D5E18) {
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
	// mflr r12
	// bl 0x8239bcf0
	// lwz r28,4(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r30,r3,8
	r30.s64 = ctx.r3.s64 + 8;
loc_823D5E28:
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// lwz r29,0(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, r11.u32);
	// bge cr6,0x823d5ef8
	if (!cr6.lt) goto loc_823D5EF8;
	// addi r31,r28,-1
	r31.s64 = r28.s64 + -1;
loc_823D5E40:
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r3,r8,1
	ctx.r3.s64 = ctx.r8.s64 + 1;
	// lhz r27,8(r11)
	r27.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// addi r26,r9,1
	r26.s64 = ctx.r9.s64 + 1;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// rotlwi r8,r4,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 3);
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r4,r27,3
	ctx.r4.u64 = __builtin_rotateleft32(r27.u32, 3);
	// rlwinm r3,r26,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_823D5E80:
	// lwz r27,-4(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r27,r9
	cr6.compare<uint32_t>(r27.u32, ctx.r9.u32, xer);
	// bge cr6,0x823d5eb8
	if (!cr6.lt) goto loc_823D5EB8;
	// lwz r27,4(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r27,r8
	cr6.compare<uint32_t>(r27.u32, ctx.r8.u32, xer);
	// ble cr6,0x823d5eb8
	if (!cr6.gt) goto loc_823D5EB8;
	// lwz r27,0(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r3
	cr6.compare<uint32_t>(r27.u32, ctx.r3.u32, xer);
	// bge cr6,0x823d5eb8
	if (!cr6.lt) goto loc_823D5EB8;
	// lwz r27,8(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r27,r4
	cr6.compare<uint32_t>(r27.u32, ctx.r4.u32, xer);
	// ble cr6,0x823d5eb8
	if (!cr6.gt) goto loc_823D5EB8;
	// ori r5,r5,3
	ctx.r5.u64 = ctx.r5.u64 | 3;
loc_823D5EB8:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bne cr6,0x823d5e80
	if (!cr6.eq) goto loc_823D5E80;
	// rlwinm r10,r6,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// clrlwi r9,r6,3
	ctx.r9.u64 = ctx.r6.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addis r10,r10,-16384
	ctx.r10.s64 = ctx.r10.s64 + -1073741824;
	// dcbf r0,r10
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// stw r11,-64(r1)
	PPC_STORE_U32(ctx.r1.u32 + -64, r11.u32);
	// blt cr6,0x823d5e40
	if (cr6.lt) goto loc_823D5E40;
loc_823D5EF8:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// stw r4,-60(r1)
	PPC_STORE_U32(ctx.r1.u32 + -60, ctx.r4.u32);
	// bne cr6,0x823d5e28
	if (!cr6.eq) goto loc_823D5E28;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823D5F10"))) PPC_WEAK_FUNC(sub_823D5F10);
PPC_FUNC_IMPL(__imp__sub_823D5F10) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d6238
	if (cr0.eq) goto loc_823D6238;
	// lis r25,-30976
	r25.s64 = -2030043136;
loc_823D5F40:
	// rlwinm r11,r10,0,0,7
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bgt cr6,0x823d60dc
	if (cr6.gt) goto loc_823D60DC;
	// beq cr6,0x823d60ac
	if (cr6.eq) goto loc_823D60AC;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d6078
	if (cr6.eq) goto loc_823D6078;
	// lis r9,-32512
	ctx.r9.s64 = -2130706432;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d6050
	if (cr6.eq) goto loc_823D6050;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d622c
	if (cr6.eq) goto loc_823D622C;
	// lis r9,-32000
	ctx.r9.s64 = -2097152000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d600c
	if (cr6.eq) goto loc_823D600C;
	// lis r9,-31744
	ctx.r9.s64 = -2080374784;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d5fec
	if (cr6.eq) goto loc_823D5FEC;
	// lis r9,-31488
	ctx.r9.s64 = -2063597568;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d5fbc
	if (cr6.eq) goto loc_823D5FBC;
	// lis r9,-31232
	ctx.r9.s64 = -2046820352;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x823d6130
	if (!cr6.eq) goto loc_823D6130;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r11,364(r30)
	PPC_STORE_U32(r30.u32 + 364, r11.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// b 0x823d6040
	goto loc_823D6040;
loc_823D5FBC:
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r11,360(r30)
	PPC_STORE_U32(r30.u32 + 360, r11.u32);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwimi r11,r10,26,0,0
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x80000000) | (r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d6044
	if (cr0.eq) goto loc_823D6044;
	// lwz r31,356(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 356);
	// b 0x823d622c
	goto loc_823D622C;
loc_823D5FEC:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d6044
	if (cr0.eq) goto loc_823D6044;
	// lwz r31,360(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 360);
	// b 0x823d622c
	goto loc_823D622C;
loc_823D600C:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// stw r10,356(r30)
	PPC_STORE_U32(r30.u32 + 356, ctx.r10.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// ble cr6,0x823d6044
	if (!cr6.gt) goto loc_823D6044;
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823d6044
	if (cr0.eq) goto loc_823D6044;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
loc_823D6040:
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
loc_823D6044:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d5a20
	sub_823D5A20(ctx, base);
	// b 0x823d622c
	goto loc_823D622C;
loc_823D6050:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// clrlwi r11,r10,8
	r11.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823d1700
	sub_823D1700(ctx, base);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// b 0x823d622c
	goto loc_823D622C;
loc_823D6078:
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// li r5,248
	ctx.r5.s64 = 248;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// li r11,0
	r11.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r31,r31,252
	r31.s64 = r31.s64 + 252;
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stw r10,348(r30)
	PPC_STORE_U32(r30.u32 + 348, ctx.r10.u32);
	// stw r9,352(r30)
	PPC_STORE_U32(r30.u32 + 352, ctx.r9.u32);
	// b 0x823d622c
	goto loc_823D622C;
loc_823D60AC:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,104(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// rlwinm r9,r9,0,3,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stw r9,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r9.u32);
	// bge cr6,0x823d6044
	if (!cr6.lt) goto loc_823D6044;
	// lwz r31,364(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// b 0x823d622c
	goto loc_823D622C;
loc_823D60DC:
	// lis r9,-30720
	ctx.r9.s64 = -2013265920;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d620c
	if (cr6.eq) goto loc_823D620C;
	// lis r9,-30464
	ctx.r9.s64 = -1996488704;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d61e8
	if (cr6.eq) goto loc_823D61E8;
	// lis r9,-30208
	ctx.r9.s64 = -1979711488;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d6188
	if (cr6.eq) goto loc_823D6188;
	// lis r9,-29952
	ctx.r9.s64 = -1962934272;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d6180
	if (cr6.eq) goto loc_823D6180;
	// lis r9,-29696
	ctx.r9.s64 = -1946157056;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d6238
	if (cr6.eq) goto loc_823D6238;
	// lis r9,-29440
	ctx.r9.s64 = -1929379840;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d6238
	if (cr6.eq) goto loc_823D6238;
	// lis r9,-29184
	ctx.r9.s64 = -1912602624;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x823d6144
	if (cr6.eq) goto loc_823D6144;
loc_823D6130:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823d6238
	if (cr6.eq) goto loc_823D6238;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// b 0x823d622c
	goto loc_823D622C;
loc_823D6144:
	// lwz r11,348(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d6170
	if (cr0.eq) goto loc_823D6170;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823d1700
	sub_823D1700(ctx, base);
loc_823D6170:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// stw r11,352(r30)
	PPC_STORE_U32(r30.u32 + 352, r11.u32);
	// b 0x823d622c
	goto loc_823D622C;
loc_823D6180:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x823d622c
	goto loc_823D622C;
loc_823D6188:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r28,8(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r27,12(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x823d5880
	sub_823D5880(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d5ba8
	sub_823D5BA8(ctx, base);
	// lwz r11,348(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d61c8
	if (cr0.eq) goto loc_823D61C8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// bl 0x823d5c80
	sub_823D5C80(ctx, base);
	// b 0x823d61e0
	goto loc_823D61E0;
loc_823D61C8:
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x823d61e0
	if (!cr6.eq) goto loc_823D61E0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// bl 0x823d5e18
	sub_823D5E18(ctx, base);
loc_823D61E0:
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// b 0x823d622c
	goto loc_823D622C;
loc_823D61E8:
	// lwz r11,348(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d6204
	if (cr0.eq) goto loc_823D6204;
	// addi r3,r30,100
	ctx.r3.s64 = r30.s64 + 100;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x823d5820
	sub_823D5820(ctx, base);
loc_823D6204:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// b 0x823d622c
	goto loc_823D622C;
loc_823D620C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// lwz r10,348(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 348);
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d622c
	if (cr0.eq) goto loc_823D622C;
	// mr r11,r31
	r11.u64 = r31.u64;
	// addi r31,r30,76
	r31.s64 = r30.s64 + 76;
	// stw r11,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r11.u32);
loc_823D622C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d5f40
	if (!cr0.eq) goto loc_823D5F40;
loc_823D6238:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823D6244"))) PPC_WEAK_FUNC(sub_823D6244);
PPC_FUNC_IMPL(__imp__sub_823D6244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D6248"))) PPC_WEAK_FUNC(sub_823D6248);
PPC_FUNC_IMPL(__imp__sub_823D6248) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r27,r31,60
	r27.s64 = r31.s64 + 60;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e513c
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x823d635c
	if (!cr6.eq) goto loc_823D635C;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// lis r7,256
	ctx.r7.s64 = 16777216;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// slw r11,r7,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// bne 0x823d6318
	if (!cr0.eq) goto loc_823D6318;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,11248
	r11.s64 = r11.s64 + 11248;
loc_823D62C8:
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// slw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and. r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823d62f0
	if (cr0.eq) goto loc_823D62F0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stw r9,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r9.u32);
loc_823D62F0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x823d62c8
	if (cr6.lt) goto loc_823D62C8;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d6318
	if (!cr6.eq) goto loc_823D6318;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_823D6318:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d5b20
	sub_823D5B20(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823d6334
	if (cr6.eq) goto loc_823D6334;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826e521c
	__imp__KeUnlockL2(ctx, base);
loc_823D6334:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e512c
	__imp__KfReleaseSpinLock(ctx, base);
	// lwsync 
	// li r11,0
	r11.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d636c
	goto loc_823D636C;
loc_823D635C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e512c
	__imp__KfReleaseSpinLock(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
loc_823D636C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823D6374"))) PPC_WEAK_FUNC(sub_823D6374);
PPC_FUNC_IMPL(__imp__sub_823D6374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D6378"))) PPC_WEAK_FUNC(sub_823D6378);
PPC_FUNC_IMPL(__imp__sub_823D6378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r3,-17477
	ctx.r3.s64 = -1145372672;
	// ori r3,r3,48059
	ctx.r3.u64 = ctx.r3.u64 | 48059;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// lis r5,256
	ctx.r5.s64 = 16777216;
	// b 0x823d63b8
	goto loc_823D63B8;
loc_823D63A0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// slw r11,r5,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d63c4
	if (!cr0.eq) goto loc_823D63C4;
	// db16cyc 
loc_823D63B8:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d63a0
	if (!cr6.eq) goto loc_823D63A0;
loc_823D63C4:
	// li r29,0
	r29.s64 = 0;
	// li r28,1
	r28.s64 = 1;
loc_823D63CC:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x823d63f0
	if (!cr6.eq) goto loc_823D63F0;
	// stwcx. r28,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(r28.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823d63cc
	if (!cr0.eq) goto loc_823D63CC;
	// b 0x823d63f8
	goto loc_823D63F8;
loc_823D63F0:
	// stwcx. r11,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
loc_823D63F8:
	// mr r11,r11
	r11.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d63cc
	if (!cr6.eq) goto loc_823D63CC;
	// lwsync 
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r3,-17477
	ctx.r3.s64 = -1145372672;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823d6434
	if (!cr6.eq) goto loc_823D6434;
	// ori r3,r3,48060
	ctx.r3.u64 = ctx.r3.u64 | 48060;
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// lwsync 
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_823D642C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_823D6434:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// ori r3,r3,48061
	ctx.r3.u64 = ctx.r3.u64 | 48061;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// clrlwi r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823d649c
	if (!cr6.gt) goto loc_823D649C;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// b 0x823d64c8
	goto loc_823D64C8;
loc_823D649C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// slw r11,r5,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x823d64c0
	if (cr0.eq) goto loc_823D64C0;
	// stw r29,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r29.u32);
	// b 0x823d64c8
	goto loc_823D64C8;
loc_823D64C0:
	// addi r5,r4,4
	ctx.r5.s64 = ctx.r4.s64 + 4;
	// stw r4,68(r31)
	PPC_STORE_U32(r31.u32 + 68, ctx.r4.u32);
loc_823D64C8:
	// lis r27,-16384
	r27.s64 = -1073741824;
loc_823D64CC:
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// bge cr6,0x823d64f4
	if (!cr6.lt) goto loc_823D64F4;
	// addi r11,r6,1
	r11.s64 = ctx.r6.s64 + 1;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwsync 
	// b 0x823d6544
	goto loc_823D6544;
loc_823D64F4:
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d6560
	if (!cr0.eq) goto loc_823D6560;
	// lwz r9,352(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// lwz r8,348(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// rlwinm r10,r11,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x7FFF;
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823d6520
	if (!cr0.eq) goto loc_823D6520;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// b 0x823d64cc
	goto loc_823D64CC;
loc_823D6520:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r28,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r28.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r5.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lwsync 
	// li r6,0
	ctx.r6.s64 = 0;
loc_823D6544:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// b 0x823d64cc
	goto loc_823D64CC;
loc_823D6560:
	// lis r10,-29440
	ctx.r10.s64 = -1929379840;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823d657c
	if (!cr6.eq) goto loc_823D657C;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// stw r11,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r11.u32);
	// b 0x823d64cc
	goto loc_823D64CC;
loc_823D657C:
	// lis r10,-29696
	ctx.r10.s64 = -1946157056;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823d65a0
	if (!cr6.eq) goto loc_823D65A0;
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x823d64cc
	goto loc_823D64CC;
loc_823D65A0:
	// rlwinm r10,r11,0,0,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	// cmplw cr6,r10,r27
	cr6.compare<uint32_t>(ctx.r10.u32, r27.u32, xer);
	// bne cr6,0x823d65d4
	if (!cr6.eq) goto loc_823D65D4;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x823d65cc
	if (!cr6.eq) goto loc_823D65CC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d6248
	sub_823D6248(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne 0x823d64cc
	if (!cr0.eq) goto loc_823D64CC;
	// b 0x823d642c
	goto loc_823D642C;
loc_823D65CC:
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// b 0x823d64cc
	goto loc_823D64CC;
loc_823D65D4:
	// lis r3,-12288
	ctx.r3.s64 = -805306368;
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// beq cr6,0x823d665c
	if (cr6.eq) goto loc_823D665C;
	// stw r5,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r5.u32);
	// lwsync 
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// b 0x823d660c
	goto loc_823D660C;
loc_823D6608:
	// db16cyc 
loc_823D660C:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d6608
	if (!cr6.eq) goto loc_823D6608;
loc_823D6618:
	// mfmsr r10
	// mtmsrd r13,1
	// lwarx r11,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	r11.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bne cr6,0x823d663c
	if (!cr6.eq) goto loc_823D663C;
	// stwcx. r28,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(r28.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
	// bne 0x823d6618
	if (!cr0.eq) goto loc_823D6618;
	// b 0x823d6644
	goto loc_823D6644;
loc_823D663C:
	// stwcx. r11,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r10,1
loc_823D6644:
	// mr r11,r11
	r11.u64 = r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d6618
	if (!cr6.eq) goto loc_823D6618;
	// lwsync 
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// b 0x823d6670
	goto loc_823D6670;
loc_823D665C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823d5f10
	sub_823D5F10(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
loc_823D6670:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lis r3,-12288
	ctx.r3.s64 = -805306368;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// b 0x823d64cc
	goto loc_823D64CC;
}

__attribute__((alias("__imp__sub_823D668C"))) PPC_WEAK_FUNC(sub_823D668C);
PPC_FUNC_IMPL(__imp__sub_823D668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D6690"))) PPC_WEAK_FUNC(sub_823D6690);
PPC_FUNC_IMPL(__imp__sub_823D6690) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,-2
	ctx.r3.s64 = -2;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x823b9c20
	sub_823B9C20(ctx, base);
	// lis r25,-32256
	r25.s64 = -2113929216;
loc_823D66B0:
	// lis r11,-5
	r11.s64 = -327680;
	// lwz r26,0(r28)
	r26.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// ori r11,r11,27680
	r11.u64 = r11.u64 | 27680;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,368(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 368);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823d66d8
	if (cr6.eq) goto loc_823D66D8;
	// li r27,0
	r27.s64 = 0;
loc_823D66D8:
	// lwz r11,60(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 60);
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823d6750
	if (!cr6.eq) goto loc_823D6750;
	// addi r29,r28,32
	r29.s64 = r28.s64 + 32;
	// b 0x823d6730
	goto loc_823D6730;
loc_823D66F0:
	// lwz r11,2052(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 2052);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r30,r31,14792
	r30.s64 = r31.s64 + 14792;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d6728
	if (cr0.eq) goto loc_823D6728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cf948
	sub_823CF948(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,14692
	ctx.r4.s64 = r31.s64 + 14692;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cf950
	sub_823CF950(ctx, base);
loc_823D6728:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_823D6730:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	// cmplwi cr6,r3,258
	cr6.compare<uint32_t>(ctx.r3.u32, 258, xer);
	// beq cr6,0x823d66f0
	if (cr6.eq) goto loc_823D66F0;
loc_823D6750:
	// addi r3,r28,32
	ctx.r3.s64 = r28.s64 + 32;
	// bl 0x826e522c
	__imp__KeResetEvent(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d6770
	if (cr6.eq) goto loc_823D6770;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823d6378
	sub_823D6378(ctx, base);
	// b 0x823d66b0
	goto loc_823D66B0;
loc_823D6770:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823D677C"))) PPC_WEAK_FUNC(sub_823D677C);
PPC_FUNC_IMPL(__imp__sub_823D677C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D6780"))) PPC_WEAK_FUNC(sub_823D6780);
PPC_FUNC_IMPL(__imp__sub_823D6780) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lbz r10,268(r13)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mulli r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 * 80;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lis r3,-21846
	ctx.r3.s64 = -1431699456;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r3,r3,43690
	ctx.r3.u64 = ctx.r3.u64 | 43690;
	// addi r31,r11,11188
	r31.s64 = r11.s64 + 11188;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r5,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r5.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x823d5558
	sub_823D5558(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x826e524c
	__imp__KeSetEvent(ctx, base);
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

__attribute__((alias("__imp__sub_823D6808"))) PPC_WEAK_FUNC(sub_823D6808);
PPC_FUNC_IMPL(__imp__sub_823D6808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,11184(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 11184);
	// mulli r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 * 80;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,11188
	r11.s64 = r11.s64 + 11188;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// b 0x826e524c
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823D6858"))) PPC_WEAK_FUNC(sub_823D6858);
PPC_FUNC_IMPL(__imp__sub_823D6858) {
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
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0f58
	sub_823D0F58(ctx, base);
	// lwz r11,13100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13100);
	// lwz r8,13096(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 13096);
	// addi r30,r31,13224
	r30.s64 = r31.s64 + 13224;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r31,13244
	ctx.r10.s64 = r31.s64 + 13244;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r8,13088(r31)
	PPC_STORE_U32(r31.u32 + 13088, ctx.r8.u32);
	// stw r11,13092(r31)
	PPC_STORE_U32(r31.u32 + 13092, r11.u32);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_823D68A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823d68a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823D68A4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d2110
	sub_823D2110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13104
	ctx.r3.s64 = r31.s64 + 13104;
	// bl 0x823d2110
	sub_823D2110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13204
	ctx.r3.s64 = r31.s64 + 13204;
	// bl 0x823d2110
	sub_823D2110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13124
	ctx.r3.s64 = r31.s64 + 13124;
	// bl 0x823d2110
	sub_823D2110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13144
	ctx.r3.s64 = r31.s64 + 13144;
	// bl 0x823d2110
	sub_823D2110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13164
	ctx.r3.s64 = r31.s64 + 13164;
	// bl 0x823d2110
	sub_823D2110(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,13184
	ctx.r3.s64 = r31.s64 + 13184;
	// bl 0x823d2110
	sub_823D2110(ctx, base);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r10,r3,252
	ctx.r10.s64 = ctx.r3.s64 + 252;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x823d6928
	if (!cr6.gt) goto loc_823D6928;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d1ec0
	sub_823D1EC0(ctx, base);
loc_823D6928:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,13052(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13052);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,12612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,12612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// lwz r8,12856(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12856);
	// lwz r7,12860(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12860);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823d69a8
	if (!cr6.gt) goto loc_823D69A8;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
	// addi r11,r31,12620
	r11.s64 = r31.s64 + 12620;
loc_823D6960:
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// stw r6,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r6.u32);
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r6,r8,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r8.s64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r6,12612(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// blt cr6,0x823d6960
	if (cr6.lt) goto loc_823D6960;
loc_823D69A8:
	// addi r11,r3,252
	r11.s64 = ctx.r3.s64 + 252;
	// stw r11,13232(r31)
	PPC_STORE_U32(r31.u32 + 13232, r11.u32);
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

__attribute__((alias("__imp__sub_823D69C8"))) PPC_WEAK_FUNC(sub_823D69C8);
PPC_FUNC_IMPL(__imp__sub_823D69C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d69f4
	if (!cr0.eq) goto loc_823D69F4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x823d18e8
	sub_823D18E8(ctx, base);
loc_823D69F4:
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1618
	sub_823D1618(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x823d6a5c
	if (cr0.eq) goto loc_823D6A5C;
	// lwz r11,13224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13224);
	// addi r4,r29,-4
	ctx.r4.s64 = r29.s64 + -4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d6a28
	if (!cr0.eq) goto loc_823D6A28;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x823d6a40
	goto loc_823D6A40;
loc_823D6A28:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r7,r11,-16384
	ctx.r7.s64 = r11.s64 + -1073741824;
loc_823D6A40:
	// lis r11,-32195
	r11.s64 = -2109931520;
	// ori r5,r30,1
	ctx.r5.u64 = r30.u64 | 1;
	// addi r6,r11,26496
	ctx.r6.s64 = r11.s64 + 26496;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1d30
	sub_823D1D30(ctx, base);
	// addi r28,r3,4
	r28.s64 = ctx.r3.s64 + 4;
	// b 0x823d6a60
	goto loc_823D6A60;
loc_823D6A5C:
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823D6A60:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1618
	sub_823D1618(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bne 0x823d6a80
	if (!cr0.eq) goto loc_823D6A80;
	// lwz r30,84(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823D6A80:
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// stw r26,13088(r31)
	PPC_STORE_U32(r31.u32 + 13088, r26.u32);
	// stw r26,13092(r31)
	PPC_STORE_U32(r31.u32 + 13092, r26.u32);
	// rlwinm. r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x823d6aac
	if (cr0.eq) goto loc_823D6AAC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0f90
	sub_823D0F90(ctx, base);
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// andi. r11,r11,223
	r11.u64 = r11.u64 & 223;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, r11.u8);
	// b 0x823d6b54
	goto loc_823D6B54;
loc_823D6AAC:
	// addi r3,r31,13224
	ctx.r3.s64 = r31.s64 + 13224;
	// bl 0x823d1300
	sub_823D1300(ctx, base);
	// addi r3,r31,13104
	ctx.r3.s64 = r31.s64 + 13104;
	// bl 0x823d1300
	sub_823D1300(ctx, base);
	// addi r3,r31,13204
	ctx.r3.s64 = r31.s64 + 13204;
	// bl 0x823d1300
	sub_823D1300(ctx, base);
	// addi r3,r31,13124
	ctx.r3.s64 = r31.s64 + 13124;
	// bl 0x823d1300
	sub_823D1300(ctx, base);
	// addi r3,r31,13144
	ctx.r3.s64 = r31.s64 + 13144;
	// bl 0x823d1300
	sub_823D1300(ctx, base);
	// addi r3,r31,13164
	ctx.r3.s64 = r31.s64 + 13164;
	// bl 0x823d1300
	sub_823D1300(ctx, base);
	// addi r3,r31,13184
	ctx.r3.s64 = r31.s64 + 13184;
	// bl 0x823d1300
	sub_823D1300(ctx, base);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823d6b0c
	if (cr6.eq) goto loc_823D6B0C;
	// addi r8,r31,13244
	ctx.r8.s64 = r31.s64 + 13244;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1b90
	sub_823D1B90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823D6B0C:
	// lwz r11,21380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d6b24
	if (!cr6.eq) goto loc_823D6B24;
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d6b54
	if (!cr0.eq) goto loc_823D6B54;
loc_823D6B24:
	// rlwinm r11,r29,12,20,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 12) & 0xFFF;
	// subf r9,r29,r28
	ctx.r9.s64 = r28.s64 - r29.s64;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// clrlwi r10,r29,3
	ctx.r10.u64 = r29.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r8,r31,13244
	ctx.r8.s64 = r31.s64 + 13244;
	// li r7,1
	ctx.r7.s64 = 1;
	// srawi r6,r9,2
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1b90
	sub_823D1B90(ctx, base);
loc_823D6B54:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823D6B60"))) PPC_WEAK_FUNC(sub_823D6B60);
PPC_FUNC_IMPL(__imp__sub_823D6B60) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,22136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 22136);
	// rlwinm. r11,r11,0,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d6ca0
	if (!cr0.eq) goto loc_823D6CA0;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,200
	ctx.r3.s64 = 200;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,11668(r30)
	PPC_STORE_U32(r30.u32 + 11668, ctx.r3.u32);
	// bne 0x823d6b9c
	if (!cr0.eq) goto loc_823D6B9C;
loc_823D6B94:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d6ca4
	goto loc_823D6CA4;
loc_823D6B9C:
	// lwz r8,22136(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 22136);
	// li r27,0
	r27.s64 = 0;
	// lwz r11,14744(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 14744);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lwz r10,14748(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 14748);
	// li r25,-1
	r25.s64 = -1;
	// stw r27,10876(r30)
	PPC_STORE_U32(r30.u32 + 10876, r27.u32);
	// stw r9,10892(r30)
	PPC_STORE_U32(r30.u32 + 10892, ctx.r9.u32);
	// stw r11,10820(r30)
	PPC_STORE_U32(r30.u32 + 10820, r11.u32);
	// stw r10,10828(r30)
	PPC_STORE_U32(r30.u32 + 10828, ctx.r10.u32);
	// rlwinm. r8,r8,0,5,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823d6bd0
	if (cr0.eq) goto loc_823D6BD0;
	// li r25,2
	r25.s64 = 2;
loc_823D6BD0:
	// mr r28,r27
	r28.u64 = r27.u64;
	// lis r29,32512
	r29.s64 = 2130706432;
	// addi r31,r30,11228
	r31.s64 = r30.s64 + 11228;
	// lis r26,-32256
	r26.s64 = -2113929216;
loc_823D6BE0:
	// lis r11,256
	r11.s64 = 16777216;
	// lwz r10,22136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 22136);
	// slw r11,r11,r28
	r11.u64 = r28.u8 & 0x20 ? 0 : (r11.u32 << (r28.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d6c80
	if (cr0.eq) goto loc_823D6C80;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x823d6c00
	if (!cr6.lt) goto loc_823D6C00;
	// mr r25,r28
	r25.u64 = r28.u64;
loc_823D6C00:
	// addis r11,r29,16640
	r11.s64 = r29.s64 + 1090519040;
	// stw r28,-36(r31)
	PPC_STORE_U32(r31.u32 + -36, r28.u32);
	// addi r6,r31,-40
	ctx.r6.s64 = r31.s64 + -40;
	// stw r29,-12(r31)
	PPC_STORE_U32(r31.u32 + -12, r29.u32);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// addi r10,r30,10816
	ctx.r10.s64 = r30.s64 + 10816;
	// addi r8,r31,12
	ctx.r8.s64 = r31.s64 + 12;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// stw r11,-16(r31)
	PPC_STORE_U32(r31.u32 + -16, r11.u32);
	// lis r11,-32195
	r11.s64 = -2109931520;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,26256
	ctx.r5.s64 = r11.s64 + 26256;
	// stb r27,-8(r31)
	PPC_STORE_U8(r31.u32 + -8, r27.u8);
	// stw r27,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r27.u32);
	// stw r31,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r31.u32);
	// stw r31,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r31.u32);
	// bl 0x823b9a20
	sub_823B9A20(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq 0x823d6b94
	if (cr0.eq) goto loc_823D6B94;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1836(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 1836);
	// bl 0x826e4e6c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823d6c80
	if (cr0.lt) goto loc_823D6C80;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e4e5c
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e4e4c
	__imp__ObDereferenceObject(ctx, base);
loc_823D6C80:
	// lis r11,32512
	r11.s64 = 2130706432;
	// addi r29,r29,128
	r29.s64 = r29.s64 + 128;
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x823d6be0
	if (cr6.lt) goto loc_823D6BE0;
	// stw r25,11184(r30)
	PPC_STORE_U32(r30.u32 + 11184, r25.u32);
loc_823D6CA0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823D6CA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823D6CAC"))) PPC_WEAK_FUNC(sub_823D6CAC);
PPC_FUNC_IMPL(__imp__sub_823D6CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D6CB0"))) PPC_WEAK_FUNC(sub_823D6CB0);
PPC_FUNC_IMPL(__imp__sub_823D6CB0) {
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
	// li r11,0
	r11.s64 = 0;
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,11668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 11668);
	// stw r11,10820(r31)
	PPC_STORE_U32(r31.u32 + 10820, r11.u32);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// addi r30,r31,11220
	r30.s64 = r31.s64 + 11220;
	// li r29,6
	r29.s64 = 6;
loc_823D6CDC:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d6cf8
	if (cr6.eq) goto loc_823D6CF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e524c
	__imp__KeSetEvent(ctx, base);
loc_823D6CF8:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,80
	r30.s64 = r30.s64 + 80;
	// bne 0x823d6cdc
	if (!cr0.eq) goto loc_823D6CDC;
	// addi r31,r31,11236
	r31.s64 = r31.s64 + 11236;
	// li r30,6
	r30.s64 = 6;
loc_823D6D0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d6d28
	if (cr0.eq) goto loc_823D6D28;
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
loc_823D6D28:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,80
	r31.s64 = r31.s64 + 80;
	// bne 0x823d6d0c
	if (!cr0.eq) goto loc_823D6D0C;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D6D3C"))) PPC_WEAK_FUNC(sub_823D6D3C);
PPC_FUNC_IMPL(__imp__sub_823D6D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D6D40"))) PPC_WEAK_FUNC(sub_823D6D40);
PPC_FUNC_IMPL(__imp__sub_823D6D40) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823d6d70
	if (!cr6.gt) goto loc_823D6D70;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823D6D70:
	// li r11,8712
	r11.s64 = 8712;
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r9,r9,8192
	ctx.r9.u64 = ctx.r9.u64 | 8192;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// lwz r10,148(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 148);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x823d6dd8
	if (cr6.gt) goto loc_823D6DD8;
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm r9,r28,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r9,8997
	ctx.r9.s64 = 8997;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r8,512
	ctx.r10.s64 = ctx.r8.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x823d6e9c
	goto loc_823D6E9C;
loc_823D6DD8:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r25,r9,24832
	r25.u64 = ctx.r9.u64 | 24832;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r30,r9,24576
	r30.u64 = ctx.r9.u64 | 24576;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// beq cr6,0x823d6e88
	if (cr6.eq) goto loc_823D6E88;
	// rlwinm r27,r28,5,0,26
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_823D6E10:
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// lis r7,-16383
	ctx.r7.s64 = -1073676288;
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// ori r7,r7,11521
	ctx.r7.u64 = ctx.r7.u64 | 11521;
	// lis r6,4
	ctx.r6.s64 = 262144;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// ori r6,r6,805
	ctx.r6.u64 = ctx.r6.u64 | 805;
	// slw r5,r8,r28
	ctx.r5.u64 = r28.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r28.u8 & 0x3F));
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// addi r10,r8,512
	ctx.r10.s64 = ctx.r8.s64 + 512;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ble cr6,0x823d6e78
	if (!cr6.gt) goto loc_823D6E78;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D6E78:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// bne 0x823d6e10
	if (!cr0.eq) goto loc_823D6E10;
loc_823D6E88:
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// lwz r10,12572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12572);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// lwz r10,12576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12576);
loc_823D6E9C:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,21
	ctx.r9.s64 = 21;
	// ori r10,r10,23296
	ctx.r10.u64 = ctx.r10.u64 | 23296;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823D6EEC"))) PPC_WEAK_FUNC(sub_823D6EEC);
PPC_FUNC_IMPL(__imp__sub_823D6EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D6EF0"))) PPC_WEAK_FUNC(sub_823D6EF0);
PPC_FUNC_IMPL(__imp__sub_823D6EF0) {
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
	// li r11,-1
	r11.s64 = -1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrldi r30,r11,32
	r30.u64 = r11.u64 & 0xFFFFFFFF;
	// addi r11,r31,1024
	r11.s64 = r31.s64 + 1024;
	// li r10,26
	ctx.r10.s64 = 26;
	// std r30,11688(r31)
	PPC_STORE_U64(r31.u32 + 11688, r30.u64);
loc_823D6F14:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
	// bne 0x823d6f14
	if (!cr0.eq) goto loc_823D6F14;
	// addi r11,r31,1648
	r11.s64 = r31.s64 + 1648;
	// li r10,18
	ctx.r10.s64 = 18;
loc_823D6F34:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwimi r9,r8,0,30,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne 0x823d6f34
	if (!cr0.eq) goto loc_823D6F34;
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// li r11,8
	r11.s64 = 8;
	// ori r8,r9,8192
	ctx.r8.u64 = ctx.r9.u64 | 8192;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// li r10,14
	ctx.r10.s64 = 14;
	// ori r7,r9,61440
	ctx.r7.u64 = ctx.r9.u64 | 61440;
	// stw r11,10476(r31)
	PPC_STORE_U32(r31.u32 + 10476, r11.u32);
	// lis r9,15
	ctx.r9.s64 = 983040;
	// lis r11,255
	r11.s64 = 16711680;
	// stw r8,10300(r31)
	PPC_STORE_U32(r31.u32 + 10300, ctx.r8.u32);
	// ori r6,r9,61696
	ctx.r6.u64 = ctx.r9.u64 | 61696;
	// ori r8,r11,65535
	ctx.r8.u64 = r11.u64 | 65535;
	// stw r10,10500(r31)
	PPC_STORE_U32(r31.u32 + 10500, ctx.r10.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r7,10580(r31)
	PPC_STORE_U32(r31.u32 + 10580, ctx.r7.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r10,10640(r31)
	PPC_STORE_U32(r31.u32 + 10640, ctx.r10.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// li r11,-1
	r11.s64 = -1;
	// stw r6,10584(r31)
	PPC_STORE_U32(r31.u32 + 10584, ctx.r6.u32);
	// stw r8,10316(r31)
	PPC_STORE_U32(r31.u32 + 10316, ctx.r8.u32);
	// stw r9,10452(r31)
	PPC_STORE_U32(r31.u32 + 10452, ctx.r9.u32);
	// stw r9,10560(r31)
	PPC_STORE_U32(r31.u32 + 10560, ctx.r9.u32);
	// lwz r9,10436(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10436);
	// lwz r8,10440(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 10440);
	// oris r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 524288;
	// stw r5,10644(r31)
	PPC_STORE_U32(r31.u32 + 10644, ctx.r5.u32);
	// oris r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 65536;
	// stw r7,10696(r31)
	PPC_STORE_U32(r31.u32 + 10696, ctx.r7.u32);
	// stw r9,10436(r31)
	PPC_STORE_U32(r31.u32 + 10436, ctx.r9.u32);
	// stw r8,10440(r31)
	PPC_STORE_U32(r31.u32 + 10440, ctx.r8.u32);
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r10,10788(r31)
	PPC_STORE_U32(r31.u32 + 10788, ctx.r10.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x823d7000
	if (!cr6.gt) goto loc_823D7000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D7000:
	// li r9,3329
	ctx.r9.s64 = 3329;
	// lis r8,1024
	ctx.r8.s64 = 67108864;
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// ori r10,r10,8448
	ctx.r10.u64 = ctx.r10.u64 | 8448;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r9,129
	ctx.r9.s64 = 129;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r5,130
	ctx.r5.s64 = 130;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// li r3,3650
	ctx.r3.s64 = 3650;
	// li r29,8032
	r29.s64 = 8032;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r9,15
	ctx.r9.s64 = 15;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// lwz r10,-31156(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31156);
	// oris r10,r10,32769
	ctx.r10.u64 = ctx.r10.u64 | 2147549184;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// lwz r10,-31152(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -31152);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// lwz r10,22136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 22136);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r10,3205
	ctx.r10.s64 = 3205;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// bne 0x823d708c
	if (!cr0.eq) goto loc_823D708C;
	// li r9,3
	ctx.r9.s64 = 3;
loc_823D708C:
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r10,1404
	ctx.r10.s64 = 1404;
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// li r8,1403
	ctx.r8.s64 = 1403;
	// ori r9,r9,61453
	ctx.r9.u64 = ctx.r9.u64 | 61453;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D70C0"))) PPC_WEAK_FUNC(sub_823D70C0);
PPC_FUNC_IMPL(__imp__sub_823D70C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,392
	ctx.r10.s64 = ctx.r1.s64 + 392;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e525c
	__imp___vsnprintf(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826e4c8c
	__imp__DbgPrint(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7120"))) PPC_WEAK_FUNC(sub_823D7120);
PPC_FUNC_IMPL(__imp__sub_823D7120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addis r11,r3,8178
	r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7130"))) PPC_WEAK_FUNC(sub_823D7130);
PPC_FUNC_IMPL(__imp__sub_823D7130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addis r11,r3,8178
	r11.s64 = ctx.r3.s64 + 535953408;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,0(r11)
	PPC_MM_STORE_U32(r11.u32 + 0, ctx.r4.u32);
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7144"))) PPC_WEAK_FUNC(sub_823D7144);
PPC_FUNC_IMPL(__imp__sub_823D7144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7148"))) PPC_WEAK_FUNC(sub_823D7148);
PPC_FUNC_IMPL(__imp__sub_823D7148) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x826e525c
	__imp___vsnprintf(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d71b0
	if (cr0.eq) goto loc_823D71B0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823d71b4
	goto loc_823D71B4;
loc_823D71B0:
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
loc_823D71B4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D71C8"))) PPC_WEAK_FUNC(sub_823D71C8);
PPC_FUNC_IMPL(__imp__sub_823D71C8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r3,1488
	ctx.r3.s64 = 1488;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r11,-17956
	ctx.r5.s64 = r11.s64 + -17956;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17976
	ctx.r4.s64 = r11.s64 + -17976;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r28,0
	r28.s64 = 0;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r26,11
	r26.s64 = 11;
	// addi r27,r11,-17280
	r27.s64 = r11.s64 + -17280;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// addi r25,r11,-17980
	r25.s64 = r11.s64 + -17980;
loc_823D7224:
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// and. r11,r11,r29
	r11.u64 = r11.u64 & r29.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d7254
	if (cr0.eq) goto loc_823D7254;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x823d7244
	if (cr6.eq) goto loc_823D7244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
loc_823D7244:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// li r28,1
	r28.s64 = 1;
loc_823D7254:
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x823d7224
	if (!cr0.eq) goto loc_823D7224;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x823d7278
	if (!cr6.eq) goto loc_823D7278;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-18000
	ctx.r4.s64 = r11.s64 + -18000;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
loc_823D7278:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-32168
	ctx.r4.s64 = r11.s64 + -32168;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r30,r27,88
	r30.s64 = r27.s64 + 88;
	// li r29,30
	r29.s64 = 30;
	// addi r28,r11,-18020
	r28.s64 = r11.s64 + -18020;
loc_823D7298:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x823d7298
	if (!cr0.eq) goto loc_823D7298;
	// addi r11,r27,328
	r11.s64 = r27.s64 + 328;
	// li r23,5
	r23.s64 = 5;
	// addi r29,r11,16
	r29.s64 = r11.s64 + 16;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r26,r11,26416
	r26.s64 = r11.s64 + 26416;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r27,r11,-18028
	r27.s64 = r11.s64 + -18028;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r25,r11,-18040
	r25.s64 = r11.s64 + -18040;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r24,r11,2936
	r24.s64 = r11.s64 + 2936;
loc_823D72F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823d73d0
	if (!cr6.gt) goto loc_823D73D0;
loc_823D7310:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x826e517c
	__imp__sprintf(ctx, base);
	// mr r28,r30
	r28.u64 = r30.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_823D732C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x823d733c
	if (!cr6.lt) goto loc_823D733C;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823D733C:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x823d73b4
	if (!cr6.lt) goto loc_823D73B4;
	// lwz r11,-4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// lwz r3,-16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// slw r11,r28,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// or r4,r11,r10
	ctx.r4.u64 = r11.u64 | ctx.r10.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,-12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -12);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823D7380:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823d7380
	if (!cr6.eq) goto loc_823D7380;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x826e517c
	__imp__sprintf(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x823d732c
	goto loc_823D732C;
loc_823D73B4:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823d7310
	if (cr6.lt) goto loc_823D7310;
loc_823D73D0:
	// addic. r23,r23,-1
	xer.ca = r23.u32 > 0;
	r23.s64 = r23.s64 + -1;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// addi r29,r29,24
	r29.s64 = r29.s64 + 24;
	// bne 0x823d72f4
	if (!cr0.eq) goto loc_823D72F4;
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823D73E4"))) PPC_WEAK_FUNC(sub_823D73E4);
PPC_FUNC_IMPL(__imp__sub_823D73E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D73E8"))) PPC_WEAK_FUNC(sub_823D73E8);
PPC_FUNC_IMPL(__imp__sub_823D73E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r4,r11,-17656
	ctx.r4.s64 = r11.s64 + -17656;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x823d74ac
	if (!cr6.eq) goto loc_823D74AC;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d743c
	if (!cr6.eq) goto loc_823D743C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r6,164(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// addi r4,r11,-17784
	ctx.r4.s64 = r11.s64 + -17784;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
loc_823D743C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-17920
	ctx.r4.s64 = r11.s64 + -17920;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// lwz r30,116(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x823d74ac
	if (cr0.eq) goto loc_823D74AC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r27,r11,-17944
	r27.s64 = r11.s64 + -17944;
loc_823D7460:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823d74a0
	if (!cr6.gt) goto loc_823D74A0;
	// addi r31,r30,12
	r31.s64 = r30.s64 + 12;
loc_823D7474:
	// lwz r11,-4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r6,r11,8
	ctx.r6.u64 = r11.u32 & 0xFFFFFF;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x823d7474
	if (cr6.lt) goto loc_823D7474;
loc_823D74A0:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x823d7460
	if (!cr0.eq) goto loc_823D7460;
loc_823D74AC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823D74B4"))) PPC_WEAK_FUNC(sub_823D74B4);
PPC_FUNC_IMPL(__imp__sub_823D74B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D74B8"))) PPC_WEAK_FUNC(sub_823D74B8);
PPC_FUNC_IMPL(__imp__sub_823D74B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// li r20,1
	r20.s64 = 1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823d74ec
	if (cr6.eq) goto loc_823D74EC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823d7500
	if (!cr6.eq) goto loc_823D7500;
loc_823D74EC:
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// lis r11,-32195
	r11.s64 = -2109931520;
	// addi r31,r10,28960
	r31.s64 = ctx.r10.s64 + 28960;
	// addi r30,r11,28976
	r30.s64 = r11.s64 + 28976;
	// li r20,0
	r20.s64 = 0;
loc_823D7500:
	// li r3,1488
	ctx.r3.s64 = 1488;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,3878
	ctx.r3.s64 = 3878;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,448
	ctx.r3.s64 = 448;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r3,1403
	ctx.r3.s64 = 1403;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,1404
	ctx.r3.s64 = 1404;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,1405
	ctx.r3.s64 = 1405;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,3200
	ctx.r3.s64 = 3200;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r3.u32);
	// li r3,3201
	ctx.r3.s64 = 3201;
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r7,r11,-16360
	ctx.r7.s64 = r11.s64 + -16360;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r25.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r30.u32);
	// addi r4,r11,-16432
	ctx.r4.s64 = r11.s64 + -16432;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,5426
	ctx.r5.s64 = 5426;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,2144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2144);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// lis r11,-32763
	r11.s64 = -2147155968;
	// ori r11,r11,272
	r11.u64 = r11.u64 | 272;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x823d765c
	if (!cr6.eq) goto loc_823D765C;
	// lis r11,2989
	r11.s64 = 195887104;
	// ori r11,r11,61453
	r11.u64 = r11.u64 | 61453;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// beq cr6,0x823d765c
	if (cr6.eq) goto loc_823D765C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x823d765c
	if (cr6.eq) goto loc_823D765C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r4,r11,-16592
	ctx.r4.s64 = r11.s64 + -16592;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x823d772c
	if (cr6.eq) goto loc_823D772C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16636
	ctx.r4.s64 = r11.s64 + -16636;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// b 0x823d772c
	goto loc_823D772C;
loc_823D765C:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823d71c8
	sub_823D71C8(ctx, base);
	// lis r12,32763
	r12.s64 = 2147155968;
	// lis r10,1025
	ctx.r10.s64 = 67174400;
	// ori r12,r12,61664
	r12.u64 = r12.u64 | 61664;
	// and r11,r29,r12
	r11.u64 = r29.u64 & r12.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823d76a0
	if (!cr6.eq) goto loc_823D76A0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16768
	ctx.r4.s64 = r11.s64 + -16768;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-16920
	ctx.r4.s64 = r11.s64 + -16920;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_823D76A0:
	// rlwinm. r11,r23,0,26,26
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d76f0
	if (cr0.eq) goto loc_823D76F0;
	// rlwinm. r11,r23,0,21,25
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x7C0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d76f0
	if (!cr0.eq) goto loc_823D76F0;
	// rlwinm r11,r23,21,28,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 21) & 0xC;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lis r9,32
	ctx.r9.s64 = 2097152;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,0,5,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7F00000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x823d76f0
	if (!cr6.eq) goto loc_823D76F0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-17056
	ctx.r4.s64 = r11.s64 + -17056;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r4,r11,-17232
	ctx.r4.s64 = r11.s64 + -17232;
	// bl 0x823d7148
	sub_823D7148(ctx, base);
	// li r27,1
	r27.s64 = 1;
loc_823D76F0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823d7708
	if (cr6.eq) goto loc_823D7708;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823d73e8
	sub_823D73E8(ctx, base);
loc_823D7708:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// beq cr6,0x823d7720
	if (cr6.eq) goto loc_823D7720;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-17368
	ctx.r4.s64 = r11.s64 + -17368;
	// b 0x823d7728
	goto loc_823D7728;
loc_823D7720:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-17512
	ctx.r4.s64 = r11.s64 + -17512;
loc_823D7728:
	// bl 0x823d7148
	sub_823D7148(ctx, base);
loc_823D772C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_823D7734"))) PPC_WEAK_FUNC(sub_823D7734);
PPC_FUNC_IMPL(__imp__sub_823D7734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7738"))) PPC_WEAK_FUNC(sub_823D7738);
PPC_FUNC_IMPL(__imp__sub_823D7738) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,-16032
	ctx.r3.s64 = r11.s64 + -16032;
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,16408(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16408);
	// lwz r6,10772(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 10772);
	// lwz r3,13288(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13288);
	// bl 0x823d74b8
	sub_823D74B8(ctx, base);
	// lwz r11,13288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13288);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d77a8
	if (cr6.eq) goto loc_823D77A8;
	// lbz r8,10813(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// ori r8,r8,3
	ctx.r8.u64 = ctx.r8.u64 | 3;
	// lwz r9,10768(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// stb r8,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, ctx.r8.u8);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r10,10872(r31)
	PPC_STORE_U32(r31.u32 + 10872, ctx.r10.u32);
	// bl 0x823d83c0
	sub_823D83C0(ctx, base);
	// b 0x823d77c4
	goto loc_823D77C4;
loc_823D77A8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-16256
	ctx.r3.s64 = r11.s64 + -16256;
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-16352
	ctx.r3.s64 = r11.s64 + -16352;
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
	// twi 31,r0,22
loc_823D77C4:
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

__attribute__((alias("__imp__sub_823D77D8"))) PPC_WEAK_FUNC(sub_823D77D8);
PPC_FUNC_IMPL(__imp__sub_823D77D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,32712
	r11.s64 = 2143813632;
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,12820(r11)
	PPC_MM_STORE_U32(r11.u32 + 12820, ctx.r10.u32);
	// eieio 
	// li r10,2048
	ctx.r10.s64 = 2048;
	// stw r10,13320(r11)
	PPC_MM_STORE_U32(r11.u32 + 13320, ctx.r10.u32);
	// eieio 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D77F8"))) PPC_WEAK_FUNC(sub_823D77F8);
PPC_FUNC_IMPL(__imp__sub_823D77F8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826e527c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// bl 0x826e526c
	__imp__VdShutdownEngines(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7820"))) PPC_WEAK_FUNC(sub_823D7820);
PPC_FUNC_IMPL(__imp__sub_823D7820) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r24,0
	r24.s64 = 0;
	// addi r29,r11,-18832
	r29.s64 = r11.s64 + -18832;
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r25,13444(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 13444);
loc_823D7844:
	// rlwinm r11,r30,30,2,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r9,r30,r31
	ctx.r9.u64 = r30.u64 + r31.u64;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// addi r11,r11,136
	r11.s64 = r11.s64 + 136;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,64(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplwi cr6,r30,400
	cr6.compare<uint32_t>(r30.u32, 400, xer);
	// blt cr6,0x823d7844
	if (cr6.lt) goto loc_823D7844;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r28,r24
	r28.u64 = r24.u64;
	// addi r27,r31,1024
	r27.s64 = r31.s64 + 1024;
	// addi r26,r11,-17632
	r26.s64 = r11.s64 + -17632;
loc_823D78A0:
	// mr r30,r24
	r30.u64 = r24.u64;
	// addi r29,r26,8
	r29.s64 = r26.s64 + 8;
loc_823D78A8:
	// rlwinm r11,r30,30,2,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// add r9,r30,r31
	ctx.r9.u64 = r30.u64 + r31.u64;
	// addi r8,r11,116
	ctx.r8.s64 = r11.s64 + 116;
	// addi r11,r11,236
	r11.s64 = r11.s64 + 236;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// lwz r10,-8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + -8);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,464(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 464);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplwi cr6,r30,80
	cr6.compare<uint32_t>(r30.u32, 80, xer);
	// blt cr6,0x823d78a8
	if (cr6.lt) goto loc_823D78A8;
	// addi r11,r28,32
	r11.s64 = r28.s64 + 32;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srd r6,r10,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// bl 0x823bd580
	sub_823BD580(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,24
	r27.s64 = r27.s64 + 24;
	// cmplwi cr6,r28,26
	cr6.compare<uint32_t>(r28.u32, 26, xer);
	// blt cr6,0x823d78a0
	if (cr6.lt) goto loc_823D78A0;
	// li r11,5
	r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,12056(r31)
	PPC_STORE_U32(r31.u32 + 12056, r11.u32);
	// stw r10,12060(r31)
	PPC_STORE_U32(r31.u32 + 12060, ctx.r10.u32);
	// bl 0x823c4a88
	sub_823C4A88(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cbf70
	sub_823CBF70(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bf2c0
	sub_823BF2C0(ctx, base);
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// stw r24,12580(r31)
	PPC_STORE_U32(r31.u32 + 12580, r24.u32);
	// rlwinm. r11,r10,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d7a30
	if (!cr0.eq) goto loc_823D7A30;
	// rlwinm. r11,r10,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d7a30
	if (!cr0.eq) goto loc_823D7A30;
	// lbz r11,12051(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12051);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d7a30
	if (!cr0.eq) goto loc_823D7A30;
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d7994
	if (cr0.eq) goto loc_823D7994;
	// li r11,1
	r11.s64 = 1;
	// b 0x823d7a24
	goto loc_823D7A24;
loc_823D7994:
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d7a1c
	if (cr0.eq) goto loc_823D7A1C;
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// lwz r9,12592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823d79b4
	if (cr6.eq) goto loc_823D79B4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d7a1c
	if (!cr6.eq) goto loc_823D7A1C;
loc_823D79B4:
	// lwz r11,12308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r9,12596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823d79cc
	if (cr6.eq) goto loc_823D79CC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d7a1c
	if (!cr6.eq) goto loc_823D7A1C;
loc_823D79CC:
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r9,12600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823d79e4
	if (cr6.eq) goto loc_823D79E4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d7a1c
	if (!cr6.eq) goto loc_823D7A1C;
loc_823D79E4:
	// lwz r11,12316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r9,12604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823d79fc
	if (cr6.eq) goto loc_823D79FC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d7a1c
	if (!cr6.eq) goto loc_823D7A1C;
loc_823D79FC:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r9,12608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823d7a14
	if (cr6.eq) goto loc_823D7A14;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d7a1c
	if (!cr6.eq) goto loc_823D7A1C;
loc_823D7A14:
	// li r11,1
	r11.s64 = 1;
	// b 0x823d7a20
	goto loc_823D7A20;
loc_823D7A1C:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823D7A20:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823D7A24:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x823d7a34
	if (!cr0.eq) goto loc_823D7A34;
loc_823D7A30:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823D7A34:
	// rlwimi r11,r10,0,24,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r24,12576(r31)
	PPC_STORE_U32(r31.u32 + 12576, r24.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r24,10804(r31)
	PPC_STORE_U32(r31.u32 + 10804, r24.u32);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stw r24,10808(r31)
	PPC_STORE_U32(r31.u32 + 10808, r24.u32);
	// stw r9,12572(r31)
	PPC_STORE_U32(r31.u32 + 12572, ctx.r9.u32);
	// stb r11,10812(r31)
	PPC_STORE_U8(r31.u32 + 10812, r11.u8);
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823d7a70
	if (!cr0.eq) goto loc_823D7A70;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ca718
	sub_823CA718(ctx, base);
loc_823D7A70:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823D7A78"))) PPC_WEAK_FUNC(sub_823D7A78);
PPC_FUNC_IMPL(__imp__sub_823D7A78) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r30,64(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r27,4(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi r30,0
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwz r24,16(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r22,40(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r25,8(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bne 0x823d7ab4
	if (!cr0.eq) goto loc_823D7AB4;
	// clrlwi r11,r25,26
	r11.u64 = r25.u32 & 0x3F;
	// b 0x823d7ac4
	goto loc_823D7AC4;
loc_823D7AB4:
	// lis r11,10280
	r11.s64 = 673710080;
	// ori r11,r11,390
	r11.u64 = r11.u64 | 390;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x823d7acc
	if (!cr6.eq) goto loc_823D7ACC;
loc_823D7AC4:
	// lis r30,10280
	r30.s64 = 673710080;
	// b 0x823d7ae0
	goto loc_823D7AE0;
loc_823D7ACC:
	// lis r11,6184
	r11.s64 = 405274624;
	// ori r11,r11,390
	r11.u64 = r11.u64 | 390;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x823d7ae8
	if (!cr6.eq) goto loc_823D7AE8;
	// lis r30,6184
	r30.s64 = 405274624;
loc_823D7AE0:
	// ori r30,r30,262
	r30.u64 = r30.u64 | 262;
	// b 0x823d7b18
	goto loc_823D7B18;
loc_823D7AE8:
	// lis r11,10280
	r11.s64 = 673710080;
	// ori r11,r11,438
	r11.u64 = r11.u64 | 438;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x823d7b00
	if (!cr6.eq) goto loc_823D7B00;
	// lis r30,10280
	r30.s64 = 673710080;
	// b 0x823d7b14
	goto loc_823D7B14;
loc_823D7B00:
	// lis r11,6184
	r11.s64 = 405274624;
	// ori r11,r11,438
	r11.u64 = r11.u64 | 438;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x823d7b18
	if (!cr6.eq) goto loc_823D7B18;
	// lis r30,6184
	r30.s64 = 405274624;
loc_823D7B14:
	// ori r30,r30,310
	r30.u64 = r30.u64 | 310;
loc_823D7B18:
	// clrlwi r23,r30,26
	r23.u64 = r30.u32 & 0x3F;
	// mr r26,r23
	r26.u64 = r23.u64;
	// cmplwi cr6,r26,50
	cr6.compare<uint32_t>(r26.u32, 50, xer);
	// bne cr6,0x823d7b30
	if (!cr6.eq) goto loc_823D7B30;
	// li r26,6
	r26.s64 = 6;
	// b 0x823d7b3c
	goto loc_823D7B3C;
loc_823D7B30:
	// cmplwi cr6,r26,7
	cr6.compare<uint32_t>(r26.u32, 7, xer);
	// bne cr6,0x823d7b3c
	if (!cr6.eq) goto loc_823D7B3C;
	// li r26,54
	r26.s64 = 54;
loc_823D7B3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e528c
	__imp__VdQueryVideoMode(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r29,21400
	ctx.r9.s64 = r29.s64 + 21400;
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stw r10,21392(r29)
	PPC_STORE_U32(r29.u32 + 21392, ctx.r10.u32);
	// stw r11,21388(r29)
	PPC_STORE_U32(r29.u32 + 21388, r11.u32);
	// stw r11,21396(r29)
	PPC_STORE_U32(r29.u32 + 21396, r11.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d7bb8
	if (!cr6.eq) goto loc_823D7BB8;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823bd238
	sub_823BD238(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823d7bb4
	if (!cr0.eq) goto loc_823D7BB4;
loc_823D7BAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d7cac
	goto loc_823D7CAC;
loc_823D7BB4:
	// stw r3,14676(r29)
	PPC_STORE_U32(r29.u32 + 14676, ctx.r3.u32);
loc_823D7BB8:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d7bf4
	if (!cr6.eq) goto loc_823D7BF4;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823bd358
	sub_823BD358(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x823d7bac
	if (cr0.eq) goto loc_823D7BAC;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r5,14680(r29)
	PPC_STORE_U32(r29.u32 + 14680, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c0718
	sub_823C0718(ctx, base);
loc_823D7BF4:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823d7c2c
	if (cr6.eq) goto loc_823D7C2C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823bd358
	sub_823BD358(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x823d7bac
	if (cr0.eq) goto loc_823D7BAC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r4,14672(r29)
	PPC_STORE_U32(r29.u32 + 14672, ctx.r4.u32);
	// bl 0x823c0a80
	sub_823C0A80(ctx, base);
loc_823D7C2C:
	// addi r3,r29,13392
	ctx.r3.s64 = r29.s64 + 13392;
	// li r5,124
	ctx.r5.s64 = 124;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// oris r11,r23,10280
	r11.u64 = r23.u64 | 673710080;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,13456(r29)
	PPC_STORE_U32(r29.u32 + 13456, r11.u32);
	// bl 0x823db7b0
	sub_823DB7B0(ctx, base);
	// cmplwi cr6,r26,7
	cr6.compare<uint32_t>(r26.u32, 7, xer);
	// beq cr6,0x823d7c84
	if (cr6.eq) goto loc_823D7C84;
	// cmplwi cr6,r26,54
	cr6.compare<uint32_t>(r26.u32, 54, xer);
	// beq cr6,0x823d7c84
	if (cr6.eq) goto loc_823D7C84;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823d3488
	sub_823D3488(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c00e0
	sub_823C00E0(ctx, base);
	// b 0x823d7ca0
	goto loc_823D7CA0;
loc_823D7C84:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823d34e0
	sub_823D34E0(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c01a8
	sub_823C01A8(ctx, base);
loc_823D7CA0:
	// li r11,-1
	r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,16556(r29)
	PPC_STORE_U32(r29.u32 + 16556, r11.u32);
loc_823D7CAC:
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823D7CB4"))) PPC_WEAK_FUNC(sub_823D7CB4);
PPC_FUNC_IMPL(__imp__sub_823D7CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7CB8"))) PPC_WEAK_FUNC(sub_823D7CB8);
PPC_FUNC_IMPL(__imp__sub_823D7CB8) {
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
	// bl 0x823dc650
	sub_823DC650(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d7d10
	if (cr6.eq) goto loc_823D7D10;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0a80
	sub_823C0A80(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823D7CEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0718
	sub_823C0718(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x823d7cec
	if (cr6.lt) goto loc_823D7CEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d2520
	sub_823D2520(ctx, base);
loc_823D7D10:
	// lwz r3,14676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 14676);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d7d24
	if (cr0.eq) goto loc_823D7D24;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
	// stw r29,14676(r31)
	PPC_STORE_U32(r31.u32 + 14676, r29.u32);
loc_823D7D24:
	// lwz r3,14680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 14680);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d7d38
	if (cr0.eq) goto loc_823D7D38;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
	// stw r29,14680(r31)
	PPC_STORE_U32(r31.u32 + 14680, r29.u32);
loc_823D7D38:
	// lwz r3,14672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 14672);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d7d4c
	if (cr0.eq) goto loc_823D7D4C;
	// bl 0x823c3be8
	sub_823C3BE8(ctx, base);
	// stw r29,14672(r31)
	PPC_STORE_U32(r31.u32 + 14672, r29.u32);
loc_823D7D4C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D7D54"))) PPC_WEAK_FUNC(sub_823D7D54);
PPC_FUNC_IMPL(__imp__sub_823D7D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7D58"))) PPC_WEAK_FUNC(sub_823D7D58);
PPC_FUNC_IMPL(__imp__sub_823D7D58) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823d7d9c
	if (cr6.eq) goto loc_823D7D9C;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x823d7d58
	sub_823D7D58(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823D7D9C:
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

__attribute__((alias("__imp__sub_823D7DB0"))) PPC_WEAK_FUNC(sub_823D7DB0);
PPC_FUNC_IMPL(__imp__sub_823D7DB0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823d7e24
	if (cr6.eq) goto loc_823D7E24;
	// lwz r11,64(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x823d7de8
	if (cr6.eq) goto loc_823D7DE8;
	// cmplwi cr6,r11,54
	cr6.compare<uint32_t>(r11.u32, 54, xer);
	// bne cr6,0x823d7dec
	if (!cr6.eq) goto loc_823D7DEC;
loc_823D7DE8:
	// lis r10,2048
	ctx.r10.s64 = 134217728;
loc_823D7DEC:
	// lwz r11,68(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// lis r9,16384
	ctx.r9.s64 = 1073741824;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r9,r11,28,2,3
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x30000000) | (ctx.r9.u64 & 0xFFFFFFFFCFFFFFFF);
	// cmplwi cr6,r8,720
	cr6.compare<uint32_t>(ctx.r8.u32, 720, xer);
	// or r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 | ctx.r10.u64;
	// bne cr6,0x823d7e20
	if (!cr6.eq) goto loc_823D7E20;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,480
	cr6.compare<uint32_t>(r11.u32, 480, xer);
	// beq cr6,0x823d7e1c
	if (cr6.eq) goto loc_823D7E1C;
	// cmplwi cr6,r11,576
	cr6.compare<uint32_t>(r11.u32, 576, xer);
	// bne cr6,0x823d7e20
	if (!cr6.eq) goto loc_823D7E20;
loc_823D7E1C:
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_823D7E20:
	// bl 0x826e52ac
	__imp__VdSetDisplayMode(ctx, base);
loc_823D7E24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e529c
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lhz r11,152(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 152);
	// lhz r10,154(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 154);
	// lhz r9,166(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 166);
	// stw r11,21388(r31)
	PPC_STORE_U32(r31.u32 + 21388, r11.u32);
	// stw r10,21392(r31)
	PPC_STORE_U32(r31.u32 + 21392, ctx.r10.u32);
	// stw r9,21396(r31)
	PPC_STORE_U32(r31.u32 + 21396, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D7E58"))) PPC_WEAK_FUNC(sub_823D7E58);
PPC_FUNC_IMPL(__imp__sub_823D7E58) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r7,r11,-6944
	ctx.r7.s64 = r11.s64 + -6944;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-8096
	ctx.r6.s64 = r11.s64 + -8096;
	// lis r11,-32195
	r11.s64 = -2109931520;
	// lis r3,5426
	ctx.r3.s64 = 355598336;
	// addi r4,r11,30680
	ctx.r4.s64 = r11.s64 + 30680;
	// bl 0x826e52cc
	__imp__VdInitializeEngines(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,-16832
	ctx.r3.s64 = r11.s64 + -16832;
	// bl 0x826e527c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32195
	r11.s64 = -2109931520;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r11,4680
	ctx.r3.s64 = r11.s64 + 4680;
	// stw r10,16560(r31)
	PPC_STORE_U32(r31.u32 + 16560, ctx.r10.u32);
	// bl 0x826e52bc
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_823D7ED0"))) PPC_WEAK_FUNC(sub_823D7ED0);
PPC_FUNC_IMPL(__imp__sub_823D7ED0) {
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
	// li r11,1
	r11.s64 = 1;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// ld r11,-17288(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + -17288);
	// std r11,10752(r31)
	PPC_STORE_U64(r31.u32 + 10752, r11.u64);
	// bl 0x823b6748
	sub_823B6748(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,4800
	ctx.r3.s64 = 4800;
	// stw r11,10760(r31)
	PPC_STORE_U32(r31.u32 + 10760, r11.u32);
	// stw r10,10764(r31)
	PPC_STORE_U32(r31.u32 + 10764, ctx.r10.u32);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r3,16576(r31)
	PPC_STORE_U32(r31.u32 + 16576, ctx.r3.u32);
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
}

__attribute__((alias("__imp__sub_823D7F3C"))) PPC_WEAK_FUNC(sub_823D7F3C);
PPC_FUNC_IMPL(__imp__sub_823D7F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D7F40"))) PPC_WEAK_FUNC(sub_823D7F40);
PPC_FUNC_IMPL(__imp__sub_823D7F40) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x823d7ed0
	sub_823D7ED0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823d7f70
	if (!cr0.eq) goto loc_823D7F70;
loc_823D7F68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823d8140
	goto loc_823D8140;
loc_823D7F70:
	// addi r3,r31,14792
	ctx.r3.s64 = r31.s64 + 14792;
	// bl 0x826e4bdc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,14820
	ctx.r3.s64 = r31.s64 + 14820;
	// bl 0x826e4bdc
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,10814(r31)
	PPC_STORE_U8(r31.u32 + 10814, r11.u8);
	// bl 0x823d7e58
	sub_823D7E58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d7f68
	if (cr0.eq) goto loc_823D7F68;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r31,16564
	ctx.r5.s64 = r31.s64 + 16564;
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// li r11,0
	r11.s64 = 0;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823d7f68
	if (cr0.lt) goto loc_823D7F68;
	// addi r4,r30,72
	ctx.r4.s64 = r30.s64 + 72;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d25f0
	sub_823D25F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823d7f68
	if (!cr0.eq) goto loc_823D7F68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d6b60
	sub_823D6B60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d7f68
	if (cr0.eq) goto loc_823D7F68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c9c40
	sub_823C9C40(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d7f68
	if (cr0.eq) goto loc_823D7F68;
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,21404(r31)
	PPC_STORE_U32(r31.u32 + 21404, r11.u32);
	// stw r11,21408(r31)
	PPC_STORE_U32(r31.u32 + 21408, r11.u32);
	// bl 0x823d6ef0
	sub_823D6EF0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7a78
	sub_823D7A78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d7f68
	if (cr0.eq) goto loc_823D7F68;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7820
	sub_823D7820(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8060
	if (cr0.eq) goto loc_823D8060;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x823d8064
	goto loc_823D8064;
loc_823D8060:
	// li r11,0
	r11.s64 = 0;
loc_823D8064:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d8098
	if (cr6.eq) goto loc_823D8098;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// ble cr6,0x823d8088
	if (!cr6.gt) goto loc_823D8088;
	// addi r10,r31,16568
	ctx.r10.s64 = r31.s64 + 16568;
	// addi r9,r31,16572
	ctx.r9.s64 = r31.s64 + 16572;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_823D8088:
	// addi r10,r31,16408
	ctx.r10.s64 = r31.s64 + 16408;
	// addi r9,r31,21420
	ctx.r9.s64 = r31.s64 + 21420;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r9.u32);
loc_823D8098:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b5460
	sub_823B5460(ctx, base);
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,21432(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 21432, temp.u32);
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// stfs f0,21436(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 21436, temp.u32);
	// bl 0x823d9500
	sub_823D9500(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823db7e0
	sub_823DB7E0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0270
	sub_823C0270(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,17968(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17968);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d8114
	if (!cr6.eq) goto loc_823D8114;
	// bl 0x826e52dc
	__imp__VdIsHSIOTrainingSucceeded(ctx, base);
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,17968(r30)
	PPC_STORE_U32(r30.u32 + 17968, r11.u32);
	// beq 0x823d8120
	if (cr0.eq) goto loc_823D8120;
loc_823D8114:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15880
	ctx.r3.s64 = r11.s64 + -15880;
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
loc_823D8120:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dba00
	sub_823DBA00(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823d813c
	if (!cr0.eq) goto loc_823D813C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15952
	ctx.r3.s64 = r11.s64 + -15952;
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
loc_823D813C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823D8140:
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

__attribute__((alias("__imp__sub_823D8158"))) PPC_WEAK_FUNC(sub_823D8158);
PPC_FUNC_IMPL(__imp__sub_823D8158) {
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
	// bl 0x823d7ed0
	sub_823D7ED0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d81a4
	if (cr0.eq) goto loc_823D81A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d13e8
	sub_823D13E8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,21404(r31)
	PPC_STORE_U32(r31.u32 + 21404, r11.u32);
	// stw r11,21408(r31)
	PPC_STORE_U32(r31.u32 + 21408, r11.u32);
	// stw r11,14784(r31)
	PPC_STORE_U32(r31.u32 + 14784, r11.u32);
	// bl 0x823d6ef0
	sub_823D6EF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7820
	sub_823D7820(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_823D81A4:
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

__attribute__((alias("__imp__sub_823D81B8"))) PPC_WEAK_FUNC(sub_823D81B8);
PPC_FUNC_IMPL(__imp__sub_823D81B8) {
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
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d81d8
	if (cr6.eq) goto loc_823D81D8;
	// bl 0x823c6df0
	sub_823C6DF0(ctx, base);
loc_823D81D8:
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// lis r28,-20096
	r28.s64 = -1317011456;
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d8324
	if (!cr0.eq) goto loc_823D8324;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d81fc
	if (cr6.eq) goto loc_823D81FC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d2520
	sub_823D2520(ctx, base);
loc_823D81FC:
	// addi r30,r31,21476
	r30.s64 = r31.s64 + 21476;
	// li r29,4
	r29.s64 = 4;
loc_823D8204:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d8214
	if (cr0.eq) goto loc_823D8214;
	// bl 0x823c68d0
	sub_823C68D0(ctx, base);
loc_823D8214:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x823d8204
	if (!cr0.eq) goto loc_823D8204;
	// lwz r3,21492(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 21492);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d8234
	if (cr0.eq) goto loc_823D8234;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823D8234:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dd2a0
	sub_823DD2A0(ctx, base);
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lwz r11,1824(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1824);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823d8268
	if (cr0.eq) goto loc_823D8268;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,28
	ctx.r3.s64 = 28;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,1824(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1824);
loc_823D8268:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8288
	if (cr0.eq) goto loc_823D8288;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,48
	ctx.r3.s64 = 48;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D8288:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826e51ec
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d7cb8
	sub_823D7CB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d6cb0
	sub_823D6CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c9d78
	sub_823C9D78(ctx, base);
	// lwz r11,1824(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1824);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d82c4
	if (cr0.eq) goto loc_823D82C4;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x823d82c8
	goto loc_823D82C8;
loc_823D82C4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823D82C8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d82ec
	if (cr6.eq) goto loc_823D82EC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// ble cr6,0x823d82e4
	if (!cr6.gt) goto loc_823D82E4;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
loc_823D82E4:
	// stw r30,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r30.u32);
loc_823D82EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826e52bc
	__imp__VdSetGraphicsInterruptCallback(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d25f0
	sub_823D25F0(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16832
	ctx.r3.s64 = r11.s64 + -16832;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// bl 0x826e527c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// bl 0x826e526c
	__imp__VdShutdownEngines(ctx, base);
loc_823D8324:
	// lwz r3,16576(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16576);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d8338
	if (cr0.eq) goto loc_823D8338;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823D8338:
	// lwz r3,21416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 21416);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d8348
	if (cr0.eq) goto loc_823D8348;
	// bl 0x823d7d58
	sub_823D7D58(ctx, base);
loc_823D8348:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823D8350"))) PPC_WEAK_FUNC(sub_823D8350);
PPC_FUNC_IMPL(__imp__sub_823D8350) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,32767
	r11.s64 = 2147418112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x823d8384
	if (!cr6.eq) goto loc_823D8384;
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823d83a4
	goto loc_823D83A4;
loc_823D8384:
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfd f0,-31000(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31000);
	// fmul f31,f1,f0
	f31.f64 = ctx.f1.f64 * f0.f64;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 / ctx.f1.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
loc_823D83A4:
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

__attribute__((alias("__imp__sub_823D83BC"))) PPC_WEAK_FUNC(sub_823D83BC);
PPC_FUNC_IMPL(__imp__sub_823D83BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

