#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8238FDE0"))) PPC_WEAK_FUNC(sub_8238FDE0);
PPC_FUNC_IMPL(__imp__sub_8238FDE0) {
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
	// li r28,0
	r28.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x8238fe68
	if (cr0.eq) goto loc_8238FE68;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21424
	ctx.r4.s64 = r11.s64 + 21424;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// lwz r6,17000(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 17000);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x8238fe44
	if (!cr6.eq) goto loc_8238FE44;
	// bl 0x82391f98
	sub_82391F98(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,17000(r30)
	PPC_STORE_U32(r30.u32 + 17000, ctx.r6.u32);
loc_8238FE44:
	// lis r11,-32199
	r11.s64 = -2110193664;
	// li r7,96
	ctx.r7.s64 = 96;
	// addi r8,r11,-664
	ctx.r8.s64 = r11.s64 + -664;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8238fe6c
	goto loc_8238FE6C;
loc_8238FE68:
	// li r30,0
	r30.s64 = 0;
loc_8238FE6C:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8238fe7c
	if (cr0.eq) goto loc_8238FE7C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_8238FE7C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8238FE88"))) PPC_WEAK_FUNC(sub_8238FE88);
PPC_FUNC_IMPL(__imp__sub_8238FE88) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_8238FEB0"))) PPC_WEAK_FUNC(sub_8238FEB0);
PPC_FUNC_IMPL(__imp__sub_8238FEB0) {
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
	// beq 0x8238fee0
	if (cr0.eq) goto loc_8238FEE0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
loc_8238FEE0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238FEF0"))) PPC_WEAK_FUNC(sub_8238FEF0);
PPC_FUNC_IMPL(__imp__sub_8238FEF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,16980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16980);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238ff18
	if (!cr6.eq) goto loc_8238FF18;
	// bl 0x8238fde0
	sub_8238FDE0(ctx, base);
	// stw r3,16980(r31)
	PPC_STORE_U32(r31.u32 + 16980, ctx.r3.u32);
loc_8238FF18:
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

__attribute__((alias("__imp__sub_8238FF2C"))) PPC_WEAK_FUNC(sub_8238FF2C);
PPC_FUNC_IMPL(__imp__sub_8238FF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8238FF30"))) PPC_WEAK_FUNC(sub_8238FF30);
PPC_FUNC_IMPL(__imp__sub_8238FF30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,16980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16980);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238ff58
	if (!cr6.eq) goto loc_8238FF58;
	// bl 0x8238fde0
	sub_8238FDE0(ctx, base);
	// stw r3,16980(r31)
	PPC_STORE_U32(r31.u32 + 16980, ctx.r3.u32);
loc_8238FF58:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
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

__attribute__((alias("__imp__sub_8238FF70"))) PPC_WEAK_FUNC(sub_8238FF70);
PPC_FUNC_IMPL(__imp__sub_8238FF70) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x82393528
	sub_82393528(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r3,16980(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16980);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x8238ffa0
	if (!cr6.eq) goto loc_8238FFA0;
	// bl 0x8238fde0
	sub_8238FDE0(ctx, base);
	// stw r3,16980(r30)
	PPC_STORE_U32(r30.u32 + 16980, ctx.r3.u32);
loc_8238FFA0:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82386168
	sub_82386168(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r29,80
	ctx.r3.s64 = r29.s64 + 80;
	// bl 0x8238fac0
	sub_8238FAC0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8238FFC8"))) PPC_WEAK_FUNC(sub_8238FFC8);
PPC_FUNC_IMPL(__imp__sub_8238FFC8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8239000c
	if (cr6.eq) goto loc_8239000C;
	// bl 0x82391a18
	sub_82391A18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8238d770
	sub_8238D770(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239000c
	if (cr0.eq) goto loc_8239000C;
	// addi r4,r30,80
	ctx.r4.s64 = r30.s64 + 80;
	// addi r3,r3,80
	ctx.r3.s64 = ctx.r3.s64 + 80;
	// bl 0x8238f9f8
	sub_8238F9F8(ctx, base);
loc_8239000C:
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

__attribute__((alias("__imp__sub_82390024"))) PPC_WEAK_FUNC(sub_82390024);
PPC_FUNC_IMPL(__imp__sub_82390024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390028"))) PPC_WEAK_FUNC(sub_82390028);
PPC_FUNC_IMPL(__imp__sub_82390028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,18404
	r11.s64 = r11.s64 + 18404;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390038"))) PPC_WEAK_FUNC(sub_82390038);
PPC_FUNC_IMPL(__imp__sub_82390038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390044"))) PPC_WEAK_FUNC(sub_82390044);
PPC_FUNC_IMPL(__imp__sub_82390044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390048"))) PPC_WEAK_FUNC(sub_82390048);
PPC_FUNC_IMPL(__imp__sub_82390048) {
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
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82390074
	if (cr0.eq) goto loc_82390074;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,18404
	r11.s64 = r11.s64 + 18404;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x82390078
	goto loc_82390078;
loc_82390074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82390078:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390088"))) PPC_WEAK_FUNC(sub_82390088);
PPC_FUNC_IMPL(__imp__sub_82390088) {
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
	// lwz r16,21576(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21576);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x82390100
	if (cr0.eq) goto loc_82390100;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21536
	ctx.r4.s64 = r11.s64 + 21536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lis r11,-32199
	r11.s64 = -2110193664;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r11,72
	ctx.r8.s64 = r11.s64 + 72;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82390104
	goto loc_82390104;
loc_82390100:
	// li r30,0
	r30.s64 = 0;
loc_82390104:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82390114
	if (cr0.eq) goto loc_82390114;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82390114:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82390090"))) PPC_WEAK_FUNC(sub_82390090);
PPC_FUNC_IMPL(__imp__sub_82390090) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// beq 0x82390100
	if (cr0.eq) goto loc_82390100;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,21536
	ctx.r4.s64 = r11.s64 + 21536;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// lis r11,-32199
	r11.s64 = -2110193664;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r8,r11,72
	ctx.r8.s64 = r11.s64 + 72;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82390104
	goto loc_82390104;
loc_82390100:
	// li r30,0
	r30.s64 = 0;
loc_82390104:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82390114
	if (cr0.eq) goto loc_82390114;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82390114:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82390120"))) PPC_WEAK_FUNC(sub_82390120);
PPC_FUNC_IMPL(__imp__sub_82390120) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82390148"))) PPC_WEAK_FUNC(sub_82390148);
PPC_FUNC_IMPL(__imp__sub_82390148) {
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
	// beq 0x82390178
	if (cr0.eq) goto loc_82390178;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
loc_82390178:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390188"))) PPC_WEAK_FUNC(sub_82390188);
PPC_FUNC_IMPL(__imp__sub_82390188) {
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,16984(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16984);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823901b8
	if (!cr6.eq) goto loc_823901B8;
	// bl 0x82390090
	sub_82390090(ctx, base);
	// stw r3,16984(r31)
	PPC_STORE_U32(r31.u32 + 16984, ctx.r3.u32);
loc_823901B8:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82386168
	sub_82386168(ctx, base);
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

__attribute__((alias("__imp__sub_823901E4"))) PPC_WEAK_FUNC(sub_823901E4);
PPC_FUNC_IMPL(__imp__sub_823901E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823901E8"))) PPC_WEAK_FUNC(sub_823901E8);
PPC_FUNC_IMPL(__imp__sub_823901E8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8238c180
	sub_8238C180(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8239023C"))) PPC_WEAK_FUNC(sub_8239023C);
PPC_FUNC_IMPL(__imp__sub_8239023C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390240"))) PPC_WEAK_FUNC(sub_82390240);
PPC_FUNC_IMPL(__imp__sub_82390240) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8239026c
	if (!cr6.eq) goto loc_8239026C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82390278
	goto loc_82390278;
loc_8239026C:
	// mulli r3,r30,20
	ctx.r3.s64 = r30.s64 * 20;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82390278:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_823902A4"))) PPC_WEAK_FUNC(sub_823902A4);
PPC_FUNC_IMPL(__imp__sub_823902A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823902A8"))) PPC_WEAK_FUNC(sub_823902A8);
PPC_FUNC_IMPL(__imp__sub_823902A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,21656(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21656);
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823902d8
	if (cr6.eq) goto loc_823902D8;
	// bl 0x8239b4d0
	sub_8239B4D0(ctx, base);
loc_823902D8:
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

__attribute__((alias("__imp__sub_823902B0"))) PPC_WEAK_FUNC(sub_823902B0);
PPC_FUNC_IMPL(__imp__sub_823902B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823902d8
	if (cr6.eq) goto loc_823902D8;
	// bl 0x8239b4d0
	sub_8239B4D0(ctx, base);
loc_823902D8:
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

__attribute__((alias("__imp__sub_823902EC"))) PPC_WEAK_FUNC(sub_823902EC);
PPC_FUNC_IMPL(__imp__sub_823902EC) {
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

__attribute__((alias("__imp__sub_82390318"))) PPC_WEAK_FUNC(sub_82390318);
PPC_FUNC_IMPL(__imp__sub_82390318) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f31,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// beq 0x823904b4
	if (cr0.eq) goto loc_823904B4;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82390388
	if (!cr6.gt) goto loc_82390388;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rotlwi r9,r8,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,-20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x82390380
	if (cr6.lt) goto loc_82390380;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f31,-16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -16);
	f31.f64 = double(temp.f32);
	// b 0x823904b4
	goto loc_823904B4;
loc_82390380:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82390390
	if (!cr6.eq) goto loc_82390390;
loc_82390388:
	// lfs f31,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	f31.f64 = double(temp.f32);
	// b 0x823904b4
	goto loc_823904B4;
loc_82390390:
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x823903b8
	if (cr6.eq) goto loc_823903B8;
	// mulli r7,r10,20
	ctx.r7.s64 = ctx.r10.s64 * 20;
	// lfsx f0,r7,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bgt cr6,0x823903b8
	if (cr6.gt) goto loc_823903B8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823903B8:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x823903f4
	if (!cr6.lt) goto loc_823903F4;
	// mulli r10,r11,20
	ctx.r10.s64 = r11.s64 * 20;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_823903C8:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	cr6.compare(f0.f64, ctx.f1.f64);
	// bgt cr6,0x823903e0
	if (cr6.gt) goto loc_823903E0;
	// lfs f0,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x823903f0
	if (cr6.lt) goto loc_823903F0;
loc_823903E0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x823903c8
	if (cr6.lt) goto loc_823903C8;
loc_823903F0:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
loc_823903F4:
	// mulli r10,r11,20
	ctx.r10.s64 = r11.s64 * 20;
	// beq cr6,0x82390408
	if (cr6.eq) goto loc_82390408;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r10,20
	ctx.r9.s64 = ctx.r10.s64 + 20;
	// b 0x82390410
	goto loc_82390410;
loc_82390408:
	// add r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r9,-20
	ctx.r10.s64 = ctx.r9.s64 + -20;
loc_82390410:
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82390488
	if (!cr0.eq) goto loc_82390488;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f6,f1,f11
	ctx.f6.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f9,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * f0.f64));
	// lfs f7,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f5,f13,f10
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmsubs f4,f13,f0,f11
	ctx.f4.f64 = double(float(ctx.f13.f64 * f0.f64 - ctx.f11.f64));
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmsubs f9,f9,f10,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 - ctx.f5.f64));
	// fmuls f10,f7,f12
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fdivs f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// fnmsubs f0,f11,f0,f9
	f0.f64 = double(float(-(ctx.f11.f64 * f0.f64 - ctx.f9.f64)));
	// fadds f8,f4,f10
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f10.f64));
	// fsubs f0,f0,f10
	f0.f64 = double(float(f0.f64 - ctx.f10.f64));
	// fadds f9,f8,f11
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fmadds f0,f9,f12,f0
	f0.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + f0.f64));
	// fmadds f0,f0,f12,f11
	f0.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// b 0x823904b0
	goto loc_823904B0;
loc_82390488:
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// bne cr6,0x823904b4
	if (!cr6.eq) goto loc_823904B4;
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f1,f0
	ctx.f10.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfs f13,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f13
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fdivs f0,f10,f0
	f0.f64 = double(float(ctx.f10.f64 / f0.f64));
loc_823904B0:
	// fmadds f31,f0,f12,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f13.f64));
loc_823904B4:
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823904c8
	if (cr0.eq) goto loc_823904C8;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82391850
	sub_82391850(ctx, base);
loc_823904C8:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823904E0"))) PPC_WEAK_FUNC(sub_823904E0);
PPC_FUNC_IMPL(__imp__sub_823904E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,-11132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11132);
	f0.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f13,12872(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12872);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82390524
	if (cr0.eq) goto loc_82390524;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f12,-20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
loc_82390524:
	// lfs f12,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bnelr cr6
	if (!cr6.eq) return;
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bnelr cr6
	if (!cr6.eq) return;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390550"))) PPC_WEAK_FUNC(sub_82390550);
PPC_FUNC_IMPL(__imp__sub_82390550) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x82390584
	goto loc_82390584;
loc_82390570:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82390580
	if (cr6.eq) goto loc_82390580;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_82390580:
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_82390584:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82390570
	if (!cr6.eq) goto loc_82390570;
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

__attribute__((alias("__imp__sub_823905A4"))) PPC_WEAK_FUNC(sub_823905A4);
PPC_FUNC_IMPL(__imp__sub_823905A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823905A8"))) PPC_WEAK_FUNC(sub_823905A8);
PPC_FUNC_IMPL(__imp__sub_823905A8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x82390550
	sub_82390550(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_823905FC"))) PPC_WEAK_FUNC(sub_823905FC);
PPC_FUNC_IMPL(__imp__sub_823905FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390600"))) PPC_WEAK_FUNC(sub_82390600);
PPC_FUNC_IMPL(__imp__sub_82390600) {
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
	// lwz r16,21712(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21712);
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
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82390240
	sub_82390240(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82390674
	if (!cr6.lt) goto loc_82390674;
loc_8239063C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8239063c
	if (cr6.lt) goto loc_8239063C;
loc_82390674:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82390608"))) PPC_WEAK_FUNC(sub_82390608);
PPC_FUNC_IMPL(__imp__sub_82390608) {
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
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82390240
	sub_82390240(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82390674
	if (!cr6.lt) goto loc_82390674;
loc_8239063C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8239063c
	if (cr6.lt) goto loc_8239063C;
loc_82390674:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82390680"))) PPC_WEAK_FUNC(sub_82390680);
PPC_FUNC_IMPL(__imp__sub_82390680) {
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
	// bl 0x823905a8
	sub_823905A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823906A8"))) PPC_WEAK_FUNC(sub_823906A8);
PPC_FUNC_IMPL(__imp__sub_823906A8) {
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
	// lwz r16,21768(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21768);
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
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82390744
	if (!cr6.gt) goto loc_82390744;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82390240
	sub_82390240(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82390714
	if (!cr6.lt) goto loc_82390714;
loc_823906EC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,20
	r11.s64 = r29.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x823906ec
	if (cr6.lt) goto loc_823906EC;
loc_82390714:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823905a8
	sub_823905A8(ctx, base);
loc_82390744:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823906B0"))) PPC_WEAK_FUNC(sub_823906B0);
PPC_FUNC_IMPL(__imp__sub_823906B0) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82390744
	if (!cr6.gt) goto loc_82390744;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82390240
	sub_82390240(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82390714
	if (!cr6.lt) goto loc_82390714;
loc_823906EC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,20
	r11.s64 = r29.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x823906ec
	if (cr6.lt) goto loc_823906EC;
loc_82390714:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823905a8
	sub_823905A8(ctx, base);
loc_82390744:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8239074C"))) PPC_WEAK_FUNC(sub_8239074C);
PPC_FUNC_IMPL(__imp__sub_8239074C) {
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
	// bl 0x823905a8
	sub_823905A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390774"))) PPC_WEAK_FUNC(sub_82390774);
PPC_FUNC_IMPL(__imp__sub_82390774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390778"))) PPC_WEAK_FUNC(sub_82390778);
PPC_FUNC_IMPL(__imp__sub_82390778) {
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
	// lwz r16,21840(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21840);
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82390844
	if (cr6.lt) goto loc_82390844;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823907b8
	if (cr6.eq) goto loc_823907B8;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_823907B8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82390240
	sub_82390240(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823907fc
	if (!cr6.lt) goto loc_823907FC;
loc_823907D4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,20
	r11.s64 = r29.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x823907d4
	if (cr6.lt) goto loc_823907D4;
loc_823907FC:
	// mulli r11,r29,20
	r11.s64 = r29.s64 * 20;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823905a8
	sub_823905A8(ctx, base);
	// b 0x82390864
	goto loc_82390864;
loc_82390844:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82390864:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82390780"))) PPC_WEAK_FUNC(sub_82390780);
PPC_FUNC_IMPL(__imp__sub_82390780) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82390844
	if (cr6.lt) goto loc_82390844;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x823907b8
	if (cr6.eq) goto loc_823907B8;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_823907B8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82390240
	sub_82390240(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823907fc
	if (!cr6.lt) goto loc_823907FC;
loc_823907D4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,20
	r11.s64 = r29.s64 * 20;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x823907d4
	if (cr6.lt) goto loc_823907D4;
loc_823907FC:
	// mulli r11,r29,20
	r11.s64 = r29.s64 * 20;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823905a8
	sub_823905A8(ctx, base);
	// b 0x82390864
	goto loc_82390864;
loc_82390844:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823902b0
	sub_823902B0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82390864:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8239086C"))) PPC_WEAK_FUNC(sub_8239086C);
PPC_FUNC_IMPL(__imp__sub_8239086C) {
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
	// bl 0x823905a8
	sub_823905A8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390894"))) PPC_WEAK_FUNC(sub_82390894);
PPC_FUNC_IMPL(__imp__sub_82390894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390898"))) PPC_WEAK_FUNC(sub_82390898);
PPC_FUNC_IMPL(__imp__sub_82390898) {
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
	// lwz r16,21936(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21936);
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
	// bl 0x82387940
	sub_82387940(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// bne cr6,0x823908d0
	if (!cr6.eq) goto loc_823908D0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823908D0:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x822ada30
	sub_822ADA30(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// addi r11,r11,21908
	r11.s64 = r11.s64 + 21908;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82390608
	sub_82390608(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823908A0"))) PPC_WEAK_FUNC(sub_823908A0);
PPC_FUNC_IMPL(__imp__sub_823908A0) {
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
	// bl 0x82387940
	sub_82387940(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// bne cr6,0x823908d0
	if (!cr6.eq) goto loc_823908D0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823908D0:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x822ada30
	sub_822ADA30(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r29,12
	ctx.r4.s64 = r29.s64 + 12;
	// addi r11,r11,21908
	r11.s64 = r11.s64 + 21908;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82390608
	sub_82390608(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82390914"))) PPC_WEAK_FUNC(sub_82390914);
PPC_FUNC_IMPL(__imp__sub_82390914) {
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
	// bl 0x82387a00
	sub_82387A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239093C"))) PPC_WEAK_FUNC(sub_8239093C);
PPC_FUNC_IMPL(__imp__sub_8239093C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390940"))) PPC_WEAK_FUNC(sub_82390940);
PPC_FUNC_IMPL(__imp__sub_82390940) {
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
	// lwz r16,21992(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 21992);
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
	// addi r11,r11,21908
	r11.s64 = r11.s64 + 21908;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x823905a8
	sub_823905A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82387a00
	sub_82387A00(ctx, base);
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

__attribute__((alias("__imp__sub_82390948"))) PPC_WEAK_FUNC(sub_82390948);
PPC_FUNC_IMPL(__imp__sub_82390948) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,21908
	r11.s64 = r11.s64 + 21908;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x823905a8
	sub_823905A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82387a00
	sub_82387A00(ctx, base);
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

__attribute__((alias("__imp__sub_8239099C"))) PPC_WEAK_FUNC(sub_8239099C);
PPC_FUNC_IMPL(__imp__sub_8239099C) {
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
	// bl 0x82387a00
	sub_82387A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823909C4"))) PPC_WEAK_FUNC(sub_823909C4);
PPC_FUNC_IMPL(__imp__sub_823909C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823909C8"))) PPC_WEAK_FUNC(sub_823909C8);
PPC_FUNC_IMPL(__imp__sub_823909C8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x823905a8
	sub_823905A8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390A18"))) PPC_WEAK_FUNC(sub_82390A18);
PPC_FUNC_IMPL(__imp__sub_82390A18) {
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
	// lwz r16,22056(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22056);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82390aa8
	if (cr0.eq) goto loc_82390AA8;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82390b00
	if (cr6.eq) goto loc_82390B00;
loc_82390A80:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x8239b500
	sub_8239B500(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82390a80
	if (cr6.lt) goto loc_82390A80;
	// b 0x82390b00
	goto loc_82390B00;
loc_82390AA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823909c8
	sub_823909C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823906b0
	sub_823906B0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82390b00
	if (cr6.eq) goto loc_82390B00;
loc_82390AC8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239b4a8
	sub_8239B4A8(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239b500
	sub_8239B500(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82390780
	sub_82390780(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82390ac8
	if (cr6.lt) goto loc_82390AC8;
loc_82390B00:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82390A20"))) PPC_WEAK_FUNC(sub_82390A20);
PPC_FUNC_IMPL(__imp__sub_82390A20) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82390aa8
	if (cr0.eq) goto loc_82390AA8;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82390b00
	if (cr6.eq) goto loc_82390B00;
loc_82390A80:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x8239b500
	sub_8239B500(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82390a80
	if (cr6.lt) goto loc_82390A80;
	// b 0x82390b00
	goto loc_82390B00;
loc_82390AA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823909c8
	sub_823909C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x823906b0
	sub_823906B0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82390b00
	if (cr6.eq) goto loc_82390B00;
loc_82390AC8:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8239b4a8
	sub_8239B4A8(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239b500
	sub_8239B500(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82390780
	sub_82390780(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82390ac8
	if (cr6.lt) goto loc_82390AC8;
loc_82390B00:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82390B0C"))) PPC_WEAK_FUNC(sub_82390B0C);
PPC_FUNC_IMPL(__imp__sub_82390B0C) {
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

__attribute__((alias("__imp__sub_82390B34"))) PPC_WEAK_FUNC(sub_82390B34);
PPC_FUNC_IMPL(__imp__sub_82390B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390B38"))) PPC_WEAK_FUNC(sub_82390B38);
PPC_FUNC_IMPL(__imp__sub_82390B38) {
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
	// lwz r16,22128(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22128);
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
	// bl 0x823878b0
	sub_823878B0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82390038
	sub_82390038(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,21908
	ctx.r10.s64 = r11.s64 + 21908;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r9,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
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

__attribute__((alias("__imp__sub_82390B40"))) PPC_WEAK_FUNC(sub_82390B40);
PPC_FUNC_IMPL(__imp__sub_82390B40) {
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
	// bl 0x823878b0
	sub_823878B0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82390038
	sub_82390038(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,21908
	ctx.r10.s64 = r11.s64 + 21908;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// stw r9,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r9.u32);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
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

__attribute__((alias("__imp__sub_82390BB4"))) PPC_WEAK_FUNC(sub_82390BB4);
PPC_FUNC_IMPL(__imp__sub_82390BB4) {
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
	// bl 0x82387a00
	sub_82387A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390BDC"))) PPC_WEAK_FUNC(sub_82390BDC);
PPC_FUNC_IMPL(__imp__sub_82390BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390BE0"))) PPC_WEAK_FUNC(sub_82390BE0);
PPC_FUNC_IMPL(__imp__sub_82390BE0) {
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
	// bl 0x82390948
	sub_82390948(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82390c10
	if (cr0.eq) goto loc_82390C10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82390C10:
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

__attribute__((alias("__imp__sub_82390C2C"))) PPC_WEAK_FUNC(sub_82390C2C);
PPC_FUNC_IMPL(__imp__sub_82390C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390C30"))) PPC_WEAK_FUNC(sub_82390C30);
PPC_FUNC_IMPL(__imp__sub_82390C30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,22184(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22184);
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
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82390c68
	if (cr0.eq) goto loc_82390C68;
	// bl 0x82390b40
	sub_82390B40(ctx, base);
	// b 0x82390c6c
	goto loc_82390C6C;
loc_82390C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82390C6C:
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

__attribute__((alias("__imp__sub_82390C38"))) PPC_WEAK_FUNC(sub_82390C38);
PPC_FUNC_IMPL(__imp__sub_82390C38) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82390c68
	if (cr0.eq) goto loc_82390C68;
	// bl 0x82390b40
	sub_82390B40(ctx, base);
	// b 0x82390c6c
	goto loc_82390C6C;
loc_82390C68:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82390C6C:
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

__attribute__((alias("__imp__sub_82390C80"))) PPC_WEAK_FUNC(sub_82390C80);
PPC_FUNC_IMPL(__imp__sub_82390C80) {
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

__attribute__((alias("__imp__sub_82390CA8"))) PPC_WEAK_FUNC(sub_82390CA8);
PPC_FUNC_IMPL(__imp__sub_82390CA8) {
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
	// lwz r16,22272(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22272);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x82390d38
	if (cr0.eq) goto loc_82390D38;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22232
	ctx.r4.s64 = r11.s64 + 22232;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// lwz r6,16940(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16940);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82390d14
	if (!cr6.eq) goto loc_82390D14;
	// bl 0x82387bb0
	sub_82387BB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,16940(r30)
	PPC_STORE_U32(r30.u32 + 16940, ctx.r6.u32);
loc_82390D14:
	// lis r11,-32199
	r11.s64 = -2110193664;
	// li r7,36
	ctx.r7.s64 = 36;
	// addi r8,r11,3128
	ctx.r8.s64 = r11.s64 + 3128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82390d3c
	goto loc_82390D3C;
loc_82390D38:
	// li r30,0
	r30.s64 = 0;
loc_82390D3C:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82390d4c
	if (cr0.eq) goto loc_82390D4C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82390D4C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82390CB0"))) PPC_WEAK_FUNC(sub_82390CB0);
PPC_FUNC_IMPL(__imp__sub_82390CB0) {
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
	// li r28,0
	r28.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x82390d38
	if (cr0.eq) goto loc_82390D38;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22232
	ctx.r4.s64 = r11.s64 + 22232;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// lwz r6,16940(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16940);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82390d14
	if (!cr6.eq) goto loc_82390D14;
	// bl 0x82387bb0
	sub_82387BB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,16940(r30)
	PPC_STORE_U32(r30.u32 + 16940, ctx.r6.u32);
loc_82390D14:
	// lis r11,-32199
	r11.s64 = -2110193664;
	// li r7,36
	ctx.r7.s64 = 36;
	// addi r8,r11,3128
	ctx.r8.s64 = r11.s64 + 3128;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82390d3c
	goto loc_82390D3C;
loc_82390D38:
	// li r30,0
	r30.s64 = 0;
loc_82390D3C:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82390d4c
	if (cr0.eq) goto loc_82390D4C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82390D4C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82390D58"))) PPC_WEAK_FUNC(sub_82390D58);
PPC_FUNC_IMPL(__imp__sub_82390D58) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82390D80"))) PPC_WEAK_FUNC(sub_82390D80);
PPC_FUNC_IMPL(__imp__sub_82390D80) {
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
	// beq 0x82390db0
	if (cr0.eq) goto loc_82390DB0;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
loc_82390DB0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390DC0"))) PPC_WEAK_FUNC(sub_82390DC0);
PPC_FUNC_IMPL(__imp__sub_82390DC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,16988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16988);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82390de8
	if (!cr6.eq) goto loc_82390DE8;
	// bl 0x82390cb0
	sub_82390CB0(ctx, base);
	// stw r3,16988(r31)
	PPC_STORE_U32(r31.u32 + 16988, ctx.r3.u32);
loc_82390DE8:
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

__attribute__((alias("__imp__sub_82390DFC"))) PPC_WEAK_FUNC(sub_82390DFC);
PPC_FUNC_IMPL(__imp__sub_82390DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390E00"))) PPC_WEAK_FUNC(sub_82390E00);
PPC_FUNC_IMPL(__imp__sub_82390E00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,16988(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16988);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82390e28
	if (!cr6.eq) goto loc_82390E28;
	// bl 0x82390cb0
	sub_82390CB0(ctx, base);
	// stw r3,16988(r31)
	PPC_STORE_U32(r31.u32 + 16988, ctx.r3.u32);
loc_82390E28:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
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

__attribute__((alias("__imp__sub_82390E40"))) PPC_WEAK_FUNC(sub_82390E40);
PPC_FUNC_IMPL(__imp__sub_82390E40) {
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
	// bl 0x82387d40
	sub_82387D40(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r3,16988(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16988);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82390e70
	if (!cr6.eq) goto loc_82390E70;
	// bl 0x82390cb0
	sub_82390CB0(ctx, base);
	// stw r3,16988(r29)
	PPC_STORE_U32(r29.u32 + 16988, ctx.r3.u32);
loc_82390E70:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x823861f8
	sub_823861F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// bl 0x82390a20
	sub_82390A20(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82390EB4"))) PPC_WEAK_FUNC(sub_82390EB4);
PPC_FUNC_IMPL(__imp__sub_82390EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82390EB8"))) PPC_WEAK_FUNC(sub_82390EB8);
PPC_FUNC_IMPL(__imp__sub_82390EB8) {
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
	// lwz r16,22392(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22392);
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
	// bl 0x82390028
	sub_82390028(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82390038
	sub_82390038(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,22348
	r11.s64 = r11.s64 + 22348;
	// addi r29,r10,16952
	r29.s64 = ctx.r10.s64 + 16952;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82389350
	sub_82389350(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// bl 0x82389350
	sub_82389350(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// bl 0x82396d30
	sub_82396D30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82390EC0"))) PPC_WEAK_FUNC(sub_82390EC0);
PPC_FUNC_IMPL(__imp__sub_82390EC0) {
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// bl 0x82390028
	sub_82390028(ctx, base);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x82390038
	sub_82390038(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,22348
	r11.s64 = r11.s64 + 22348;
	// addi r29,r10,16952
	r29.s64 = ctx.r10.s64 + 16952;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82389350
	sub_82389350(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r28,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r28.u32);
	// bl 0x82389350
	sub_82389350(ctx, base);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// bl 0x82396d30
	sub_82396D30(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82390F30"))) PPC_WEAK_FUNC(sub_82390F30);
PPC_FUNC_IMPL(__imp__sub_82390F30) {
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
	// bl 0x82390028
	sub_82390028(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82390F58"))) PPC_WEAK_FUNC(sub_82390F58);
PPC_FUNC_IMPL(__imp__sub_82390F58) {
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
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
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

__attribute__((alias("__imp__sub_82390F84"))) PPC_WEAK_FUNC(sub_82390F84);
PPC_FUNC_IMPL(__imp__sub_82390F84) {
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82390FB0"))) PPC_WEAK_FUNC(sub_82390FB0);
PPC_FUNC_IMPL(__imp__sub_82390FB0) {
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
	// lwz r16,22488(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22488);
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
	// addi r11,r11,22348
	r11.s64 = r11.s64 + 22348;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x82396a60
	sub_82396A60(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82390028
	sub_82390028(ctx, base);
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

__attribute__((alias("__imp__sub_82390FB8"))) PPC_WEAK_FUNC(sub_82390FB8);
PPC_FUNC_IMPL(__imp__sub_82390FB8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,22348
	r11.s64 = r11.s64 + 22348;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x82396a60
	sub_82396A60(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82390028
	sub_82390028(ctx, base);
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

__attribute__((alias("__imp__sub_8239101C"))) PPC_WEAK_FUNC(sub_8239101C);
PPC_FUNC_IMPL(__imp__sub_8239101C) {
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
	// bl 0x82390028
	sub_82390028(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391044"))) PPC_WEAK_FUNC(sub_82391044);
PPC_FUNC_IMPL(__imp__sub_82391044) {
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
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
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

__attribute__((alias("__imp__sub_82391070"))) PPC_WEAK_FUNC(sub_82391070);
PPC_FUNC_IMPL(__imp__sub_82391070) {
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

__attribute__((alias("__imp__sub_8239109C"))) PPC_WEAK_FUNC(sub_8239109C);
PPC_FUNC_IMPL(__imp__sub_8239109C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823910A0"))) PPC_WEAK_FUNC(sub_823910A0);
PPC_FUNC_IMPL(__imp__sub_823910A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391100
	if (cr6.eq) goto loc_82391100;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391100
	if (cr6.eq) goto loc_82391100;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r31,24
	r29.s64 = r31.s64 + 24;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82391108
	goto loc_82391108;
loc_82391100:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
loc_82391108:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82391110"))) PPC_WEAK_FUNC(sub_82391110);
PPC_FUNC_IMPL(__imp__sub_82391110) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391118"))) PPC_WEAK_FUNC(sub_82391118);
PPC_FUNC_IMPL(__imp__sub_82391118) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82391154
	if (cr6.eq) goto loc_82391154;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8239115c
	goto loc_8239115C;
loc_82391154:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,16952
	ctx.r4.s64 = r11.s64 + 16952;
loc_8239115C:
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// bl 0x82389a38
	sub_82389A38(ctx, base);
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

__attribute__((alias("__imp__sub_82391178"))) PPC_WEAK_FUNC(sub_82391178);
PPC_FUNC_IMPL(__imp__sub_82391178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8239118c
	if (cr0.eq) goto loc_8239118C;
	// lbz r3,32(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 32);
	// blr 
	return;
loc_8239118C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391194"))) PPC_WEAK_FUNC(sub_82391194);
PPC_FUNC_IMPL(__imp__sub_82391194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391198"))) PPC_WEAK_FUNC(sub_82391198);
PPC_FUNC_IMPL(__imp__sub_82391198) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823911c4
	if (!cr6.eq) goto loc_823911C4;
	// li r11,0
	r11.s64 = 0;
	// b 0x823911d0
	goto loc_823911D0;
loc_823911C4:
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823911D0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_823911FC"))) PPC_WEAK_FUNC(sub_823911FC);
PPC_FUNC_IMPL(__imp__sub_823911FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391200"))) PPC_WEAK_FUNC(sub_82391200);
PPC_FUNC_IMPL(__imp__sub_82391200) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,22568(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22568);
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
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82391238
	if (cr0.eq) goto loc_82391238;
	// bl 0x82390ec0
	sub_82390EC0(ctx, base);
	// b 0x8239123c
	goto loc_8239123C;
loc_82391238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239123C:
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

__attribute__((alias("__imp__sub_82391208"))) PPC_WEAK_FUNC(sub_82391208);
PPC_FUNC_IMPL(__imp__sub_82391208) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82391238
	if (cr0.eq) goto loc_82391238;
	// bl 0x82390ec0
	sub_82390EC0(ctx, base);
	// b 0x8239123c
	goto loc_8239123C;
loc_82391238:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8239123C:
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

__attribute__((alias("__imp__sub_82391250"))) PPC_WEAK_FUNC(sub_82391250);
PPC_FUNC_IMPL(__imp__sub_82391250) {
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

__attribute__((alias("__imp__sub_82391278"))) PPC_WEAK_FUNC(sub_82391278);
PPC_FUNC_IMPL(__imp__sub_82391278) {
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
	// bl 0x82390fb8
	sub_82390FB8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823912a8
	if (cr0.eq) goto loc_823912A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_823912A8:
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

__attribute__((alias("__imp__sub_823912C4"))) PPC_WEAK_FUNC(sub_823912C4);
PPC_FUNC_IMPL(__imp__sub_823912C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823912C8"))) PPC_WEAK_FUNC(sub_823912C8);
PPC_FUNC_IMPL(__imp__sub_823912C8) {
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
	// lwz r16,22640(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22640);
	// mflr r12
	// bl 0x8239bcfc
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
	// addi r11,r11,18404
	r11.s64 = r11.s64 + 18404;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// bne cr6,0x82391308
	if (!cr6.eq) goto loc_82391308;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82391308:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822ada30
	sub_822ADA30(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// addi r11,r11,22348
	r11.s64 = r11.s64 + 22348;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82389350
	sub_82389350(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x82389350
	sub_82389350(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r4,r29,24
	ctx.r4.s64 = r29.s64 + 24;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x823969a0
	sub_823969A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823912D0"))) PPC_WEAK_FUNC(sub_823912D0);
PPC_FUNC_IMPL(__imp__sub_823912D0) {
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
	// addi r11,r11,18404
	r11.s64 = r11.s64 + 18404;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// bne cr6,0x82391308
	if (!cr6.eq) goto loc_82391308;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82391308:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822ada30
	sub_822ADA30(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r29,8
	ctx.r4.s64 = r29.s64 + 8;
	// addi r11,r11,22348
	r11.s64 = r11.s64 + 22348;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82389350
	sub_82389350(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r4,r29,16
	ctx.r4.s64 = r29.s64 + 16;
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x82389350
	sub_82389350(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r4,r29,24
	ctx.r4.s64 = r29.s64 + 24;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x823969a0
	sub_823969A0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8239135C"))) PPC_WEAK_FUNC(sub_8239135C);
PPC_FUNC_IMPL(__imp__sub_8239135C) {
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
	// bl 0x82390028
	sub_82390028(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391384"))) PPC_WEAK_FUNC(sub_82391384);
PPC_FUNC_IMPL(__imp__sub_82391384) {
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
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
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

__attribute__((alias("__imp__sub_823913B0"))) PPC_WEAK_FUNC(sub_823913B0);
PPC_FUNC_IMPL(__imp__sub_823913B0) {
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

__attribute__((alias("__imp__sub_823913DC"))) PPC_WEAK_FUNC(sub_823913DC);
PPC_FUNC_IMPL(__imp__sub_823913DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823913E0"))) PPC_WEAK_FUNC(sub_823913E0);
PPC_FUNC_IMPL(__imp__sub_823913E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8239141c
	if (cr6.eq) goto loc_8239141C;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82391404
	if (cr6.eq) goto loc_82391404;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82391404:
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_8239141C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391428"))) PPC_WEAK_FUNC(sub_82391428);
PPC_FUNC_IMPL(__imp__sub_82391428) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lis r11,-32253
	r11.s64 = -2113732608;
	// fmr f29,f1
	f29.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,-11132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11132);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f29,f0
	cr6.compare(f29.f64, f0.f64);
	// bne cr6,0x82391468
	if (!cr6.eq) goto loc_82391468;
	// fmr f29,f31
	f29.f64 = f31.f64;
loc_82391468:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823914e4
	if (cr6.eq) goto loc_823914E4;
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
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fcmpu cr6,f30,f31
	cr6.compare(f30.f64, f31.f64);
	// ble cr6,0x823914a4
	if (!cr6.gt) goto loc_823914A4;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82391840
	sub_82391840(ctx, base);
	// fdivs f31,f30,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f30.f64 / ctx.f1.f64));
	// b 0x823914bc
	goto loc_823914BC;
loc_823914A4:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f31.f64);
	// bge cr6,0x823914bc
	if (!cr6.lt) goto loc_823914BC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// fneg f31,f30
	f31.u64 = f30.u64 ^ 0x8000000000000000;
	// bl 0x82391830
	sub_82391830(ctx, base);
	// fdivs f31,f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 / ctx.f1.f64));
loc_823914BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823913e0
	sub_823913E0(ctx, base);
	// fmadds f0,f1,f31,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64 + f29.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x823914dc
	if (cr6.lt) goto loc_823914DC;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_823914DC:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// b 0x823914e8
	goto loc_823914E8;
loc_823914E4:
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f29.f64;
loc_823914E8:
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

__attribute__((alias("__imp__sub_82391508"))) PPC_WEAK_FUNC(sub_82391508);
PPC_FUNC_IMPL(__imp__sub_82391508) {
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
	// lwz r16,22760(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22760);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x82391598
	if (cr0.eq) goto loc_82391598;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22712
	ctx.r4.s64 = r11.s64 + 22712;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// lwz r6,16984(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16984);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82391574
	if (!cr6.eq) goto loc_82391574;
	// bl 0x82390090
	sub_82390090(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,16984(r30)
	PPC_STORE_U32(r30.u32 + 16984, ctx.r6.u32);
loc_82391574:
	// lis r11,-32199
	r11.s64 = -2110193664;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r8,r11,4616
	ctx.r8.s64 = r11.s64 + 4616;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8239159c
	goto loc_8239159C;
loc_82391598:
	// li r30,0
	r30.s64 = 0;
loc_8239159C:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823915ac
	if (cr0.eq) goto loc_823915AC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_823915AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82391510"))) PPC_WEAK_FUNC(sub_82391510);
PPC_FUNC_IMPL(__imp__sub_82391510) {
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
	// li r28,0
	r28.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x82391598
	if (cr0.eq) goto loc_82391598;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,22712
	ctx.r4.s64 = r11.s64 + 22712;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// lwz r6,16984(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16984);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82391574
	if (!cr6.eq) goto loc_82391574;
	// bl 0x82390090
	sub_82390090(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,16984(r30)
	PPC_STORE_U32(r30.u32 + 16984, ctx.r6.u32);
loc_82391574:
	// lis r11,-32199
	r11.s64 = -2110193664;
	// li r7,40
	ctx.r7.s64 = 40;
	// addi r8,r11,4616
	ctx.r8.s64 = r11.s64 + 4616;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8239159c
	goto loc_8239159C;
loc_82391598:
	// li r30,0
	r30.s64 = 0;
loc_8239159C:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823915ac
	if (cr0.eq) goto loc_823915AC;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_823915AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823915B8"))) PPC_WEAK_FUNC(sub_823915B8);
PPC_FUNC_IMPL(__imp__sub_823915B8) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_823915E0"))) PPC_WEAK_FUNC(sub_823915E0);
PPC_FUNC_IMPL(__imp__sub_823915E0) {
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
	// beq 0x82391610
	if (cr0.eq) goto loc_82391610;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
loc_82391610:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391620"))) PPC_WEAK_FUNC(sub_82391620);
PPC_FUNC_IMPL(__imp__sub_82391620) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823916c8
	if (cr6.lt) goto loc_823916C8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x8239165c
	if (cr6.eq) goto loc_8239165C;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_8239165C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82391198
	sub_82391198(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82391688
	goto loc_82391688;
loc_82391670:
	// add. r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82391684
	if (cr0.eq) goto loc_82391684;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lfsx f0,r10,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82391684:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82391688:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blt cr6,0x82391670
	if (cr6.lt) goto loc_82391670;
	// add. r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823916a8
	if (cr0.eq) goto loc_823916A8;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_823916A8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// b 0x823916ec
	goto loc_823916EC;
loc_823916C8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add. r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823916e0
	if (cr0.eq) goto loc_823916E0;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_823916E0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_823916EC:
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

__attribute__((alias("__imp__sub_82391704"))) PPC_WEAK_FUNC(sub_82391704);
PPC_FUNC_IMPL(__imp__sub_82391704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391708"))) PPC_WEAK_FUNC(sub_82391708);
PPC_FUNC_IMPL(__imp__sub_82391708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,16992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16992);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82391730
	if (!cr6.eq) goto loc_82391730;
	// bl 0x82391510
	sub_82391510(ctx, base);
	// stw r3,16992(r31)
	PPC_STORE_U32(r31.u32 + 16992, ctx.r3.u32);
loc_82391730:
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

__attribute__((alias("__imp__sub_82391744"))) PPC_WEAK_FUNC(sub_82391744);
PPC_FUNC_IMPL(__imp__sub_82391744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391748"))) PPC_WEAK_FUNC(sub_82391748);
PPC_FUNC_IMPL(__imp__sub_82391748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,16992(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16992);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82391770
	if (!cr6.eq) goto loc_82391770;
	// bl 0x82391510
	sub_82391510(ctx, base);
	// stw r3,16992(r31)
	PPC_STORE_U32(r31.u32 + 16992, ctx.r3.u32);
loc_82391770:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
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

__attribute__((alias("__imp__sub_82391788"))) PPC_WEAK_FUNC(sub_82391788);
PPC_FUNC_IMPL(__imp__sub_82391788) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82390188
	sub_82390188(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r3,16992(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16992);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823917b8
	if (!cr6.eq) goto loc_823917B8;
	// bl 0x82391510
	sub_82391510(ctx, base);
	// stw r3,16992(r29)
	PPC_STORE_U32(r29.u32 + 16992, ctx.r3.u32);
loc_823917B8:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82386168
	sub_82386168(ctx, base);
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// bl 0x82389ed8
	sub_82389ED8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82389ed8
	sub_82389ED8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82397e00
	sub_82397E00(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82385778
	sub_82385778(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239180c
	if (cr0.eq) goto loc_8239180C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82396438
	sub_82396438(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
loc_8239180C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82391814"))) PPC_WEAK_FUNC(sub_82391814);
PPC_FUNC_IMPL(__imp__sub_82391814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391818"))) PPC_WEAK_FUNC(sub_82391818);
PPC_FUNC_IMPL(__imp__sub_82391818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f0,22832(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22832);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391830"))) PPC_WEAK_FUNC(sub_82391830);
PPC_FUNC_IMPL(__imp__sub_82391830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391838"))) PPC_WEAK_FUNC(sub_82391838);
PPC_FUNC_IMPL(__imp__sub_82391838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391840"))) PPC_WEAK_FUNC(sub_82391840);
PPC_FUNC_IMPL(__imp__sub_82391840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391848"))) PPC_WEAK_FUNC(sub_82391848);
PPC_FUNC_IMPL(__imp__sub_82391848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391850"))) PPC_WEAK_FUNC(sub_82391850);
PPC_FUNC_IMPL(__imp__sub_82391850) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391858"))) PPC_WEAK_FUNC(sub_82391858);
PPC_FUNC_IMPL(__imp__sub_82391858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391864"))) PPC_WEAK_FUNC(sub_82391864);
PPC_FUNC_IMPL(__imp__sub_82391864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391868"))) PPC_WEAK_FUNC(sub_82391868);
PPC_FUNC_IMPL(__imp__sub_82391868) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82391894
	if (!cr6.eq) goto loc_82391894;
	// li r11,0
	r11.s64 = 0;
	// b 0x823918a0
	goto loc_823918A0;
loc_82391894:
	// mulli r3,r30,12
	ctx.r3.s64 = r30.s64 * 12;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823918A0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_823918CC"))) PPC_WEAK_FUNC(sub_823918CC);
PPC_FUNC_IMPL(__imp__sub_823918CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823918D0"))) PPC_WEAK_FUNC(sub_823918D0);
PPC_FUNC_IMPL(__imp__sub_823918D0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823918fc
	if (!cr6.eq) goto loc_823918FC;
	// li r11,0
	r11.s64 = 0;
	// b 0x82391908
	goto loc_82391908;
loc_823918FC:
	// rlwinm r3,r30,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82391908:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82391934"))) PPC_WEAK_FUNC(sub_82391934);
PPC_FUNC_IMPL(__imp__sub_82391934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391938"))) PPC_WEAK_FUNC(sub_82391938);
PPC_FUNC_IMPL(__imp__sub_82391938) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8239199c
	if (!cr6.gt) goto loc_8239199C;
	// li r30,0
	r30.s64 = 0;
loc_82391960:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82389398
	sub_82389398(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823919a8
	if (!cr0.eq) goto loc_823919A8;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82391960
	if (cr6.lt) goto loc_82391960;
loc_8239199C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823919A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_823919A8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x823919a0
	goto loc_823919A0;
}

__attribute__((alias("__imp__sub_823919B0"))) PPC_WEAK_FUNC(sub_823919B0);
PPC_FUNC_IMPL(__imp__sub_823919B0) {
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
	// b 0x823919f4
	goto loc_823919F4;
loc_823919D0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823919f0
	if (cr6.eq) goto loc_823919F0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823919F0:
	// addi r31,r31,32
	r31.s64 = r31.s64 + 32;
loc_823919F4:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x823919d0
	if (!cr6.eq) goto loc_823919D0;
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

__attribute__((alias("__imp__sub_82391A14"))) PPC_WEAK_FUNC(sub_82391A14);
PPC_FUNC_IMPL(__imp__sub_82391A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391A18"))) PPC_WEAK_FUNC(sub_82391A18);
PPC_FUNC_IMPL(__imp__sub_82391A18) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82391aac
	if (cr6.eq) goto loc_82391AAC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82387ad8
	sub_82387AD8(ctx, base);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// li r29,0
	r29.s64 = 0;
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82391aac
	if (!cr6.gt) goto loc_82391AAC;
	// li r28,0
	r28.s64 = 0;
loc_82391A7C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// add r4,r28,r11
	ctx.r4.u64 = r28.u64 + r11.u64;
	// lwz r11,36(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,32
	r28.s64 = r28.s64 + 32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82391a7c
	if (cr6.lt) goto loc_82391A7C;
loc_82391AAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82391AB4"))) PPC_WEAK_FUNC(sub_82391AB4);
PPC_FUNC_IMPL(__imp__sub_82391AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391AB8"))) PPC_WEAK_FUNC(sub_82391AB8);
PPC_FUNC_IMPL(__imp__sub_82391AB8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r28,-32250
	r28.s64 = -2113536000;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f12,22832(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 22832);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bne cr6,0x82391cc4
	if (!cr6.eq) goto loc_82391CC4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f27,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f27.f64 = double(temp.f32);
	// beq 0x82391c08
	if (cr0.eq) goto loc_82391C08;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f28,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f28.f64 = double(temp.f32);
	// bne cr6,0x82391b14
	if (!cr6.eq) goto loc_82391B14;
	// fmr f31,f27
	f31.f64 = f27.f64;
	// b 0x82391b18
	goto loc_82391B18;
loc_82391B14:
	// fmr f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = f28.f64;
loc_82391B18:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f29,-11132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11132);
	f29.f64 = double(temp.f32);
	// fmr f30,f29
	f30.f64 = f29.f64;
	// beq cr6,0x82391ba8
	if (cr6.eq) goto loc_82391BA8;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_82391B34:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82391178
	sub_82391178(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82391b84
	if (!cr0.eq) goto loc_82391B84;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82391b68
	if (!cr0.eq) goto loc_82391B68;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x823910a0
	sub_823910A0(ctx, base);
	// fadds f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 + f31.f64));
	// b 0x82391b98
	goto loc_82391B98;
loc_82391B68:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82391b98
	if (!cr6.eq) goto loc_82391B98;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x823910a0
	sub_823910A0(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
	// b 0x82391b98
	goto loc_82391B98;
loc_82391B84:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82391428
	sub_82391428(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
loc_82391B98:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// bne 0x82391b34
	if (!cr0.eq) goto loc_82391B34;
	// lfs f12,22832(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 22832);
	ctx.f12.f64 = double(temp.f32);
loc_82391BA8:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82391bb8
	if (cr6.eq) goto loc_82391BB8;
	// fadds f31,f0,f31
	f31.f64 = double(float(f0.f64 + f31.f64));
loc_82391BB8:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82391bf0
	if (cr6.eq) goto loc_82391BF0;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82391bec
	if (cr6.lt) goto loc_82391BEC;
	// beq cr6,0x82391be4
	if (cr6.eq) goto loc_82391BE4;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82391bf0
	if (!cr6.lt) goto loc_82391BF0;
	// fmr f31,f0
	f31.f64 = f0.f64;
	// b 0x82391bf0
	goto loc_82391BF0;
loc_82391BE4:
	// fmuls f31,f0,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 * f31.f64));
	// b 0x82391bf0
	goto loc_82391BF0;
loc_82391BEC:
	// fadds f31,f0,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 + f31.f64));
loc_82391BF0:
	// fcmpu cr6,f30,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, f29.f64);
	// beq cr6,0x82391c00
	if (cr6.eq) goto loc_82391C00;
	// fsubs f0,f28,f30
	f0.f64 = double(float(f28.f64 - f30.f64));
	// fmuls f31,f0,f31
	f31.f64 = double(float(f0.f64 * f31.f64));
loc_82391C00:
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x82391c88
	goto loc_82391C88;
loc_82391C08:
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// beq cr6,0x82391c18
	if (cr6.eq) goto loc_82391C18;
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82391C18:
	// lfs f13,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// beq cr6,0x82391c88
	if (cr6.eq) goto loc_82391C88;
	// lfs f0,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bne cr6,0x82391c50
	if (!cr6.eq) goto loc_82391C50;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82391c44
	if (!cr6.eq) goto loc_82391C44;
	// fmr f0,f27
	f0.f64 = f27.f64;
	// b 0x82391c4c
	goto loc_82391C4C;
loc_82391C44:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
loc_82391C4C:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82391C50:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82391c7c
	if (cr6.lt) goto loc_82391C7C;
	// beq cr6,0x82391c70
	if (cr6.eq) goto loc_82391C70;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82391c88
	if (!cr6.lt) goto loc_82391C88;
	// stfs f13,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x82391c88
	goto loc_82391C88;
loc_82391C70:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x82391c84
	goto loc_82391C84;
loc_82391C7C:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
loc_82391C84:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82391C88:
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bne cr6,0x82391c9c
	if (!cr6.eq) goto loc_82391C9C;
	// stfs f27,12(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x82391cc4
	goto loc_82391CC4;
loc_82391C9C:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82391cb0
	if (cr6.gt) goto loc_82391CB0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82391CB0:
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82391cc0
	if (!cr6.lt) goto loc_82391CC0;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82391CC0:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
loc_82391CC4:
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-40
	r12.s64 = ctx.r1.s64 + -40;
	// bl 0x8239d630
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82391CD8"))) PPC_WEAK_FUNC(sub_82391CD8);
PPC_FUNC_IMPL(__imp__sub_82391CD8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x823919b0
	sub_823919B0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82391D2C"))) PPC_WEAK_FUNC(sub_82391D2C);
PPC_FUNC_IMPL(__imp__sub_82391D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391D30"))) PPC_WEAK_FUNC(sub_82391D30);
PPC_FUNC_IMPL(__imp__sub_82391D30) {
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
	// lwz r16,22848(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22848);
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82391dfc
	if (cr6.lt) goto loc_82391DFC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82391d70
	if (cr6.eq) goto loc_82391D70;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82391D70:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8238bcf0
	sub_8238BCF0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82391db4
	if (!cr6.lt) goto loc_82391DB4;
loc_82391D8C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,40
	r11.s64 = r29.s64 * 40;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x8238bd60
	sub_8238BD60(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82391d8c
	if (cr6.lt) goto loc_82391D8C;
loc_82391DB4:
	// mulli r11,r29,40
	r11.s64 = r29.s64 * 40;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8238bd60
	sub_8238BD60(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8238c1f8
	sub_8238C1F8(ctx, base);
	// b 0x82391e1c
	goto loc_82391E1C;
loc_82391DFC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8238bd60
	sub_8238BD60(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82391E1C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82391D38"))) PPC_WEAK_FUNC(sub_82391D38);
PPC_FUNC_IMPL(__imp__sub_82391D38) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82391dfc
	if (cr6.lt) goto loc_82391DFC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82391d70
	if (cr6.eq) goto loc_82391D70;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82391D70:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8238bcf0
	sub_8238BCF0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82391db4
	if (!cr6.lt) goto loc_82391DB4;
loc_82391D8C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,40
	r11.s64 = r29.s64 * 40;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x8238bd60
	sub_8238BD60(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82391d8c
	if (cr6.lt) goto loc_82391D8C;
loc_82391DB4:
	// mulli r11,r29,40
	r11.s64 = r29.s64 * 40;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8238bd60
	sub_8238BD60(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8238c1f8
	sub_8238C1F8(ctx, base);
	// b 0x82391e1c
	goto loc_82391E1C;
loc_82391DFC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8238bd60
	sub_8238BD60(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82391E1C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82391E24"))) PPC_WEAK_FUNC(sub_82391E24);
PPC_FUNC_IMPL(__imp__sub_82391E24) {
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
	// bl 0x8238c1f8
	sub_8238C1F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391E4C"))) PPC_WEAK_FUNC(sub_82391E4C);
PPC_FUNC_IMPL(__imp__sub_82391E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391E50"))) PPC_WEAK_FUNC(sub_82391E50);
PPC_FUNC_IMPL(__imp__sub_82391E50) {
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
	// lwz r16,22920(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22920);
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
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82391eec
	if (!cr6.gt) goto loc_82391EEC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8238bcf0
	sub_8238BCF0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82391ebc
	if (!cr6.lt) goto loc_82391EBC;
loc_82391E94:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,40
	r11.s64 = r29.s64 * 40;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x8238bd60
	sub_8238BD60(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82391e94
	if (cr6.lt) goto loc_82391E94;
loc_82391EBC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8238c1f8
	sub_8238C1F8(ctx, base);
loc_82391EEC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82391E58"))) PPC_WEAK_FUNC(sub_82391E58);
PPC_FUNC_IMPL(__imp__sub_82391E58) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82391eec
	if (!cr6.gt) goto loc_82391EEC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8238bcf0
	sub_8238BCF0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82391ebc
	if (!cr6.lt) goto loc_82391EBC;
loc_82391E94:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,40
	r11.s64 = r29.s64 * 40;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x8238bd60
	sub_8238BD60(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82391e94
	if (cr6.lt) goto loc_82391E94;
loc_82391EBC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8238c1f8
	sub_8238C1F8(ctx, base);
loc_82391EEC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82391EF4"))) PPC_WEAK_FUNC(sub_82391EF4);
PPC_FUNC_IMPL(__imp__sub_82391EF4) {
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
	// bl 0x8238c1f8
	sub_8238C1F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82391F1C"))) PPC_WEAK_FUNC(sub_82391F1C);
PPC_FUNC_IMPL(__imp__sub_82391F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82391F20"))) PPC_WEAK_FUNC(sub_82391F20);
PPC_FUNC_IMPL(__imp__sub_82391F20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,22992(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 22992);
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391f50
	if (cr6.eq) goto loc_82391F50;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
loc_82391F50:
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

__attribute__((alias("__imp__sub_82391F28"))) PPC_WEAK_FUNC(sub_82391F28);
PPC_FUNC_IMPL(__imp__sub_82391F28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82391f50
	if (cr6.eq) goto loc_82391F50;
	// bl 0x821a73c8
	sub_821A73C8(ctx, base);
loc_82391F50:
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

__attribute__((alias("__imp__sub_82391F64"))) PPC_WEAK_FUNC(sub_82391F64);
PPC_FUNC_IMPL(__imp__sub_82391F64) {
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

__attribute__((alias("__imp__sub_82391F90"))) PPC_WEAK_FUNC(sub_82391F90);
PPC_FUNC_IMPL(__imp__sub_82391F90) {
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
	// lwz r16,23080(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23080);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x82392020
	if (cr0.eq) goto loc_82392020;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23040
	ctx.r4.s64 = r11.s64 + 23040;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// lwz r6,16940(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16940);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82391ffc
	if (!cr6.eq) goto loc_82391FFC;
	// bl 0x82387bb0
	sub_82387BB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,16940(r30)
	PPC_STORE_U32(r30.u32 + 16940, ctx.r6.u32);
loc_82391FFC:
	// lis r11,-32200
	r11.s64 = -2110259200;
	// li r7,80
	ctx.r7.s64 = 80;
	// addi r8,r11,31464
	ctx.r8.s64 = r11.s64 + 31464;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82392024
	goto loc_82392024;
loc_82392020:
	// li r30,0
	r30.s64 = 0;
loc_82392024:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82392034
	if (cr0.eq) goto loc_82392034;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82392034:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82391F98"))) PPC_WEAK_FUNC(sub_82391F98);
PPC_FUNC_IMPL(__imp__sub_82391F98) {
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
	// li r28,0
	r28.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x82392020
	if (cr0.eq) goto loc_82392020;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,23040
	ctx.r4.s64 = r11.s64 + 23040;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// lwz r6,16940(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16940);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82391ffc
	if (!cr6.eq) goto loc_82391FFC;
	// bl 0x82387bb0
	sub_82387BB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,16940(r30)
	PPC_STORE_U32(r30.u32 + 16940, ctx.r6.u32);
loc_82391FFC:
	// lis r11,-32200
	r11.s64 = -2110259200;
	// li r7,80
	ctx.r7.s64 = 80;
	// addi r8,r11,31464
	ctx.r8.s64 = r11.s64 + 31464;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82392024
	goto loc_82392024;
loc_82392020:
	// li r30,0
	r30.s64 = 0;
loc_82392024:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82392034
	if (cr0.eq) goto loc_82392034;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82392034:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82392040"))) PPC_WEAK_FUNC(sub_82392040);
PPC_FUNC_IMPL(__imp__sub_82392040) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82392068"))) PPC_WEAK_FUNC(sub_82392068);
PPC_FUNC_IMPL(__imp__sub_82392068) {
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
	// beq 0x82392098
	if (cr0.eq) goto loc_82392098;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
loc_82392098:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823920A8"))) PPC_WEAK_FUNC(sub_823920A8);
PPC_FUNC_IMPL(__imp__sub_823920A8) {
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
	// lwz r16,23224(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23224);
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
	// addi r11,r11,23156
	r11.s64 = r11.s64 + 23156;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x82391cd8
	sub_82391CD8(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x8238c1f8
	sub_8238C1F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82387a00
	sub_82387A00(ctx, base);
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

__attribute__((alias("__imp__sub_823920B0"))) PPC_WEAK_FUNC(sub_823920B0);
PPC_FUNC_IMPL(__imp__sub_823920B0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,23156
	r11.s64 = r11.s64 + 23156;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x82391cd8
	sub_82391CD8(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// bl 0x8238c1f8
	sub_8238C1F8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82387a00
	sub_82387A00(ctx, base);
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

__attribute__((alias("__imp__sub_82392124"))) PPC_WEAK_FUNC(sub_82392124);
PPC_FUNC_IMPL(__imp__sub_82392124) {
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
	// bl 0x82387a00
	sub_82387A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239214C"))) PPC_WEAK_FUNC(sub_8239214C);
PPC_FUNC_IMPL(__imp__sub_8239214C) {
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x8238c388
	sub_8238C388(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392178"))) PPC_WEAK_FUNC(sub_82392178);
PPC_FUNC_IMPL(__imp__sub_82392178) {
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x8238aa00
	sub_8238AA00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823921A4"))) PPC_WEAK_FUNC(sub_823921A4);
PPC_FUNC_IMPL(__imp__sub_823921A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823921A8"))) PPC_WEAK_FUNC(sub_823921A8);
PPC_FUNC_IMPL(__imp__sub_823921A8) {
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
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// bl 0x82391d38
	sub_82391D38(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823921D0"))) PPC_WEAK_FUNC(sub_823921D0);
PPC_FUNC_IMPL(__imp__sub_823921D0) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x8238c1f8
	sub_8238C1F8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392220"))) PPC_WEAK_FUNC(sub_82392220);
PPC_FUNC_IMPL(__imp__sub_82392220) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82391cd8
	sub_82391CD8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392270"))) PPC_WEAK_FUNC(sub_82392270);
PPC_FUNC_IMPL(__imp__sub_82392270) {
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
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// clrlwi. r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823922b4
	if (cr0.eq) goto loc_823922B4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823922B4:
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

__attribute__((alias("__imp__sub_823922D0"))) PPC_WEAK_FUNC(sub_823922D0);
PPC_FUNC_IMPL(__imp__sub_823922D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,17000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 17000);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823922f8
	if (!cr6.eq) goto loc_823922F8;
	// bl 0x82391f98
	sub_82391F98(ctx, base);
	// stw r3,17000(r31)
	PPC_STORE_U32(r31.u32 + 17000, ctx.r3.u32);
loc_823922F8:
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

__attribute__((alias("__imp__sub_8239230C"))) PPC_WEAK_FUNC(sub_8239230C);
PPC_FUNC_IMPL(__imp__sub_8239230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392310"))) PPC_WEAK_FUNC(sub_82392310);
PPC_FUNC_IMPL(__imp__sub_82392310) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,17000(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 17000);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82392338
	if (!cr6.eq) goto loc_82392338;
	// bl 0x82391f98
	sub_82391F98(ctx, base);
	// stw r3,17000(r31)
	PPC_STORE_U32(r31.u32 + 17000, ctx.r3.u32);
loc_82392338:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
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

__attribute__((alias("__imp__sub_82392350"))) PPC_WEAK_FUNC(sub_82392350);
PPC_FUNC_IMPL(__imp__sub_82392350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// b 0x821a7578
	sub_821A7578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82392364"))) PPC_WEAK_FUNC(sub_82392364);
PPC_FUNC_IMPL(__imp__sub_82392364) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392368"))) PPC_WEAK_FUNC(sub_82392368);
PPC_FUNC_IMPL(__imp__sub_82392368) {
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
	// lwz r16,23320(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23320);
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
	// bl 0x823878b0
	sub_823878B0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82390038
	sub_82390038(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,23156
	ctx.r10.s64 = r11.s64 + 23156;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f13,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lfs f0,22832(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22832);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f12,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,64(r30)
	PPC_STORE_U8(r30.u32 + 64, ctx.r10.u8);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
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

__attribute__((alias("__imp__sub_82392370"))) PPC_WEAK_FUNC(sub_82392370);
PPC_FUNC_IMPL(__imp__sub_82392370) {
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
	// bl 0x823878b0
	sub_823878B0(ctx, base);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82390038
	sub_82390038(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r11,23156
	ctx.r10.s64 = r11.s64 + 23156;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f13,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lfs f0,22832(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22832);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// lfs f12,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,24(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f0,28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 28, temp.u32);
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r11,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r11.u32);
	// stw r11,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r11.u32);
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r11,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,64(r30)
	PPC_STORE_U8(r30.u32 + 64, ctx.r10.u8);
	// stw r11,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r11.u32);
	// stw r11,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r11.u32);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
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

__attribute__((alias("__imp__sub_82392424"))) PPC_WEAK_FUNC(sub_82392424);
PPC_FUNC_IMPL(__imp__sub_82392424) {
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
	// bl 0x82387a00
	sub_82387A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8239244C"))) PPC_WEAK_FUNC(sub_8239244C);
PPC_FUNC_IMPL(__imp__sub_8239244C) {
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
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x8238c388
	sub_8238C388(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392478"))) PPC_WEAK_FUNC(sub_82392478);
PPC_FUNC_IMPL(__imp__sub_82392478) {
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x8238aa00
	sub_8238AA00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823924A4"))) PPC_WEAK_FUNC(sub_823924A4);
PPC_FUNC_IMPL(__imp__sub_823924A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823924A8"))) PPC_WEAK_FUNC(sub_823924A8);
PPC_FUNC_IMPL(__imp__sub_823924A8) {
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
	// lwz r16,23376(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23376);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82392544
	if (cr0.eq) goto loc_82392544;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823925a8
	if (cr6.eq) goto loc_823925A8;
loc_82392510:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82392510
	if (cr6.lt) goto loc_82392510;
	// b 0x823925a8
	goto loc_823925A8;
loc_82392544:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823921d0
	sub_823921D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82391e58
	sub_82391E58(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823925a8
	if (cr6.eq) goto loc_823925A8;
loc_82392564:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82390ec0
	sub_82390EC0(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82391d38
	sub_82391D38(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82390fb8
	sub_82390FB8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82392564
	if (cr6.lt) goto loc_82392564;
loc_823925A8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823924B0"))) PPC_WEAK_FUNC(sub_823924B0);
PPC_FUNC_IMPL(__imp__sub_823924B0) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82392544
	if (cr0.eq) goto loc_82392544;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823925a8
	if (cr6.eq) goto loc_823925A8;
loc_82392510:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82392510
	if (cr6.lt) goto loc_82392510;
	// b 0x823925a8
	goto loc_823925A8;
loc_82392544:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823921d0
	sub_823921D0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82391e58
	sub_82391E58(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823925a8
	if (cr6.eq) goto loc_823925A8;
loc_82392564:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82390ec0
	sub_82390EC0(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82391d38
	sub_82391D38(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82390fb8
	sub_82390FB8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82392564
	if (cr6.lt) goto loc_82392564;
loc_823925A8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823925B4"))) PPC_WEAK_FUNC(sub_823925B4);
PPC_FUNC_IMPL(__imp__sub_823925B4) {
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
	// bl 0x82390fb8
	sub_82390FB8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823925DC"))) PPC_WEAK_FUNC(sub_823925DC);
PPC_FUNC_IMPL(__imp__sub_823925DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823925E0"))) PPC_WEAK_FUNC(sub_823925E0);
PPC_FUNC_IMPL(__imp__sub_823925E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x82392618
	goto loc_82392618;
loc_82392600:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82392614
	if (cr6.eq) goto loc_82392614;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82392270
	sub_82392270(ctx, base);
loc_82392614:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_82392618:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82392600
	if (!cr6.eq) goto loc_82392600;
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

__attribute__((alias("__imp__sub_82392638"))) PPC_WEAK_FUNC(sub_82392638);
PPC_FUNC_IMPL(__imp__sub_82392638) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x823925e0
	sub_823925E0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_8239268C"))) PPC_WEAK_FUNC(sub_8239268C);
PPC_FUNC_IMPL(__imp__sub_8239268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392690"))) PPC_WEAK_FUNC(sub_82392690);
PPC_FUNC_IMPL(__imp__sub_82392690) {
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
	// lwz r16,23448(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23448);
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
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82391868
	sub_82391868(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82392704
	if (!cr6.lt) goto loc_82392704;
loc_823926CC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823926cc
	if (cr6.lt) goto loc_823926CC;
loc_82392704:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82392698"))) PPC_WEAK_FUNC(sub_82392698);
PPC_FUNC_IMPL(__imp__sub_82392698) {
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
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82391868
	sub_82391868(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82392704
	if (!cr6.lt) goto loc_82392704;
loc_823926CC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823926cc
	if (cr6.lt) goto loc_823926CC;
loc_82392704:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82392710"))) PPC_WEAK_FUNC(sub_82392710);
PPC_FUNC_IMPL(__imp__sub_82392710) {
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
	// bl 0x82392638
	sub_82392638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392738"))) PPC_WEAK_FUNC(sub_82392738);
PPC_FUNC_IMPL(__imp__sub_82392738) {
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
	// lwz r16,23504(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23504);
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
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823927d4
	if (!cr6.gt) goto loc_823927D4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82391868
	sub_82391868(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823927a4
	if (!cr6.lt) goto loc_823927A4;
loc_8239277C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x8239277c
	if (cr6.lt) goto loc_8239277C;
loc_823927A4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82392638
	sub_82392638(ctx, base);
loc_823927D4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82392740"))) PPC_WEAK_FUNC(sub_82392740);
PPC_FUNC_IMPL(__imp__sub_82392740) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823927d4
	if (!cr6.gt) goto loc_823927D4;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82391868
	sub_82391868(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823927a4
	if (!cr6.lt) goto loc_823927A4;
loc_8239277C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x8239277c
	if (cr6.lt) goto loc_8239277C;
loc_823927A4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82392638
	sub_82392638(ctx, base);
loc_823927D4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823927DC"))) PPC_WEAK_FUNC(sub_823927DC);
PPC_FUNC_IMPL(__imp__sub_823927DC) {
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
	// bl 0x82392638
	sub_82392638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392804"))) PPC_WEAK_FUNC(sub_82392804);
PPC_FUNC_IMPL(__imp__sub_82392804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392808"))) PPC_WEAK_FUNC(sub_82392808);
PPC_FUNC_IMPL(__imp__sub_82392808) {
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
	// lwz r16,23576(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23576);
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823928d4
	if (cr6.lt) goto loc_823928D4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82392848
	if (cr6.eq) goto loc_82392848;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82392848:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82391868
	sub_82391868(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8239288c
	if (!cr6.lt) goto loc_8239288C;
loc_82392864:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82392864
	if (cr6.lt) goto loc_82392864;
loc_8239288C:
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82392638
	sub_82392638(ctx, base);
	// b 0x823928f4
	goto loc_823928F4;
loc_823928D4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_823928F4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82392810"))) PPC_WEAK_FUNC(sub_82392810);
PPC_FUNC_IMPL(__imp__sub_82392810) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823928d4
	if (cr6.lt) goto loc_823928D4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82392848
	if (cr6.eq) goto loc_82392848;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82392848:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82391868
	sub_82391868(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8239288c
	if (!cr6.lt) goto loc_8239288C;
loc_82392864:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82392864
	if (cr6.lt) goto loc_82392864;
loc_8239288C:
	// mulli r11,r29,12
	r11.s64 = r29.s64 * 12;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82392638
	sub_82392638(ctx, base);
	// b 0x823928f4
	goto loc_823928F4;
loc_823928D4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82391f28
	sub_82391F28(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_823928F4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823928FC"))) PPC_WEAK_FUNC(sub_823928FC);
PPC_FUNC_IMPL(__imp__sub_823928FC) {
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
	// bl 0x82392638
	sub_82392638(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392924"))) PPC_WEAK_FUNC(sub_82392924);
PPC_FUNC_IMPL(__imp__sub_82392924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392928"))) PPC_WEAK_FUNC(sub_82392928);
PPC_FUNC_IMPL(__imp__sub_82392928) {
	PPC_FUNC_PROLOGUE();
	// b 0x82392638
	sub_82392638(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8239292C"))) PPC_WEAK_FUNC(sub_8239292C);
PPC_FUNC_IMPL(__imp__sub_8239292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392930"))) PPC_WEAK_FUNC(sub_82392930);
PPC_FUNC_IMPL(__imp__sub_82392930) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,23672(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23672);
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
	// bl 0x82387940
	sub_82387940(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// addi r11,r11,23644
	r11.s64 = r11.s64 + 23644;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// bl 0x82392698
	sub_82392698(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82392938"))) PPC_WEAK_FUNC(sub_82392938);
PPC_FUNC_IMPL(__imp__sub_82392938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// bl 0x82387940
	sub_82387940(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r4,r29,20
	ctx.r4.s64 = r29.s64 + 20;
	// addi r11,r11,23644
	r11.s64 = r11.s64 + 23644;
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// bl 0x82392698
	sub_82392698(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82392994"))) PPC_WEAK_FUNC(sub_82392994);
PPC_FUNC_IMPL(__imp__sub_82392994) {
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
	// bl 0x82387a00
	sub_82387A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823929BC"))) PPC_WEAK_FUNC(sub_823929BC);
PPC_FUNC_IMPL(__imp__sub_823929BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823929C0"))) PPC_WEAK_FUNC(sub_823929C0);
PPC_FUNC_IMPL(__imp__sub_823929C0) {
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
	// lwz r16,23728(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23728);
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
	// addi r11,r11,23644
	r11.s64 = r11.s64 + 23644;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82392638
	sub_82392638(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82387a00
	sub_82387A00(ctx, base);
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

__attribute__((alias("__imp__sub_823929C8"))) PPC_WEAK_FUNC(sub_823929C8);
PPC_FUNC_IMPL(__imp__sub_823929C8) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,23644
	r11.s64 = r11.s64 + 23644;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,20
	ctx.r3.s64 = r30.s64 + 20;
	// bl 0x82392638
	sub_82392638(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82387a00
	sub_82387A00(ctx, base);
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

__attribute__((alias("__imp__sub_82392A1C"))) PPC_WEAK_FUNC(sub_82392A1C);
PPC_FUNC_IMPL(__imp__sub_82392A1C) {
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
	// bl 0x82387a00
	sub_82387A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392A44"))) PPC_WEAK_FUNC(sub_82392A44);
PPC_FUNC_IMPL(__imp__sub_82392A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392A48"))) PPC_WEAK_FUNC(sub_82392A48);
PPC_FUNC_IMPL(__imp__sub_82392A48) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82392698
	sub_82392698(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82392638
	sub_82392638(ctx, base);
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

__attribute__((alias("__imp__sub_82392AB4"))) PPC_WEAK_FUNC(sub_82392AB4);
PPC_FUNC_IMPL(__imp__sub_82392AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392AB8"))) PPC_WEAK_FUNC(sub_82392AB8);
PPC_FUNC_IMPL(__imp__sub_82392AB8) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82392638
	sub_82392638(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392B08"))) PPC_WEAK_FUNC(sub_82392B08);
PPC_FUNC_IMPL(__imp__sub_82392B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23792(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23792);
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82392b38
	if (cr6.eq) goto loc_82392B38;
	// bl 0x82392938
	sub_82392938(ctx, base);
loc_82392B38:
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

__attribute__((alias("__imp__sub_82392B10"))) PPC_WEAK_FUNC(sub_82392B10);
PPC_FUNC_IMPL(__imp__sub_82392B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82392b38
	if (cr6.eq) goto loc_82392B38;
	// bl 0x82392938
	sub_82392938(ctx, base);
loc_82392B38:
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

__attribute__((alias("__imp__sub_82392B4C"))) PPC_WEAK_FUNC(sub_82392B4C);
PPC_FUNC_IMPL(__imp__sub_82392B4C) {
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

__attribute__((alias("__imp__sub_82392B78"))) PPC_WEAK_FUNC(sub_82392B78);
PPC_FUNC_IMPL(__imp__sub_82392B78) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23864(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23864);
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823878b0
	sub_823878B0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// addi r10,r11,23644
	ctx.r10.s64 = r11.s64 + 23644;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82392c0c
	if (!cr6.eq) goto loc_82392C0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82392740
	sub_82392740(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8218e578
	sub_8218E578(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82392810
	sub_82392810(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82392C0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82392B80"))) PPC_WEAK_FUNC(sub_82392B80);
PPC_FUNC_IMPL(__imp__sub_82392B80) {
	PPC_FUNC_PROLOGUE();
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// bl 0x823878b0
	sub_823878B0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r30,20
	r29.s64 = r30.s64 + 20;
	// stw r28,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r28.u32);
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// addi r10,r11,23644
	ctx.r10.s64 = r11.s64 + 23644;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x82392c0c
	if (!cr6.eq) goto loc_82392C0C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82392740
	sub_82392740(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x8218e578
	sub_8218E578(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82392810
	sub_82392810(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82392C0C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82392C18"))) PPC_WEAK_FUNC(sub_82392C18);
PPC_FUNC_IMPL(__imp__sub_82392C18) {
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
	// bl 0x82387a00
	sub_82387A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392C40"))) PPC_WEAK_FUNC(sub_82392C40);
PPC_FUNC_IMPL(__imp__sub_82392C40) {
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
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82392928
	sub_82392928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392C6C"))) PPC_WEAK_FUNC(sub_82392C6C);
PPC_FUNC_IMPL(__imp__sub_82392C6C) {
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

__attribute__((alias("__imp__sub_82392C94"))) PPC_WEAK_FUNC(sub_82392C94);
PPC_FUNC_IMPL(__imp__sub_82392C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392C98"))) PPC_WEAK_FUNC(sub_82392C98);
PPC_FUNC_IMPL(__imp__sub_82392C98) {
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
	// bl 0x823929c8
	sub_823929C8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82392cc8
	if (cr0.eq) goto loc_82392CC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82392CC8:
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

__attribute__((alias("__imp__sub_82392CE4"))) PPC_WEAK_FUNC(sub_82392CE4);
PPC_FUNC_IMPL(__imp__sub_82392CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392CE8"))) PPC_WEAK_FUNC(sub_82392CE8);
PPC_FUNC_IMPL(__imp__sub_82392CE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x82392d38
	if (cr6.eq) goto loc_82392D38;
	// bl 0x82387a80
	sub_82387A80(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lfs f0,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// bl 0x82392a48
	sub_82392A48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82392D38:
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

__attribute__((alias("__imp__sub_82392D50"))) PPC_WEAK_FUNC(sub_82392D50);
PPC_FUNC_IMPL(__imp__sub_82392D50) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82391938
	sub_82391938(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x82392da8
	if (cr6.eq) goto loc_82392DA8;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// rlwinm r10,r3,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82392ce8
	sub_82392CE8(ctx, base);
loc_82392DA8:
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

__attribute__((alias("__imp__sub_82392DC0"))) PPC_WEAK_FUNC(sub_82392DC0);
PPC_FUNC_IMPL(__imp__sub_82392DC0) {
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
	// lwz r16,23944(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 23944);
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82392e8c
	if (cr6.lt) goto loc_82392E8C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82392e00
	if (cr6.eq) goto loc_82392E00;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82392E00:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823918d0
	sub_823918D0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82392e44
	if (!cr6.lt) goto loc_82392E44;
loc_82392E1C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82392b10
	sub_82392B10(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82392e1c
	if (cr6.lt) goto loc_82392E1C;
loc_82392E44:
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82392b10
	sub_82392B10(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82391cd8
	sub_82391CD8(ctx, base);
	// b 0x82392eac
	goto loc_82392EAC;
loc_82392E8C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82392b10
	sub_82392B10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82392EAC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82392DC8"))) PPC_WEAK_FUNC(sub_82392DC8);
PPC_FUNC_IMPL(__imp__sub_82392DC8) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82392e8c
	if (cr6.lt) goto loc_82392E8C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82392e00
	if (cr6.eq) goto loc_82392E00;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82392E00:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823918d0
	sub_823918D0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82392e44
	if (!cr6.lt) goto loc_82392E44;
loc_82392E1C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82392b10
	sub_82392B10(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82392e1c
	if (cr6.lt) goto loc_82392E1C;
loc_82392E44:
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82392b10
	sub_82392B10(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82391cd8
	sub_82391CD8(ctx, base);
	// b 0x82392eac
	goto loc_82392EAC;
loc_82392E8C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82392b10
	sub_82392B10(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82392EAC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82392EB4"))) PPC_WEAK_FUNC(sub_82392EB4);
PPC_FUNC_IMPL(__imp__sub_82392EB4) {
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
	// bl 0x82391cd8
	sub_82391CD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82392EDC"))) PPC_WEAK_FUNC(sub_82392EDC);
PPC_FUNC_IMPL(__imp__sub_82392EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82392EE0"))) PPC_WEAK_FUNC(sub_82392EE0);
PPC_FUNC_IMPL(__imp__sub_82392EE0) {
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
	// lwz r16,24016(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24016);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82392f70
	if (cr0.eq) goto loc_82392F70;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82392fdc
	if (cr6.eq) goto loc_82392FDC;
loc_82392F48:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82383c80
	sub_82383C80(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82392f48
	if (cr6.lt) goto loc_82392F48;
	// b 0x82392fdc
	goto loc_82392FDC;
loc_82392F70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82392ab8
	sub_82392AB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82392740
	sub_82392740(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82392fdc
	if (cr6.eq) goto loc_82392FDC;
loc_82392F94:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218e578
	sub_8218E578(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82383c80
	sub_82383C80(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82392810
	sub_82392810(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// blt cr6,0x82392f94
	if (cr6.lt) goto loc_82392F94;
loc_82392FDC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82392EE8"))) PPC_WEAK_FUNC(sub_82392EE8);
PPC_FUNC_IMPL(__imp__sub_82392EE8) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82392f70
	if (cr0.eq) goto loc_82392F70;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82392fdc
	if (cr6.eq) goto loc_82392FDC;
loc_82392F48:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x82383c80
	sub_82383C80(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x82392f48
	if (cr6.lt) goto loc_82392F48;
	// b 0x82392fdc
	goto loc_82392FDC;
loc_82392F70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82392ab8
	sub_82392AB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82392740
	sub_82392740(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r28,r30
	r28.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82392fdc
	if (cr6.eq) goto loc_82392FDC;
loc_82392F94:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218e578
	sub_8218E578(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82383c80
	sub_82383C80(ctx, base);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82392810
	sub_82392810(ctx, base);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// blt cr6,0x82392f94
	if (cr6.lt) goto loc_82392F94;
loc_82392FDC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82392FE8"))) PPC_WEAK_FUNC(sub_82392FE8);
PPC_FUNC_IMPL(__imp__sub_82392FE8) {
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

__attribute__((alias("__imp__sub_82393010"))) PPC_WEAK_FUNC(sub_82393010);
PPC_FUNC_IMPL(__imp__sub_82393010) {
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
	// lwz r16,24088(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24088);
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
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823930ac
	if (!cr6.gt) goto loc_823930AC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823918d0
	sub_823918D0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8239307c
	if (!cr6.lt) goto loc_8239307C;
loc_82393054:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82392b10
	sub_82392B10(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82393054
	if (cr6.lt) goto loc_82393054;
loc_8239307C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82391cd8
	sub_82391CD8(ctx, base);
loc_823930AC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82393018"))) PPC_WEAK_FUNC(sub_82393018);
PPC_FUNC_IMPL(__imp__sub_82393018) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823930ac
	if (!cr6.gt) goto loc_823930AC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823918d0
	sub_823918D0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8239307c
	if (!cr6.lt) goto loc_8239307C;
loc_82393054:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,5,0,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82392b10
	sub_82392B10(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82393054
	if (cr6.lt) goto loc_82393054;
loc_8239307C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82391cd8
	sub_82391CD8(ctx, base);
loc_823930AC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823930B4"))) PPC_WEAK_FUNC(sub_823930B4);
PPC_FUNC_IMPL(__imp__sub_823930B4) {
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
	// bl 0x82391cd8
	sub_82391CD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823930DC"))) PPC_WEAK_FUNC(sub_823930DC);
PPC_FUNC_IMPL(__imp__sub_823930DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823930E0"))) PPC_WEAK_FUNC(sub_823930E0);
PPC_FUNC_IMPL(__imp__sub_823930E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24160(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24160);
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239311c
	if (cr0.eq) goto loc_8239311C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82392b80
	sub_82392B80(ctx, base);
	// b 0x82393120
	goto loc_82393120;
loc_8239311C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82393120:
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

__attribute__((alias("__imp__sub_823930E8"))) PPC_WEAK_FUNC(sub_823930E8);
PPC_FUNC_IMPL(__imp__sub_823930E8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239311c
	if (cr0.eq) goto loc_8239311C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82392b80
	sub_82392B80(ctx, base);
	// b 0x82393120
	goto loc_82393120;
loc_8239311C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82393120:
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

__attribute__((alias("__imp__sub_82393134"))) PPC_WEAK_FUNC(sub_82393134);
PPC_FUNC_IMPL(__imp__sub_82393134) {
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

__attribute__((alias("__imp__sub_8239315C"))) PPC_WEAK_FUNC(sub_8239315C);
PPC_FUNC_IMPL(__imp__sub_8239315C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393160"))) PPC_WEAK_FUNC(sub_82393160);
PPC_FUNC_IMPL(__imp__sub_82393160) {
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
	// lwz r16,24264(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24264);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x823931f0
	if (cr0.eq) goto loc_823931F0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24208
	ctx.r4.s64 = r11.s64 + 24208;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// lwz r6,16940(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16940);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x823931cc
	if (!cr6.eq) goto loc_823931CC;
	// bl 0x82387bb0
	sub_82387BB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,16940(r30)
	PPC_STORE_U32(r30.u32 + 16940, ctx.r6.u32);
loc_823931CC:
	// lis r11,-32199
	r11.s64 = -2110193664;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r8,r11,12520
	ctx.r8.s64 = r11.s64 + 12520;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823931f4
	goto loc_823931F4;
loc_823931F0:
	// li r30,0
	r30.s64 = 0;
loc_823931F4:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82393204
	if (cr0.eq) goto loc_82393204;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82393204:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82393168"))) PPC_WEAK_FUNC(sub_82393168);
PPC_FUNC_IMPL(__imp__sub_82393168) {
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
	// li r28,0
	r28.s64 = 0;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// beq 0x823931f0
	if (cr0.eq) goto loc_823931F0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,24208
	ctx.r4.s64 = r11.s64 + 24208;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// li r28,1
	r28.s64 = 1;
	// lwz r6,16940(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16940);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x823931cc
	if (!cr6.eq) goto loc_823931CC;
	// bl 0x82387bb0
	sub_82387BB0(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r6,16940(r30)
	PPC_STORE_U32(r30.u32 + 16940, ctx.r6.u32);
loc_823931CC:
	// lis r11,-32199
	r11.s64 = -2110193664;
	// li r7,32
	ctx.r7.s64 = 32;
	// addi r8,r11,12520
	ctx.r8.s64 = r11.s64 + 12520;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8238f0c0
	sub_8238F0C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823931f4
	goto loc_823931F4;
loc_823931F0:
	// li r30,0
	r30.s64 = 0;
loc_823931F4:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82393204
	if (cr0.eq) goto loc_82393204;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82393204:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82393210"))) PPC_WEAK_FUNC(sub_82393210);
PPC_FUNC_IMPL(__imp__sub_82393210) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
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

__attribute__((alias("__imp__sub_82393238"))) PPC_WEAK_FUNC(sub_82393238);
PPC_FUNC_IMPL(__imp__sub_82393238) {
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
	// beq 0x82393268
	if (cr0.eq) goto loc_82393268;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ef48
	sub_8218EF48(ctx, base);
loc_82393268:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393278"))) PPC_WEAK_FUNC(sub_82393278);
PPC_FUNC_IMPL(__imp__sub_82393278) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82391938
	sub_82391938(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x823932c8
	if (!cr6.eq) goto loc_823932C8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,68
	ctx.r3.s64 = r30.s64 + 68;
	// bl 0x82392dc8
	sub_82392DC8(ctx, base);
loc_823932C8:
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

__attribute__((alias("__imp__sub_823932E0"))) PPC_WEAK_FUNC(sub_823932E0);
PPC_FUNC_IMPL(__imp__sub_823932E0) {
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
	// lwz r16,24344(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24344);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239337c
	if (cr0.eq) goto loc_8239337C;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823933e4
	if (cr6.eq) goto loc_823933E4;
loc_82393348:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82393348
	if (cr6.lt) goto loc_82393348;
	// b 0x823933e4
	goto loc_823933E4;
loc_8239337C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82392220
	sub_82392220(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82393018
	sub_82393018(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823933e4
	if (cr6.eq) goto loc_823933E4;
loc_8239339C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82392b80
	sub_82392B80(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82392dc8
	sub_82392DC8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823929c8
	sub_823929C8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8239339c
	if (cr6.lt) goto loc_8239339C;
loc_823933E4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823932E8"))) PPC_WEAK_FUNC(sub_823932E8);
PPC_FUNC_IMPL(__imp__sub_823932E8) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8239337c
	if (cr0.eq) goto loc_8239337C;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823933e4
	if (cr6.eq) goto loc_823933E4;
loc_82393348:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,32
	r30.s64 = r30.s64 + 32;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82393348
	if (cr6.lt) goto loc_82393348;
	// b 0x823933e4
	goto loc_823933E4;
loc_8239337C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82392220
	sub_82392220(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82393018
	sub_82393018(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823933e4
	if (cr6.eq) goto loc_823933E4;
loc_8239339C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82392b80
	sub_82392B80(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82392dc8
	sub_82392DC8(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823929c8
	sub_823929C8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8239339c
	if (cr6.lt) goto loc_8239339C;
loc_823933E4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823933F0"))) PPC_WEAK_FUNC(sub_823933F0);
PPC_FUNC_IMPL(__imp__sub_823933F0) {
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
	// bl 0x823929c8
	sub_823929C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82393418"))) PPC_WEAK_FUNC(sub_82393418);
PPC_FUNC_IMPL(__imp__sub_82393418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,16996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16996);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82393440
	if (!cr6.eq) goto loc_82393440;
	// bl 0x82393168
	sub_82393168(ctx, base);
	// stw r3,16996(r31)
	PPC_STORE_U32(r31.u32 + 16996, ctx.r3.u32);
loc_82393440:
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

__attribute__((alias("__imp__sub_82393454"))) PPC_WEAK_FUNC(sub_82393454);
PPC_FUNC_IMPL(__imp__sub_82393454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393458"))) PPC_WEAK_FUNC(sub_82393458);
PPC_FUNC_IMPL(__imp__sub_82393458) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,16996(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16996);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82393480
	if (!cr6.eq) goto loc_82393480;
	// bl 0x82393168
	sub_82393168(ctx, base);
	// stw r3,16996(r31)
	PPC_STORE_U32(r31.u32 + 16996, ctx.r3.u32);
loc_82393480:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
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

__attribute__((alias("__imp__sub_82393498"))) PPC_WEAK_FUNC(sub_82393498);
PPC_FUNC_IMPL(__imp__sub_82393498) {
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
	// bl 0x82387d40
	sub_82387D40(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r3,16996(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16996);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823934c8
	if (!cr6.eq) goto loc_823934C8;
	// bl 0x82393168
	sub_82393168(ctx, base);
	// stw r3,16996(r29)
	PPC_STORE_U32(r29.u32 + 16996, ctx.r3.u32);
loc_823934C8:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r29,r31,12
	r29.s64 = r31.s64 + 12;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x823861f8
	sub_823861F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823861f8
	sub_823861F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82386318
	sub_82386318(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// bl 0x82392ee8
	sub_82392EE8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82393524"))) PPC_WEAK_FUNC(sub_82393524);
PPC_FUNC_IMPL(__imp__sub_82393524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393528"))) PPC_WEAK_FUNC(sub_82393528);
PPC_FUNC_IMPL(__imp__sub_82393528) {
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
	// bl 0x82387d40
	sub_82387D40(ctx, base);
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r3,17000(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 17000);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82393558
	if (!cr6.eq) goto loc_82393558;
	// bl 0x82391f98
	sub_82391F98(ctx, base);
	// stw r3,17000(r29)
	PPC_STORE_U32(r29.u32 + 17000, ctx.r3.u32);
loc_82393558:
	// bl 0x8238ede8
	sub_8238EDE8(ctx, base);
	// sth r3,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r3.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r1,84
	r29.s64 = ctx.r1.s64 + 84;
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82386318
	sub_82386318(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82386318
	sub_82386318(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823861f8
	sub_823861F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x823924b0
	sub_823924B0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// blt cr6,0x823935c4
	if (cr6.lt) goto loc_823935C4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,68
	ctx.r3.s64 = r31.s64 + 68;
	// bl 0x823932e8
	sub_823932E8(ctx, base);
loc_823935C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823935CC"))) PPC_WEAK_FUNC(sub_823935CC);
PPC_FUNC_IMPL(__imp__sub_823935CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823935D0"))) PPC_WEAK_FUNC(sub_823935D0);
PPC_FUNC_IMPL(__imp__sub_823935D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 84);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823935D8"))) PPC_WEAK_FUNC(sub_823935D8);
PPC_FUNC_IMPL(__imp__sub_823935D8) {
	PPC_FUNC_PROLOGUE();
	// stb r4,84(r3)
	PPC_STORE_U8(ctx.r3.u32 + 84, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823935E0"))) PPC_WEAK_FUNC(sub_823935E0);
PPC_FUNC_IMPL(__imp__sub_823935E0) {
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
	// bl 0x82392370
	sub_82392370(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,24412
	r11.s64 = r11.s64 + 24412;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r9,84(r31)
	PPC_STORE_U8(r31.u32 + 84, ctx.r9.u8);
	// stb r10,64(r31)
	PPC_STORE_U8(r31.u32 + 64, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82393630"))) PPC_WEAK_FUNC(sub_82393630);
PPC_FUNC_IMPL(__imp__sub_82393630) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82393670
	if (cr0.eq) goto loc_82393670;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_82393670:
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

__attribute__((alias("__imp__sub_82393684"))) PPC_WEAK_FUNC(sub_82393684);
PPC_FUNC_IMPL(__imp__sub_82393684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82393688"))) PPC_WEAK_FUNC(sub_82393688);
PPC_FUNC_IMPL(__imp__sub_82393688) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24472(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24472);
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
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823936c0
	if (cr0.eq) goto loc_823936C0;
	// bl 0x823935e0
	sub_823935E0(ctx, base);
	// b 0x823936c4
	goto loc_823936C4;
loc_823936C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823936C4:
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

__attribute__((alias("__imp__sub_82393690"))) PPC_WEAK_FUNC(sub_82393690);
PPC_FUNC_IMPL(__imp__sub_82393690) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823936c0
	if (cr0.eq) goto loc_823936C0;
	// bl 0x823935e0
	sub_823935E0(ctx, base);
	// b 0x823936c4
	goto loc_823936C4;
loc_823936C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823936C4:
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

__attribute__((alias("__imp__sub_823936D8"))) PPC_WEAK_FUNC(sub_823936D8);
PPC_FUNC_IMPL(__imp__sub_823936D8) {
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

__attribute__((alias("__imp__sub_82393700"))) PPC_WEAK_FUNC(sub_82393700);
PPC_FUNC_IMPL(__imp__sub_82393700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,24528(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24528);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239373c
	if (cr0.eq) goto loc_8239373C;
	// bl 0x823935e0
	sub_823935E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82393740
	goto loc_82393740;
loc_8239373C:
	// li r30,0
	r30.s64 = 0;
loc_82393740:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82393708"))) PPC_WEAK_FUNC(sub_82393708);
PPC_FUNC_IMPL(__imp__sub_82393708) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8239373c
	if (cr0.eq) goto loc_8239373C;
	// bl 0x823935e0
	sub_823935E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82393740
	goto loc_82393740;
loc_8239373C:
	// li r30,0
	r30.s64 = 0;
loc_82393740:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

