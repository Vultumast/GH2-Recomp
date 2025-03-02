#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8259F9E0"))) PPC_WEAK_FUNC(sub_8259F9E0);
PPC_FUNC_IMPL(__imp__sub_8259F9E0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,136
	ctx.r3.s64 = r11.s64 + 136;
	// addi r11,r11,212
	r11.s64 = r11.s64 + 212;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x8259fa28
	if (cr6.eq) goto loc_8259FA28;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_8259FA28:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259FA40"))) PPC_WEAK_FUNC(sub_8259FA40);
PPC_FUNC_IMPL(__imp__sub_8259FA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,500(r11)
	PPC_STORE_U32(r11.u32 + 500, ctx.r4.u32);
	// stw r5,504(r11)
	PPC_STORE_U32(r11.u32 + 504, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259FA54"))) PPC_WEAK_FUNC(sub_8259FA54);
PPC_FUNC_IMPL(__imp__sub_8259FA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FA58"))) PPC_WEAK_FUNC(sub_8259FA58);
PPC_FUNC_IMPL(__imp__sub_8259FA58) {
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
	// addi r3,r3,136
	ctx.r3.s64 = ctx.r3.s64 + 136;
	// bl 0x822eee28
	sub_822EEE28(ctx, base);
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

__attribute__((alias("__imp__sub_8259FA80"))) PPC_WEAK_FUNC(sub_8259FA80);
PPC_FUNC_IMPL(__imp__sub_8259FA80) {
	PPC_FUNC_PROLOGUE();
	// stw r4,512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 512, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8259FA88"))) PPC_WEAK_FUNC(sub_8259FA88);
PPC_FUNC_IMPL(__imp__sub_8259FA88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// addi r27,r31,8
	r27.s64 = r31.s64 + 8;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// bl 0x825aa5a8
	sub_825AA5A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8259fb7c
	if (cr6.lt) goto loc_8259FB7C;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8259fb7c
	if (cr6.lt) goto loc_8259FB7C;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// bl 0x825aa598
	sub_825AA598(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8259fb7c
	if (cr6.lt) goto loc_8259FB7C;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r6,608(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x8259fb7c
	if (cr6.lt) goto loc_8259FB7C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r24,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r24.u32);
	// stw r23,544(r31)
	PPC_STORE_U32(r31.u32 + 544, r23.u32);
	// stw r26,548(r31)
	PPC_STORE_U32(r31.u32 + 548, r26.u32);
	// stw r9,588(r31)
	PPC_STORE_U32(r31.u32 + 588, ctx.r9.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8259FB7C:
	// lis r11,-32688
	r11.s64 = -2142240768;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x8259fbf0
	if (cr6.eq) goto loc_8259FBF0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x8259fbf0
	if (!cr6.lt) goto loc_8259FBF0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fbc0
	if (cr6.eq) goto loc_8259FBC0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259fbc0
	if (cr6.eq) goto loc_8259FBC0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
loc_8259FBC0:
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8259fbf0
	if (cr6.eq) goto loc_8259FBF0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259fbf0
	if (cr6.eq) goto loc_8259FBF0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
loc_8259FBF0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8259FBFC"))) PPC_WEAK_FUNC(sub_8259FBFC);
PPC_FUNC_IMPL(__imp__sub_8259FBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FC00"))) PPC_WEAK_FUNC(sub_8259FC00);
PPC_FUNC_IMPL(__imp__sub_8259FC00) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259fc58
	if (cr6.eq) goto loc_8259FC58;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259fc48
	if (cr6.eq) goto loc_8259FC48;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FC48:
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 608);
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FC58:
	// lwz r3,572(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 572);
	// bl 0x825aa948
	sub_825AA948(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,568(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 568);
	// bl 0x825aa948
	sub_825AA948(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r11,4
	ctx.r5.s64 = r11.s64 + 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fc94
	if (cr6.eq) goto loc_8259FC94;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FC94:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fcd8
	if (cr6.eq) goto loc_8259FCD8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fcc4
	if (cr6.eq) goto loc_8259FCC4;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FCC4:
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FCD8:
	// addi r5,r11,576
	ctx.r5.s64 = r11.s64 + 576;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fcf8
	if (cr6.eq) goto loc_8259FCF8;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FCF8:
	// lwz r10,580(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 580);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fd3c
	if (cr6.eq) goto loc_8259FD3C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,4
	ctx.r5.s64 = ctx.r10.s64 + 4;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fd28
	if (cr6.eq) goto loc_8259FD28;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FD28:
	// addi r5,r11,580
	ctx.r5.s64 = r11.s64 + 580;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FD3C:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 584);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fdf0
	if (cr6.eq) goto loc_8259FDF0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r5,r10,16
	ctx.r5.s64 = ctx.r10.s64 + 16;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fd6c
	if (cr6.eq) goto loc_8259FD6C;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FD6C:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 584);
	// addi r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 + 12;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fd90
	if (cr6.eq) goto loc_8259FD90;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FD90:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 584);
	// addi r5,r10,8
	ctx.r5.s64 = ctx.r10.s64 + 8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fdb4
	if (cr6.eq) goto loc_8259FDB4;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FDB4:
	// lwz r10,584(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 584);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x8259fddc
	if (cr6.eq) goto loc_8259FDDC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FDDC:
	// addi r5,r11,584
	ctx.r5.s64 = r11.s64 + 584;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FDF0:
	// addi r5,r11,612
	ctx.r5.s64 = r11.s64 + 612;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fe14
	if (cr6.eq) goto loc_8259FE14;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8259FE14:
	// addi r5,r11,616
	ctx.r5.s64 = r11.s64 + 616;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8259fe34
	if (cr6.eq) goto loc_8259FE34;
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_8259FE34:
	// lwz r4,636(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 636);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8259fe50
	if (cr6.eq) goto loc_8259FE50;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825a9fb0
	sub_825A9FB0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8259FE50:
	// lwz r4,640(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 640);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8259fe6c
	if (cr6.eq) goto loc_8259FE6C;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825a9fb0
	sub_825A9FB0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8259FE6C:
	// lwz r4,644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 644);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8259fe88
	if (cr6.eq) goto loc_8259FE88;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825a9fb0
	sub_825A9FB0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8259FE88:
	// lwz r4,648(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 648);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x8259fea4
	if (cr6.eq) goto loc_8259FEA4;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// bl 0x825a9fb0
	sub_825A9FB0(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_8259FEA4:
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// lwz r3,608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
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

__attribute__((alias("__imp__sub_8259FECC"))) PPC_WEAK_FUNC(sub_8259FECC);
PPC_FUNC_IMPL(__imp__sub_8259FECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FED0"))) PPC_WEAK_FUNC(sub_8259FED0);
PPC_FUNC_IMPL(__imp__sub_8259FED0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x8259ff4c
	if (cr6.lt) goto loc_8259FF4C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259ff40
	if (cr6.eq) goto loc_8259FF40;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8259ff40
	if (cr6.eq) goto loc_8259FF40;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// bl 0x825aa7a8
	sub_825AA7A8(ctx, base);
loc_8259FF40:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x825aa7a8
	sub_825AA7A8(ctx, base);
loc_8259FF4C:
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

__attribute__((alias("__imp__sub_8259FF64"))) PPC_WEAK_FUNC(sub_8259FF64);
PPC_FUNC_IMPL(__imp__sub_8259FF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8259FF68"))) PPC_WEAK_FUNC(sub_8259FF68);
PPC_FUNC_IMPL(__imp__sub_8259FF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r5,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r5.u32);
	// mr r15,r4
	r15.u64 = ctx.r4.u64;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r26,-1
	r26.s64 = -1;
	// li r23,1
	r23.s64 = 1;
	// stb r31,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r31.u8);
	// mr r24,r31
	r24.u64 = r31.u64;
	// stw r31,0(r15)
	PPC_STORE_U32(r15.u32 + 0, r31.u32);
	// clrldi r26,r26,5
	r26.u64 = r26.u64 & 0x7FFFFFFFFFFFFFF;
	// lwz r11,532(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 532);
	// mr r22,r31
	r22.u64 = r31.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r14,r23
	r14.u64 = r23.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// std r31,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r31.u64);
	// std r31,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r31.u64);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// beq cr6,0x8259ffd8
	if (cr6.eq) goto loc_8259FFD8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x8259ffe0
	if (!cr6.eq) goto loc_8259FFE0;
loc_8259FFD8:
	// li r11,5
	r11.s64 = 5;
	// stw r11,532(r28)
	PPC_STORE_U32(r28.u32 + 532, r11.u32);
loc_8259FFE0:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r31,536(r28)
	PPC_STORE_U32(r28.u32 + 536, r31.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r17,20(r11)
	r17.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lis r11,-32688
	r11.s64 = -2142240768;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// bne cr6,0x825a005c
	if (!cr6.eq) goto loc_825A005C;
	// lwz r11,632(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 632);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a0050
	if (cr6.eq) goto loc_825A0050;
	// mr r21,r31
	r21.u64 = r31.u64;
loc_825A001C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// bl 0x825aa850
	sub_825AA850(ctx, base);
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r18,r11,22
	r18.u64 = r11.u64 | 22;
	// cmplw cr6,r3,r18
	cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, xer);
	// bne cr6,0x825a0070
	if (!cr6.eq) goto loc_825A0070;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,167
	ctx.r3.u64 = ctx.r3.u64 | 167;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
loc_825A0050:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
loc_825A005C:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bge cr6,0x825a001c
	if (!cr6.lt) goto loc_825A001C;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
loc_825A0070:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0484
	if (cr6.lt) goto loc_825A0484;
	// lis r11,-32688
	r11.s64 = -2142240768;
	// lwz r25,96(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r31,588(r28)
	PPC_STORE_U32(r28.u32 + 588, r31.u32);
	// li r16,6
	r16.s64 = 6;
	// ori r19,r11,11
	r19.u64 = r11.u64 | 11;
	// lis r11,80
	r11.s64 = 5242880;
	// ori r20,r11,11
	r20.u64 = r11.u64 | 11;
loc_825A0094:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0484
	if (cr6.lt) goto loc_825A0484;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a035c
	if (cr6.eq) goto loc_825A035C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r3,572(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 572);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0484
	if (cr6.lt) goto loc_825A0484;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825aace8
	sub_825AACE8(ctx, base);
	// cmplw cr6,r3,r19
	cr6.compare<uint32_t>(ctx.r3.u32, r19.u32, xer);
	// bne cr6,0x825a0128
	if (!cr6.eq) goto loc_825A0128;
	// cmpw cr6,r21,r20
	cr6.compare<int32_t>(r21.s32, r20.s32, xer);
	// bne cr6,0x825a011c
	if (!cr6.eq) goto loc_825A011C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a011c
	if (!cr6.eq) goto loc_825A011C;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825ab568
	sub_825AB568(ctx, base);
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a03a4
	if (!cr6.eq) goto loc_825A03A4;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r23.u32);
loc_825A011C:
	// mr r14,r31
	r14.u64 = r31.u64;
	// stw r31,588(r28)
	PPC_STORE_U32(r28.u32 + 588, r31.u32);
	// b 0x825a035c
	goto loc_825A035C;
loc_825A0128:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0484
	if (cr6.lt) goto loc_825A0484;
	// lwz r11,532(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 532);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bne cr6,0x825a015c
	if (!cr6.eq) goto loc_825A015C;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpd cr6,r9,r10
	cr6.compare<int64_t>(ctx.r9.s64, ctx.r10.s64, xer);
	// ble cr6,0x825a015c
	if (!cr6.gt) goto loc_825A015C;
	// stw r16,532(r28)
	PPC_STORE_U32(r28.u32 + 532, r16.u32);
loc_825A015C:
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r30.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r23,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r23.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x825a018c
	if (cr6.eq) goto loc_825A018C;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825a01a0
	if (!cr6.eq) goto loc_825A01A0;
loc_825A018C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 568);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825A01A0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x825a0288
	if (!cr6.eq) goto loc_825A0288;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825a01cc
	if (!cr6.eq) goto loc_825A01CC;
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r30.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r23,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r23.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825A01CC:
	// stw r23,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r23.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x825a023c
	if (cr6.lt) goto loc_825A023C;
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r31.u8);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r31.u8);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x8259fed0
	sub_8259FED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0484
	if (cr6.lt) goto loc_825A0484;
loc_825A023C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r31.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825A0250:
	// lwz r10,556(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 556);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825a0338
	if (!cr6.eq) goto loc_825A0338;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// clrldi r9,r17,32
	ctx.r9.u64 = r17.u64 & 0xFFFFFFFF;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// cmpd cr6,r10,r26
	cr6.compare<int64_t>(ctx.r10.s64, r26.s64, xer);
	// bgt cr6,0x825a035c
	if (cr6.gt) goto loc_825A035C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825a035c
	if (cr6.eq) goto loc_825A035C;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// b 0x825a0350
	goto loc_825A0350;
loc_825A0288:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825a0250
	if (!cr6.eq) goto loc_825A0250;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a0250
	if (cr6.eq) goto loc_825A0250;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x825a0250
	if (cr6.lt) goto loc_825A0250;
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a02f0
	if (cr6.eq) goto loc_825A02F0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x825a02f0
	if (!cr6.eq) goto loc_825A02F0;
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r31,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r31.u8);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r31.u32);
loc_825A02F0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r31,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r31.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// bl 0x8259fed0
	sub_8259FED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0484
	if (cr6.lt) goto loc_825A0484;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// b 0x825a035c
	goto loc_825A035C;
loc_825A0338:
	// cmpd cr6,r29,r26
	cr6.compare<int64_t>(r29.s64, r26.s64, xer);
	// bgt cr6,0x825a035c
	if (cr6.gt) goto loc_825A035C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a035c
	if (cr6.eq) goto loc_825A035C;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_825A0350:
	// lwz r25,68(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mr r22,r29
	r22.u64 = r29.u64;
	// mr r24,r27
	r24.u64 = r27.u64;
loc_825A035C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x825aa8c0
	sub_825AA8C0(ctx, base);
	// cmplw cr6,r3,r18
	cr6.compare<uint32_t>(ctx.r3.u32, r18.u32, xer);
	// bne cr6,0x825a0094
	if (!cr6.eq) goto loc_825A0094;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 568);
	// bl 0x825aa930
	sub_825AA930(ctx, base);
	// cmpw cr6,r21,r20
	cr6.compare<int32_t>(r21.s32, r20.s32, xer);
	// bne cr6,0x825a03c8
	if (!cr6.eq) goto loc_825A03C8;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x825a03e4
	if (!cr6.eq) goto loc_825A03E4;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,4
	ctx.r3.u64 = ctx.r3.u64 | 4;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
loc_825A03A4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r27,536(r28)
	PPC_STORE_U32(r28.u32 + 536, r27.u32);
	// bl 0x825ab3a8
	sub_825AB3A8(ctx, base);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 568);
	// bl 0x825aa930
	sub_825AA930(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
loc_825A03C8:
	// lis r11,-32688
	r11.s64 = -2142240768;
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// beq cr6,0x825a0454
	if (cr6.eq) goto loc_825A0454;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// bne cr6,0x825a0454
	if (!cr6.eq) goto loc_825A0454;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x825a0470
	if (cr6.eq) goto loc_825A0470;
loc_825A03E4:
	// lwz r11,324(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lis r5,12
	ctx.r5.s64 = 786432;
	// lwz r3,608(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 608);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r15,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r15.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bl 0x825aa0d8
	sub_825AA0D8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0484
	if (cr6.lt) goto loc_825A0484;
	// lwz r30,332(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825ab3a8
	sub_825AB3A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0484
	if (cr6.lt) goto loc_825A0484;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// lwz r3,568(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 568);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r22,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, r22.u32);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a046c
	if (cr6.eq) goto loc_825A046C;
	// stw r24,536(r28)
	PPC_STORE_U32(r28.u32 + 536, r24.u32);
	// b 0x825a0470
	goto loc_825A0470;
loc_825A0454:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x825a03e4
	if (!cr6.eq) goto loc_825A03E4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
loc_825A046C:
	// stw r31,536(r28)
	PPC_STORE_U32(r28.u32 + 536, r31.u32);
loc_825A0470:
	// lwz r11,532(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 532);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x825a0484
	if (!cr6.eq) goto loc_825A0484;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,3
	ctx.r3.u64 = ctx.r3.u64 | 3;
loc_825A0484:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_825A048C"))) PPC_WEAK_FUNC(sub_825A048C);
PPC_FUNC_IMPL(__imp__sub_825A048C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0490"))) PPC_WEAK_FUNC(sub_825A0490);
PPC_FUNC_IMPL(__imp__sub_825A0490) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a04c4
	if (!cr6.eq) goto loc_825A04C4;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// b 0x825a04e4
	goto loc_825A04E4;
loc_825A04C4:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x825aad90
	sub_825AAD90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a04e4
	if (cr6.lt) goto loc_825A04E4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a04e4
	if (!cr6.eq) goto loc_825A04E4;
	// stw r11,536(r30)
	PPC_STORE_U32(r30.u32 + 536, r11.u32);
loc_825A04E4:
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

__attribute__((alias("__imp__sub_825A04FC"))) PPC_WEAK_FUNC(sub_825A04FC);
PPC_FUNC_IMPL(__imp__sub_825A04FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0500"))) PPC_WEAK_FUNC(sub_825A0500);
PPC_FUNC_IMPL(__imp__sub_825A0500) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// bl 0x825aa850
	sub_825AA850(ctx, base);
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r29,r11,22
	r29.u64 = r11.u64 | 22;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// beq cr6,0x825a058c
	if (cr6.eq) goto loc_825A058C;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0684
	if (cr6.lt) goto loc_825A0684;
loc_825A0554:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0684
	if (cr6.lt) goto loc_825A0684;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825ab3b8
	sub_825AB3B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0684
	if (cr6.lt) goto loc_825A0684;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825aa8c0
	sub_825AA8C0(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x825a0554
	if (!cr6.eq) goto loc_825A0554;
loc_825A058C:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// bl 0x825aa930
	sub_825AA930(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x825aa850
	sub_825AA850(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// beq cr6,0x825a0640
	if (cr6.eq) goto loc_825A0640;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0684
	if (cr6.lt) goto loc_825A0684;
loc_825A05C0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0684
	if (cr6.lt) goto loc_825A0684;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x825a05e0
	if (!cr6.eq) goto loc_825A05E0;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// b 0x825a05ec
	goto loc_825A05EC;
loc_825A05E0:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825a05f0
	if (!cr6.eq) goto loc_825A05F0;
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_825A05EC:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825A05F0:
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r31,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r31.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,80(r11)
	PPC_STORE_U32(r11.u32 + 80, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r31.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r31,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r31.u32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x825aa8c0
	sub_825AA8C0(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x825a05c0
	if (!cr6.eq) goto loc_825A05C0;
loc_825A0640:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x825aa930
	sub_825AA930(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0684
	if (cr6.lt) goto loc_825A0684;
	// li r11,2
	r11.s64 = 2;
	// stw r31,536(r30)
	PPC_STORE_U32(r30.u32 + 536, r31.u32);
	// stw r28,556(r30)
	PPC_STORE_U32(r30.u32 + 556, r28.u32);
	// std r27,560(r30)
	PPC_STORE_U64(r30.u32 + 560, r27.u64);
	// stw r31,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r31.u32);
	// stw r31,632(r30)
	PPC_STORE_U32(r30.u32 + 632, r31.u32);
	// stw r11,532(r30)
	PPC_STORE_U32(r30.u32 + 532, r11.u32);
loc_825A0684:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825A068C"))) PPC_WEAK_FUNC(sub_825A068C);
PPC_FUNC_IMPL(__imp__sub_825A068C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0690"))) PPC_WEAK_FUNC(sub_825A0690);
PPC_FUNC_IMPL(__imp__sub_825A0690) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r26,r30
	r26.u64 = r30.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r30.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// bl 0x825aa850
	sub_825AA850(ctx, base);
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r29,r11,22
	r29.u64 = r11.u64 | 22;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// beq cr6,0x825a0724
	if (cr6.eq) goto loc_825A0724;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0834
	if (cr6.lt) goto loc_825A0834;
loc_825A06EC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0834
	if (cr6.lt) goto loc_825A0834;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825ab3b8
	sub_825AB3B8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0834
	if (cr6.lt) goto loc_825A0834;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825aa8c0
	sub_825AA8C0(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x825a06ec
	if (!cr6.eq) goto loc_825A06EC;
loc_825A0724:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// bl 0x825aa930
	sub_825AA930(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x825aa850
	sub_825AA850(ctx, base);
	// li r27,1
	r27.s64 = 1;
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// beq cr6,0x825a07e8
	if (cr6.eq) goto loc_825A07E8;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0834
	if (cr6.lt) goto loc_825A0834;
loc_825A0758:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0834
	if (cr6.lt) goto loc_825A0834;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x825a0778
	if (!cr6.eq) goto loc_825A0778;
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// b 0x825a0784
	goto loc_825A0784;
loc_825A0778:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825a0788
	if (!cr6.eq) goto loc_825A0788;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_825A0784:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825A0788:
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r30.u8);
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, r30.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r30,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r30.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825a07cc
	if (!cr6.eq) goto loc_825A07CC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r26,80(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 80);
loc_825A07CC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825aa8c0
	sub_825AA8C0(ctx, base);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x825a0758
	if (!cr6.eq) goto loc_825A0758;
loc_825A07E8:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x825aa930
	sub_825AA930(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// clrldi r4,r26,32
	ctx.r4.u64 = r26.u64 & 0xFFFFFFFF;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a0834
	if (cr6.lt) goto loc_825A0834;
	// li r11,2
	r11.s64 = 2;
	// stw r26,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r26.u32);
	// stb r28,592(r31)
	PPC_STORE_U8(r31.u32 + 592, r28.u8);
	// stw r30,536(r31)
	PPC_STORE_U32(r31.u32 + 536, r30.u32);
	// stw r27,556(r31)
	PPC_STORE_U32(r31.u32 + 556, r27.u32);
	// stw r30,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r30.u32);
	// stw r11,532(r31)
	PPC_STORE_U32(r31.u32 + 532, r11.u32);
loc_825A0834:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_825A083C"))) PPC_WEAK_FUNC(sub_825A083C);
PPC_FUNC_IMPL(__imp__sub_825A083C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0840"))) PPC_WEAK_FUNC(sub_825A0840);
PPC_FUNC_IMPL(__imp__sub_825A0840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r18{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r27,-1
	r27.s64 = -1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// clrldi r27,r27,5
	r27.u64 = r27.u64 & 0x7FFFFFFFFFFFFFF;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// mr r28,r29
	r28.u64 = r29.u64;
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r29.u64);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// std r29,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, r29.u64);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r29.u8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// bne cr6,0x825a0c04
	if (!cr6.eq) goto loc_825A0C04;
	// lis r11,10
	r11.s64 = 655360;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// ori r10,r10,48
	ctx.r10.u64 = ctx.r10.u64 | 48;
	// bgt cr6,0x825a0a78
	if (cr6.gt) goto loc_825A0A78;
	// beq cr6,0x825a0c04
	if (cr6.eq) goto loc_825A0C04;
	// lis r11,2
	r11.s64 = 131072;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bgt cr6,0x825a0914
	if (cr6.gt) goto loc_825A0914;
	// beq cr6,0x825a0c04
	if (cr6.eq) goto loc_825A0C04;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x825a08dc
	if (cr6.eq) goto loc_825A08DC;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bne cr6,0x825a0bd8
	if (!cr6.eq) goto loc_825A0BD8;
	// li r11,4
	r11.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,532(r30)
	PPC_STORE_U32(r30.u32 + 532, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
loc_825A08DC:
	// li r11,2
	r11.s64 = 2;
	// lwz r10,540(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 540);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,532(r30)
	PPC_STORE_U32(r30.u32 + 532, r11.u32);
	// stw r9,528(r30)
	PPC_STORE_U32(r30.u32 + 528, ctx.r9.u32);
	// beq cr6,0x825a0908
	if (cr6.eq) goto loc_825A0908;
	// lis r3,80
	ctx.r3.s64 = 5242880;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
loc_825A0908:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
loc_825A0914:
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bne cr6,0x825a0bd8
	if (!cr6.eq) goto loc_825A0BD8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x825aa850
	sub_825AA850(ctx, base);
	// lis r11,-32688
	r11.s64 = -2142240768;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r26,r11,22
	r26.u64 = r11.u64 | 22;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x825a0950
	if (!cr6.eq) goto loc_825A0950;
	// lis r31,-32688
	r31.s64 = -2142240768;
	// ori r31,r31,167
	r31.u64 = r31.u64 | 167;
	// b 0x825a0be8
	goto loc_825A0BE8;
loc_825A0950:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a0be8
	if (cr6.lt) goto loc_825A0BE8;
	// lis r11,-32688
	r11.s64 = -2142240768;
	// stw r29,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r29.u32);
	// li r24,1
	r24.s64 = 1;
	// ori r25,r11,11
	r25.u64 = r11.u64 | 11;
loc_825A0968:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a0be8
	if (cr6.lt) goto loc_825A0BE8;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a0a18
	if (cr6.eq) goto loc_825A0A18;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a0be8
	if (cr6.lt) goto loc_825A0BE8;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825aace8
	sub_825AACE8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// bne cr6,0x825a09c4
	if (!cr6.eq) goto loc_825A09C4;
	// stw r29,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r29.u32);
	// b 0x825a0a18
	goto loc_825A0A18;
loc_825A09C4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a0be8
	if (cr6.lt) goto loc_825A0BE8;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// ld r11,96(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// lwz r7,20(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpd cr6,r8,r7
	cr6.compare<int64_t>(ctx.r8.s64, ctx.r7.s64, xer);
	// ble cr6,0x825a09ec
	if (!cr6.gt) goto loc_825A09EC;
	// stw r24,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r24.u32);
loc_825A09EC:
	// cmpd cr6,r11,r27
	cr6.compare<int64_t>(r11.s64, r27.s64, xer);
	// bge cr6,0x825a09f8
	if (!cr6.lt) goto loc_825A09F8;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_825A09F8:
	// cmpd cr6,r10,r28
	cr6.compare<int64_t>(ctx.r10.s64, r28.s64, xer);
	// ble cr6,0x825a0a04
	if (!cr6.gt) goto loc_825A0A04;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_825A0A04:
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// subf r10,r27,r28
	ctx.r10.s64 = r28.s64 - r27.s64;
	// cmpd cr6,r10,r11
	cr6.compare<int64_t>(ctx.r10.s64, r11.s64, xer);
	// ble cr6,0x825a0a18
	if (!cr6.gt) goto loc_825A0A18;
	// stw r24,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r24.u32);
loc_825A0A18:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x825aa8c0
	sub_825AA8C0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// bne cr6,0x825a0968
	if (!cr6.eq) goto loc_825A0968;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x825aa930
	sub_825AA930(ctx, base);
	// lwz r11,588(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a0a68
	if (cr6.eq) goto loc_825A0A68;
	// lwz r11,632(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 632);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a0a60
	if (!cr6.eq) goto loc_825A0A60;
	// stw r24,632(r30)
	PPC_STORE_U32(r30.u32 + 632, r24.u32);
loc_825A0A60:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// b 0x825a0be8
	goto loc_825A0BE8;
loc_825A0A68:
	// mr r31,r24
	r31.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
loc_825A0A78:
	// addis r11,r4,-11
	r11.s64 = ctx.r4.s64 + -720896;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bgt cr6,0x825a0bd8
	if (cr6.gt) goto loc_825A0BD8;
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,2716
	r12.s64 = r12.s64 + 2716;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_825A0B60;
	case 1:
		goto loc_825A0BD8;
	case 2:
		goto loc_825A0BD8;
	case 3:
		goto loc_825A0BD8;
	case 4:
		goto loc_825A0BD8;
	case 5:
		goto loc_825A0BD8;
	case 6:
		goto loc_825A0BD8;
	case 7:
		goto loc_825A0BD8;
	case 8:
		goto loc_825A0BD8;
	case 9:
		goto loc_825A0BD8;
	case 10:
		goto loc_825A0BD8;
	case 11:
		goto loc_825A0BD8;
	case 12:
		goto loc_825A0BD8;
	case 13:
		goto loc_825A0BD8;
	case 14:
		goto loc_825A0BD8;
	case 15:
		goto loc_825A0BD8;
	case 16:
		goto loc_825A0B88;
	case 17:
		goto loc_825A0BD8;
	case 18:
		goto loc_825A0BD8;
	case 19:
		goto loc_825A0BD8;
	case 20:
		goto loc_825A0BD8;
	case 21:
		goto loc_825A0BD8;
	case 22:
		goto loc_825A0BD8;
	case 23:
		goto loc_825A0BD8;
	case 24:
		goto loc_825A0BD8;
	case 25:
		goto loc_825A0BD8;
	case 26:
		goto loc_825A0BD8;
	case 27:
		goto loc_825A0BD8;
	case 28:
		goto loc_825A0BD8;
	case 29:
		goto loc_825A0BD8;
	case 30:
		goto loc_825A0BD8;
	case 31:
		goto loc_825A0BD8;
	case 32:
		goto loc_825A0BA0;
	case 33:
		goto loc_825A0BD8;
	case 34:
		goto loc_825A0BD8;
	case 35:
		goto loc_825A0BD8;
	case 36:
		goto loc_825A0BD8;
	case 37:
		goto loc_825A0BD8;
	case 38:
		goto loc_825A0BD8;
	case 39:
		goto loc_825A0BD8;
	case 40:
		goto loc_825A0BD8;
	case 41:
		goto loc_825A0BD8;
	case 42:
		goto loc_825A0BD8;
	case 43:
		goto loc_825A0BD8;
	case 44:
		goto loc_825A0BD8;
	case 45:
		goto loc_825A0BD8;
	case 46:
		goto loc_825A0BD8;
	case 47:
		goto loc_825A0BD8;
	case 48:
		goto loc_825A0BB8;
	default:
		__builtin_unreachable();
	}
	// lwz r18,2912(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 2912);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,2952(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 2952);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,2976(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 2976);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3032(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3032);
	// lwz r18,3000(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3000);
loc_825A0B60:
	// lhz r11,626(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 626);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, r11.u16);
	// lbz r11,629(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 629);
	// stb r11,1(r5)
	PPC_STORE_U8(ctx.r5.u32 + 1, r11.u8);
	// lbz r11,628(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 628);
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r11.u8);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
loc_825A0B88:
	// lhz r11,624(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 624);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
loc_825A0BA0:
	// lwz r11,620(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 620);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
loc_825A0BB8:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,616(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 616);
	// lwz r5,620(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 620);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r31,r29
	r31.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
loc_825A0BD8:
	// lis r31,-32688
	r31.s64 = -2142240768;
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// ori r31,r31,178
	r31.u64 = r31.u64 | 178;
	// bne cr6,0x825a0c04
	if (!cr6.eq) goto loc_825A0C04;
loc_825A0BE8:
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a0c04
	if (cr6.eq) goto loc_825A0C04;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a0c04
	if (cr6.eq) goto loc_825A0C04;
	// bl 0x825aa930
	sub_825AA930(ctx, base);
loc_825A0C04:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_825A0C10"))) PPC_WEAK_FUNC(sub_825A0C10);
PPC_FUNC_IMPL(__imp__sub_825A0C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,552(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bgt cr6,0x825a0d20
	if (cr6.gt) {
		sub_825A0D20(ctx, base);
		return;
	}
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,3132
	r12.s64 = r12.s64 + 3132;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x825A0CAC
		return;
	case 1:
		// ERROR: 0x825A0CBC
		return;
	case 2:
		// ERROR: 0x825A0CCC
		return;
	case 3:
		// ERROR: 0x825A0CDC
		return;
	case 4:
		// ERROR: 0x825A0CE8
		return;
	case 5:
		// ERROR: 0x825A0CF4
		return;
	case 6:
		// ERROR: 0x825A0D08
		return;
	case 7:
		// ERROR: 0x825A0D14
		return;
	case 8:
		// ERROR: 0x825A0C6C
		return;
	case 9:
		// ERROR: 0x825A0C94
		return;
	case 10:
		// ERROR: 0x825A0D00
		return;
	case 11:
		// ERROR: 0x825A0CA0
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_825A0C3C"))) PPC_WEAK_FUNC(sub_825A0C3C);
PPC_FUNC_IMPL(__imp__sub_825A0C3C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r26{};
	// lwz r18,3244(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3244);
	// lwz r18,3260(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3260);
	// lwz r18,3276(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3276);
	// lwz r18,3292(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3292);
	// lwz r18,3304(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3304);
	// lwz r18,3316(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3316);
	// lwz r18,3336(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3336);
	// lwz r18,3348(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3348);
	// lwz r18,3180(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3180);
	// lwz r18,3220(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3220);
	// lwz r18,3328(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3328);
	// lwz r18,3232(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3232);
	// lis r11,22101
	r11.s64 = 1448411136;
	// ori r11,r11,22857
	r11.u64 = r11.u64 | 22857;
	// li r10,12
	ctx.r10.s64 = 12;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a0c84
	if (cr6.eq) goto loc_825A0C84;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_825A0C84:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825a0c90
	if (cr6.eq) goto loc_825A0C90;
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
loc_825A0C90:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0C94"))) PPC_WEAK_FUNC(sub_825A0C94);
PPC_FUNC_IMPL(__imp__sub_825A0C94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,12338
	r11.s64 = 808583168;
	// ori r11,r11,13385
	r11.u64 = r11.u64 | 13385;
	// b 0x825a0c74
	// ERROR 825A0C74
	return;
}

__attribute__((alias("__imp__sub_825A0CA0"))) PPC_WEAK_FUNC(sub_825A0CA0);
PPC_FUNC_IMPL(__imp__sub_825A0CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,12849
	r11.s64 = 842072064;
	// ori r11,r11,22105
	r11.u64 = r11.u64 | 22105;
	// b 0x825a0c74
	// ERROR 825A0C74
	return;
}

__attribute__((alias("__imp__sub_825A0CAC"))) PPC_WEAK_FUNC(sub_825A0CAC);
PPC_FUNC_IMPL(__imp__sub_825A0CAC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,12889
	r11.s64 = 844693504;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,21849
	r11.u64 = r11.u64 | 21849;
	// b 0x825a0c78
	// ERROR 825A0C78
	return;
}

__attribute__((alias("__imp__sub_825A0CBC"))) PPC_WEAK_FUNC(sub_825A0CBC);
PPC_FUNC_IMPL(__imp__sub_825A0CBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,22870
	r11.s64 = 1498808320;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22869
	r11.u64 = r11.u64 | 22869;
	// b 0x825a0c78
	// ERROR 825A0C78
	return;
}

__attribute__((alias("__imp__sub_825A0CCC"))) PPC_WEAK_FUNC(sub_825A0CCC);
PPC_FUNC_IMPL(__imp__sub_825A0CCC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,21849
	r11.s64 = 1431896064;
	// li r10,16
	ctx.r10.s64 = 16;
	// ori r11,r11,22105
	r11.u64 = r11.u64 | 22105;
	// b 0x825a0c78
	// ERROR 825A0C78
	return;
}

__attribute__((alias("__imp__sub_825A0CDC"))) PPC_WEAK_FUNC(sub_825A0CDC);
PPC_FUNC_IMPL(__imp__sub_825A0CDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,24
	ctx.r10.s64 = 24;
	// b 0x825a0c78
	// ERROR 825A0C78
	return;
}

__attribute__((alias("__imp__sub_825A0CE8"))) PPC_WEAK_FUNC(sub_825A0CE8);
PPC_FUNC_IMPL(__imp__sub_825A0CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x825a0c78
	// ERROR 825A0C78
	return;
}

__attribute__((alias("__imp__sub_825A0CF4"))) PPC_WEAK_FUNC(sub_825A0CF4);
PPC_FUNC_IMPL(__imp__sub_825A0CF4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x825a0c78
	// ERROR 825A0C78
	return;
}

__attribute__((alias("__imp__sub_825A0D00"))) PPC_WEAK_FUNC(sub_825A0D00);
PPC_FUNC_IMPL(__imp__sub_825A0D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,3
	r11.s64 = 3;
	// b 0x825a0c74
	// ERROR 825A0C74
	return;
}

__attribute__((alias("__imp__sub_825A0D08"))) PPC_WEAK_FUNC(sub_825A0D08);
PPC_FUNC_IMPL(__imp__sub_825A0D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x825a0c78
	// ERROR 825A0C78
	return;
}

__attribute__((alias("__imp__sub_825A0D14"))) PPC_WEAK_FUNC(sub_825A0D14);
PPC_FUNC_IMPL(__imp__sub_825A0D14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x825a0c78
	// ERROR 825A0C78
	return;
}

__attribute__((alias("__imp__sub_825A0D20"))) PPC_WEAK_FUNC(sub_825A0D20);
PPC_FUNC_IMPL(__imp__sub_825A0D20) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0D2C"))) PPC_WEAK_FUNC(sub_825A0D2C);
PPC_FUNC_IMPL(__imp__sub_825A0D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0D30"))) PPC_WEAK_FUNC(sub_825A0D30);
PPC_FUNC_IMPL(__imp__sub_825A0D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a0dbc
	if (cr6.eq) goto loc_825A0DBC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a0dbc
	if (cr6.eq) goto loc_825A0DBC;
	// lwz r11,528(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a0dbc
	if (cr6.eq) goto loc_825A0DBC;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A0D60:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825a0d60
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A0D60;
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// stb r11,16(r4)
	PPC_STORE_U8(ctx.r4.u32 + 16, r11.u8);
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// blr 
	return;
loc_825A0DBC:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0DC4"))) PPC_WEAK_FUNC(sub_825A0DC4);
PPC_FUNC_IMPL(__imp__sub_825A0DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0DC8"))) PPC_WEAK_FUNC(sub_825A0DC8);
PPC_FUNC_IMPL(__imp__sub_825A0DC8) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825a0e48
	if (cr6.eq) goto loc_825A0E48;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a0e48
	if (cr6.eq) goto loc_825A0E48;
	// lwz r11,548(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// bl 0x825aa300
	sub_825AA300(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r31,608(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// bl 0x8259fc00
	sub_8259FC00(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a0e30
	if (cr6.eq) goto loc_825A0E30;
	// bl 0x825ac300
	sub_825AC300(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
loc_825A0E30:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x825aa458
	sub_825AA458(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825a0e4c
	goto loc_825A0E4C;
loc_825A0E48:
	// li r3,4
	ctx.r3.s64 = 4;
loc_825A0E4C:
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

__attribute__((alias("__imp__sub_825A0E64"))) PPC_WEAK_FUNC(sub_825A0E64);
PPC_FUNC_IMPL(__imp__sub_825A0E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A0E68"))) PPC_WEAK_FUNC(sub_825A0E68);
PPC_FUNC_IMPL(__imp__sub_825A0E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r12{};
	// cmplwi cr6,r3,13
	cr6.compare<uint32_t>(ctx.r3.u32, 13, xer);
	// bgt cr6,0x825a0f30
	if (cr6.gt) {
		sub_825A0F30(ctx, base);
		return;
	}
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,3720
	r12.s64 = r12.s64 + 3720;
	// rlwinm r0,r3,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r3.u64) {
	case 0:
		// ERROR: 0x825A0EC0
		return;
	case 1:
		// ERROR: 0x825A0EC8
		return;
	case 2:
		// ERROR: 0x825A0ED0
		return;
	case 3:
		// ERROR: 0x825A0ED8
		return;
	case 4:
		// ERROR: 0x825A0EE0
		return;
	case 5:
		// ERROR: 0x825A0EE8
		return;
	case 6:
		// ERROR: 0x825A0EF0
		return;
	case 7:
		// ERROR: 0x825A0EF8
		return;
	case 8:
		// ERROR: 0x825A0F00
		return;
	case 9:
		// ERROR: 0x825A0F08
		return;
	case 10:
		// ERROR: 0x825A0F10
		return;
	case 11:
		// ERROR: 0x825A0F18
		return;
	case 12:
		// ERROR: 0x825A0F20
		return;
	case 13:
		// ERROR: 0x825A0F28
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_825A0E88"))) PPC_WEAK_FUNC(sub_825A0E88);
PPC_FUNC_IMPL(__imp__sub_825A0E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r18{};
	PPCRegister r26{};
	// lwz r18,3776(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3776);
	// lwz r18,3784(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3784);
	// lwz r18,3792(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3792);
	// lwz r18,3800(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3800);
	// lwz r18,3808(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3808);
	// lwz r18,3816(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3816);
	// lwz r18,3824(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3824);
	// lwz r18,3832(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3832);
	// lwz r18,3840(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3840);
	// lwz r18,3848(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3848);
	// lwz r18,3856(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3856);
	// lwz r18,3864(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3864);
	// lwz r18,3872(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3872);
	// lwz r18,3880(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 3880);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0EC8"))) PPC_WEAK_FUNC(sub_825A0EC8);
PPC_FUNC_IMPL(__imp__sub_825A0EC8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0ED0"))) PPC_WEAK_FUNC(sub_825A0ED0);
PPC_FUNC_IMPL(__imp__sub_825A0ED0) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0ED8"))) PPC_WEAK_FUNC(sub_825A0ED8);
PPC_FUNC_IMPL(__imp__sub_825A0ED8) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0EE0"))) PPC_WEAK_FUNC(sub_825A0EE0);
PPC_FUNC_IMPL(__imp__sub_825A0EE0) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0EE8"))) PPC_WEAK_FUNC(sub_825A0EE8);
PPC_FUNC_IMPL(__imp__sub_825A0EE8) {
	PPC_FUNC_PROLOGUE();
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0EF0"))) PPC_WEAK_FUNC(sub_825A0EF0);
PPC_FUNC_IMPL(__imp__sub_825A0EF0) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0EF8"))) PPC_WEAK_FUNC(sub_825A0EF8);
PPC_FUNC_IMPL(__imp__sub_825A0EF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F00"))) PPC_WEAK_FUNC(sub_825A0F00);
PPC_FUNC_IMPL(__imp__sub_825A0F00) {
	PPC_FUNC_PROLOGUE();
	// li r3,9
	ctx.r3.s64 = 9;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F08"))) PPC_WEAK_FUNC(sub_825A0F08);
PPC_FUNC_IMPL(__imp__sub_825A0F08) {
	PPC_FUNC_PROLOGUE();
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F10"))) PPC_WEAK_FUNC(sub_825A0F10);
PPC_FUNC_IMPL(__imp__sub_825A0F10) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F18"))) PPC_WEAK_FUNC(sub_825A0F18);
PPC_FUNC_IMPL(__imp__sub_825A0F18) {
	PPC_FUNC_PROLOGUE();
	// li r3,11
	ctx.r3.s64 = 11;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F20"))) PPC_WEAK_FUNC(sub_825A0F20);
PPC_FUNC_IMPL(__imp__sub_825A0F20) {
	PPC_FUNC_PROLOGUE();
	// li r3,13
	ctx.r3.s64 = 13;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F28"))) PPC_WEAK_FUNC(sub_825A0F28);
PPC_FUNC_IMPL(__imp__sub_825A0F28) {
	PPC_FUNC_PROLOGUE();
	// li r3,14
	ctx.r3.s64 = 14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F30"))) PPC_WEAK_FUNC(sub_825A0F30);
PPC_FUNC_IMPL(__imp__sub_825A0F30) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A0F38"))) PPC_WEAK_FUNC(sub_825A0F38);
PPC_FUNC_IMPL(__imp__sub_825A0F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r11,r11,186
	r11.u64 = r11.u64 | 186;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x825a12f4
	if (cr6.gt) {
		sub_825A12F4(ctx, base);
		return;
	}
	// beq cr6,0x825a12ec
	if (cr6.eq) {
		sub_825A12EC(ctx, base);
		return;
	}
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r11,r11,12
	r11.u64 = r11.u64 | 12;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x825a0ff0
	if (cr6.gt) goto loc_825A0FF0;
	// beq cr6,0x825a0fe8
	if (cr6.eq) goto loc_825A0FE8;
	// lis r11,-32688
	r11.s64 = -2142240768;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x825a0fa8
	if (cr6.gt) goto loc_825A0FA8;
	// beq cr6,0x825a0fd8
	if (cr6.eq) goto loc_825A0FD8;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x825a0fe0
	if (cr6.eq) goto loc_825A0FE0;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// subf. r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825a0fa0
	if (cr0.eq) goto loc_825A0FA0;
	// cmplwi cr6,r11,73
	cr6.compare<uint32_t>(r11.u32, 73, xer);
	// bne cr6,0x825a13c0
	if (!cr6.eq) {
		// ERROR 825A13C0
		return;
	}
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_825A0FA0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_825A0FA8:
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x825a13c0
	if (cr6.lt) {
		// ERROR 825A13C0
		return;
	}
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x825a0fe0
	if (!cr6.gt) goto loc_825A0FE0;
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r11,r11,6
	r11.u64 = r11.u64 | 6;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x825a13c0
	if (!cr6.eq) {
		// ERROR 825A13C0
		return;
	}
loc_825A0FD8:
	// li r3,30
	ctx.r3.s64 = 30;
	// blr 
	return;
loc_825A0FE0:
	// li r3,29
	ctx.r3.s64 = 29;
	// blr 
	return;
loc_825A0FE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_825A0FF0:
	// addis r11,r3,32688
	r11.s64 = ctx.r3.s64 + 2142240768;
	// addi r11,r11,-13
	r11.s64 = r11.s64 + -13;
	// cmplwi cr6,r11,170
	cr6.compare<uint32_t>(r11.u32, 170, xer);
	// bgt cr6,0x825a13c0
	if (cr6.gt) {
		// ERROR 825A13C0
		return;
	}
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,4120
	r12.s64 = r12.s64 + 4120;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x825A12CC
		return;
	case 1:
		// ERROR: 0x825A12D4
		return;
	case 2:
		// ERROR: 0x825A12D4
		return;
	case 3:
		// ERROR: 0x825A12D4
		return;
	case 4:
		// ERROR: 0x825A12D4
		return;
	case 5:
		// ERROR: 0x825A12D4
		return;
	case 6:
		// ERROR: 0x825A12D4
		return;
	case 7:
		// ERROR: 0x825A12D4
		return;
	case 8:
		// ERROR: 0x825A12D4
		return;
	case 9:
		// ERROR: 0x825A13C0
		return;
	case 10:
		// ERROR: 0x825A12DC
		return;
	case 11:
		// ERROR: 0x825A12DC
		return;
	case 12:
		// ERROR: 0x825A13C0
		return;
	case 13:
		// ERROR: 0x825A13C0
		return;
	case 14:
		// ERROR: 0x825A13C0
		return;
	case 15:
		// ERROR: 0x825A13C0
		return;
	case 16:
		// ERROR: 0x825A13C0
		return;
	case 17:
		// ERROR: 0x825A13C0
		return;
	case 18:
		// ERROR: 0x825A13C0
		return;
	case 19:
		// ERROR: 0x825A13C0
		return;
	case 20:
		// ERROR: 0x825A13C0
		return;
	case 21:
		// ERROR: 0x825A13C0
		return;
	case 22:
		// ERROR: 0x825A13C0
		return;
	case 23:
		// ERROR: 0x825A13C0
		return;
	case 24:
		// ERROR: 0x825A13C0
		return;
	case 25:
		// ERROR: 0x825A13C0
		return;
	case 26:
		// ERROR: 0x825A13C0
		return;
	case 27:
		// ERROR: 0x825A13C0
		return;
	case 28:
		// ERROR: 0x825A13C0
		return;
	case 29:
		// ERROR: 0x825A13C0
		return;
	case 30:
		// ERROR: 0x825A13C0
		return;
	case 31:
		// ERROR: 0x825A13C0
		return;
	case 32:
		// ERROR: 0x825A13C0
		return;
	case 33:
		// ERROR: 0x825A13C0
		return;
	case 34:
		// ERROR: 0x825A13C0
		return;
	case 35:
		// ERROR: 0x825A13C0
		return;
	case 36:
		// ERROR: 0x825A13C0
		return;
	case 37:
		// ERROR: 0x825A13C0
		return;
	case 38:
		// ERROR: 0x825A13C0
		return;
	case 39:
		// ERROR: 0x825A13C0
		return;
	case 40:
		// ERROR: 0x825A13C0
		return;
	case 41:
		// ERROR: 0x825A13C0
		return;
	case 42:
		// ERROR: 0x825A13C0
		return;
	case 43:
		// ERROR: 0x825A13C0
		return;
	case 44:
		// ERROR: 0x825A13C0
		return;
	case 45:
		// ERROR: 0x825A13C0
		return;
	case 46:
		// ERROR: 0x825A13C0
		return;
	case 47:
		// ERROR: 0x825A13C0
		return;
	case 48:
		// ERROR: 0x825A13C0
		return;
	case 49:
		// ERROR: 0x825A13C0
		return;
	case 50:
		// ERROR: 0x825A13C0
		return;
	case 51:
		// ERROR: 0x825A13C0
		return;
	case 52:
		// ERROR: 0x825A13C0
		return;
	case 53:
		// ERROR: 0x825A13C0
		return;
	case 54:
		// ERROR: 0x825A13C0
		return;
	case 55:
		// ERROR: 0x825A13C0
		return;
	case 56:
		// ERROR: 0x825A13C0
		return;
	case 57:
		// ERROR: 0x825A13C0
		return;
	case 58:
		// ERROR: 0x825A13C0
		return;
	case 59:
		// ERROR: 0x825A13C0
		return;
	case 60:
		// ERROR: 0x825A13C0
		return;
	case 61:
		// ERROR: 0x825A13C0
		return;
	case 62:
		// ERROR: 0x825A13C0
		return;
	case 63:
		// ERROR: 0x825A13C0
		return;
	case 64:
		// ERROR: 0x825A13C0
		return;
	case 65:
		// ERROR: 0x825A13C0
		return;
	case 66:
		// ERROR: 0x825A13C0
		return;
	case 67:
		// ERROR: 0x825A13C0
		return;
	case 68:
		// ERROR: 0x825A13C0
		return;
	case 69:
		// ERROR: 0x825A13C0
		return;
	case 70:
		// ERROR: 0x825A13C0
		return;
	case 71:
		// ERROR: 0x825A13C0
		return;
	case 72:
		// ERROR: 0x825A13C0
		return;
	case 73:
		// ERROR: 0x825A13C0
		return;
	case 74:
		// ERROR: 0x825A13C0
		return;
	case 75:
		// ERROR: 0x825A13C0
		return;
	case 76:
		// ERROR: 0x825A13C0
		return;
	case 77:
		// ERROR: 0x825A13C0
		return;
	case 78:
		// ERROR: 0x825A13C0
		return;
	case 79:
		// ERROR: 0x825A13C0
		return;
	case 80:
		// ERROR: 0x825A13C0
		return;
	case 81:
		// ERROR: 0x825A13C0
		return;
	case 82:
		// ERROR: 0x825A13C0
		return;
	case 83:
		// ERROR: 0x825A13C0
		return;
	case 84:
		// ERROR: 0x825A13C0
		return;
	case 85:
		// ERROR: 0x825A13C0
		return;
	case 86:
		// ERROR: 0x825A13C0
		return;
	case 87:
		// ERROR: 0x825A13C0
		return;
	case 88:
		// ERROR: 0x825A13C0
		return;
	case 89:
		// ERROR: 0x825A13C0
		return;
	case 90:
		// ERROR: 0x825A13C0
		return;
	case 91:
		// ERROR: 0x825A13C0
		return;
	case 92:
		// ERROR: 0x825A13C0
		return;
	case 93:
		// ERROR: 0x825A13C0
		return;
	case 94:
		// ERROR: 0x825A13C0
		return;
	case 95:
		// ERROR: 0x825A13C0
		return;
	case 96:
		// ERROR: 0x825A13C0
		return;
	case 97:
		// ERROR: 0x825A13C0
		return;
	case 98:
		// ERROR: 0x825A13C0
		return;
	case 99:
		// ERROR: 0x825A13C0
		return;
	case 100:
		// ERROR: 0x825A13C0
		return;
	case 101:
		// ERROR: 0x825A13C0
		return;
	case 102:
		// ERROR: 0x825A13C0
		return;
	case 103:
		// ERROR: 0x825A13C0
		return;
	case 104:
		// ERROR: 0x825A13C0
		return;
	case 105:
		// ERROR: 0x825A13C0
		return;
	case 106:
		// ERROR: 0x825A13C0
		return;
	case 107:
		// ERROR: 0x825A13C0
		return;
	case 108:
		// ERROR: 0x825A13C0
		return;
	case 109:
		// ERROR: 0x825A13C0
		return;
	case 110:
		// ERROR: 0x825A13C0
		return;
	case 111:
		// ERROR: 0x825A13C0
		return;
	case 112:
		// ERROR: 0x825A13C0
		return;
	case 113:
		// ERROR: 0x825A13C0
		return;
	case 114:
		// ERROR: 0x825A13C0
		return;
	case 115:
		// ERROR: 0x825A13C0
		return;
	case 116:
		// ERROR: 0x825A13C0
		return;
	case 117:
		// ERROR: 0x825A13C0
		return;
	case 118:
		// ERROR: 0x825A13C0
		return;
	case 119:
		// ERROR: 0x825A13C0
		return;
	case 120:
		// ERROR: 0x825A13C0
		return;
	case 121:
		// ERROR: 0x825A13C0
		return;
	case 122:
		// ERROR: 0x825A13C0
		return;
	case 123:
		// ERROR: 0x825A13C0
		return;
	case 124:
		// ERROR: 0x825A13C0
		return;
	case 125:
		// ERROR: 0x825A13C0
		return;
	case 126:
		// ERROR: 0x825A13C0
		return;
	case 127:
		// ERROR: 0x825A13C0
		return;
	case 128:
		// ERROR: 0x825A13C0
		return;
	case 129:
		// ERROR: 0x825A13C0
		return;
	case 130:
		// ERROR: 0x825A13C0
		return;
	case 131:
		// ERROR: 0x825A13C0
		return;
	case 132:
		// ERROR: 0x825A13C0
		return;
	case 133:
		// ERROR: 0x825A13C0
		return;
	case 134:
		// ERROR: 0x825A13C0
		return;
	case 135:
		// ERROR: 0x825A13C0
		return;
	case 136:
		// ERROR: 0x825A13C0
		return;
	case 137:
		// ERROR: 0x825A13C0
		return;
	case 138:
		// ERROR: 0x825A13C0
		return;
	case 139:
		// ERROR: 0x825A13C0
		return;
	case 140:
		// ERROR: 0x825A13C0
		return;
	case 141:
		// ERROR: 0x825A13C0
		return;
	case 142:
		// ERROR: 0x825A13C0
		return;
	case 143:
		// ERROR: 0x825A13C0
		return;
	case 144:
		// ERROR: 0x825A13C0
		return;
	case 145:
		// ERROR: 0x825A13C0
		return;
	case 146:
		// ERROR: 0x825A13C0
		return;
	case 147:
		// ERROR: 0x825A13C0
		return;
	case 148:
		// ERROR: 0x825A13C0
		return;
	case 149:
		// ERROR: 0x825A13C0
		return;
	case 150:
		// ERROR: 0x825A13C0
		return;
	case 151:
		// ERROR: 0x825A13C0
		return;
	case 152:
		// ERROR: 0x825A13C0
		return;
	case 153:
		// ERROR: 0x825A13C0
		return;
	case 154:
		// ERROR: 0x825A12E4
		return;
	case 155:
		// ERROR: 0x825A12E4
		return;
	case 156:
		// ERROR: 0x825A13C0
		return;
	case 157:
		// ERROR: 0x825A13C0
		return;
	case 158:
		// ERROR: 0x825A13C0
		return;
	case 159:
		// ERROR: 0x825A13C0
		return;
	case 160:
		// ERROR: 0x825A13C0
		return;
	case 161:
		// ERROR: 0x825A13C0
		return;
	case 162:
		// ERROR: 0x825A13C0
		return;
	case 163:
		// ERROR: 0x825A13C0
		return;
	case 164:
		// ERROR: 0x825A13C0
		return;
	case 165:
		// ERROR: 0x825A13C0
		return;
	case 166:
		// ERROR: 0x825A13C0
		return;
	case 167:
		// ERROR: 0x825A13C0
		return;
	case 168:
		// ERROR: 0x825A13C0
		return;
	case 169:
		// ERROR: 0x825A13C0
		return;
	case 170:
		// ERROR: 0x825A12C4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_825A1018"))) PPC_WEAK_FUNC(sub_825A1018);
PPC_FUNC_IMPL(__imp__sub_825A1018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r18{};
	PPCRegister r26{};
	// lwz r18,4812(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4812);
	// lwz r18,4820(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4820);
	// lwz r18,4820(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4820);
	// lwz r18,4820(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4820);
	// lwz r18,4820(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4820);
	// lwz r18,4820(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4820);
	// lwz r18,4820(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4820);
	// lwz r18,4820(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4820);
	// lwz r18,4820(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4820);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,4828(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4828);
	// lwz r18,4828(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4828);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,4836(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4836);
	// lwz r18,4836(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4836);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,4804(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4804);
	// li r3,18
	ctx.r3.s64 = 18;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A12CC"))) PPC_WEAK_FUNC(sub_825A12CC);
PPC_FUNC_IMPL(__imp__sub_825A12CC) {
	PPC_FUNC_PROLOGUE();
	// li r3,28
	ctx.r3.s64 = 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A12D4"))) PPC_WEAK_FUNC(sub_825A12D4);
PPC_FUNC_IMPL(__imp__sub_825A12D4) {
	PPC_FUNC_PROLOGUE();
	// li r3,27
	ctx.r3.s64 = 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A12DC"))) PPC_WEAK_FUNC(sub_825A12DC);
PPC_FUNC_IMPL(__imp__sub_825A12DC) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A12E4"))) PPC_WEAK_FUNC(sub_825A12E4);
PPC_FUNC_IMPL(__imp__sub_825A12E4) {
	PPC_FUNC_PROLOGUE();
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A12EC"))) PPC_WEAK_FUNC(sub_825A12EC);
PPC_FUNC_IMPL(__imp__sub_825A12EC) {
	PPC_FUNC_PROLOGUE();
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A12F4"))) PPC_WEAK_FUNC(sub_825A12F4);
PPC_FUNC_IMPL(__imp__sub_825A12F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lis r11,-32672
	r11.s64 = -2141192192;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x825a1384
	if (cr6.gt) {
		sub_825A1384(ctx, base);
		return;
	}
	// beq cr6,0x825a137c
	if (cr6.eq) {
		sub_825A137C(ctx, base);
		return;
	}
	// addis r11,r3,32672
	r11.s64 = ctx.r3.s64 + 2141192192;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x825a13c0
	if (cr6.gt) {
		// ERROR 825A13C0
		return;
	}
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,4908
	r12.s64 = r12.s64 + 4908;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x825A134C
		return;
	case 1:
		// ERROR: 0x825A13C0
		return;
	case 2:
		// ERROR: 0x825A13C0
		return;
	case 3:
		// ERROR: 0x825A1354
		return;
	case 4:
		// ERROR: 0x825A135C
		return;
	case 5:
		// ERROR: 0x825A1364
		return;
	case 6:
		// ERROR: 0x825A136C
		return;
	case 7:
		// ERROR: 0x825A1374
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_825A132C"))) PPC_WEAK_FUNC(sub_825A132C);
PPC_FUNC_IMPL(__imp__sub_825A132C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r18{};
	PPCRegister r26{};
	// lwz r18,4940(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4940);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,5056(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 5056);
	// lwz r18,4948(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4948);
	// lwz r18,4956(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4956);
	// lwz r18,4964(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4964);
	// lwz r18,4972(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4972);
	// lwz r18,4980(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 4980);
	// li r3,15
	ctx.r3.s64 = 15;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1354"))) PPC_WEAK_FUNC(sub_825A1354);
PPC_FUNC_IMPL(__imp__sub_825A1354) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A135C"))) PPC_WEAK_FUNC(sub_825A135C);
PPC_FUNC_IMPL(__imp__sub_825A135C) {
	PPC_FUNC_PROLOGUE();
	// li r3,23
	ctx.r3.s64 = 23;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1364"))) PPC_WEAK_FUNC(sub_825A1364);
PPC_FUNC_IMPL(__imp__sub_825A1364) {
	PPC_FUNC_PROLOGUE();
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A136C"))) PPC_WEAK_FUNC(sub_825A136C);
PPC_FUNC_IMPL(__imp__sub_825A136C) {
	PPC_FUNC_PROLOGUE();
	// li r3,17
	ctx.r3.s64 = 17;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1374"))) PPC_WEAK_FUNC(sub_825A1374);
PPC_FUNC_IMPL(__imp__sub_825A1374) {
	PPC_FUNC_PROLOGUE();
	// li r3,20
	ctx.r3.s64 = 20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A137C"))) PPC_WEAK_FUNC(sub_825A137C);
PPC_FUNC_IMPL(__imp__sub_825A137C) {
	PPC_FUNC_PROLOGUE();
	// li r3,21
	ctx.r3.s64 = 21;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1384"))) PPC_WEAK_FUNC(sub_825A1384);
PPC_FUNC_IMPL(__imp__sub_825A1384) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,80
	r11.s64 = 5242880;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bgt cr6,0x825a13dc
	if (cr6.gt) goto loc_825A13DC;
	// beq cr6,0x825a13d4
	if (cr6.eq) goto loc_825A13D4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825a13cc
	if (cr6.eq) goto loc_825A13CC;
	// lis r11,79
	r11.s64 = 5177344;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x825a13c0
	if (!cr6.gt) goto loc_825A13C0;
	// lis r11,80
	r11.s64 = 5242880;
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x825a13cc
	if (!cr6.gt) goto loc_825A13CC;
loc_825A13C0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,29
	ctx.r3.s64 = 29;
	// blt cr6,0x825a13d0
	if (cr6.lt) goto loc_825A13D0;
loc_825A13CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825A13D0:
	// blr 
	return;
loc_825A13D4:
	// li r3,33
	ctx.r3.s64 = 33;
	// blr 
	return;
loc_825A13DC:
	// lis r11,80
	r11.s64 = 5242880;
	// ori r11,r11,5
	r11.u64 = r11.u64 | 5;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// blt cr6,0x825a13c0
	if (cr6.lt) goto loc_825A13C0;
	// lis r11,80
	r11.s64 = 5242880;
	// ori r11,r11,6
	r11.u64 = r11.u64 | 6;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// ble cr6,0x825a13cc
	if (!cr6.gt) goto loc_825A13CC;
	// lis r11,96
	r11.s64 = 6291456;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x825a13c0
	if (!cr6.eq) goto loc_825A13C0;
	// li r3,22
	ctx.r3.s64 = 22;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1410"))) PPC_WEAK_FUNC(sub_825A1410);
PPC_FUNC_IMPL(__imp__sub_825A1410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// li r9,9
	ctx.r9.s64 = 9;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A1428:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x825a1428
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A1428;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, r11.u32);
	// stw r4,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r4.u32);
	// stw r10,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r10.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x825a1494
	if (cr6.eq) goto loc_825A1494;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x825a146c
	if (cr6.eq) goto loc_825A146C;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,184
	ctx.r3.u64 = ctx.r3.u64 | 184;
	// blr 
	return;
loc_825A146C:
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r9,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r9.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r11.u32);
	// blr 
	return;
loc_825A1494:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lhz r11,14(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 14);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stb r11,12(r5)
	PPC_STORE_U8(ctx.r5.u32 + 12, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A14B8"))) PPC_WEAK_FUNC(sub_825A14B8);
PPC_FUNC_IMPL(__imp__sub_825A14B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// bnelr cr6
	if (!cr6.eq) return;
	// addis r10,r4,-9
	ctx.r10.s64 = ctx.r4.s64 + -589824;
	// cmplwi cr6,r10,176
	cr6.compare<uint32_t>(ctx.r10.u32, 176, xer);
	// bgt cr6,0x825a1810
	if (cr6.gt) {
		sub_825A1810(ctx, base);
		return;
	}
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,5364
	r12.s64 = r12.s64 + 5364;
	// rlwinm r0,r10,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x825A1818
		return;
	case 1:
		// ERROR: 0x825A1810
		return;
	case 2:
		// ERROR: 0x825A1810
		return;
	case 3:
		// ERROR: 0x825A1810
		return;
	case 4:
		// ERROR: 0x825A1810
		return;
	case 5:
		// ERROR: 0x825A1810
		return;
	case 6:
		// ERROR: 0x825A1810
		return;
	case 7:
		// ERROR: 0x825A1810
		return;
	case 8:
		// ERROR: 0x825A1810
		return;
	case 9:
		// ERROR: 0x825A1810
		return;
	case 10:
		// ERROR: 0x825A1810
		return;
	case 11:
		// ERROR: 0x825A1810
		return;
	case 12:
		// ERROR: 0x825A1810
		return;
	case 13:
		// ERROR: 0x825A1810
		return;
	case 14:
		// ERROR: 0x825A1810
		return;
	case 15:
		// ERROR: 0x825A1810
		return;
	case 16:
		// ERROR: 0x825A17B8
		return;
	case 17:
		// ERROR: 0x825A1810
		return;
	case 18:
		// ERROR: 0x825A1810
		return;
	case 19:
		// ERROR: 0x825A1810
		return;
	case 20:
		// ERROR: 0x825A1810
		return;
	case 21:
		// ERROR: 0x825A1810
		return;
	case 22:
		// ERROR: 0x825A1810
		return;
	case 23:
		// ERROR: 0x825A1810
		return;
	case 24:
		// ERROR: 0x825A1810
		return;
	case 25:
		// ERROR: 0x825A1810
		return;
	case 26:
		// ERROR: 0x825A1810
		return;
	case 27:
		// ERROR: 0x825A1810
		return;
	case 28:
		// ERROR: 0x825A1810
		return;
	case 29:
		// ERROR: 0x825A1810
		return;
	case 30:
		// ERROR: 0x825A1810
		return;
	case 31:
		// ERROR: 0x825A1810
		return;
	case 32:
		// ERROR: 0x825A17C4
		return;
	case 33:
		// ERROR: 0x825A1810
		return;
	case 34:
		// ERROR: 0x825A1810
		return;
	case 35:
		// ERROR: 0x825A1810
		return;
	case 36:
		// ERROR: 0x825A1810
		return;
	case 37:
		// ERROR: 0x825A1810
		return;
	case 38:
		// ERROR: 0x825A1810
		return;
	case 39:
		// ERROR: 0x825A1810
		return;
	case 40:
		// ERROR: 0x825A1810
		return;
	case 41:
		// ERROR: 0x825A1810
		return;
	case 42:
		// ERROR: 0x825A1810
		return;
	case 43:
		// ERROR: 0x825A1810
		return;
	case 44:
		// ERROR: 0x825A1810
		return;
	case 45:
		// ERROR: 0x825A1810
		return;
	case 46:
		// ERROR: 0x825A1810
		return;
	case 47:
		// ERROR: 0x825A1810
		return;
	case 48:
		// ERROR: 0x825A17CC
		return;
	case 49:
		// ERROR: 0x825A1810
		return;
	case 50:
		// ERROR: 0x825A1810
		return;
	case 51:
		// ERROR: 0x825A1810
		return;
	case 52:
		// ERROR: 0x825A1810
		return;
	case 53:
		// ERROR: 0x825A1810
		return;
	case 54:
		// ERROR: 0x825A1810
		return;
	case 55:
		// ERROR: 0x825A1810
		return;
	case 56:
		// ERROR: 0x825A1810
		return;
	case 57:
		// ERROR: 0x825A1810
		return;
	case 58:
		// ERROR: 0x825A1810
		return;
	case 59:
		// ERROR: 0x825A1810
		return;
	case 60:
		// ERROR: 0x825A1810
		return;
	case 61:
		// ERROR: 0x825A1810
		return;
	case 62:
		// ERROR: 0x825A1810
		return;
	case 63:
		// ERROR: 0x825A1810
		return;
	case 64:
		// ERROR: 0x825A17D4
		return;
	case 65:
		// ERROR: 0x825A1810
		return;
	case 66:
		// ERROR: 0x825A1810
		return;
	case 67:
		// ERROR: 0x825A1810
		return;
	case 68:
		// ERROR: 0x825A1810
		return;
	case 69:
		// ERROR: 0x825A1810
		return;
	case 70:
		// ERROR: 0x825A1810
		return;
	case 71:
		// ERROR: 0x825A1810
		return;
	case 72:
		// ERROR: 0x825A1810
		return;
	case 73:
		// ERROR: 0x825A1810
		return;
	case 74:
		// ERROR: 0x825A1810
		return;
	case 75:
		// ERROR: 0x825A1810
		return;
	case 76:
		// ERROR: 0x825A1810
		return;
	case 77:
		// ERROR: 0x825A1810
		return;
	case 78:
		// ERROR: 0x825A1810
		return;
	case 79:
		// ERROR: 0x825A1810
		return;
	case 80:
		// ERROR: 0x825A1818
		return;
	case 81:
		// ERROR: 0x825A1810
		return;
	case 82:
		// ERROR: 0x825A1810
		return;
	case 83:
		// ERROR: 0x825A1810
		return;
	case 84:
		// ERROR: 0x825A1810
		return;
	case 85:
		// ERROR: 0x825A1810
		return;
	case 86:
		// ERROR: 0x825A1810
		return;
	case 87:
		// ERROR: 0x825A1810
		return;
	case 88:
		// ERROR: 0x825A1810
		return;
	case 89:
		// ERROR: 0x825A1810
		return;
	case 90:
		// ERROR: 0x825A1810
		return;
	case 91:
		// ERROR: 0x825A1810
		return;
	case 92:
		// ERROR: 0x825A1810
		return;
	case 93:
		// ERROR: 0x825A1810
		return;
	case 94:
		// ERROR: 0x825A1810
		return;
	case 95:
		// ERROR: 0x825A1810
		return;
	case 96:
		// ERROR: 0x825A1818
		return;
	case 97:
		// ERROR: 0x825A1810
		return;
	case 98:
		// ERROR: 0x825A1810
		return;
	case 99:
		// ERROR: 0x825A1810
		return;
	case 100:
		// ERROR: 0x825A1810
		return;
	case 101:
		// ERROR: 0x825A1810
		return;
	case 102:
		// ERROR: 0x825A1810
		return;
	case 103:
		// ERROR: 0x825A1810
		return;
	case 104:
		// ERROR: 0x825A1810
		return;
	case 105:
		// ERROR: 0x825A1810
		return;
	case 106:
		// ERROR: 0x825A1810
		return;
	case 107:
		// ERROR: 0x825A1810
		return;
	case 108:
		// ERROR: 0x825A1810
		return;
	case 109:
		// ERROR: 0x825A1810
		return;
	case 110:
		// ERROR: 0x825A1810
		return;
	case 111:
		// ERROR: 0x825A1810
		return;
	case 112:
		// ERROR: 0x825A17DC
		return;
	case 113:
		// ERROR: 0x825A1810
		return;
	case 114:
		// ERROR: 0x825A1810
		return;
	case 115:
		// ERROR: 0x825A1810
		return;
	case 116:
		// ERROR: 0x825A1810
		return;
	case 117:
		// ERROR: 0x825A1810
		return;
	case 118:
		// ERROR: 0x825A1810
		return;
	case 119:
		// ERROR: 0x825A1810
		return;
	case 120:
		// ERROR: 0x825A1810
		return;
	case 121:
		// ERROR: 0x825A1810
		return;
	case 122:
		// ERROR: 0x825A1810
		return;
	case 123:
		// ERROR: 0x825A1810
		return;
	case 124:
		// ERROR: 0x825A1810
		return;
	case 125:
		// ERROR: 0x825A1810
		return;
	case 126:
		// ERROR: 0x825A1810
		return;
	case 127:
		// ERROR: 0x825A1810
		return;
	case 128:
		// ERROR: 0x825A17F0
		return;
	case 129:
		// ERROR: 0x825A1810
		return;
	case 130:
		// ERROR: 0x825A1810
		return;
	case 131:
		// ERROR: 0x825A1810
		return;
	case 132:
		// ERROR: 0x825A1810
		return;
	case 133:
		// ERROR: 0x825A1810
		return;
	case 134:
		// ERROR: 0x825A1810
		return;
	case 135:
		// ERROR: 0x825A1810
		return;
	case 136:
		// ERROR: 0x825A1810
		return;
	case 137:
		// ERROR: 0x825A1810
		return;
	case 138:
		// ERROR: 0x825A1810
		return;
	case 139:
		// ERROR: 0x825A1810
		return;
	case 140:
		// ERROR: 0x825A1810
		return;
	case 141:
		// ERROR: 0x825A1810
		return;
	case 142:
		// ERROR: 0x825A1810
		return;
	case 143:
		// ERROR: 0x825A1810
		return;
	case 144:
		// ERROR: 0x825A1818
		return;
	case 145:
		// ERROR: 0x825A1810
		return;
	case 146:
		// ERROR: 0x825A1810
		return;
	case 147:
		// ERROR: 0x825A1810
		return;
	case 148:
		// ERROR: 0x825A1810
		return;
	case 149:
		// ERROR: 0x825A1810
		return;
	case 150:
		// ERROR: 0x825A1810
		return;
	case 151:
		// ERROR: 0x825A1810
		return;
	case 152:
		// ERROR: 0x825A1810
		return;
	case 153:
		// ERROR: 0x825A1810
		return;
	case 154:
		// ERROR: 0x825A1810
		return;
	case 155:
		// ERROR: 0x825A1810
		return;
	case 156:
		// ERROR: 0x825A1810
		return;
	case 157:
		// ERROR: 0x825A1810
		return;
	case 158:
		// ERROR: 0x825A1810
		return;
	case 159:
		// ERROR: 0x825A1810
		return;
	case 160:
		// ERROR: 0x825A1818
		return;
	case 161:
		// ERROR: 0x825A1810
		return;
	case 162:
		// ERROR: 0x825A1810
		return;
	case 163:
		// ERROR: 0x825A1810
		return;
	case 164:
		// ERROR: 0x825A1810
		return;
	case 165:
		// ERROR: 0x825A1810
		return;
	case 166:
		// ERROR: 0x825A1810
		return;
	case 167:
		// ERROR: 0x825A1810
		return;
	case 168:
		// ERROR: 0x825A1810
		return;
	case 169:
		// ERROR: 0x825A1810
		return;
	case 170:
		// ERROR: 0x825A1810
		return;
	case 171:
		// ERROR: 0x825A1810
		return;
	case 172:
		// ERROR: 0x825A1810
		return;
	case 173:
		// ERROR: 0x825A1810
		return;
	case 174:
		// ERROR: 0x825A1810
		return;
	case 175:
		// ERROR: 0x825A1810
		return;
	case 176:
		// ERROR: 0x825A1818
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_825A14F4"))) PPC_WEAK_FUNC(sub_825A14F4);
PPC_FUNC_IMPL(__imp__sub_825A14F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r26{};
	// lwz r18,6168(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6168);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6072(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6072);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6084(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6084);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6092(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6092);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6100(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6100);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6168(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6168);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6168(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6168);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6108(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6108);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6128(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6128);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6168(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6168);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6168(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6168);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6160(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6160);
	// lwz r18,6168(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 6168);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A17C4"))) PPC_WEAK_FUNC(sub_825A17C4);
PPC_FUNC_IMPL(__imp__sub_825A17C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r5,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A17CC"))) PPC_WEAK_FUNC(sub_825A17CC);
PPC_FUNC_IMPL(__imp__sub_825A17CC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// sth r5,54(r11)
	PPC_STORE_U16(r11.u32 + 54, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A17D4"))) PPC_WEAK_FUNC(sub_825A17D4);
PPC_FUNC_IMPL(__imp__sub_825A17D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// sth r5,52(r11)
	PPC_STORE_U16(r11.u32 + 52, ctx.r5.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A17DC"))) PPC_WEAK_FUNC(sub_825A17DC);
PPC_FUNC_IMPL(__imp__sub_825A17DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A17F0"))) PPC_WEAK_FUNC(sub_825A17F0);
PPC_FUNC_IMPL(__imp__sub_825A17F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,552(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 552);
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// beq cr6,0x825a1808
	if (cr6.eq) goto loc_825A1808;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,183
	ctx.r3.u64 = ctx.r3.u64 | 183;
	// blr 
	return;
loc_825A1808:
	// stw r5,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A1810"))) PPC_WEAK_FUNC(sub_825A1810);
PPC_FUNC_IMPL(__imp__sub_825A1810) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,178
	ctx.r3.u64 = ctx.r3.u64 | 178;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A181C"))) PPC_WEAK_FUNC(sub_825A181C);
PPC_FUNC_IMPL(__imp__sub_825A181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1820"))) PPC_WEAK_FUNC(sub_825A1820);
PPC_FUNC_IMPL(__imp__sub_825A1820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a1834
	if (!cr6.eq) goto loc_825A1834;
loc_825A1828:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_825A1834:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a1828
	if (cr6.eq) goto loc_825A1828;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a1828
	if (cr6.eq) goto loc_825A1828;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x825aaa58
	sub_825AAA58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A184C"))) PPC_WEAK_FUNC(sub_825A184C);
PPC_FUNC_IMPL(__imp__sub_825A184C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1850"))) PPC_WEAK_FUNC(sub_825A1850);
PPC_FUNC_IMPL(__imp__sub_825A1850) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a186c
	if (!cr6.eq) goto loc_825A186C;
loc_825A1860:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_825A186C:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a1860
	if (cr6.eq) goto loc_825A1860;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a1860
	if (cr6.eq) goto loc_825A1860;
	// lwz r11,56(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r4,60(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// lwz r3,608(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 608);
	// b 0x825a9fb0
	sub_825A9FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A1894"))) PPC_WEAK_FUNC(sub_825A1894);
PPC_FUNC_IMPL(__imp__sub_825A1894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1898"))) PPC_WEAK_FUNC(sub_825A1898);
PPC_FUNC_IMPL(__imp__sub_825A1898) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,656
	ctx.r5.s64 = 656;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x825aa3a8
	sub_825AA3A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1a08
	if (cr6.lt) goto loc_825A1A08;
	// li r5,656
	ctx.r5.s64 = 656;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r27,524(r30)
	PPC_STORE_U32(r30.u32 + 524, r27.u32);
	// stw r28,528(r30)
	PPC_STORE_U32(r30.u32 + 528, r28.u32);
	// bl 0x825aa3a8
	sub_825AA3A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1a08
	if (cr6.lt) goto loc_825A1A08;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_825A1928:
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825a1928
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A1928;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,644
	ctx.r5.s64 = 644;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825aa3a8
	sub_825AA3A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1a08
	if (cr6.lt) goto loc_825A1A08;
	// li r5,644
	ctx.r5.s64 = 644;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825aa3a8
	sub_825AA3A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1a08
	if (cr6.lt) goto loc_825A1A08;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32166
	r11.s64 = -2108030976;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r11,6176
	ctx.r4.s64 = r11.s64 + 6176;
	// addi r7,r30,572
	ctx.r7.s64 = r30.s64 + 572;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r9,532(r30)
	PPC_STORE_U32(r30.u32 + 532, ctx.r9.u32);
	// stw r29,608(r30)
	PPC_STORE_U32(r30.u32 + 608, r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x825aa688
	sub_825AA688(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1a08
	if (cr6.lt) goto loc_825A1A08;
	// lis r11,-32166
	r11.s64 = -2108030976;
	// addi r7,r30,568
	ctx.r7.s64 = r30.s64 + 568;
	// li r6,84
	ctx.r6.s64 = 84;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,6224
	ctx.r4.s64 = r11.s64 + 6224;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825aa688
	sub_825AA688(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x825a1a78
	if (!cr6.lt) goto loc_825A1A78;
loc_825A1A08:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a1a24
	if (cr6.eq) goto loc_825A1A24;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
loc_825A1A24:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a1a40
	if (cr6.eq) goto loc_825A1A40;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
loc_825A1A40:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a1a5c
	if (cr6.eq) goto loc_825A1A5C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
loc_825A1A5C:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a1a78
	if (cr6.eq) goto loc_825A1A78;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
loc_825A1A78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825A1A84"))) PPC_WEAK_FUNC(sub_825A1A84);
PPC_FUNC_IMPL(__imp__sub_825A1A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1A88"))) PPC_WEAK_FUNC(sub_825A1A88);
PPC_FUNC_IMPL(__imp__sub_825A1A88) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// lis r11,-32688
	r11.s64 = -2142240768;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// ori r11,r11,22
	r11.u64 = r11.u64 | 22;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x825a1af8
	if (cr6.eq) goto loc_825A1AF8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
loc_825A1AF8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a1b50
	if (cr6.eq) goto loc_825A1B50;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a1b40
	if (cr6.eq) goto loc_825A1B40;
	// bl 0x825aaa58
	sub_825AAA58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// bl 0x825aa7a8
	sub_825AA7A8(ctx, base);
loc_825A1B40:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// bl 0x825aa7a8
	sub_825AA7A8(ctx, base);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_825A1B50:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 568);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825aa740
	sub_825AA740(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, r11.u32);
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// bl 0x825ab948
	sub_825AB948(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x825a1c0c
	if (cr6.eq) goto loc_825A1C0C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r11,r11,31832
	r11.s64 = r11.s64 + 31832;
	// addi r10,r10,20056
	ctx.r10.s64 = ctx.r10.s64 + 20056;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x825a1bdc
	if (!cr6.eq) goto loc_825A1BDC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,31824
	r11.s64 = r11.s64 + 31824;
	// b 0x825a1bec
	goto loc_825A1BEC;
loc_825A1BDC:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825a1bf0
	if (!cr6.eq) goto loc_825A1BF0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,31816
	r11.s64 = r11.s64 + 31816;
loc_825A1BEC:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
loc_825A1BF0:
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x825aa228
	sub_825AA228(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
loc_825A1C0C:
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,608(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// addi r10,r11,68
	ctx.r10.s64 = r11.s64 + 68;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r11,64
	ctx.r9.s64 = r11.s64 + 64;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,544(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 544);
	// lwz r6,120(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 120);
	// bl 0x825abe20
	sub_825ABE20(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32166
	r11.s64 = -2108030976;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// addi r6,r5,60
	ctx.r6.s64 = ctx.r5.s64 + 60;
	// addi r4,r11,5304
	ctx.r4.s64 = r11.s64 + 5304;
	// bl 0x825a9f10
	sub_825A9F10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	r11.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r30,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, r30.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r28,76(r11)
	PPC_STORE_U32(r11.u32 + 76, r28.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,60(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x825a1410
	sub_825A1410(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// lwz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// bl 0x825aa0d8
	sub_825AA0D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825aa740
	sub_825AA740(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a1d20
	if (cr6.lt) goto loc_825A1D20;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r5,r5,80
	ctx.r5.u64 = ctx.r5.u64 | 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// stb r29,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r29.u8);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x825aa0d8
	sub_825AA0D8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x825a1d38
	if (!cr6.lt) goto loc_825A1D38;
loc_825A1D20:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a1d38
	if (cr6.eq) goto loc_825A1D38;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,572(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 572);
	// bl 0x825aa7a8
	sub_825AA7A8(ctx, base);
loc_825A1D38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825A1D44"))) PPC_WEAK_FUNC(sub_825A1D44);
PPC_FUNC_IMPL(__imp__sub_825A1D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A1D48"))) PPC_WEAK_FUNC(sub_825A1D48);
PPC_FUNC_IMPL(__imp__sub_825A1D48) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x825a1da0
	if (!cr6.eq) goto loc_825A1DA0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a1e20
	if (cr6.lt) goto loc_825A1E20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259fed0
	sub_8259FED0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
loc_825A1DA0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a1dc4
	if (cr6.eq) goto loc_825A1DC4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825a1e20
	if (cr6.eq) goto loc_825A1E20;
loc_825A1DC4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a1a88
	sub_825A1A88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a1e20
	if (cr6.lt) goto loc_825A1E20;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a1e20
	if (cr6.lt) goto loc_825A1E20;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a1e20
	if (cr6.lt) goto loc_825A1E20;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	r11.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
loc_825A1E20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825A1E28"))) PPC_WEAK_FUNC(sub_825A1E28);
PPC_FUNC_IMPL(__imp__sub_825A1E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r18{};
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = r30.u32 & 0xFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825a1e74
	if (!cr6.eq) goto loc_825A1E74;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
loc_825A1E74:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r11,r11,22
	r11.u64 = r11.u64 | 22;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x825a1ed4
	if (cr6.eq) goto loc_825A1ED4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
loc_825A1ED4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a1ef8
	if (!cr6.eq) goto loc_825A1EF8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a1a88
	sub_825A1A88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
loc_825A1EF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x825a1f70
	if (cr6.eq) goto loc_825A1F70;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a1f70
	if (cr6.eq) goto loc_825A1F70;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// beq cr6,0x825a1f70
	if (cr6.eq) goto loc_825A1F70;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x825a1f70
	if (cr6.eq) goto loc_825A1F70;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x825a20dc
	if (cr6.gt) goto loc_825A20DC;
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,8032
	r12.s64 = r12.s64 + 8032;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_825A1F70;
	case 1:
		goto loc_825A1F80;
	case 2:
		goto loc_825A1F70;
	case 3:
		goto loc_825A1FA0;
	default:
		__builtin_unreachable();
	}
	// lwz r18,8048(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 8048);
	// lwz r18,8064(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 8064);
	// lwz r18,8048(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 8048);
	// lwz r18,8096(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 8096);
loc_825A1F70:
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,160
	ctx.r3.u64 = ctx.r3.u64 | 160;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
loc_825A1F80:
	// li r11,2
	r11.s64 = 2;
	// li r27,1
	r27.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r30,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r30.u8);
	// b 0x825a2014
	goto loc_825A2014;
loc_825A1FA0:
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// lbz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r11,2
	r11.s64 = 2;
	// li r27,1
	r27.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stb r30,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r30.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r28,20(r11)
	r28.u64 = PPC_LOAD_U8(r11.u32 + 20);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// bl 0x8259fed0
	sub_8259FED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_825A2014:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x825a20dc
	if (cr6.gt) goto loc_825A20DC;
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,8252
	r12.s64 = r12.s64 + 8252;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_825A204C;
	case 1:
		goto loc_825A1F70;
	case 2:
		goto loc_825A206C;
	case 3:
		goto loc_825A1F70;
	default:
		__builtin_unreachable();
	}
	// lwz r18,8268(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 8268);
	// lwz r18,8048(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 8048);
	// lwz r18,8300(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 8300);
	// lwz r18,8048(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 8048);
loc_825A204C:
	// li r11,3
	r11.s64 = 3;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r27.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r28,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r28.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
loc_825A206C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259fed0
	sub_8259FED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a1a88
	sub_825A1A88(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a20e4
	if (cr6.lt) goto loc_825A20E4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r29,20(r11)
	PPC_STORE_U8(r11.u32 + 20, r29.u8);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
loc_825A20DC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_825A20E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825A20EC"))) PPC_WEAK_FUNC(sub_825A20EC);
PPC_FUNC_IMPL(__imp__sub_825A20EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A20F0"))) PPC_WEAK_FUNC(sub_825A20F0);
PPC_FUNC_IMPL(__imp__sub_825A20F0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x825a9e60
	sub_825A9E60(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a2138
	if (cr6.lt) goto loc_825A2138;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x825a1898
	sub_825A1898(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825a2158
	if (!cr6.lt) goto loc_825A2158;
loc_825A2138:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x825aa458
	sub_825AA458(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_825A2158:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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

__attribute__((alias("__imp__sub_825A2170"))) PPC_WEAK_FUNC(sub_825A2170);
PPC_FUNC_IMPL(__imp__sub_825A2170) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r11,r11,31832
	r11.s64 = r11.s64 + 31832;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x825a23ac
	if (cr6.eq) goto loc_825A23AC;
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x825a23ac
	if (cr6.gt) goto loc_825A23AC;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a23ac
	if (cr6.eq) goto loc_825A23AC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa3a8
	sub_825AA3A8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2364
	if (cr6.lt) goto loc_825A2364;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_825A21EC:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x825a21ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_825A21EC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r7,608(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// lwz r5,524(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 524);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x825ac470
	sub_825AC470(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2364
	if (cr6.lt) goto loc_825A2364;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cntlzw r10,r27
	ctx.r10.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// addi r11,r11,31848
	r11.s64 = r11.s64 + 31848;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r29,1
	r29.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// xori r11,r10,1
	r11.u64 = ctx.r10.u64 ^ 1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r11,r11,11,0,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x825a0e68
	sub_825A0E68(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,552(r31)
	PPC_STORE_U32(r31.u32 + 552, ctx.r3.u32);
	// bne cr6,0x825a226c
	if (!cr6.eq) goto loc_825A226C;
	// lis r30,-32688
	r30.s64 = -2142240768;
	// ori r30,r30,186
	r30.u64 = r30.u64 | 186;
	// b 0x825a2364
	goto loc_825A2364;
loc_825A226C:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825aa228
	sub_825AA228(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2364
	if (cr6.lt) goto loc_825A2364;
	// lis r11,-32166
	r11.s64 = -2108030976;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,2112
	ctx.r5.s64 = r11.s64 + 2112;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x825a9ed0
	sub_825A9ED0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2364
	if (cr6.lt) goto loc_825A2364;
	// lis r11,-32166
	r11.s64 = -2108030976;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r29,636(r31)
	PPC_STORE_U32(r31.u32 + 636, r29.u32);
	// addi r5,r11,2112
	ctx.r5.s64 = r11.s64 + 2112;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x825a9ed0
	sub_825A9ED0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2364
	if (cr6.lt) goto loc_825A2364;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// lis r11,-32166
	r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,2112
	ctx.r5.s64 = r11.s64 + 2112;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r10,640(r31)
	PPC_STORE_U32(r31.u32 + 640, ctx.r10.u32);
	// bl 0x825a9ed0
	sub_825A9ED0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2364
	if (cr6.lt) goto loc_825A2364;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// lis r11,-32166
	r11.s64 = -2108030976;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,2112
	ctx.r5.s64 = r11.s64 + 2112;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r10,644(r31)
	PPC_STORE_U32(r31.u32 + 644, ctx.r10.u32);
	// bl 0x825a9ed0
	sub_825A9ED0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2364
	if (cr6.lt) goto loc_825A2364;
	// li r11,5
	r11.s64 = 5;
	// cntlzw r10,r25
	ctx.r10.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// rlwinm r5,r10,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,648(r31)
	PPC_STORE_U32(r31.u32 + 648, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259fa88
	sub_8259FA88(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x825a239c
	if (!cr6.lt) goto loc_825A239C;
loc_825A2364:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a239c
	if (cr6.eq) goto loc_825A239C;
	// bl 0x825ac300
	sub_825AC300(ctx, base);
	// lwz r11,548(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825a238c
	if (!cr6.eq) goto loc_825A238C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,548(r31)
	PPC_STORE_U32(r31.u32 + 548, r11.u32);
loc_825A238C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
loc_825A239C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a0f38
	sub_825A0F38(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd3c
	return;
loc_825A23AC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_825A23B8"))) PPC_WEAK_FUNC(sub_825A23B8);
PPC_FUNC_IMPL(__imp__sub_825A23B8) {
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
	// li r27,0
	r27.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// beq cr6,0x825a2584
	if (cr6.eq) goto loc_825A2584;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a2584
	if (cr6.eq) goto loc_825A2584;
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// cmplwi cr6,r11,126
	cr6.compare<uint32_t>(r11.u32, 126, xer);
	// bgt cr6,0x825a2584
	if (cr6.gt) goto loc_825A2584;
	// lwz r11,528(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a2584
	if (cr6.eq) goto loc_825A2584;
	// li r5,796
	ctx.r5.s64 = 796;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// clrlwi r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2574
	if (cr6.lt) goto loc_825A2574;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825a2584
	if (!cr6.eq) goto loc_825A2584;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,128(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// lwz r7,4(r26)
	ctx.r7.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r11,104(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a24a8
	if (cr6.eq) goto loc_825A24A8;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x825a24a8
	if (cr6.eq) goto loc_825A24A8;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825A2484:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lhzx r6,r6,r9
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r9.u32);
	// cmplw cr6,r28,r6
	cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, xer);
	// beq cr6,0x825a24f8
	if (cr6.eq) goto loc_825A24F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x825a2484
	if (cr6.lt) goto loc_825A2484;
loc_825A24A8:
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// lwz r11,28(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// ori r9,r10,52429
	ctx.r9.u64 = ctx.r10.u64 | 52429;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mulhwu r11,r11,r9
	r11.u64 = (uint64_t(r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_825A24C4:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a2508
	if (cr6.eq) goto loc_825A2508;
	// ld r3,64(r11)
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + 64);
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x825a2508
	if (cr6.eq) goto loc_825A2508;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfd f0,31856(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + 31856);
	// fdiv f0,f0,f1
	f0.f64 = f0.f64 / ctx.f1.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// b 0x825a2510
	goto loc_825A2510;
loc_825A24F8:
	// rlwinm r11,r10,3,13,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7FFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x825a24c4
	goto loc_825A24C4;
loc_825A2508:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_825A2510:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// addi r5,r31,790
	ctx.r5.s64 = r31.s64 + 790;
	// addi r4,r31,792
	ctx.r4.s64 = r31.s64 + 792;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// sth r11,788(r31)
	PPC_STORE_U16(r31.u32 + 788, r11.u16);
	// bl 0x825a0c10
	sub_825A0C10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2574
	if (cr6.lt) goto loc_825A2574;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r31,20
	ctx.r3.s64 = r31.s64 + 20;
	// addi r4,r11,31048
	ctx.r4.s64 = r11.s64 + 31048;
	// li r5,768
	ctx.r5.s64 = 768;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_825A2574:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a0f38
	sub_825A0F38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_825A2584:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825A2590"))) PPC_WEAK_FUNC(sub_825A2590);
PPC_FUNC_IMPL(__imp__sub_825A2590) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bne cr6,0x825a25cc
	if (!cr6.eq) goto loc_825A25CC;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x825a2674
	goto loc_825A2674;
loc_825A25CC:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x825aa850
	sub_825AA850(ctx, base);
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r30,r11,22
	r30.u64 = r11.u64 | 22;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x825a2664
	if (cr6.eq) goto loc_825A2664;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a2670
	if (cr6.lt) goto loc_825A2670;
loc_825A25F8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a2670
	if (cr6.lt) goto loc_825A2670;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x825a2648
	if (!cr6.eq) goto loc_825A2648;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825a2648
	if (!cr6.eq) goto loc_825A2648;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lwz r3,572(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 572);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a2670
	if (cr6.lt) goto loc_825A2670;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x825aba78
	sub_825ABA78(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a2670
	if (cr6.lt) goto loc_825A2670;
loc_825A2648:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x825aa8c0
	sub_825AA8C0(ctx, base);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// bne cr6,0x825a25f8
	if (!cr6.eq) goto loc_825A25F8;
loc_825A2664:
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,568(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 568);
	// bl 0x825aa930
	sub_825AA930(ctx, base);
loc_825A2670:
	// bl 0x825a0f38
	sub_825A0F38(ctx, base);
loc_825A2674:
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

__attribute__((alias("__imp__sub_825A268C"))) PPC_WEAK_FUNC(sub_825A268C);
PPC_FUNC_IMPL(__imp__sub_825A268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2690"))) PPC_WEAK_FUNC(sub_825A2690);
PPC_FUNC_IMPL(__imp__sub_825A2690) {
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
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	r24.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,508
	ctx.r5.s64 = 508;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,228
	ctx.r3.s64 = ctx.r1.s64 + 228;
	// stw r24,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, r24.u32);
	// mr r30,r24
	r30.u64 = r24.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r24.u8);
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r25,r24
	r25.u64 = r24.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a2a64
	if (cr6.eq) goto loc_825A2A64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a2a64
	if (cr6.eq) goto loc_825A2A64;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825a2a64
	if (cr6.eq) goto loc_825A2A64;
	// lwz r11,528(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a2a64
	if (cr6.eq) goto loc_825A2A64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r11,r29
	r11.u64 = r29.u64;
	// li r23,1
	r23.s64 = 1;
	// lhz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 36);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ble cr6,0x825a277c
	if (!cr6.gt) goto loc_825A277C;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// li r7,2
	ctx.r7.s64 = 2;
loc_825A272C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x825a274c
	if (!cr6.eq) goto loc_825A274C;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stwx r23,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r23.u32);
	// b 0x825a2768
	goto loc_825A2768;
loc_825A274C:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// bne cr6,0x825a2764
	if (!cr6.eq) goto loc_825A2764;
	// stwx r7,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r7.u32);
	// b 0x825a2768
	goto loc_825A2768;
loc_825A2764:
	// stwx r24,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r24.u32);
loc_825A2768:
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x825a272c
	if (cr6.lt) goto loc_825A272C;
loc_825A277C:
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_825A2784:
	// addi r10,r11,3
	ctx.r10.s64 = r11.s64 + 3;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lwzx r9,r10,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// lwzx r10,r7,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x825a27cc
	if (cr6.eq) goto loc_825A27CC;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x825a27b4
	if (!cr6.eq) goto loc_825A27B4;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// beq cr6,0x825a2a64
	if (cr6.eq) goto loc_825A2A64;
loc_825A27B4:
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825a27c4
	if (!cr6.eq) goto loc_825A27C4;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// beq cr6,0x825a2a64
	if (cr6.eq) goto loc_825A2A64;
loc_825A27C4:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r8,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r8.u8);
loc_825A27CC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// blt cr6,0x825a2784
	if (cr6.lt) goto loc_825A2784;
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_825A27E8:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r27,r11
	r11.u64 = PPC_LOAD_U8(r27.u32 + r11.u32);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x825a2a14
	if (!cr6.eq) goto loc_825A2A14;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2a54
	if (cr6.lt) goto loc_825A2A54;
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r31,128
	cr6.compare<uint32_t>(r31.u32, 128, xer);
	// bge cr6,0x825a293c
	if (!cr6.lt) goto loc_825A293C;
loc_825A282C:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x825a2928
	if (!cr6.eq) goto loc_825A2928;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2a54
	if (cr6.lt) goto loc_825A2A54;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x825a2928
	if (!cr6.eq) goto loc_825A2928;
	// addi r11,r27,3
	r11.s64 = r27.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x825a2890
	if (cr6.eq) goto loc_825A2890;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x825a28d4
	if (!cr6.eq) goto loc_825A28D4;
loc_825A2890:
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a28d4
	if (!cr6.eq) goto loc_825A28D4;
	// addi r11,r31,3
	r11.s64 = r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a28d4
	if (!cr6.eq) goto loc_825A28D4;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825a2958
	if (cr6.eq) goto loc_825A2958;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x825a2958
	if (cr6.eq) goto loc_825A2958;
loc_825A28D4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x825a2928
	if (!cr6.eq) goto loc_825A2928;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825a28f8
	if (cr6.eq) goto loc_825A28F8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825a2928
	if (!cr6.eq) goto loc_825A2928;
loc_825A28F8:
	// addi r11,r31,3
	r11.s64 = r31.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825a2914
	if (cr6.eq) goto loc_825A2914;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825a2928
	if (!cr6.eq) goto loc_825A2928;
loc_825A2914:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a29a0
	if (cr6.eq) goto loc_825A29A0;
loc_825A2928:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmplwi cr6,r31,128
	cr6.compare<uint32_t>(r31.u32, 128, xer);
	// blt cr6,0x825a282c
	if (cr6.lt) goto loc_825A282C;
loc_825A293C:
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a29e8
	if (!cr6.eq) goto loc_825A29E8;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x825a29f8
	goto loc_825A29F8;
loc_825A2958:
	// clrlwi r31,r29,24
	r31.u64 = r29.u32 & 0xFF;
	// addi r11,r1,224
	r11.s64 = ctx.r1.s64 + 224;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x825a1e28
	sub_825A1E28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2a54
	if (cr6.lt) goto loc_825A2A54;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stbx r24,r31,r11
	PPC_STORE_U8(r31.u32 + r11.u32, r24.u8);
	// b 0x825a2a14
	goto loc_825A2A14;
loc_825A29A0:
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// bl 0x825a1e28
	sub_825A1E28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2a54
	if (cr6.lt) goto loc_825A2A54;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stbx r24,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, r24.u8);
	// b 0x825a2a14
	goto loc_825A2A14;
loc_825A29E8:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_825A29F8:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825a1d48
	sub_825A1D48(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a2a54
	if (cr6.lt) goto loc_825A2A54;
loc_825A2A14:
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// clrlwi r26,r11,24
	r26.u64 = r11.u32 & 0xFF;
	// mr r27,r26
	r27.u64 = r26.u64;
	// cmplwi cr6,r27,128
	cr6.compare<uint32_t>(r27.u32, 128, xer);
	// blt cr6,0x825a27e8
	if (cr6.lt) goto loc_825A27E8;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_825A2A2C:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// stwx r9,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, ctx.r9.u32);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// blt cr6,0x825a2a2c
	if (cr6.lt) goto loc_825A2A2C;
loc_825A2A54:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a0f38
	sub_825A0F38(ctx, base);
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x8239bd34
	return;
loc_825A2A64:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_825A2A70"))) PPC_WEAK_FUNC(sub_825A2A70);
PPC_FUNC_IMPL(__imp__sub_825A2A70) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a2b70
	if (cr6.eq) goto loc_825A2B70;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a2b70
	if (cr6.eq) goto loc_825A2B70;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825a2b70
	if (cr6.eq) goto loc_825A2B70;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825a2b70
	if (cr6.eq) goto loc_825A2B70;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825a2b70
	if (cr6.eq) goto loc_825A2B70;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,528(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a2b70
	if (cr6.eq) goto loc_825A2B70;
	// lwz r3,536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a2b04
	if (!cr6.eq) goto loc_825A2B04;
	// lis r3,-32688
	ctx.r3.s64 = -2142240768;
	// ori r3,r3,168
	ctx.r3.u64 = ctx.r3.u64 | 168;
	// bl 0x825a0f38
	sub_825A0F38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
loc_825A2B04:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825ab3a8
	sub_825AB3A8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a2b64
	if (cr6.lt) goto loc_825A2B64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a2b64
	if (cr6.lt) goto loc_825A2B64;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825a2b70
	if (!cr6.eq) goto loc_825A2B70;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a0490
	sub_825A0490(ctx, base);
loc_825A2B64:
	// bl 0x825a0f38
	sub_825A0F38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
loc_825A2B70:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_825A2B7C"))) PPC_WEAK_FUNC(sub_825A2B7C);
PPC_FUNC_IMPL(__imp__sub_825A2B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2B80"))) PPC_WEAK_FUNC(sub_825A2B80);
PPC_FUNC_IMPL(__imp__sub_825A2B80) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,255
	r11.s64 = 255;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a2cbc
	if (cr6.eq) goto loc_825A2CBC;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825a2cbc
	if (cr6.eq) goto loc_825A2CBC;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// bgt cr6,0x825a2cbc
	if (cr6.gt) goto loc_825A2CBC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825a2cbc
	if (cr6.eq) goto loc_825A2CBC;
	// lwz r10,528(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 528);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a2cbc
	if (cr6.eq) goto loc_825A2CBC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8259ff68
	sub_8259FF68(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x825a2c7c
	if (cr6.lt) goto loc_825A2C7C;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// beq cr6,0x825a2c60
	if (cr6.eq) goto loc_825A2C60;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825a2c60
	if (!cr6.gt) goto loc_825A2C60;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x825a2c60
	if (!cr6.eq) goto loc_825A2C60;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 14);
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_825A2C60:
	// lis r11,80
	r11.s64 = 5242880;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bne cr6,0x825a2c7c
	if (!cr6.eq) goto loc_825A2C7C;
	// li r3,33
	ctx.r3.s64 = 33;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
loc_825A2C7C:
	// lis r11,-32688
	r11.s64 = -2142240768;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x825a2ca8
	if (cr6.eq) goto loc_825A2CA8;
	// lis r11,-32688
	r11.s64 = -2142240768;
	// ori r11,r11,11
	r11.u64 = r11.u64 | 11;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x825a2ca8
	if (cr6.eq) goto loc_825A2CA8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825a0f38
	sub_825A0F38(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
loc_825A2CA8:
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// li r3,35
	ctx.r3.s64 = 35;
	// stw r27,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
loc_825A2CBC:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825A2CC8"))) PPC_WEAK_FUNC(sub_825A2CC8);
PPC_FUNC_IMPL(__imp__sub_825A2CC8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// sth r28,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r28.u16);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
	// beq cr6,0x825a2f00
	if (cr6.eq) goto loc_825A2F00;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825a2f00
	if (cr6.eq) goto loc_825A2F00;
	// lwz r11,528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a2f00
	if (cr6.eq) goto loc_825A2F00;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpld cr6,r27,r11
	cr6.compare<uint64_t>(r27.u64, r11.u64, xer);
	// bgt cr6,0x825a2f00
	if (cr6.gt) goto loc_825A2F00;
	// std r28,0(r26)
	PPC_STORE_U64(r26.u32 + 0, r28.u64);
	// bl 0x825a0500
	sub_825A0500(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a2ed4
	if (cr6.lt) goto loc_825A2ED4;
	// lis r11,-32688
	r11.s64 = -2142240768;
	// li r23,1
	r23.s64 = 1;
	// ori r25,r11,168
	r25.u64 = r11.u64 | 168;
loc_825A2D50:
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a2b80
	sub_825A2B80(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a2ec0
	if (cr6.eq) goto loc_825A2EC0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// bl 0x825aa828
	sub_825AA828(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a2ed4
	if (cr6.lt) goto loc_825A2ED4;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x825a2df4
	if (!cr6.eq) goto loc_825A2DF4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a0c10
	sub_825A0C10(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a2ed4
	if (cr6.lt) goto loc_825A2ED4;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mullw r11,r9,r10
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x825a2e00
	goto loc_825A2E00;
loc_825A2DF4:
	// subf r11,r23,r11
	r11.s64 = r11.s64 - r23.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r29,r11,7,19,19
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1000;
loc_825A2E00:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa3a8
	sub_825AA3A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a2ed4
	if (cr6.lt) goto loc_825A2ED4;
loc_825A2E20:
	// lwz r3,536(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 536);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x825a2e34
	if (!cr6.eq) goto loc_825A2E34;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// b 0x825a2e6c
	goto loc_825A2E6C;
loc_825A2E34:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825aad90
	sub_825AAD90(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a2e6c
	if (cr6.lt) goto loc_825A2E6C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a2e6c
	if (!cr6.eq) goto loc_825A2E6C;
	// stw r28,536(r30)
	PPC_STORE_U32(r30.u32 + 536, r28.u32);
loc_825A2E6C:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a2ed4
	if (cr6.lt) goto loc_825A2ED4;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// cmpd cr6,r11,r27
	cr6.compare<int64_t>(r11.s64, r27.s64, xer);
	// blt cr6,0x825a2e98
	if (cr6.lt) goto loc_825A2E98;
	// lwz r10,556(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a2e94
	if (cr6.eq) goto loc_825A2E94;
	// std r11,0(r26)
	PPC_STORE_U64(r26.u32 + 0, r11.u64);
loc_825A2E94:
	// stw r28,556(r30)
	PPC_STORE_U32(r30.u32 + 556, r28.u32);
loc_825A2E98:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a2e20
	if (!cr6.eq) goto loc_825A2E20;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a2ed4
	if (cr6.lt) goto loc_825A2ED4;
loc_825A2EC0:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x825a2ed4
	if (!cr6.eq) goto loc_825A2ED4;
	// lwz r11,556(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 556);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a2d50
	if (!cr6.eq) goto loc_825A2D50;
loc_825A2ED4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a2ef0
	if (cr6.eq) goto loc_825A2EF0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,608(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 608);
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x825aa410
	sub_825AA410(ctx, base);
loc_825A2EF0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a0f38
	sub_825A0F38(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd34
	return;
loc_825A2F00:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_825A2F0C"))) PPC_WEAK_FUNC(sub_825A2F0C);
PPC_FUNC_IMPL(__imp__sub_825A2F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A2F10"))) PPC_WEAK_FUNC(sub_825A2F10);
PPC_FUNC_IMPL(__imp__sub_825A2F10) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a2f64
	if (cr6.eq) goto loc_825A2F64;
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x825a2f64
	if (cr6.lt) goto loc_825A2F64;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(r11.u32, 127, xer);
	// bgt cr6,0x825a2f64
	if (cr6.gt) goto loc_825A2F64;
	// lwz r11,528(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a2f64
	if (cr6.eq) goto loc_825A2F64;
	// li r5,1
	ctx.r5.s64 = 1;
	// clrlwi r4,r4,24
	ctx.r4.u64 = ctx.r4.u32 & 0xFF;
	// bl 0x825a0690
	sub_825A0690(ctx, base);
	// bl 0x825a0f38
	sub_825A0F38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825A2F64:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2F78"))) PPC_WEAK_FUNC(sub_825A2F78);
PPC_FUNC_IMPL(__imp__sub_825A2F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,31864
	r11.s64 = r11.s64 + 31864;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x825ac600
	sub_825AC600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A2F88"))) PPC_WEAK_FUNC(sub_825A2F88);
PPC_FUNC_IMPL(__imp__sub_825A2F88) {
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
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// bl 0x825ac608
	sub_825AC608(ctx, base);
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

__attribute__((alias("__imp__sub_825A2FE0"))) PPC_WEAK_FUNC(sub_825A2FE0);
PPC_FUNC_IMPL(__imp__sub_825A2FE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,284(r3)
	PPC_STORE_U32(ctx.r3.u32 + 284, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2FE8"))) PPC_WEAK_FUNC(sub_825A2FE8);
PPC_FUNC_IMPL(__imp__sub_825A2FE8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2FF0"))) PPC_WEAK_FUNC(sub_825A2FF0);
PPC_FUNC_IMPL(__imp__sub_825A2FF0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A2FF8"))) PPC_WEAK_FUNC(sub_825A2FF8);
PPC_FUNC_IMPL(__imp__sub_825A2FF8) {
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
	// bl 0x825ac698
	sub_825AC698(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r11,r11,31864
	r11.s64 = r11.s64 + 31864;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r11.u32);
	// bl 0x825ac608
	sub_825AC608(ctx, base);
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

__attribute__((alias("__imp__sub_825A3064"))) PPC_WEAK_FUNC(sub_825A3064);
PPC_FUNC_IMPL(__imp__sub_825A3064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A3068"))) PPC_WEAK_FUNC(sub_825A3068);
PPC_FUNC_IMPL(__imp__sub_825A3068) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31864
	r11.s64 = r11.s64 + 31864;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x825ac600
	sub_825AC600(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a30b4
	if (cr6.eq) goto loc_825A30B4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32824
	ctx.r4.u64 = ctx.r4.u64 | 32824;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A30B4:
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

__attribute__((alias("__imp__sub_825A30CC"))) PPC_WEAK_FUNC(sub_825A30CC);
PPC_FUNC_IMPL(__imp__sub_825A30CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A30D0"))) PPC_WEAK_FUNC(sub_825A30D0);
PPC_FUNC_IMPL(__imp__sub_825A30D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A30F0"))) PPC_WEAK_FUNC(sub_825A30F0);
PPC_FUNC_IMPL(__imp__sub_825A30F0) {
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
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825a3130
	if (cr6.eq) goto loc_825A3130;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825A3130:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3148"))) PPC_WEAK_FUNC(sub_825A3148);
PPC_FUNC_IMPL(__imp__sub_825A3148) {
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
	// bl 0x825a30d0
	sub_825A30D0(ctx, base);
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
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

__attribute__((alias("__imp__sub_825A3190"))) PPC_WEAK_FUNC(sub_825A3190);
PPC_FUNC_IMPL(__imp__sub_825A3190) {
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
	// addi r3,r3,124
	ctx.r3.s64 = ctx.r3.s64 + 124;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825a31d0
	if (cr6.eq) goto loc_825A31D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825A31D0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A31E8"))) PPC_WEAK_FUNC(sub_825A31E8);
PPC_FUNC_IMPL(__imp__sub_825A31E8) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r11,124
	ctx.r3.s64 = r11.s64 + 124;
	// addi r11,r11,208
	r11.s64 = r11.s64 + 208;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825a3230
	if (cr6.eq) goto loc_825A3230;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825A3230:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3248"))) PPC_WEAK_FUNC(sub_825A3248);
PPC_FUNC_IMPL(__imp__sub_825A3248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x8239bcf8
	// li r28,0
	r28.s64 = 0;
	// rlwinm r29,r5,31,17,31
	r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFF;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r31,r28
	r31.u64 = r28.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a3334
	if (cr6.eq) goto loc_825A3334;
loc_825A326C:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825a329c
	if (!cr6.eq) goto loc_825A329C;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// blt cr6,0x825a328c
	if (cr6.lt) goto loc_825A328C;
	// cmplwi cr6,r11,57
	cr6.compare<uint32_t>(r11.u32, 57, xer);
	// ble cr6,0x825a329c
	if (!cr6.gt) goto loc_825A329C;
loc_825A328C:
	// clrlwi r11,r7,16
	r11.u64 = ctx.r7.u32 & 0xFFFF;
	// mr r30,r28
	r30.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
loc_825A329C:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x825a32bc
	if (!cr6.eq) goto loc_825A32BC;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a32bc
	if (cr6.eq) goto loc_825A32BC;
	// rlwinm r11,r7,2,14,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// stwx r28,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, r28.u32);
loc_825A32BC:
	// clrlwi r5,r30,24
	ctx.r5.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// bne cr6,0x825a32f4
	if (!cr6.eq) goto loc_825A32F4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a32f4
	if (cr6.eq) goto loc_825A32F4;
	// rlwinm r10,r7,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x3FFFC;
	// lbz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// lwzx r11,r10,r6
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, r11.u32);
loc_825A32F4:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x825a3314
	if (!cr6.eq) goto loc_825A3314;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// beq cr6,0x825a3314
	if (cr6.eq) goto loc_825A3314;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825a333c
	if (!cr6.eq) goto loc_825A333C;
loc_825A3314:
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x825a326c
	if (cr6.lt) goto loc_825A326C;
loc_825A3334:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239bd48
	return;
loc_825A333C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825A3344"))) PPC_WEAK_FUNC(sub_825A3344);
PPC_FUNC_IMPL(__imp__sub_825A3344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A3348"))) PPC_WEAK_FUNC(sub_825A3348);
PPC_FUNC_IMPL(__imp__sub_825A3348) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x825a3380
	if (!cr6.eq) goto loc_825A3380;
loc_825A3374:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
loc_825A3380:
	// clrlwi r25,r6,16
	r25.u64 = ctx.r6.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r25,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// rlwinm r6,r29,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 31) & 0x7FFFFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x825a3490
	if (cr6.eq) goto loc_825A3490;
loc_825A33A4:
	// lbz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// cmplwi cr6,r8,44
	cr6.compare<uint32_t>(ctx.r8.u32, 44, xer);
	// bne cr6,0x825a33f0
	if (!cr6.eq) goto loc_825A33F0;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825a33d0
	if (!cr6.eq) goto loc_825A33D0;
	// rlwinm r11,r30,2,14,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
loc_825A33D0:
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
	// addi r10,r25,-1
	ctx.r10.s64 = r25.s64 + -1;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x825a3374
	if (!cr6.lt) goto loc_825A3374;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r28,0
	r28.s64 = 0;
	// clrlwi r30,r11,16
	r30.u64 = r11.u32 & 0xFFFF;
	// b 0x825a3474
	goto loc_825A3474;
loc_825A33F0:
	// cmplwi cr6,r8,45
	cr6.compare<uint32_t>(ctx.r8.u32, 45, xer);
	// bne cr6,0x825a340c
	if (!cr6.eq) goto loc_825A340C;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a3374
	if (!cr6.eq) goto loc_825A3374;
	// li r27,1
	r27.s64 = 1;
	// b 0x825a3474
	goto loc_825A3474;
loc_825A340C:
	// cmplwi cr6,r8,48
	cr6.compare<uint32_t>(ctx.r8.u32, 48, xer);
	// blt cr6,0x825a344c
	if (cr6.lt) goto loc_825A344C;
	// cmplwi cr6,r8,57
	cr6.compare<uint32_t>(ctx.r8.u32, 57, xer);
	// bgt cr6,0x825a344c
	if (cr6.gt) goto loc_825A344C;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r28,r11,16
	r28.u64 = r11.u32 & 0xFFFF;
	// lwzx r11,r10,r31
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, r11.u32);
	// b 0x825a3474
	goto loc_825A3474;
loc_825A344C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x825a3374
	if (!cr6.eq) goto loc_825A3374;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825a3474
	if (!cr6.eq) goto loc_825A3474;
	// rlwinm r11,r30,2,14,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0x3FFFC;
	// li r27,0
	r27.s64 = 0;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
loc_825A3474:
	// clrlwi r11,r7,16
	r11.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x825a33a4
	if (cr6.lt) goto loc_825A33A4;
loc_825A3490:
	// addi r11,r25,-1
	r11.s64 = r25.s64 + -1;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_825A34B0"))) PPC_WEAK_FUNC(sub_825A34B0);
PPC_FUNC_IMPL(__imp__sub_825A34B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r18{};
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
	// lwz r11,392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bgt cr6,0x825a3668
	if (cr6.gt) goto loc_825A3668;
	// li r27,4
	r27.s64 = 4;
	// li r30,0
	r30.s64 = 0;
	// li r24,3
	r24.s64 = 3;
	// li r28,7
	r28.s64 = 7;
	// li r25,5
	r25.s64 = 5;
	// li r26,8
	r26.s64 = 8;
	// li r29,1
	r29.s64 = 1;
loc_825A34EC:
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,13572
	r12.s64 = r12.s64 + 13572;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_825A351C;
	case 1:
		goto loc_825A3578;
	case 2:
		goto loc_825A35DC;
	case 3:
		goto loc_825A3668;
	case 4:
		goto loc_825A3630;
	case 5:
		goto loc_825A3644;
	default:
		__builtin_unreachable();
	}
	// lwz r18,13596(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 13596);
	// lwz r18,13688(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 13688);
	// lwz r18,13788(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 13788);
	// lwz r18,13928(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 13928);
	// lwz r18,13872(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 13872);
	// lwz r18,13892(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 13892);
loc_825A351C:
	// ld r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 48);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// bgt cr6,0x825a3674
	if (cr6.gt) goto loc_825A3674;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// bl 0x825af8b0
	sub_825AF8B0(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x825a3680
	if (cr6.eq) goto loc_825A3680;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825a3694
	if (!cr6.eq) goto loc_825A3694;
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a356c
	if (cr6.eq) goto loc_825A356C;
	// lwz r11,424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a3658
	if (!cr6.eq) goto loc_825A3658;
loc_825A356C:
	// stw r27,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r27.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r30.u32);
	// b 0x825a3658
	goto loc_825A3658;
loc_825A3578:
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// lwz r10,492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x825a3590
	if (cr6.lt) goto loc_825A3590;
	// stw r24,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r24.u32);
	// b 0x825a3658
	goto loc_825A3658;
loc_825A3590:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825afed0
	sub_825AFED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825a3654
	if (!cr6.eq) goto loc_825A3654;
	// lhz r9,498(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 498);
	// lhz r11,518(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 518);
	// lhz r10,496(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 496);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// lbz r9,516(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 516);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// sth r11,544(r31)
	PPC_STORE_U16(r31.u32 + 544, r11.u16);
	// beq cr6,0x825a35d0
	if (cr6.eq) goto loc_825A35D0;
	// stw r25,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r25.u32);
	// stb r30,525(r31)
	PPC_STORE_U8(r31.u32 + 525, r30.u8);
	// b 0x825a3658
	goto loc_825A3658;
loc_825A35D0:
	// stw r26,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r26.u32);
	// stb r29,525(r31)
	PPC_STORE_U8(r31.u32 + 525, r29.u8);
	// b 0x825a3658
	goto loc_825A3658;
loc_825A35DC:
	// lbz r11,500(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x825a3654
	if (!cr6.eq) goto loc_825A3654;
	// lhz r10,544(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 544);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r8,518(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 518);
	// lwz r7,548(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
	// std r10,400(r31)
	PPC_STORE_U64(r31.u32 + 400, ctx.r10.u64);
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - r11.s64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,408(r31)
	PPC_STORE_U64(r31.u32 + 408, ctx.r10.u64);
loc_825A361C:
	// stw r29,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r29.u32);
	// beq cr6,0x825a36a0
	if (cr6.eq) goto loc_825A36A0;
	// li r3,14
	ctx.r3.s64 = 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
loc_825A3630:
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// stw r27,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r27.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
	// b 0x825a3658
	goto loc_825A3658;
loc_825A3644:
	// lbz r11,500(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825a36b4
	if (cr6.eq) goto loc_825A36B4;
loc_825A3654:
	// stw r28,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r28.u32);
loc_825A3658:
	// lwz r11,392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// ble cr6,0x825a34ec
	if (!cr6.gt) goto loc_825A34EC;
loc_825A3668:
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
loc_825A3674:
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
loc_825A3680:
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r3,18
	ctx.r3.s64 = 18;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
loc_825A3694:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
loc_825A36A0:
	// li r11,6
	r11.s64 = 6;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
loc_825A36B4:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// lhz r11,544(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 544);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// sth r30,520(r31)
	PPC_STORE_U16(r31.u32 + 520, r30.u16);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r29,524(r31)
	PPC_STORE_U8(r31.u32 + 524, r29.u8);
	// stw r9,420(r31)
	PPC_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// std r11,400(r31)
	PPC_STORE_U64(r31.u32 + 400, r11.u64);
	// b 0x825a361c
	goto loc_825A361C;
}

__attribute__((alias("__imp__sub_825A36E0"))) PPC_WEAK_FUNC(sub_825A36E0);
PPC_FUNC_IMPL(__imp__sub_825A36E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3700
	if (cr6.eq) goto loc_825A3700;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a3700
	if (cr6.eq) goto loc_825A3700;
	// lhz r11,238(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 238);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, r11.u16);
	// blr 
	return;
loc_825A3700:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3708"))) PPC_WEAK_FUNC(sub_825A3708);
PPC_FUNC_IMPL(__imp__sub_825A3708) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a372c
	if (cr6.eq) goto loc_825A372C;
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a372c
	if (cr6.eq) goto loc_825A372C;
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r4,236(r11)
	PPC_STORE_U16(r11.u32 + 236, ctx.r4.u16);
	// blr 
	return;
loc_825A372C:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3734"))) PPC_WEAK_FUNC(sub_825A3734);
PPC_FUNC_IMPL(__imp__sub_825A3734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A3738"))) PPC_WEAK_FUNC(sub_825A3738);
PPC_FUNC_IMPL(__imp__sub_825A3738) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825a39c0
	if (cr6.eq) goto loc_825A39C0;
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a39c0
	if (cr6.eq) goto loc_825A39C0;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// bl 0x825b07f0
	sub_825B07F0(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// lis r11,9356
	r11.s64 = 613154816;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// ori r27,r11,32768
	r27.u64 = r11.u64 | 32768;
	// stw r28,584(r31)
	PPC_STORE_U32(r31.u32 + 584, r28.u32);
	// beq cr6,0x825a378c
	if (cr6.eq) goto loc_825A378C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r28,224(r31)
	PPC_STORE_U32(r31.u32 + 224, r28.u32);
loc_825A378C:
	// lwz r30,204(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825a37e4
	if (cr6.eq) goto loc_825A37E4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r28,204(r31)
	PPC_STORE_U32(r31.u32 + 204, r28.u32);
loc_825A37E4:
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3894
	if (cr6.eq) goto loc_825A3894;
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3884
	if (cr6.eq) goto loc_825A3884;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_825A3804:
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x825a3804
	if (cr6.lt) goto loc_825A3804;
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// lwz r11,208(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_825A3884:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 208);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r28,208(r31)
	PPC_STORE_U32(r31.u32 + 208, r28.u32);
loc_825A3894:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a395c
	if (cr6.eq) goto loc_825A395C;
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a394c
	if (cr6.eq) goto loc_825A394C;
	// mr r29,r28
	r29.u64 = r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_825A38B4:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a391c
	if (cr6.eq) goto loc_825A391C;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a38dc
	if (cr6.eq) goto loc_825A38DC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_825A38DC:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a390c
	if (cr6.eq) goto loc_825A390C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_825A390C:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
loc_825A391C:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x825a38b4
	if (cr6.lt) goto loc_825A38B4;
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
loc_825A394C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,232(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r28,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r28.u32);
loc_825A395C:
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3970
	if (cr6.eq) goto loc_825A3970;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_825A3970:
	// lwz r30,616(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// stw r28,612(r31)
	PPC_STORE_U32(r31.u32 + 612, r28.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825a39a0
	if (cr6.eq) goto loc_825A39A0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a3994
	if (cr6.eq) goto loc_825A3994;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_825A3994:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_825A39A0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r28,616(r31)
	PPC_STORE_U32(r31.u32 + 616, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r28,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_825A39C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825A39CC"))) PPC_WEAK_FUNC(sub_825A39CC);
PPC_FUNC_IMPL(__imp__sub_825A39CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A39D0"))) PPC_WEAK_FUNC(sub_825A39D0);
PPC_FUNC_IMPL(__imp__sub_825A39D0) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x825a39f8
	if (!cr6.eq) goto loc_825A39F8;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x825a3a44
	goto loc_825A3A44;
loc_825A39F8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825a3738
	sub_825A3738(ctx, base);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// li r3,624
	ctx.r3.s64 = 624;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x825a3a24
	if (!cr6.eq) goto loc_825A3A24;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825a3a44
	goto loc_825A3A44;
loc_825A3A24:
	// li r5,624
	ctx.r5.s64 = 624;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_825A3A44:
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

__attribute__((alias("__imp__sub_825A3A5C"))) PPC_WEAK_FUNC(sub_825A3A5C);
PPC_FUNC_IMPL(__imp__sub_825A3A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A3A60"))) PPC_WEAK_FUNC(sub_825A3A60);
PPC_FUNC_IMPL(__imp__sub_825A3A60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x825a3a80
	if (cr6.eq) goto loc_825A3A80;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,592(r11)
	PPC_STORE_U32(r11.u32 + 592, ctx.r4.u32);
	// stw r10,552(r11)
	PPC_STORE_U32(r11.u32 + 552, ctx.r10.u32);
	// blr 
	return;
loc_825A3A80:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,552(r11)
	PPC_STORE_U32(r11.u32 + 552, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A3A8C"))) PPC_WEAK_FUNC(sub_825A3A8C);
PPC_FUNC_IMPL(__imp__sub_825A3A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A3A90"))) PPC_WEAK_FUNC(sub_825A3A90);
PPC_FUNC_IMPL(__imp__sub_825A3A90) {
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
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// stw r6,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r6.u32);
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r15,r5
	r15.u64 = ctx.r5.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// stw r21,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r21.u32);
	// mr r16,r8
	r16.u64 = ctx.r8.u64;
	// stw r21,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, r21.u32);
	// mr r17,r21
	r17.u64 = r21.u64;
	// stw r21,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, r21.u32);
	// mr r14,r21
	r14.u64 = r21.u64;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x825a43a8
	if (cr6.eq) goto loc_825A43A8;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a43a8
	if (cr6.eq) goto loc_825A43A8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a43a8
	if (cr6.eq) goto loc_825A43A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// sth r10,236(r31)
	PPC_STORE_U16(r31.u32 + 236, ctx.r10.u16);
	// bl 0x825af480
	sub_825AF480(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x825a3b0c
	if (cr6.eq) goto loc_825A3B0C;
loc_825A3B00:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8239bd10
	return;
loc_825A3B0C:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3b00
	if (cr6.eq) goto loc_825A3B00;
	// lhz r11,76(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3b00
	if (cr6.eq) goto loc_825A3B00;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3b00
	if (cr6.eq) goto loc_825A3B00;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3b00
	if (cr6.eq) goto loc_825A3B00;
	// lwz r22,232(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x825a3f48
	if (cr6.eq) goto loc_825A3F48;
	// li r27,80
	r27.s64 = 80;
	// stb r21,166(r1)
	PPC_STORE_U8(ctx.r1.u32 + 166, r21.u8);
	// li r3,107
	ctx.r3.s64 = 107;
	// stb r21,131(r1)
	PPC_STORE_U8(ctx.r1.u32 + 131, r21.u8);
	// li r11,101
	r11.s64 = 101;
	// li r9,87
	ctx.r9.s64 = 87;
	// li r10,77
	ctx.r10.s64 = 77;
	// stb r27,153(r1)
	PPC_STORE_U8(ctx.r1.u32 + 153, r27.u8);
	// li r6,82
	ctx.r6.s64 = 82;
	// stb r3,156(r1)
	PPC_STORE_U8(ctx.r1.u32 + 156, ctx.r3.u8);
	// li r5,65
	ctx.r5.s64 = 65;
	// stb r27,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, r27.u8);
	// li r8,97
	ctx.r8.s64 = 97;
	// stb r3,124(r1)
	PPC_STORE_U8(ctx.r1.u32 + 124, ctx.r3.u8);
	// li r28,47
	r28.s64 = 47;
	// li r29,68
	r29.s64 = 68;
	// stb r9,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r9.u8);
	// li r4,67
	ctx.r4.s64 = 67;
	// stb r10,145(r1)
	PPC_STORE_U8(ctx.r1.u32 + 145, ctx.r10.u8);
	// li r7,114
	ctx.r7.s64 = 114;
	// stb r9,147(r1)
	PPC_STORE_U8(ctx.r1.u32 + 147, ctx.r9.u8);
	// li r23,102
	r23.s64 = 102;
	// stb r10,148(r1)
	PPC_STORE_U8(ctx.r1.u32 + 148, ctx.r10.u8);
	// li r3,103
	ctx.r3.s64 = 103;
	// stb r28,146(r1)
	PPC_STORE_U8(ctx.r1.u32 + 146, r28.u8);
	// li r30,110
	r30.s64 = 110;
	// stb r5,149(r1)
	PPC_STORE_U8(ctx.r1.u32 + 149, ctx.r5.u8);
	// li r24,99
	r24.s64 = 99;
	// stb r29,150(r1)
	PPC_STORE_U8(ctx.r1.u32 + 150, r29.u8);
	// li r27,84
	r27.s64 = 84;
	// stb r6,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r6.u8);
	// li r25,116
	r25.s64 = 116;
	// stb r4,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r4.u8);
	// li r26,118
	r26.s64 = 118;
	// stb r11,154(r1)
	PPC_STORE_U8(ctx.r1.u32 + 154, r11.u8);
	// stb r8,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, ctx.r8.u8);
	// stb r6,157(r1)
	PPC_STORE_U8(ctx.r1.u32 + 157, ctx.r6.u8);
	// stb r11,158(r1)
	PPC_STORE_U8(ctx.r1.u32 + 158, r11.u8);
	// stb r23,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, r23.u8);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r11.u8);
	// stb r7,161(r1)
	PPC_STORE_U8(ctx.r1.u32 + 161, ctx.r7.u8);
	// stb r11,162(r1)
	PPC_STORE_U8(ctx.r1.u32 + 162, r11.u8);
	// stb r30,163(r1)
	PPC_STORE_U8(ctx.r1.u32 + 163, r30.u8);
	// stb r24,164(r1)
	PPC_STORE_U8(ctx.r1.u32 + 164, r24.u8);
	// stb r11,165(r1)
	PPC_STORE_U8(ctx.r1.u32 + 165, r11.u8);
	// stb r9,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r9.u8);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// stb r28,114(r1)
	PPC_STORE_U8(ctx.r1.u32 + 114, r28.u8);
	// stb r9,115(r1)
	PPC_STORE_U8(ctx.r1.u32 + 115, ctx.r9.u8);
	// stb r10,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, ctx.r10.u8);
	// stb r5,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r5.u8);
	// stb r29,118(r1)
	PPC_STORE_U8(ctx.r1.u32 + 118, r29.u8);
	// stb r6,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r6.u8);
	// stb r4,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r4.u8);
	// stb r11,122(r1)
	PPC_STORE_U8(ctx.r1.u32 + 122, r11.u8);
	// stb r8,123(r1)
	PPC_STORE_U8(ctx.r1.u32 + 123, ctx.r8.u8);
	// stb r27,125(r1)
	PPC_STORE_U8(ctx.r1.u32 + 125, r27.u8);
	// stb r8,126(r1)
	PPC_STORE_U8(ctx.r1.u32 + 126, ctx.r8.u8);
	// stb r7,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r7.u8);
	// stb r3,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r3.u8);
	// stb r11,129(r1)
	PPC_STORE_U8(ctx.r1.u32 + 129, r11.u8);
	// stb r25,130(r1)
	PPC_STORE_U8(ctx.r1.u32 + 130, r25.u8);
	// stb r9,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r9.u8);
	// stb r10,209(r1)
	PPC_STORE_U8(ctx.r1.u32 + 209, ctx.r10.u8);
	// stb r28,210(r1)
	PPC_STORE_U8(ctx.r1.u32 + 210, r28.u8);
	// stb r9,211(r1)
	PPC_STORE_U8(ctx.r1.u32 + 211, ctx.r9.u8);
	// stb r10,212(r1)
	PPC_STORE_U8(ctx.r1.u32 + 212, ctx.r10.u8);
	// stb r5,213(r1)
	PPC_STORE_U8(ctx.r1.u32 + 213, ctx.r5.u8);
	// stb r29,214(r1)
	PPC_STORE_U8(ctx.r1.u32 + 214, r29.u8);
	// stb r6,215(r1)
	PPC_STORE_U8(ctx.r1.u32 + 215, ctx.r6.u8);
	// stb r4,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r4.u8);
	// stb r5,217(r1)
	PPC_STORE_U8(ctx.r1.u32 + 217, ctx.r5.u8);
	// stb r26,218(r1)
	PPC_STORE_U8(ctx.r1.u32 + 218, r26.u8);
	// stb r11,219(r1)
	PPC_STORE_U8(ctx.r1.u32 + 219, r11.u8);
	// stb r7,220(r1)
	PPC_STORE_U8(ctx.r1.u32 + 220, ctx.r7.u8);
	// stb r8,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r8.u8);
	// stb r3,222(r1)
	PPC_STORE_U8(ctx.r1.u32 + 222, ctx.r3.u8);
	// stb r11,223(r1)
	PPC_STORE_U8(ctx.r1.u32 + 223, r11.u8);
	// stb r6,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r6.u8);
	// stb r11,225(r1)
	PPC_STORE_U8(ctx.r1.u32 + 225, r11.u8);
	// stb r23,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, r23.u8);
	// stb r10,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, ctx.r10.u8);
	// stb r10,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, ctx.r10.u8);
	// li r10,70
	ctx.r10.s64 = 70;
	// stb r6,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r6.u8);
	// li r6,111
	ctx.r6.s64 = 111;
	// stb r11,227(r1)
	PPC_STORE_U8(ctx.r1.u32 + 227, r11.u8);
	// stb r7,228(r1)
	PPC_STORE_U8(ctx.r1.u32 + 228, ctx.r7.u8);
	// stb r11,229(r1)
	PPC_STORE_U8(ctx.r1.u32 + 229, r11.u8);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r10,100
	ctx.r10.s64 = 100;
	// stb r11,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, r11.u8);
	// stb r11,187(r1)
	PPC_STORE_U8(ctx.r1.u32 + 187, r11.u8);
	// stb r7,188(r1)
	PPC_STORE_U8(ctx.r1.u32 + 188, ctx.r7.u8);
	// stb r11,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, r11.u8);
	// stb r7,194(r1)
	PPC_STORE_U8(ctx.r1.u32 + 194, ctx.r7.u8);
	// li r7,108
	ctx.r7.s64 = 108;
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, r11.u8);
	// stb r6,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r6.u8);
	// stb r10,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r10.u8);
	// li r10,37
	ctx.r10.s64 = 37;
	// stb r6,86(r1)
	PPC_STORE_U8(ctx.r1.u32 + 86, ctx.r6.u8);
	// li r6,104
	ctx.r6.s64 = 104;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, r11.u8);
	// li r11,115
	r11.s64 = 115;
	// stb r9,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r9.u8);
	// stb r9,179(r1)
	PPC_STORE_U8(ctx.r1.u32 + 179, ctx.r9.u8);
	// lhz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U16(r22.u32 + 0);
	// stb r30,230(r1)
	PPC_STORE_U8(ctx.r1.u32 + 230, r30.u8);
	// stb r24,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, r24.u8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r21,233(r1)
	PPC_STORE_U8(ctx.r1.u32 + 233, r21.u8);
	// stb r28,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, r28.u8);
	// stb r5,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, ctx.r5.u8);
	// stb r29,182(r1)
	PPC_STORE_U8(ctx.r1.u32 + 182, r29.u8);
	// stb r4,184(r1)
	PPC_STORE_U8(ctx.r1.u32 + 184, ctx.r4.u8);
	// stb r5,185(r1)
	PPC_STORE_U8(ctx.r1.u32 + 185, ctx.r5.u8);
	// stb r26,186(r1)
	PPC_STORE_U8(ctx.r1.u32 + 186, r26.u8);
	// stb r8,189(r1)
	PPC_STORE_U8(ctx.r1.u32 + 189, ctx.r8.u8);
	// stb r3,190(r1)
	PPC_STORE_U8(ctx.r1.u32 + 190, ctx.r3.u8);
	// stb r27,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, r27.u8);
	// stb r8,193(r1)
	PPC_STORE_U8(ctx.r1.u32 + 193, ctx.r8.u8);
	// stb r3,195(r1)
	PPC_STORE_U8(ctx.r1.u32 + 195, ctx.r3.u8);
	// stb r25,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, r25.u8);
	// stb r21,198(r1)
	PPC_STORE_U8(ctx.r1.u32 + 198, r21.u8);
	// stb r7,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r7.u8);
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// stb r27,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, r27.u8);
	// stb r10,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r10.u8);
	// stb r4,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// stb r6,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r6.u8);
	// stb r8,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, ctx.r8.u8);
	// stb r30,91(r1)
	PPC_STORE_U8(ctx.r1.u32 + 91, r30.u8);
	// stb r30,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, r30.u8);
	// stb r7,94(r1)
	PPC_STORE_U8(ctx.r1.u32 + 94, ctx.r7.u8);
	// stb r11,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, r11.u8);
	// stb r10,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r10.u8);
	// stb r21,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, r21.u8);
	// stw r21,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r21.u32);
	// stw r21,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r21.u32);
	// stw r21,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r21.u32);
	// beq cr6,0x825a3f48
	if (cr6.eq) goto loc_825A3F48;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a3f48
	if (cr6.eq) goto loc_825A3F48;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a3f48
	if (cr6.eq) goto loc_825A3F48;
	// lis r11,9356
	r11.s64 = 613154816;
	// lwz r27,244(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r26,240(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// mr r28,r21
	r28.u64 = r21.u64;
	// lwz r25,236(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// ori r24,r11,32768
	r24.u64 = r11.u64 | 32768;
loc_825A3DAC:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// rlwinm r30,r10,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r10,r30,r10
	ctx.r10.u64 = r30.u64 + ctx.r10.u64;
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a3ddc
	if (cr6.eq) goto loc_825A3DDC;
	// lhz r9,228(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x825a3f2c
	if (!cr6.eq) goto loc_825A3F2C;
loc_825A3DDC:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x825a3248
	sub_825A3248(ctx, base);
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// bne cr6,0x825a3e18
	if (!cr6.eq) goto loc_825A3E18;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825a3f2c
	goto loc_825A3F2C;
loc_825A3E18:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x825a3248
	sub_825A3248(ctx, base);
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// bne cr6,0x825a3e4c
	if (!cr6.eq) goto loc_825A3E4C;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825a3f2c
	goto loc_825A3F2C;
loc_825A3E4C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x825a3248
	sub_825A3248(ctx, base);
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// bne cr6,0x825a3e80
	if (!cr6.eq) goto loc_825A3E80;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825a3f2c
	goto loc_825A3F2C;
loc_825A3E80:
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x825a3248
	sub_825A3248(ctx, base);
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// bne cr6,0x825a3eb4
	if (!cr6.eq) goto loc_825A3EB4;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r14,0(r11)
	r14.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825a3f2c
	goto loc_825A3F2C;
loc_825A3EB4:
	// addi r6,r1,312
	ctx.r6.s64 = ctx.r1.s64 + 312;
	// lhz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x825a3248
	sub_825A3248(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825a3f2c
	if (!cr6.eq) goto loc_825A3F2C;
	// lwz r11,312(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// lhz r9,76(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 76);
	// lwz r10,316(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x825a3f28
	if (!cr6.eq) goto loc_825A3F28;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mullw r29,r10,r11
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// clrlwi r6,r29,16
	ctx.r6.u64 = r29.u32 & 0xFFFF;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// bl 0x825a3348
	sub_825A3348(ctx, base);
	// b 0x825a3f2c
	goto loc_825A3F2C;
loc_825A3F28:
	// mr r17,r21
	r17.u64 = r21.u64;
loc_825A3F2C:
	// lwz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// clrlwi r28,r11,16
	r28.u64 = r11.u32 & 0xFFFF;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x825a3dac
	if (cr6.lt) goto loc_825A3DAC;
	// b 0x825a3f5c
	goto loc_825A3F5C;
loc_825A3F48:
	// lis r11,9356
	r11.s64 = 613154816;
	// lwz r27,244(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r26,240(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r25,236(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// ori r24,r11,32768
	r24.u64 = r11.u64 | 32768;
loc_825A3F5C:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x825b08d0
	sub_825B08D0(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,584(r31)
	PPC_STORE_U32(r31.u32 + 584, ctx.r3.u32);
	// bne cr6,0x825a3f80
	if (!cr6.eq) goto loc_825A3F80;
loc_825A3F74:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8239bd10
	return;
loc_825A3F80:
	// lhz r8,62(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 62);
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// lhz r10,90(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 90);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// sth r8,288(r1)
	PPC_STORE_U16(ctx.r1.u32 + 288, ctx.r8.u16);
	// lhz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 76);
	// sth r9,300(r1)
	PPC_STORE_U16(ctx.r1.u32 + 300, ctx.r9.u16);
	// lhz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 92);
	// std r21,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r21.u64);
	// std r21,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r21.u64);
	// sth r8,290(r1)
	PPC_STORE_U16(ctx.r1.u32 + 290, ctx.r8.u16);
	// lwz r8,64(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// std r21,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r21.u64);
	// stw r21,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r21.u32);
	// sth r9,302(r1)
	PPC_STORE_U16(ctx.r1.u32 + 302, ctx.r9.u16);
	// sth r21,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, r21.u16);
	// stw r8,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r8.u32);
	// lwz r8,68(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// stw r8,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r8.u32);
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r8,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r8.u32);
	// lhz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 84);
	// sth r8,308(r1)
	PPC_STORE_U16(ctx.r1.u32 + 308, ctx.r8.u16);
	// lhz r8,86(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 86);
	// stw r10,16(r20)
	PPC_STORE_U32(r20.u32 + 16, ctx.r10.u32);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// sth r8,310(r1)
	PPC_STORE_U16(ctx.r1.u32 + 310, ctx.r8.u16);
	// stw r10,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r10.u32);
	// lhz r11,92(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 92);
	// stw r11,12(r20)
	PPC_STORE_U32(r20.u32 + 12, r11.u32);
	// bl 0x825b82e8
	sub_825B82E8(ctx, base);
	// clrlwi r8,r19,16
	ctx.r8.u64 = r19.u32 & 0xFFFF;
	// clrlwi r11,r8,31
	r11.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4048
	if (cr6.eq) goto loc_825A4048;
	// mr r11,r18
	r11.u64 = r18.u64;
	// stw r18,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r18.u32);
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// stw r21,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r21.u32);
	// beq cr6,0x825a4048
	if (cr6.eq) goto loc_825A4048;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_825A4030:
	// clrlwi r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4030
	if (!cr6.eq) goto loc_825A4030;
	// stw r10,4(r20)
	PPC_STORE_U32(r20.u32 + 4, ctx.r10.u32);
loc_825A4048:
	// rlwinm r11,r8,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x100;
	// li r29,3
	r29.s64 = 3;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4088
	if (cr6.eq) goto loc_825A4088;
	// lhz r11,256(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 256);
	// ori r10,r11,256
	ctx.r10.u64 = r11.u64 | 256;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// sth r10,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
	// ble cr6,0x825a4074
	if (!cr6.gt) goto loc_825A4074;
	// li r11,2
	r11.s64 = 2;
loc_825A4074:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// stw r11,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r11.u32);
	// bne cr6,0x825a408c
	if (!cr6.eq) goto loc_825A408C;
	// stw r29,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r29.u32);
	// b 0x825a408c
	goto loc_825A408C;
loc_825A4088:
	// lhz r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 256);
loc_825A408C:
	// rlwinm r9,r8,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// li r7,4
	ctx.r7.s64 = 4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a40b0
	if (cr6.eq) goto loc_825A40B0;
	// li r11,16
	r11.s64 = 16;
	// stw r11,12(r20)
	PPC_STORE_U32(r20.u32 + 12, r11.u32);
	// li r11,2
	r11.s64 = 2;
	// stw r11,16(r20)
	PPC_STORE_U32(r20.u32 + 16, r11.u32);
	// b 0x825a40d4
	goto loc_825A40D4;
loc_825A40B0:
	// rlwinm r11,r8,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a40c4
	if (cr6.eq) goto loc_825A40C4;
	// stw r29,16(r20)
	PPC_STORE_U32(r20.u32 + 16, r29.u32);
	// b 0x825a40d4
	goto loc_825A40D4;
loc_825A40C4:
	// rlwinm r11,r8,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a40d4
	if (cr6.eq) goto loc_825A40D4;
	// stw r7,16(r20)
	PPC_STORE_U32(r20.u32 + 16, ctx.r7.u32);
loc_825A40D4:
	// rlwinm r11,r8,0,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// sth r21,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, r21.u16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a40f4
	if (cr6.eq) goto loc_825A40F4;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r15,280(r1)
	PPC_STORE_U16(ctx.r1.u32 + 280, r15.u16);
	// ori r10,r11,128
	ctx.r10.u64 = r11.u64 | 128;
	// sth r10,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
loc_825A40F4:
	// rlwinm r11,r8,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4128
	if (cr6.eq) goto loc_825A4128;
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r11,32000
	cr6.compare<uint32_t>(r11.u32, 32000, xer);
	// bne cr6,0x825a411c
	if (!cr6.eq) goto loc_825A411C;
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// bne cr6,0x825a4124
	if (!cr6.eq) goto loc_825A4124;
	// li r16,22050
	r16.s64 = 22050;
	// b 0x825a4124
	goto loc_825A4124;
loc_825A411C:
	// cmplwi cr6,r16,0
	cr6.compare<uint32_t>(r16.u32, 0, xer);
	// beq cr6,0x825a4128
	if (cr6.eq) goto loc_825A4128;
loc_825A4124:
	// stw r16,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r16.u32);
loc_825A4128:
	// rlwinm r11,r8,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4140
	if (cr6.eq) goto loc_825A4140;
	// ori r11,r10,2
	r11.u64 = ctx.r10.u64 | 2;
	// sth r11,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, r11.u16);
	// b 0x825a4178
	goto loc_825A4178;
loc_825A4140:
	// rlwinm r11,r8,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4160
	if (cr6.eq) goto loc_825A4160;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// sth r10,256(r1)
	PPC_STORE_U16(ctx.r1.u32 + 256, ctx.r10.u16);
	// b 0x825a4174
	goto loc_825A4174;
loc_825A4160:
	// rlwinm r11,r8,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4178
	if (cr6.eq) goto loc_825A4178;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_825A4174:
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
loc_825A4178:
	// rlwinm r11,r8,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a41dc
	if (cr6.eq) goto loc_825A41DC;
	// lis r11,-16841
	r11.s64 = -1103691776;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// ori r6,r11,50747
	ctx.r6.u64 = r11.u64 | 50747;
	// lis r11,0
	r11.s64 = 0;
	// mulhwu r6,r10,r6
	ctx.r6.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// ori r11,r11,44100
	r11.u64 = r11.u64 | 44100;
	// rlwinm r6,r6,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0x1FFFF;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r11.s32);
	// subf. r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825a41b0
	if (!cr0.eq) goto loc_825A41B0;
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
loc_825A41B0:
	// lis r11,1398
	r11.s64 = 91619328;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// ori r6,r11,6641
	ctx.r6.u64 = r11.u64 | 6641;
	// lis r11,0
	r11.s64 = 0;
	// mulhwu r6,r10,r6
	ctx.r6.u64 = (uint64_t(ctx.r10.u32) * uint64_t(ctx.r6.u32)) >> 32;
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// rlwinm r6,r6,22,10,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x3FFFFF;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(r11.s32);
	// subf. r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825a41dc
	if (!cr0.eq) goto loc_825A41DC;
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
loc_825A41DC:
	// rlwinm r11,r8,0,22,22
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x200;
	// li r30,1
	r30.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a421c
	if (cr6.eq) goto loc_825A421C;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825a3f74
	if (!cr6.eq) goto loc_825A3F74;
	// rlwinm r11,r8,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a3f74
	if (!cr6.eq) goto loc_825A3F74;
	// rlwinm r11,r8,0,20,20
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a3f74
	if (!cr6.eq) goto loc_825A3F74;
	// li r11,32
	r11.s64 = 32;
	// stw r30,20(r20)
	PPC_STORE_U32(r20.u32 + 20, r30.u32);
	// stw r7,16(r20)
	PPC_STORE_U32(r20.u32 + 16, ctx.r7.u32);
	// stw r11,12(r20)
	PPC_STORE_U32(r20.u32 + 12, r11.u32);
loc_825A421C:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// addi r7,r31,588
	ctx.r7.s64 = r31.s64 + 588;
	// stw r25,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r25.u32);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stw r26,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r26.u32);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// stw r27,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r27.u32);
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// stw r14,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, r14.u32);
	// stw r17,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r17.u32);
	// bl 0x825b7970
	sub_825B7970(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a43ac
	if (cr6.lt) goto loc_825A43AC;
	// bne cr6,0x825a3f74
	if (!cr6.eq) goto loc_825A3F74;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,616(r31)
	PPC_STORE_U32(r31.u32 + 616, ctx.r3.u32);
	// beq cr6,0x825a427c
	if (cr6.eq) goto loc_825A427C;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_825A427C:
	// lwz r9,552(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// stw r21,548(r31)
	PPC_STORE_U32(r31.u32 + 548, r21.u32);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x825a42d4
	if (!cr6.eq) goto loc_825A42D4;
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825a42cc
	if (!cr6.gt) goto loc_825A42CC;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// cmplwi cr6,r11,68
	cr6.compare<uint32_t>(r11.u32, 68, xer);
	// bne cr6,0x825a42ec
	if (!cr6.eq) goto loc_825A42EC;
	// lbz r11,157(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 157);
	// cmplwi cr6,r11,82
	cr6.compare<uint32_t>(r11.u32, 82, xer);
	// bne cr6,0x825a42ec
	if (!cr6.eq) goto loc_825A42EC;
	// lbz r11,158(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 158);
	// cmplwi cr6,r11,77
	cr6.compare<uint32_t>(r11.u32, 77, xer);
	// bne cr6,0x825a42ec
	if (!cr6.eq) goto loc_825A42EC;
	// lbz r11,159(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 159);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a42ec
	if (!cr6.eq) goto loc_825A42EC;
	// stw r30,548(r31)
	PPC_STORE_U32(r31.u32 + 548, r30.u32);
loc_825A42CC:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x825a42f8
	if (cr6.eq) goto loc_825A42F8;
loc_825A42D4:
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a42f8
	if (!cr6.eq) goto loc_825A42F8;
	// li r3,13
	ctx.r3.s64 = 13;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8239bd10
	return;
loc_825A42EC:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8239bd10
	return;
loc_825A42F8:
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// std r10,48(r31)
	PPC_STORE_U64(r31.u32 + 48, ctx.r10.u64);
	// beq cr6,0x825a4338
	if (cr6.eq) goto loc_825A4338;
	// lwz r8,524(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x825a4320
	if (cr6.eq) goto loc_825A4320;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_825A4320:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mulld r11,r11,r8
	r11.s64 = r11.s64 * ctx.r8.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,48(r31)
	PPC_STORE_U64(r31.u32 + 48, r11.u64);
loc_825A4338:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4354
	if (cr6.eq) goto loc_825A4354;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subfic r11,r11,-1
	xer.ca = r11.u32 <= 4294967295;
	r11.s64 = -1 - r11.s64;
	// std r11,48(r31)
	PPC_STORE_U64(r31.u32 + 48, r11.u64);
loc_825A4354:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r29,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r29.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// beq cr6,0x825a4378
	if (cr6.eq) goto loc_825A4378;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// b 0x825a437c
	goto loc_825A437C;
loc_825A4378:
	// li r3,256
	ctx.r3.s64 = 256;
loc_825A437C:
	// bl 0x82121108
	sub_82121108(ctx, base);
	// rotlwi r11,r3,0
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r3,612(r31)
	PPC_STORE_U32(r31.u32 + 612, ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a439c
	if (!cr6.eq) goto loc_825A439C;
	// li r3,17
	ctx.r3.s64 = 17;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8239bd10
	return;
loc_825A439C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8239bd10
	return;
loc_825A43A8:
	// li r3,2
	ctx.r3.s64 = 2;
loc_825A43AC:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_825A43B4"))) PPC_WEAK_FUNC(sub_825A43B4);
PPC_FUNC_IMPL(__imp__sub_825A43B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A43B8"))) PPC_WEAK_FUNC(sub_825A43B8);
PPC_FUNC_IMPL(__imp__sub_825A43B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4474
	if (cr6.eq) goto loc_825A4474;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a4474
	if (cr6.eq) goto loc_825A4474;
	// lhz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 60);
	// addi r9,r11,108
	ctx.r9.s64 = r11.s64 + 108;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lhz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 76);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// stw r10,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r10.u32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// ld r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 40);
	// std r10,24(r4)
	PPC_STORE_U64(ctx.r4.u32 + 24, ctx.r10.u64);
	// ld r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 48);
	// std r10,32(r4)
	PPC_STORE_U64(ctx.r4.u32 + 32, ctx.r10.u64);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 548);
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// lwz r10,220(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 220);
	// stw r10,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r10.u32);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r10.u32);
	// lhz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 88);
	// sth r10,52(r4)
	PPC_STORE_U16(ctx.r4.u32 + 52, ctx.r10.u16);
	// lhz r10,90(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 90);
	// sth r10,54(r4)
	PPC_STORE_U16(ctx.r4.u32 + 54, ctx.r10.u16);
	// lhz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 92);
	// sth r10,56(r4)
	PPC_STORE_U16(ctx.r4.u32 + 56, ctx.r10.u16);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// stw r10,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r10.u32);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// stw r10,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r10.u32);
	// lhz r10,104(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 104);
	// sth r10,64(r4)
	PPC_STORE_U16(ctx.r4.u32 + 64, ctx.r10.u16);
	// lhz r11,106(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 106);
	// sth r11,66(r4)
	PPC_STORE_U16(ctx.r4.u32 + 66, r11.u16);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, r11.u32);
	// blr 
	return;
loc_825A4474:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A447C"))) PPC_WEAK_FUNC(sub_825A447C);
PPC_FUNC_IMPL(__imp__sub_825A447C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A4480"))) PPC_WEAK_FUNC(sub_825A4480);
PPC_FUNC_IMPL(__imp__sub_825A4480) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a44a0
	if (cr6.eq) goto loc_825A44A0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a44a0
	if (cr6.eq) goto loc_825A44A0;
	// lwz r11,204(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
loc_825A44A0:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A44A8"))) PPC_WEAK_FUNC(sub_825A44A8);
PPC_FUNC_IMPL(__imp__sub_825A44A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a44c8
	if (cr6.eq) goto loc_825A44C8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a44c8
	if (cr6.eq) goto loc_825A44C8;
	// lwz r11,208(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
loc_825A44C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A44D0"))) PPC_WEAK_FUNC(sub_825A44D0);
PPC_FUNC_IMPL(__imp__sub_825A44D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// li r22,0
	r22.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// lwz r27,0(r18)
	r27.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// lwz r29,0(r17)
	r29.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r20,r22
	r20.u64 = r22.u64;
	// mr r24,r22
	r24.u64 = r22.u64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// mr r21,r22
	r21.u64 = r22.u64;
	// mr r26,r22
	r26.u64 = r22.u64;
	// mr r23,r22
	r23.u64 = r22.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a47e4
	if (cr6.eq) goto loc_825A47E4;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x825a47e4
	if (cr6.eq) goto loc_825A47E4;
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a47e4
	if (cr6.eq) goto loc_825A47E4;
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(r19.s32, 1, xer);
	// stw r22,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r22.u32);
	// beq cr6,0x825a458c
	if (cr6.eq) goto loc_825A458C;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r29,r22
	r29.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a458c
	if (cr6.eq) goto loc_825A458C;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// bgt cr6,0x825a47e4
	if (cr6.gt) goto loc_825A47E4;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// divwu r24,r11,r10
	r24.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x825a4630
	if (cr6.eq) goto loc_825A4630;
	// divwu r29,r27,r24
	r29.u32 = r27.u32 / r24.u32;
	// twllei r24,0
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a458c
	if (cr6.eq) goto loc_825A458C;
loc_825A457C:
	// clrlwi r11,r29,28
	r11.u64 = r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a458c
	if (!cr6.eq) goto loc_825A458C;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_825A458C:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x825a459c
	if (cr6.lt) goto loc_825A459C;
	// addi r29,r11,-1
	r29.s64 = r11.s64 + -1;
loc_825A459C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mullw r11,r29,r11
	r11.s64 = int64_t(r29.s32) * int64_t(r11.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// bl 0x825af8b0
	sub_825AF8B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825a4760
	if (!cr6.eq) goto loc_825A4760;
	// lwz r11,432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a45dc
	if (cr6.eq) goto loc_825A45DC;
	// lwz r11,424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 424);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a4760
	if (!cr6.eq) goto loc_825A4760;
loc_825A45DC:
	// lwz r11,492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// mr r30,r22
	r30.u64 = r22.u64;
	// stw r22,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r22.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825a464c
	if (!cr6.gt) goto loc_825A464C;
loc_825A45F0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825afed0
	sub_825AFED0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825a4760
	if (!cr6.eq) goto loc_825A4760;
	// lbz r11,500(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 500);
	// lhz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 228);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x825a4638
	if (cr6.eq) goto loc_825A4638;
	// lwz r11,540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 540);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,540(r31)
	PPC_STORE_U32(r31.u32 + 540, r11.u32);
	// lwz r11,492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 492);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x825a45f0
	if (cr6.lt) goto loc_825A45F0;
	// b 0x825a464c
	goto loc_825A464C;
loc_825A4630:
	// li r29,1
	r29.s64 = 1;
	// b 0x825a457c
	goto loc_825A457C;
loc_825A4638:
	// lwz r11,512(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// li r23,1
	r23.s64 = 1;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_825A464C:
	// clrlwi r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a471c
	if (cr6.eq) goto loc_825A471C;
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(r19.s32, 1, xer);
	// beq cr6,0x825a476c
	if (cr6.eq) goto loc_825A476C;
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// mr r23,r22
	r23.u64 = r22.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825a4680
	if (!cr6.eq) goto loc_825A4680;
	// clrlwi r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x825a4680
	if (!cr6.eq) goto loc_825A4680;
	// li r20,1
	r20.s64 = 1;
loc_825A4680:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// ble cr6,0x825a469c
	if (!cr6.gt) goto loc_825A469C;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// mr r28,r22
	r28.u64 = r22.u64;
	// li r21,1
	r21.s64 = 1;
	// b 0x825a46a8
	goto loc_825A46A8;
loc_825A469C:
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// li r28,1
	r28.s64 = 1;
	// li r26,1
	r26.s64 = 1;
loc_825A46A8:
	// cmpwi cr6,r16,1
	cr6.compare<int32_t>(r16.s32, 1, xer);
	// bne cr6,0x825a46d0
	if (!cr6.eq) goto loc_825A46D0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4788
	if (cr6.eq) goto loc_825A4788;
	// clrlwi r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825a4788
	if (cr6.eq) goto loc_825A4788;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a4788
	if (cr6.eq) goto loc_825A4788;
	// b 0x825a4708
	goto loc_825A4708;
loc_825A46D0:
	// rlwinm r10,r24,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r24,r10
	ctx.r10.u64 = r24.u64 + ctx.r10.u64;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825a46e8
	if (!cr6.lt) goto loc_825A46E8;
	// li r20,1
	r20.s64 = 1;
loc_825A46E8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a4788
	if (cr6.eq) goto loc_825A4788;
	// clrlwi r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a4708
	if (cr6.eq) goto loc_825A4708;
	// clrlwi r11,r29,28
	r11.u64 = r29.u32 & 0xF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4788
	if (!cr6.eq) goto loc_825A4788;
loc_825A4708:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a474c
	if (!cr6.eq) goto loc_825A474C;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// b 0x825a4750
	goto loc_825A4750;
loc_825A471C:
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(r19.s32, 1, xer);
	// bne cr6,0x825a4728
	if (!cr6.eq) goto loc_825A4728;
	// mr r28,r22
	r28.u64 = r22.u64;
loc_825A4728:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a474c
	if (!cr6.eq) goto loc_825A474C;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a4744
	if (cr6.eq) goto loc_825A4744;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// b 0x825a4750
	goto loc_825A4750;
loc_825A4744:
	// li r28,1
	r28.s64 = 1;
	// li r26,1
	r26.s64 = 1;
loc_825A474C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_825A4750:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x825a459c
	if (cr6.lt) goto loc_825A459C;
	// b 0x825a4770
	goto loc_825A4770;
loc_825A4760:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd18
	return;
loc_825A476C:
	// li r20,1
	r20.s64 = 1;
loc_825A4770:
	// clrlwi r11,r20,24
	r11.u64 = r20.u32 & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825a4788
	if (cr6.eq) goto loc_825A4788;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r29,28(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_825A4788:
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// bl 0x825b1030
	sub_825B1030(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r11,588(r31)
	PPC_STORE_U32(r31.u32 + 588, r11.u32);
	// beq cr6,0x825a47ac
	if (cr6.eq) goto loc_825A47AC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd18
	return;
loc_825A47AC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r29,r11
	r11.s64 = int64_t(r29.s32) * int64_t(r11.s32);
	// stw r9,392(r31)
	PPC_STORE_U32(r31.u32 + 392, ctx.r9.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// stw r29,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r29.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd18
	return;
loc_825A47E4:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_825A47F0"))) PPC_WEAK_FUNC(sub_825A47F0);
PPC_FUNC_IMPL(__imp__sub_825A47F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r18{};
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
	// li r25,0
	r25.s64 = 0;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// li r22,128
	r22.s64 = 128;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r25,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r25.u32);
	// beq cr6,0x825a4e10
	if (cr6.eq) goto loc_825A4E10;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825a4e1c
	if (cr6.eq) goto loc_825A4E1C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x825a4e10
	if (cr6.eq) goto loc_825A4E10;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// li r21,7
	r21.s64 = 7;
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// li r23,1
	r23.s64 = 1;
	// lbz r11,525(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 525);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x825a4a7c
	if (cr6.eq) goto loc_825A4A7C;
loc_825A4850:
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a48cc
	if (!cr6.eq) goto loc_825A48CC;
	// ld r11,408(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 408);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x825a48a0
	if (!cr6.eq) goto loc_825A48A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,392(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// stw r21,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r21.u32);
	// bl 0x825a34b0
	sub_825A34B0(ctx, base);
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// beq cr6,0x825a4e00
	if (cr6.eq) goto loc_825A4E00;
	// lbz r11,525(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 525);
	// stw r30,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825a4a70
	if (cr6.eq) goto loc_825A4A70;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x825a4ac0
	if (cr6.eq) goto loc_825A4AC0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825a4cb0
	if (!cr6.eq) goto loc_825A4CB0;
loc_825A48A0:
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a48cc
	if (!cr6.eq) goto loc_825A48CC;
	// ld r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 408);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x825a4cb0
	if (cr6.eq) goto loc_825A4CB0;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r23,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r23.u32);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
	// std r10,408(r31)
	PPC_STORE_U64(r31.u32 + 408, ctx.r10.u64);
loc_825A48CC:
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// ble cr6,0x825a48dc
	if (!cr6.gt) goto loc_825A48DC;
	// mr r22,r11
	r22.u64 = r11.u64;
loc_825A48DC:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// ld r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 400);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259cc70
	sub_8259CC70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r22
	cr6.compare<uint32_t>(ctx.r5.u32, r22.u32, xer);
	// stw r5,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r5.u32);
	// bne cr6,0x825a4c88
	if (!cr6.eq) goto loc_825A4C88;
	// lwz r11,552(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a4964
	if (cr6.eq) goto loc_825A4964;
	// lhz r9,518(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 518);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x825a4ad4
	if (cr6.gt) goto loc_825A4AD4;
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// clrldi r6,r8,32
	ctx.r6.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// ld r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 408);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - r11.s64;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpld cr6,r8,r6
	cr6.compare<uint64_t>(ctx.r8.u64, ctx.r6.u64, xer);
	// bgt cr6,0x825a4ad4
	if (cr6.gt) goto loc_825A4AD4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r10,612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x825a4980
	goto loc_825A4980;
loc_825A4964:
	// cmplwi cr6,r5,256
	cr6.compare<uint32_t>(ctx.r5.u32, 256, xer);
	// bgt cr6,0x825a4df0
	if (cr6.gt) goto loc_825A4DF0;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_825A4980:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// ld r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r11,400(r31)
	PPC_STORE_U64(r31.u32 + 400, r11.u64);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
	// bne cr6,0x825a4cb0
	if (!cr6.eq) goto loc_825A4CB0;
	// lwz r10,552(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a4a04
	if (cr6.eq) goto loc_825A4A04;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a49fc
	if (!cr6.eq) goto loc_825A49FC;
	// ld r11,408(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 408);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bgt cr6,0x825a49fc
	if (cr6.gt) goto loc_825A49FC;
	// addi r6,r31,600
	ctx.r6.s64 = r31.s64 + 600;
	// lwz r4,612(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// lhz r5,518(r31)
	ctx.r5.u64 = PPC_LOAD_U16(r31.u32 + 518);
	// bl 0x825b8328
	sub_825B8328(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a4d14
	if (cr6.lt) goto loc_825A4D14;
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lhz r11,518(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 518);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// b 0x825a4a04
	goto loc_825A4A04;
loc_825A49FC:
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
loc_825A4A04:
	// lwz r11,416(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a4a58
	if (cr6.eq) goto loc_825A4A58;
	// lhz r11,518(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 518);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// ld r9,408(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 408);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r25,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r25.u32);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// cmpld cr6,r9,r11
	cr6.compare<uint64_t>(ctx.r9.u64, r11.u64, xer);
	// bne cr6,0x825a4a4c
	if (!cr6.eq) goto loc_825A4A4C;
	// stw r23,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r23.u32);
	// lwz r11,512(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mulli r11,r11,10000
	r11.s64 = r11.s64 * 10000;
	// std r11,8(r20)
	PPC_STORE_U64(r20.u32 + 8, r11.u64);
loc_825A4A4C:
	// lwz r11,552(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a4cb0
	if (cr6.eq) goto loc_825A4CB0;
loc_825A4A58:
	// lwz r11,552(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a4de4
	if (cr6.eq) goto loc_825A4DE4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4cb0
	if (!cr6.eq) goto loc_825A4CB0;
loc_825A4A70:
	// lbz r11,525(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 525);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x825a4850
	if (!cr6.eq) goto loc_825A4850;
loc_825A4A7C:
	// lbz r11,524(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 524);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x825a4cb0
	if (cr6.gt) goto loc_825A4CB0;
	// li r29,2
	r29.s64 = 2;
	// li r27,3
	r27.s64 = 3;
	// li r28,4
	r28.s64 = 4;
loc_825A4A98:
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,19120
	r12.s64 = r12.s64 + 19120;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_825A4AE4;
	case 1:
		goto loc_825A4B84;
	case 2:
		goto loc_825A4BA4;
	case 3:
		goto loc_825A4C3C;
	default:
		__builtin_unreachable();
	}
	// lwz r18,19172(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 19172);
	// lwz r18,19332(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 19332);
	// lwz r18,19364(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 19364);
	// lwz r18,19516(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 19516);
loc_825A4AC0:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4AD4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4AE4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259cc70
	sub_8259CC70(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x825a4c88
	if (!cr6.eq) goto loc_825A4C88;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a4c88
	if (cr6.eq) goto loc_825A4C88;
	// ld r11,400(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 400);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r23,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r23.u32);
	// sth r25,536(r31)
	PPC_STORE_U16(r31.u32 + 536, r25.u16);
	// stw r9,420(r31)
	PPC_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// std r11,400(r31)
	PPC_STORE_U64(r31.u32 + 400, r11.u64);
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stb r11,526(r31)
	PPC_STORE_U8(r31.u32 + 526, r11.u8);
	// sth r10,528(r31)
	PPC_STORE_U16(r31.u32 + 528, ctx.r10.u16);
	// beq cr6,0x825a4b4c
	if (cr6.eq) goto loc_825A4B4C;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// sth r11,528(r31)
	PPC_STORE_U16(r31.u32 + 528, r11.u16);
loc_825A4B4C:
	// lbz r9,526(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 526);
	// lhz r10,522(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 522);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x825a4b70
	if (!cr6.gt) goto loc_825A4B70;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r29,524(r31)
	PPC_STORE_U8(r31.u32 + 524, r29.u8);
	// sth r11,520(r31)
	PPC_STORE_U16(r31.u32 + 520, r11.u16);
	// b 0x825a4c6c
	goto loc_825A4C6C;
loc_825A4B70:
	// bne cr6,0x825a4b7c
	if (!cr6.eq) goto loc_825A4B7C;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// sth r11,520(r31)
	PPC_STORE_U16(r31.u32 + 520, r11.u16);
loc_825A4B7C:
	// stb r29,524(r31)
	PPC_STORE_U8(r31.u32 + 524, r29.u8);
	// b 0x825a4c6c
	goto loc_825A4C6C;
loc_825A4B84:
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4c98
	if (!cr6.eq) goto loc_825A4C98;
	// lhz r11,528(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 528);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4c98
	if (!cr6.eq) goto loc_825A4C98;
	// stb r27,524(r31)
	PPC_STORE_U8(r31.u32 + 524, r27.u8);
	// b 0x825a4c6c
	goto loc_825A4C6C;
loc_825A4BA4:
	// lhz r11,522(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 522);
	// lhz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 520);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825a4c34
	if (!cr6.gt) goto loc_825A4C34;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// ld r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 400);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259cc70
	sub_8259CC70(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x825a4c88
	if (!cr6.eq) goto loc_825A4C88;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x825a4c88
	if (cr6.eq) goto loc_825A4C88;
	// ld r11,400(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 400);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r23,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r23.u32);
	// stw r9,420(r31)
	PPC_STORE_U32(r31.u32 + 420, ctx.r9.u32);
	// std r11,400(r31)
	PPC_STORE_U64(r31.u32 + 400, r11.u64);
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stb r11,526(r31)
	PPC_STORE_U8(r31.u32 + 526, r11.u8);
	// sth r10,528(r31)
	PPC_STORE_U16(r31.u32 + 528, ctx.r10.u16);
	// beq cr6,0x825a4c18
	if (cr6.eq) goto loc_825A4C18;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// sth r11,528(r31)
	PPC_STORE_U16(r31.u32 + 528, r11.u16);
loc_825A4C18:
	// lhz r10,520(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 520);
	// lbz r11,526(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 526);
	// stb r29,524(r31)
	PPC_STORE_U8(r31.u32 + 524, r29.u8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,520(r31)
	PPC_STORE_U16(r31.u32 + 520, r11.u16);
	// b 0x825a4c6c
	goto loc_825A4C6C;
loc_825A4C34:
	// stb r28,524(r31)
	PPC_STORE_U8(r31.u32 + 524, r28.u8);
	// b 0x825a4c6c
	goto loc_825A4C6C;
loc_825A4C3C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,392(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// stb r25,524(r31)
	PPC_STORE_U8(r31.u32 + 524, r25.u8);
	// std r25,408(r31)
	PPC_STORE_U64(r31.u32 + 408, r25.u64);
	// stb r25,525(r31)
	PPC_STORE_U8(r31.u32 + 525, r25.u8);
	// stw r21,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r21.u32);
	// bl 0x825a34b0
	sub_825A34B0(ctx, base);
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// beq cr6,0x825a4e00
	if (cr6.eq) goto loc_825A4E00;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r30.u32);
	// bne cr6,0x825a4cb0
	if (!cr6.eq) goto loc_825A4CB0;
loc_825A4C6C:
	// lbz r11,524(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 524);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// ble cr6,0x825a4a98
	if (!cr6.gt) goto loc_825A4A98;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4C88:
	// lis r3,-32764
	ctx.r3.s64 = -2147221504;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4C98:
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4cd4
	if (!cr6.eq) goto loc_825A4CD4;
	// lhz r11,528(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 528);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825a4cbc
	if (!cr6.eq) goto loc_825A4CBC;
loc_825A4CB0:
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4CBC:
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r23,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r23.u32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// sth r11,528(r31)
	PPC_STORE_U16(r31.u32 + 528, r11.u16);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
loc_825A4CD4:
	// lwz r11,420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// ble cr6,0x825a4ce4
	if (!cr6.gt) goto loc_825A4CE4;
	// mr r22,r11
	r22.u64 = r11.u64;
loc_825A4CE4:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// ld r4,400(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 400);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259cc70
	sub_8259CC70(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplw cr6,r5,r22
	cr6.compare<uint32_t>(ctx.r5.u32, r22.u32, xer);
	// stw r5,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r5.u32);
	// bne cr6,0x825a4c88
	if (!cr6.eq) goto loc_825A4C88;
	// lwz r11,552(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 552);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a4d28
	if (cr6.eq) goto loc_825A4D28;
loc_825A4D14:
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4D28:
	// cmplwi cr6,r5,256
	cr6.compare<uint32_t>(ctx.r5.u32, 256, xer);
	// bgt cr6,0x825a4df0
	if (cr6.gt) goto loc_825A4DF0;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x825a4df0
	if (cr6.eq) goto loc_825A4DF0;
	// lwz r3,612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// ld r10,400(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 400);
	// lwz r9,420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 420);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 548);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r11,400(r31)
	PPC_STORE_U64(r31.u32 + 400, r11.u64);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// stw r11,420(r31)
	PPC_STORE_U32(r31.u32 + 420, r11.u32);
	// bne cr6,0x825a4cb0
	if (!cr6.eq) goto loc_825A4CB0;
	// lwz r11,416(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 416);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a4de4
	if (cr6.eq) goto loc_825A4DE4;
	// lbz r11,526(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 526);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// lhz r9,528(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 528);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x825a4dd4
	if (!cr6.eq) goto loc_825A4DD4;
	// stw r23,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r23.u32);
	// lhz r8,536(r31)
	ctx.r8.u64 = PPC_LOAD_U16(r31.u32 + 536);
	// lwz r11,532(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 532);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// lwz r10,512(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// mulli r11,r11,10000
	r11.s64 = r11.s64 * 10000;
	// std r11,8(r20)
	PPC_STORE_U64(r20.u32 + 8, r11.u64);
	// lhz r11,536(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 536);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,536(r31)
	PPC_STORE_U16(r31.u32 + 536, r11.u16);
loc_825A4DD4:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,416(r31)
	PPC_STORE_U32(r31.u32 + 416, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4DE4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4DF0:
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4E00:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
loc_825A4E10:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825a4e1c
	if (cr6.eq) goto loc_825A4E1C;
	// stw r25,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r25.u32);
loc_825A4E1C:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x825a4e28
	if (cr6.eq) goto loc_825A4E28;
	// stw r25,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r25.u32);
loc_825A4E28:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_825A4E38"))) PPC_WEAK_FUNC(sub_825A4E38);
PPC_FUNC_IMPL(__imp__sub_825A4E38) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x825a44d0
	sub_825A44D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A4E78"))) PPC_WEAK_FUNC(sub_825A4E78);
PPC_FUNC_IMPL(__imp__sub_825A4E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r18{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a5024
	if (cr6.eq) goto loc_825A5024;
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a5024
	if (cr6.eq) goto loc_825A5024;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a4eb0
	if (cr6.eq) goto loc_825A4EB0;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
loc_825A4EB0:
	// lwz r11,392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x825a4ed8
	if (cr6.eq) goto loc_825A4ED8;
loc_825A4EBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825a34b0
	sub_825A34B0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x825a5028
	if (!cr6.eq) goto loc_825A5028;
	// lwz r11,392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x825a4ebc
	if (!cr6.eq) goto loc_825A4EBC;
loc_825A4ED8:
	// addi r27,r31,588
	r27.s64 = r31.s64 + 588;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x825a5004
	if (cr6.gt) goto loc_825A5004;
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,20224
	r12.s64 = r12.s64 + 20224;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_825A5004;
	case 1:
		goto loc_825A4F10;
	case 2:
		goto loc_825A4FC0;
	case 3:
		goto loc_825A5004;
	default:
		__builtin_unreachable();
	}
	// lwz r18,20484(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 20484);
	// lwz r18,20240(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 20240);
	// lwz r18,20416(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 20416);
	// lwz r18,20484(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 20484);
loc_825A4F10:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// std r30,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r30.u64);
	// mr r28,r30
	r28.u64 = r30.u64;
	// std r30,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r30.u64);
	// mr r29,r30
	r29.u64 = r30.u64;
	// bl 0x825a47f0
	sub_825A47F0(ctx, base);
	// lis r11,-32764
	r11.s64 = -2147221504;
	// ori r11,r11,5
	r11.u64 = r11.u64 | 5;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x825a4f58
	if (!cr6.eq) goto loc_825A4F58;
	// li r28,1
	r28.s64 = 1;
	// b 0x825a4f7c
	goto loc_825A4F7C;
loc_825A4F58:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825a4f70
	if (!cr6.lt) goto loc_825A4F70;
	// li r11,7
	r11.s64 = 7;
	// stw r11,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
loc_825A4F70:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x825a4f7c
	if (!cr6.eq) goto loc_825A4F7C;
	// li r29,1
	r29.s64 = 1;
loc_825A4F7C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// ld r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r5,96(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x825b1190
	sub_825B1190(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825a4ff0
	if (!cr6.lt) goto loc_825A4FF0;
	// li r11,7
	r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
loc_825A4FC0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,584(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x825b7070
	sub_825B7070(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825a4ff0
	if (!cr6.lt) goto loc_825A4FF0;
	// li r11,7
	r11.s64 = 7;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
loc_825A4FF0:
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x825a5004
	if (!cr6.eq) goto loc_825A5004;
	// li r3,6
	ctx.r3.s64 = 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
loc_825A5004:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r3,r11,6
	ctx.r3.s64 = r11.s64 + 6;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
loc_825A5024:
	// li r3,2
	ctx.r3.s64 = 2;
loc_825A5028:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825A5030"))) PPC_WEAK_FUNC(sub_825A5030);
PPC_FUNC_IMPL(__imp__sub_825A5030) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825a51b4
	if (cr6.eq) goto loc_825A51B4;
	// lwz r3,584(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 584);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a51b4
	if (cr6.eq) goto loc_825A51B4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825a51b4
	if (cr6.eq) goto loc_825A51B4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a51b4
	if (cr6.eq) goto loc_825A51B4;
	// addi r26,r28,588
	r26.s64 = r28.s64 + 588;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x825a51b4
	if (!cr6.eq) goto loc_825A51B4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a5124
	if (cr6.eq) goto loc_825A5124;
	// addi r11,r31,2
	r11.s64 = r31.s64 + 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x825a5124
	if (cr6.eq) goto loc_825A5124;
	// lhz r11,76(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 76);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x825a5124
	if (!cr6.gt) goto loc_825A5124;
	// lwz r11,616(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// rlwinm r4,r4,31,17,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r30,r31
	r30.u64 = r31.u64;
	// bl 0x825b78f0
	sub_825B78F0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x825a5154
	if (cr6.lt) goto loc_825A5154;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x825a514c
	if (cr6.eq) goto loc_825A514C;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_825A50F0:
	// lhz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// addi r30,r11,2
	r30.s64 = r11.s64 + 2;
	// sth r8,0(r31)
	PPC_STORE_U16(r31.u32 + 0, ctx.r8.u16);
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// sth r8,0(r29)
	PPC_STORE_U16(r29.u32 + 0, ctx.r8.u16);
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// blt cr6,0x825a50f0
	if (cr6.lt) goto loc_825A50F0;
	// b 0x825a514c
	goto loc_825A514C;
loc_825A5124:
	// lwz r11,616(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 616);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x825b78f0
	sub_825B78F0(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_825A514C:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x825a5184
	if (!cr6.lt) goto loc_825A5184;
loc_825A5154:
	// li r11,7
	r11.s64 = 7;
	// lwz r3,584(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 584);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r27,556(r28)
	PPC_STORE_U32(r28.u32 + 556, r27.u32);
	// stw r11,392(r28)
	PPC_STORE_U32(r28.u32 + 392, r11.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// bl 0x825b1030
	sub_825B1030(ctx, base);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
loc_825A5184:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x825a51a4
	if (!cr6.eq) goto loc_825A51A4;
	// li r11,2
	r11.s64 = 2;
	// stw r27,556(r28)
	PPC_STORE_U32(r28.u32 + 556, r27.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
loc_825A51A4:
	// stw r9,556(r28)
	PPC_STORE_U32(r28.u32 + 556, ctx.r9.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
loc_825A51B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825A51C0"))) PPC_WEAK_FUNC(sub_825A51C0);
PPC_FUNC_IMPL(__imp__sub_825A51C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,31944
	r11.s64 = r11.s64 + 31944;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x825ac600
	sub_825AC600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A51D0"))) PPC_WEAK_FUNC(sub_825A51D0);
PPC_FUNC_IMPL(__imp__sub_825A51D0) {
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
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,124
	ctx.r3.s64 = r31.s64 + 124;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,284
	ctx.r3.s64 = r31.s64 + 284;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,364
	ctx.r3.s64 = r31.s64 + 364;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,204
	ctx.r3.s64 = r31.s64 + 204;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,444(r31)
	PPC_STORE_U32(r31.u32 + 444, r11.u32);
	// stw r11,448(r31)
	PPC_STORE_U32(r31.u32 + 448, r11.u32);
	// bl 0x825ac608
	sub_825AC608(ctx, base);
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

__attribute__((alias("__imp__sub_825A524C"))) PPC_WEAK_FUNC(sub_825A524C);
PPC_FUNC_IMPL(__imp__sub_825A524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5250"))) PPC_WEAK_FUNC(sub_825A5250);
PPC_FUNC_IMPL(__imp__sub_825A5250) {
	PPC_FUNC_PROLOGUE();
	// b 0x825a51d0
	sub_825A51D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A5254"))) PPC_WEAK_FUNC(sub_825A5254);
PPC_FUNC_IMPL(__imp__sub_825A5254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5258"))) PPC_WEAK_FUNC(sub_825A5258);
PPC_FUNC_IMPL(__imp__sub_825A5258) {
	PPC_FUNC_PROLOGUE();
	// stw r4,444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 444, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5260"))) PPC_WEAK_FUNC(sub_825A5260);
PPC_FUNC_IMPL(__imp__sub_825A5260) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,444(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5268"))) PPC_WEAK_FUNC(sub_825A5268);
PPC_FUNC_IMPL(__imp__sub_825A5268) {
	PPC_FUNC_PROLOGUE();
	// stw r4,448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 448, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5270"))) PPC_WEAK_FUNC(sub_825A5270);
PPC_FUNC_IMPL(__imp__sub_825A5270) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,448(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5278"))) PPC_WEAK_FUNC(sub_825A5278);
PPC_FUNC_IMPL(__imp__sub_825A5278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,124
	ctx.r7.s64 = ctx.r3.s64 + 124;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5290"))) PPC_WEAK_FUNC(sub_825A5290);
PPC_FUNC_IMPL(__imp__sub_825A5290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,364
	ctx.r7.s64 = ctx.r3.s64 + 364;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A52A8"))) PPC_WEAK_FUNC(sub_825A52A8);
PPC_FUNC_IMPL(__imp__sub_825A52A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,364
	ctx.r3.s64 = ctx.r3.s64 + 364;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A52B0"))) PPC_WEAK_FUNC(sub_825A52B0);
PPC_FUNC_IMPL(__imp__sub_825A52B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,284
	ctx.r7.s64 = ctx.r3.s64 + 284;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A52C8"))) PPC_WEAK_FUNC(sub_825A52C8);
PPC_FUNC_IMPL(__imp__sub_825A52C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,284
	ctx.r3.s64 = ctx.r3.s64 + 284;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A52D0"))) PPC_WEAK_FUNC(sub_825A52D0);
PPC_FUNC_IMPL(__imp__sub_825A52D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r7,r3,204
	ctx.r7.s64 = ctx.r3.s64 + 204;
	// li r6,40
	ctx.r6.s64 = 40;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A52E8"))) PPC_WEAK_FUNC(sub_825A52E8);
PPC_FUNC_IMPL(__imp__sub_825A52E8) {
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
	// bl 0x825ac698
	sub_825AC698(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,31944
	r11.s64 = r11.s64 + 31944;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x825a51d0
	sub_825A51D0(ctx, base);
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

__attribute__((alias("__imp__sub_825A532C"))) PPC_WEAK_FUNC(sub_825A532C);
PPC_FUNC_IMPL(__imp__sub_825A532C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5330"))) PPC_WEAK_FUNC(sub_825A5330);
PPC_FUNC_IMPL(__imp__sub_825A5330) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,31944
	r11.s64 = r11.s64 + 31944;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x825ac600
	sub_825AC600(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a537c
	if (cr6.eq) goto loc_825A537C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32823
	ctx.r4.u64 = ctx.r4.u64 | 32823;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A537C:
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

__attribute__((alias("__imp__sub_825A5394"))) PPC_WEAK_FUNC(sub_825A5394);
PPC_FUNC_IMPL(__imp__sub_825A5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5398"))) PPC_WEAK_FUNC(sub_825A5398);
PPC_FUNC_IMPL(__imp__sub_825A5398) {
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
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a53c4
	if (cr6.eq) goto loc_825A53C4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_825A53C4:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a5400
	if (cr6.eq) goto loc_825A5400;
	// addi r3,r11,-4
	ctx.r3.s64 = r11.s64 + -4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x825a53fc
	if (cr6.eq) goto loc_825A53FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a5400
	goto loc_825A5400;
loc_825A53FC:
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_825A5400:
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
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

__attribute__((alias("__imp__sub_825A5438"))) PPC_WEAK_FUNC(sub_825A5438);
PPC_FUNC_IMPL(__imp__sub_825A5438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5458"))) PPC_WEAK_FUNC(sub_825A5458);
PPC_FUNC_IMPL(__imp__sub_825A5458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5478"))) PPC_WEAK_FUNC(sub_825A5478);
PPC_FUNC_IMPL(__imp__sub_825A5478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5498"))) PPC_WEAK_FUNC(sub_825A5498);
PPC_FUNC_IMPL(__imp__sub_825A5498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A54B8"))) PPC_WEAK_FUNC(sub_825A54B8);
PPC_FUNC_IMPL(__imp__sub_825A54B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A54D8"))) PPC_WEAK_FUNC(sub_825A54D8);
PPC_FUNC_IMPL(__imp__sub_825A54D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A54F8"))) PPC_WEAK_FUNC(sub_825A54F8);
PPC_FUNC_IMPL(__imp__sub_825A54F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5518"))) PPC_WEAK_FUNC(sub_825A5518);
PPC_FUNC_IMPL(__imp__sub_825A5518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5538"))) PPC_WEAK_FUNC(sub_825A5538);
PPC_FUNC_IMPL(__imp__sub_825A5538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5558"))) PPC_WEAK_FUNC(sub_825A5558);
PPC_FUNC_IMPL(__imp__sub_825A5558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5578"))) PPC_WEAK_FUNC(sub_825A5578);
PPC_FUNC_IMPL(__imp__sub_825A5578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,64(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5598"))) PPC_WEAK_FUNC(sub_825A5598);
PPC_FUNC_IMPL(__imp__sub_825A5598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,68(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A55A8"))) PPC_WEAK_FUNC(sub_825A55A8);
PPC_FUNC_IMPL(__imp__sub_825A55A8) {
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
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_825A55F4"))) PPC_WEAK_FUNC(sub_825A55F4);
PPC_FUNC_IMPL(__imp__sub_825A55F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A55F8"))) PPC_WEAK_FUNC(sub_825A55F8);
PPC_FUNC_IMPL(__imp__sub_825A55F8) {
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
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r11,60
	r11.s64 = r11.s64 * 60;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_825A5644"))) PPC_WEAK_FUNC(sub_825A5644);
PPC_FUNC_IMPL(__imp__sub_825A5644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5648"))) PPC_WEAK_FUNC(sub_825A5648);
PPC_FUNC_IMPL(__imp__sub_825A5648) {
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
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mulli r11,r4,60
	r11.s64 = ctx.r4.s64 * 60;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_825A5690"))) PPC_WEAK_FUNC(sub_825A5690);
PPC_FUNC_IMPL(__imp__sub_825A5690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,56(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x825a56d4
	if (cr6.lt) goto loc_825A56D4;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
loc_825A56B4:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825a56b4
	if (!cr0.eq) goto loc_825A56B4;
	// blr 
	return;
loc_825A56D4:
	// addi r11,r3,68
	r11.s64 = ctx.r3.s64 + 68;
loc_825A56D8:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x825a56d8
	if (!cr0.eq) goto loc_825A56D8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A56F8"))) PPC_WEAK_FUNC(sub_825A56F8);
PPC_FUNC_IMPL(__imp__sub_825A56F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x825a573c
	if (cr6.lt) goto loc_825A573C;
	// li r11,0
	r11.s64 = 0;
	// addi r10,r3,68
	ctx.r10.s64 = ctx.r3.s64 + 68;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
loc_825A571C:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r10
	reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x825a571c
	if (!cr0.eq) goto loc_825A571C;
	// blr 
	return;
loc_825A573C:
	// addi r11,r3,68
	r11.s64 = ctx.r3.s64 + 68;
loc_825A5740:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x825a5740
	if (!cr0.eq) goto loc_825A5740;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5760"))) PPC_WEAK_FUNC(sub_825A5760);
PPC_FUNC_IMPL(__imp__sub_825A5760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5778"))) PPC_WEAK_FUNC(sub_825A5778);
PPC_FUNC_IMPL(__imp__sub_825A5778) {
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
	// bl 0x8259f5c8
	sub_8259F5C8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,32048
	ctx.r10.s64 = r11.s64 + 32048;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
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

__attribute__((alias("__imp__sub_825A57D4"))) PPC_WEAK_FUNC(sub_825A57D4);
PPC_FUNC_IMPL(__imp__sub_825A57D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A57D8"))) PPC_WEAK_FUNC(sub_825A57D8);
PPC_FUNC_IMPL(__imp__sub_825A57D8) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,32048
	r11.s64 = r11.s64 + 32048;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x825a5398
	sub_825A5398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259f610
	sub_8259F610(ctx, base);
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

__attribute__((alias("__imp__sub_825A5818"))) PPC_WEAK_FUNC(sub_825A5818);
PPC_FUNC_IMPL(__imp__sub_825A5818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x825a5920
	if (cr6.lt) goto loc_825A5920;
	// add r11,r31,r27
	r11.u64 = r31.u64 + r27.u64;
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// andc r25,r11,r10
	r25.u64 = r11.u64 & ~ctx.r10.u64;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// mullw r11,r25,r29
	r11.s64 = int64_t(r25.s32) * int64_t(r29.s32);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r3,44(r28)
	PPC_STORE_U32(r28.u32 + 44, ctx.r3.u32);
	// bne cr6,0x825a5890
	if (!cr6.eq) goto loc_825A5890;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// b 0x825a58bc
	goto loc_825A58BC;
loc_825A5890:
	// lis r11,1092
	r11.s64 = 71565312;
	// ori r11,r11,17476
	r11.u64 = r11.u64 | 17476;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x825a58b4
	if (cr6.gt) goto loc_825A58B4;
	// mulli r11,r29,60
	r11.s64 = r29.s64 * 60;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x825a58b8
	if (!cr6.gt) goto loc_825A58B8;
loc_825A58B4:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_825A58B8:
	// bl 0x8259de10
	sub_8259DE10(ctx, base);
loc_825A58BC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a58fc
	if (cr6.eq) goto loc_825A58FC;
	// addi r26,r3,4
	r26.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// addi r31,r29,-1
	r31.s64 = r29.s64 + -1;
	// mr r30,r26
	r30.u64 = r26.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a58f4
	if (cr6.lt) goto loc_825A58F4;
loc_825A58DC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8259e090
	sub_8259E090(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,60
	r30.s64 = r30.s64 + 60;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x825a58dc
	if (!cr6.lt) goto loc_825A58DC;
loc_825A58F4:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// b 0x825a5900
	goto loc_825A5900;
loc_825A58FC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825A5900:
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// stw r10,48(r28)
	PPC_STORE_U32(r28.u32 + 48, ctx.r10.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a5918
	if (cr6.eq) goto loc_825A5918;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825a5940
	if (!cr6.eq) goto loc_825A5940;
loc_825A5918:
	// lis r24,-32761
	r24.s64 = -2147024896;
	// ori r24,r24,14
	r24.u64 = r24.u64 | 14;
loc_825A5920:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A5934:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
loc_825A5940:
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r29,52(r28)
	PPC_STORE_U32(r28.u32 + 52, r29.u32);
	// addi r10,r27,-1
	ctx.r10.s64 = r27.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r31,0
	r31.s64 = 0;
	// andc r30,r11,r10
	r30.u64 = r11.u64 & ~ctx.r10.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a5934
	if (cr6.eq) goto loc_825A5934;
	// li r29,0
	r29.s64 = 0;
loc_825A5964:
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// bl 0x8259de30
	sub_8259DE30(ctx, base);
	// lwz r11,52(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 52);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// add r30,r30,r25
	r30.u64 = r30.u64 + r25.u64;
	// addi r29,r29,60
	r29.s64 = r29.s64 + 60;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x825a5964
	if (cr6.lt) goto loc_825A5964;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_825A599C"))) PPC_WEAK_FUNC(sub_825A599C);
PPC_FUNC_IMPL(__imp__sub_825A599C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A59A0"))) PPC_WEAK_FUNC(sub_825A59A0);
PPC_FUNC_IMPL(__imp__sub_825A59A0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// rlwinm r11,r28,0,30,30
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a5a14
	if (cr6.eq) goto loc_825A5A14;
	// addi r29,r30,-4
	r29.s64 = r30.s64 + -4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mulli r10,r11,60
	ctx.r10.s64 = r11.s64 * 60;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x825a59f4
	if (cr6.lt) goto loc_825A59F4;
loc_825A59DC:
	// addi r30,r30,-60
	r30.s64 = r30.s64 + -60;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8259e0e0
	sub_8259E0E0(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bge cr6,0x825a59dc
	if (!cr6.lt) goto loc_825A59DC;
loc_825A59F4:
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a5a08
	if (cr6.eq) goto loc_825A5A08;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8259de20
	sub_8259DE20(ctx, base);
loc_825A5A08:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_825A5A14:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8259e0e0
	sub_8259E0E0(ctx, base);
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a5a30
	if (cr6.eq) goto loc_825A5A30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8259de20
	sub_8259DE20(ctx, base);
loc_825A5A30:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825A5A3C"))) PPC_WEAK_FUNC(sub_825A5A3C);
PPC_FUNC_IMPL(__imp__sub_825A5A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5A40"))) PPC_WEAK_FUNC(sub_825A5A40);
PPC_FUNC_IMPL(__imp__sub_825A5A40) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,32048
	r11.s64 = r11.s64 + 32048;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x825a5398
	sub_825A5398(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8259f610
	sub_8259F610(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a5a94
	if (cr6.eq) goto loc_825A5A94;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32782
	ctx.r4.u64 = ctx.r4.u64 | 32782;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A5A94:
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

__attribute__((alias("__imp__sub_825A5AAC"))) PPC_WEAK_FUNC(sub_825A5AAC);
PPC_FUNC_IMPL(__imp__sub_825A5AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5AB0"))) PPC_WEAK_FUNC(sub_825A5AB0);
PPC_FUNC_IMPL(__imp__sub_825A5AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,280(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 280, temp.u32);
	// stw r10,212(r3)
	PPC_STORE_U32(ctx.r3.u32 + 212, ctx.r10.u32);
	// stw r10,216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 216, ctx.r10.u32);
	// stw r10,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r10.u32);
	// stw r11,244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 244, r11.u32);
	// stw r11,248(r3)
	PPC_STORE_U32(ctx.r3.u32 + 248, r11.u32);
	// stw r11,252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 252, r11.u32);
	// stw r11,256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 256, r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r11,220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 220, r11.u32);
	// stw r11,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, r11.u32);
	// stw r11,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, r11.u32);
	// stw r11,236(r3)
	PPC_STORE_U32(ctx.r3.u32 + 236, r11.u32);
	// stw r11,260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 260, r11.u32);
	// stw r11,264(r3)
	PPC_STORE_U32(ctx.r3.u32 + 264, r11.u32);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, r11.u32);
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, r11.u32);
	// stw r11,276(r3)
	PPC_STORE_U32(ctx.r3.u32 + 276, r11.u32);
	// std r11,288(r3)
	PPC_STORE_U64(ctx.r3.u32 + 288, r11.u64);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, r11.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, r11.u32);
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, r11.u32);
	// stw r11,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, r11.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, r11.u32);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, r11.u32);
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, r11.u32);
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r11.u32);
	// stw r11,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r11.u32);
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, r11.u32);
	// stw r11,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, r11.u32);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r11.u32);
	// stw r11,156(r3)
	PPC_STORE_U32(ctx.r3.u32 + 156, r11.u32);
	// stw r11,160(r3)
	PPC_STORE_U32(ctx.r3.u32 + 160, r11.u32);
	// stw r11,164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 164, r11.u32);
	// stw r11,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, r11.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r11.u32);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, r11.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, r11.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, r11.u32);
	// stw r11,192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 192, r11.u32);
	// stw r11,196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 196, r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, r11.u32);
	// stw r11,204(r3)
	PPC_STORE_U32(ctx.r3.u32 + 204, r11.u32);
	// stw r11,208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 208, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5BB8"))) PPC_WEAK_FUNC(sub_825A5BB8);
PPC_FUNC_IMPL(__imp__sub_825A5BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5C04"))) PPC_WEAK_FUNC(sub_825A5C04);
PPC_FUNC_IMPL(__imp__sub_825A5C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5C08"))) PPC_WEAK_FUNC(sub_825A5C08);
PPC_FUNC_IMPL(__imp__sub_825A5C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,36(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5C5C"))) PPC_WEAK_FUNC(sub_825A5C5C);
PPC_FUNC_IMPL(__imp__sub_825A5C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5C60"))) PPC_WEAK_FUNC(sub_825A5C60);
PPC_FUNC_IMPL(__imp__sub_825A5C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r8,36(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r10,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r10.u64);
	// std r10,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r10.u64);
	// std r10,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r10.u64);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A5CB8"))) PPC_WEAK_FUNC(sub_825A5CB8);
PPC_FUNC_IMPL(__imp__sub_825A5CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5CCC"))) PPC_WEAK_FUNC(sub_825A5CCC);
PPC_FUNC_IMPL(__imp__sub_825A5CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5CD0"))) PPC_WEAK_FUNC(sub_825A5CD0);
PPC_FUNC_IMPL(__imp__sub_825A5CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r18{};
	PPCRegister r26{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x825a5d54
	if (cr6.gt) goto loc_825A5D54;
	// lis r12,-32166
	r12.s64 = -2108030976;
	// addi r12,r12,23840
	r12.s64 = r12.s64 + 23840;
	// rlwinm r0,r11,2,0,29
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_825A5D3C;
	case 1:
		goto loc_825A5D48;
	case 2:
		goto loc_825A5D54;
	case 3:
		goto loc_825A5D30;
	default:
		__builtin_unreachable();
	}
	// lwz r18,23868(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 23868);
	// lwz r18,23880(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 23880);
	// lwz r18,23892(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 23892);
	// lwz r18,23856(r26)
	r18.u64 = PPC_LOAD_U32(r26.u32 + 23856);
loc_825A5D30:
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
	// b 0x825a5d5c
	goto loc_825A5D5C;
loc_825A5D3C:
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r29,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r29.u32);
	// b 0x825a5d5c
	goto loc_825A5D5C;
loc_825A5D48:
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x825a5d5c
	goto loc_825A5D5C;
loc_825A5D54:
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r29.u32);
loc_825A5D5C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825A5D7C"))) PPC_WEAK_FUNC(sub_825A5D7C);
PPC_FUNC_IMPL(__imp__sub_825A5D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5D80"))) PPC_WEAK_FUNC(sub_825A5D80);
PPC_FUNC_IMPL(__imp__sub_825A5D80) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825a5db8
	if (cr6.eq) goto loc_825A5DB8;
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
loc_825A5DB8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a5ddc
	if (cr6.eq) goto loc_825A5DDC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
loc_825A5DDC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
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

__attribute__((alias("__imp__sub_825A5DFC"))) PPC_WEAK_FUNC(sub_825A5DFC);
PPC_FUNC_IMPL(__imp__sub_825A5DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5E00"))) PPC_WEAK_FUNC(sub_825A5E00);
PPC_FUNC_IMPL(__imp__sub_825A5E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r6,8
	ctx.r5.s64 = ctx.r6.s64 + 8;
	// lwz r4,4(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5E1C"))) PPC_WEAK_FUNC(sub_825A5E1C);
PPC_FUNC_IMPL(__imp__sub_825A5E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5E20"))) PPC_WEAK_FUNC(sub_825A5E20);
PPC_FUNC_IMPL(__imp__sub_825A5E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A5E34"))) PPC_WEAK_FUNC(sub_825A5E34);
PPC_FUNC_IMPL(__imp__sub_825A5E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A5E38"))) PPC_WEAK_FUNC(sub_825A5E38);
PPC_FUNC_IMPL(__imp__sub_825A5E38) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x825a5ed0
	if (!cr6.eq) goto loc_825A5ED0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x825a5ed0
	if (!cr6.eq) goto loc_825A5ED0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r30,0
	r30.s64 = 0;
	// b 0x825a5ed8
	goto loc_825A5ED8;
loc_825A5ED0:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_825A5ED8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_825A5F08"))) PPC_WEAK_FUNC(sub_825A5F08);
PPC_FUNC_IMPL(__imp__sub_825A5F08) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x825a6004
	if (!cr6.eq) goto loc_825A6004;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// bne cr6,0x825a6004
	if (!cr6.eq) goto loc_825A6004;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,288(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,292(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825a600c
	goto loc_825A600C;
loc_825A6004:
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
loc_825A600C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_825A603C"))) PPC_WEAK_FUNC(sub_825A603C);
PPC_FUNC_IMPL(__imp__sub_825A603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6040"))) PPC_WEAK_FUNC(sub_825A6040);
PPC_FUNC_IMPL(__imp__sub_825A6040) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,288(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,292(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,276(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 276);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 280);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,208(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 208);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
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
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6140"))) PPC_WEAK_FUNC(sub_825A6140);
PPC_FUNC_IMPL(__imp__sub_825A6140) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r4,r11,32144
	ctx.r4.s64 = r11.s64 + 32144;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r11,30168
	ctx.r3.s64 = r11.s64 + 30168;
	// bl 0x826e4c8c
	__imp__DbgPrint(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A6178"))) PPC_WEAK_FUNC(sub_825A6178);
PPC_FUNC_IMPL(__imp__sub_825A6178) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6240
	if (cr6.eq) goto loc_825A6240;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A6240:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a6264
	if (cr6.eq) goto loc_825A6264;
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
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825A6264:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6284
	if (cr6.eq) goto loc_825A6284;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_825A6284:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a62a8
	if (cr6.eq) goto loc_825A62A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825A62A8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a62d8
	if (cr6.eq) goto loc_825A62D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,124(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825A62D8:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x825a6358
	if (cr6.lt) goto loc_825A6358;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a6310
	if (cr6.eq) goto loc_825A6310;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,124(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825A6310:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x825a6358
	if (cr6.lt) goto loc_825A6358;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a6344
	if (cr6.eq) goto loc_825A6344;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x825a5760
	sub_825A5760(ctx, base);
loc_825A6344:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x825a6358
	if (cr6.lt) goto loc_825A6358;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8259d480
	sub_8259D480(ctx, base);
loc_825A6358:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a639c
	if (cr6.eq) goto loc_825A639C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A639C:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a63b8
	if (cr6.eq) goto loc_825A63B8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A63B8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a63d4
	if (cr6.eq) goto loc_825A63D4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A63D4:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a63f0
	if (cr6.eq) goto loc_825A63F0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A63F0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825a6414
	if (cr6.eq) goto loc_825A6414;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_825A6414:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6434
	if (cr6.eq) goto loc_825A6434;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
loc_825A6434:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6454
	if (cr6.eq) goto loc_825A6454;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
loc_825A6454:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6474
	if (cr6.eq) goto loc_825A6474;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
loc_825A6474:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6494
	if (cr6.eq) goto loc_825A6494;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
loc_825A6494:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a64b4
	if (cr6.eq) goto loc_825A64B4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
loc_825A64B4:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a64d0
	if (cr6.eq) goto loc_825A64D0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A64D0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825A64DC"))) PPC_WEAK_FUNC(sub_825A64DC);
PPC_FUNC_IMPL(__imp__sub_825A64DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A64E0"))) PPC_WEAK_FUNC(sub_825A64E0);
PPC_FUNC_IMPL(__imp__sub_825A64E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lfs f0,280(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 280);
	f0.f64 = double(temp.f32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// bne cr6,0x825a6538
	if (!cr6.eq) goto loc_825A6538;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
loc_825A6538:
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
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a65cc
	if (cr6.eq) goto loc_825A65CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A65CC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a65e8
	if (cr6.eq) goto loc_825A65E8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A65E8:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6608
	if (cr6.eq) goto loc_825A6608;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825A6608:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a662c
	if (cr6.eq) goto loc_825A662C;
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
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825A662C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a679c
	if (cr6.lt) goto loc_825A679C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f30,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bgt cr6,0x825a664c
	if (cr6.gt) goto loc_825A664C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_825A664C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a6798
	if (cr6.lt) goto loc_825A6798;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,280(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 280, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bne cr6,0x825a66a0
	if (!cr6.eq) goto loc_825A66A0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_825A66A0:
	// fcmpu cr6,f31,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f0.f64);
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// bne cr6,0x825a6798
	if (!cr6.eq) goto loc_825A6798;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// fcmpu cr6,f13,f30
	cr6.compare(ctx.f13.f64, f30.f64);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// bge cr6,0x825a6734
	if (!cr6.lt) goto loc_825A6734;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// ld r4,288(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 288);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a6770
	if (cr6.lt) goto loc_825A6770;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a6770
	if (cr6.lt) goto loc_825A6770;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// bl 0x825a5760
	sub_825A5760(ctx, base);
	// b 0x825a6758
	goto loc_825A6758;
loc_825A6734:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ld r4,128(r10)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r10.u32 + 128);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825A6758:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x825a6770
	if (cr6.lt) goto loc_825A6770;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// bl 0x8259d480
	sub_8259D480(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_825A6770:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,196(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 196);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A6798:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825A679C:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a67c0
	if (cr6.eq) goto loc_825A67C0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825A67C0:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a67e4
	if (cr6.eq) goto loc_825A67E4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_825A67E4:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a67fc
	if (cr6.eq) goto loc_825A67FC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A67FC:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6818
	if (cr6.eq) goto loc_825A6818;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A6818:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a684c
	if (cr6.eq) goto loc_825A684C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
loc_825A684C:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a686c
	if (cr6.eq) goto loc_825A686C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
loc_825A686C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a688c
	if (cr6.eq) goto loc_825A688C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
loc_825A688C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a68ac
	if (cr6.eq) goto loc_825A68AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
loc_825A68AC:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a68cc
	if (cr6.eq) goto loc_825A68CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
loc_825A68CC:
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a68e8
	if (cr6.eq) goto loc_825A68E8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A68E8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825A68FC"))) PPC_WEAK_FUNC(sub_825A68FC);
PPC_FUNC_IMPL(__imp__sub_825A68FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6900"))) PPC_WEAK_FUNC(sub_825A6900);
PPC_FUNC_IMPL(__imp__sub_825A6900) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x825a694c
	if (cr6.eq) goto loc_825A694C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_825A694C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x825a696c
	if (cr6.eq) goto loc_825A696C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_825A696C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x825a69a8
	if (cr6.eq) goto loc_825A69A8;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_825A69A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825A69B4"))) PPC_WEAK_FUNC(sub_825A69B4);
PPC_FUNC_IMPL(__imp__sub_825A69B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A69B8"))) PPC_WEAK_FUNC(sub_825A69B8);
PPC_FUNC_IMPL(__imp__sub_825A69B8) {
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
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a69f4
	if (cr6.eq) goto loc_825A69F4;
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
loc_825A69F4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_825A6A18"))) PPC_WEAK_FUNC(sub_825A6A18);
PPC_FUNC_IMPL(__imp__sub_825A6A18) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x825a6aac
	if (cr6.eq) goto loc_825A6AAC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82599d58
	sub_82599D58(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x825a6a90
	if (cr6.eq) goto loc_825A6A90;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A6A90:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825A6A94:
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
loc_825A6AAC:
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x825a6a94
	goto loc_825A6A94;
}

__attribute__((alias("__imp__sub_825A6AB4"))) PPC_WEAK_FUNC(sub_825A6AB4);
PPC_FUNC_IMPL(__imp__sub_825A6AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6AB8"))) PPC_WEAK_FUNC(sub_825A6AB8);
PPC_FUNC_IMPL(__imp__sub_825A6AB8) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,244(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 244);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825a6b04
	if (!cr6.eq) goto loc_825A6B04;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,248(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x825a6bb0
	if (cr6.eq) goto loc_825A6BB0;
loc_825A6B04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,180(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 180);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,184(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 184);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,192(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 192);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x825a6ca8
	if (cr6.lt) goto loc_825A6CA8;
loc_825A6BB0:
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,288(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 288);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,292(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 292);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,264(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,268(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 268);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r30.u32);
	// stw r30,248(r31)
	PPC_STORE_U32(r31.u32 + 248, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,252(r31)
	PPC_STORE_U32(r31.u32 + 252, r30.u32);
	// stw r30,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r30.u32);
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// stw r10,240(r31)
	PPC_STORE_U32(r31.u32 + 240, ctx.r10.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(r31.u32 + 236, r30.u32);
	// stw r30,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r30.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,232(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 232);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,236(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A6CA8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825A6CB4"))) PPC_WEAK_FUNC(sub_825A6CB4);
PPC_FUNC_IMPL(__imp__sub_825A6CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6CB8"))) PPC_WEAK_FUNC(sub_825A6CB8);
PPC_FUNC_IMPL(__imp__sub_825A6CB8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,252(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 252);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x825a6d20
	if (!cr6.eq) goto loc_825A6D20;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x825a6d20
	if (!cr6.gt) goto loc_825A6D20;
	// addi r3,r11,-5
	ctx.r3.s64 = r11.s64 + -5;
	// bl 0x823b5498
	sub_823B5498(ctx, base);
loc_825A6D20:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a6d50
	if (cr6.eq) goto loc_825A6D50;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// bl 0x823b9fc0
	sub_823B9FC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
loc_825A6D50:
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

__attribute__((alias("__imp__sub_825A6D68"))) PPC_WEAK_FUNC(sub_825A6D68);
PPC_FUNC_IMPL(__imp__sub_825A6D68) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x825a6d98
	if (cr6.eq) goto loc_825A6D98;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825A6D98:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825a6dc8
	if (cr6.eq) goto loc_825A6DC8;
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// bl 0x823b9fc0
	sub_823B9FC0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(r31.u32 + 240, r11.u32);
loc_825A6DC8:
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

__attribute__((alias("__imp__sub_825A6DDC"))) PPC_WEAK_FUNC(sub_825A6DDC);
PPC_FUNC_IMPL(__imp__sub_825A6DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825A6DE0"))) PPC_WEAK_FUNC(sub_825A6DE0);
PPC_FUNC_IMPL(__imp__sub_825A6DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A6DF0"))) PPC_WEAK_FUNC(sub_825A6DF0);
PPC_FUNC_IMPL(__imp__sub_825A6DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,136(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825A6E00"))) PPC_WEAK_FUNC(sub_825A6E00);
PPC_FUNC_IMPL(__imp__sub_825A6E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
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
}

__attribute__((alias("__imp__sub_825A6E30"))) PPC_WEAK_FUNC(sub_825A6E30);
PPC_FUNC_IMPL(__imp__sub_825A6E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
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
}

__attribute__((alias("__imp__sub_825A6E60"))) PPC_WEAK_FUNC(sub_825A6E60);
PPC_FUNC_IMPL(__imp__sub_825A6E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,148(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 148);
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
}

__attribute__((alias("__imp__sub_825A6E90"))) PPC_WEAK_FUNC(sub_825A6E90);
PPC_FUNC_IMPL(__imp__sub_825A6E90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,152(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 152);
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
}

__attribute__((alias("__imp__sub_825A6EC0"))) PPC_WEAK_FUNC(sub_825A6EC0);
PPC_FUNC_IMPL(__imp__sub_825A6EC0) {
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
	// bl 0x8259f5c8
	sub_8259F5C8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,32192
	r11.s64 = r11.s64 + 32192;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x825a5ab0
	sub_825A5AB0(ctx, base);
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

__attribute__((alias("__imp__sub_825A6F00"))) PPC_WEAK_FUNC(sub_825A6F00);
PPC_FUNC_IMPL(__imp__sub_825A6F00) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6F18"))) PPC_WEAK_FUNC(sub_825A6F18);
PPC_FUNC_IMPL(__imp__sub_825A6F18) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6F30"))) PPC_WEAK_FUNC(sub_825A6F30);
PPC_FUNC_IMPL(__imp__sub_825A6F30) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6F48"))) PPC_WEAK_FUNC(sub_825A6F48);
PPC_FUNC_IMPL(__imp__sub_825A6F48) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6F60"))) PPC_WEAK_FUNC(sub_825A6F60);
PPC_FUNC_IMPL(__imp__sub_825A6F60) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6F78"))) PPC_WEAK_FUNC(sub_825A6F78);
PPC_FUNC_IMPL(__imp__sub_825A6F78) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6F90"))) PPC_WEAK_FUNC(sub_825A6F90);
PPC_FUNC_IMPL(__imp__sub_825A6F90) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6FA8"))) PPC_WEAK_FUNC(sub_825A6FA8);
PPC_FUNC_IMPL(__imp__sub_825A6FA8) {
	PPC_FUNC_PROLOGUE();
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6FC0"))) PPC_WEAK_FUNC(sub_825A6FC0);
PPC_FUNC_IMPL(__imp__sub_825A6FC0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// b 0x826e524c
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6FD0"))) PPC_WEAK_FUNC(sub_825A6FD0);
PPC_FUNC_IMPL(__imp__sub_825A6FD0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// b 0x826e524c
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6FE0"))) PPC_WEAK_FUNC(sub_825A6FE0);
PPC_FUNC_IMPL(__imp__sub_825A6FE0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,116
	ctx.r3.s64 = ctx.r3.s64 + 116;
	// b 0x826e524c
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A6FF0"))) PPC_WEAK_FUNC(sub_825A6FF0);
PPC_FUNC_IMPL(__imp__sub_825A6FF0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,132
	ctx.r3.s64 = ctx.r3.s64 + 132;
	// b 0x826e524c
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7000"))) PPC_WEAK_FUNC(sub_825A7000);
PPC_FUNC_IMPL(__imp__sub_825A7000) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x826e524c
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7010"))) PPC_WEAK_FUNC(sub_825A7010);
PPC_FUNC_IMPL(__imp__sub_825A7010) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x826e524c
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7020"))) PPC_WEAK_FUNC(sub_825A7020);
PPC_FUNC_IMPL(__imp__sub_825A7020) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x826e524c
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7030"))) PPC_WEAK_FUNC(sub_825A7030);
PPC_FUNC_IMPL(__imp__sub_825A7030) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x826e524c
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7040"))) PPC_WEAK_FUNC(sub_825A7040);
PPC_FUNC_IMPL(__imp__sub_825A7040) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,148
	ctx.r3.s64 = ctx.r3.s64 + 148;
	// b 0x826e522c
	__imp__KeResetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7048"))) PPC_WEAK_FUNC(sub_825A7048);
PPC_FUNC_IMPL(__imp__sub_825A7048) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,164
	ctx.r3.s64 = ctx.r3.s64 + 164;
	// b 0x826e522c
	__imp__KeResetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7050"))) PPC_WEAK_FUNC(sub_825A7050);
PPC_FUNC_IMPL(__imp__sub_825A7050) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,180
	ctx.r3.s64 = ctx.r3.s64 + 180;
	// b 0x826e522c
	__imp__KeResetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7058"))) PPC_WEAK_FUNC(sub_825A7058);
PPC_FUNC_IMPL(__imp__sub_825A7058) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,196
	ctx.r3.s64 = ctx.r3.s64 + 196;
	// b 0x826e522c
	__imp__KeResetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825A7060"))) PPC_WEAK_FUNC(sub_825A7060);
PPC_FUNC_IMPL(__imp__sub_825A7060) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A7068"))) PPC_WEAK_FUNC(sub_825A7068);
PPC_FUNC_IMPL(__imp__sub_825A7068) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825A7070"))) PPC_WEAK_FUNC(sub_825A7070);
PPC_FUNC_IMPL(__imp__sub_825A7070) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,220(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// blr 
	return;
}

