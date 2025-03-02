#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826A94EC"))) PPC_WEAK_FUNC(sub_826A94EC);
PPC_FUNC_IMPL(__imp__sub_826A94EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A94F0"))) PPC_WEAK_FUNC(sub_826A94F0);
PPC_FUNC_IMPL(__imp__sub_826A94F0) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,10624
	r30.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A9544"))) PPC_WEAK_FUNC(sub_826A9544);
PPC_FUNC_IMPL(__imp__sub_826A9544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9548"))) PPC_WEAK_FUNC(sub_826A9548);
PPC_FUNC_IMPL(__imp__sub_826A9548) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,10624
	r30.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A959C"))) PPC_WEAK_FUNC(sub_826A959C);
PPC_FUNC_IMPL(__imp__sub_826A959C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A95A0"))) PPC_WEAK_FUNC(sub_826A95A0);
PPC_FUNC_IMPL(__imp__sub_826A95A0) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,10624
	r30.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A95F4"))) PPC_WEAK_FUNC(sub_826A95F4);
PPC_FUNC_IMPL(__imp__sub_826A95F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A95F8"))) PPC_WEAK_FUNC(sub_826A95F8);
PPC_FUNC_IMPL(__imp__sub_826A95F8) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b31e0
	sub_826B31E0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826A9650"))) PPC_WEAK_FUNC(sub_826A9650);
PPC_FUNC_IMPL(__imp__sub_826A9650) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A96AC"))) PPC_WEAK_FUNC(sub_826A96AC);
PPC_FUNC_IMPL(__imp__sub_826A96AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A96B0"))) PPC_WEAK_FUNC(sub_826A96B0);
PPC_FUNC_IMPL(__imp__sub_826A96B0) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b3250
	sub_826B3250(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_826A9708"))) PPC_WEAK_FUNC(sub_826A9708);
PPC_FUNC_IMPL(__imp__sub_826A9708) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A9764"))) PPC_WEAK_FUNC(sub_826A9764);
PPC_FUNC_IMPL(__imp__sub_826A9764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9768"))) PPC_WEAK_FUNC(sub_826A9768);
PPC_FUNC_IMPL(__imp__sub_826A9768) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b4090
	sub_826B4090(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A97B0"))) PPC_WEAK_FUNC(sub_826A97B0);
PPC_FUNC_IMPL(__imp__sub_826A97B0) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,10624
	r30.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A9804"))) PPC_WEAK_FUNC(sub_826A9804);
PPC_FUNC_IMPL(__imp__sub_826A9804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9808"))) PPC_WEAK_FUNC(sub_826A9808);
PPC_FUNC_IMPL(__imp__sub_826A9808) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_826A986C"))) PPC_WEAK_FUNC(sub_826A986C);
PPC_FUNC_IMPL(__imp__sub_826A986C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9870"))) PPC_WEAK_FUNC(sub_826A9870);
PPC_FUNC_IMPL(__imp__sub_826A9870) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A98C4"))) PPC_WEAK_FUNC(sub_826A98C4);
PPC_FUNC_IMPL(__imp__sub_826A98C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A98C8"))) PPC_WEAK_FUNC(sub_826A98C8);
PPC_FUNC_IMPL(__imp__sub_826A98C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
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
}

__attribute__((alias("__imp__sub_826A993C"))) PPC_WEAK_FUNC(sub_826A993C);
PPC_FUNC_IMPL(__imp__sub_826A993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9940"))) PPC_WEAK_FUNC(sub_826A9940);
PPC_FUNC_IMPL(__imp__sub_826A9940) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,10624
	r30.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,-13144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826a9998
	if (cr6.eq) goto loc_826A9998;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
loc_826A9998:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x826a99b4
	if (!cr6.eq) goto loc_826A99B4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_826A99B4:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lis r10,-32140
	ctx.r10.s64 = -2106327040;
	// addi r11,r11,760
	r11.s64 = r11.s64 + 760;
	// addi r4,r10,764
	ctx.r4.s64 = ctx.r10.s64 + 764;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// bge cr6,0x826a99e8
	if (!cr6.lt) goto loc_826A99E8;
loc_826A99D0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826a99e8
	if (!cr6.eq) goto loc_826A99E8;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmplw cr6,r3,r4
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, xer);
	// blt cr6,0x826a99d0
	if (cr6.lt) goto loc_826A99D0;
loc_826A99E8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A9A14"))) PPC_WEAK_FUNC(sub_826A9A14);
PPC_FUNC_IMPL(__imp__sub_826A9A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9A18"))) PPC_WEAK_FUNC(sub_826A9A18);
PPC_FUNC_IMPL(__imp__sub_826A9A18) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,-13144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826a9a5c
	if (!cr6.eq) goto loc_826A9A5C;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a9a7c
	goto loc_826A9A7C;
loc_826A9A5C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826A9A7C:
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

__attribute__((alias("__imp__sub_826A9A94"))) PPC_WEAK_FUNC(sub_826A9A94);
PPC_FUNC_IMPL(__imp__sub_826A9A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9A98"))) PPC_WEAK_FUNC(sub_826A9A98);
PPC_FUNC_IMPL(__imp__sub_826A9A98) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,-13144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826a9ae4
	if (!cr6.eq) goto loc_826A9AE4;
loc_826A9AD4:
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x826a9afc
	goto loc_826A9AFC;
loc_826A9AE4:
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826a9ad4
	if (cr6.eq) goto loc_826A9AD4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A9AFC:
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

__attribute__((alias("__imp__sub_826A9B14"))) PPC_WEAK_FUNC(sub_826A9B14);
PPC_FUNC_IMPL(__imp__sub_826A9B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9B18"))) PPC_WEAK_FUNC(sub_826A9B18);
PPC_FUNC_IMPL(__imp__sub_826A9B18) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,-13144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826a9b60
	if (!cr6.eq) goto loc_826A9B60;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x826a9b74
	goto loc_826A9B74;
loc_826A9B60:
	// bl 0x826b19a0
	sub_826B19A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826A9B74:
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

__attribute__((alias("__imp__sub_826A9B8C"))) PPC_WEAK_FUNC(sub_826A9B8C);
PPC_FUNC_IMPL(__imp__sub_826A9B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9B90"))) PPC_WEAK_FUNC(sub_826A9B90);
PPC_FUNC_IMPL(__imp__sub_826A9B90) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826a9940
	sub_826A9940(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A9B98"))) PPC_WEAK_FUNC(sub_826A9B98);
PPC_FUNC_IMPL(__imp__sub_826A9B98) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b3f90
	sub_826B3F90(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826a9be0
	if (cr6.lt) goto loc_826A9BE0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_826A9BE0:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A9BF4"))) PPC_WEAK_FUNC(sub_826A9BF4);
PPC_FUNC_IMPL(__imp__sub_826A9BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9BF8"))) PPC_WEAK_FUNC(sub_826A9BF8);
PPC_FUNC_IMPL(__imp__sub_826A9BF8) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,10624
	r31.s64 = r11.s64 + 10624;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b4588
	sub_826B4588(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826a9c40
	if (cr6.lt) goto loc_826A9C40;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_826A9C40:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A9C54"))) PPC_WEAK_FUNC(sub_826A9C54);
PPC_FUNC_IMPL(__imp__sub_826A9C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9C58"))) PPC_WEAK_FUNC(sub_826A9C58);
PPC_FUNC_IMPL(__imp__sub_826A9C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,6
	r11.s64 = 6;
	// li r10,3750
	ctx.r10.s64 = 3750;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A9C70"))) PPC_WEAK_FUNC(sub_826A9C70);
PPC_FUNC_IMPL(__imp__sub_826A9C70) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bne 0x826a9cb0
	if (!cr0.eq) goto loc_826A9CB0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_826A9CB0:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A9CC4"))) PPC_WEAK_FUNC(sub_826A9CC4);
PPC_FUNC_IMPL(__imp__sub_826A9CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A9CC8"))) PPC_WEAK_FUNC(sub_826A9CC8);
PPC_FUNC_IMPL(__imp__sub_826A9CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A9CE4"))) PPC_WEAK_FUNC(sub_826A9CE4);
PPC_FUNC_IMPL(__imp__sub_826A9CE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A9CE8"))) PPC_WEAK_FUNC(sub_826A9CE8);
PPC_FUNC_IMPL(__imp__sub_826A9CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A9CF8"))) PPC_WEAK_FUNC(sub_826A9CF8);
PPC_FUNC_IMPL(__imp__sub_826A9CF8) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x826a9e4c
	if (cr6.eq) goto loc_826A9E4C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x826a9d3c
	if (cr6.eq) goto loc_826A9D3C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
loc_826A9D3C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823b5460
	sub_823B5460(ctx, base);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x826a9d70
	if (cr6.eq) goto loc_826A9D70;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826a9d84
	if (cr6.eq) goto loc_826A9D84;
loc_826A9D70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826A9D84:
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addis r10,r29,5
	ctx.r10.s64 = r29.s64 + 327680;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-17760
	ctx.r10.s64 = ctx.r10.s64 + -17760;
	// mr r8,r13
	ctx.r8.u64 = ctx.r13.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// addis r11,r29,5
	r11.s64 = r29.s64 + 327680;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// addi r11,r11,-17752
	r11.s64 = r11.s64 + -17752;
	// ld r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fdiv f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 / ctx.f13.f64;
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f0
	ctx.f11.f64 = double(f0.s64);
	// lfd f0,-26624(r9)
	f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -26624);
	// fmul f0,f11,f0
	f0.f64 = ctx.f11.f64 * f0.f64;
	// fdiv f0,f13,f0
	f0.f64 = ctx.f13.f64 / f0.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r27.u64);
	// std r27,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r27.u64);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826a9f10
	if (cr6.eq) goto loc_826A9F10;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x826a9f10
	if (!cr6.eq) goto loc_826A9F10;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826a9f10
	if (!cr6.eq) goto loc_826A9F10;
	// mr r11,r27
	r11.u64 = r27.u64;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
loc_826A9E4C:
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826a9e78
	if (cr6.eq) goto loc_826A9E78;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x826a9e98
	if (cr6.eq) goto loc_826A9E98;
loc_826A9E78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826a9e9c
	goto loc_826A9E9C;
loc_826A9E98:
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826A9E9C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r8,r13
	ctx.r8.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// lfs f13,108(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,17320(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17320);
	f0.f64 = double(temp.f32);
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
	// beq cr6,0x826a9f00
	if (cr6.eq) goto loc_826A9F00;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x826a9f00
	if (!cr6.eq) goto loc_826A9F00;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826a9f00
	if (!cr6.eq) goto loc_826A9F00;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826A9F00:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-26880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// stfs f0,0(r26)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r26.u32 + 0, temp.u32);
loc_826A9F10:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A9F20"))) PPC_WEAK_FUNC(sub_826A9F20);
PPC_FUNC_IMPL(__imp__sub_826A9F20) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x826aa0bc
	if (cr6.lt) goto loc_826AA0BC;
	// beq cr6,0x826aa010
	if (cr6.eq) goto loc_826AA010;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x826a9f68
	if (cr6.lt) goto loc_826A9F68;
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,87
	r26.u64 = r26.u64 | 87;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
loc_826A9F68:
	// lfs f31,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f31.f64 = double(temp.f32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826a9f98
	if (cr6.eq) goto loc_826A9F98;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826a9fac
	if (cr6.eq) goto loc_826A9FAC;
loc_826A9F98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826A9FAC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826a9fd8
	if (cr6.eq) goto loc_826A9FD8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826a9fec
	if (cr6.eq) goto loc_826A9FEC;
loc_826A9FD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826A9FEC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,17320(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17320);
	f0.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// stfs f0,200(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 200, temp.u32);
	// stb r9,204(r28)
	PPC_STORE_U8(r28.u32 + 204, ctx.r9.u8);
	// b 0x826aa22c
	goto loc_826AA22C;
loc_826AA010:
	// lwz r27,0(r6)
	r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826aa040
	if (cr6.eq) goto loc_826AA040;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826aa054
	if (cr6.eq) goto loc_826AA054;
loc_826AA040:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AA054:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r30,r28,16
	r30.s64 = r28.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826aa084
	if (cr6.eq) goto loc_826AA084;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826aa098
	if (cr6.eq) goto loc_826AA098;
loc_826AA084:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AA098:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r30,136
	ctx.r3.s64 = r30.s64 + 136;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,190(r30)
	PPC_STORE_U8(r30.u32 + 190, r11.u8);
	// b 0x826aa22c
	goto loc_826AA22C;
loc_826AA0BC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,0(r6)
	r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x826b4868
	sub_826B4868(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lbz r11,6(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lbz r11,7(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lbz r11,9(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lbz r11,11(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lbz r11,12(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lbz r11,13(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lbz r11,14(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 14);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lbz r11,15(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 15);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lbz r11,5(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,140(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,148(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 148, temp.u32);
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,152(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// lfs f0,17320(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	f0.f64 = double(temp.f32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f13,40(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,156(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-26616(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26616);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,160(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826aa1b4
	if (cr6.eq) goto loc_826AA1B4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826aa1c8
	if (cr6.eq) goto loc_826AA1C8;
loc_826AA1B4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AA1C8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r29,r28,16
	r29.s64 = r28.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826aa1f8
	if (cr6.eq) goto loc_826AA1F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826aa20c
	if (cr6.eq) goto loc_826AA20C;
loc_826AA1F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AA20C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r29,52
	ctx.r3.s64 = r29.s64 + 52;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,84
	ctx.r5.s64 = 84;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,189(r29)
	PPC_STORE_U8(r29.u32 + 189, r11.u8);
loc_826AA22C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826aa278
	if (cr6.eq) goto loc_826AA278;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826aa278
	if (!cr6.eq) goto loc_826AA278;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826aa278
	if (!cr6.eq) goto loc_826AA278;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AA278:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826aa2bc
	if (cr6.eq) goto loc_826AA2BC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826aa2bc
	if (!cr6.eq) goto loc_826AA2BC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826aa2bc
	if (!cr6.eq) goto loc_826AA2BC;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AA2BC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826AA2CC"))) PPC_WEAK_FUNC(sub_826AA2CC);
PPC_FUNC_IMPL(__imp__sub_826AA2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AA2D0"))) PPC_WEAK_FUNC(sub_826AA2D0);
PPC_FUNC_IMPL(__imp__sub_826AA2D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// addi r21,r3,20
	r21.s64 = ctx.r3.s64 + 20;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r25,r8,r9
	r25.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lfs f0,0(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r21.u32 + 0);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(r25.u32, 4, xer);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bgt cr6,0x826aa308
	if (cr6.gt) goto loc_826AA308;
	// subf r11,r9,r8
	r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// ble cr6,0x826aa30c
	if (!cr6.gt) goto loc_826AA30C;
loc_826AA308:
	// li r6,1
	ctx.r6.s64 = 1;
loc_826AA30C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r23,r3,4
	r23.s64 = ctx.r3.s64 + 4;
	// addi r7,r1,-160
	ctx.r7.s64 = ctx.r1.s64 + -160;
	// addi r22,r3,24
	r22.s64 = ctx.r3.s64 + 24;
	// lfs f0,29188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29188);
	f0.f64 = double(temp.f32);
	// lfs f12,0(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, f0.u32);
	// lwz r11,-160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r7,256
	cr6.compare<uint32_t>(ctx.r7.u32, 256, xer);
	// bge cr6,0x826aa770
	if (!cr6.lt) goto loc_826AA770;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// lfs f11,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,-26608(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26608);
	f0.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// blt cr6,0x826aa49c
	if (cr6.lt) goto loc_826AA49C;
	// rlwinm r29,r7,30,2,31
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
	// subf r28,r9,r10
	r28.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	// rlwinm r27,r29,2,0,29
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r9,2
	ctx.r6.s64 = ctx.r9.s64 + 2;
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// subf r26,r5,r4
	r26.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r31,r28,2
	r31.s64 = r28.s64 + 2;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_826AA3A0:
	// rlwinm r24,r28,2,16,29
	r24.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFC;
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
	// add r20,r28,r25
	r20.u64 = r28.u64 + r25.u64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// addi r19,r6,-1
	r19.s64 = ctx.r6.s64 + -1;
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r20,r20,2,16,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFC;
	// lfs f8,-4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r19,r19,2,16,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFC;
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r24,r11
	temp.u32 = PPC_LOAD_U32(r24.u32 + r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r24,r31,-1
	r24.s64 = r31.s64 + -1;
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// rlwinm r18,r6,2,16,29
	r18.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// rlwinm r24,r24,2,16,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFC;
	// lfsx f5,r20,r11
	temp.u32 = PPC_LOAD_U32(r20.u32 + r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r20,r6,1
	r20.s64 = ctx.r6.s64 + 1;
	// stfs f9,-8(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lfsx f9,r19,r11
	temp.u32 = PPC_LOAD_U32(r19.u32 + r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r19,r31,2,16,29
	r19.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFC;
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// rlwinm r20,r20,2,16,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFC;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfsx f3,r24,r11
	temp.u32 = PPC_LOAD_U32(r24.u32 + r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f8,-4(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r24,r31,1
	r24.s64 = r31.s64 + 1;
	// lfsx f8,r18,r11
	temp.u32 = PPC_LOAD_U32(r18.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f2,r19,r11
	temp.u32 = PPC_LOAD_U32(r19.u32 + r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r24,r24,2,16,29
	r24.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFC;
	// fmadds f10,f5,f10,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// lfsx f7,r20,r11
	temp.u32 = PPC_LOAD_U32(r20.u32 + r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f10,-8(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfsx f4,r26,r9
	temp.u32 = PPC_LOAD_U32(r26.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lfsx f10,r24,r11
	temp.u32 = PPC_LOAD_U32(r24.u32 + r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stfs f4,4(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// fmadds f9,f3,f6,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f9,-4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmadds f9,f2,f8,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmadds f10,f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne cr6,0x826aa3a0
	if (!cr6.eq) goto loc_826AA3A0;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
loc_826AA49C:
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(r27.u32, ctx.r7.u32, xer);
	// bgt cr6,0x826aa530
	if (cr6.gt) goto loc_826AA530;
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r27,r7
	ctx.r9.s64 = ctx.r7.s64 - r27.s64;
	// lwz r27,12(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r28,r6,r4
	r28.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + r11.u64;
	// subf r8,r29,r10
	ctx.r8.s64 = ctx.r10.s64 - r29.s64;
	// add r30,r6,r5
	r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r28,-4
	ctx.r6.s64 = r28.s64 + -4;
	// subf r29,r27,r29
	r29.s64 = r29.s64 - r27.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_826AA4DC:
	// rlwinm r28,r8,2,16,29
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
	// add r27,r29,r8
	r27.u64 = r29.u64 + ctx.r8.u64;
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// rlwinm r27,r27,2,16,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f8,r28,r11
	temp.u32 = PPC_LOAD_U32(r28.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfsx f7,r27,r11
	temp.u32 = PPC_LOAD_U32(r27.u32 + r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// fmadds f10,f7,f10,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne cr6,0x826aa4dc
	if (!cr6.eq) goto loc_826AA4DC;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
loc_826AA530:
	// lwz r25,16(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// beq cr6,0x826aa548
	if (cr6.eq) goto loc_826AA548;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x826aa550
	goto loc_826AA550;
loc_826AA548:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,2480(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
loc_826AA550:
	// subfic r8,r7,256
	xer.ca = ctx.r7.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r7.s64;
	// stfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// blt cr6,0x826aa6c4
	if (cr6.lt) goto loc_826AA6C4;
	// subfic r9,r7,252
	xer.ca = ctx.r7.u32 <= 252;
	ctx.r9.s64 = 252 - ctx.r7.s64;
	// lwz r27,12(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r7,2
	r31.s64 = ctx.r7.s64 + 2;
	// addi r29,r9,1
	r29.s64 = ctx.r9.s64 + 1;
	// addi r9,r7,3
	ctx.r9.s64 = ctx.r7.s64 + 3;
	// rlwinm r26,r29,2,0,29
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r25,r10
	r28.s64 = ctx.r10.s64 - r25.s64;
	// add r30,r6,r4
	r30.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r6,r27,r10
	ctx.r6.s64 = ctx.r10.s64 - r27.s64;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r26,r10
	ctx.r10.u64 = r26.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r24,r5,r4
	r24.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r31,r28,2
	r31.s64 = r28.s64 + 2;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// subf r27,r27,r25
	r27.s64 = r25.s64 - r27.s64;
	// add r26,r26,r7
	r26.u64 = r26.u64 + ctx.r7.u64;
loc_826AA5C8:
	// rlwinm r7,r28,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFC;
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// add r25,r27,r28
	r25.u64 = r27.u64 + r28.u64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// addi r20,r31,-1
	r20.s64 = r31.s64 + -1;
	// lfs f10,-12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r25,r25,2,16,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFC;
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r20,r20,2,16,29
	r20.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 2) & 0xFFFC;
	// lfsx f8,r9,r24
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r24.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// rlwinm r19,r31,2,16,29
	r19.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFC;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// lfsx f6,r25,r11
	temp.u32 = PPC_LOAD_U32(r25.u32 + r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r25,r31,1
	r25.s64 = r31.s64 + 1;
	// stfs f10,-8(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lfsx f10,r20,r11
	temp.u32 = PPC_LOAD_U32(r20.u32 + r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r20,r6,2,16,29
	r20.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFC;
	// rlwinm r25,r25,2,16,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFC;
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// stfs f9,-4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f9,r19,r11
	temp.u32 = PPC_LOAD_U32(r19.u32 + r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r7,r7,2,16,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFC;
	// lfsx f3,r20,r11
	temp.u32 = PPC_LOAD_U32(r20.u32 + r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// fmadds f11,f6,f11,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfsx f8,r25,r11
	temp.u32 = PPC_LOAD_U32(r25.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// stfs f11,-4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfsx f11,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// fmadds f10,f4,f7,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmadds f10,f3,f10,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmadds f11,f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne cr6,0x826aa5c8
	if (!cr6.eq) goto loc_826AA5C8;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
loc_826AA6C4:
	// cmplwi cr6,r26,256
	cr6.compare<uint32_t>(r26.u32, 256, xer);
	// bge cr6,0x826aa754
	if (!cr6.lt) goto loc_826AA754;
	// rlwinm r7,r26,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,12(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f12,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// subfic r9,r26,256
	xer.ca = r26.u32 <= 256;
	ctx.r9.s64 = 256 - r26.s64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + r11.u64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - r31.s64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r3,r30,r31
	ctx.r3.s64 = r31.s64 - r30.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_826AA700:
	// rlwinm r31,r8,2,16,29
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFC;
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// add r30,r3,r8
	r30.u64 = ctx.r3.u64 + ctx.r8.u64;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// rlwinm r30,r30,2,16,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f9,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfsx f8,r30,r11
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f11,f8,f11,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne cr6,0x826aa700
	if (!cr6.eq) goto loc_826AA700;
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
loc_826AA754:
	// clrlwi r11,r10,18
	r11.u64 = ctx.r10.u32 & 0x3FFF;
	// lfs f0,1024(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r21.u32 + 0, temp.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// clrlwi r11,r10,18
	r11.u64 = ctx.r10.u32 & 0x3FFF;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// b 0x8239bd20
	return;
loc_826AA770:
	// addi r31,r10,256
	r31.s64 = ctx.r10.s64 + 256;
	// cmplwi cr6,r31,16384
	cr6.compare<uint32_t>(r31.u32, 16384, xer);
	// bge cr6,0x826aa8d4
	if (!cr6.lt) goto loc_826AA8D4;
	// subf r7,r8,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r11,r7,256
	r11.s64 = ctx.r7.s64 + 256;
	// cmplwi cr6,r11,16384
	cr6.compare<uint32_t>(r11.u32, 16384, xer);
	// bge cr6,0x826aa8d4
	if (!cr6.lt) goto loc_826AA8D4;
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r30,r11,256
	r30.s64 = r11.s64 + 256;
	// cmplwi cr6,r30,16384
	cr6.compare<uint32_t>(r30.u32, 16384, xer);
	// bge cr6,0x826aa8d4
	if (!cr6.lt) goto loc_826AA8D4;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x826aa8d4
	if (cr6.lt) goto loc_826AA8D4;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x826aa8d4
	if (cr6.lt) goto loc_826AA8D4;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// bne cr6,0x826aa850
	if (!cr6.eq) goto loc_826AA850;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r5,4
	ctx.r9.s64 = ctx.r5.s64 + 4;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// li r8,65
	ctx.r8.s64 = 65;
loc_826AA7D0:
	// li r7,16
	ctx.r7.s64 = 16;
	// lvlx v0,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r6,16
	ctx.r6.s64 = 16;
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// lvrx v13,r4,r7
	temp.u32 = ctx.r4.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lvrx v11,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vor v13,v12,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// li r28,16
	r28.s64 = 16;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stvlx v0,0,r7
	ea = ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stvrx v0,r3,r6
	ea = ctx.r3.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvlx v13,0,r30
	ea = r30.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v13.u8[15 - i]);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stvrx v13,r29,r28
	ea = r29.u32 + r28.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v13.u8[i]);
	// bne cr6,0x826aa7d0
	if (!cr6.eq) goto loc_826AA7D0;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r31,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r31.u32);
	// lfs f0,-26612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26612);
	f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f0,0(r23)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// lfs f0,1024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r21.u32 + 0, temp.u32);
	// b 0x8239bd20
	return;
loc_826AA850:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// li r9,256
	ctx.r9.s64 = 256;
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// subf r10,r7,r11
	ctx.r10.s64 = r11.s64 - ctx.r7.s64;
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lfs f13,-26608(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -26608);
	ctx.f13.f64 = double(temp.f32);
loc_826AA87C:
	// lfs f11,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64));
	// lfsx f9,r7,r10
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfs f8,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,0(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fmadds f11,f9,f10,f11
	ctx.f11.f64 = double(float(ctx.f9.f64 * ctx.f10.f64 + ctx.f11.f64));
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne cr6,0x826aa87c
	if (!cr6.eq) goto loc_826AA87C;
	// lfs f0,1024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	f0.f64 = double(temp.f32);
	// stw r31,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r31.u32);
	// stfs f12,0(r23)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// stfs f0,0(r21)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r21.u32 + 0, temp.u32);
	// b 0x8239bd20
	return;
loc_826AA8D4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r5,4
	ctx.r7.s64 = ctx.r5.s64 + 4;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// subf r11,r9,r10
	r11.s64 = ctx.r10.s64 - ctx.r9.s64;
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(f0.f64 - ctx.f12.f64));
	// li r9,256
	ctx.r9.s64 = 256;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// lfs f12,-26608(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -26608);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_826AA908:
	// add r3,r11,r25
	ctx.r3.u64 = r11.u64 + r25.u64;
	// lfs f9,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r31,r11,2,16,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFC;
	// rlwinm r3,r3,2,16,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFC;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f11,r31,r6
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lfsx f10,r3,r6
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f9,0(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne cr6,0x826aa908
	if (!cr6.eq) goto loc_826AA908;
	// clrlwi r11,r10,18
	r11.u64 = ctx.r10.u32 & 0x3FFF;
	// stfs f0,0(r23)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// lfs f0,1024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r21)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r21.u32 + 0, temp.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_826AA970"))) PPC_WEAK_FUNC(sub_826AA970);
PPC_FUNC_IMPL(__imp__sub_826AA970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f9,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stfs f9,0(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// addi r11,r5,4
	r11.s64 = ctx.r5.s64 + 4;
	// lfs f7,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f7.f64 = double(temp.f32);
	// blt cr6,0x826aaa40
	if (cr6.lt) goto loc_826AAA40;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// rlwinm r10,r6,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// fsubs f10,f7,f0
	ctx.f10.f64 = double(float(ctx.f7.f64 - f0.f64));
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmuls f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
loc_826AA9B0:
	// lfs f6,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// lfs f5,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(f0.f64 * ctx.f9.f64));
	// lfs f4,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f11
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f11.f64));
	// lfs f3,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// fmadds f12,f0,f12,f6
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// fmadds f9,f13,f8,f9
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fmuls f6,f3,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmadds f12,f5,f10,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmuls f5,f0,f9
	ctx.f5.f64 = double(float(f0.f64 * ctx.f9.f64));
	// fmadds f9,f13,f8,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmuls f5,f0,f9
	ctx.f5.f64 = double(float(f0.f64 * ctx.f9.f64));
	// fmadds f12,f4,f10,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmadds f9,f13,f8,f5
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmadds f12,f6,f10,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(f0.f64 * ctx.f9.f64));
	// fmadds f9,f13,f8,f6
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f8.f64 + ctx.f6.f64));
	// stfs f9,12(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// bne cr6,0x826aa9b0
	if (!cr6.eq) goto loc_826AA9B0;
loc_826AAA40:
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bgt cr6,0x826aaa90
	if (cr6.gt) goto loc_826AAA90;
	// lfs f0,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	f0.f64 = double(temp.f32);
	// subf r10,r9,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r9.s64;
	// fsubs f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 - f0.f64));
	// lfs f13,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
loc_826AAA60:
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmuls f10,f0,f9
	ctx.f10.f64 = double(float(f0.f64 * ctx.f9.f64));
	// lfs f9,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// fmadds f12,f13,f9,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f9.f64 + ctx.f12.f64));
	// fmadds f9,f13,f11,f10
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x826aaa60
	if (!cr6.eq) goto loc_826AAA60;
loc_826AAA90:
	// stfs f12,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f9,20(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AAA9C"))) PPC_WEAK_FUNC(sub_826AAA9C);
PPC_FUNC_IMPL(__imp__sub_826AAA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AAAA0"))) PPC_WEAK_FUNC(sub_826AAAA0);
PPC_FUNC_IMPL(__imp__sub_826AAAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x8239bcf4
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lwz r30,24(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r31,r8,r11
	r31.s64 = r11.s64 - ctx.r8.s64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// subf r30,r30,r11
	r30.s64 = r11.s64 - r30.s64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_826AAAF4:
	// rlwinm r29,r11,2,21,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x7FC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r28,r31,r11
	r28.u64 = r31.u64 + r11.u64;
	// add r27,r30,r11
	r27.u64 = r30.u64 + r11.u64;
	// rlwinm r28,r28,2,21,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x7FC;
	// rlwinm r27,r27,2,21,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x7FC;
	// lfsx f10,r29,r10
	temp.u32 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfsx f9,r28,r10
	temp.u32 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f8,r27,r10
	temp.u32 = PPC_LOAD_U32(r27.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fmadds f10,f9,f0,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f10.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bne cr6,0x826aaaf4
	if (!cr6.eq) goto loc_826AAAF4;
	// clrlwi r11,r7,23
	r11.u64 = ctx.r7.u32 & 0x1FF;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826AAB6C"))) PPC_WEAK_FUNC(sub_826AAB6C);
PPC_FUNC_IMPL(__imp__sub_826AAB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AAB70"))) PPC_WEAK_FUNC(sub_826AAB70);
PPC_FUNC_IMPL(__imp__sub_826AAB70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x8239bcfc
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,24
	r11.s64 = ctx.r3.s64 + 24;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
loc_826AABA8:
	// addi r7,r10,-2
	ctx.r7.s64 = ctx.r10.s64 + -2;
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// rlwinm r7,r7,2,23,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FC;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r6,2,23,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x1FC;
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r10,2,23,29
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1FC;
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r10,2
	r30.s64 = ctx.r10.s64 + 2;
	// lfs f6,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r10,3
	r29.s64 = ctx.r10.s64 + 3;
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f12,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,-8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// rlwinm r7,r7,2,23,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FC;
	// rlwinm r30,r30,2,23,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x1FC;
	// rlwinm r29,r29,2,23,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x1FC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,-4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f11,f0,f12,f8
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f11,0(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// rlwinm r31,r6,2,23,29
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x1FC;
	// addi r6,r4,28
	ctx.r6.s64 = ctx.r4.s64 + 28;
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f11,f0,f12,f7
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f11,4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r7,r4,24
	ctx.r7.s64 = ctx.r4.s64 + 24;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r30,r11
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f11,f0,f12,f6
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r30,r10,5
	r30.s64 = ctx.r10.s64 + 5;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// rlwinm r30,r30,2,23,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x1FC;
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r29,r11
	temp.u32 = PPC_LOAD_U32(r29.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f5
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,12(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,16(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r30,r11
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,20(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// fmadds f12,f13,f11,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// bne cr6,0x826aaba8
	if (!cr6.eq) goto loc_826AABA8;
	// neg r7,r5
	ctx.r7.s64 = -ctx.r5.s64;
	// subfic r9,r5,2
	xer.ca = ctx.r5.u32 <= 2;
	ctx.r9.s64 = 2 - ctx.r5.s64;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// li r8,16
	ctx.r8.s64 = 16;
loc_826AACD8:
	// rlwinm r6,r7,2,23,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1FC;
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r5,r9,-1
	ctx.r5.s64 = ctx.r9.s64 + -1;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r31,r9,1
	r31.s64 = ctx.r9.s64 + 1;
	// rlwinm r5,r5,2,23,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0x1FC;
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r31,2,23,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x1FC;
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f11,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r6,r9,2,23,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1FC;
	// fmadds f12,f0,f11,f10
	ctx.f12.f64 = double(float(f0.f64 * ctx.f11.f64 + ctx.f10.f64));
	// stfs f12,-8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// addi r30,r9,2
	r30.s64 = ctx.r9.s64 + 2;
	// lfs f6,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r9,3
	r29.s64 = ctx.r9.s64 + 3;
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// rlwinm r30,r30,2,23,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x1FC;
	// rlwinm r29,r29,2,23,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x1FC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r7,r7,8
	ctx.r7.s64 = ctx.r7.s64 + 8;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// fmadds f11,f13,f12,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfsx f12,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,-4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r5,r4,28
	ctx.r5.s64 = ctx.r4.s64 + 28;
	// lfs f9,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f11,f0,f12,f8
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f11,f0,f12,f7
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// rlwinm r31,r6,2,23,29
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x1FC;
	// addi r6,r4,24
	ctx.r6.s64 = ctx.r4.s64 + 24;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r30,r11
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f11,f0,f12,f6
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r30,r9,5
	r30.s64 = ctx.r9.s64 + 5;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// rlwinm r30,r30,2,23,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x1FC;
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r29,r11
	temp.u32 = PPC_LOAD_U32(r29.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f5
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lfs f10,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r30,r11
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// fmadds f12,f13,f11,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// bne cr6,0x826aacd8
	if (!cr6.eq) goto loc_826AACD8;
	// li r11,0
	r11.s64 = 0;
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f12,0(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AAE08"))) PPC_WEAK_FUNC(sub_826AAE08);
PPC_FUNC_IMPL(__imp__sub_826AAE08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x8239bcf4
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,44
	ctx.r10.s64 = ctx.r3.s64 + 44;
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f11,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,36(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// lwz r30,24(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r31,r8,r11
	r31.s64 = r11.s64 - ctx.r8.s64;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	f0.f64 = double(temp.f32);
	// subf r30,r30,r11
	r30.s64 = r11.s64 - r30.s64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// lfs f12,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_826AAE5C:
	// rlwinm r29,r11,2,19,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FFC;
	// lfs f11,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// add r28,r31,r11
	r28.u64 = r31.u64 + r11.u64;
	// add r27,r30,r11
	r27.u64 = r30.u64 + r11.u64;
	// rlwinm r28,r28,2,19,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x1FFC;
	// rlwinm r27,r27,2,19,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x1FFC;
	// lfsx f10,r29,r10
	temp.u32 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfsx f9,r28,r10
	temp.u32 = PPC_LOAD_U32(r28.u32 + ctx.r10.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f8,r27,r10
	temp.u32 = PPC_LOAD_U32(r27.u32 + ctx.r10.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stfs f11,0(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f11,f8,f12
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fmadds f10,f9,f0,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f10.f64));
	// stfs f10,0(r5)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// bne cr6,0x826aae5c
	if (!cr6.eq) goto loc_826AAE5C;
	// clrlwi r11,r7,21
	r11.u64 = ctx.r7.u32 & 0x7FF;
	// fmr f0,f10
	f0.f64 = ctx.f10.f64;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826AAED4"))) PPC_WEAK_FUNC(sub_826AAED4);
PPC_FUNC_IMPL(__imp__sub_826AAED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AAED8"))) PPC_WEAK_FUNC(sub_826AAED8);
PPC_FUNC_IMPL(__imp__sub_826AAED8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x8239bcfc
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r7,256
	ctx.r5.s64 = ctx.r7.s64 + 256;
loc_826AAF14:
	// addi r7,r11,-2
	ctx.r7.s64 = r11.s64 + -2;
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r6,2,22,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r11,2,22,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3FC;
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r11,2
	r30.s64 = r11.s64 + 2;
	// lfs f6,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r11,3
	r29.s64 = r11.s64 + 3;
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f12,r7,r9
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,-8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// rlwinm r30,r30,2,22,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FC;
	// rlwinm r29,r29,2,22,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3FC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,-4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r9
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f11,f0,f12,f8
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// rlwinm r31,r6,2,22,29
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// addi r6,r4,28
	ctx.r6.s64 = ctx.r4.s64 + 28;
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r7,r9
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f11,f0,f12,f7
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r7,r4,24
	ctx.r7.s64 = ctx.r4.s64 + 24;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r30,r9
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f11,f0,f12,f6
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r30,r11,5
	r30.s64 = r11.s64 + 5;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r30,r30,2,22,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FC;
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r29,r9
	temp.u32 = PPC_LOAD_U32(r29.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f5
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r9
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r30,r9
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// bne cr6,0x826aaf14
	if (!cr6.eq) goto loc_826AAF14;
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AB044"))) PPC_WEAK_FUNC(sub_826AB044);
PPC_FUNC_IMPL(__imp__sub_826AB044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AB048"))) PPC_WEAK_FUNC(sub_826AB048);
PPC_FUNC_IMPL(__imp__sub_826AB048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x8239bcfc
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r5,r7,256
	ctx.r5.s64 = ctx.r7.s64 + 256;
loc_826AB084:
	// addi r7,r11,-2
	ctx.r7.s64 = r11.s64 + -2;
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// rlwinm r7,r7,2,21,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x7FC;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r31,r11,2,21,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x7FC;
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r11,2
	r30.s64 = r11.s64 + 2;
	// lfs f6,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r11,3
	r29.s64 = r11.s64 + 3;
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f12,r7,r9
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,-8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// rlwinm r7,r7,2,21,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x7FC;
	// rlwinm r30,r30,2,21,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x7FC;
	// rlwinm r29,r29,2,21,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x7FC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,4(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,-4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r9
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,8(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// fmadds f11,f0,f12,f8
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// rlwinm r31,r6,2,21,29
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// addi r6,r4,28
	ctx.r6.s64 = ctx.r4.s64 + 28;
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r7,r9
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,12(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 12, temp.u32);
	// fmadds f11,f0,f12,f7
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r7,r4,24
	ctx.r7.s64 = ctx.r4.s64 + 24;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r30,r9
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,16(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// fmadds f11,f0,f12,f6
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addi r30,r11,5
	r30.s64 = r11.s64 + 5;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r30,r30,2,21,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x7FC;
	// fmadds f10,f13,f11,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r29,r9
	temp.u32 = PPC_LOAD_U32(r29.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f0,f12,f5
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f10,20(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r9
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r30,r9
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,0(r6)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// bne cr6,0x826ab084
	if (!cr6.eq) goto loc_826AB084;
	// clrlwi r11,r5,23
	r11.u64 = ctx.r5.u32 & 0x1FF;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AB1B4"))) PPC_WEAK_FUNC(sub_826AB1B4);
PPC_FUNC_IMPL(__imp__sub_826AB1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AB1B8"))) PPC_WEAK_FUNC(sub_826AB1B8);
PPC_FUNC_IMPL(__imp__sub_826AB1B8) {
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
	// mflr r12
	// bl 0x8239bcf8
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r9,r3,24
	ctx.r9.s64 = ctx.r3.s64 + 24;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// addi r10,r7,2
	ctx.r10.s64 = ctx.r7.s64 + 2;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// lfs f11,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_826AB1F4:
	// addi r6,r11,-2
	ctx.r6.s64 = r11.s64 + -2;
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// stfs f11,0(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// lfs f9,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r31,r31,2,21,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x7FC;
	// lfs f8,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r30,r11,2,21,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x7FC;
	// lfs f7,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r29,r11,2
	r29.s64 = r11.s64 + 2;
	// lfs f6,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f6.f64 = double(temp.f32);
	// addi r28,r11,3
	r28.s64 = r11.s64 + 3;
	// lfs f5,20(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f12,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,-8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -8, temp.u32);
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// lfs f10,24(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r29,r29,2,21,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x7FC;
	// rlwinm r28,r28,2,21,29
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x7FC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r9
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,4(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 4, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,-4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// addi r31,r11,5
	r31.s64 = r11.s64 + 5;
	// lfs f9,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// rlwinm r31,r31,2,21,29
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x7FC;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r30,r9
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,8(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// fmadds f11,f0,f12,f8
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f11,0(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,12(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// fmadds f11,f0,f12,f7
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f7.f64));
	// stfs f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r6,r11,4
	ctx.r6.s64 = r11.s64 + 4;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwinm r6,r6,2,21,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x7FC;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r29,r9
	temp.u32 = PPC_LOAD_U32(r29.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,16(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 16, temp.u32);
	// fmadds f11,f0,f12,f6
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f6.f64));
	// stfs f11,8(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r28,r9
	temp.u32 = PPC_LOAD_U32(r28.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,20(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// fmadds f11,f0,f12,f5
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f5.f64));
	// stfs f11,12(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,24(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 24, temp.u32);
	// fmadds f11,f0,f12,f10
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfsx f12,r31,r9
	temp.u32 = PPC_LOAD_U32(r31.u32 + ctx.r9.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f11,28(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// fmadds f11,f0,f12,f9
	ctx.f11.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f9.f64));
	// stfs f11,20(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addi r5,r5,32
	ctx.r5.s64 = ctx.r5.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// fmadds f11,f13,f11,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// bne cr6,0x826ab1f4
	if (!cr6.eq) goto loc_826AB1F4;
	// clrlwi r11,r7,23
	r11.u64 = ctx.r7.u32 & 0x1FF;
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826AB320"))) PPC_WEAK_FUNC(sub_826AB320);
PPC_FUNC_IMPL(__imp__sub_826AB320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x8239bcfc
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r31,r3,32
	r31.s64 = ctx.r3.s64 + 32;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	f0.f64 = double(temp.f32);
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	// lfs f13,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// subf r10,r30,r7
	ctx.r10.s64 = ctx.r7.s64 - r30.s64;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// li r11,256
	r11.s64 = 256;
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
loc_826AB368:
	// rlwinm r30,r10,2,20,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFC;
	// lfs f10,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r29,r9,2,20,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFC;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lfsx f0,r30,r31
	temp.u32 = PPC_LOAD_U32(r30.u32 + r31.u32);
	f0.f64 = double(temp.f32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f13,r29,r31
	temp.u32 = PPC_LOAD_U32(r29.u32 + r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// stfs f10,0(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stfs f13,0(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826ab368
	if (!cr6.eq) goto loc_826AB368;
	// clrlwi r11,r7,22
	r11.u64 = ctx.r7.u32 & 0x3FF;
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f13,20(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AB3C8"))) PPC_WEAK_FUNC(sub_826AB3C8);
PPC_FUNC_IMPL(__imp__sub_826AB3C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	// mflr r12
	// bl 0x8239bcdc
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lfs f0,29188(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29188);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r11,-112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	// rlwinm r7,r11,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r7,256
	cr6.compare<uint32_t>(ctx.r7.u32, 256, xer);
	// bge cr6,0x826ab840
	if (!cr6.lt) goto loc_826AB840;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r27,1
	r27.s64 = 1;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// lfs f11,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,-26608(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -26608);
	f0.f64 = double(temp.f32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// blt cr6,0x826ab56c
	if (cr6.lt) goto loc_826AB56C;
	// rlwinm r29,r7,30,2,31
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r31,12(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// rlwinm r27,r29,2,0,29
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r6,r10
	r28.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r26,r31,r10
	r26.s64 = ctx.r10.s64 - r31.s64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r24,r31,r6
	r24.s64 = ctx.r6.s64 - r31.s64;
	// add r10,r27,r10
	ctx.r10.u64 = r27.u64 + ctx.r10.u64;
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// addi r9,r5,12
	ctx.r9.s64 = ctx.r5.s64 + 12;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// subf r25,r5,r4
	r25.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r6,r26,2
	ctx.r6.s64 = r26.s64 + 2;
	// addi r31,r28,2
	r31.s64 = r28.s64 + 2;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_826AB470:
	// rlwinm r26,r28,2,22,29
	r26.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3FC;
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
	// add r23,r28,r24
	r23.u64 = r28.u64 + r24.u64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// addi r22,r6,-1
	r22.s64 = ctx.r6.s64 + -1;
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r23,r23,2,22,29
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3FC;
	// lfs f8,-4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -4);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r22,r22,2,22,29
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0x3FC;
	// lfs f7,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f6,r26,r11
	temp.u32 = PPC_LOAD_U32(r26.u32 + r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r26,r31,-1
	r26.s64 = r31.s64 + -1;
	// fmuls f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// rlwinm r21,r6,2,22,29
	r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// rlwinm r26,r26,2,22,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x3FC;
	// lfsx f5,r23,r11
	temp.u32 = PPC_LOAD_U32(r23.u32 + r11.u32);
	ctx.f5.f64 = double(temp.f32);
	// addi r23,r6,1
	r23.s64 = ctx.r6.s64 + 1;
	// stfs f9,-8(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lfsx f9,r22,r11
	temp.u32 = PPC_LOAD_U32(r22.u32 + r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r22,r31,2,22,29
	r22.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3FC;
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// rlwinm r23,r23,2,22,29
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3FC;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfsx f3,r26,r11
	temp.u32 = PPC_LOAD_U32(r26.u32 + r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// stfs f8,-4(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r26,r31,1
	r26.s64 = r31.s64 + 1;
	// lfsx f8,r21,r11
	temp.u32 = PPC_LOAD_U32(r21.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f2,r22,r11
	temp.u32 = PPC_LOAD_U32(r22.u32 + r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r26,r26,2,22,29
	r26.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0x3FC;
	// fmadds f10,f5,f10,f6
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f10.f64 + ctx.f6.f64));
	// stfs f7,0(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmr f6,f13
	ctx.f6.f64 = ctx.f13.f64;
	// lfsx f7,r23,r11
	temp.u32 = PPC_LOAD_U32(r23.u32 + r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f10,-8(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + -8, temp.u32);
	// lfsx f4,r25,r9
	temp.u32 = PPC_LOAD_U32(r25.u32 + ctx.r9.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// lfsx f10,r26,r11
	temp.u32 = PPC_LOAD_U32(r26.u32 + r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stfs f4,4(r8)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// fmadds f9,f3,f6,f9
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f9,-4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fmuls f9,f8,f12
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmadds f9,f2,f8,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f9,0(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmuls f9,f7,f12
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmr f8,f13
	ctx.f8.f64 = ctx.f13.f64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmadds f10,f10,f8,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne cr6,0x826ab470
	if (!cr6.eq) goto loc_826AB470;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_826AB56C:
	// cmplw cr6,r27,r7
	cr6.compare<uint32_t>(r27.u32, ctx.r7.u32, xer);
	// bgt cr6,0x826ab600
	if (cr6.gt) goto loc_826AB600;
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r9,r27,r7
	ctx.r9.s64 = ctx.r7.s64 - r27.s64;
	// lwz r27,12(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r28,r6,r4
	r28.u64 = ctx.r6.u64 + ctx.r4.u64;
	// add r31,r8,r11
	r31.u64 = ctx.r8.u64 + r11.u64;
	// subf r8,r29,r10
	ctx.r8.s64 = ctx.r10.s64 - r29.s64;
	// add r30,r6,r5
	r30.u64 = ctx.r6.u64 + ctx.r5.u64;
	// addi r6,r28,-4
	ctx.r6.s64 = r28.s64 + -4;
	// subf r29,r27,r29
	r29.s64 = r29.s64 - r27.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_826AB5AC:
	// rlwinm r28,r8,2,22,29
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// fmr f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f12.f64;
	// add r27,r29,r8
	r27.u64 = r29.u64 + ctx.r8.u64;
	// lfs f9,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// rlwinm r27,r27,2,22,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0x3FC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f8,r28,r11
	temp.u32 = PPC_LOAD_U32(r28.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmuls f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfsx f7,r27,r11
	temp.u32 = PPC_LOAD_U32(r27.u32 + r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f9,0(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// fmadds f10,f7,f10,f8
	ctx.f10.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f10,0(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne cr6,0x826ab5ac
	if (!cr6.eq) goto loc_826AB5AC;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_826AB600:
	// lwz r25,16(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r25,r9
	cr6.compare<uint32_t>(r25.u32, ctx.r9.u32, xer);
	// beq cr6,0x826ab618
	if (cr6.eq) goto loc_826AB618;
	// fmr f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f11.f64;
	// b 0x826ab620
	goto loc_826AB620;
loc_826AB618:
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f12,2480(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
loc_826AB620:
	// subfic r8,r7,256
	xer.ca = ctx.r7.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r7.s64;
	// stfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fsubs f13,f11,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// stw r25,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r25.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blt cr6,0x826ab794
	if (cr6.lt) goto loc_826AB794;
	// subfic r9,r7,252
	xer.ca = ctx.r7.u32 <= 252;
	ctx.r9.s64 = 252 - ctx.r7.s64;
	// lwz r27,12(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r8,r10,2
	ctx.r8.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r31,r7,2
	r31.s64 = ctx.r7.s64 + 2;
	// addi r29,r9,1
	r29.s64 = ctx.r9.s64 + 1;
	// addi r9,r7,3
	ctx.r9.s64 = ctx.r7.s64 + 3;
	// rlwinm r26,r29,2,0,29
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r25,r10
	r28.s64 = ctx.r10.s64 - r25.s64;
	// add r30,r6,r4
	r30.u64 = ctx.r6.u64 + ctx.r4.u64;
	// subf r6,r27,r10
	ctx.r6.s64 = ctx.r10.s64 - r27.s64;
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r26,r10
	ctx.r10.u64 = r26.u64 + ctx.r10.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// subf r24,r5,r4
	r24.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r31,r28,2
	r31.s64 = r28.s64 + 2;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// subf r27,r27,r25
	r27.s64 = r25.s64 - r27.s64;
	// add r26,r26,r7
	r26.u64 = r26.u64 + ctx.r7.u64;
loc_826AB698:
	// rlwinm r7,r28,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0x3FC;
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// add r25,r27,r28
	r25.u64 = r27.u64 + r28.u64;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// addi r23,r31,-1
	r23.s64 = r31.s64 + -1;
	// lfs f10,-12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -12);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r25,r25,2,22,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x3FC;
	// lfs f9,-8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -8);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r23,r23,2,22,29
	r23.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 2) & 0x3FC;
	// lfsx f8,r24,r9
	temp.u32 = PPC_LOAD_U32(r24.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// lfsx f7,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	ctx.f7.f64 = double(temp.f32);
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// fmuls f7,f7,f13
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// rlwinm r22,r31,2,22,29
	r22.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x3FC;
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lfsx f6,r25,r11
	temp.u32 = PPC_LOAD_U32(r25.u32 + r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r25,r31,1
	r25.s64 = r31.s64 + 1;
	// stfs f10,-8(r8)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// lfsx f10,r23,r11
	temp.u32 = PPC_LOAD_U32(r23.u32 + r11.u32);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r23,r6,2,22,29
	r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0x3FC;
	// rlwinm r25,r25,2,22,29
	r25.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0x3FC;
	// lfs f5,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f4,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// addi r7,r6,1
	ctx.r7.s64 = ctx.r6.s64 + 1;
	// stfs f9,-4(r8)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// lfsx f9,r22,r11
	temp.u32 = PPC_LOAD_U32(r22.u32 + r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r7,r7,2,22,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FC;
	// lfsx f3,r23,r11
	temp.u32 = PPC_LOAD_U32(r23.u32 + r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// fmadds f11,f6,f11,f7
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 + ctx.f7.f64));
	// stfs f8,0(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// fmuls f10,f10,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfsx f8,r25,r11
	temp.u32 = PPC_LOAD_U32(r25.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmr f7,f12
	ctx.f7.f64 = ctx.f12.f64;
	// stfs f11,-4(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + -4, temp.u32);
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// lfsx f11,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// stfs f5,4(r8)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// fmadds f10,f4,f7,f10
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f10,0(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmadds f10,f3,f10,f9
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f10,4(r9)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmuls f9,f8,f13
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// fmadds f11,f11,f10,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f9.f64));
	// stfs f11,8(r9)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne cr6,0x826ab698
	if (!cr6.eq) goto loc_826AB698;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_826AB794:
	// cmplwi cr6,r26,256
	cr6.compare<uint32_t>(r26.u32, 256, xer);
	// bge cr6,0x826ab824
	if (!cr6.lt) goto loc_826AB824;
	// rlwinm r7,r26,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r29,12(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r30,r7,r5
	r30.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lfs f12,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// subfic r9,r26,256
	xer.ca = r26.u32 <= 256;
	ctx.r9.s64 = 256 - r26.s64;
	// add r6,r8,r11
	ctx.r6.u64 = ctx.r8.u64 + r11.u64;
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - r31.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// subf r31,r29,r31
	r31.s64 = r31.s64 - r29.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_826AB7D0:
	// rlwinm r30,r8,2,22,29
	r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0x3FC;
	// fmr f11,f12
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f12.f64;
	// add r29,r31,r8
	r29.u64 = r31.u64 + ctx.r8.u64;
	// lfs f10,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - f0.f64));
	// rlwinm r29,r29,2,22,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0x3FC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lfsx f9,r30,r11
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// fmuls f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// fadds f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfsx f8,r29,r11
	temp.u32 = PPC_LOAD_U32(r29.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f10,0(r6)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fmadds f11,f8,f11,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 + ctx.f9.f64));
	// stfs f11,0(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne cr6,0x826ab7d0
	if (!cr6.eq) goto loc_826AB7D0;
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
loc_826AB824:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// lfs f0,1024(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// b 0x8239bd2c
	return;
loc_826AB840:
	// subf r11,r10,r10
	r11.s64 = ctx.r10.s64 - ctx.r10.s64;
	// lwz r31,8(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,12(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// add r7,r11,r5
	ctx.r7.u64 = r11.u64 + ctx.r5.u64;
	// lfs f0,2552(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2552);
	f0.f64 = double(temp.f32);
	// subf r11,r31,r10
	r11.s64 = ctx.r10.s64 - r31.s64;
	// fsubs f13,f0,f12
	ctx.f13.f64 = double(float(f0.f64 - ctx.f12.f64));
	// subf r31,r30,r31
	r31.s64 = r31.s64 - r30.s64;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// lis r30,-32242
	r30.s64 = -2113011712;
	// li r8,256
	ctx.r8.s64 = 256;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r10,r10,256
	ctx.r10.s64 = ctx.r10.s64 + 256;
	// lfs f12,-26608(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -26608);
	ctx.f12.f64 = double(temp.f32);
loc_826AB88C:
	// add r30,r31,r11
	r30.u64 = r31.u64 + r11.u64;
	// lfs f9,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r29,r11,2,22,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3FC;
	// rlwinm r30,r30,2,22,29
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FC;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lfsx f11,r29,r9
	temp.u32 = PPC_LOAD_U32(r29.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lfsx f10,r30,r9
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f9,0(r6)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fsubs f0,f0,f12
	f0.f64 = double(float(f0.f64 - ctx.f12.f64));
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// stfs f11,0(r7)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne cr6,0x826ab88c
	if (!cr6.eq) goto loc_826AB88C;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lfs f0,1024(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1024);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_826AB8F4"))) PPC_WEAK_FUNC(sub_826AB8F4);
PPC_FUNC_IMPL(__imp__sub_826AB8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AB8F8"))) PPC_WEAK_FUNC(sub_826AB8F8);
PPC_FUNC_IMPL(__imp__sub_826AB8F8) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26680
	r11.s64 = r11.s64 + -26680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x826ab938
	if (cr6.eq) goto loc_826AB938;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
loc_826AB938:
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

__attribute__((alias("__imp__sub_826AB950"))) PPC_WEAK_FUNC(sub_826AB950);
PPC_FUNC_IMPL(__imp__sub_826AB950) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26680
	r11.s64 = r11.s64 + -26680;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x826ab990
	if (cr6.eq) goto loc_826AB990;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
loc_826AB990:
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

__attribute__((alias("__imp__sub_826AB9A8"))) PPC_WEAK_FUNC(sub_826AB9A8);
PPC_FUNC_IMPL(__imp__sub_826AB9A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,4
	r11.s64 = 262144;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,47792
	r11.u64 = r11.u64 | 47792;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AB9BC"))) PPC_WEAK_FUNC(sub_826AB9BC);
PPC_FUNC_IMPL(__imp__sub_826AB9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AB9C0"))) PPC_WEAK_FUNC(sub_826AB9C0);
PPC_FUNC_IMPL(__imp__sub_826AB9C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
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
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5b0
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// ld r12,-16384(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16384);
	// stwu r1,-17888(r1)
	ea = -17888 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,100(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 100);
	// stw r30,17908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 17908, r30.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x826aba14
	if (cr6.eq) goto loc_826ABA14;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x826aba0c
	if (cr6.eq) goto loc_826ABA0C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r29,4(r4)
	r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x826aba1c
	goto loc_826ABA1C;
loc_826ABA0C:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// b 0x826aba18
	goto loc_826ABA18;
loc_826ABA14:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_826ABA18:
	// mr r29,r11
	r29.u64 = r11.u64;
loc_826ABA1C:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r29.u32);
	// stw r10,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r10,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// lwz r10,16(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// stw r10,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r10.u32);
	// dcbt r0,r11
	// dcbt r0,r29
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// dcbt r10,r29
	// addi r5,r1,7664
	ctx.r5.s64 = ctx.r1.s64 + 7664;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// bl 0x826aa2d0
	sub_826AA2D0(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,9840
	ctx.r5.s64 = ctx.r1.s64 + 9840;
	// addi r4,r1,7664
	ctx.r4.s64 = ctx.r1.s64 + 7664;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// bl 0x826aa970
	sub_826AA970(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,5600
	ctx.r6.s64 = ctx.r1.s64 + 5600;
	// addi r5,r1,1440
	ctx.r5.s64 = ctx.r1.s64 + 1440;
	// addi r4,r1,9840
	ctx.r4.s64 = ctx.r1.s64 + 9840;
	// addi r3,r3,240
	ctx.r3.s64 = ctx.r3.s64 + 240;
	// bl 0x826aaaa0
	sub_826AAAA0(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// addi r4,r1,1440
	ctx.r4.s64 = ctx.r1.s64 + 1440;
	// addi r3,r3,2332
	ctx.r3.s64 = ctx.r3.s64 + 2332;
	// bl 0x826aab70
	sub_826AAB70(ctx, base);
	// addi r11,r1,16559
	r11.s64 = ctx.r1.s64 + 16559;
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// rlwinm r31,r11,0,0,24
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,12016
	ctx.r6.s64 = ctx.r1.s64 + 12016;
	// addi r4,r1,1440
	ctx.r4.s64 = ctx.r1.s64 + 1440;
	// addi r3,r3,2868
	ctx.r3.s64 = ctx.r3.s64 + 2868;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x826aae08
	sub_826AAE08(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r3,11104
	ctx.r3.s64 = ctx.r3.s64 + 11104;
	// bl 0x826aaed8
	sub_826AAED8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r3,12152
	ctx.r3.s64 = ctx.r3.s64 + 12152;
	// bl 0x826ab1b8
	sub_826AB1B8(ctx, base);
	// addi r11,r1,14223
	r11.s64 = ctx.r1.s64 + 14223;
	// addi r10,r1,15391
	ctx.r10.s64 = ctx.r1.s64 + 15391;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r5,r10,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r3,14224
	ctx.r3.s64 = ctx.r3.s64 + 14224;
	// stw r5,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r5.u32);
	// stw r6,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r6.u32);
	// bl 0x826ab320
	sub_826AB320(ctx, base);
	// addis r3,r30,1
	ctx.r3.s64 = r30.s64 + 65536;
	// addi r5,r1,7664
	ctx.r5.s64 = ctx.r1.s64 + 7664;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x826aa2d0
	sub_826AA2D0(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,9840
	ctx.r5.s64 = ctx.r1.s64 + 9840;
	// addi r4,r1,7664
	ctx.r4.s64 = ctx.r1.s64 + 7664;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// bl 0x826aa970
	sub_826AA970(ctx, base);
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,400
	ctx.r6.s64 = ctx.r1.s64 + 400;
	// addi r5,r1,2480
	ctx.r5.s64 = ctx.r1.s64 + 2480;
	// addi r4,r1,9840
	ctx.r4.s64 = ctx.r1.s64 + 9840;
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// addi r3,r3,18360
	ctx.r3.s64 = ctx.r3.s64 + 18360;
	// bl 0x826aaaa0
	sub_826AAAA0(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// addi r4,r1,2480
	ctx.r4.s64 = ctx.r1.s64 + 2480;
	// addi r3,r3,20452
	ctx.r3.s64 = ctx.r3.s64 + 20452;
	// bl 0x826aab70
	sub_826AAB70(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,13056
	ctx.r6.s64 = ctx.r1.s64 + 13056;
	// addi r5,r1,4560
	ctx.r5.s64 = ctx.r1.s64 + 4560;
	// addi r4,r1,2480
	ctx.r4.s64 = ctx.r1.s64 + 2480;
	// addi r3,r3,20988
	ctx.r3.s64 = ctx.r3.s64 + 20988;
	// bl 0x826aae08
	sub_826AAE08(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// addi r4,r1,4560
	ctx.r4.s64 = ctx.r1.s64 + 4560;
	// addi r3,r3,29224
	ctx.r3.s64 = ctx.r3.s64 + 29224;
	// bl 0x826aaed8
	sub_826AAED8(ctx, base);
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// addi r5,r1,3520
	ctx.r5.s64 = ctx.r1.s64 + 3520;
	// addi r4,r1,4560
	ctx.r4.s64 = ctx.r1.s64 + 4560;
	// addi r3,r3,30272
	ctx.r3.s64 = ctx.r3.s64 + 30272;
	// bl 0x826ab1b8
	sub_826AB1B8(ctx, base);
	// addi r11,r1,7791
	r11.s64 = ctx.r1.s64 + 7791;
	// addi r10,r1,9967
	ctx.r10.s64 = ctx.r1.s64 + 9967;
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r5,r10,0,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// addis r3,r30,2
	ctx.r3.s64 = r30.s64 + 131072;
	// addi r4,r1,3520
	ctx.r4.s64 = ctx.r1.s64 + 3520;
	// addi r3,r3,32344
	ctx.r3.s64 = ctx.r3.s64 + 32344;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// stw r6,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r6.u32);
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// bl 0x826ab320
	sub_826AB320(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// lfs f0,96(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 96);
	f0.f64 = double(temp.f32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,18352
	r11.u64 = r11.u64 | 18352;
	// ori r10,r10,236
	ctx.r10.u64 = ctx.r10.u64 | 236;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r9,r9,18356
	ctx.r9.u64 = ctx.r9.u64 | 18356;
	// lfsx f13,r30,r11
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,4560
	r11.s64 = ctx.r1.s64 + 4560;
	// lfsx f12,r30,r10
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,1440
	ctx.r10.s64 = ctx.r1.s64 + 1440;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// ori r8,r8,232
	ctx.r8.u64 = ctx.r8.u64 | 232;
	// lfsx f11,r30,r9
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r9.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// addi r7,r1,2480
	ctx.r7.s64 = ctx.r1.s64 + 2480;
	// addi r5,r1,5604
	ctx.r5.s64 = ctx.r1.s64 + 5604;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// subf r11,r31,r10
	r11.s64 = ctx.r10.s64 - r31.s64;
	// lfsx f10,r30,r8
	temp.u32 = PPC_LOAD_U32(r30.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r1,2484
	ctx.r8.s64 = ctx.r1.s64 + 2484;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - r31.s64;
	// addi r6,r1,5600
	ctx.r6.s64 = ctx.r1.s64 + 5600;
	// addi r22,r31,4
	r22.s64 = r31.s64 + 4;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// subf r11,r31,r9
	r11.s64 = ctx.r9.s64 - r31.s64;
	// addi r4,r1,4564
	ctx.r4.s64 = ctx.r1.s64 + 4564;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// subf r7,r31,r6
	ctx.r7.s64 = ctx.r6.s64 - r31.s64;
	// addi r3,r1,1444
	ctx.r3.s64 = ctx.r1.s64 + 1444;
	// addi r30,r1,404
	r30.s64 = ctx.r1.s64 + 404;
	// stw r22,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, r22.u32);
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
	// subf r11,r31,r8
	r11.s64 = ctx.r8.s64 - r31.s64;
	// addi r29,r1,2488
	r29.s64 = ctx.r1.s64 + 2488;
	// addi r28,r1,5608
	r28.s64 = ctx.r1.s64 + 5608;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// addi r27,r1,4568
	r27.s64 = ctx.r1.s64 + 4568;
	// addi r26,r1,1448
	r26.s64 = ctx.r1.s64 + 1448;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// subf r11,r31,r5
	r11.s64 = ctx.r5.s64 - r31.s64;
	// addi r25,r1,408
	r25.s64 = ctx.r1.s64 + 408;
	// addi r24,r1,2492
	r24.s64 = ctx.r1.s64 + 2492;
	// addi r23,r1,5612
	r23.s64 = ctx.r1.s64 + 5612;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// subf r11,r31,r4
	r11.s64 = ctx.r4.s64 - r31.s64;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// subf r11,r31,r3
	r11.s64 = ctx.r3.s64 - r31.s64;
	// addi r10,r1,1452
	ctx.r10.s64 = ctx.r1.s64 + 1452;
	// addi r9,r1,6664
	ctx.r9.s64 = ctx.r1.s64 + 6664;
	// addi r8,r1,3544
	ctx.r8.s64 = ctx.r1.s64 + 3544;
	// addi r7,r1,2500
	ctx.r7.s64 = ctx.r1.s64 + 2500;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r1,412
	ctx.r10.s64 = ctx.r1.s64 + 412;
	// addi r6,r1,5620
	ctx.r6.s64 = ctx.r1.s64 + 5620;
	// addi r5,r1,4580
	ctx.r5.s64 = ctx.r1.s64 + 4580;
	// addi r4,r1,1460
	ctx.r4.s64 = ctx.r1.s64 + 1460;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// subf r11,r31,r29
	r11.s64 = r29.s64 - r31.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r1,2496
	ctx.r10.s64 = ctx.r1.s64 + 2496;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// addi r30,r1,2504
	r30.s64 = ctx.r1.s64 + 2504;
	// addi r29,r1,5624
	r29.s64 = ctx.r1.s64 + 5624;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// subf r11,r31,r28
	r11.s64 = r28.s64 - r31.s64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r10,r1,5616
	ctx.r10.s64 = ctx.r1.s64 + 5616;
	// addi r28,r1,4584
	r28.s64 = ctx.r1.s64 + 4584;
	// addi r22,r1,3524
	r22.s64 = ctx.r1.s64 + 3524;
	// addi r21,r1,6648
	r21.s64 = ctx.r1.s64 + 6648;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// subf r11,r31,r27
	r11.s64 = r27.s64 - r31.s64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r10,r1,4576
	ctx.r10.s64 = ctx.r1.s64 + 4576;
	// addi r27,r1,1464
	r27.s64 = ctx.r1.s64 + 1464;
	// addi r20,r1,3528
	r20.s64 = ctx.r1.s64 + 3528;
	// addi r19,r1,6652
	r19.s64 = ctx.r1.s64 + 6652;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// subf r11,r31,r26
	r11.s64 = r26.s64 - r31.s64;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// addi r10,r1,1456
	ctx.r10.s64 = ctx.r1.s64 + 1456;
	// addi r26,r1,424
	r26.s64 = ctx.r1.s64 + 424;
	// addi r18,r1,3532
	r18.s64 = ctx.r1.s64 + 3532;
	// addi r17,r1,6656
	r17.s64 = ctx.r1.s64 + 6656;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// subf r11,r31,r25
	r11.s64 = r25.s64 - r31.s64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r25,r1,6640
	r25.s64 = ctx.r1.s64 + 6640;
	// addi r16,r1,3536
	r16.s64 = ctx.r1.s64 + 3536;
	// addi r15,r1,6660
	r15.s64 = ctx.r1.s64 + 6660;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// subf r11,r31,r24
	r11.s64 = r24.s64 - r31.s64;
	// addi r24,r1,3520
	r24.s64 = ctx.r1.s64 + 3520;
	// addi r14,r1,3540
	r14.s64 = ctx.r1.s64 + 3540;
	// subf r7,r31,r7
	ctx.r7.s64 = ctx.r7.s64 - r31.s64;
	// subf r6,r31,r6
	ctx.r6.s64 = ctx.r6.s64 - r31.s64;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// subf r11,r31,r23
	r11.s64 = r23.s64 - r31.s64;
	// addi r23,r1,6644
	r23.s64 = ctx.r1.s64 + 6644;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r11,r1,4572
	r11.s64 = ctx.r1.s64 + 4572;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - r31.s64;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r9,r31,r11
	ctx.r9.s64 = r11.s64 - r31.s64;
	// subf r11,r31,r15
	r11.s64 = r15.s64 - r31.s64;
	// subf r5,r31,r5
	ctx.r5.s64 = ctx.r5.s64 - r31.s64;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - r31.s64;
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - r31.s64;
	// subf r30,r31,r30
	r30.s64 = r30.s64 - r31.s64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// subf r11,r31,r14
	r11.s64 = r14.s64 - r31.s64;
	// subf r29,r31,r29
	r29.s64 = r29.s64 - r31.s64;
	// subf r28,r31,r28
	r28.s64 = r28.s64 - r31.s64;
	// subf r27,r31,r27
	r27.s64 = r27.s64 - r31.s64;
	// subf r26,r31,r26
	r26.s64 = r26.s64 - r31.s64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// subf r25,r31,r25
	r25.s64 = r25.s64 - r31.s64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r24,r31,r24
	r24.s64 = r24.s64 - r31.s64;
	// subf r23,r31,r23
	r23.s64 = r23.s64 - r31.s64;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// subf r22,r31,r22
	r22.s64 = r22.s64 - r31.s64;
	// subf r21,r31,r21
	r21.s64 = r21.s64 - r31.s64;
	// subf r20,r31,r20
	r20.s64 = r20.s64 - r31.s64;
	// subf r19,r31,r19
	r19.s64 = r19.s64 - r31.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// subf r18,r31,r18
	r18.s64 = r18.s64 - r31.s64;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r17,r31,r17
	r17.s64 = r17.s64 - r31.s64;
	// subf r16,r31,r16
	r16.s64 = r16.s64 - r31.s64;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_826ABE60:
	// addi r31,r1,4560
	r31.s64 = ctx.r1.s64 + 4560;
	// lwz r15,144(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r14,112(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lfs f9,-4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,8(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfsx f4,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	ctx.f4.f64 = double(temp.f32);
	// lwz r31,136(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lfsx f8,r15,r11
	temp.u32 = PPC_LOAD_U32(r15.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lwz r15,156(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// lfsx f2,r14,r11
	temp.u32 = PPC_LOAD_U32(r14.u32 + r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// lwz r14,120(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfsx f3,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f3.f64 = double(temp.f32);
	// addi r31,r1,2480
	r31.s64 = ctx.r1.s64 + 2480;
	// lfsx f6,r15,r11
	temp.u32 = PPC_LOAD_U32(r15.u32 + r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r15,r1,1440
	r15.s64 = ctx.r1.s64 + 1440;
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfsx f1,r14,r11
	temp.u32 = PPC_LOAD_U32(r14.u32 + r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f3,f3,f11
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// lwz r14,100(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fmadds f2,f2,f13,f1
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f1.f64));
	// lfs f1,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfsx f30,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	f30.f64 = double(temp.f32);
	// lwz r31,188(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lfsx f29,r10,r15
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r15.u32);
	f29.f64 = double(temp.f32);
	// addi r15,r1,400
	r15.s64 = ctx.r1.s64 + 400;
	// fmadds f9,f30,f13,f9
	ctx.f9.f64 = double(float(f30.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f4,f29,f10,f4
	ctx.f4.f64 = double(float(f29.f64 * ctx.f10.f64 + ctx.f4.f64));
	// lfsx f31,r14,r11
	temp.u32 = PPC_LOAD_U32(r14.u32 + r11.u32);
	f31.f64 = double(temp.f32);
	// lwz r14,196(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// fmadds f8,f31,f10,f8
	ctx.f8.f64 = double(float(f31.f64 * ctx.f10.f64 + ctx.f8.f64));
	// lfsx f28,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f28.f64 = double(temp.f32);
	// lwz r31,172(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// fmadds f7,f28,f13,f7
	ctx.f7.f64 = double(float(f28.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfsx f31,r14,r11
	temp.u32 = PPC_LOAD_U32(r14.u32 + r11.u32);
	f31.f64 = double(temp.f32);
	// lwz r14,168(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfsx f27,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f27.f64 = double(temp.f32);
	// lwz r31,180(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// fmadds f6,f27,f10,f6
	ctx.f6.f64 = double(float(f27.f64 * ctx.f10.f64 + ctx.f6.f64));
	// lfsx f27,r10,r15
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r15.u32);
	f27.f64 = double(temp.f32);
	// lwz r15,200(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// fmadds f2,f12,f1,f2
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f1.f64 + ctx.f2.f64));
	// fadds f4,f4,f27
	ctx.f4.f64 = double(float(ctx.f4.f64 + f27.f64));
	// lfsx f29,r14,r11
	temp.u32 = PPC_LOAD_U32(r14.u32 + r11.u32);
	f29.f64 = double(temp.f32);
	// fadds f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 + f31.f64));
	// lfsx f26,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f26.f64 = double(temp.f32);
	// lwz r31,160(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// fmadds f5,f26,f13,f5
	ctx.f5.f64 = double(float(f26.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lwz r14,184(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// fadds f7,f7,f29
	ctx.f7.f64 = double(float(ctx.f7.f64 + f29.f64));
	// lfsx f30,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f30.f64 = double(temp.f32);
	// addi r31,r1,5600
	r31.s64 = ctx.r1.s64 + 5600;
	// fmadds f3,f30,f10,f3
	ctx.f3.f64 = double(float(f30.f64 * ctx.f10.f64 + ctx.f3.f64));
	// lfsx f30,r15,r11
	temp.u32 = PPC_LOAD_U32(r15.u32 + r11.u32);
	f30.f64 = double(temp.f32);
	// lwz r15,176(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lfsx f27,r14,r11
	temp.u32 = PPC_LOAD_U32(r14.u32 + r11.u32);
	f27.f64 = double(temp.f32);
	// fadds f6,f6,f30
	ctx.f6.f64 = double(float(ctx.f6.f64 + f30.f64));
	// lfsx f28,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	f28.f64 = double(temp.f32);
	// addi r31,r1,6640
	r31.s64 = ctx.r1.s64 + 6640;
	// fadds f9,f9,f28
	ctx.f9.f64 = double(float(ctx.f9.f64 + f28.f64));
	// lfsx f26,r15,r11
	temp.u32 = PPC_LOAD_U32(r15.u32 + r11.u32);
	f26.f64 = double(temp.f32);
	// lwz r15,192(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// fadds f5,f5,f26
	ctx.f5.f64 = double(float(ctx.f5.f64 + f26.f64));
	// lfsx f28,r15,r11
	temp.u32 = PPC_LOAD_U32(r15.u32 + r11.u32);
	f28.f64 = double(temp.f32);
	// addi r15,r1,3520
	r15.s64 = ctx.r1.s64 + 3520;
	// fadds f3,f3,f28
	ctx.f3.f64 = double(float(ctx.f3.f64 + f28.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfsx f9,r10,r31
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, temp.u32);
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * f0.f64));
	// stfsx f9,r10,r15
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + r15.u32, temp.u32);
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * f0.f64));
	// stfsx f9,r25,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r25.u32 + r11.u32, temp.u32);
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfsx f9,r24,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r24.u32 + r11.u32, temp.u32);
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfsx f9,r23,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r23.u32 + r11.u32, temp.u32);
	// lwz r31,164(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * f0.f64));
	// stfsx f9,r22,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r22.u32 + r11.u32, temp.u32);
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * f0.f64));
	// stfsx f9,r21,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r21.u32 + r11.u32, temp.u32);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * f0.f64));
	// stfsx f9,r20,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r20.u32 + r11.u32, temp.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lfs f9,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f8.f64 = double(temp.f32);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fmuls f9,f9,f12
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// lfs f7,16(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f5,20(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f7,f7,f12
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lfsx f4,r5,r11
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + r11.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f5,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
	// lfsx f30,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	f30.f64 = double(temp.f32);
	// lfsx f6,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f6.f64 = double(temp.f32);
	// lwz r31,124(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// lfsx f29,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	f29.f64 = double(temp.f32);
	// fmuls f4,f4,f11
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f11.f64));
	// lfs f3,24(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f3,f3,f12
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfsx f28,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	f28.f64 = double(temp.f32);
	// lfsx f2,r28,r11
	temp.u32 = PPC_LOAD_U32(r28.u32 + r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r31,132(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// fmadds f9,f27,f13,f9
	ctx.f9.f64 = double(float(f27.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfsx f26,r30,r11
	temp.u32 = PPC_LOAD_U32(r30.u32 + r11.u32);
	f26.f64 = double(temp.f32);
	// fmadds f8,f1,f10,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f10.f64 + ctx.f8.f64));
	// lfsx f25,r27,r11
	temp.u32 = PPC_LOAD_U32(r27.u32 + r11.u32);
	f25.f64 = double(temp.f32);
	// fmuls f2,f2,f11
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// lfsx f23,r26,r11
	temp.u32 = PPC_LOAD_U32(r26.u32 + r11.u32);
	f23.f64 = double(temp.f32);
	// fmadds f5,f29,f13,f5
	ctx.f5.f64 = double(float(f29.f64 * ctx.f13.f64 + ctx.f5.f64));
	// lfsx f29,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	f29.f64 = double(temp.f32);
	// lfsx f31,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f31.f64 = double(temp.f32);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// fmadds f7,f31,f13,f7
	ctx.f7.f64 = double(float(f31.f64 * ctx.f13.f64 + ctx.f7.f64));
	// lfsx f31,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	f31.f64 = double(temp.f32);
	// fmadds f6,f30,f10,f6
	ctx.f6.f64 = double(float(f30.f64 * ctx.f10.f64 + ctx.f6.f64));
	// lfsx f30,r6,r11
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	f30.f64 = double(temp.f32);
	// fmadds f4,f28,f10,f4
	ctx.f4.f64 = double(float(f28.f64 * ctx.f10.f64 + ctx.f4.f64));
	// lfsx f28,r29,r11
	temp.u32 = PPC_LOAD_U32(r29.u32 + r11.u32);
	f28.f64 = double(temp.f32);
	// fmadds f3,f26,f13,f3
	ctx.f3.f64 = double(float(f26.f64 * ctx.f13.f64 + ctx.f3.f64));
	// lfsx f24,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f24.f64 = double(temp.f32);
	// lwz r31,116(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fadds f9,f9,f24
	ctx.f9.f64 = double(float(ctx.f9.f64 + f24.f64));
	// fmadds f2,f25,f10,f2
	ctx.f2.f64 = double(float(f25.f64 * ctx.f10.f64 + ctx.f2.f64));
	// fadds f5,f5,f30
	ctx.f5.f64 = double(float(ctx.f5.f64 + f30.f64));
	// lfsx f27,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	f27.f64 = double(temp.f32);
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fadds f8,f8,f27
	ctx.f8.f64 = double(float(ctx.f8.f64 + f27.f64));
	// fadds f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 + f31.f64));
	// fadds f4,f4,f29
	ctx.f4.f64 = double(float(ctx.f4.f64 + f29.f64));
	// fadds f3,f3,f28
	ctx.f3.f64 = double(float(ctx.f3.f64 + f28.f64));
	// lfsx f1,r31,r11
	temp.u32 = PPC_LOAD_U32(r31.u32 + r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r31,104(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// fadds f7,f7,f1
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f1.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfsx f9,r19,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r19.u32 + r11.u32, temp.u32);
	// fadds f2,f2,f23
	ctx.f2.f64 = double(float(ctx.f2.f64 + f23.f64));
	// fmuls f9,f8,f0
	ctx.f9.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfsx f9,r18,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r18.u32 + r11.u32, temp.u32);
	// fmuls f9,f7,f0
	ctx.f9.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfsx f9,r17,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r17.u32 + r11.u32, temp.u32);
	// fmuls f9,f6,f0
	ctx.f9.f64 = double(float(ctx.f6.f64 * f0.f64));
	// stfsx f9,r16,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r16.u32 + r11.u32, temp.u32);
	// fmuls f9,f5,f0
	ctx.f9.f64 = double(float(ctx.f5.f64 * f0.f64));
	// stfsx f9,r31,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// lwz r31,96(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f9,f4,f0
	ctx.f9.f64 = double(float(ctx.f4.f64 * f0.f64));
	// stfsx f9,r31,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// fmuls f9,f3,f0
	ctx.f9.f64 = double(float(ctx.f3.f64 * f0.f64));
	// stfsx f9,r31,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * f0.f64));
	// stfsx f9,r31,r11
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmpwi cr6,r10,1024
	cr6.compare<int32_t>(ctx.r10.s32, 1024, xer);
	// blt cr6,0x826abe60
	if (cr6.lt) goto loc_826ABE60;
	// lwz r11,17908(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17908);
	// lwz r31,17908(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17908);
	// addis r10,r11,3
	ctx.r10.s64 = r11.s64 + 196608;
	// addi r10,r10,-29064
	ctx.r10.s64 = ctx.r10.s64 + -29064;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// addis r10,r11,3
	ctx.r10.s64 = r11.s64 + 196608;
	// addis r11,r11,3
	r11.s64 = r11.s64 + 196608;
	// addi r10,r10,-26992
	ctx.r10.s64 = ctx.r10.s64 + -26992;
	// addi r11,r11,-24920
	r11.s64 = r11.s64 + -24920;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r11.u32);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,38556
	r11.u64 = r11.u64 | 38556;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,40624
	r11.u64 = r11.u64 | 40624;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,40656
	r11.u64 = r11.u64 | 40656;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,40676
	r11.u64 = r11.u64 | 40676;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-29052
	r11.s64 = r11.s64 + -29052;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// lwz r17,136(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r17,16
	ctx.r3.s64 = r17.s64 + 16;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-24828
	r11.s64 = r11.s64 + -24828;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-8412
	r11.s64 = r11.s64 + -8412;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-24816
	r11.s64 = r11.s64 + -24816;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-8384
	r11.s64 = r11.s64 + -8384;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-6312
	r11.s64 = r11.s64 + -6312;
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-4244
	r11.s64 = r11.s64 + -4244;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-4212
	r11.s64 = r11.s64 + -4212;
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-4192
	r11.s64 = r11.s64 + -4192;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-4160
	r11.s64 = r11.s64 + -4160;
	// stw r11,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,12256
	r11.s64 = r11.s64 + 12256;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r11.u32);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r30,r11,16
	r30.s64 = r11.s64 + 16;
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-4148
	r11.s64 = r11.s64 + -4148;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,12284
	r11.s64 = r11.s64 + 12284;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,20504
	r11.s64 = r11.s64 + 20504;
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// addis r9,r31,3
	ctx.r9.s64 = r31.s64 + 196608;
	// addi r10,r10,-8396
	ctx.r10.s64 = ctx.r10.s64 + -8396;
	// addis r26,r31,3
	r26.s64 = r31.s64 + 196608;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r29,r10,16
	r29.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,28720
	r11.s64 = r11.s64 + 28720;
	// stw r10,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r10.u32);
	// addis r25,r31,3
	r25.s64 = r31.s64 + 196608;
	// addis r10,r31,4
	ctx.r10.s64 = r31.s64 + 262144;
	// addis r24,r31,4
	r24.s64 = r31.s64 + 262144;
	// addi r9,r9,-6324
	ctx.r9.s64 = ctx.r9.s64 + -6324;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addis r8,r31,3
	ctx.r8.s64 = r31.s64 + 196608;
	// addi r11,r11,-28600
	r11.s64 = r11.s64 + -28600;
	// addi r10,r10,168
	ctx.r10.s64 = ctx.r10.s64 + 168;
	// addi r26,r26,12272
	r26.s64 = r26.s64 + 12272;
	// stw r9,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r9.u32);
	// addi r25,r25,28708
	r25.s64 = r25.s64 + 28708;
	// addi r24,r24,-28612
	r24.s64 = r24.s64 + -28612;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addi r8,r8,-24836
	ctx.r8.s64 = ctx.r8.s64 + -24836;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// addi r11,r11,-24484
	r11.s64 = r11.s64 + -24484;
	// stw r26,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, r26.u32);
	// addis r7,r31,3
	ctx.r7.s64 = r31.s64 + 196608;
	// stw r25,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r25.u32);
	// addis r6,r31,3
	ctx.r6.s64 = r31.s64 + 196608;
	// stw r24,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r24.u32);
	// addis r22,r31,3
	r22.s64 = r31.s64 + 196608;
	// addis r21,r31,3
	r21.s64 = r31.s64 + 196608;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addis r5,r31,3
	ctx.r5.s64 = r31.s64 + 196608;
	// addi r11,r11,-8072
	r11.s64 = r11.s64 + -8072;
	// addis r4,r31,4
	ctx.r4.s64 = r31.s64 + 262144;
	// addis r20,r31,3
	r20.s64 = r31.s64 + 196608;
	// addi r7,r7,-24896
	ctx.r7.s64 = ctx.r7.s64 + -24896;
	// addi r6,r6,-4228
	ctx.r6.s64 = ctx.r6.s64 + -4228;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addi r22,r22,-24864
	r22.s64 = r22.s64 + -24864;
	// addi r11,r11,-8036
	r11.s64 = r11.s64 + -8036;
	// addi r21,r21,-4196
	r21.s64 = r21.s64 + -4196;
	// addi r5,r5,-4168
	ctx.r5.s64 = ctx.r5.s64 + -4168;
	// addi r28,r9,16
	r28.s64 = ctx.r9.s64 + 16;
	// addi r4,r4,-24492
	ctx.r4.s64 = ctx.r4.s64 + -24492;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addi r20,r20,20488
	r20.s64 = r20.s64 + 20488;
	// addi r11,r11,184
	r11.s64 = r11.s64 + 184;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addi r11,r11,8400
	r11.s64 = r11.s64 + 8400;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addi r11,r11,16616
	r11.s64 = r11.s64 + 16616;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addi r11,r11,20732
	r11.s64 = r11.s64 + 20732;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r11.u32);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// addi r11,r11,-28392
	r11.s64 = r11.s64 + -28392;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addi r11,r11,20744
	r11.s64 = r11.s64 + 20744;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// addi r11,r11,-24472
	r11.s64 = r11.s64 + -24472;
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-8420
	r11.s64 = r11.s64 + -8420;
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r11.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-4252
	r11.s64 = r11.s64 + -4252;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, r11.u32);
	// addi r11,r8,24
	r11.s64 = ctx.r8.s64 + 24;
	// addis r23,r31,4
	r23.s64 = r31.s64 + 262144;
	// lwz r19,212(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addis r10,r31,4
	ctx.r10.s64 = r31.s64 + 262144;
	// addi r23,r23,20724
	r23.s64 = r23.s64 + 20724;
	// addi r10,r10,-8076
	ctx.r10.s64 = ctx.r10.s64 + -8076;
	// addis r9,r31,4
	ctx.r9.s64 = r31.s64 + 262144;
	// li r18,256
	r18.s64 = 256;
	// addi r9,r9,16604
	ctx.r9.s64 = ctx.r9.s64 + 16604;
	// stw r23,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r23.u32);
	// addis r23,r31,5
	r23.s64 = r31.s64 + 327680;
	// stw r10,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r10.u32);
	// addis r10,r31,4
	ctx.r10.s64 = r31.s64 + 262144;
	// addi r23,r23,-28396
	r23.s64 = r23.s64 + -28396;
	// addi r10,r10,-8048
	ctx.r10.s64 = ctx.r10.s64 + -8048;
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r18.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r27,r20,20
	r27.s64 = r20.s64 + 20;
	// addi r9,r4,24
	ctx.r9.s64 = ctx.r4.s64 + 24;
	// addi r26,r26,16
	r26.s64 = r26.s64 + 16;
	// stw r23,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r23.u32);
	// li r23,0
	r23.s64 = 0;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// addis r10,r31,4
	ctx.r10.s64 = r31.s64 + 262144;
	// addi r25,r25,16
	r25.s64 = r25.s64 + 16;
	// addi r10,r10,8388
	ctx.r10.s64 = ctx.r10.s64 + 8388;
	// addi r24,r24,16
	r24.s64 = r24.s64 + 16;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r23.u32);
	// lwz r23,204(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// subf r16,r19,r23
	r16.s64 = r23.s64 - r19.s64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// addi r10,r10,12248
	ctx.r10.s64 = ctx.r10.s64 + 12248;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// lwz r16,220(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// subf r16,r19,r16
	r16.s64 = r16.s64 - r19.s64;
	// stw r10,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r10.u32);
	// addi r10,r5,24
	ctx.r10.s64 = ctx.r5.s64 + 24;
	// stw r16,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r16.u32);
	// lwz r16,208(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// subf r16,r19,r16
	r16.s64 = r16.s64 - r19.s64;
	// stw r16,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r16.u32);
	// lwz r16,216(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// subf r19,r19,r16
	r19.s64 = r16.s64 - r19.s64;
	// lis r16,-32254
	r16.s64 = -2113798144;
	// stw r19,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r19.u32);
	// lis r19,-32255
	r19.s64 = -2113863680;
	// lfs f0,-27448(r16)
	temp.u32 = PPC_LOAD_U32(r16.u32 + -27448);
	f0.f64 = double(temp.f32);
	// stfs f0,344(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 344, temp.u32);
	// lfs f18,560(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 560);
	f18.f64 = double(temp.f32);
	// b 0x826ac448
	goto loc_826AC448;
loc_826AC444:
	// lwz r18,120(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_826AC448:
	// lwz r19,100(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r19,r19,27
	r19.u64 = r19.u32 & 0x1F;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// bne cr6,0x826ac468
	if (!cr6.eq) goto loc_826AC468;
	// lwz r19,148(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// dcbt r18,r19
	// lwz r19,140(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// dcbt r18,r19
loc_826AC468:
	// lwz r19,116(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lfs f8,8(r17)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r17.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r15,164(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lfs f15,4(r17)
	temp.u32 = PPC_LOAD_U32(r17.u32 + 4);
	f15.f64 = double(temp.f32);
	// lwz r18,0(r17)
	r18.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// addi r17,r1,6640
	r17.s64 = ctx.r1.s64 + 6640;
	// addi r16,r1,3520
	r16.s64 = ctx.r1.s64 + 3520;
	// addi r14,r1,12016
	r14.s64 = ctx.r1.s64 + 12016;
	// lfs f13,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lwz r19,128(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lfs f0,0(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r15,184(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lfs f12,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r19,132(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfs f11,0(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r15,192(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lfs f5,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lwz r19,204(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lfs f7,0(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lwz r15,176(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// add r19,r19,r23
	r19.u64 = r19.u64 + r23.u64;
	// lfs f31,0(r15)
	temp.u32 = PPC_LOAD_U32(r15.u32 + 0);
	f31.f64 = double(temp.f32);
	// lwz r15,112(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// lwz r19,124(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lfs f4,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lwz r19,0(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r19,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r19.u32);
	// mr r19,r15
	r19.u64 = r15.u64;
	// lfsx f10,r19,r17
	temp.u32 = PPC_LOAD_U32(r19.u32 + r17.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r17,r1,13056
	r17.s64 = ctx.r1.s64 + 13056;
	// lfsx f9,r19,r16
	temp.u32 = PPC_LOAD_U32(r19.u32 + r16.u32);
	ctx.f9.f64 = double(temp.f32);
	// lwz r19,200(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// fadds f6,f10,f0
	ctx.f6.f64 = double(float(ctx.f10.f64 + f0.f64));
	// fadds f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// lfs f30,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f30.f64 = double(temp.f32);
	// lwz r19,168(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lfs f29,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f29.f64 = double(temp.f32);
	// lwz r19,196(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lfs f28,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f28.f64 = double(temp.f32);
	// lwz r19,160(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lfs f27,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f27.f64 = double(temp.f32);
	// lwz r19,180(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lfs f3,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lwz r19,172(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// lfs f26,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f26.f64 = double(temp.f32);
	// lwz r19,188(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lfs f25,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f25.f64 = double(temp.f32);
	// lwz r19,348(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lfs f24,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f24.f64 = double(temp.f32);
	// lwz r19,236(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lfs f23,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f23.f64 = double(temp.f32);
	// lwz r19,232(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lfs f22,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f22.f64 = double(temp.f32);
	// lwz r19,356(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lfs f21,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f21.f64 = double(temp.f32);
	// lwz r19,240(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lfs f2,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lwz r19,340(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lfs f20,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f20.f64 = double(temp.f32);
	// lwz r19,248(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lfs f19,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f19.f64 = double(temp.f32);
	// lwz r19,372(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r19,256(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// stfs f0,332(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r19,224(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stfs f0,376(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 376, temp.u32);
	// lfs f11,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lwz r19,264(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r19,324(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r19,272(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// stfs f0,244(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 244, temp.u32);
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,260(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 260, temp.u32);
	// lwz r19,328(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// fadds f16,f9,f4
	f16.f64 = double(float(ctx.f9.f64 + ctx.f4.f64));
	// lwz r15,84(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fadds f17,f6,f5
	f17.f64 = double(float(ctx.f6.f64 + ctx.f5.f64));
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r19,280(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stfs f0,252(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 252, temp.u32);
	// lfsx f1,r15,r17
	temp.u32 = PPC_LOAD_U32(r15.u32 + r17.u32);
	ctx.f1.f64 = double(temp.f32);
	// lwz r17,104(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfsx f10,r15,r14
	temp.u32 = PPC_LOAD_U32(r15.u32 + r14.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,0(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 0);
	f0.f64 = double(temp.f32);
	// lwz r19,0(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stfs f0,284(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// fmuls f17,f17,f18
	f17.f64 = double(float(f17.f64 * f18.f64));
	// subf r19,r18,r19
	r19.s64 = r19.s64 - r18.s64;
	// lfsx f14,r17,r23
	temp.u32 = PPC_LOAD_U32(r17.u32 + r23.u32);
	f14.f64 = double(temp.f32);
	// lwz r18,88(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// fmuls f16,f16,f18
	f16.f64 = double(float(f16.f64 * f18.f64));
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// lwz r17,136(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r18,r23
	temp.u32 = PPC_LOAD_U32(r18.u32 + r23.u32);
	f0.f64 = double(temp.f32);
	// lwz r18,92(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfsx f9,r19,r3
	temp.u32 = PPC_LOAD_U32(r19.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f8,f8,f9,f14
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + f14.f64));
	// lfs f6,0(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 0);
	ctx.f6.f64 = double(temp.f32);
	// lwz r18,336(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// fadds f8,f8,f13
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// fadds f8,f8,f12
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f12.f64));
	// stfsx f8,r18,r3
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r18.u32 + ctx.r3.u32, temp.u32);
	// lwz r19,0(r3)
	r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,23
	r19.u64 = r19.u32 & 0x1FF;
	// stw r19,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r19.u32);
	// fmadds f9,f15,f8,f9
	ctx.f9.f64 = double(float(f15.f64 * ctx.f8.f64 + ctx.f9.f64));
	// lwz r19,156(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// stfs f9,12(r17)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r17.u32 + 12, temp.u32);
	// lwz r18,0(r30)
	r18.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fadds f9,f10,f31
	ctx.f9.f64 = double(float(ctx.f10.f64 + f31.f64));
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f15,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	f15.f64 = double(temp.f32);
	// lfs f14,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	f14.f64 = double(temp.f32);
	// subf r18,r16,r18
	r18.s64 = r18.s64 - r16.s64;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// addi r16,r18,2
	r16.s64 = r18.s64 + 2;
	// lwz r18,0(r30)
	r18.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r16,r30
	temp.u32 = PPC_LOAD_U32(r16.u32 + r30.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f7,f15,f8,f7
	ctx.f7.f64 = double(float(f15.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfsx f7,r18,r30
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r18.u32 + r30.u32, temp.u32);
	// lwz r18,0(r30)
	r18.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// stw r18,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r18.u32);
	// fmadds f8,f7,f14,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * f14.f64 + ctx.f8.f64));
	// stfs f8,12(r19)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r19.u32 + 12, temp.u32);
	// lwz r19,288(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// addi r18,r19,12
	r18.s64 = r19.s64 + 12;
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f8,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r16,r16,31
	r16.u64 = r16.u32 & 0x1;
	// lfs f7,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r16,r16,4
	r16.s64 = r16.s64 + 4;
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f31,r16,r19
	temp.u32 = PPC_LOAD_U32(r16.u32 + r19.u32);
	f31.f64 = double(temp.f32);
	// stfs f7,8(r18)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r18.u32 + 8, temp.u32);
	// fmadds f8,f31,f8,f9
	ctx.f8.f64 = double(float(f31.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfs f9,4(r18)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r18.u32 + 4, temp.u32);
	// stfs f8,8(r19)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// lwz r19,0(r7)
	r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lfs f8,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r18,r19,31
	r18.u64 = r19.u32 & 0x1;
	// lfs f7,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r19,r7,20
	r19.s64 = ctx.r7.s64 + 20;
	// lfs f31,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f31.f64 = double(temp.f32);
	// addi r18,r18,6
	r18.s64 = r18.s64 + 6;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f15,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	f15.f64 = double(temp.f32);
	// lfsx f9,r18,r7
	temp.u32 = PPC_LOAD_U32(r18.u32 + ctx.r7.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f7,f7,f9
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stfs f15,8(r19)
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// fmadds f9,f8,f9,f30
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + f30.f64));
	// stfs f9,4(r19)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r19.u32 + 4, temp.u32);
	// addi r19,r22,16
	r19.s64 = r22.s64 + 16;
	// lfs f30,0(r23)
	temp.u32 = PPC_LOAD_U32(r23.u32 + 0);
	f30.f64 = double(temp.f32);
	// fmadds f9,f9,f31,f7
	ctx.f9.f64 = double(float(ctx.f9.f64 * f31.f64 + ctx.f7.f64));
	// stfs f9,16(r7)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r7.u32 + 16, temp.u32);
	// lwz r18,0(r22)
	r18.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lfs f9,12(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r18,r18,31
	r18.u64 = r18.u32 & 0x1;
	// addi r18,r18,5
	r18.s64 = r18.s64 + 5;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r18,r22
	temp.u32 = PPC_LOAD_U32(r18.u32 + r22.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmadds f9,f7,f9,f29
	ctx.f9.f64 = double(float(ctx.f7.f64 * ctx.f9.f64 + f29.f64));
	// stfs f9,4(r19)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r19.u32 + 4, temp.u32);
	// stfs f8,8(r19)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// lfs f8,8(r22)
	temp.u32 = PPC_LOAD_U32(r22.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// stfs f9,4(r22)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r22.u32 + 4, temp.u32);
	// lwz r19,0(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f8,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lwz r18,12(r8)
	r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lfs f7,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f7.f64 = double(temp.f32);
	// mr r16,r19
	r16.u64 = r19.u64;
	// subf r19,r18,r19
	r19.s64 = r19.s64 - r18.s64;
	// lwz r18,0(r8)
	r18.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi r19,r19,20
	r19.u64 = r19.u32 & 0xFFF;
	// subf r18,r18,r16
	r18.s64 = r16.s64 - r18.s64;
	// addi r16,r19,2
	r16.s64 = r19.s64 + 2;
	// clrlwi r19,r18,20
	r19.u64 = r18.u32 & 0xFFF;
	// rlwinm r18,r16,2,0,29
	r18.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r18,r11
	temp.u32 = PPC_LOAD_U32(r18.u32 + r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f7,f9,f7
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f9,344(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f31,f28,f9
	f31.f64 = double(float(f28.f64 * ctx.f9.f64));
	// lfsx f13,r19,r11
	temp.u32 = PPC_LOAD_U32(r19.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f13,8(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f7,20(r8)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r8.u32 + 20, temp.u32);
	// lwz r19,0(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r19,r11
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r19.u32 + r11.u32, temp.u32);
	// lwz r19,0(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,20
	r19.u64 = r19.u32 & 0xFFF;
	// stw r19,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r19.u32);
	// lwz r19,296(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f13,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r18,r18,31
	r18.u64 = r18.u32 & 0x1;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r18,r19
	temp.u32 = PPC_LOAD_U32(r18.u32 + r19.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f13,8(r19)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// addi r19,r19,12
	r19.s64 = r19.s64 + 12;
	// lfs f13,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r19)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// stfs f27,4(r19)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r19.u32 + 4, temp.u32);
	// lwz r18,0(r29)
	r18.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r19,352(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r14,r18,2,0,29
	r14.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,0(r29)
	r18.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f8,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// subf r18,r16,r18
	r18.s64 = r18.s64 - r16.s64;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r29
	temp.u32 = PPC_LOAD_U32(r18.u32 + r29.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f8,f13,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 + f30.f64));
	// stfsx f12,r14,r29
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r14.u32 + r29.u32, temp.u32);
	// lwz r18,0(r29)
	r18.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmadds f13,f12,f7,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f13.f64));
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// fmuls f9,f22,f9
	ctx.f9.f64 = double(float(f22.f64 * ctx.f9.f64));
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// stw r18,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r18.u32);
	// stfs f13,12(r19)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r19.u32 + 12, temp.u32);
	// lwz r19,304(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lwz r16,0(r28)
	r16.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r18,r16
	r18.u64 = r16.u64;
	// lwz r14,0(r19)
	r14.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f12,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f8,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// subf r16,r14,r16
	r16.s64 = r16.s64 - r14.s64;
	// addi r14,r18,2
	r14.s64 = r18.s64 + 2;
	// clrlwi r18,r16,23
	r18.u64 = r16.u32 & 0x1FF;
	// rlwinm r16,r14,2,0,29
	r16.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r28
	temp.u32 = PPC_LOAD_U32(r18.u32 + r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f26
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f26.f64));
	// stfsx f12,r16,r28
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r16.u32 + r28.u32, temp.u32);
	// lwz r18,0(r28)
	r18.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,23
	r18.u64 = r18.u32 & 0x1FF;
	// stw r18,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r18.u32);
	// fmadds f12,f12,f8,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f13.f64));
	// stfs f12,12(r19)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r19.u32 + 12, temp.u32);
	// lwz r19,360(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// fadds f13,f1,f25
	ctx.f13.f64 = double(float(ctx.f1.f64 + f25.f64));
	// addi r18,r19,12
	r18.s64 = r19.s64 + 12;
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f12,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r16,r16,31
	r16.u64 = r16.u32 & 0x1;
	// lfs f8,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r16,r16,4
	r16.s64 = r16.s64 + 4;
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f7,r16,r19
	temp.u32 = PPC_LOAD_U32(r16.u32 + r19.u32);
	ctx.f7.f64 = double(temp.f32);
	// stfs f13,4(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r18.u32 + 4, temp.u32);
	// fmadds f12,f7,f12,f13
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f8,8(r18)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r18.u32 + 8, temp.u32);
	// stfs f12,8(r19)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// lwz r19,0(r6)
	r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f12,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r18,r19,31
	r18.u64 = r19.u32 & 0x1;
	// lfs f8,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// addi r19,r6,20
	r19.s64 = ctx.r6.s64 + 20;
	// lfs f7,12(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f7.f64 = double(temp.f32);
	// addi r18,r18,6
	r18.s64 = r18.s64 + 6;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	f31.f64 = double(temp.f32);
	// lfsx f13,r18,r6
	temp.u32 = PPC_LOAD_U32(r18.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f13,f24
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + f24.f64));
	// stfs f31,8(r19)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// stfs f12,4(r19)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r19.u32 + 4, temp.u32);
	// addi r19,r21,16
	r19.s64 = r21.s64 + 16;
	// fmuls f8,f12,f8
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f8.f64));
	// fmadds f13,f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f8.f64));
	// stfs f13,16(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 16, temp.u32);
	// lwz r18,0(r21)
	r18.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lfs f13,12(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r18,r18,31
	r18.u64 = r18.u32 & 0x1;
	// addi r18,r18,5
	r18.s64 = r18.s64 + 5;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r18,r21
	temp.u32 = PPC_LOAD_U32(r18.u32 + r21.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f13,f8,f13,f23
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + f23.f64));
	// stfs f13,4(r19)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r19.u32 + 4, temp.u32);
	// stfs f12,8(r19)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// lfs f12,8(r21)
	temp.u32 = PPC_LOAD_U32(r21.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,4(r21)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r21.u32 + 4, temp.u32);
	// lwz r19,0(r10)
	r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f12,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r18,12(r5)
	r18.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lfs f8,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// mr r16,r19
	r16.u64 = r19.u64;
	// subf r19,r18,r19
	r19.s64 = r19.s64 - r18.s64;
	// lwz r18,0(r5)
	r18.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r19,r19,20
	r19.u64 = r19.u32 & 0xFFF;
	// subf r18,r18,r16
	r18.s64 = r16.s64 - r18.s64;
	// addi r16,r19,2
	r16.s64 = r19.s64 + 2;
	// clrlwi r19,r18,20
	r19.u64 = r18.u32 & 0xFFF;
	// rlwinm r18,r16,2,0,29
	r18.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r10
	temp.u32 = PPC_LOAD_U32(r18.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f8,f13
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// lfsx f7,r19,r10
	temp.u32 = PPC_LOAD_U32(r19.u32 + ctx.r10.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// stfs f13,20(r5)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r5.u32 + 20, temp.u32);
	// stfs f12,8(r5)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lwz r19,0(r10)
	r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// fadds f13,f0,f20
	ctx.f13.f64 = double(float(f0.f64 + f20.f64));
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f9,r19,r10
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r19.u32 + ctx.r10.u32, temp.u32);
	// lwz r19,0(r10)
	r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,20
	r19.u64 = r19.u32 & 0xFFF;
	// stw r19,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r19.u32);
	// lwz r19,312(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f12,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r18,r18,31
	r18.u64 = r18.u32 & 0x1;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r18,r19
	temp.u32 = PPC_LOAD_U32(r18.u32 + r19.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f12,8(r19)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// addi r19,r19,12
	r19.s64 = r19.s64 + 12;
	// lfs f12,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,8(r19)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r19.u32 + 8, temp.u32);
	// stfs f21,4(r19)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r19.u32 + 4, temp.u32);
	// lwz r18,0(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r19,368(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r14,r18,2,0,29
	r14.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,0(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f9,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// subf r18,r16,r18
	r18.s64 = r18.s64 - r16.s64;
	// clrlwi r18,r18,21
	r18.u64 = r18.u32 & 0x7FF;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r18,r26
	temp.u32 = PPC_LOAD_U32(r18.u32 + r26.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f9,f12,f9,f6
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fadds f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f2.f64));
	// fadds f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// stfsx f9,r14,r26
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r14.u32 + r26.u32, temp.u32);
	// lwz r18,0(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,21
	r18.u64 = r18.u32 & 0x7FF;
	// stw r18,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r18.u32);
	// fmadds f12,f9,f8,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f8.f64 + ctx.f12.f64));
	// stfs f12,12(r19)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r19.u32 + 12, temp.u32);
	// lwz r18,0(r27)
	r18.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r16,0(r20)
	r16.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lfs f9,12(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// mr r19,r18
	r19.u64 = r18.u64;
	// lfs f8,4(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// subf r18,r16,r18
	r18.s64 = r18.s64 - r16.s64;
	// lfs f7,8(r20)
	temp.u32 = PPC_LOAD_U32(r20.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// addi r16,r19,2
	r16.s64 = r19.s64 + 2;
	// clrlwi r19,r18,21
	r19.u64 = r18.u32 & 0x7FF;
	// rlwinm r18,r16,2,0,29
	r18.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r19,r27
	temp.u32 = PPC_LOAD_U32(r19.u32 + r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f12,f9
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmadds f9,f8,f13,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmadds f13,f12,f7,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f13.f64));
	// stfsx f13,r18,r27
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r18.u32 + r27.u32, temp.u32);
	// lwz r19,0(r27)
	r19.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,21
	r19.u64 = r19.u32 & 0x7FF;
	// stw r19,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r19.u32);
	// stfs f9,16(r20)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r20.u32 + 16, temp.u32);
	// lwz r16,0(r25)
	r16.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r19,320(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r14,0(r19)
	r14.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r18,r16
	r18.u64 = r16.u64;
	// lfs f12,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// subf r16,r14,r16
	r16.s64 = r16.s64 - r14.s64;
	// lfs f9,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r14,r18,2
	r14.s64 = r18.s64 + 2;
	// lfs f8,332(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	ctx.f8.f64 = double(temp.f32);
	// clrlwi r18,r16,21
	r18.u64 = r16.u32 & 0x7FF;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r25
	temp.u32 = PPC_LOAD_U32(r18.u32 + r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r18,r14,2,0,29
	r18.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// fmadds f12,f13,f12,f19
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f19.f64));
	// stfsx f12,r18,r25
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r18.u32 + r25.u32, temp.u32);
	// lwz r18,0(r25)
	r18.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,21
	r18.u64 = r18.u32 & 0x7FF;
	// fmadds f13,f12,f9,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f13.f64));
	// lfs f9,376(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	ctx.f9.f64 = double(temp.f32);
	// fadds f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stw r18,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r18.u32);
	// stfs f13,12(r19)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r19.u32 + 12, temp.u32);
	// lwz r18,0(r24)
	r18.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r19,364(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r14,r18,2,0,29
	r14.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,0(r24)
	r18.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f12,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// subf r18,r16,r18
	r18.s64 = r18.s64 - r16.s64;
	// clrlwi r18,r18,22
	r18.u64 = r18.u32 & 0x3FF;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r24
	temp.u32 = PPC_LOAD_U32(r18.u32 + r24.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f13,f12,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// fadds f12,f12,f8
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f8.f64));
	// stfsx f12,r14,r24
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r14.u32 + r24.u32, temp.u32);
	// lwz r18,0(r24)
	r18.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,22
	r18.u64 = r18.u32 & 0x3FF;
	// stw r18,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r18.u32);
	// fmadds f13,f12,f9,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f13.f64));
	// stfs f13,12(r19)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r19.u32 + 12, temp.u32);
	// lwz r19,0(r9)
	r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r18,12(r4)
	r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lfs f12,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// mr r16,r19
	r16.u64 = r19.u64;
	// lfs f9,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f9.f64 = double(temp.f32);
	// subf r19,r18,r19
	r19.s64 = r19.s64 - r18.s64;
	// lwz r18,0(r4)
	r18.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r19,r19,20
	r19.u64 = r19.u32 & 0xFFF;
	// subf r18,r18,r16
	r18.s64 = r16.s64 - r18.s64;
	// addi r16,r19,2
	r16.s64 = r19.s64 + 2;
	// clrlwi r19,r18,20
	r19.u64 = r18.u32 & 0xFFF;
	// rlwinm r18,r16,2,0,29
	r18.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r18,r9
	temp.u32 = PPC_LOAD_U32(r18.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lfsx f8,r19,r9
	temp.u32 = PPC_LOAD_U32(r19.u32 + ctx.r9.u32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f12,f8,f12
	ctx.f12.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// stfs f13,20(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// stfs f12,8(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 8, temp.u32);
	// lwz r19,0(r9)
	r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r19,r19,2,0,29
	r19.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f10,r19,r9
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r19.u32 + ctx.r9.u32, temp.u32);
	// lwz r19,0(r9)
	r19.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// clrlwi r19,r19,20
	r19.u64 = r19.u32 & 0xFFF;
	// stw r19,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r19.u32);
	// lwz r19,228(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f13,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// clrlwi r16,r18,31
	r16.u64 = r18.u32 & 0x1;
	// addi r18,r19,16
	r18.s64 = r19.s64 + 16;
	// addi r16,r16,5
	r16.s64 = r16.s64 + 5;
	// lfs f10,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r16,r19
	temp.u32 = PPC_LOAD_U32(r16.u32 + r19.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f10,8(r18)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r18.u32 + 8, temp.u32);
	// fmadds f13,f9,f12,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,4(r18)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r18.u32 + 4, temp.u32);
	// stfs f13,4(r19)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r19.u32 + 4, temp.u32);
	// lwz r19,100(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r19,r19,27
	r19.u64 = r19.u32 & 0x1F;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// bne cr6,0x826acc34
	if (!cr6.eq) goto loc_826ACC34;
	// lwz r19,120(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r19,r19,128
	r19.s64 = r19.s64 + 128;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r19.u32);
loc_826ACC34:
	// lwz r19,144(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// fsubs f11,f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f2.f64 - ctx.f3.f64));
	// lfs f13,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f10,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,4(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// addi r19,r19,16
	r19.s64 = r19.s64 + 16;
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r14,r18,2,0,29
	r14.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// subf r18,r16,r18
	r18.s64 = r18.s64 - r16.s64;
	// clrlwi r18,r18,21
	r18.u64 = r18.u32 & 0x7FF;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r18,r19
	temp.u32 = PPC_LOAD_U32(r18.u32 + r19.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f10,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fadds f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 + f0.f64));
	// stfsx f0,r14,r19
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r14.u32 + r19.u32, temp.u32);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,21
	r18.u64 = r18.u32 & 0x7FF;
	// stw r18,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r18.u32);
	// fmadds f0,f0,f9,f12
	f0.f64 = double(float(f0.f64 * ctx.f9.f64 + ctx.f12.f64));
	// lwz r19,144(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r18,152(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stfs f0,12(r19)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r19.u32 + 12, temp.u32);
	// addi r19,r18,20
	r19.s64 = r18.s64 + 20;
	// lwz r16,0(r18)
	r16.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lfs f11,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f12,12(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lwz r14,0(r19)
	r14.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// stw r16,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r16.u32);
	// mr r16,r18
	r16.u64 = r18.u64;
	// lfs f10,8(r16)
	temp.u32 = PPC_LOAD_U32(r16.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r18,108(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r14,r18,r14
	r14.s64 = r14.s64 - r18.s64;
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// clrlwi r18,r14,21
	r18.u64 = r14.u32 & 0x7FF;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r18,r19
	temp.u32 = PPC_LOAD_U32(r18.u32 + r19.u32);
	f0.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// fmadds f0,f0,f10,f13
	f0.f64 = double(float(f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmadds f12,f13,f11,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f11,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f11.f64 = double(temp.f32);
	// lwz r14,108(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r14,r14,2,0,29
	r14.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r14,r19
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r14.u32 + r19.u32, temp.u32);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,21
	r18.u64 = r18.u32 & 0x7FF;
	// stw r18,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r18.u32);
	// stfs f12,16(r16)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r16.u32 + 16, temp.u32);
	// lwz r18,96(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r19,r18,16
	r19.s64 = r18.s64 + 16;
	// lwz r14,0(r18)
	r14.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lfs f13,8(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r18,r16
	r18.u64 = r16.u64;
	// subf r16,r14,r16
	r16.s64 = r16.s64 - r14.s64;
	// addi r14,r18,2
	r14.s64 = r18.s64 + 2;
	// clrlwi r18,r16,21
	r18.u64 = r16.u32 & 0x7FF;
	// rlwinm r16,r14,2,0,29
	r16.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r18,r19
	temp.u32 = PPC_LOAD_U32(r18.u32 + r19.u32);
	f0.f64 = double(temp.f32);
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f11.f64));
	// stfsx f13,r16,r19
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r16.u32 + r19.u32, temp.u32);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,21
	r18.u64 = r18.u32 & 0x7FF;
	// stw r18,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r18.u32);
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// lwz r19,96(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r18,80(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,12(r19)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r19.u32 + 12, temp.u32);
	// addi r19,r18,16
	r19.s64 = r18.s64 + 16;
	// lwz r14,0(r18)
	r14.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lfs f12,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// addi r15,r15,4
	r15.s64 = r15.s64 + 4;
	// lfs f13,8(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,252(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	f0.f64 = double(temp.f32);
	// fadds f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 + f0.f64));
	// lfs f10,260(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	ctx.f10.f64 = double(temp.f32);
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// stfs f16,0(r23)
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(r23.u32 + 0, temp.u32);
	// stw r15,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r15.u32);
	// subf r18,r14,r16
	r18.s64 = r16.s64 - r14.s64;
	// lwz r14,104(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r16,r16,2
	r16.s64 = r16.s64 + 2;
	// lwz r15,100(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r18,r18,22
	r18.u64 = r18.u32 & 0x3FF;
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// stfsx f17,r14,r23
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r14.u32 + r23.u32, temp.u32);
	// lwz r14,88(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// stfsx f5,r14,r23
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r14.u32 + r23.u32, temp.u32);
	// lwz r14,92(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfsx f0,r18,r19
	temp.u32 = PPC_LOAD_U32(r18.u32 + r19.u32);
	f0.f64 = double(temp.f32);
	// addi r23,r23,4
	r23.s64 = r23.s64 + 4;
	// fmadds f13,f0,f13,f6
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r15.u32);
	// stfs f4,0(r14)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r14.u32 + 0, temp.u32);
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// stfsx f13,r16,r19
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r16.u32 + r19.u32, temp.u32);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,22
	r18.u64 = r18.u32 & 0x3FF;
	// stw r18,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r18.u32);
	// fmadds f0,f13,f12,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + f0.f64));
	// lwz r19,80(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r18,268(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stfs f0,12(r19)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r19.u32 + 12, temp.u32);
	// addi r19,r18,24
	r19.s64 = r18.s64 + 24;
	// lwz r15,12(r18)
	r15.u64 = PPC_LOAD_U32(r18.u32 + 12);
	// lfs f12,16(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lwz r16,0(r19)
	r16.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// mr r14,r16
	r14.u64 = r16.u64;
	// subf r16,r15,r16
	r16.s64 = r16.s64 - r15.s64;
	// lwz r15,0(r18)
	r15.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// clrlwi r16,r16,20
	r16.u64 = r16.u32 & 0xFFF;
	// subf r15,r15,r14
	r15.s64 = r14.s64 - r15.s64;
	// addi r14,r16,2
	r14.s64 = r16.s64 + 2;
	// clrlwi r16,r15,20
	r16.u64 = r15.u32 & 0xFFF;
	// rlwinm r15,r14,2,0,29
	r15.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r16,r16,2
	r16.s64 = r16.s64 + 2;
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r15,r19
	temp.u32 = PPC_LOAD_U32(r15.u32 + r19.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfsx f10,r16,r19
	temp.u32 = PPC_LOAD_U32(r16.u32 + r19.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stfs f0,20(r18)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r18.u32 + 20, temp.u32);
	// stfs f13,8(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r18.u32 + 8, temp.u32);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f13,284(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	ctx.f13.f64 = double(temp.f32);
	// addi r18,r18,2
	r18.s64 = r18.s64 + 2;
	// rlwinm r18,r18,2,0,29
	r18.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f11,r18,r19
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r18.u32 + r19.u32, temp.u32);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// clrlwi r18,r18,20
	r18.u64 = r18.u32 & 0xFFF;
	// stw r18,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r18.u32);
	// lwz r19,276(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r18,0(r19)
	r18.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// lfs f0,8(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 8);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f12,12(r19)
	temp.u32 = PPC_LOAD_U32(r19.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// clrlwi r16,r18,31
	r16.u64 = r18.u32 & 0x1;
	// addi r18,r19,16
	r18.s64 = r19.s64 + 16;
	// addi r16,r16,5
	r16.s64 = r16.s64 + 5;
	// rlwinm r16,r16,2,0,29
	r16.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f11,4(r18)
	temp.u32 = PPC_LOAD_U32(r18.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r16,r19
	temp.u32 = PPC_LOAD_U32(r16.u32 + r19.u32);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f10,f12,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f12.f64 + f0.f64));
	// stfs f11,8(r18)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r18.u32 + 8, temp.u32);
	// stfs f13,4(r18)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r18.u32 + 4, temp.u32);
	// stfs f0,4(r19)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r19.u32 + 4, temp.u32);
	// lwz r19,112(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// cmpwi cr6,r19,1024
	cr6.compare<int32_t>(r19.s32, 1024, xer);
	// stw r19,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r19.u32);
	// blt cr6,0x826ac444
	if (cr6.lt) goto loc_826AC444;
	// lwz r27,220(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addis r3,r31,5
	ctx.r3.s64 = r31.s64 + 327680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r3,-28368
	ctx.r3.s64 = ctx.r3.s64 + -28368;
	// bl 0x826ab048
	sub_826AB048(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = r31.s64 + 327680;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r3,-26296
	ctx.r3.s64 = ctx.r3.s64 + -26296;
	// bl 0x826ab048
	sub_826AB048(ctx, base);
	// lwz r29,212(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// addis r3,r31,5
	ctx.r3.s64 = r31.s64 + 327680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,-24224
	ctx.r3.s64 = ctx.r3.s64 + -24224;
	// bl 0x826ab048
	sub_826AB048(ctx, base);
	// addis r3,r31,5
	ctx.r3.s64 = r31.s64 + 327680;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r3,-22152
	ctx.r3.s64 = ctx.r3.s64 + -22152;
	// bl 0x826ab048
	sub_826AB048(ctx, base);
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// addis r3,r31,5
	ctx.r3.s64 = r31.s64 + 327680;
	// addi r30,r4,-8
	r30.s64 = ctx.r4.s64 + -8;
	// addi r3,r3,-20080
	ctx.r3.s64 = ctx.r3.s64 + -20080;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x826ab3c8
	sub_826AB3C8(ctx, base);
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addis r3,r31,5
	ctx.r3.s64 = r31.s64 + 327680;
	// addi r28,r4,-8
	r28.s64 = ctx.r4.s64 + -8;
	// addi r3,r3,-19024
	ctx.r3.s64 = ctx.r3.s64 + -19024;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x826ab3c8
	sub_826AB3C8(ctx, base);
	// addi r9,r31,92
	ctx.r9.s64 = r31.s64 + 92;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// subf r4,r29,r27
	ctx.r4.s64 = r27.s64 - r29.s64;
	// lwz r6,292(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r11,r11,10576
	r11.s64 = r11.s64 + 10576;
	// lwz r7,300(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// subf r31,r29,r28
	r31.s64 = r28.s64 - r29.s64;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r9,148(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// subf r3,r29,r30
	ctx.r3.s64 = r30.s64 - r29.s64;
	// subf r26,r29,r9
	r26.s64 = ctx.r9.s64 - r29.s64;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r25,r30,r9
	r25.s64 = ctx.r9.s64 - r30.s64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lwz r9,316(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r11,r29,16
	r11.s64 = r29.s64 + 16;
	// vsubfp v13,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// subf r27,r30,r27
	r27.s64 = r27.s64 - r30.s64;
	// vaddfp v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// subf r28,r30,r28
	r28.s64 = r28.s64 - r30.s64;
	// subf r29,r29,r8
	r29.s64 = ctx.r8.s64 - r29.s64;
	// subf r30,r30,r8
	r30.s64 = ctx.r8.s64 - r30.s64;
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r5,32
	ctx.r5.s64 = 32;
loc_826ACFBC:
	// addi r24,r11,-16
	r24.s64 = r11.s64 + -16;
	// lvx128 v11,r27,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r27.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r4,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32 + r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v11,v0,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v9,r0,r11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v10,v0,v10
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v9,v0,v9
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v7,r25,r10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r25.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r10
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r23,r8,16
	r23.s64 = ctx.r8.s64 + 16;
	// lvx128 v8,r0,r24
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r24.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v5,v12,v5
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v8,v0,v8
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v3,r28,r10
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r28.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r30,r10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r30.u32 + ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v3,v12,v3
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32)));
	// lvx128 v6,r26,r11
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r26.u32 + r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r24,r9,16
	r24.s64 = ctx.r9.s64 + 16;
	// lvx128 v4,r3,r11
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32 + r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r22,r7,16
	r22.s64 = ctx.r7.s64 + 16;
	// lvx128 v2,r31,r11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r31.u32 + r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v4,v12,v4
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32)));
	// lvx128 v31,r29,r11
	_mm_store_si128((__m128i*)v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r29.u32 + r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v2,v12,v2
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v2.f32)));
	// addi r21,r6,16
	r21.s64 = ctx.r6.s64 + 16;
	// vmaddfp v11,v13,v7,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v11.f32)));
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// vmaddfp v10,v13,v6,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v10.f32)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vmaddfp v9,v13,v31,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(v31.f32)), _mm_load_ps(ctx.v9.f32)));
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stvx v5,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// vmaddfp v8,v13,v1,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v8.f32)));
	// stvx v3,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// stvx v4,r0,r22
	_mm_store_si128((__m128i*)(base + ((r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v2,r0,r21
	_mm_store_si128((__m128i*)(base + ((r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// stvx v10,r0,r24
	_mm_store_si128((__m128i*)(base + ((r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v9,r0,r23
	_mm_store_si128((__m128i*)(base + ((r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v8,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// bne cr6,0x826acfbc
	if (!cr6.eq) goto loc_826ACFBC;
	// addi r1,r1,17888
	ctx.r1.s64 = ctx.r1.s64 + 17888;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5fc
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_826AD084"))) PPC_WEAK_FUNC(sub_826AD084);
PPC_FUNC_IMPL(__imp__sub_826AD084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AD088"))) PPC_WEAK_FUNC(sub_826AD088);
PPC_FUNC_IMPL(__imp__sub_826AD088) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26604
	r11.s64 = r11.s64 + -26604;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x826ad0c8
	if (cr6.eq) goto loc_826AD0C8;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
loc_826AD0C8:
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

__attribute__((alias("__imp__sub_826AD0E0"))) PPC_WEAK_FUNC(sub_826AD0E0);
PPC_FUNC_IMPL(__imp__sub_826AD0E0) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ad124
	if (cr6.eq) goto loc_826AD124;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826ad138
	if (cr6.eq) goto loc_826AD138;
loc_826AD124:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AD138:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r11,188(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 188);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ad160
	if (cr6.eq) goto loc_826AD160;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f1,184(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 184);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x826b4d30
	sub_826B4D30(ctx, base);
loc_826AD160:
	// lbz r11,189(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 189);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ad184
	if (cr6.eq) goto loc_826AD184;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r30,52
	ctx.r4.s64 = r30.s64 + 52;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x826b4d48
	sub_826B4D48(ctx, base);
	// b 0x826ad1a0
	goto loc_826AD1A0;
loc_826AD184:
	// lbz r11,190(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 190);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ad1a0
	if (cr6.eq) goto loc_826AD1A0;
	// addi r5,r30,136
	ctx.r5.s64 = r30.s64 + 136;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b6a18
	sub_826B6A18(ctx, base);
loc_826AD1A0:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// stb r10,188(r30)
	PPC_STORE_U8(r30.u32 + 188, ctx.r10.u8);
	// stb r10,189(r30)
	PPC_STORE_U8(r30.u32 + 189, ctx.r10.u8);
	// stb r10,190(r30)
	PPC_STORE_U8(r30.u32 + 190, ctx.r10.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ad1fc
	if (cr6.eq) goto loc_826AD1FC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x826ad1fc
	if (!cr6.eq) goto loc_826AD1FC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826ad1fc
	if (!cr6.eq) goto loc_826AD1FC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lbz r29,12(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AD1FC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x826ab9c0
	sub_826AB9C0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826AD220"))) PPC_WEAK_FUNC(sub_826AD220);
PPC_FUNC_IMPL(__imp__sub_826AD220) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r31,r3,-192
	r31.s64 = ctx.r3.s64 + -192;
	// addi r10,r11,-26632
	ctx.r10.s64 = r11.s64 + -26632;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r9,r11,-26604
	ctx.r9.s64 = r11.s64 + -26604;
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r31,52
	r11.s64 = r31.s64 + 52;
	// lwz r8,-52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -52);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// stw r10,-52(r11)
	PPC_STORE_U32(r11.u32 + -52, ctx.r10.u32);
	// stw r9,192(r31)
	PPC_STORE_U32(r31.u32 + 192, ctx.r9.u32);
	// beq cr6,0x826ad27c
	if (cr6.eq) goto loc_826AD27C;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
loc_826AD27C:
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

__attribute__((alias("__imp__sub_826AD294"))) PPC_WEAK_FUNC(sub_826AD294);
PPC_FUNC_IMPL(__imp__sub_826AD294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AD298"))) PPC_WEAK_FUNC(sub_826AD298);
PPC_FUNC_IMPL(__imp__sub_826AD298) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ad580
	sub_826AD580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AD2A0"))) PPC_WEAK_FUNC(sub_826AD2A0);
PPC_FUNC_IMPL(__imp__sub_826AD2A0) {
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r3,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// bne 0x826ad2d8
	if (!cr0.eq) goto loc_826AD2D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AD2D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD2E8"))) PPC_WEAK_FUNC(sub_826AD2E8);
PPC_FUNC_IMPL(__imp__sub_826AD2E8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ad2a0
	sub_826AD2A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AD2F0"))) PPC_WEAK_FUNC(sub_826AD2F0);
PPC_FUNC_IMPL(__imp__sub_826AD2F0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826af6d0
	sub_826AF6D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ad440
	if (cr6.lt) goto loc_826AD440;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826af6d0
	sub_826AF6D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ad440
	if (cr6.lt) goto loc_826AD440;
	// li r11,0
	r11.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, r11.u8);
	// li r11,6
	r11.s64 = 6;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, r11.u8);
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x826af9b0
	sub_826AF9B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ad440
	if (cr6.lt) goto loc_826AD440;
	// lbz r11,121(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 121);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x826ad43c
	if (cr6.lt) goto loc_826AD43C;
	// beq cr6,0x826ad394
	if (cr6.eq) goto loc_826AD394;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x826ad38c
	if (cr6.lt) goto loc_826AD38C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x826ad440
	goto loc_826AD440;
loc_826AD38C:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x826ad398
	goto loc_826AD398;
loc_826AD394:
	// li r4,1
	ctx.r4.s64 = 1;
loc_826AD398:
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x826b4d28
	sub_826B4D28(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r11,1024
	ctx.r10.s64 = r11.s64 + 1024;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// addi r10,r11,2048
	ctx.r10.s64 = r11.s64 + 2048;
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// addi r10,r11,4096
	ctx.r10.s64 = r11.s64 + 4096;
	// addi r11,r11,5120
	r11.s64 = r11.s64 + 5120;
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// bl 0x826a8cc8
	sub_826A8CC8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826ad0e0
	sub_826AD0E0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826a8cc8
	sub_826A8CC8(ctx, base);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// addis r10,r31,5
	ctx.r10.s64 = r31.s64 + 327680;
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,-17760
	r11.s64 = r11.s64 + -17760;
	// addi r10,r10,-17752
	ctx.r10.s64 = ctx.r10.s64 + -17752;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
loc_826AD43C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AD440:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_826AD458"))) PPC_WEAK_FUNC(sub_826AD458);
PPC_FUNC_IMPL(__imp__sub_826AD458) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r31,r3,-52
	r31.s64 = ctx.r3.s64 + -52;
	// addi r10,r11,-26632
	ctx.r10.s64 = r11.s64 + -26632;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r9,r11,-26604
	ctx.r9.s64 = r11.s64 + -26604;
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r31,52
	r11.s64 = r31.s64 + 52;
	// lwz r8,-52(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -52);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// stw r10,-52(r8)
	PPC_STORE_U32(ctx.r8.u32 + -52, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// beq cr6,0x826ad4b4
	if (cr6.eq) goto loc_826AD4B4;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
loc_826AD4B4:
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

__attribute__((alias("__imp__sub_826AD4CC"))) PPC_WEAK_FUNC(sub_826AD4CC);
PPC_FUNC_IMPL(__imp__sub_826AD4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AD4D0"))) PPC_WEAK_FUNC(sub_826AD4D0);
PPC_FUNC_IMPL(__imp__sub_826AD4D0) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26660
	r11.s64 = r11.s64 + -26660;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r10,r10,-26560
	ctx.r10.s64 = ctx.r10.s64 + -26560;
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
	// addi r9,r9,-26588
	ctx.r9.s64 = ctx.r9.s64 + -26588;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// addi r8,r8,-26596
	ctx.r8.s64 = ctx.r8.s64 + -26596;
	// li r29,0
	r29.s64 = 0;
	// addi r3,r30,192
	ctx.r3.s64 = r30.s64 + 192;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// bl 0x826b5b70
	sub_826B5B70(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b6b70
	sub_826B6B70(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r30,52
	ctx.r3.s64 = r30.s64 + 52;
	// addi r11,r11,-26600
	r11.s64 = r11.s64 + -26600;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, r11.u32);
	// bl 0x826b4868
	sub_826B4868(ctx, base);
	// lis r11,4
	r11.s64 = 262144;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,47776
	r11.u64 = r11.u64 | 47776;
	// ori r10,r10,47784
	ctx.r10.u64 = ctx.r10.u64 | 47784;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stdx r29,r31,r11
	PPC_STORE_U64(r31.u32 + r11.u32, r29.u64);
	// stdx r29,r31,r10
	PPC_STORE_U64(r31.u32 + ctx.r10.u32, r29.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AD580"))) PPC_WEAK_FUNC(sub_826AD580);
PPC_FUNC_IMPL(__imp__sub_826AD580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-26560
	ctx.r10.s64 = ctx.r10.s64 + -26560;
	// addi r11,r3,16
	r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r9,-26588
	ctx.r9.s64 = ctx.r9.s64 + -26588;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r11,52
	ctx.r10.s64 = r11.s64 + 52;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// addi r8,r8,-26632
	ctx.r8.s64 = ctx.r8.s64 + -26632;
	// addi r7,r7,-26604
	ctx.r7.s64 = ctx.r7.s64 + -26604;
	// addi r6,r6,-26680
	ctx.r6.s64 = ctx.r6.s64 + -26680;
	// lwz r9,-52(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -52);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,-52(r10)
	PPC_STORE_U32(ctx.r10.u32 + -52, ctx.r8.u32);
	// stw r7,192(r11)
	PPC_STORE_U32(r11.u32 + 192, ctx.r7.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD5D4"))) PPC_WEAK_FUNC(sub_826AD5D4);
PPC_FUNC_IMPL(__imp__sub_826AD5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AD5D8"))) PPC_WEAK_FUNC(sub_826AD5D8);
PPC_FUNC_IMPL(__imp__sub_826AD5D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,4
	ctx.r4.s64 = 262144;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// ori r4,r4,47792
	ctx.r4.u64 = ctx.r4.u64 | 47792;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826ad62c
	if (cr6.eq) goto loc_826AD62C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826ad4d0
	sub_826AD4D0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x826ad63c
	if (!cr6.eq) goto loc_826AD63C;
loc_826AD62C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_826AD63C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826ad670
	if (cr6.lt) goto loc_826AD670;
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_826AD670:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826AD690"))) PPC_WEAK_FUNC(sub_826AD690);
PPC_FUNC_IMPL(__imp__sub_826AD690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,15364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15364, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826AD6B0"))) PPC_WEAK_FUNC(sub_826AD6B0);
PPC_FUNC_IMPL(__imp__sub_826AD6B0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,24
	r31.s64 = r30.s64 + 24;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ad6f0
	if (cr6.eq) goto loc_826AD6F0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x826e53dc
	__imp__XAudioUnregisterRenderDriverClient(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ad710
	if (cr6.lt) goto loc_826AD710;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826AD6F0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826ad710
	if (cr6.eq) goto loc_826AD710;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826e53cc
	__imp__XAudioRegisterRenderDriverClient(ctx, base);
loc_826AD710:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AD718"))) PPC_WEAK_FUNC(sub_826AD718);
PPC_FUNC_IMPL(__imp__sub_826AD718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-12616
	ctx.r10.s64 = ctx.r10.s64 + -12616;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,6144
	cr6.compare<uint32_t>(ctx.r9.u32, 6144, xer);
	// beq cr6,0x826ad7c8
	if (cr6.eq) goto loc_826AD7C8;
	// li r9,6144
	ctx.r9.s64 = 6144;
loc_826AD740:
	// mfmsr r6
	// mtmsrd r13,1
	// lwarx r8,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwcx. r7,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r7.s32));
	cr0.so = xer.so;
	// mtmsrd r6,1
	// bne 0x826ad740
	if (!cr0.eq) goto loc_826AD740;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826ad7bc
	if (cr6.eq) goto loc_826AD7BC;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,6144
	cr6.compare<uint32_t>(ctx.r10.u32, 6144, xer);
	// bne cr6,0x826ad784
	if (!cr6.eq) goto loc_826AD784;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x826ad788
	goto loc_826AD788;
loc_826AD784:
	// li r10,1
	ctx.r10.s64 = 1;
loc_826AD788:
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r3,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r3.u32);
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// bgt cr6,0x826ad7c8
	if (cr6.gt) goto loc_826AD7C8;
	// li r5,6144
	ctx.r5.s64 = 6144;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwsync 
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_826AD7BC:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r10,15364(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15364);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_826AD7C8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD7D8"))) PPC_WEAK_FUNC(sub_826AD7D8);
PPC_FUNC_IMPL(__imp__sub_826AD7D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26500
	r11.s64 = r11.s64 + -26500;
	// addi r10,r10,-26528
	ctx.r10.s64 = ctx.r10.s64 + -26528;
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// li r30,0
	r30.s64 = 0;
	// addi r9,r9,-12616
	ctx.r9.s64 = ctx.r9.s64 + -12616;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,6144
	r11.s64 = 6144;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// stw r11,15364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15364, r11.u32);
loc_826AD824:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r8,0,r9
	reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r8.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r8,r30
	cr6.compare<int32_t>(ctx.r8.s32, r30.s32, xer);
	// bne cr6,0x826ad848
	if (!cr6.eq) goto loc_826AD848;
	// stwcx. r6,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r6.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x826ad824
	if (!cr0.eq) goto loc_826AD824;
	// b 0x826ad850
	goto loc_826AD850;
loc_826AD848:
	// stwcx. r8,0,r9
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
loc_826AD850:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826ad86c
	if (cr6.eq) goto loc_826AD86C;
	// bl 0x826e53dc
	__imp__XAudioUnregisterRenderDriverClient(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ad86c
	if (cr6.lt) goto loc_826AD86C;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
loc_826AD86C:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-26680
	r11.s64 = r11.s64 + -26680;
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

__attribute__((alias("__imp__sub_826AD890"))) PPC_WEAK_FUNC(sub_826AD890);
PPC_FUNC_IMPL(__imp__sub_826AD890) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ad968
	sub_826AD968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AD898"))) PPC_WEAK_FUNC(sub_826AD898);
PPC_FUNC_IMPL(__imp__sub_826AD898) {
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r3,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// bne 0x826ad8d0
	if (!cr0.eq) goto loc_826AD8D0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AD8D0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD8E0"))) PPC_WEAK_FUNC(sub_826AD8E0);
PPC_FUNC_IMPL(__imp__sub_826AD8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,2
	r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD8F8"))) PPC_WEAK_FUNC(sub_826AD8F8);
PPC_FUNC_IMPL(__imp__sub_826AD8F8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD900"))) PPC_WEAK_FUNC(sub_826AD900);
PPC_FUNC_IMPL(__imp__sub_826AD900) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826af6d0
	sub_826AF6D0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ad94c
	if (cr6.lt) goto loc_826AD94C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x826e53ec
	__imp__XAudioSubmitRenderDriverFrame(ctx, base);
loc_826AD94C:
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

__attribute__((alias("__imp__sub_826AD960"))) PPC_WEAK_FUNC(sub_826AD960);
PPC_FUNC_IMPL(__imp__sub_826AD960) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ad898
	sub_826AD898(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AD968"))) PPC_WEAK_FUNC(sub_826AD968);
PPC_FUNC_IMPL(__imp__sub_826AD968) {
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
	// bl 0x826ad7d8
	sub_826AD7D8(ctx, base);
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

__attribute__((alias("__imp__sub_826AD998"))) PPC_WEAK_FUNC(sub_826AD998);
PPC_FUNC_IMPL(__imp__sub_826AD998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,-26660
	r11.s64 = r11.s64 + -26660;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// addi r10,r10,-26500
	ctx.r10.s64 = ctx.r10.s64 + -26500;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// addi r9,r9,-26528
	ctx.r9.s64 = ctx.r9.s64 + -26528;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AD9DC"))) PPC_WEAK_FUNC(sub_826AD9DC);
PPC_FUNC_IMPL(__imp__sub_826AD9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AD9E0"))) PPC_WEAK_FUNC(sub_826AD9E0);
PPC_FUNC_IMPL(__imp__sub_826AD9E0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826ada90
	if (cr6.eq) goto loc_826ADA90;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r11,r11,-26660
	r11.s64 = r11.s64 + -26660;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-26500
	ctx.r10.s64 = ctx.r10.s64 + -26500;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r7,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r7.u32);
	// addi r9,r9,-26528
	ctx.r9.s64 = ctx.r9.s64 + -26528;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x826adaa0
	if (cr6.lt) goto loc_826ADAA0;
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826ADA90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826ADAA0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826ADAC0"))) PPC_WEAK_FUNC(sub_826ADAC0);
PPC_FUNC_IMPL(__imp__sub_826ADAC0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826adb1c
	if (!cr6.eq) goto loc_826ADB1C;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x826adb1c
	if (!cr6.eq) goto loc_826ADB1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r31,4
	ctx.r6.s64 = r31.s64 + 4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826ADB1C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826adb68
	if (!cr6.eq) goto loc_826ADB68;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x826adb68
	if (!cr6.eq) goto loc_826ADB68;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826adbac
	if (cr6.lt) goto loc_826ADBAC;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
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
loc_826ADB68:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826adba4
	if (!cr6.eq) goto loc_826ADBA4;
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x826adba4
	if (!cr6.eq) goto loc_826ADBA4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826ADBA4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_826ADBAC:
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

__attribute__((alias("__imp__sub_826ADBC0"))) PPC_WEAK_FUNC(sub_826ADBC0);
PPC_FUNC_IMPL(__imp__sub_826ADBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826adbec
	if (!cr6.eq) goto loc_826ADBEC;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x826adbec
	if (!cr6.eq) goto loc_826ADBEC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826ADBEC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826adc18
	if (!cr6.eq) goto loc_826ADC18;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x826adc18
	if (!cr6.eq) goto loc_826ADC18;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826ADC18:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826adc40
	if (!cr6.eq) goto loc_826ADC40;
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x826adc40
	if (!cr6.eq) goto loc_826ADC40;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826ADC40:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADC4C"))) PPC_WEAK_FUNC(sub_826ADC4C);
PPC_FUNC_IMPL(__imp__sub_826ADC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826ADC50"))) PPC_WEAK_FUNC(sub_826ADC50);
PPC_FUNC_IMPL(__imp__sub_826ADC50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ae588
	sub_826AE588(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826ADC58"))) PPC_WEAK_FUNC(sub_826ADC58);
PPC_FUNC_IMPL(__imp__sub_826ADC58) {
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
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addic. r3,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r3.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// bne 0x826adc90
	if (!cr0.eq) goto loc_826ADC90;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_826ADC90:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADCA0"))) PPC_WEAK_FUNC(sub_826ADCA0);
PPC_FUNC_IMPL(__imp__sub_826ADCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,6
	r11.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// sth r10,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADCB8"))) PPC_WEAK_FUNC(sub_826ADCB8);
PPC_FUNC_IMPL(__imp__sub_826ADCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADCC8"))) PPC_WEAK_FUNC(sub_826ADCC8);
PPC_FUNC_IMPL(__imp__sub_826ADCC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,26(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADCD8"))) PPC_WEAK_FUNC(sub_826ADCD8);
PPC_FUNC_IMPL(__imp__sub_826ADCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r4,26(r11)
	PPC_STORE_U8(r11.u32 + 26, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826ADCE8"))) PPC_WEAK_FUNC(sub_826ADCE8);
PPC_FUNC_IMPL(__imp__sub_826ADCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826ADCFC"))) PPC_WEAK_FUNC(sub_826ADCFC);
PPC_FUNC_IMPL(__imp__sub_826ADCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826ADD00"))) PPC_WEAK_FUNC(sub_826ADD00);
PPC_FUNC_IMPL(__imp__sub_826ADD00) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lbz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826add44
	if (cr6.eq) goto loc_826ADD44;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x826add44
	if (cr6.gt) goto loc_826ADD44;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_826ADD44:
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r10,24(r31)
	PPC_STORE_U8(r31.u32 + 24, ctx.r10.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826add78
	if (cr6.eq) goto loc_826ADD78;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,20(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
loc_826ADD78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826addb0
	if (cr6.lt) goto loc_826ADDB0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r4,9(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826ADDB0:
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

__attribute__((alias("__imp__sub_826ADDC8"))) PPC_WEAK_FUNC(sub_826ADDC8);
PPC_FUNC_IMPL(__imp__sub_826ADDC8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r29,r11,-13256
	r29.s64 = r11.s64 + -13256;
	// mr r28,r13
	r28.u64 = ctx.r13.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ade10
	if (cr6.eq) goto loc_826ADE10;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x826ade24
	if (cr6.eq) goto loc_826ADE24;
loc_826ADE10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r28,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r28.u32);
	// stb r26,12(r29)
	PPC_STORE_U8(r29.u32 + 12, r26.u8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_826ADE24:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// beq cr6,0x826adec4
	if (cr6.eq) goto loc_826ADEC4;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826adec8
	if (cr6.eq) goto loc_826ADEC8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
loc_826ADE68:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// stbx r8,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u8);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r7,r11,r7
	ctx.r7.u64 = r11.u64 + ctx.r7.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfs f0,8(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x826ade68
	if (cr6.lt) goto loc_826ADE68;
	// b 0x826adec8
	goto loc_826ADEC8;
loc_826ADEC4:
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
loc_826ADEC8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826adf10
	if (cr6.eq) goto loc_826ADF10;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826adf10
	if (!cr6.eq) goto loc_826ADF10;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bne cr6,0x826adf10
	if (!cr6.eq) goto loc_826ADF10;
	// lbz r31,12(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,12(r29)
	PPC_STORE_U8(r29.u32 + 12, r11.u8);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826ADF10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826ADF1C"))) PPC_WEAK_FUNC(sub_826ADF1C);
PPC_FUNC_IMPL(__imp__sub_826ADF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826ADF20"))) PPC_WEAK_FUNC(sub_826ADF20);
PPC_FUNC_IMPL(__imp__sub_826ADF20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r29,r11,-13256
	r29.s64 = r11.s64 + -13256;
	// mr r28,r13
	r28.u64 = ctx.r13.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826adf60
	if (cr6.eq) goto loc_826ADF60;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r28,r9
	cr6.compare<uint32_t>(r28.u32, ctx.r9.u32, xer);
	// beq cr6,0x826adf80
	if (cr6.eq) goto loc_826ADF80;
loc_826ADF60:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stw r9,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r9.u32);
	// stb r10,12(r29)
	PPC_STORE_U8(r29.u32 + 12, ctx.r10.u8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x826adf84
	goto loc_826ADF84;
loc_826ADF80:
	// lbz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 12);
loc_826ADF84:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// beq cr6,0x826ae118
	if (cr6.eq) goto loc_826AE118;
	// lbz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lbz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// ble cr6,0x826ae044
	if (!cr6.gt) goto loc_826AE044;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r8,r13
	ctx.r8.u64 = ctx.r13.u64;
	// beq cr6,0x826adff4
	if (cr6.eq) goto loc_826ADFF4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x826adff4
	if (!cr6.eq) goto loc_826ADFF4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bne cr6,0x826adff4
	if (!cr6.eq) goto loc_826ADFF4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,12(r29)
	PPC_STORE_U8(r29.u32 + 12, r11.u8);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
	// lbz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_826ADFF4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r8,r13
	ctx.r8.u64 = ctx.r13.u64;
	// beq cr6,0x826ae034
	if (cr6.eq) goto loc_826AE034;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bne cr6,0x826ae034
	if (!cr6.eq) goto loc_826AE034;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bne cr6,0x826ae034
	if (!cr6.eq) goto loc_826AE034;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,12(r29)
	PPC_STORE_U8(r29.u32 + 12, r11.u8);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AE034:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826AE044:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// stb r8,16(r31)
	PPC_STORE_U8(r31.u32 + 16, ctx.r8.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ae0d0
	if (cr6.eq) goto loc_826AE0D0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	r11.s64 = 0;
loc_826AE060:
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// stbx r8,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lbz r7,1(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 1);
	// stb r7,1(r8)
	PPC_STORE_U8(ctx.r8.u32 + 1, ctx.r7.u8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x826ae060
	if (cr6.lt) goto loc_826AE060;
loc_826AE0D0:
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ae110
	if (cr6.eq) goto loc_826AE110;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
loc_826AE0EC:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x826ae100
	if (!cr6.gt) goto loc_826AE100;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_826AE100:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x826ae0ec
	if (!cr6.eq) goto loc_826AE0EC;
loc_826AE110:
	// stb r9,25(r31)
	PPC_STORE_U8(r31.u32 + 25, ctx.r9.u8);
	// b 0x826ae124
	goto loc_826AE124;
loc_826AE118:
	// li r11,0
	r11.s64 = 0;
	// stb r11,16(r31)
	PPC_STORE_U8(r31.u32 + 16, r11.u8);
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
loc_826AE124:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826ae16c
	if (cr6.eq) goto loc_826AE16C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826ae16c
	if (!cr6.eq) goto loc_826AE16C;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// bne cr6,0x826ae16c
	if (!cr6.eq) goto loc_826AE16C;
	// lbz r31,12(r29)
	r31.u64 = PPC_LOAD_U8(r29.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,12(r29)
	PPC_STORE_U8(r29.u32 + 12, r11.u8);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AE16C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826AE178"))) PPC_WEAK_FUNC(sub_826AE178);
PPC_FUNC_IMPL(__imp__sub_826AE178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r30,r11,-13256
	r30.s64 = r11.s64 + -13256;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ae1b8
	if (cr6.eq) goto loc_826AE1B8;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826ae1d0
	if (cr6.eq) goto loc_826AE1D0;
loc_826AE1B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stb r27,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r27.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_826AE1D0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826ae258
	if (cr6.eq) goto loc_826AE258;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
loc_826AE1F4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lbz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bge cr6,0x826ae238
	if (!cr6.lt) goto loc_826AE238;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lfs f13,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// b 0x826ae23c
	goto loc_826AE23C;
loc_826AE238:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_826AE23C:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x826ae1f4
	if (cr6.lt) goto loc_826AE1F4;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_826AE258:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// beq cr6,0x826ae298
	if (cr6.eq) goto loc_826AE298;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x826ae298
	if (!cr6.eq) goto loc_826AE298;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bne cr6,0x826ae298
	if (!cr6.eq) goto loc_826AE298;
	// lbz r31,12(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r11.u8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AE298:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826AE2A4"))) PPC_WEAK_FUNC(sub_826AE2A4);
PPC_FUNC_IMPL(__imp__sub_826AE2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AE2A8"))) PPC_WEAK_FUNC(sub_826AE2A8);
PPC_FUNC_IMPL(__imp__sub_826AE2A8) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ae2ec
	if (cr6.eq) goto loc_826AE2EC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826ae304
	if (cr6.eq) goto loc_826AE304;
loc_826AE2EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AE304:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826ae388
	if (cr6.eq) goto loc_826AE388;
	// li r8,0
	ctx.r8.s64 = 0;
loc_826AE31C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U8(r28.u32 + 16);
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826ae3d4
	if (!cr6.lt) goto loc_826AE3D4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r7,r26,24
	ctx.r7.u64 = r26.u32 & 0xFF;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// rotlwi r11,r10,1
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// beq cr6,0x826ae36c
	if (cr6.eq) goto loc_826AE36C;
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_826AE36C:
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x826ae31c
	if (cr6.lt) goto loc_826AE31C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AE388:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// beq cr6,0x826ae3c8
	if (cr6.eq) goto loc_826AE3C8;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x826ae3c8
	if (!cr6.eq) goto loc_826AE3C8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826ae3c8
	if (!cr6.eq) goto loc_826AE3C8;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AE3C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_826AE3D4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ae420
	if (cr6.eq) goto loc_826AE420;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826ae420
	if (!cr6.eq) goto loc_826AE420;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826ae420
	if (!cr6.eq) goto loc_826AE420;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AE420:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826ae464
	if (cr6.eq) goto loc_826AE464;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826ae464
	if (!cr6.eq) goto loc_826AE464;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826ae464
	if (!cr6.eq) goto loc_826AE464;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AE464:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826AE474"))) PPC_WEAK_FUNC(sub_826AE474);
PPC_FUNC_IMPL(__imp__sub_826AE474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AE478"))) PPC_WEAK_FUNC(sub_826AE478);
PPC_FUNC_IMPL(__imp__sub_826AE478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// rlwinm r10,r7,27,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1FFFFFF;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ae4a0
	if (cr6.eq) goto loc_826AE4A0;
loc_826AE48C:
	// rlwinm r9,r11,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// dcbt r9,r3
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826ae48c
	if (cr6.lt) goto loc_826AE48C;
loc_826AE4A0:
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r11,r7,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// vaddfp v11,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v13,r0,r5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v12,v13,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// vaddfp v10,v11,v0
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v0,v11,v11
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vaddfp v11,v13,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vaddfp v10,v13,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// beq cr6,0x826ae570
	if (cr6.eq) goto loc_826AE570;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// subf r5,r4,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r4.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_826AE4E4:
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
	// vor v1,v10,v10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// addi r8,r10,-48
	ctx.r8.s64 = ctx.r10.s64 + -48;
	// vor v31,v13,v13
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// addi r3,r11,-32
	ctx.r3.s64 = r11.s64 + -32;
	// vor v30,v12,v12
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r7,r10,-32
	ctx.r7.s64 = ctx.r10.s64 + -32;
	// vor v29,v11,v11
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// add r6,r5,r11
	ctx.r6.u64 = ctx.r5.u64 + r11.u64;
	// lvx128 v9,r0,r10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r11,-16
	r31.s64 = r11.s64 + -16;
	// lvx128 v7,r0,r4
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v4,r0,r8
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v9,v7,v1,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v6,r0,r3
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lvx128 v8,r0,r11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v7,v6,v31,v4
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(v31.f32)), _mm_load_ps(ctx.v4.f32)));
	// lvx128 v3,r0,r7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// lvx128 v2,r0,r6
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v13,v13,v0
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v5,r0,r31
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r31.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v8,v8,v29,v2
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(v29.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmaddfp v6,v5,v30,v3
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v3.f32)));
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// vaddfp v12,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v11,v11,v0
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v10,v10,v0
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// stvx v7,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v8,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v6,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x826ae4e4
	if (!cr6.eq) goto loc_826AE4E4;
loc_826AE570:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE578"))) PPC_WEAK_FUNC(sub_826AE578);
PPC_FUNC_IMPL(__imp__sub_826AE578) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826adc58
	sub_826ADC58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AE580"))) PPC_WEAK_FUNC(sub_826AE580);
PPC_FUNC_IMPL(__imp__sub_826AE580) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826adcb8
	sub_826ADCB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AE588"))) PPC_WEAK_FUNC(sub_826AE588);
PPC_FUNC_IMPL(__imp__sub_826AE588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-26424
	r11.s64 = r11.s64 + -26424;
	// addi r10,r10,-26456
	ctx.r10.s64 = ctx.r10.s64 + -26456;
	// addi r9,r9,-26680
	ctx.r9.s64 = ctx.r9.s64 + -26680;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE5B0"))) PPC_WEAK_FUNC(sub_826AE5B0);
PPC_FUNC_IMPL(__imp__sub_826AE5B0) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5e0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r3,r29,-8
	ctx.r3.s64 = r29.s64 + -8;
	// bne cr6,0x826ae5e0
	if (!cr6.eq) goto loc_826AE5E0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AE5E0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x826af6a8
	sub_826AF6A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ae97c
	if (cr6.lt) goto loc_826AE97C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r31,r28,-8
	r31.s64 = r28.s64 + -8;
	// bne cr6,0x826ae600
	if (!cr6.eq) goto loc_826AE600;
	// li r31,0
	r31.s64 = 0;
loc_826AE600:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826af6a8
	sub_826AF6A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ae97c
	if (cr6.lt) goto loc_826AE97C;
	// lbz r11,26(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 26);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826ae638
	if (!cr6.eq) goto loc_826AE638;
	// lbz r11,25(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 25);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r11.u8);
	// bl 0x826af888
	sub_826AF888(ctx, base);
loc_826AE638:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ae97c
	if (cr6.lt) goto loc_826AE97C;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r26,r11,-13256
	r26.s64 = r11.s64 + -13256;
	// mr r31,r13
	r31.u64 = ctx.r13.u64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ae66c
	if (cr6.eq) goto loc_826AE66C;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x826ae680
	if (cr6.eq) goto loc_826AE680;
loc_826AE66C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r31,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r31.u32);
	// stb r30,12(r26)
	PPC_STORE_U8(r26.u32 + 12, r30.u8);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_826AE680:
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r9.u32);
	// lbz r11,16(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ae80c
	if (cr6.eq) goto loc_826AE80C;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f26,-27476(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -27476);
	f26.f64 = double(temp.f32);
	// lfs f27,26488(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 26488);
	f27.f64 = double(temp.f32);
	// li r29,0
	r29.s64 = 0;
	// lfs f28,11004(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11004);
	f28.f64 = double(temp.f32);
	// li r30,0
	r30.s64 = 0;
	// lfs f29,560(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 560);
	f29.f64 = double(temp.f32);
	// lfs f30,2552(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_826AE6CC:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r31,r30,r11
	r31.u64 = r30.u64 + r11.u64;
	// lbz r9,97(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r6,113(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lbz r11,1(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rotlwi r7,r11,10
	ctx.r7.u64 = __builtin_rotateleft32(r11.u32, 10);
	// rotlwi r8,r10,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 10);
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bge cr6,0x826ae7f4
	if (!cr6.lt) goto loc_826AE7F4;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// bge cr6,0x826ae7dc
	if (!cr6.lt) goto loc_826AE7DC;
	// lfs f0,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fsubs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 - f0.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfs f31,160(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// lbz r8,26(r27)
	ctx.r8.u64 = PPC_LOAD_U8(r27.u32 + 26);
	// stfs f28,172(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lvx128 v12,r0,r7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmuls f0,f0,f26
	f0.f64 = double(float(f0.f64 * f26.f64));
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v13,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// stvx v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x826ae7a0
	if (!cr6.eq) goto loc_826AE7A0;
	// li r7,256
	ctx.r7.s64 = 256;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826ae478
	sub_826AE478(ctx, base);
	// stfs f13,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// b 0x826ae7f4
	goto loc_826AE7F4;
loc_826AE7A0:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r11,64
	r11.s64 = 64;
loc_826AE7AC:
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// vaddfp v0,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// vmulfp128 v13,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// bne cr6,0x826ae7ac
	if (!cr6.eq) goto loc_826AE7AC;
	// stfs f13,4(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// b 0x826ae7f4
	goto loc_826AE7F4;
loc_826AE7DC:
	// lbz r11,26(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 26);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ae7f4
	if (cr6.eq) goto loc_826AE7F4;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a8e48
	sub_826A8E48(ctx, base);
loc_826AE7F4:
	// lbz r11,16(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x826ae6cc
	if (cr6.lt) goto loc_826AE6CC;
	// b 0x826ae930
	goto loc_826AE930;
loc_826AE80C:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// beq cr6,0x826ae934
	if (cr6.eq) goto loc_826AE934;
	// lbz r11,97(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// li r30,0
	r30.s64 = 0;
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// beq cr6,0x826ae934
	if (cr6.eq) goto loc_826AE934;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lfs f28,11004(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11004);
	f28.f64 = double(temp.f32);
	// lfs f29,560(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 560);
	f29.f64 = double(temp.f32);
	// lfs f30,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_826AE854:
	// lbz r11,26(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 26);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x826ae8f4
	if (!cr6.lt) goto loc_826AE8F4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826ae8e8
	if (!cr6.eq) goto loc_826AE8E8;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stfs f31,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stfs f30,164(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stfs f29,168(r1)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stfs f28,172(r1)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r7,256
	ctx.r7.s64 = 256;
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvlx v0,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r0,r8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x826ae478
	sub_826AE478(ctx, base);
	// b 0x826ae908
	goto loc_826AE908;
loc_826AE8E8:
	// li r5,1024
	ctx.r5.s64 = 1024;
	// bl 0x826a85e8
	sub_826A85E8(ctx, base);
	// b 0x826ae908
	goto loc_826AE908;
loc_826AE8F4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ae930
	if (cr6.eq) goto loc_826AE930;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a8e48
	sub_826A8E48(ctx, base);
loc_826AE908:
	// lbz r11,97(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,1024
	r31.s64 = r31.s64 + 1024;
	// lbz r10,113(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// add r4,r31,r11
	ctx.r4.u64 = r31.u64 + r11.u64;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r3,r31,r11
	ctx.r3.u64 = r31.u64 + r11.u64;
	// blt cr6,0x826ae854
	if (cr6.lt) goto loc_826AE854;
loc_826AE930:
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_826AE934:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826ae978
	if (cr6.eq) goto loc_826AE978;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826ae978
	if (!cr6.eq) goto loc_826AE978;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// bne cr6,0x826ae978
	if (!cr6.eq) goto loc_826AE978;
	// lbz r31,12(r26)
	r31.u64 = PPC_LOAD_U8(r26.u32 + 12);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stb r11,12(r26)
	PPC_STORE_U8(r26.u32 + 12, r11.u8);
	// stw r11,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AE978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AE97C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d62c
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826AE98C"))) PPC_WEAK_FUNC(sub_826AE98C);
PPC_FUNC_IMPL(__imp__sub_826AE98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AE990"))) PPC_WEAK_FUNC(sub_826AE990);
PPC_FUNC_IMPL(__imp__sub_826AE990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ae9b8
	if (cr6.eq) goto loc_826AE9B8;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x826ae9b8
	if (cr6.gt) goto loc_826AE9B8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826AE9B8:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AE9D8"))) PPC_WEAK_FUNC(sub_826AE9D8);
PPC_FUNC_IMPL(__imp__sub_826AE9D8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826aea7c
	if (cr6.eq) goto loc_826AEA7C;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// addi r11,r11,-26660
	r11.s64 = r11.s64 + -26660;
	// li r8,1
	ctx.r8.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-26424
	ctx.r10.s64 = ctx.r10.s64 + -26424;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r9,r9,-26456
	ctx.r9.s64 = ctx.r9.s64 + -26456;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x826aea8c
	if (cr6.lt) goto loc_826AEA8C;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826AEA7C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826AEA8C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826AEAAC"))) PPC_WEAK_FUNC(sub_826AEAAC);
PPC_FUNC_IMPL(__imp__sub_826AEAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AEAB0"))) PPC_WEAK_FUNC(sub_826AEAB0);
PPC_FUNC_IMPL(__imp__sub_826AEAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// stw r9,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r9.u32);
	// lwz r9,76(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// stw r9,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r9.u32);
	// lbz r6,69(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 69);
	// lbz r5,68(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 68);
	// b 0x826b6ca0
	sub_826B6CA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AEAE0"))) PPC_WEAK_FUNC(sub_826AEAE0);
PPC_FUNC_IMPL(__imp__sub_826AEAE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826aeb4c
	if (!cr6.eq) goto loc_826AEB4C;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x826aeb4c
	if (!cr6.eq) goto loc_826AEB4C;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(r11.u32, 56, xer);
	// bne cr6,0x826aeb28
	if (!cr6.eq) goto loc_826AEB28;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AEB28:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x826aebc4
	if (!cr6.eq) goto loc_826AEBC4;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r5,r4,56
	ctx.r5.s64 = ctx.r4.s64 + 56;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AEB4C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826aeb74
	if (!cr6.eq) goto loc_826AEB74;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x826aeb74
	if (!cr6.eq) goto loc_826AEB74;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AEB74:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826aeb9c
	if (!cr6.eq) goto loc_826AEB9C;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x826aeb9c
	if (!cr6.eq) goto loc_826AEB9C;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AEB9C:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x826aebc4
	if (!cr6.eq) goto loc_826AEBC4;
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826aebc4
	if (!cr6.eq) goto loc_826AEBC4;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AEBC4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AEBD0"))) PPC_WEAK_FUNC(sub_826AEBD0);
PPC_FUNC_IMPL(__imp__sub_826AEBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826aec34
	if (!cr6.eq) goto loc_826AEC34;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x826aec34
	if (!cr6.eq) goto loc_826AEC34;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// cmplwi cr6,r11,56
	cr6.compare<uint32_t>(r11.u32, 56, xer);
	// bne cr6,0x826aec10
	if (!cr6.eq) goto loc_826AEC10;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AEC10:
	// cmplwi cr6,r11,60
	cr6.compare<uint32_t>(r11.u32, 60, xer);
	// bne cr6,0x826aecb8
	if (!cr6.eq) goto loc_826AECB8;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lwz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r5,56(r4)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + 56);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AEC34:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826aec60
	if (!cr6.eq) goto loc_826AEC60;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x826aec60
	if (!cr6.eq) goto loc_826AEC60;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AEC60:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826aec8c
	if (!cr6.eq) goto loc_826AEC8C;
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x826aec8c
	if (!cr6.eq) goto loc_826AEC8C;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AEC8C:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x826aecb8
	if (!cr6.eq) goto loc_826AECB8;
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826aecb8
	if (!cr6.eq) goto loc_826AECB8;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// lfs f1,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
loc_826AECB8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AECC4"))) PPC_WEAK_FUNC(sub_826AECC4);
PPC_FUNC_IMPL(__imp__sub_826AECC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AECC8"))) PPC_WEAK_FUNC(sub_826AECC8);
PPC_FUNC_IMPL(__imp__sub_826AECC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x826aecd8
	if (cr6.gt) goto loc_826AECD8;
	// b 0x826baf90
	sub_826BAF90(ctx, base);
	return;
loc_826AECD8:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x826aece4
	if (!cr6.eq) goto loc_826AECE4;
	// b 0x826b8960
	sub_826B8960(ctx, base);
	return;
loc_826AECE4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AECF0"))) PPC_WEAK_FUNC(sub_826AECF0);
PPC_FUNC_IMPL(__imp__sub_826AECF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x826aed00
	if (cr6.gt) goto loc_826AED00;
	// b 0x826bb7f0
	sub_826BB7F0(ctx, base);
	return;
loc_826AED00:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x826aed0c
	if (!cr6.eq) goto loc_826AED0C;
	// b 0x826ba460
	sub_826BA460(ctx, base);
	return;
loc_826AED0C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AED18"))) PPC_WEAK_FUNC(sub_826AED18);
PPC_FUNC_IMPL(__imp__sub_826AED18) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26660
	r11.s64 = r11.s64 + -26660;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826b6c48
	sub_826B6C48(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r11,-26264
	r11.s64 = r11.s64 + -26264;
	// addi r10,r10,-26360
	ctx.r10.s64 = ctx.r10.s64 + -26360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_826AED8C"))) PPC_WEAK_FUNC(sub_826AED8C);
PPC_FUNC_IMPL(__imp__sub_826AED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AED90"))) PPC_WEAK_FUNC(sub_826AED90);
PPC_FUNC_IMPL(__imp__sub_826AED90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x826af580
	sub_826AF580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AED98"))) PPC_WEAK_FUNC(sub_826AED98);
PPC_FUNC_IMPL(__imp__sub_826AED98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,156(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 156);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AEDA8"))) PPC_WEAK_FUNC(sub_826AEDA8);
PPC_FUNC_IMPL(__imp__sub_826AEDA8) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b6d08
	sub_826B6D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AEDAC"))) PPC_WEAK_FUNC(sub_826AEDAC);
PPC_FUNC_IMPL(__imp__sub_826AEDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AEDB0"))) PPC_WEAK_FUNC(sub_826AEDB0);
PPC_FUNC_IMPL(__imp__sub_826AEDB0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826aedec
	if (cr6.lt) goto loc_826AEDEC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826AEDEC:
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

__attribute__((alias("__imp__sub_826AEE00"))) PPC_WEAK_FUNC(sub_826AEE00);
PPC_FUNC_IMPL(__imp__sub_826AEE00) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826aee38
	if (cr6.lt) goto loc_826AEE38;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
loc_826AEE38:
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

__attribute__((alias("__imp__sub_826AEE4C"))) PPC_WEAK_FUNC(sub_826AEE4C);
PPC_FUNC_IMPL(__imp__sub_826AEE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AEE50"))) PPC_WEAK_FUNC(sub_826AEE50);
PPC_FUNC_IMPL(__imp__sub_826AEE50) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826aee8c
	if (cr6.lt) goto loc_826AEE8C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826AEE8C:
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

__attribute__((alias("__imp__sub_826AEEA0"))) PPC_WEAK_FUNC(sub_826AEEA0);
PPC_FUNC_IMPL(__imp__sub_826AEEA0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826aeed4
	if (cr6.eq) goto loc_826AEED4;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_826AEED4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x826aeee8
	if (cr6.eq) goto loc_826AEEE8;
	// lbz r11,157(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 157);
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
loc_826AEEE8:
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

__attribute__((alias("__imp__sub_826AEF00"))) PPC_WEAK_FUNC(sub_826AEF00);
PPC_FUNC_IMPL(__imp__sub_826AEF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,96(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AEF10"))) PPC_WEAK_FUNC(sub_826AEF10);
PPC_FUNC_IMPL(__imp__sub_826AEF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,96(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 96, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AEF20"))) PPC_WEAK_FUNC(sub_826AEF20);
PPC_FUNC_IMPL(__imp__sub_826AEF20) {
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
	// lfs f1,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8239ebe8
	sub_8239EBE8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-26224(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26224);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
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

__attribute__((alias("__imp__sub_826AEF68"))) PPC_WEAK_FUNC(sub_826AEF68);
PPC_FUNC_IMPL(__imp__sub_826AEF68) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfd f1,264(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 264);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
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

__attribute__((alias("__imp__sub_826AEFAC"))) PPC_WEAK_FUNC(sub_826AEFAC);
PPC_FUNC_IMPL(__imp__sub_826AEFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AEFB0"))) PPC_WEAK_FUNC(sub_826AEFB0);
PPC_FUNC_IMPL(__imp__sub_826AEFB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,100(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AEFC0"))) PPC_WEAK_FUNC(sub_826AEFC0);
PPC_FUNC_IMPL(__imp__sub_826AEFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,100(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 100, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AEFD0"))) PPC_WEAK_FUNC(sub_826AEFD0);
PPC_FUNC_IMPL(__imp__sub_826AEFD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826aefe4
	if (cr6.eq) goto loc_826AEFE4;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// b 0x826aefe8
	goto loc_826AEFE8;
loc_826AEFE4:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_826AEFE8:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x826aeff8
	if (cr6.eq) goto loc_826AEFF8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x826aeffc
	goto loc_826AEFFC;
loc_826AEFF8:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_826AEFFC:
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x826af010
	if (cr6.eq) goto loc_826AF010;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
loc_826AF010:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF018"))) PPC_WEAK_FUNC(sub_826AF018);
PPC_FUNC_IMPL(__imp__sub_826AF018) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r11,r11,-26264
	r11.s64 = r11.s64 + -26264;
	// addi r10,r10,-26360
	ctx.r10.s64 = ctx.r10.s64 + -26360;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826b6c88
	sub_826B6C88(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-26680
	r11.s64 = r11.s64 + -26680;
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

__attribute__((alias("__imp__sub_826AF06C"))) PPC_WEAK_FUNC(sub_826AF06C);
PPC_FUNC_IMPL(__imp__sub_826AF06C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF070"))) PPC_WEAK_FUNC(sub_826AF070);
PPC_FUNC_IMPL(__imp__sub_826AF070) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826af0b0
	if (cr6.eq) goto loc_826AF0B0;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x826af0d0
	if (cr6.eq) goto loc_826AF0D0;
loc_826AF0B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826af0d4
	goto loc_826AF0D4;
loc_826AF0D0:
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826AF0D4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x826af0fc
	if (cr6.eq) goto loc_826AF0FC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826af148
	if (!cr6.eq) goto loc_826AF148;
loc_826AF0FC:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826af138
	if (cr6.eq) goto loc_826AF138;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x826af138
	if (!cr6.eq) goto loc_826AF138;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826af138
	if (!cr6.eq) goto loc_826AF138;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AF138:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826AF148:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x826af160
	if (cr6.eq) goto loc_826AF160;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AF160:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826af19c
	if (cr6.eq) goto loc_826AF19C;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x826af19c
	if (!cr6.eq) goto loc_826AF19C;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826af19c
	if (!cr6.eq) goto loc_826AF19C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AF19C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826AF1A8"))) PPC_WEAK_FUNC(sub_826AF1A8);
PPC_FUNC_IMPL(__imp__sub_826AF1A8) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826af1ec
	if (cr6.eq) goto loc_826AF1EC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826af200
	if (cr6.eq) goto loc_826AF200;
loc_826AF1EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r26,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r26.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AF200:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r9,r27,24
	ctx.r9.u64 = r27.u32 & 0xFF;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// lbz r8,156(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// andc r11,r8,r11
	r11.u64 = ctx.r8.u64 & ~r11.u64;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stb r11,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826af268
	if (cr6.eq) goto loc_826AF268;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826af268
	if (!cr6.eq) goto loc_826AF268;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826af268
	if (!cr6.eq) goto loc_826AF268;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AF268:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826AF270"))) PPC_WEAK_FUNC(sub_826AF270);
PPC_FUNC_IMPL(__imp__sub_826AF270) {
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
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826af2ac
	if (cr6.eq) goto loc_826AF2AC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826af2c0
	if (cr6.eq) goto loc_826AF2C0;
loc_826AF2AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AF2C0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826af2e4
	if (!cr6.eq) goto loc_826AF2E4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x826af2f8
	goto loc_826AF2F8;
loc_826AF2E4:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826af310
	if (cr6.eq) goto loc_826AF310;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
loc_826AF2F8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AF310:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826af354
	if (cr6.eq) goto loc_826AF354;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826af354
	if (!cr6.eq) goto loc_826AF354;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826af354
	if (!cr6.eq) goto loc_826AF354;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AF354:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826AF360"))) PPC_WEAK_FUNC(sub_826AF360);
PPC_FUNC_IMPL(__imp__sub_826AF360) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826af3a0
	if (cr6.eq) goto loc_826AF3A0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826af3b4
	if (cr6.eq) goto loc_826AF3B4;
loc_826AF3A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AF3B4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r10,156(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826af43c
	if (cr6.eq) goto loc_826AF43C;
	// clrlwi r9,r27,31
	ctx.r9.u64 = r27.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826af41c
	if (!cr6.eq) goto loc_826AF41C;
	// andi. r9,r10,18
	ctx.r9.u64 = ctx.r10.u64 & 18;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826af41c
	if (!cr6.eq) goto loc_826AF41C;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826af43c
	if (!cr6.eq) goto loc_826AF43C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lhz r11,-22304(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + -22304);
	// sth r11,158(r30)
	PPC_STORE_U16(r30.u32 + 158, r11.u16);
	// b 0x826af438
	goto loc_826AF438;
loc_826AF41C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,87
	ctx.r4.s64 = 87;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826AF438:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AF43C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826af480
	if (cr6.eq) goto loc_826AF480;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826af480
	if (!cr6.eq) goto loc_826AF480;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826af480
	if (!cr6.eq) goto loc_826AF480;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AF480:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826AF48C"))) PPC_WEAK_FUNC(sub_826AF48C);
PPC_FUNC_IMPL(__imp__sub_826AF48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF490"))) PPC_WEAK_FUNC(sub_826AF490);
PPC_FUNC_IMPL(__imp__sub_826AF490) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826af4cc
	if (cr6.eq) goto loc_826AF4CC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x826af4e4
	if (cr6.eq) goto loc_826AF4E4;
loc_826AF4CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AF4E4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x826af530
	if (cr6.eq) goto loc_826AF530;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826af530
	if (cr6.eq) goto loc_826AF530;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AF530:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826af570
	if (cr6.eq) goto loc_826AF570;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x826af570
	if (!cr6.eq) goto loc_826AF570;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826af570
	if (!cr6.eq) goto loc_826AF570;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AF570:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826AF57C"))) PPC_WEAK_FUNC(sub_826AF57C);
PPC_FUNC_IMPL(__imp__sub_826AF57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF580"))) PPC_WEAK_FUNC(sub_826AF580);
PPC_FUNC_IMPL(__imp__sub_826AF580) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r31,12
	ctx.r3.s64 = r31.s64 + 12;
	// addi r11,r11,-26264
	r11.s64 = r11.s64 + -26264;
	// addi r10,r10,-26360
	ctx.r10.s64 = ctx.r10.s64 + -26360;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x826b6c88
	sub_826B6C88(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r11,r11,-26680
	r11.s64 = r11.s64 + -26680;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x826af5e8
	if (cr6.eq) goto loc_826AF5E8;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
loc_826AF5E8:
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

__attribute__((alias("__imp__sub_826AF604"))) PPC_WEAK_FUNC(sub_826AF604);
PPC_FUNC_IMPL(__imp__sub_826AF604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF608"))) PPC_WEAK_FUNC(sub_826AF608);
PPC_FUNC_IMPL(__imp__sub_826AF608) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x826b7758
	sub_826B7758(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826af658
	if (cr6.eq) goto loc_826AF658;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826af658
	if (cr6.eq) goto loc_826AF658;
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826AF658:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AF664"))) PPC_WEAK_FUNC(sub_826AF664);
PPC_FUNC_IMPL(__imp__sub_826AF664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF668"))) PPC_WEAK_FUNC(sub_826AF668);
PPC_FUNC_IMPL(__imp__sub_826AF668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x826af678
	if (!cr6.eq) goto loc_826AF678;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AF678:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826AF688"))) PPC_WEAK_FUNC(sub_826AF688);
PPC_FUNC_IMPL(__imp__sub_826AF688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x826af698
	if (!cr6.eq) goto loc_826AF698;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AF698:
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

__attribute__((alias("__imp__sub_826AF6A8"))) PPC_WEAK_FUNC(sub_826AF6A8);
PPC_FUNC_IMPL(__imp__sub_826AF6A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF6D0"))) PPC_WEAK_FUNC(sub_826AF6D0);
PPC_FUNC_IMPL(__imp__sub_826AF6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r3,-8
	r11.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x826af6e0
	if (!cr6.eq) goto loc_826AF6E0;
	// li r11,0
	r11.s64 = 0;
loc_826AF6E0:
	// addi r10,r11,20
	ctx.r10.s64 = r11.s64 + 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF704"))) PPC_WEAK_FUNC(sub_826AF704);
PPC_FUNC_IMPL(__imp__sub_826AF704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF708"))) PPC_WEAK_FUNC(sub_826AF708);
PPC_FUNC_IMPL(__imp__sub_826AF708) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r10,r11,-26220
	ctx.r10.s64 = r11.s64 + -26220;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,0
	r11.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stb r10,8(r31)
	PPC_STORE_U8(r31.u32 + 8, ctx.r10.u8);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lbz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// stb r29,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r29.u8);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bne cr6,0x826af7f4
	if (!cr6.eq) goto loc_826AF7F4;
	// addi r30,r4,4
	r30.s64 = ctx.r4.s64 + 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// divwu r11,r11,r8
	r11.u32 = r11.u32 / ctx.r8.u32;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// twllei r8,0
	// twllei r11,0
	// divwu r11,r9,r11
	r11.u32 = ctx.r9.u32 / r11.u32;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// mullw r11,r11,r7
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r3,127
	r11.s64 = ctx.r3.s64 + 127;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// rlwinm r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// beq cr6,0x826af7d8
	if (cr6.eq) goto loc_826AF7D8;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r31,12
	ctx.r9.s64 = r31.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826AF7D8:
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826AF7F4:
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stb r29,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r29.u8);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AF814"))) PPC_WEAK_FUNC(sub_826AF814);
PPC_FUNC_IMPL(__imp__sub_826AF814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF818"))) PPC_WEAK_FUNC(sub_826AF818);
PPC_FUNC_IMPL(__imp__sub_826AF818) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bne 0x826af858
	if (!cr0.eq) goto loc_826AF858;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_826AF858:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF86C"))) PPC_WEAK_FUNC(sub_826AF86C);
PPC_FUNC_IMPL(__imp__sub_826AF86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF870"))) PPC_WEAK_FUNC(sub_826AF870);
PPC_FUNC_IMPL(__imp__sub_826AF870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r11,r3,8
	r11.s64 = ctx.r3.s64 + 8;
	// bne cr6,0x826af880
	if (!cr6.eq) goto loc_826AF880;
	// li r11,0
	r11.s64 = 0;
loc_826AF880:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AF888"))) PPC_WEAK_FUNC(sub_826AF888);
PPC_FUNC_IMPL(__imp__sub_826AF888) {
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
	// bne cr6,0x826af8b0
	if (!cr6.eq) goto loc_826AF8B0;
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
loc_826AF8B0:
	// lis r11,0
	r11.s64 = 0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,256
	ctx.r10.s64 = 256;
	// lbz r8,1(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// twllei r9,0
	// lbz r6,13(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 13);
	// divwu r9,r11,r9
	ctx.r9.u32 = r11.u32 / ctx.r9.u32;
	// lbz r4,21(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 21);
	// twllei r7,0
	// twllei r9,0
	// divwu r9,r10,r9
	ctx.r9.u32 = ctx.r10.u32 / ctx.r9.u32;
	// divwu r7,r11,r7
	ctx.r7.u32 = r11.u32 / ctx.r7.u32;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// twllei r7,0
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// divwu r11,r11,r8
	r11.u32 = r11.u32 / ctx.r8.u32;
	// twllei r8,0
	// divwu r8,r10,r7
	ctx.r8.u32 = ctx.r10.u32 / ctx.r7.u32;
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r11,r11,r4
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r4.s32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x826af930
	if (!cr6.gt) goto loc_826AF930;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x826af994
	goto loc_826AF994;
loc_826AF930:
	// clrlwi r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x826af954
	if (!cr6.eq) goto loc_826AF954;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x826af954
	if (!cr6.gt) goto loc_826AF954;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x826af994
	goto loc_826AF994;
loc_826AF954:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826af988
	if (cr6.eq) goto loc_826AF988;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826af96c
	if (cr6.eq) goto loc_826AF96C;
	// li r11,0
	r11.s64 = 0;
loc_826AF96C:
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
loc_826AF988:
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,21(r31)
	PPC_STORE_U8(r31.u32 + 21, r11.u8);
loc_826AF994:
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

__attribute__((alias("__imp__sub_826AF9AC"))) PPC_WEAK_FUNC(sub_826AF9AC);
PPC_FUNC_IMPL(__imp__sub_826AF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF9B0"))) PPC_WEAK_FUNC(sub_826AF9B0);
PPC_FUNC_IMPL(__imp__sub_826AF9B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x826af9c0
	if (!cr6.eq) goto loc_826AF9C0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826AF9C0:
	// b 0x826af888
	sub_826AF888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826AF9C4"))) PPC_WEAK_FUNC(sub_826AF9C4);
PPC_FUNC_IMPL(__imp__sub_826AF9C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AF9C8"))) PPC_WEAK_FUNC(sub_826AF9C8);
PPC_FUNC_IMPL(__imp__sub_826AF9C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826afa0c
	if (!cr6.eq) goto loc_826AFA0C;
	// lis r11,0
	r11.s64 = 0;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,256
	ctx.r10.s64 = 256;
	// lbz r8,5(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// twllei r9,0
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_826AFA0C:
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AFA1C"))) PPC_WEAK_FUNC(sub_826AFA1C);
PPC_FUNC_IMPL(__imp__sub_826AFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AFA20"))) PPC_WEAK_FUNC(sub_826AFA20);
PPC_FUNC_IMPL(__imp__sub_826AFA20) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826afa90
	if (cr6.eq) goto loc_826AFA90;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826af708
	sub_826AF708(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826afa90
	if (cr6.eq) goto loc_826AFA90;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826AFA90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AFAA0"))) PPC_WEAK_FUNC(sub_826AFAA0);
PPC_FUNC_IMPL(__imp__sub_826AFAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-26680
	r11.s64 = r11.s64 + -26680;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AFAB0"))) PPC_WEAK_FUNC(sub_826AFAB0);
PPC_FUNC_IMPL(__imp__sub_826AFAB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826afbc4
	if (cr6.eq) goto loc_826AFBC4;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826afbc4
	if (cr6.eq) goto loc_826AFBC4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826afaf4
	if (!cr6.eq) goto loc_826AFAF4;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x826afbc4
	if (cr6.gt) goto loc_826AFBC4;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,-26140
	r11.s64 = r11.s64 + -26140;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
loc_826AFAF4:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x826afb20
	if (!cr6.eq) goto loc_826AFB20;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bgt cr6,0x826afbc4
	if (cr6.gt) goto loc_826AFBC4;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stb r3,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r3.u8);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,-26140
	r11.s64 = r11.s64 + -26140;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
loc_826AFB20:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x826afb90
	if (cr6.eq) goto loc_826AFB90;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x826afb60
	if (cr6.eq) goto loc_826AFB60;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x826afbc4
	if (!cr6.eq) goto loc_826AFBC4;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826afbc4
	if (!cr6.eq) goto loc_826AFBC4;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,-26140
	r11.s64 = r11.s64 + -26140;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,144
	r11.s64 = r11.s64 + 144;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
loc_826AFB60:
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x826afb70
	if (cr6.eq) goto loc_826AFB70;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826afbc4
	if (!cr6.eq) goto loc_826AFBC4;
loc_826AFB70:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-26140
	r11.s64 = r11.s64 + -26140;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
loc_826AFB90:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x826afba8
	if (cr6.eq) goto loc_826AFBA8;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// beq cr6,0x826afba8
	if (cr6.eq) goto loc_826AFBA8;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// bne cr6,0x826afbc4
	if (!cr6.eq) goto loc_826AFBC4;
loc_826AFBA8:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r11,-26140
	r11.s64 = r11.s64 + -26140;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stb r10,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r10.u8);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// blr 
	return;
loc_826AFBC4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AFBCC"))) PPC_WEAK_FUNC(sub_826AFBCC);
PPC_FUNC_IMPL(__imp__sub_826AFBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AFBD0"))) PPC_WEAK_FUNC(sub_826AFBD0);
PPC_FUNC_IMPL(__imp__sub_826AFBD0) {
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
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bgt cr6,0x826afd2c
	if (cr6.gt) goto loc_826AFD2C;
	// beq cr6,0x826afd10
	if (cr6.eq) goto loc_826AFD10;
	// addis r11,r3,-1
	r11.s64 = ctx.r3.s64 + -65536;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826afcbc
	if (cr0.eq) goto loc_826AFCBC;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x826afc64
	if (cr6.eq) goto loc_826AFC64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826afd40
	if (!cr6.eq) goto loc_826AFD40;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// addi r3,r11,-13256
	ctx.r3.s64 = r11.s64 + -13256;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826afc58
	if (cr6.eq) goto loc_826AFC58;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826afc58
	if (!cr6.eq) goto loc_826AFC58;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bne cr6,0x826afc58
	if (!cr6.eq) goto loc_826AFC58;
	// lbz r31,12(r3)
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// stb r11,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, r11.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826AFC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826AFC64:
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826afc90
	if (cr6.eq) goto loc_826AFC90;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826afcfc
	if (cr6.eq) goto loc_826AFCFC;
loc_826AFC90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53fc
	__imp__KeTryToAcquireSpinLockAtRaisedIrql(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826afcf0
	if (!cr6.eq) goto loc_826AFCF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16388
	ctx.r3.u64 = ctx.r3.u64 | 16388;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826AFCBC:
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826afce8
	if (cr6.eq) goto loc_826AFCE8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826afcfc
	if (cr6.eq) goto loc_826AFCFC;
loc_826AFCE8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
loc_826AFCF0:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826AFCFC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_826AFD04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826AFD10:
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r11,r11,10624
	r11.s64 = r11.s64 + 10624;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826AFD2C:
	// addis r11,r3,-2
	r11.s64 = ctx.r3.s64 + -131072;
	// addic. r11,r11,-2
	xer.ca = r11.u32 > 1;
	r11.s64 = r11.s64 + -2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826afd6c
	if (cr0.eq) goto loc_826AFD6C;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x826afd50
	if (cr6.eq) goto loc_826AFD50;
loc_826AFD40:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826AFD50:
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r11,r11,10624
	r11.s64 = r11.s64 + 10624;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826AFD6C:
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r11,r11,10624
	r11.s64 = r11.s64 + 10624;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x826e537c
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826afd04
	if (!cr6.eq) goto loc_826AFD04;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16388
	ctx.r3.u64 = ctx.r3.u64 | 16388;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826AFD94"))) PPC_WEAK_FUNC(sub_826AFD94);
PPC_FUNC_IMPL(__imp__sub_826AFD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826AFD98"))) PPC_WEAK_FUNC(sub_826AFD98);
PPC_FUNC_IMPL(__imp__sub_826AFD98) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-25964
	r11.s64 = r11.s64 + -25964;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x826afdd8
	if (cr6.eq) goto loc_826AFDD8;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
loc_826AFDD8:
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

__attribute__((alias("__imp__sub_826AFDF0"))) PPC_WEAK_FUNC(sub_826AFDF0);
PPC_FUNC_IMPL(__imp__sub_826AFDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,32746
	r11.s64 = 2146041856;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// ori r11,r11,6144
	r11.u64 = r11.u64 | 6144;
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// stw r11,-13240(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13240, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826AFE08"))) PPC_WEAK_FUNC(sub_826AFE08);
PPC_FUNC_IMPL(__imp__sub_826AFE08) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// rlwinm r11,r27,1,0,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// li r31,0
	r31.s64 = 0;
	// addi r11,r11,143
	r11.s64 = r11.s64 + 143;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// rlwinm r29,r11,0,0,24
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	// beq cr6,0x826afe74
	if (cr6.eq) goto loc_826AFE74;
	// addi r11,r25,8
	r11.s64 = r25.s64 + 8;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_826AFE4C:
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// bne cr6,0x826afe4c
	if (!cr6.eq) goto loc_826AFE4C;
loc_826AFE74:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// add r30,r29,r31
	r30.u64 = r29.u64 + r31.u64;
	// lis r5,-22654
	ctx.r5.s64 = -1484652544;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// ori r5,r5,7
	ctx.r5.u64 = ctx.r5.u64 | 7;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826b4130
	sub_826B4130(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// bne cr6,0x826afeb0
	if (!cr6.eq) goto loc_826AFEB0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
loc_826AFEB0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a84d8
	sub_826A84D8(ctx, base);
	// addi r10,r26,16
	ctx.r10.s64 = r26.s64 + 16;
	// add r29,r29,r26
	r29.u64 = r29.u64 + r26.u64;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r10,8(r26)
	PPC_STORE_U32(r26.u32 + 8, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// beq cr6,0x826afef0
	if (cr6.eq) goto loc_826AFEF0;
loc_826AFEE0:
	// dcbf r11,r29
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// blt cr6,0x826afee0
	if (cr6.lt) goto loc_826AFEE0;
loc_826AFEF0:
	// oris r11,r24,3
	r11.u64 = r24.u64 | 196608;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// beq cr6,0x826afff0
	if (cr6.eq) goto loc_826AFFF0;
	// lis r11,0
	r11.s64 = 0;
	// addi r30,r25,8
	r30.s64 = r25.s64 + 8;
	// li r28,0
	r28.s64 = 0;
	// ori r25,r11,44100
	r25.u64 = r11.u64 | 44100;
loc_826AFF10:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// add r31,r11,r28
	r31.u64 = r11.u64 + r28.u64;
	// stw r29,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r29.u32);
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// cmplwi cr6,r11,24000
	cr6.compare<uint32_t>(r11.u32, 24000, xer);
	// bgt cr6,0x826aff30
	if (cr6.gt) goto loc_826AFF30;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x826aff50
	goto loc_826AFF50;
loc_826AFF30:
	// cmplwi cr6,r11,32000
	cr6.compare<uint32_t>(r11.u32, 32000, xer);
	// bgt cr6,0x826aff40
	if (cr6.gt) goto loc_826AFF40;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x826aff50
	goto loc_826AFF50;
loc_826AFF40:
	// subfc r11,r11,r25
	xer.ca = r25.u32 >= r11.u32;
	r11.s64 = r25.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// addi r10,r11,2
	ctx.r10.s64 = r11.s64 + 2;
loc_826AFF50:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwimi r11,r10,27,3,4
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 27) & 0x18000000) | (r11.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r11,r10,29,2,2
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0x20000000) | (r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x826e51dc
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lwz r8,-4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// mullw r10,r9,r8
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// rlwimi r11,r10,15,5,9
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 15) & 0x7C00000) | (r11.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lwz r10,-4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// rotlwi r11,r11,1
	r11.u64 = __builtin_rotateleft32(r11.u32, 1);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
	// bl 0x826e51dc
	__imp__MmGetPhysicalAddress(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r28,r28,96
	r28.s64 = r28.s64 + 96;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// bne cr6,0x826aff10
	if (!cr6.eq) goto loc_826AFF10;
loc_826AFFF0:
	// clrlwi r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b0024
	if (!cr6.eq) goto loc_826B0024;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826b0b18
	sub_826B0B18(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x826b0024
	if (!cr6.lt) goto loc_826B0024;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826b0038
	sub_826B0038(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
loc_826B0024:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r26.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_826B0034"))) PPC_WEAK_FUNC(sub_826B0034);
PPC_FUNC_IMPL(__imp__sub_826B0034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0038"))) PPC_WEAK_FUNC(sub_826B0038);
PPC_FUNC_IMPL(__imp__sub_826B0038) {
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
	// bl 0x826b0088
	sub_826B0088(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826b0070
	if (cr6.eq) goto loc_826B0070;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,-22654
	ctx.r5.s64 = -1484652544;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// ori r5,r5,7
	ctx.r5.u64 = ctx.r5.u64 | 7;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
loc_826B0070:
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

__attribute__((alias("__imp__sub_826B0088"))) PPC_WEAK_FUNC(sub_826B0088);
PPC_FUNC_IMPL(__imp__sub_826B0088) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r29,r28
	r29.u64 = r28.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x826b00e8
	if (!cr6.gt) goto loc_826B00E8;
	// mr r31,r28
	r31.u64 = r28.u64;
loc_826B00B0:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// lwz r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b00d4
	if (cr6.eq) goto loc_826B00D4;
	// bl 0x826e540c
	__imp__XMAReleaseContext(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// stw r28,64(r11)
	PPC_STORE_U32(r11.u32 + 64, r28.u32);
loc_826B00D4:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,96
	r31.s64 = r31.s64 + 96;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x826b00b0
	if (cr6.lt) goto loc_826B00B0;
loc_826B00E8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,14,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFBFFFF;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B0100"))) PPC_WEAK_FUNC(sub_826B0100);
PPC_FUNC_IMPL(__imp__sub_826B0100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,14,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B010C"))) PPC_WEAK_FUNC(sub_826B010C);
PPC_FUNC_IMPL(__imp__sub_826B010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0110"))) PPC_WEAK_FUNC(sub_826B0110);
PPC_FUNC_IMPL(__imp__sub_826B0110) {
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
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r30,r6,21,11,31
	r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1FFFFF;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r28,r11,12,30,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b0170
	if (!cr6.eq) goto loc_826B0170;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e51dc
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// rlwimi r30,r11,0,0,19
	r30.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (r30.u64 & 0xFFFFFFFF00000FFF);
	// oris r11,r30,16
	r11.u64 = r30.u64 | 1048576;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// b 0x826b01a4
	goto loc_826B01A4;
loc_826B0170:
	// rlwinm r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b01d4
	if (!cr6.eq) goto loc_826B01D4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e51dc
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r3,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r3.u32);
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwimi r30,r11,0,0,19
	r30.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (r30.u64 & 0xFFFFFFFF00000FFF);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
loc_826B01A4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x826b01c8
	if (!cr6.eq) goto loc_826B01C8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826b0908
	sub_826B0908(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b01c8
	if (cr6.eq) goto loc_826B01C8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r3,r11,0,0,5
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFC000000) | (ctx.r3.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_826B01C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_826B01D4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B01E4"))) PPC_WEAK_FUNC(sub_826B01E4);
PPC_FUNC_IMPL(__imp__sub_826B01E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B01E8"))) PPC_WEAK_FUNC(sub_826B01E8);
PPC_FUNC_IMPL(__imp__sub_826B01E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826b0224
	if (cr6.eq) goto loc_826B0224;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// cmplw cr6,r9,r5
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, xer);
	// bne cr6,0x826b0224
	if (!cr6.eq) goto loc_826B0224;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826B0224:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b0240
	if (cr6.eq) goto loc_826B0240;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_826B0240:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0248"))) PPC_WEAK_FUNC(sub_826B0248);
PPC_FUNC_IMPL(__imp__sub_826B0248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// beq cr6,0x826b0270
	if (cr6.eq) goto loc_826B0270;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x826b027c
	goto loc_826B027C;
loc_826B0270:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_826B027C:
	// rlwinm r11,r11,0,10,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x300000;
	// addis r11,r11,-48
	r11.s64 = r11.s64 + -3145728;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0294"))) PPC_WEAK_FUNC(sub_826B0294);
PPC_FUNC_IMPL(__imp__sub_826B0294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0298"))) PPC_WEAK_FUNC(sub_826B0298);
PPC_FUNC_IMPL(__imp__sub_826B0298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// beq cr6,0x826b02d0
	if (cr6.eq) goto loc_826B02D0;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,12,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_826B02D0:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,12,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// addi r11,r11,0
	r11.s64 = r11.s64 + 0;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B02F0"))) PPC_WEAK_FUNC(sub_826B02F0);
PPC_FUNC_IMPL(__imp__sub_826B02F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r7,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b0344
	if (cr6.eq) goto loc_826B0344;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r9,r8,5,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b0334
	if (cr6.lt) goto loc_826B0334;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// b 0x826b034c
	goto loc_826B034C;
loc_826B0334:
	// rlwinm r8,r8,10,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 10) & 0x1F;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x826b034c
	goto loc_826B034C;
loc_826B0344:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,10,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1F;
loc_826B034C:
	// lhz r9,82(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 82);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r11,r7,3,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srw r3,r10,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0368"))) PPC_WEAK_FUNC(sub_826B0368);
PPC_FUNC_IMPL(__imp__sub_826B0368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x8239bcfc
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// rlwinm r4,r10,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// rlwinm r10,r10,8,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F00;
	// lhz r9,82(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 82);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// beq cr6,0x826b0444
	if (cr6.eq) goto loc_826B0444;
	// subfic r8,r9,256
	xer.ca = ctx.r9.u32 <= 256;
	ctx.r8.s64 = 256 - ctx.r9.s64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x826b03e4
	if (!cr6.lt) goto loc_826B03E4;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// sth r9,82(r8)
	PPC_STORE_U16(ctx.r8.u32 + 82, ctx.r9.u16);
	// b 0x826b0440
	goto loc_826B0440;
loc_826B03E4:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 + ctx.r9.u64;
	// sth r29,82(r9)
	PPC_STORE_U16(ctx.r9.u32 + 82, r29.u16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r7,r9,10,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1F;
	// clrlwi r9,r8,27
	ctx.r9.u64 = ctx.r8.u32 & 0x1F;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r7
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, xer);
	// blt cr6,0x826b0418
	if (cr6.lt) goto loc_826B0418;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_826B0418:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r6,r29,r9
	ctx.r6.s64 = ctx.r9.s64 - r29.s64;
	// rlwimi r8,r9,0,27,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x1F) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE0);
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// oris r7,r7,32768
	ctx.r7.u64 = ctx.r7.u64 | 2147483648;
	// rlwinm r9,r6,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x1;
	// stw r8,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r8.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// beq cr6,0x826b0444
	if (cr6.eq) goto loc_826B0444;
loc_826B0440:
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_826B0444:
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r8,r10,24,8,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFFFFFF;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r10,r5,27
	ctx.r10.u64 = ctx.r5.u32 & 0x1F;
	// rlwinm r7,r6,5,27,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0x1F;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// ble cr6,0x826b0470
	if (!cr6.gt) goto loc_826B0470;
	// subf r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	// b 0x826b048c
	goto loc_826B048C;
loc_826B0470:
	// blt cr6,0x826b0484
	if (cr6.lt) goto loc_826B0484;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r7,r7,0,0,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x826b048c
	if (!cr6.eq) goto loc_826B048C;
loc_826B0484:
	// rlwinm r9,r6,10,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_826B048C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826b04d4
	if (cr6.eq) goto loc_826B04D4;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x826b04a0
	if (cr6.lt) goto loc_826B04A0;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_826B04A0:
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r6,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 10) & 0x1F;
	// add r31,r7,r31
	r31.u64 = ctx.r7.u64 + r31.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x826b04c0
	if (cr6.lt) goto loc_826B04C0;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_826B04C0:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwimi r5,r10,0,27,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1F) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFE0);
	// oris r8,r8,32768
	ctx.r8.u64 = ctx.r8.u64 | 2147483648;
	// stw r5,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r5.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_826B04D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b04f4
	if (cr6.eq) goto loc_826B04F4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826b04f4
	if (cr6.eq) goto loc_826B04F4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// add r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 + ctx.r10.u64;
	// sth r30,82(r10)
	PPC_STORE_U16(ctx.r10.u32 + 82, r30.u16);
loc_826B04F4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x1;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srw r3,r31,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (r31.u32 >> (ctx.r10.u8 & 0x3F));
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826B051C"))) PPC_WEAK_FUNC(sub_826B051C);
PPC_FUNC_IMPL(__imp__sub_826B051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0520"))) PPC_WEAK_FUNC(sub_826B0520);
PPC_FUNC_IMPL(__imp__sub_826B0520) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r8,68(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// rlwinm r9,r9,8,19,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F00;
	// lhz r10,82(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 82);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r8,r9,5,27,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x1F;
	// rlwinm r6,r9,10,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 10) & 0x1F;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// rlwinm r9,r7,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// beq cr6,0x826b0584
	if (cr6.eq) goto loc_826B0584;
	// subfic r3,r10,256
	xer.ca = ctx.r10.u32 <= 256;
	ctx.r3.s64 = 256 - ctx.r10.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r9,1
	ctx.r9.s64 = 1;
loc_826B0584:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// ble cr6,0x826b0598
	if (!cr6.gt) goto loc_826B0598;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// b 0x826b05ac
	goto loc_826B05AC;
loc_826B0598:
	// blt cr6,0x826b05a8
	if (cr6.lt) goto loc_826B05A8;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826b05ac
	if (!cr6.eq) goto loc_826B05AC;
loc_826B05A8:
	// subf r10,r11,r6
	ctx.r10.s64 = ctx.r6.s64 - r11.s64;
loc_826B05AC:
	// rlwinm r11,r10,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r7,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// srw r3,r11,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r10.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B05C4"))) PPC_WEAK_FUNC(sub_826B05C4);
PPC_FUNC_IMPL(__imp__sub_826B05C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B05C8"))) PPC_WEAK_FUNC(sub_826B05C8);
PPC_FUNC_IMPL(__imp__sub_826B05C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r7,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r9,r10,10,27,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1F;
	// subfic r8,r8,7
	xer.ca = ctx.r8.u32 <= 7;
	ctx.r8.s64 = 7 - ctx.r8.s64;
	// srw r8,r5,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// bge cr6,0x826b062c
	if (!cr6.lt) goto loc_826B062C;
	// rlwinm r6,r10,5,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x1F;
	// subf r8,r8,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r8.s64;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x826b0638
	if (cr6.lt) goto loc_826B0638;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// oris r9,r7,32768
	ctx.r9.u64 = ctx.r7.u64 | 2147483648;
	// rlwimi r10,r8,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_826B062C:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// clrlwi r8,r9,6
	ctx.r8.u64 = ctx.r9.u32 & 0x3FFFFFF;
loc_826B0638:
	// oris r9,r7,32768
	ctx.r9.u64 = ctx.r7.u64 | 2147483648;
	// rlwimi r10,r8,27,0,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 27) & 0xF8000000) | (ctx.r10.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B064C"))) PPC_WEAK_FUNC(sub_826B064C);
PPC_FUNC_IMPL(__imp__sub_826B064C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0650"))) PPC_WEAK_FUNC(sub_826B0650);
PPC_FUNC_IMPL(__imp__sub_826B0650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// rlwinm r8,r8,3,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0x1;
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826b06ac
	if (cr6.eq) goto loc_826B06AC;
loc_826B0690:
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// dcbz r9,r11
	memset(base + ((ctx.r9.u32 + r11.u32) & ~31), 0, 32);
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x826b0690
	if (cr6.lt) goto loc_826B0690;
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
loc_826B06AC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r7,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r9,r9,0,5,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFF000;
	// stw r7,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r7.u32);
	// stw r7,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r7.u32);
	// rlwinm r9,r9,0,12,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFCFFFFF;
	// sth r7,82(r11)
	PPC_STORE_U16(r11.u32 + 82, ctx.r7.u16);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwimi r11,r8,31,20,0
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 31) & 0xFFFFFFFF80000FFF) | (r11.u64 & 0x7FFFF000);
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r6,r6,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r7,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r7.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// clrlwi r8,r8,6
	ctx.r8.u64 = ctx.r8.u32 & 0x3FFFFFF;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// stw r7,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r7.u32);
	// clrlwi r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r6.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0714"))) PPC_WEAK_FUNC(sub_826B0714);
PPC_FUNC_IMPL(__imp__sub_826B0714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0718"))) PPC_WEAK_FUNC(sub_826B0718);
PPC_FUNC_IMPL(__imp__sub_826B0718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// bne cr6,0x826b0740
	if (!cr6.eq) goto loc_826B0740;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
loc_826B0740:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r3,r11,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B074C"))) PPC_WEAK_FUNC(sub_826B074C);
PPC_FUNC_IMPL(__imp__sub_826B074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0750"))) PPC_WEAK_FUNC(sub_826B0750);
PPC_FUNC_IMPL(__imp__sub_826B0750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// bne cr6,0x826b0778
	if (!cr6.eq) goto loc_826B0778;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
loc_826B0778:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r3,r11,6,27,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0784"))) PPC_WEAK_FUNC(sub_826B0784);
PPC_FUNC_IMPL(__imp__sub_826B0784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0788"))) PPC_WEAK_FUNC(sub_826B0788);
PPC_FUNC_IMPL(__imp__sub_826B0788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 10);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// rotlwi r9,r11,12
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 12);
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r10,r10,0,20,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lbz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwimi r10,r9,12,18,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x3000) | (ctx.r10.u64 & 0xFFFFFFFFFFFFCFFF);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r10,9(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 9);
	// rlwimi r7,r10,17,12,14
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0xE0000) | (ctx.r7.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwimi r8,r10,0,6,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3FFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFC000000);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// lwz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwimi r10,r9,0,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B07FC"))) PPC_WEAK_FUNC(sub_826B07FC);
PPC_FUNC_IMPL(__imp__sub_826B07FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0800"))) PPC_WEAK_FUNC(sub_826B0800);
PPC_FUNC_IMPL(__imp__sub_826B0800) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// beq cr6,0x826b082c
	if (cr6.eq) goto loc_826B082C;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,20,24,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFF;
	// blr 
	return;
loc_826B082C:
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r3,r11,20,24,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0840"))) PPC_WEAK_FUNC(sub_826B0840);
PPC_FUNC_IMPL(__imp__sub_826B0840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B085C"))) PPC_WEAK_FUNC(sub_826B085C);
PPC_FUNC_IMPL(__imp__sub_826B085C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0860"))) PPC_WEAK_FUNC(sub_826B0860);
PPC_FUNC_IMPL(__imp__sub_826B0860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r10,r10,0,10,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x300000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b089c
	if (!cr6.eq) goto loc_826B089C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// blr 
	return;
loc_826B089C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r10,r10,21
	ctx.r10.s64 = ctx.r10.s64 + 21;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B08D0"))) PPC_WEAK_FUNC(sub_826B08D0);
PPC_FUNC_IMPL(__imp__sub_826B08D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// rlwinm r11,r4,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwimi r5,r10,0,0,5
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFC000000) | (ctx.r5.u64 & 0xFFFFFFFF03FFFFFF);
	// rlwimi r9,r6,24,5,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 24) & 0x7000000) | (ctx.r9.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0904"))) PPC_WEAK_FUNC(sub_826B0904);
PPC_FUNC_IMPL(__imp__sub_826B0904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0908"))) PPC_WEAK_FUNC(sub_826B0908);
PPC_FUNC_IMPL(__imp__sub_826B0908) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm r11,r11,21,17,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x7FFF;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0924"))) PPC_WEAK_FUNC(sub_826B0924);
PPC_FUNC_IMPL(__imp__sub_826B0924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0928"))) PPC_WEAK_FUNC(sub_826B0928);
PPC_FUNC_IMPL(__imp__sub_826B0928) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,32746
	r11.s64 = 2146041856;
	// lis r10,32746
	ctx.r10.s64 = 2146041856;
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// ori r11,r11,6144
	r11.u64 = r11.u64 | 6144;
	// lis r8,32746
	ctx.r8.s64 = 2146041856;
	// ori r10,r10,6148
	ctx.r10.u64 = ctx.r10.u64 | 6148;
	// ori r9,r9,6152
	ctx.r9.u64 = ctx.r9.u64 | 6152;
	// ori r8,r8,6156
	ctx.r8.u64 = ctx.r8.u64 | 6156;
	// lis r7,32746
	ctx.r7.s64 = 2146041856;
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// lis r6,32746
	ctx.r6.s64 = 2146041856;
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// ori r7,r7,6160
	ctx.r7.u64 = ctx.r7.u64 | 6160;
	// lwbrx r9,0,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// lis r5,32746
	ctx.r5.s64 = 2146041856;
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// lis r4,32746
	ctx.r4.s64 = 2146041856;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// ori r6,r6,6164
	ctx.r6.u64 = ctx.r6.u64 | 6164;
	// lis r11,32746
	r11.s64 = 2146041856;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ori r5,r5,6168
	ctx.r5.u64 = ctx.r5.u64 | 6168;
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// lis r10,32746
	ctx.r10.s64 = 2146041856;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ori r4,r4,6172
	ctx.r4.u64 = ctx.r4.u64 | 6172;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// ori r11,r11,6176
	r11.u64 = r11.u64 | 6176;
	// lwbrx r6,0,r6
	ctx.r6.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// lis r8,32746
	ctx.r8.s64 = 2146041856;
	// lwbrx r5,0,r5
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// ori r10,r10,6208
	ctx.r10.u64 = ctx.r10.u64 | 6208;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// ori r9,r9,6212
	ctx.r9.u64 = ctx.r9.u64 | 6212;
	// lwbrx r4,0,r4
	ctx.r4.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// ori r8,r8,6216
	ctx.r8.u64 = ctx.r8.u64 | 6216;
	// lis r7,32746
	ctx.r7.s64 = 2146041856;
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lis r6,32746
	ctx.r6.s64 = 2146041856;
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// ori r7,r7,6220
	ctx.r7.u64 = ctx.r7.u64 | 6220;
	// lwbrx r9,0,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// ori r6,r6,6224
	ctx.r6.u64 = ctx.r6.u64 | 6224;
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// lis r5,32746
	ctx.r5.s64 = 2146041856;
	// stw r4,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r4.u32);
	// lis r4,32746
	ctx.r4.s64 = 2146041856;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lis r11,32746
	r11.s64 = 2146041856;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ori r5,r5,6228
	ctx.r5.u64 = ctx.r5.u64 | 6228;
	// lwbrx r7,0,r7
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// lis r10,32746
	ctx.r10.s64 = 2146041856;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// ori r4,r4,6232
	ctx.r4.u64 = ctx.r4.u64 | 6232;
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// ori r11,r11,6236
	r11.u64 = r11.u64 | 6236;
	// lwbrx r6,0,r6
	ctx.r6.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// lis r8,32746
	ctx.r8.s64 = 2146041856;
	// lwbrx r5,0,r5
	ctx.r5.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// ori r10,r10,6240
	ctx.r10.u64 = ctx.r10.u64 | 6240;
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// ori r9,r9,6244
	ctx.r9.u64 = ctx.r9.u64 | 6244;
	// lwbrx r7,0,r4
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// ori r8,r8,6272
	ctx.r8.u64 = ctx.r8.u64 | 6272;
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// lwbrx r9,0,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// stw r5,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r5.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lis r11,32746
	r11.s64 = 2146041856;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// ori r11,r11,6276
	r11.u64 = r11.u64 | 6276;
	// lis r10,32746
	ctx.r10.s64 = 2146041856;
	// lis r9,32746
	ctx.r9.s64 = 2146041856;
	// lis r8,32746
	ctx.r8.s64 = 2146041856;
	// ori r10,r10,6280
	ctx.r10.u64 = ctx.r10.u64 | 6280;
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// ori r9,r9,6284
	ctx.r9.u64 = ctx.r9.u64 | 6284;
	// ori r8,r8,6288
	ctx.r8.u64 = ctx.r8.u64 | 6288;
	// lis r7,32746
	ctx.r7.s64 = 2146041856;
	// lis r6,32746
	ctx.r6.s64 = 2146041856;
	// lwbrx r10,0,r10
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// lis r5,32746
	ctx.r5.s64 = 2146041856;
	// lwbrx r9,0,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// ori r7,r7,6292
	ctx.r7.u64 = ctx.r7.u64 | 6292;
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// lis r4,32746
	ctx.r4.s64 = 2146041856;
	// lwbrx r8,0,r8
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// ori r6,r6,6296
	ctx.r6.u64 = ctx.r6.u64 | 6296;
	// lis r11,32746
	r11.s64 = 2146041856;
	// ori r5,r5,6300
	ctx.r5.u64 = ctx.r5.u64 | 6300;
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// ori r4,r4,6304
	ctx.r4.u64 = ctx.r4.u64 | 6304;
	// lwbrx r10,0,r7
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// ori r11,r11,6308
	r11.u64 = r11.u64 | 6308;
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lwbrx r9,0,r6
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lwbrx r8,0,r5
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// lwbrx r7,0,r4
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// stw r7,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r7.u32);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0B14"))) PPC_WEAK_FUNC(sub_826B0B14);
PPC_FUNC_IMPL(__imp__sub_826B0B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0B18"))) PPC_WEAK_FUNC(sub_826B0B18);
PPC_FUNC_IMPL(__imp__sub_826B0B18) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x826b0bcc
	if (!cr6.gt) goto loc_826B0BCC;
	// lis r11,8186
	r11.s64 = 536477696;
	// li r25,0
	r25.s64 = 0;
	// lis r28,-32126
	r28.s64 = -2105409536;
	// li r27,1
	r27.s64 = 1;
	// ori r29,r11,34464
	r29.u64 = r11.u64 | 34464;
loc_826B0B50:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// add r30,r25,r11
	r30.u64 = r25.u64 + r11.u64;
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b0bb8
	if (!cr6.eq) goto loc_826B0BB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e541c
	__imp__XMACreateContext(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// blt cr6,0x826b0bd8
	if (cr6.lt) goto loc_826B0BD8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826e51dc
	__imp__MmGetPhysicalAddress(ctx, base);
	// lwz r11,-13240(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -13240);
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sth r11,80(r30)
	PPC_STORE_U16(r30.u32 + 80, r11.u16);
	// clrlwi r11,r10,27
	r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r27,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 << (r11.u8 & 0x3F));
	// stwbrx r11,0,r10
	PPC_MM_STORE_U32(ctx.r10.u32, __builtin_bswap32(r11.u32));
	// eieio 
loc_826B0BB8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,96
	r25.s64 = r25.s64 + 96;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x826b0b50
	if (cr6.lt) goto loc_826B0B50;
loc_826B0BCC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
loc_826B0BD8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_826B0BE4"))) PPC_WEAK_FUNC(sub_826B0BE4);
PPC_FUNC_IMPL(__imp__sub_826B0BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0BE8"))) PPC_WEAK_FUNC(sub_826B0BE8);
PPC_FUNC_IMPL(__imp__sub_826B0BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r11,0,14,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x30000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b0c58
	if (!cr6.eq) goto loc_826B0C58;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x826b0c54
	if (!cr6.gt) goto loc_826B0C54;
	// lis r11,8186
	r11.s64 = 536477696;
	// li r6,1
	ctx.r6.s64 = 1;
	// ori r7,r11,34448
	ctx.r7.u64 = r11.u64 | 34448;
loc_826B0C18:
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// clrlwi r5,r11,27
	ctx.r5.u64 = r11.u32 & 0x1F;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r5,r6,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// stwbrx r5,0,r11
	PPC_MM_STORE_U32(r11.u32, __builtin_bswap32(ctx.r5.u32));
	// eieio 
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x826b0c18
	if (cr6.lt) goto loc_826B0C18;
loc_826B0C54:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_826B0C58:
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0C68"))) PPC_WEAK_FUNC(sub_826B0C68);
PPC_FUNC_IMPL(__imp__sub_826B0C68) {
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
	// mftb r29
	r29.u64 = __rdtsc();
	// bl 0x826b0d30
	sub_826B0D30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b0cb4
	if (!cr6.eq) goto loc_826B0CB4;
loc_826B0C88:
	// mftb r11
	r11.u64 = __rdtsc();
	// subf r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	// bl 0x826e4cbc
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// rldicl r11,r3,61,3
	r11.u64 = __builtin_rotateleft64(ctx.r3.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// cmpld cr6,r30,r11
	cr6.compare<uint64_t>(r30.u64, r11.u64, xer);
	// bgt cr6,0x826b0cc0
	if (cr6.gt) goto loc_826B0CC0;
	// db16cyc 
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0d30
	sub_826B0D30(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b0c88
	if (cr6.eq) goto loc_826B0C88;
loc_826B0CB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826B0CC0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0928
	sub_826B0928(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x823b5498
	sub_823B5498(ctx, base);
	// lis r11,32746
	r11.s64 = 2146041856;
	// li r30,0
	r30.s64 = 0;
	// ori r11,r11,6148
	r11.u64 = r11.u64 | 6148;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stwx r30,0,r10
	PPC_MM_STORE_U32(ctx.r10.u32, r30.u32);
	// eieio 
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwx r10,0,r11
	PPC_MM_STORE_U32(r11.u32, ctx.r10.u32);
	// eieio 
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0d30
	sub_826B0D30(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x826b0d24
	if (!cr6.gt) goto loc_826B0D24;
loc_826B0D08:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b0650
	sub_826B0650(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x826b0d08
	if (cr6.lt) goto loc_826B0D08;
loc_826B0D24:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826B0D30"))) PPC_WEAK_FUNC(sub_826B0D30);
PPC_FUNC_IMPL(__imp__sub_826B0D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b0e5c
	if (!cr6.eq) goto loc_826B0E5C;
	// lis r11,32746
	r11.s64 = 2146041856;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// ori r11,r11,6168
	r11.u64 = r11.u64 | 6168;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// xori r7,r11,512
	ctx.r7.u64 = r11.u64 ^ 512;
	// beq cr6,0x826b0d90
	if (cr6.eq) goto loc_826B0D90;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
loc_826B0D70:
	// lhz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r5,r7
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, xer);
	// beq cr6,0x826b0e64
	if (cr6.eq) goto loc_826B0E64;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	r11.s64 = r11.s64 + 96;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x826b0d70
	if (cr6.lt) goto loc_826B0D70;
loc_826B0D90:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826b0e50
	if (cr6.eq) goto loc_826B0E50;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
loc_826B0DA0:
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// addi r4,r11,32
	ctx.r4.s64 = r11.s64 + 32;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// addi r7,r10,16
	ctx.r7.s64 = ctx.r10.s64 + 16;
	// lvx128 v0,r0,r10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// lvx128 v13,r0,r7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stvx v12,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r7,r10,12,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3;
	// li r12,16
	r12.s64 = 16;
	// stvx v13,r11,r12
	_mm_store_si128((__m128i*)(base + ((r11.u32 + r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// clrlwi r4,r7,31
	ctx.r4.u64 = ctx.r7.u32 & 0x1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x826b0e00
	if (!cr6.eq) goto loc_826B0E00;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r6,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r6.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r6,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r6.u32);
loc_826B0E00:
	// rlwinm r10,r7,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b0e28
	if (!cr6.eq) goto loc_826B0E28;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r6,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r6.u32);
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r6,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r6.u32);
loc_826B0E28:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x826b0e3c
	if (!cr6.eq) goto loc_826B0E3C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_826B0E3C:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r8,r8,96
	ctx.r8.s64 = ctx.r8.s64 + 96;
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x826b0da0
	if (cr6.lt) goto loc_826B0DA0;
loc_826B0E50:
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, r11.u32);
loc_826B0E5C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_826B0E64:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0E6C"))) PPC_WEAK_FUNC(sub_826B0E6C);
PPC_FUNC_IMPL(__imp__sub_826B0E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B0E70"))) PPC_WEAK_FUNC(sub_826B0E70);
PPC_FUNC_IMPL(__imp__sub_826B0E70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826b0ec0
	if (cr6.eq) goto loc_826B0EC0;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
loc_826B0E88:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,68(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 68);
	// rlwinm r10,r10,18,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1F00;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b0eb0
	if (cr6.eq) goto loc_826B0EB0;
loc_826B0EA0:
	// dcbf r11,r9
	// addi r11,r11,128
	r11.s64 = r11.s64 + 128;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b0ea0
	if (cr6.lt) goto loc_826B0EA0;
loc_826B0EB0:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,96
	ctx.r7.s64 = ctx.r7.s64 + 96;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x826b0e88
	if (!cr6.eq) goto loc_826B0E88;
loc_826B0EC0:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b0f28
	if (cr6.eq) goto loc_826B0F28;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826b0f28
	if (cr6.eq) goto loc_826B0F28;
	// li r9,0
	ctx.r9.s64 = 0;
loc_826B0EE0:
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r9,96
	ctx.r9.s64 = ctx.r9.s64 + 96;
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lvx128 v13,r0,r6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx v12,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// blt cr6,0x826b0ee0
	if (cr6.lt) goto loc_826B0EE0;
loc_826B0F28:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x826b0f84
	if (!cr6.gt) goto loc_826B0F84;
	// lis r11,8186
	r11.s64 = 536477696;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// ori r6,r11,34384
	ctx.r6.u64 = r11.u64 | 34384;
loc_826B0F48:
	// lwz r11,8(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lhz r11,80(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 80);
	// rlwinm r7,r11,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r11,r5,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// stwbrx r11,0,r7
	PPC_MM_STORE_U32(ctx.r7.u32, __builtin_bswap32(r11.u32));
	// eieio 
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x826b0f48
	if (cr6.lt) goto loc_826B0F48;
loc_826B0F84:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,0,16,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFCFFFF;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B0F98"))) PPC_WEAK_FUNC(sub_826B0F98);
PPC_FUNC_IMPL(__imp__sub_826B0F98) {
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
	// clrlwi r30,r3,26
	r30.u64 = ctx.r3.u32 & 0x3F;
	// mr r11,r31
	r11.u64 = r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826B0FC4:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bdnz 0x826b0fc4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B0FC4;
	// bl 0x826e4ddc
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x826b1084
	if (!cr6.eq) goto loc_826B1084;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b0fec
	if (!cr6.eq) goto loc_826B0FEC;
	// li r30,16
	r30.s64 = 16;
loc_826B0FEC:
	// clrlwi r7,r30,24
	ctx.r7.u64 = r30.u32 & 0xFF;
	// li r11,0
	r11.s64 = 0;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r8,2
	ctx.r8.s64 = 2;
loc_826B0FFC:
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b1028
	if (cr6.eq) goto loc_826B1028;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,1(r31)
	PPC_STORE_U8(r31.u32 + 1, ctx.r10.u8);
loc_826B1028:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// blt cr6,0x826b0ffc
	if (cr6.lt) goto loc_826B0FFC;
	// rlwinm r11,r7,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b1050
	if (cr6.eq) goto loc_826B1050;
	// li r11,1
	r11.s64 = 1;
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
	// b 0x826b1094
	goto loc_826B1094;
loc_826B1050:
	// li r11,5
	r11.s64 = 5;
	// addi r10,r31,2
	ctx.r10.s64 = r31.s64 + 2;
loc_826B1058:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826b1074
	if (!cr6.eq) goto loc_826B1074;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x826b1058
	if (!cr6.lt) goto loc_826B1058;
	// b 0x826b1094
	goto loc_826B1094;
loc_826B1074:
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// b 0x826b1094
	goto loc_826B1094;
loc_826B1084:
	// li r11,1
	r11.s64 = 1;
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,1(r31)
	PPC_STORE_U8(r31.u32 + 1, r11.u8);
	// stb r10,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r10.u8);
loc_826B1094:
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

__attribute__((alias("__imp__sub_826B10AC"))) PPC_WEAK_FUNC(sub_826B10AC);
PPC_FUNC_IMPL(__imp__sub_826B10AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B10B0"))) PPC_WEAK_FUNC(sub_826B10B0);
PPC_FUNC_IMPL(__imp__sub_826B10B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,268(r13)
	r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// stbx r10,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, ctx.r10.u8);
	// lwz r11,328(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x826b10dc
	if (!cr6.eq) goto loc_826B10DC;
	// li r11,0
	r11.s64 = 0;
loc_826B10DC:
	// rldicr r11,r11,56,7
	r11.u64 = __builtin_rotateleft64(r11.u64, 56) & 0xFF00000000000000;
	// lwz r9,324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// sradi r10,r11,8
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFF) != 0);
	ctx.r10.s64 = r11.s64 >> 8;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x826b10f8
	if (!cr6.eq) goto loc_826B10F8;
	// li r11,0
	r11.s64 = 0;
loc_826B10F8:
	// rldicr r11,r11,56,7
	r11.u64 = __builtin_rotateleft64(r11.u64, 56) & 0xFF00000000000000;
	// lwz r9,320(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sradi r10,r11,8
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFF) != 0);
	ctx.r10.s64 = r11.s64 >> 8;
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x826b1118
	if (!cr6.eq) goto loc_826B1118;
	// li r11,0
	r11.s64 = 0;
loc_826B1118:
	// rldicr r11,r11,56,7
	r11.u64 = __builtin_rotateleft64(r11.u64, 56) & 0xFF00000000000000;
	// lwz r9,316(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 316);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sradi r10,r11,8
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFF) != 0);
	ctx.r10.s64 = r11.s64 >> 8;
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x826b1138
	if (!cr6.eq) goto loc_826B1138;
	// li r11,0
	r11.s64 = 0;
loc_826B1138:
	// rldicr r11,r11,56,7
	r11.u64 = __builtin_rotateleft64(r11.u64, 56) & 0xFF00000000000000;
	// lwz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sradi r10,r11,8
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFF) != 0);
	ctx.r10.s64 = r11.s64 >> 8;
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x826b1158
	if (!cr6.eq) goto loc_826B1158;
	// li r11,0
	r11.s64 = 0;
loc_826B1158:
	// rldicr r11,r11,56,7
	r11.u64 = __builtin_rotateleft64(r11.u64, 56) & 0xFF00000000000000;
	// lwz r9,308(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 308);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// sradi r9,r11,8
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFF) != 0);
	ctx.r9.s64 = r11.s64 >> 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// bne cr6,0x826b1178
	if (!cr6.eq) goto loc_826B1178;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826B1178:
	// ld r11,0(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// rldicr r10,r10,56,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 56) & 0xFF00000000000000;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_826B118C:
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// beq cr6,0x826b11a8
	if (cr6.eq) goto loc_826B11A8;
	// db16cyc 
	// ld r11,0(r4)
	r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bne cr6,0x826b118c
	if (!cr6.eq) goto loc_826B118C;
	// blr 
	return;
loc_826B11A8:
	// li r11,0
	r11.s64 = 0;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B11B4"))) PPC_WEAK_FUNC(sub_826B11B4);
PPC_FUNC_IMPL(__imp__sub_826B11B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B11B8"))) PPC_WEAK_FUNC(sub_826B11B8);
PPC_FUNC_IMPL(__imp__sub_826B11B8) {
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
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r30,r11,10656
	r30.s64 = r11.s64 + 10656;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r31,r11,-13228
	r31.s64 = r11.s64 + -13228;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b1204
	if (cr6.eq) goto loc_826B1204;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e527c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826B1204:
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

__attribute__((alias("__imp__sub_826B1224"))) PPC_WEAK_FUNC(sub_826B1224);
PPC_FUNC_IMPL(__imp__sub_826B1224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B1228"))) PPC_WEAK_FUNC(sub_826B1228);
PPC_FUNC_IMPL(__imp__sub_826B1228) {
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
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b1260
	if (cr6.eq) goto loc_826B1260;
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(r30.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B1260:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b1294
	if (cr6.eq) goto loc_826B1294;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B1294:
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

__attribute__((alias("__imp__sub_826B12AC"))) PPC_WEAK_FUNC(sub_826B12AC);
PPC_FUNC_IMPL(__imp__sub_826B12AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B12B0"))) PPC_WEAK_FUNC(sub_826B12B0);
PPC_FUNC_IMPL(__imp__sub_826B12B0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b12f0
	if (cr6.eq) goto loc_826B12F0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b1304
	if (cr6.eq) goto loc_826B1304;
loc_826B12F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B1304:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r10,r29,6,18,25
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0x3FC0;
	// li r27,8
	r27.s64 = 8;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// add r11,r10,r26
	r11.u64 = ctx.r10.u64 + r26.u64;
	// addi r28,r11,168
	r28.s64 = r11.s64 + 168;
loc_826B131C:
	// stw r28,296(r26)
	PPC_STORE_U32(r26.u32 + 296, r28.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b13c4
	if (cr6.eq) goto loc_826B13C4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b1374
	if (cr6.eq) goto loc_826B1374;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826b1374
	if (!cr6.eq) goto loc_826B1374;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b1374
	if (!cr6.eq) goto loc_826B1374;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B1374:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b13a8
	if (cr6.eq) goto loc_826B13A8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b13bc
	if (cr6.eq) goto loc_826B13BC;
loc_826B13A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B13BC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_826B13C4:
	// addi r27,r27,-1
	r27.s64 = r27.s64 + -1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x826b131c
	if (!cr6.eq) goto loc_826B131C;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,296(r26)
	PPC_STORE_U32(r26.u32 + 296, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b1424
	if (cr6.eq) goto loc_826B1424;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b1424
	if (!cr6.eq) goto loc_826B1424;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b1424
	if (!cr6.eq) goto loc_826B1424;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B1424:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826B142C"))) PPC_WEAK_FUNC(sub_826B142C);
PPC_FUNC_IMPL(__imp__sub_826B142C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B1430"))) PPC_WEAK_FUNC(sub_826B1430);
PPC_FUNC_IMPL(__imp__sub_826B1430) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,300(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b14a8
	if (cr6.eq) goto loc_826B14A8;
	// lbz r10,268(r13)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// addi r10,r10,83
	ctx.r10.s64 = ctx.r10.s64 + 83;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b14a8
	if (cr6.eq) goto loc_826B14A8;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r27,r3,144
	r27.s64 = ctx.r3.s64 + 144;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r28,r11,10624
	r28.s64 = r11.s64 + 10624;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B1484:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_826B148C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r26,r7
	cr6.compare<uint32_t>(r26.u32, ctx.r7.u32, xer);
	// beq cr6,0x826b14b0
	if (cr6.eq) goto loc_826B14B0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// blt cr6,0x826b148c
	if (cr6.lt) goto loc_826B148C;
loc_826B14A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_826B14B0:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b14f0
	if (cr6.eq) goto loc_826B14F0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b14f0
	if (!cr6.eq) goto loc_826B14F0;
	// addi r11,r8,-1
	r11.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b14f0
	if (!cr6.eq) goto loc_826B14F0;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B14F0:
	// lwz r30,24(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b1528
	if (cr6.eq) goto loc_826B1528;
	// mr r29,r30
	r29.u64 = r30.u64;
loc_826B1500:
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x826b1500
	if (!cr6.eq) goto loc_826B1500;
loc_826B1514:
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826b1514
	if (!cr6.eq) goto loc_826B1514;
loc_826B1528:
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// beq cr6,0x826b154c
	if (cr6.eq) goto loc_826B154C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// beq cr6,0x826b1564
	if (cr6.eq) goto loc_826B1564;
loc_826B154C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B1564:
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// b 0x826b1484
	goto loc_826B1484;
}

__attribute__((alias("__imp__sub_826B1570"))) PPC_WEAK_FUNC(sub_826B1570);
PPC_FUNC_IMPL(__imp__sub_826B1570) {
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
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13228
	r11.s64 = r11.s64 + -13228;
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x826b15a4
	if (!cr6.eq) goto loc_826B15A4;
	// bl 0x826b11b8
	sub_826B11B8(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13212
	ctx.r3.s64 = r11.s64 + -13212;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826e524c
	__imp__KeSetEvent(ctx, base);
loc_826B15A4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B15B4"))) PPC_WEAK_FUNC(sub_826B15B4);
PPC_FUNC_IMPL(__imp__sub_826B15B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B15B8"))) PPC_WEAK_FUNC(sub_826B15B8);
PPC_FUNC_IMPL(__imp__sub_826B15B8) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r11,-25960
	r11.s64 = r11.s64 + -25960;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x826b1604
	if (cr6.eq) goto loc_826B1604;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_826B1604:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// clrlwi r10,r30,31
	ctx.r10.u64 = r30.u32 & 0x1;
	// addi r11,r11,-26680
	r11.s64 = r11.s64 + -26680;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x826b1630
	if (cr6.eq) goto loc_826B1630;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
loc_826B1630:
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

__attribute__((alias("__imp__sub_826B164C"))) PPC_WEAK_FUNC(sub_826B164C);
PPC_FUNC_IMPL(__imp__sub_826B164C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B1650"))) PPC_WEAK_FUNC(sub_826B1650);
PPC_FUNC_IMPL(__imp__sub_826B1650) {
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
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b168c
	if (cr6.eq) goto loc_826B168C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b16a0
	if (cr6.eq) goto loc_826B16A0;
loc_826B168C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B16A0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// stw r9,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r9.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b1700
	if (cr6.eq) goto loc_826B1700;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b1700
	if (!cr6.eq) goto loc_826B1700;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b1700
	if (!cr6.eq) goto loc_826B1700;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B1700:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B1708"))) PPC_WEAK_FUNC(sub_826B1708);
PPC_FUNC_IMPL(__imp__sub_826B1708) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b1730
	if (!cr6.eq) goto loc_826B1730;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-26148
	r11.s64 = r11.s64 + -26148;
loc_826B1730:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826b30c0
	sub_826B30C0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b17e0
	if (cr6.lt) goto loc_826B17E0;
	// li r11,0
	r11.s64 = 0;
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplwi cr6,r9,6
	cr6.compare<uint32_t>(ctx.r9.u32, 6, xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r11.u8);
	// stb r11,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r11.u8);
	// bgt cr6,0x826b1774
	if (cr6.gt) goto loc_826B1774;
	// li r9,6
	ctx.r9.s64 = 6;
loc_826B1774:
	// lis r11,0
	r11.s64 = 0;
	// stb r9,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r9.u8);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// bl 0x826af9c8
	sub_826AF9C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826b17dc
	if (cr6.lt) goto loc_826B17DC;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lbz r3,2(r31)
	ctx.r3.u64 = PPC_LOAD_U8(r31.u32 + 2);
	// bl 0x826b0f98
	sub_826B0F98(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r11,97(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 97);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 1);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// beq cr6,0x826b17d8
	if (cr6.eq) goto loc_826B17D8;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_826B17D8:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_826B17DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826B17E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826B17E8"))) PPC_WEAK_FUNC(sub_826B17E8);
PPC_FUNC_IMPL(__imp__sub_826B17E8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lbz r26,268(r13)
	r26.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
loc_826B1808:
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// beq cr6,0x826b182c
	if (cr6.eq) goto loc_826B182C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x826b1848
	if (cr6.eq) goto loc_826B1848;
loc_826B182C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826b184c
	goto loc_826B184C;
loc_826B1848:
	// lbz r29,12(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826B184C:
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b1944
	if (cr6.eq) goto loc_826B1944;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r30,r11,r10
	r30.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b1944
	if (cr6.eq) goto loc_826B1944;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826b18a0
	if (cr6.eq) goto loc_826B18A0;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_826B18A0:
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// addi r11,r26,36
	r11.s64 = r26.s64 + 36;
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// stwx r30,r8,r27
	PPC_STORE_U32(ctx.r8.u32 + r27.u32, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b1918
	if (cr6.eq) goto loc_826B1918;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b1918
	if (!cr6.eq) goto loc_826B1918;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b1918
	if (!cr6.eq) goto loc_826B1918;
	// lbz r29,12(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B1918:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b1808
	if (cr6.lt) goto loc_826B1808;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826b47f8
	sub_826B47F8(ctx, base);
	// b 0x826b1808
	goto loc_826B1808;
loc_826B1944:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b1984
	if (cr6.eq) goto loc_826B1984;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b1984
	if (!cr6.eq) goto loc_826B1984;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b1984
	if (!cr6.eq) goto loc_826B1984;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B1984:
	// addi r11,r26,36
	r11.s64 = r26.s64 + 36;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826B199C"))) PPC_WEAK_FUNC(sub_826B199C);
PPC_FUNC_IMPL(__imp__sub_826B199C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B19A0"))) PPC_WEAK_FUNC(sub_826B19A0);
PPC_FUNC_IMPL(__imp__sub_826B19A0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b19e0
	if (cr6.eq) goto loc_826B19E0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b19f4
	if (cr6.eq) goto loc_826B19F4;
loc_826B19E0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B19F4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r30,r28,68
	r30.s64 = r28.s64 + 68;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_826B1A00:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826b1a30
	if (cr6.eq) goto loc_826B1A30;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b1a30
	if (cr6.eq) goto loc_826B1A30;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b4090
	sub_826B4090(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bge cr6,0x826b1a00
	if (!cr6.lt) goto loc_826B1A00;
loc_826B1A30:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b1a78
	if (cr6.eq) goto loc_826B1A78;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826b1a78
	if (!cr6.eq) goto loc_826B1A78;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b1a78
	if (!cr6.eq) goto loc_826B1A78;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B1A78:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B1A84"))) PPC_WEAK_FUNC(sub_826B1A84);
PPC_FUNC_IMPL(__imp__sub_826B1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B1A88"))) PPC_WEAK_FUNC(sub_826B1A88);
PPC_FUNC_IMPL(__imp__sub_826B1A88) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b1ac4
	if (cr6.eq) goto loc_826B1AC4;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b1ad8
	if (cr6.eq) goto loc_826B1AD8;
loc_826B1AC4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B1AD8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r28,80
	ctx.r3.s64 = r28.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x826b1650
	sub_826B1650(ctx, base);
	// lbz r11,128(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 128);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b1b1c
	if (cr6.eq) goto loc_826B1B1C;
	// li r29,0
	r29.s64 = 0;
loc_826B1AFC:
	// lwz r11,124(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 124);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x826b1650
	sub_826B1650(ctx, base);
	// lbz r11,128(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 128);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,44
	r29.s64 = r29.s64 + 44;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x826b1afc
	if (cr6.lt) goto loc_826B1AFC;
loc_826B1B1C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b1b64
	if (cr6.eq) goto loc_826B1B64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826b1b64
	if (!cr6.eq) goto loc_826B1B64;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b1b64
	if (!cr6.eq) goto loc_826B1B64;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B1B64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B1B6C"))) PPC_WEAK_FUNC(sub_826B1B6C);
PPC_FUNC_IMPL(__imp__sub_826B1B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B1B70"))) PPC_WEAK_FUNC(sub_826B1B70);
PPC_FUNC_IMPL(__imp__sub_826B1B70) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r26,r4,24
	r26.u64 = ctx.r4.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,1
	r29.s64 = 1;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826b1c1c
	if (cr6.eq) goto loc_826B1C1C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b12b0
	sub_826B12B0(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r27,r31,140
	r27.s64 = r31.s64 + 140;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x826e544c
	__imp__XAudioGetVoiceCategoryVolumeChangeMask(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r28,r31,132
	r28.s64 = r31.s64 + 132;
loc_826B1BB8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b1bf0
	if (cr6.lt) goto loc_826B1BF0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// slw r10,r29,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r29.u32 << (r30.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b1be0
	if (cr6.eq) goto loc_826B1BE0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e543c
	__imp__XAudioGetVoiceCategoryVolume(ctx, base);
loc_826B1BE0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// blt cr6,0x826b1bb8
	if (cr6.lt) goto loc_826B1BB8;
loc_826B1BF0:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,-13144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// lwz r11,304(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 304);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x826b1c1c
	if (!cr6.gt) goto loc_826B1C1C;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r10,-13196
	ctx.r3.s64 = ctx.r10.s64 + -13196;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826e542c
	__imp__KeReleaseSemaphore(ctx, base);
loc_826B1C1C:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b17e8
	sub_826B17E8(ctx, base);
	// addi r4,r31,356
	ctx.r4.s64 = r31.s64 + 356;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b10b0
	sub_826B10B0(ctx, base);
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b1c84
	if (cr6.eq) goto loc_826B1C84;
	// li r28,0
	r28.s64 = 0;
loc_826B1C48:
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// bl 0x826b17e8
	sub_826B17E8(ctx, base);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r11,356
	ctx.r4.s64 = r11.s64 + 356;
	// bl 0x826b10b0
	sub_826B10B0(ctx, base);
	// lbz r11,128(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 128);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// xori r29,r29,1
	r29.u64 = r29.u64 ^ 1;
	// addi r28,r28,44
	r28.s64 = r28.s64 + 44;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x826b1c48
	if (cr6.lt) goto loc_826B1C48;
loc_826B1C84:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826b1ca0
	if (cr6.eq) goto loc_826B1CA0;
	// li r11,0
	r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// bl 0x826b12b0
	sub_826B12B0(ctx, base);
loc_826B1CA0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826B1CA8"))) PPC_WEAK_FUNC(sub_826B1CA8);
PPC_FUNC_IMPL(__imp__sub_826B1CA8) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826aefd0
	sub_826AEFD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b1d18
	if (cr6.eq) goto loc_826B1D18;
loc_826B1CD0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826b1d00
	if (cr6.eq) goto loc_826B1D00;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_826B1D00:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aefd0
	sub_826AEFD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b1cd0
	if (!cr6.eq) goto loc_826B1CD0;
loc_826B1D18:
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

__attribute__((alias("__imp__sub_826B1D2C"))) PPC_WEAK_FUNC(sub_826B1D2C);
PPC_FUNC_IMPL(__imp__sub_826B1D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B1D30"))) PPC_WEAK_FUNC(sub_826B1D30);
PPC_FUNC_IMPL(__imp__sub_826B1D30) {
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
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x826aefd0
	sub_826AEFD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b1da0
	if (cr6.eq) goto loc_826B1DA0;
loc_826B1D58:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x826b1d88
	if (cr6.eq) goto loc_826B1D88;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_826B1D88:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826aefd0
	sub_826AEFD0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b1d58
	if (!cr6.eq) goto loc_826B1D58;
loc_826B1DA0:
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

__attribute__((alias("__imp__sub_826B1DB4"))) PPC_WEAK_FUNC(sub_826B1DB4);
PPC_FUNC_IMPL(__imp__sub_826B1DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

