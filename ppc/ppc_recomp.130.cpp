#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823A4230"))) PPC_WEAK_FUNC(sub_823A4230);
PPC_FUNC_IMPL(__imp__sub_823A4230) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_823A425C"))) PPC_WEAK_FUNC(sub_823A425C);
PPC_FUNC_IMPL(__imp__sub_823A425C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4260"))) PPC_WEAK_FUNC(sub_823A4260);
PPC_FUNC_IMPL(__imp__sub_823A4260) {
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
	// rlwinm r30,r3,3,0,28
	r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r31,r11,-23072
	r31.s64 = r11.s64 + -23072;
	// lwzx r11,r30,r31
	r11.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a42a0
	if (!cr6.eq) goto loc_823A42A0;
	// bl 0x823a4120
	sub_823A4120(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823a42a0
	if (!cr0.eq) goto loc_823A42A0;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x8239f088
	sub_8239F088(ctx, base);
loc_823A42A0:
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r31.u32);
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_823A42C0"))) PPC_WEAK_FUNC(sub_823A42C0);
PPC_FUNC_IMPL(__imp__sub_823A42C0) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4310
	if (cr6.eq) goto loc_823A4310;
	// b 0x823a4300
	goto loc_823A4300;
loc_823A42E4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823A4300:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// bne 0x823a42e4
	if (!cr0.eq) goto loc_823A42E4;
loc_823A4310:
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

__attribute__((alias("__imp__sub_823A4324"))) PPC_WEAK_FUNC(sub_823A4324);
PPC_FUNC_IMPL(__imp__sub_823A4324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4328"))) PPC_WEAK_FUNC(sub_823A4328);
PPC_FUNC_IMPL(__imp__sub_823A4328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// lwz r10,17592(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17592);
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a4344
	if (!cr0.eq) goto loc_823A4344;
loc_823A433C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823A4344:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x823a4364
	if (cr6.lt) goto loc_823A4364;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x823a4364
	if (cr6.gt) goto loc_823A4364;
	// addi r3,r11,-47
	ctx.r3.s64 = r11.s64 + -47;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// stw r11,17592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17592, r11.u32);
	// blr 
	return;
loc_823A4364:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a43a0
	goto loc_823A43A0;
loc_823A436C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a433c
	if (cr6.eq) goto loc_823A433C;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x823a43bc
	if (cr6.lt) goto loc_823A43BC;
	// cmpwi cr6,r11,80
	cr6.compare<int32_t>(r11.s32, 80, xer);
	// bgt cr6,0x823a43bc
	if (cr6.gt) goto loc_823A43BC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// stw r10,17592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17592, ctx.r10.u32);
	// addi r3,r8,-65
	ctx.r3.s64 = ctx.r8.s64 + -65;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r11,r7
	r11.s64 = ctx.r7.s8;
loc_823A43A0:
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bne cr6,0x823a436c
	if (!cr6.eq) goto loc_823A436C;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,64
	cr6.compare<uint32_t>(ctx.r8.u32, 64, xer);
	// stw r11,17592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17592, r11.u32);
	// beqlr cr6
	if (cr6.eq) return;
loc_823A43BC:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A43C4"))) PPC_WEAK_FUNC(sub_823A43C4);
PPC_FUNC_IMPL(__imp__sub_823A43C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A43C8"))) PPC_WEAK_FUNC(sub_823A43C8);
PPC_FUNC_IMPL(__imp__sub_823A43C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lis r6,-32127
	ctx.r6.s64 = -2105475072;
	// lwz r11,17592(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 17592);
loc_823A43DC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r10,95
	cr6.compare<uint32_t>(ctx.r10.u32, 95, xer);
	// bne cr6,0x823a43f8
	if (!cr6.eq) goto loc_823A43F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
loc_823A43F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x823a4410
	if (cr6.lt) goto loc_823A4410;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// ble cr6,0x823a44b0
	if (!cr6.gt) goto loc_823A44B0;
loc_823A4410:
	// cmpwi cr6,r10,36
	cr6.compare<int32_t>(ctx.r10.s32, 36, xer);
	// bne cr6,0x823a4734
	if (!cr6.eq) goto loc_823A4734;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,66
	cr6.compare<int32_t>(ctx.r10.s32, 66, xer);
	// bgt cr6,0x823a4628
	if (cr6.gt) goto loc_823A4628;
	// beq cr6,0x823a4620
	if (cr6.eq) goto loc_823A4620;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823a4614
	if (cr6.eq) goto loc_823A4614;
	// cmpwi cr6,r10,36
	cr6.compare<int32_t>(ctx.r10.s32, 36, xer);
	// bne cr6,0x823a45a8
	if (!cr6.eq) goto loc_823A45A8;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,80
	cr6.compare<uint32_t>(ctx.r9.u32, 80, xer);
	// bne cr6,0x823a4460
	if (!cr6.eq) goto loc_823A4460;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823A4460:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r10,r10,-70
	ctx.r10.s64 = ctx.r10.s64 + -70;
	// cmplwi cr6,r10,11
	cr6.compare<uint32_t>(ctx.r10.u32, 11, xer);
	// bgt cr6,0x823a4728
	if (cr6.gt) goto loc_823A4728;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-28968
	r12.s64 = r12.s64 + -28968;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32198
	r12.s64 = -2110128128;
	// addi r12,r12,17572
	r12.s64 = r12.s64 + 17572;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_823A44A4;
	case 1:
		goto loc_823A4728;
	case 2:
		goto loc_823A44A4;
	case 3:
		goto loc_823A4728;
	case 4:
		goto loc_823A45D0;
	case 5:
		goto loc_823A4728;
	case 6:
		goto loc_823A44A4;
	case 7:
		goto loc_823A44A4;
	case 8:
		goto loc_823A45D0;
	case 9:
		goto loc_823A45D0;
	case 10:
		goto loc_823A4728;
	case 11:
		goto loc_823A44A4;
	default:
		__builtin_unreachable();
	}
loc_823A44A4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
	// b 0x823a43dc
	goto loc_823A43DC;
loc_823A44B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ori r10,r3,32768
	ctx.r10.u64 = ctx.r3.u64 | 32768;
	// ori r3,r10,8192
	ctx.r3.u64 = ctx.r10.u64 | 8192;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// addi r9,r11,-65
	ctx.r9.s64 = r11.s64 + -65;
	// clrlwi. r11,r9,31
	r11.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a44d8
	if (!cr0.eq) goto loc_823A44D8;
	// rlwinm r3,r10,0,19,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_823A44D8:
	// cmpwi cr6,r9,24
	cr6.compare<int32_t>(ctx.r9.s32, 24, xer);
	// bge cr6,0x823a4888
	if (!cr6.lt) goto loc_823A4888;
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// beq 0x823a44f4
	if (cr0.eq) goto loc_823A44F4;
	// rlwimi r3,r8,11,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x823a44f8
	goto loc_823A44F8;
loc_823A44F4:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_823A44F8:
	// rlwinm. r11,r9,0,27,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a454c
	if (cr0.eq) goto loc_823A454C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x823a4534
	if (cr6.eq) goto loc_823A4534;
	// cmpwi cr6,r11,16
	cr6.compare<int32_t>(r11.s32, 16, xer);
	// beq cr6,0x823a451c
	if (cr6.eq) goto loc_823A451C;
loc_823A4510:
	// lis r3,0
	ctx.r3.s64 = 0;
loc_823A4514:
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x823a4888
	goto loc_823A4888;
loc_823A451C:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a452c
	if (cr0.eq) goto loc_823A452C;
	// rlwinm r3,r3,0,26,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// b 0x823a4560
	goto loc_823A4560;
loc_823A452C:
	// rlwinm r3,r3,0,21,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// b 0x823a4560
	goto loc_823A4560;
loc_823A4534:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a4544
	if (cr0.eq) goto loc_823A4544;
	// rlwimi r3,r8,7,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x823a4560
	goto loc_823A4560;
loc_823A4544:
	// rlwimi r3,r8,12,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x823a4560
	goto loc_823A4560;
loc_823A454C:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a455c
	if (cr0.eq) goto loc_823A455C;
	// rlwimi r3,r8,6,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x823a4560
	goto loc_823A4560;
loc_823A455C:
	// rlwimi r3,r8,11,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
loc_823A4560:
	// rlwinm. r11,r9,0,29,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a4888
	if (cr0.eq) goto loc_823A4888;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a4590
	if (cr6.eq) goto loc_823A4590;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x823a4588
	if (cr6.eq) goto loc_823A4588;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x823a4510
	if (!cr6.eq) goto loc_823A4510;
	// rlwimi r3,r8,10,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 10) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4588:
	// rlwimi r3,r8,8,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4590:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a45a0
	if (cr0.eq) goto loc_823A45A0;
	// rlwimi r3,r8,9,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 9) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A45A0:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// b 0x823a4888
	goto loc_823A4888;
loc_823A45A8:
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// ble cr6,0x823a4510
	if (!cr6.gt) goto loc_823A4510;
	// cmpwi cr6,r10,53
	cr6.compare<int32_t>(ctx.r10.s32, 53, xer);
	// ble cr6,0x823a4654
	if (!cr6.gt) goto loc_823A4654;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// bne cr6,0x823a4510
	if (!cr6.eq) goto loc_823A4510;
	// rlwinm r10,r3,0,24,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// ori r3,r10,36864
	ctx.r3.u64 = ctx.r10.u64 | 36864;
	// b 0x823a4728
	goto loc_823A4728;
loc_823A45D0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x823a4608
	if (cr6.lt) goto loc_823A4608;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x823a4608
	if (cr6.gt) goto loc_823A4608;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,-47
	r11.s64 = r11.s64 + -47;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
	// bl 0x823a43c8
	sub_823A43C8(ctx, base);
	// oris r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 65536;
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4608:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x823a4728
	goto loc_823A4728;
loc_823A4614:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// b 0x823a4728
	goto loc_823A4728;
loc_823A4620:
	// ori r3,r3,38912
	ctx.r3.u64 = ctx.r3.u64 | 38912;
	// b 0x823a4728
	goto loc_823A4728;
loc_823A4628:
	// cmpwi cr6,r10,67
	cr6.compare<int32_t>(ctx.r10.s32, 67, xer);
	// beq cr6,0x823a4724
	if (cr6.eq) goto loc_823A4724;
	// cmpwi cr6,r10,68
	cr6.compare<int32_t>(ctx.r10.s32, 68, xer);
	// beq cr6,0x823a4714
	if (cr6.eq) goto loc_823A4714;
	// cmpwi cr6,r10,69
	cr6.compare<int32_t>(ctx.r10.s32, 69, xer);
	// beq cr6,0x823a4704
	if (cr6.eq) goto loc_823A4704;
	// cmpwi cr6,r10,82
	cr6.compare<int32_t>(ctx.r10.s32, 82, xer);
	// bne cr6,0x823a4510
	if (!cr6.eq) goto loc_823A4510;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
loc_823A4654:
	// ori r10,r3,32768
	ctx.r10.u64 = ctx.r3.u64 | 32768;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// rlwinm. r5,r10,0,16,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x823a4674
	if (cr0.eq) goto loc_823A4674;
	// rlwimi r10,r8,11,19,20
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x1800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x823a4678
	goto loc_823A4678;
loc_823A4674:
	// rlwinm r10,r10,0,19,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_823A4678:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823a468c
	if (cr0.eq) goto loc_823A468C;
	// li r7,3
	ctx.r7.s64 = 3;
	// rlwimi r10,r7,9,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 9) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x823a4694
	goto loc_823A4694;
loc_823A468C:
	// li r7,5
	ctx.r7.s64 = 5;
	// rlwimi r10,r7,8,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 8) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
loc_823A4694:
	// clrlwi. r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ori r3,r10,8192
	ctx.r3.u64 = ctx.r10.u64 | 8192;
	// bne 0x823a46a4
	if (!cr0.eq) goto loc_823A46A4;
	// rlwinm r3,r10,0,19,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_823A46A4:
	// rlwinm. r10,r9,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a46ec
	if (cr0.eq) goto loc_823A46EC;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x823a46d4
	if (cr6.eq) goto loc_823A46D4;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// bne cr6,0x823a4510
	if (!cr6.eq) goto loc_823A4510;
	// rlwinm. r10,r3,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a46cc
	if (cr0.eq) goto loc_823A46CC;
	// rlwinm r3,r3,0,26,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// b 0x823a4728
	goto loc_823A4728;
loc_823A46CC:
	// rlwinm r3,r3,0,21,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// b 0x823a4728
	goto loc_823A4728;
loc_823A46D4:
	// rlwinm. r10,r3,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a46e4
	if (cr0.eq) goto loc_823A46E4;
	// rlwimi r3,r8,7,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x823a4728
	goto loc_823A4728;
loc_823A46E4:
	// rlwimi r3,r8,12,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x823a4728
	goto loc_823A4728;
loc_823A46EC:
	// rlwinm. r10,r3,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a46fc
	if (cr0.eq) goto loc_823A46FC;
	// rlwimi r3,r8,6,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x823a4728
	goto loc_823A4728;
loc_823A46FC:
	// rlwimi r3,r8,11,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x823a4728
	goto loc_823A4728;
loc_823A4704:
	// rlwinm r10,r3,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// ori r3,r10,37376
	ctx.r3.u64 = ctx.r10.u64 | 37376;
	// b 0x823a4728
	goto loc_823A4728;
loc_823A4714:
	// rlwinm r10,r3,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// ori r3,r10,37120
	ctx.r3.u64 = ctx.r10.u64 | 37120;
	// b 0x823a4728
	goto loc_823A4728;
loc_823A4724:
	// ori r3,r3,31744
	ctx.r3.u64 = ctx.r3.u64 | 31744;
loc_823A4728:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4734:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x823a4860
	if (cr6.lt) goto loc_823A4860;
	// cmpwi cr6,r10,56
	cr6.compare<int32_t>(ctx.r10.s32, 56, xer);
	// bgt cr6,0x823a4860
	if (cr6.gt) goto loc_823A4860;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r3,r3,0,17,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
	// addi r11,r10,-48
	r11.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x823a4510
	if (cr6.gt) goto loc_823A4510;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-28984
	r12.s64 = r12.s64 + -28984;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32198
	r12.s64 = -2110128128;
	// addi r12,r12,17680
	r12.s64 = r12.s64 + 17680;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823A478C;
	case 1:
		goto loc_823A47BC;
	case 2:
		goto loc_823A47EC;
	case 3:
		goto loc_823A481C;
	case 4:
		goto loc_823A4834;
	case 5:
		goto loc_823A4828;
	case 6:
		goto loc_823A4840;
	case 7:
		goto loc_823A4848;
	case 8:
		goto loc_823A4854;
	default:
		__builtin_unreachable();
	}
loc_823A478C:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// beq 0x823a47a0
	if (cr0.eq) goto loc_823A47A0;
	// rlwimi r3,r8,9,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 9) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x823a47a4
	goto loc_823A47A4;
loc_823A47A0:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_823A47A4:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a47b4
	if (cr0.eq) goto loc_823A47B4;
	// rlwimi r3,r8,6,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A47B4:
	// rlwimi r3,r8,11,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A47BC:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// beq 0x823a47d0
	if (cr0.eq) goto loc_823A47D0;
	// rlwimi r3,r8,9,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 9) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x823a47d4
	goto loc_823A47D4;
loc_823A47D0:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_823A47D4:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a47e4
	if (cr0.eq) goto loc_823A47E4;
	// rlwimi r3,r8,7,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 7) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A47E4:
	// rlwimi r3,r8,12,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A47EC:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a4800
	if (cr0.eq) goto loc_823A4800;
	// li r11,1
	r11.s64 = 1;
	// rlwimi r3,r11,9,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 9) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x823a4804
	goto loc_823A4804;
loc_823A4800:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_823A4804:
	// rlwinm. r11,r3,0,16,16
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a4814
	if (cr0.eq) goto loc_823A4814;
	// rlwinm r3,r3,0,26,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4814:
	// rlwinm r3,r3,0,21,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// b 0x823a4888
	goto loc_823A4888;
loc_823A481C:
	// li r11,1
	r11.s64 = 1;
	// rlwimi r3,r11,14,17,18
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 14) & 0x6000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF9FFF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4828:
	// li r11,3
	r11.s64 = 3;
	// rlwimi r3,r11,13,17,21
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 13) & 0x7C00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF83FF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4834:
	// li r11,1
	r11.s64 = 1;
	// rlwimi r3,r11,13,17,18
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 13) & 0x6000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF9FFF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4840:
	// li r11,13
	r11.s64 = 13;
	// b 0x823a4858
	goto loc_823A4858;
loc_823A4848:
	// li r11,7
	r11.s64 = 7;
	// rlwimi r3,r11,12,17,21
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x7C00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF83FF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4854:
	// li r11,15
	r11.s64 = 15;
loc_823A4858:
	// rlwimi r3,r11,11,17,21
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 11) & 0x7C00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF83FF);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A4860:
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// lis r3,0
	ctx.r3.s64 = 0;
	// bne cr6,0x823a487c
	if (!cr6.eq) goto loc_823A487C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// ori r3,r3,65533
	ctx.r3.u64 = ctx.r3.u64 | 65533;
	// stw r11,17592(r6)
	PPC_STORE_U32(ctx.r6.u32 + 17592, r11.u32);
	// b 0x823a4888
	goto loc_823A4888;
loc_823A487C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823a4514
	if (!cr6.eq) goto loc_823A4514;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
loc_823A4888:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4898"))) PPC_WEAK_FUNC(sub_823A4898);
PPC_FUNC_IMPL(__imp__sub_823A4898) {
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
	// addi r11,r4,7
	r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// rlwinm r30,r11,0,0,28
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// beq cr6,0x823a48d4
	if (cr6.eq) goto loc_823A48D4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823a496c
	goto loc_823A496C;
loc_823A48D4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823a48e0
	if (!cr6.eq) goto loc_823A48E0;
	// li r30,8
	r30.s64 = 8;
loc_823A48E0:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// bge cr6,0x823a4954
	if (!cr6.lt) goto loc_823A4954;
	// cmplwi cr6,r30,4096
	cr6.compare<uint32_t>(r30.u32, 4096, xer);
	// ble cr6,0x823a48fc
	if (!cr6.gt) goto loc_823A48FC;
loc_823A48F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823a496c
	goto loc_823A496C;
loc_823A48FC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r4,4100
	ctx.r4.s64 = 4100;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// mr. r11,r3
	r11.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a4924
	if (cr0.eq) goto loc_823A4924;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823a4928
	goto loc_823A4928;
loc_823A4924:
	// li r11,0
	r11.s64 = 0;
loc_823A4928:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a48f4
	if (cr6.eq) goto loc_823A48F4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823a4944
	if (cr0.eq) goto loc_823A4944;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x823a4948
	goto loc_823A4948;
loc_823A4944:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_823A4948:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// subfic r11,r30,4096
	xer.ca = r30.u32 <= 4096;
	r11.s64 = 4096 - r30.s64;
	// b 0x823a4958
	goto loc_823A4958;
loc_823A4954:
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
loc_823A4958:
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_823A496C:
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

__attribute__((alias("__imp__sub_823A4984"))) PPC_WEAK_FUNC(sub_823A4984);
PPC_FUNC_IMPL(__imp__sub_823A4984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4988"))) PPC_WEAK_FUNC(sub_823A4988);
PPC_FUNC_IMPL(__imp__sub_823A4988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r10,0,4,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF) | (r11.u64 & 0xFFFFFFFFF0000000);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r10,r11,0,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r10,r11,0,5,5
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x4000000) | (ctx.r10.u64 & 0xFFFFFFFFFBFFFFFF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r10,r11,0,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r10,r11,0,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r10,r11,0,8,8
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x800000) | (ctx.r10.u64 & 0xFFFFFFFFFF7FFFFF);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r10,0,9,9
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x400000) | (r11.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r10,0,10,10
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x200000) | (r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r10,0,11,11
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x100000) | (r11.u64 & 0xFFFFFFFFFFEFFFFF);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4A24"))) PPC_WEAK_FUNC(sub_823A4A24);
PPC_FUNC_IMPL(__imp__sub_823A4A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4A28"))) PPC_WEAK_FUNC(sub_823A4A28);
PPC_FUNC_IMPL(__imp__sub_823A4A28) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi r3,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	ctx.r3.s64 = r11.s32 >> 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4A34"))) PPC_WEAK_FUNC(sub_823A4A34);
PPC_FUNC_IMPL(__imp__sub_823A4A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4A38"))) PPC_WEAK_FUNC(sub_823A4A38);
PPC_FUNC_IMPL(__imp__sub_823A4A38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a4a4c
	if (cr0.eq) goto loc_823A4A4C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_823A4A4C:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r10,0,4,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF) | (r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r10,r11,0,5,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFF7FFFFFF) | (ctx.r10.u64 & 0x8000000);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwimi r11,r10,0,6,4
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFBFFFFFF) | (r11.u64 & 0x4000000);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r10,0,7,5
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFDFFFFFF) | (r11.u64 & 0x2000000);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r10,0,8,6
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFEFFFFFF) | (r11.u64 & 0x1000000);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwimi r11,r10,0,12,10
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFFFEFFFFF) | (r11.u64 & 0x100000);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4AB0"))) PPC_WEAK_FUNC(sub_823A4AB0);
PPC_FUNC_IMPL(__imp__sub_823A4AB0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4AB8"))) PPC_WEAK_FUNC(sub_823A4AB8);
PPC_FUNC_IMPL(__imp__sub_823A4AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a4ad4
	if (cr6.eq) goto loc_823A4AD4;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823a4ad4
	if (cr6.eq) goto loc_823A4AD4;
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// b 0x823a4ad8
	goto loc_823A4AD8;
loc_823A4AD4:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823A4AD8:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4AE0"))) PPC_WEAK_FUNC(sub_823A4AE0);
PPC_FUNC_IMPL(__imp__sub_823A4AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A4AF4"))) PPC_WEAK_FUNC(sub_823A4AF4);
PPC_FUNC_IMPL(__imp__sub_823A4AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4AF8"))) PPC_WEAK_FUNC(sub_823A4AF8);
PPC_FUNC_IMPL(__imp__sub_823A4AF8) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823aa3b0
	sub_823AA3B0(ctx, base);
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

__attribute__((alias("__imp__sub_823A4B5C"))) PPC_WEAK_FUNC(sub_823A4B5C);
PPC_FUNC_IMPL(__imp__sub_823A4B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4B60"))) PPC_WEAK_FUNC(sub_823A4B60);
PPC_FUNC_IMPL(__imp__sub_823A4B60) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1
	ctx.r7.s64 = 1;
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823aa3b0
	sub_823AA3B0(ctx, base);
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

__attribute__((alias("__imp__sub_823A4BC4"))) PPC_WEAK_FUNC(sub_823A4BC4);
PPC_FUNC_IMPL(__imp__sub_823A4BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4BC8"))) PPC_WEAK_FUNC(sub_823A4BC8);
PPC_FUNC_IMPL(__imp__sub_823A4BC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a4c68
	if (cr6.eq) goto loc_823A4C68;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a4c44
	if (cr0.eq) goto loc_823A4C44;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28868
	r11.s64 = r11.s64 + -28868;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x823a4c34
	if (cr6.eq) goto loc_823A4C34;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x823a4c38
	if (!cr6.eq) goto loc_823A4C38;
loc_823A4C34:
	// li r31,0
	r31.s64 = 0;
loc_823A4C38:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// b 0x823a4c48
	goto loc_823A4C48;
loc_823A4C44:
	// li r11,0
	r11.s64 = 0;
loc_823A4C48:
	// subfic r10,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r10.s64 = 0 - r11.s64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// b 0x823a4c78
	goto loc_823A4C78;
loc_823A4C68:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r11,r11,4
	r11.u64 = r11.u32 & 0xFFFFFFF;
loc_823A4C78:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r11,r11,0,12,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF00FFFFF;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_823A4CA4"))) PPC_WEAK_FUNC(sub_823A4CA4);
PPC_FUNC_IMPL(__imp__sub_823A4CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4CA8"))) PPC_WEAK_FUNC(sub_823A4CA8);
PPC_FUNC_IMPL(__imp__sub_823A4CA8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// beq cr6,0x823a4cd8
	if (cr6.eq) goto loc_823A4CD8;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x823a4cdc
	if (!cr6.eq) goto loc_823A4CDC;
loc_823A4CD8:
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_823A4CDC:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a4d34
	if (cr0.eq) goto loc_823A4D34;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r9,r31,-2
	ctx.r9.s64 = r31.s64 + -2;
	// addi r10,r11,-28856
	ctx.r10.s64 = r11.s64 + -28856;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r9,r11,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// b 0x823a4d38
	goto loc_823A4D38;
loc_823A4D34:
	// li r11,0
	r11.s64 = 0;
loc_823A4D38:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// rlwinm r10,r10,0,12,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF00FFFFF;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bne cr6,0x823a4d5c
	if (!cr6.eq) goto loc_823A4D5C;
	// li r11,3
	r11.s64 = 3;
	// rlwimi r10,r11,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
loc_823A4D5C:
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

__attribute__((alias("__imp__sub_823A4D78"))) PPC_WEAK_FUNC(sub_823A4D78);
PPC_FUNC_IMPL(__imp__sub_823A4D78) {
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
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823a4dd4
	if (cr0.eq) goto loc_823A4DD4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a4db0
	if (cr0.eq) goto loc_823A4DB0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a4dd4
	if (!cr6.eq) goto loc_823A4DD4;
loc_823A4DB0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823a4db0
	if (!cr0.eq) goto loc_823A4DB0;
loc_823A4DD4:
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

__attribute__((alias("__imp__sub_823A4DF0"))) PPC_WEAK_FUNC(sub_823A4DF0);
PPC_FUNC_IMPL(__imp__sub_823A4DF0) {
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
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823a4e74
	if (cr0.eq) goto loc_823A4E74;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a4e28
	if (cr0.eq) goto loc_823A4E28;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a4e74
	if (!cr6.eq) goto loc_823A4E74;
loc_823A4E28:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a4e48
	if (cr0.eq) goto loc_823A4E48;
	// mr r30,r31
	r30.u64 = r31.u64;
loc_823A4E48:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823a4e28
	if (!cr0.eq) goto loc_823A4E28;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a4e74
	if (cr6.eq) goto loc_823A4E74;
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
	// b 0x823a4e78
	goto loc_823A4E78;
loc_823A4E74:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A4E78:
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

__attribute__((alias("__imp__sub_823A4E90"))) PPC_WEAK_FUNC(sub_823A4E90);
PPC_FUNC_IMPL(__imp__sub_823A4E90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a4f80
	if (cr6.eq) goto loc_823A4F80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a4ec8
	if (cr0.eq) goto loc_823A4EC8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a4f80
	if (!cr6.eq) goto loc_823A4F80;
loc_823A4EC8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x823a4efc
	if (!cr6.eq) goto loc_823A4EFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4d78
	sub_823A4D78(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// addi r3,r10,17560
	ctx.r3.s64 = ctx.r10.s64 + 17560;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x823a4f90
	if (cr0.eq) goto loc_823A4F90;
loc_823A4EFC:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r30
	r29.u64 = r30.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x823a4f6c
	goto loc_823A4F6C;
loc_823A4F0C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823a4f74
	if (!cr6.gt) goto loc_823A4F74;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823a4f68
	if (cr0.eq) goto loc_823A4F68;
	// subf. r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x823a4f3c
	if (!cr0.lt) goto loc_823A4F3C;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823A4F3C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a4f68
	if (cr0.eq) goto loc_823A4F68;
	// subf r29,r30,r29
	r29.s64 = r29.s64 - r30.s64;
	// add r28,r30,r28
	r28.u64 = r30.u64 + r28.u64;
loc_823A4F68:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_823A4F6C:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823a4f0c
	if (!cr0.eq) goto loc_823A4F0C;
loc_823A4F74:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
	// b 0x823a4f90
	goto loc_823A4F90;
loc_823A4F80:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823a4f90
	if (cr6.eq) goto loc_823A4F90;
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
loc_823A4F90:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823A4F9C"))) PPC_WEAK_FUNC(sub_823A4F9C);
PPC_FUNC_IMPL(__imp__sub_823A4F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A4FA0"))) PPC_WEAK_FUNC(sub_823A4FA0);
PPC_FUNC_IMPL(__imp__sub_823A4FA0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// beq cr6,0x823a5058
	if (cr6.eq) goto loc_823A5058;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// beq cr6,0x823a5058
	if (cr6.eq) goto loc_823A5058;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r10,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a4fe0
	if (cr0.eq) goto loc_823A4FE0;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x823a507c
	if (!cr6.eq) goto loc_823A507C;
loc_823A4FE0:
	// rlwinm r10,r11,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// rlwinm r10,r10,0,8,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a5038
	if (cr0.eq) goto loc_823A5038;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r30.u32);
	// addi r9,r30,-2
	ctx.r9.s64 = r30.s64 + -2;
	// addi r10,r11,-28856
	ctx.r10.s64 = r11.s64 + -28856;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r11,29,29,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x4;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// b 0x823a503c
	goto loc_823A503C;
loc_823A5038:
	// li r11,0
	r11.s64 = 0;
loc_823A503C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne cr6,0x823a507c
	if (!cr6.eq) goto loc_823A507C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// b 0x823a5078
	goto loc_823A5078;
loc_823A5058:
	// li r11,0
	r11.s64 = 0;
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x823a507c
	if (cr6.eq) goto loc_823A507C;
	// rlwimi r11,r30,28,0,3
	r11.u64 = (__builtin_rotateleft32(r30.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
loc_823A5078:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_823A507C:
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

__attribute__((alias("__imp__sub_823A5098"))) PPC_WEAK_FUNC(sub_823A5098);
PPC_FUNC_IMPL(__imp__sub_823A5098) {
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
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,44
	ctx.r3.s64 = r31.s64 + 44;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823A50E4"))) PPC_WEAK_FUNC(sub_823A50E4);
PPC_FUNC_IMPL(__imp__sub_823A50E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A50E8"))) PPC_WEAK_FUNC(sub_823A50E8);
PPC_FUNC_IMPL(__imp__sub_823A50E8) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x823a517c
	if (cr6.eq) goto loc_823A517C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a517c
	if (cr6.eq) goto loc_823A517C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5130
	if (cr0.eq) goto loc_823A5130;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a517c
	if (!cr6.eq) goto loc_823A517C;
loc_823A5130:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a5158
	if (cr0.eq) goto loc_823A5158;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a515c
	goto loc_823A515C;
loc_823A5158:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A515C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a517c
	if (cr6.eq) goto loc_823A517C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stwx r3,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r3.u32);
loc_823A517C:
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

__attribute__((alias("__imp__sub_823A5198"))) PPC_WEAK_FUNC(sub_823A5198);
PPC_FUNC_IMPL(__imp__sub_823A5198) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r11,17560
	r31.s64 = r11.s64 + 17560;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823a5240
	if (cr0.eq) goto loc_823A5240;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a51f8
	if (cr0.eq) goto loc_823A51F8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x823a51fc
	goto loc_823A51FC;
loc_823A51F8:
	// li r11,0
	r11.s64 = 0;
loc_823A51FC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-28868
	ctx.r10.s64 = ctx.r10.s64 + -28868;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x823a5234
	if (cr6.eq) goto loc_823A5234;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// srawi r10,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 28;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x823a5230
	if (cr6.eq) goto loc_823A5230;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x823a5234
	if (!cr6.eq) goto loc_823A5234;
loc_823A5230:
	// li r11,0
	r11.s64 = 0;
loc_823A5234:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x823a5244
	goto loc_823A5244;
loc_823A5240:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A5244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823A524C"))) PPC_WEAK_FUNC(sub_823A524C);
PPC_FUNC_IMPL(__imp__sub_823A524C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5250"))) PPC_WEAK_FUNC(sub_823A5250);
PPC_FUNC_IMPL(__imp__sub_823A5250) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-28844
	r11.s64 = r11.s64 + -28844;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bne cr6,0x823a52b0
	if (!cr6.eq) goto loc_823A52B0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a5310
	if (cr6.eq) goto loc_823A5310;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// b 0x823a52a0
	goto loc_823A52A0;
loc_823A5298:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbzx r11,r31,r29
	r11.u64 = PPC_LOAD_U8(r31.u32 + r29.u32);
loc_823A52A0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a5298
	if (!cr6.eq) goto loc_823A5298;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x823a5310
	if (cr6.eq) goto loc_823A5310;
loc_823A52B0:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823a5310
	if (cr6.eq) goto loc_823A5310;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// beq 0x823a5318
	if (cr0.eq) goto loc_823A5318;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a5318
	if (cr6.eq) goto loc_823A5318;
loc_823A52EC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// beq 0x823a5318
	if (cr0.eq) goto loc_823A5318;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x823a52ec
	if (!cr0.eq) goto loc_823A52EC;
	// b 0x823a5318
	goto loc_823A5318;
loc_823A5310:
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
loc_823A5318:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823A5324"))) PPC_WEAK_FUNC(sub_823A5324);
PPC_FUNC_IMPL(__imp__sub_823A5324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5328"))) PPC_WEAK_FUNC(sub_823A5328);
PPC_FUNC_IMPL(__imp__sub_823A5328) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5344
	if (cr0.eq) goto loc_823A5344;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// blr 
	return;
loc_823A5344:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A534C"))) PPC_WEAK_FUNC(sub_823A534C);
PPC_FUNC_IMPL(__imp__sub_823A534C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5350"))) PPC_WEAK_FUNC(sub_823A5350);
PPC_FUNC_IMPL(__imp__sub_823A5350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// ble cr6,0x823a5360
	if (!cr6.gt) goto loc_823A5360;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_823A5360:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823a53a8
	if (cr0.eq) goto loc_823A53A8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a53a8
	if (cr6.eq) goto loc_823A53A8;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823a53a8
	if (cr6.eq) goto loc_823A53A8;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_823A5380:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// beq 0x823a53a0
	if (cr0.eq) goto loc_823A53A0;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bne 0x823a5380
	if (!cr0.eq) goto loc_823A5380;
loc_823A53A0:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_823A53A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A53B0"))) PPC_WEAK_FUNC(sub_823A53B0);
PPC_FUNC_IMPL(__imp__sub_823A53B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a53c0
	if (cr0.eq) goto loc_823A53C0;
	// b 0x823a4d78
	sub_823A4D78(ctx, base);
	return;
loc_823A53C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A53C8"))) PPC_WEAK_FUNC(sub_823A53C8);
PPC_FUNC_IMPL(__imp__sub_823A53C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a53d8
	if (cr0.eq) goto loc_823A53D8;
	// b 0x823a4df0
	sub_823A4DF0(ctx, base);
	return;
loc_823A53D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A53E0"))) PPC_WEAK_FUNC(sub_823A53E0);
PPC_FUNC_IMPL(__imp__sub_823A53E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a5400
	if (cr0.eq) goto loc_823A5400;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a5400
	if (cr6.eq) goto loc_823A5400;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823a5400
	if (cr6.eq) goto loc_823A5400;
	// b 0x823a4e90
	sub_823A4E90(ctx, base);
	return;
loc_823A5400:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5408"))) PPC_WEAK_FUNC(sub_823A5408);
PPC_FUNC_IMPL(__imp__sub_823A5408) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r5,r11
	cr6.compare<int32_t>(ctx.r5.s32, r11.s32, xer);
	// ble cr6,0x823a5418
	if (!cr6.gt) goto loc_823A5418;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
loc_823A5418:
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a5460
	if (!cr6.eq) goto loc_823A5460;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823a5460
	if (cr6.eq) goto loc_823A5460;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823a5460
	if (cr6.eq) goto loc_823A5460;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-28832
	r11.s64 = r11.s64 + -28832;
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - r11.s64;
loc_823A5440:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// beq 0x823a5464
	if (cr0.eq) goto loc_823A5464;
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x823a5440
	if (!cr0.eq) goto loc_823A5440;
	// b 0x823a5464
	goto loc_823A5464;
loc_823A5460:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823A5464:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A546C"))) PPC_WEAK_FUNC(sub_823A546C);
PPC_FUNC_IMPL(__imp__sub_823A546C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5470"))) PPC_WEAK_FUNC(sub_823A5470);
PPC_FUNC_IMPL(__imp__sub_823A5470) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// bl 0x823a5098
	sub_823A5098(ctx, base);
	// addi r28,r31,60
	r28.s64 = r31.s64 + 60;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a5098
	sub_823A5098(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r30,17596(r11)
	PPC_STORE_U32(r11.u32 + 17596, r30.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r30,17592(r11)
	PPC_STORE_U32(r11.u32 + 17592, r30.u32);
	// beq cr6,0x823a54d4
	if (cr6.eq) goto loc_823A54D4;
	// addi r11,r27,-1
	r11.s64 = r27.s64 + -1;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stw r11,17604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17604, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r29,17600(r11)
	PPC_STORE_U32(r11.u32 + 17600, r29.u32);
	// b 0x823a54e8
	goto loc_823A54E8;
loc_823A54D4:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,0
	r11.s64 = 0;
	// stw r11,17600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17600, r11.u32);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stw r11,17604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17604, r11.u32);
loc_823A54E8:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r28,17584(r11)
	PPC_STORE_U32(r11.u32 + 17584, r28.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r31,17580(r11)
	PPC_STORE_U32(r11.u32 + 17580, r31.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r25,17608(r11)
	PPC_STORE_U32(r11.u32 + 17608, r25.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r26,17612(r11)
	PPC_STORE_U32(r11.u32 + 17612, r26.u32);
	// li r11,0
	r11.s64 = 0;
	// stb r11,17616(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17616, r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823A5520"))) PPC_WEAK_FUNC(sub_823A5520);
PPC_FUNC_IMPL(__imp__sub_823A5520) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// bne cr6,0x823a5558
	if (!cr6.eq) goto loc_823A5558;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// bl 0x823a4bc8
	sub_823A4BC8(ctx, base);
	// b 0x823a555c
	goto loc_823A555C;
loc_823A5558:
	// bl 0x823ab6e0
	sub_823AB6E0(ctx, base);
loc_823A555C:
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

__attribute__((alias("__imp__sub_823A5574"))) PPC_WEAK_FUNC(sub_823A5574);
PPC_FUNC_IMPL(__imp__sub_823A5574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5578"))) PPC_WEAK_FUNC(sub_823A5578);
PPC_FUNC_IMPL(__imp__sub_823A5578) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a567c
	if (cr6.eq) goto loc_823A567C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a55ac
	if (cr0.eq) goto loc_823A55AC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a567c
	if (!cr6.eq) goto loc_823A567C;
loc_823A55AC:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// beq cr6,0x823a567c
	if (cr6.eq) goto loc_823A567C;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// beq cr6,0x823a567c
	if (cr6.eq) goto loc_823A567C;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a5608
	if (cr0.eq) goto loc_823A5608;
	// addi r10,r31,-2
	ctx.r10.s64 = r31.s64 + -2;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r11,r11,-28856
	r11.s64 = r11.s64 + -28856;
	// rlwinm r10,r10,29,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823a560c
	goto loc_823A560C;
loc_823A5608:
	// li r30,0
	r30.s64 = 0;
loc_823A560C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a5654
	if (cr6.eq) goto loc_823A5654;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x823a5198
	sub_823A5198(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// beq 0x823a5668
	if (cr0.eq) goto loc_823A5668;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823a5640
	if (!cr0.eq) goto loc_823A5640;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r30.u32);
	// b 0x823a565c
	goto loc_823A565C;
loc_823A563C:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823A5640:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823a563c
	if (!cr0.eq) goto loc_823A563C;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// b 0x823a565c
	goto loc_823A565C;
loc_823A5654:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823A565C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a5688
	if (!cr6.eq) goto loc_823A5688;
loc_823A5668:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x823a5688
	goto loc_823A5688;
loc_823A567C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a4fa0
	sub_823A4FA0(ctx, base);
loc_823A5688:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823A5694"))) PPC_WEAK_FUNC(sub_823A5694);
PPC_FUNC_IMPL(__imp__sub_823A5694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5698"))) PPC_WEAK_FUNC(sub_823A5698);
PPC_FUNC_IMPL(__imp__sub_823A5698) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// srawi r10,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = r11.s32 >> 28;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x823a5798
	if (cr6.eq) goto loc_823A5798;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// beq cr6,0x823a5798
	if (cr6.eq) goto loc_823A5798;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a56e4
	if (cr6.eq) goto loc_823A56E4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// b 0x823a5790
	goto loc_823A5790;
loc_823A56E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a578c
	if (cr6.eq) goto loc_823A578C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x823a578c
	if (cr6.eq) goto loc_823A578C;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// blt cr6,0x823a5740
	if (cr6.lt) goto loc_823A5740;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// beq cr6,0x823a5748
	if (cr6.eq) goto loc_823A5748;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a572c
	if (cr0.eq) goto loc_823A572C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823a5250
	sub_823A5250(ctx, base);
	// b 0x823a5730
	goto loc_823A5730;
loc_823A572C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A5730:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_823A5738:
	// bne cr6,0x823a5798
	if (!cr6.eq) goto loc_823A5798;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
loc_823A5740:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x823a5790
	goto loc_823A5790;
loc_823A5748:
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a577c
	if (cr0.eq) goto loc_823A577C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,-28880
	ctx.r10.s64 = ctx.r10.s64 + -28880;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r11.u8);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x823a5780
	goto loc_823A5780;
loc_823A577C:
	// li r9,0
	ctx.r9.s64 = 0;
loc_823A5780:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// b 0x823a5738
	goto loc_823A5738;
loc_823A578C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823A5790:
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_823A5798:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823A57A0"))) PPC_WEAK_FUNC(sub_823A57A0);
PPC_FUNC_IMPL(__imp__sub_823A57A0) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// li r11,0
	r11.s64 = 0;
	// extsb. r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq 0x823a57e0
	if (cr0.eq) goto loc_823A57E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// bl 0x823a5698
	sub_823A5698(ctx, base);
loc_823A57E0:
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

__attribute__((alias("__imp__sub_823A57F8"))) PPC_WEAK_FUNC(sub_823A57F8);
PPC_FUNC_IMPL(__imp__sub_823A57F8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq cr6,0x823a5848
	if (cr6.eq) goto loc_823A5848;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x823a5838
	goto loc_823A5838;
loc_823A5830:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzx r11,r5,r4
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
loc_823A5838:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a5830
	if (!cr6.eq) goto loc_823A5830;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5698
	sub_823A5698(ctx, base);
loc_823A5848:
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

__attribute__((alias("__imp__sub_823A5860"))) PPC_WEAK_FUNC(sub_823A5860);
PPC_FUNC_IMPL(__imp__sub_823A5860) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823a5998
	if (cr0.eq) goto loc_823A5998;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823a59c4
	if (cr6.eq) goto loc_823A59C4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// extsb r29,r9
	r29.s64 = ctx.r9.s8;
	// lis r7,-32127
	ctx.r7.s64 = -2105475072;
loc_823A58B0:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x823a5958
	if (cr6.eq) goto loc_823A5958;
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// beq cr6,0x823a593c
	if (cr6.eq) goto loc_823A593C;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// beq cr6,0x823a593c
	if (cr6.eq) goto loc_823A593C;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// beq cr6,0x823a593c
	if (cr6.eq) goto loc_823A593C;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// beq cr6,0x823a593c
	if (cr6.eq) goto loc_823A593C;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x823a593c
	if (cr6.eq) goto loc_823A593C;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// blt cr6,0x823a58fc
	if (cr6.lt) goto loc_823A58FC;
	// cmpwi cr6,r11,122
	cr6.compare<int32_t>(r11.s32, 122, xer);
	// ble cr6,0x823a593c
	if (!cr6.gt) goto loc_823A593C;
loc_823A58FC:
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// blt cr6,0x823a590c
	if (cr6.lt) goto loc_823A590C;
	// cmpwi cr6,r11,90
	cr6.compare<int32_t>(r11.s32, 90, xer);
	// ble cr6,0x823a593c
	if (!cr6.gt) goto loc_823A593C;
loc_823A590C:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x823a591c
	if (cr6.lt) goto loc_823A591C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x823a593c
	if (!cr6.gt) goto loc_823A593C;
loc_823A591C:
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// blt cr6,0x823a5930
	if (cr6.lt) goto loc_823A5930;
	// cmplwi cr6,r11,254
	cr6.compare<uint32_t>(r11.u32, 254, xer);
	// ble cr6,0x823a593c
	if (!cr6.gt) goto loc_823A593C;
loc_823A5930:
	// lwz r11,17608(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 17608);
	// rlwinm. r11,r11,0,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5994
	if (cr0.eq) goto loc_823A5994;
loc_823A593C:
	// addi r11,r8,1
	r11.s64 = ctx.r8.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a58b0
	if (!cr6.eq) goto loc_823A58B0;
loc_823A5958:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5698
	sub_823A5698(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a59b8
	if (cr0.eq) goto loc_823A59B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r10,r29
	cr6.compare<int32_t>(ctx.r10.s32, r29.s32, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// beq cr6,0x823a59b0
	if (cr6.eq) goto loc_823A59B0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x823a599c
	goto loc_823A599C;
loc_823A5994:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_823A5998:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823A599C:
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
loc_823A59A0:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_823A59A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_823A59B0:
	// clrlwi r11,r11,4
	r11.u64 = r11.u32 & 0xFFFFFFF;
	// b 0x823a59a0
	goto loc_823A59A0;
loc_823A59B8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823a59a4
	if (!cr0.eq) goto loc_823A59A4;
loc_823A59C4:
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,29,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 29) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// b 0x823a59a0
	goto loc_823A59A0;
}

__attribute__((alias("__imp__sub_823A59D0"))) PPC_WEAK_FUNC(sub_823A59D0);
PPC_FUNC_IMPL(__imp__sub_823A59D0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_823A5A08:
	// divdu r10,r11,r9
	ctx.r10.u64 = r11.u64 / ctx.r9.u64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// divdu r11,r11,r9
	r11.u64 = r11.u64 / ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// bne cr6,0x823a5a08
	if (!cr6.eq) goto loc_823A5A08;
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	// bl 0x823a5698
	sub_823A5698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5A54"))) PPC_WEAK_FUNC(sub_823A5A54);
PPC_FUNC_IMPL(__imp__sub_823A5A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5A58"))) PPC_WEAK_FUNC(sub_823A5A58);
PPC_FUNC_IMPL(__imp__sub_823A5A58) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r1,101
	ctx.r4.s64 = ctx.r1.s64 + 101;
	// stb r10,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bge cr6,0x823a5aa0
	if (!cr6.lt) goto loc_823A5AA0;
	// li r8,1
	ctx.r8.s64 = 1;
	// neg r11,r11
	r11.s64 = -r11.s64;
loc_823A5AA0:
	// li r9,10
	ctx.r9.s64 = 10;
loc_823A5AA4:
	// divdu r10,r11,r9
	ctx.r10.u64 = r11.u64 / ctx.r9.u64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// divdu r11,r11,r9
	r11.u64 = r11.u64 / ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// bne cr6,0x823a5aa4
	if (!cr6.eq) goto loc_823A5AA4;
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5adc
	if (cr0.eq) goto loc_823A5ADC;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// li r11,45
	r11.s64 = 45;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
loc_823A5ADC:
	// addi r11,r1,101
	r11.s64 = ctx.r1.s64 + 101;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	// bl 0x823a5698
	sub_823A5698(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823A5B04"))) PPC_WEAK_FUNC(sub_823A5B04);
PPC_FUNC_IMPL(__imp__sub_823A5B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5B08"))) PPC_WEAK_FUNC(sub_823A5B08);
PPC_FUNC_IMPL(__imp__sub_823A5B08) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a5b48
	if (cr6.eq) goto loc_823A5B48;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5b58
	if (cr0.eq) goto loc_823A5B58;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a5b58
	if (cr6.eq) goto loc_823A5B58;
loc_823A5B48:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4fa0
	sub_823A4FA0(ctx, base);
	// b 0x823a5b64
	goto loc_823A5B64;
loc_823A5B58:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5578
	sub_823A5578(ctx, base);
loc_823A5B64:
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

__attribute__((alias("__imp__sub_823A5B80"))) PPC_WEAK_FUNC(sub_823A5B80);
PPC_FUNC_IMPL(__imp__sub_823A5B80) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a5bbc
	if (cr6.eq) goto loc_823A5BBC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5bd0
	if (cr0.eq) goto loc_823A5BD0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a5bd0
	if (cr6.eq) goto loc_823A5BD0;
loc_823A5BBC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// srawi r4,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	ctx.r4.s64 = r11.s32 >> 28;
	// bl 0x823a5578
	sub_823A5578(ctx, base);
	// b 0x823a5c58
	goto loc_823A5C58;
loc_823A5BD0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a5bf0
	if (cr0.eq) goto loc_823A5BF0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5c00
	if (cr0.eq) goto loc_823A5C00;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a5c00
	if (cr6.eq) goto loc_823A5C00;
loc_823A5BF0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823a5c58
	goto loc_823A5C58;
loc_823A5C00:
	// bl 0x823a5198
	sub_823A5198(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// beq 0x823a5c48
	if (cr0.eq) goto loc_823A5C48;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x823a5c58
	if (cr0.eq) goto loc_823A5C58;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823a5c34
	if (!cr0.eq) goto loc_823A5C34;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823a5c58
	goto loc_823A5C58;
loc_823A5C30:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823A5C34:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823a5c30
	if (!cr0.eq) goto loc_823A5C30;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x823a5c58
	goto loc_823A5C58;
loc_823A5C48:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_823A5C58:
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

__attribute__((alias("__imp__sub_823A5C74"))) PPC_WEAK_FUNC(sub_823A5C74);
PPC_FUNC_IMPL(__imp__sub_823A5C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5C78"))) PPC_WEAK_FUNC(sub_823A5C78);
PPC_FUNC_IMPL(__imp__sub_823A5C78) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,12,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r11,r11,0,8,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823a5698
	sub_823A5698(ctx, base);
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

__attribute__((alias("__imp__sub_823A5CC4"))) PPC_WEAK_FUNC(sub_823A5CC4);
PPC_FUNC_IMPL(__imp__sub_823A5CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5CC8"))) PPC_WEAK_FUNC(sub_823A5CC8);
PPC_FUNC_IMPL(__imp__sub_823A5CC8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,12,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r11,r11,0,8,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x823a5d00
	goto loc_823A5D00;
loc_823A5CF8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzx r11,r5,r4
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
loc_823A5D00:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a5cf8
	if (!cr6.eq) goto loc_823A5CF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5698
	sub_823A5698(ctx, base);
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

__attribute__((alias("__imp__sub_823A5D28"))) PPC_WEAK_FUNC(sub_823A5D28);
PPC_FUNC_IMPL(__imp__sub_823A5D28) {
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
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,17592(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a5eb4
	if (cr0.eq) goto loc_823A5EB4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-65
	ctx.r10.s64 = ctx.r10.s64 + -65;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// stw r11,17592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17592, r11.u32);
	// bgt cr6,0x823a5eac
	if (cr6.gt) goto loc_823A5EAC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r8,r8,12
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFF;
	// lwz r9,17608(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 17608);
	// li r11,0
	r11.s64 = 0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// not r11,r9
	r11.u64 = ~ctx.r9.u64;
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5e9c
	if (cr0.eq) goto loc_823A5E9C;
	// rlwinm. r11,r10,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5e70
	if (cr0.eq) goto loc_823A5E70;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x823a5e4c
	if (cr6.eq) goto loc_823A5E4C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x823a5e28
	if (cr6.eq) goto loc_823A5E28;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// beq cr6,0x823a5e04
	if (cr6.eq) goto loc_823A5E04;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// beq cr6,0x823a5de0
	if (cr6.eq) goto loc_823A5DE0;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x823a5e9c
	if (!cr6.eq) goto loc_823A5E9C;
	// not r11,r9
	r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29368
	r11.s64 = r11.s64 + -29368;
	// beq 0x823a5dd8
	if (cr0.eq) goto loc_823A5DD8;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x823a5e94
	goto loc_823A5E94;
loc_823A5DD8:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x823a5e90
	goto loc_823A5E90;
loc_823A5DE0:
	// not r11,r9
	r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29368
	r11.s64 = r11.s64 + -29368;
	// beq 0x823a5dfc
	if (cr0.eq) goto loc_823A5DFC;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x823a5e94
	goto loc_823A5E94;
loc_823A5DFC:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x823a5e90
	goto loc_823A5E90;
loc_823A5E04:
	// not r11,r9
	r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29368
	r11.s64 = r11.s64 + -29368;
	// beq 0x823a5e20
	if (cr0.eq) goto loc_823A5E20;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x823a5e94
	goto loc_823A5E94;
loc_823A5E20:
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x823a5e90
	goto loc_823A5E90;
loc_823A5E28:
	// not r11,r9
	r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29368
	r11.s64 = r11.s64 + -29368;
	// beq 0x823a5e44
	if (cr0.eq) goto loc_823A5E44;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x823a5e94
	goto loc_823A5E94;
loc_823A5E44:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// b 0x823a5e90
	goto loc_823A5E90;
loc_823A5E4C:
	// not r11,r9
	r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29368
	r11.s64 = r11.s64 + -29368;
	// beq 0x823a5e68
	if (cr0.eq) goto loc_823A5E68;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x823a5e94
	goto loc_823A5E94;
loc_823A5E68:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x823a5e90
	goto loc_823A5E90;
loc_823A5E70:
	// not r11,r9
	r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29368
	r11.s64 = r11.s64 + -29368;
	// beq 0x823a5e8c
	if (cr0.eq) goto loc_823A5E8C;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823a5e94
	goto loc_823A5E94;
loc_823A5E8C:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_823A5E90:
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
loc_823A5E94:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
loc_823A5E9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a5ec0
	goto loc_823A5EC0;
loc_823A5EAC:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823a5eb8
	goto loc_823A5EB8;
loc_823A5EB4:
	// li r4,2
	ctx.r4.s64 = 2;
loc_823A5EB8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823A5EC0:
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

__attribute__((alias("__imp__sub_823A5ED8"))) PPC_WEAK_FUNC(sub_823A5ED8);
PPC_FUNC_IMPL(__imp__sub_823A5ED8) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823a5f28
	if (cr0.eq) goto loc_823A5F28;
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// beq cr6,0x823a5f10
	if (cr6.eq) goto loc_823A5F10;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823a5f2c
	goto loc_823A5F2C;
loc_823A5F10:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,-28824
	ctx.r4.s64 = ctx.r9.s64 + -28824;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// b 0x823a5f30
	goto loc_823A5F30;
loc_823A5F28:
	// li r4,2
	ctx.r4.s64 = 2;
loc_823A5F2C:
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823A5F30:
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

__attribute__((alias("__imp__sub_823A5F48"))) PPC_WEAK_FUNC(sub_823A5F48);
PPC_FUNC_IMPL(__imp__sub_823A5F48) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a5f88
	if (cr6.eq) goto loc_823A5F88;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5f98
	if (cr0.eq) goto loc_823A5F98;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a5f98
	if (cr6.eq) goto loc_823A5F98;
loc_823A5F88:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823a5fd8
	goto loc_823A5FD8;
loc_823A5F98:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a5fb8
	if (cr6.eq) goto loc_823A5FB8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a5fcc
	if (cr0.eq) goto loc_823A5FCC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a5fcc
	if (cr6.eq) goto loc_823A5FCC;
loc_823A5FB8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// srawi r4,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	ctx.r4.s64 = r11.s32 >> 28;
	// bl 0x823a5578
	sub_823A5578(ctx, base);
	// b 0x823a5fd8
	goto loc_823A5FD8;
loc_823A5FCC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823A5FD8:
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

__attribute__((alias("__imp__sub_823A5FF4"))) PPC_WEAK_FUNC(sub_823A5FF4);
PPC_FUNC_IMPL(__imp__sub_823A5FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A5FF8"))) PPC_WEAK_FUNC(sub_823A5FF8);
PPC_FUNC_IMPL(__imp__sub_823A5FF8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// extsb. r11,r31
	r11.s64 = r31.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a60e4
	if (cr0.eq) goto loc_823A60E4;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a603c
	if (cr0.eq) goto loc_823A603C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a604c
	if (cr0.eq) goto loc_823A604C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a604c
	if (cr6.eq) goto loc_823A604C;
loc_823A603C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a5c78
	sub_823A5C78(ctx, base);
	// b 0x823a60e4
	goto loc_823A60E4;
loc_823A604C:
	// bl 0x823a5198
	sub_823A5198(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// beq 0x823a60d4
	if (cr0.eq) goto loc_823A60D4;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a6098
	if (cr0.eq) goto loc_823A6098;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stb r31,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, r31.u8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-28880
	r11.s64 = r11.s64 + -28880;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823a609c
	goto loc_823A609C;
loc_823A6098:
	// li r9,0
	ctx.r9.s64 = 0;
loc_823A609C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a60e4
	if (cr6.eq) goto loc_823A60E4;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823a60c0
	if (!cr0.eq) goto loc_823A60C0;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// b 0x823a60e4
	goto loc_823A60E4;
loc_823A60BC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823A60C0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823a60bc
	if (!cr0.eq) goto loc_823A60BC;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// b 0x823a60e4
	goto loc_823A60E4;
loc_823A60D4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_823A60E4:
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

__attribute__((alias("__imp__sub_823A6100"))) PPC_WEAK_FUNC(sub_823A6100);
PPC_FUNC_IMPL(__imp__sub_823A6100) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823a61e8
	if (cr6.eq) goto loc_823A61E8;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a61e8
	if (cr6.eq) goto loc_823A61E8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a6150
	if (cr0.eq) goto loc_823A6150;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6160
	if (cr0.eq) goto loc_823A6160;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a6160
	if (cr6.eq) goto loc_823A6160;
loc_823A6150:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// b 0x823a61e8
	goto loc_823A61E8;
loc_823A6160:
	// bl 0x823a5198
	sub_823A5198(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// beq 0x823a61d8
	if (cr0.eq) goto loc_823A61D8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a619c
	if (cr0.eq) goto loc_823A619C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823a5250
	sub_823A5250(ctx, base);
	// b 0x823a61a0
	goto loc_823A61A0;
loc_823A619C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823A61A0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823a61e8
	if (cr6.eq) goto loc_823A61E8;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823a61c4
	if (!cr0.eq) goto loc_823A61C4;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// b 0x823a61e8
	goto loc_823A61E8;
loc_823A61C0:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823A61C4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823a61c0
	if (!cr0.eq) goto loc_823A61C0;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// b 0x823a61e8
	goto loc_823A61E8;
loc_823A61D8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_823A61E8:
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

__attribute__((alias("__imp__sub_823A6204"))) PPC_WEAK_FUNC(sub_823A6204);
PPC_FUNC_IMPL(__imp__sub_823A6204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6208"))) PPC_WEAK_FUNC(sub_823A6208);
PPC_FUNC_IMPL(__imp__sub_823A6208) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// rlwinm. r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823a633c
	if (!cr0.eq) goto loc_823A633C;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lis r30,-32127
	r30.s64 = -2105475072;
loc_823A6240:
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// beq cr6,0x823a633c
	if (cr6.eq) goto loc_823A633C;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// beq cr6,0x823a633c
	if (cr6.eq) goto loc_823A633C;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x823a626c
	if (cr6.eq) goto loc_823A626C;
	// mr r26,r27
	r26.u64 = r27.u64;
	// b 0x823a627c
	goto loc_823A627C;
loc_823A626C:
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
loc_823A627C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a6330
	if (cr0.eq) goto loc_823A6330;
	// addi r9,r10,-48
	ctx.r9.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bgt cr6,0x823a62cc
	if (cr6.gt) goto loc_823A62CC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// lwz r11,17580(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17580);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x823a62c4
	if (cr6.eq) goto loc_823A62C4;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bgt cr6,0x823a62c4
	if (cr6.gt) goto loc_823A62C4;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x823a6318
	goto loc_823A6318;
loc_823A62C4:
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// b 0x823a6318
	goto loc_823A6318;
loc_823A62CC:
	// mr r31,r11
	r31.u64 = r11.u64;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x823ab520
	sub_823AB520(ctx, base);
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823a6314
	if (!cr6.gt) goto loc_823A6314;
	// lwz r3,17580(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 17580);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x823a6314
	if (cr6.eq) goto loc_823A6314;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823a50e8
	sub_823A50E8(ctx, base);
loc_823A6314:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
loc_823A6318:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6240
	if (cr0.eq) goto loc_823A6240;
	// b 0x823a633c
	goto loc_823A633C;
loc_823A6330:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a5578
	sub_823A5578(ctx, base);
loc_823A633C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823A6348"))) PPC_WEAK_FUNC(sub_823A6348);
PPC_FUNC_IMPL(__imp__sub_823A6348) {
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
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28816
	ctx.r4.s64 = r11.s64 + -28816;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a9b38
	sub_823A9B38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// bne cr6,0x823a63ac
	if (!cr6.eq) goto loc_823A63AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
loc_823A63AC:
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

__attribute__((alias("__imp__sub_823A63C4"))) PPC_WEAK_FUNC(sub_823A63C4);
PPC_FUNC_IMPL(__imp__sub_823A63C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A63C8"))) PPC_WEAK_FUNC(sub_823A63C8);
PPC_FUNC_IMPL(__imp__sub_823A63C8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6408
	if (cr6.eq) goto loc_823A6408;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6418
	if (cr0.eq) goto loc_823A6418;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a6418
	if (cr6.eq) goto loc_823A6418;
loc_823A6408:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5c78
	sub_823A5C78(ctx, base);
	// b 0x823a6424
	goto loc_823A6424;
loc_823A6418:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
loc_823A6424:
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

__attribute__((alias("__imp__sub_823A6440"))) PPC_WEAK_FUNC(sub_823A6440);
PPC_FUNC_IMPL(__imp__sub_823A6440) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6480
	if (cr6.eq) goto loc_823A6480;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6490
	if (cr0.eq) goto loc_823A6490;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a6490
	if (cr6.eq) goto loc_823A6490;
loc_823A6480:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// b 0x823a649c
	goto loc_823A649C;
loc_823A6490:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
loc_823A649C:
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

__attribute__((alias("__imp__sub_823A64B8"))) PPC_WEAK_FUNC(sub_823A64B8);
PPC_FUNC_IMPL(__imp__sub_823A64B8) {
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
	// lis r9,-32127
	ctx.r9.s64 = -2105475072;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,17592(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,81
	cr6.compare<uint32_t>(ctx.r10.u32, 81, xer);
	// bne cr6,0x823a64f4
	if (!cr6.eq) goto loc_823A64F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r30,r10,-28808
	r30.s64 = ctx.r10.s64 + -28808;
	// stw r11,17592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17592, r11.u32);
loc_823A64F4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823a6510
	if (!cr0.eq) goto loc_823A6510;
loc_823A6500:
	// li r4,2
	ctx.r4.s64 = 2;
loc_823A6504:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// b 0x823a6630
	goto loc_823A6630;
loc_823A6510:
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// blt cr6,0x823a655c
	if (cr6.lt) goto loc_823A655C;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x823a655c
	if (cr6.gt) goto loc_823A655C;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r11,17592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17592, r11.u32);
	// beq cr6,0x823a6548
	if (cr6.eq) goto loc_823A6548;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r10,-47
	r11.s64 = ctx.r10.s64 + -47;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// b 0x823a65f0
	goto loc_823A65F0;
loc_823A6548:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,-47
	r11.s64 = r11.s64 + -47;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// b 0x823a6620
	goto loc_823A6620;
loc_823A655C:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823a659c
	goto loc_823A659C;
loc_823A6564:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823a6500
	if (cr6.eq) goto loc_823A6500;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// blt cr6,0x823a65d4
	if (cr6.lt) goto loc_823A65D4;
	// cmpwi cr6,r10,80
	cr6.compare<int32_t>(ctx.r10.s32, 80, xer);
	// bgt cr6,0x823a65d4
	if (cr6.gt) goto loc_823A65D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r5,r10,-65
	ctx.r5.s64 = ctx.r10.s64 + -65;
	// rldicr r7,r4,4,59
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// stw r11,17592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17592, r11.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
loc_823A659C:
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// bne cr6,0x823a6564
	if (!cr6.eq) goto loc_823A6564;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// stw r11,17592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 17592, r11.u32);
	// bne cr6,0x823a65d4
	if (!cr6.eq) goto loc_823A65D4;
	// clrlwi. r11,r6,24
	r11.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x823a65e8
	if (cr0.eq) goto loc_823A65E8;
	// beq cr6,0x823a65dc
	if (cr6.eq) goto loc_823A65DC;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a5a58
	sub_823A5A58(ctx, base);
	// b 0x823a65f4
	goto loc_823A65F4;
loc_823A65D4:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823a6504
	goto loc_823A6504;
loc_823A65DC:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5a58
	sub_823A5A58(ctx, base);
	// b 0x823a6624
	goto loc_823A6624;
loc_823A65E8:
	// beq cr6,0x823a661c
	if (cr6.eq) goto loc_823A661C;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_823A65F0:
	// bl 0x823a59d0
	sub_823A59D0(ctx, base);
loc_823A65F4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823a6628
	goto loc_823A6628;
loc_823A661C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
loc_823A6620:
	// bl 0x823a59d0
	sub_823A59D0(ctx, base);
loc_823A6624:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823A6628:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
loc_823A6630:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823A663C"))) PPC_WEAK_FUNC(sub_823A663C);
PPC_FUNC_IMPL(__imp__sub_823A663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6640"))) PPC_WEAK_FUNC(sub_823A6640);
PPC_FUNC_IMPL(__imp__sub_823A6640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6764
	if (cr0.eq) goto loc_823A6764;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bgt cr6,0x823a675c
	if (cr6.gt) goto loc_823A675C;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-28952
	r12.s64 = r12.s64 + -28952;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32198
	r12.s64 = -2110128128;
	// addi r12,r12,26292
	r12.s64 = r12.s64 + 26292;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823A66B4;
	case 1:
		goto loc_823A66B4;
	case 2:
		goto loc_823A66C0;
	case 3:
		goto loc_823A66C0;
	case 4:
		goto loc_823A66E8;
	case 5:
		goto loc_823A66CC;
	case 6:
		goto loc_823A66D8;
	case 7:
		goto loc_823A66D8;
	default:
		__builtin_unreachable();
	}
loc_823A66B4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28740
	ctx.r4.s64 = r11.s64 + -28740;
	// b 0x823a66e0
	goto loc_823A66E0;
loc_823A66C0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28748
	ctx.r4.s64 = r11.s64 + -28748;
	// b 0x823a66e0
	goto loc_823A66E0;
loc_823A66CC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28756
	ctx.r4.s64 = r11.s64 + -28756;
	// b 0x823a66e0
	goto loc_823A66E0;
loc_823A66D8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28764
	ctx.r4.s64 = r11.s64 + -28764;
loc_823A66E0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
loc_823A66E8:
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// beq cr6,0x823a671c
	if (cr6.eq) goto loc_823A671C;
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(r11.s32, 51, xer);
	// beq cr6,0x823a671c
	if (cr6.eq) goto loc_823A671C;
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(r11.s32, 53, xer);
	// beq cr6,0x823a671c
	if (cr6.eq) goto loc_823A671C;
	// cmpwi cr6,r11,55
	cr6.compare<int32_t>(r11.s32, 55, xer);
	// bne cr6,0x823a674c
	if (!cr6.eq) goto loc_823A674C;
loc_823A671C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-28776
	ctx.r4.s64 = r11.s64 + -28776;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A674C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a6770
	goto loc_823A6770;
loc_823A675C:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823a6768
	goto loc_823A6768;
loc_823A6764:
	// li r4,2
	ctx.r4.s64 = 2;
loc_823A6768:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823A6770:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_823A678C"))) PPC_WEAK_FUNC(sub_823A678C);
PPC_FUNC_IMPL(__imp__sub_823A678C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6790"))) PPC_WEAK_FUNC(sub_823A6790);
PPC_FUNC_IMPL(__imp__sub_823A6790) {
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
	// lis r31,-32127
	r31.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// beq cr6,0x823a68a4
	if (cr6.eq) goto loc_823A68A4;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// beq cr6,0x823a6870
	if (cr6.eq) goto loc_823A6870;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a6208
	sub_823A6208(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a6868
	if (!cr0.eq) goto loc_823A6868;
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a6868
	if (cr0.eq) goto loc_823A6868;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// beq cr6,0x823a6858
	if (cr6.eq) goto loc_823A6858;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// beq cr6,0x823a680c
	if (cr6.eq) goto loc_823A680C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// b 0x823a68bc
	goto loc_823A68BC;
loc_823A680C:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,17608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17608);
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// not r11,r10
	r11.u64 = ~ctx.r10.u64;
	// rlwinm. r11,r11,14,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6834
	if (cr0.eq) goto loc_823A6834;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-28696
	ctx.r5.s64 = r11.s64 + -28696;
	// b 0x823a683c
	goto loc_823A683C;
loc_823A6834:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,-28708
	ctx.r5.s64 = r11.s64 + -28708;
loc_823A683C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823A684C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a68bc
	goto loc_823A68BC;
loc_823A6858:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// b 0x823a684c
	goto loc_823A684C;
loc_823A6868:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823a684c
	goto loc_823A684C;
loc_823A6870:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,17608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17608);
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// not r11,r10
	r11.u64 = ~ctx.r10.u64;
	// rlwinm. r11,r11,14,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6898
	if (cr0.eq) goto loc_823A6898;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28712
	ctx.r4.s64 = r11.s64 + -28712;
	// b 0x823a68b4
	goto loc_823A68B4;
loc_823A6898:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28724
	ctx.r4.s64 = r11.s64 + -28724;
	// b 0x823a68b4
	goto loc_823A68B4;
loc_823A68A4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r10,-28732
	ctx.r4.s64 = ctx.r10.s64 + -28732;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
loc_823A68B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
loc_823A68BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_823A68D8"))) PPC_WEAK_FUNC(sub_823A68D8);
PPC_FUNC_IMPL(__imp__sub_823A68D8) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823a6968
	if (cr0.eq) goto loc_823A6968;
	// cmpwi cr6,r9,90
	cr6.compare<int32_t>(ctx.r9.s32, 90, xer);
	// bne cr6,0x823a6934
	if (!cr6.eq) goto loc_823A6934;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a6998
	goto loc_823A6998;
loc_823A6934:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a6790
	sub_823A6790(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-28688
	ctx.r4.s64 = r11.s64 + -28688;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823a698c
	goto loc_823A698C;
loc_823A6968:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-28688
	ctx.r4.s64 = r11.s64 + -28688;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x823a5b08
	sub_823A5B08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823A698C:
	// li r5,41
	ctx.r5.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
loc_823A6998:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823A69B4"))) PPC_WEAK_FUNC(sub_823A69B4);
PPC_FUNC_IMPL(__imp__sub_823A69B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A69B8"))) PPC_WEAK_FUNC(sub_823A69B8);
PPC_FUNC_IMPL(__imp__sub_823A69B8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r30,0
	r30.s64 = 0;
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// beq cr6,0x823a6b00
	if (cr6.eq) goto loc_823A6B00;
	// cmpwi cr6,r10,66
	cr6.compare<int32_t>(ctx.r10.s32, 66, xer);
	// beq cr6,0x823a6ae8
	if (cr6.eq) goto loc_823A6AE8;
	// cmpwi cr6,r10,67
	cr6.compare<int32_t>(ctx.r10.s32, 67, xer);
	// beq cr6,0x823a6ae0
	if (cr6.eq) goto loc_823A6AE0;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// add r11,r10,r9
	r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r30,r11,-48
	r30.s64 = r11.s64 + -48;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// ble cr6,0x823a6a68
	if (!cr6.gt) goto loc_823A6A68;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5c78
	sub_823A5C78(ctx, base);
	// clrldi r4,r30,32
	ctx.r4.u64 = r30.u64 & 0xFFFFFFFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a59d0
	sub_823A59D0(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A6A68:
	// li r5,62
	ctx.r5.s64 = 62;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,36
	cr6.compare<uint32_t>(ctx.r10.u32, 36, xer);
	// bne cr6,0x823a6a9c
	if (!cr6.eq) goto loc_823A6A9C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// b 0x823a6abc
	goto loc_823A6ABC;
loc_823A6A9C:
	// li r5,94
	ctx.r5.s64 = 94;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
loc_823A6ABC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a6b3c
	goto loc_823A6B3C;
loc_823A6AE0:
	// li r11,37
	r11.s64 = 37;
	// b 0x823a6b1c
	goto loc_823A6B1C;
loc_823A6AE8:
	// li r11,1
	r11.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r11.u8);
	// bl 0x823a5c78
	sub_823A5C78(ctx, base);
	// b 0x823a6b20
	goto loc_823A6B20;
loc_823A6B00:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne cr6,0x823a6b24
	if (!cr6.eq) goto loc_823A6B24;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,38
	cr6.compare<uint32_t>(r11.u32, 38, xer);
	// li r11,37
	r11.s64 = 37;
	// beq cr6,0x823a6b1c
	if (cr6.eq) goto loc_823A6B1C;
	// li r11,94
	r11.s64 = 94;
loc_823A6B1C:
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
loc_823A6B20:
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
loc_823A6B24:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_823A6B3C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823A6B48"))) PPC_WEAK_FUNC(sub_823A6B48);
PPC_FUNC_IMPL(__imp__sub_823A6B48) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,17592(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6ccc
	if (cr6.eq) goto loc_823A6CCC;
	// bl 0x823a4328
	sub_823A4328(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bge 0x823a6b80
	if (!cr0.lt) goto loc_823A6B80;
	// li r31,0
	r31.s64 = 0;
loc_823A6B80:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x823a6ba0
	if (!cr6.eq) goto loc_823A6BA0;
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x823a6d4c
	goto loc_823A6D4C;
loc_823A6BA0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6bd0
	if (cr0.eq) goto loc_823A6BD0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-29512
	ctx.r4.s64 = r11.s64 + -29512;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
loc_823A6BD0:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,93
	ctx.r5.s64 = 93;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x823a6bd0
	if (!cr6.eq) goto loc_823A6BD0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6ca4
	if (cr6.eq) goto loc_823A6CA4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6c44
	if (cr0.eq) goto loc_823A6C44;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a6ca4
	if (!cr6.eq) goto loc_823A6CA4;
loc_823A6C44:
	// rlwinm. r11,r10,0,7,7
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// beq 0x823a6c5c
	if (cr0.eq) goto loc_823A6C5C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x823a6c94
	goto loc_823A6C94;
loc_823A6C5C:
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823A6C94:
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A6CA4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ab520
	sub_823AB520(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a6d70
	goto loc_823A6D70;
loc_823A6CCC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a6d38
	if (cr6.eq) goto loc_823A6D38;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6cec
	if (cr0.eq) goto loc_823A6CEC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a6d38
	if (!cr6.eq) goto loc_823A6D38;
loc_823A6CEC:
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-28680
	ctx.r5.s64 = r11.s64 + -28680;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x823a5b08
	sub_823A5B08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// b 0x823a6d5c
	goto loc_823A6D5C;
loc_823A6D38:
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
loc_823A6D4C:
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x823a5b08
	sub_823A5B08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_823A6D5C:
	// li r5,93
	ctx.r5.s64 = 93;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ab0d0
	sub_823AB0D0(ctx, base);
loc_823A6D70:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A6D7C"))) PPC_WEAK_FUNC(sub_823A6D7C);
PPC_FUNC_IMPL(__imp__sub_823A6D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6D80"))) PPC_WEAK_FUNC(sub_823A6D80);
PPC_FUNC_IMPL(__imp__sub_823A6D80) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823A6DF0"))) PPC_WEAK_FUNC(sub_823A6DF0);
PPC_FUNC_IMPL(__imp__sub_823A6DF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6e18
	if (cr0.eq) goto loc_823A6E18;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a6fa8
	if (!cr6.eq) goto loc_823A6FA8;
loc_823A6E18:
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lwz r10,17592(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 17592);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823a6fa8
	if (cr6.eq) goto loc_823A6FA8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4af8
	sub_823A4AF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a6e74
	if (cr0.eq) goto loc_823A6E74;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a6fe0
	if (!cr6.eq) goto loc_823A6FE0;
loc_823A6E74:
	// lwz r11,17592(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// beq cr6,0x823a6f90
	if (cr6.eq) goto loc_823A6F90;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28816
	ctx.r4.s64 = r11.s64 + -28816;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r28,r11,-28676
	r28.s64 = r11.s64 + -28676;
loc_823A6E9C:
	// lwz r11,17592(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17592);
loc_823A6EA0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r10,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 28;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a6eb4
	if (cr0.eq) goto loc_823A6EB4;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x823a6f54
	if (!cr6.eq) goto loc_823A6F54;
loc_823A6EB4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a6f54
	if (cr0.eq) goto loc_823A6F54;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// beq cr6,0x823a6f54
	if (cr6.eq) goto loc_823A6F54;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a9b38
	sub_823A9B38(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// lwz r11,17592(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x823a6f24
	if (!cr6.eq) goto loc_823A6F24;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r29)
	PPC_STORE_U32(r29.u32 + 17592, r11.u32);
loc_823A6F24:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r10,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 28;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a6f38
	if (cr0.eq) goto loc_823A6F38;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x823a6ea0
	if (!cr6.eq) goto loc_823A6EA0;
loc_823A6F38:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// beq cr6,0x823a6ea0
	if (cr6.eq) goto loc_823A6EA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// b 0x823a6e9c
	goto loc_823A6E9C;
loc_823A6F54:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r10,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 28;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a6f68
	if (cr0.eq) goto loc_823A6F68;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x823a6f90
	if (!cr6.eq) goto loc_823A6F90;
loc_823A6F68:
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823a6f80
	if (!cr6.eq) goto loc_823A6F80;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5578
	sub_823A5578(ctx, base);
loc_823A6F80:
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
	// lwz r11,17592(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17592);
loc_823A6F90:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x823a6fe0
	if (!cr6.eq) goto loc_823A6FE0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r29)
	PPC_STORE_U32(r29.u32 + 17592, r11.u32);
	// b 0x823a6fe0
	goto loc_823A6FE0;
loc_823A6FA8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a6fb8
	if (cr6.eq) goto loc_823A6FB8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a6fe0
	if (!cr6.eq) goto loc_823A6FE0;
loc_823A6FB8:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A6FE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A6FEC"))) PPC_WEAK_FUNC(sub_823A6FEC);
PPC_FUNC_IMPL(__imp__sub_823A6FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A6FF0"))) PPC_WEAK_FUNC(sub_823A6FF0);
PPC_FUNC_IMPL(__imp__sub_823A6FF0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// bne cr6,0x823a70b8
	if (!cr6.eq) goto loc_823A70B8;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,95
	cr6.compare<uint32_t>(ctx.r10.u32, 95, xer);
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// bne cr6,0x823a70b8
	if (!cr6.eq) goto loc_823A70B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// b 0x823a7078
	goto loc_823A7078;
loc_823A7068:
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// beq cr6,0x823a7084
	if (cr6.eq) goto loc_823A7084;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
loc_823A7078:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823a7068
	if (!cr0.eq) goto loc_823A7068;
loc_823A7084:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a70a4
	if (!cr6.eq) goto loc_823A70A4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// b 0x823a70c0
	goto loc_823A70C0;
loc_823A70A4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a70c4
	goto loc_823A70C4;
loc_823A70B8:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823A70C0:
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823A70C4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_823A70E0"))) PPC_WEAK_FUNC(sub_823A70E0);
PPC_FUNC_IMPL(__imp__sub_823A70E0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823a7118
	if (!cr0.eq) goto loc_823A7118;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// b 0x823a7160
	goto loc_823A7160;
loc_823A7118:
	// cmpwi cr6,r9,63
	cr6.compare<int32_t>(ctx.r9.s32, 63, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x823a7158
	if (!cr6.eq) goto loc_823A7158;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// b 0x823a7160
	goto loc_823A7160;
loc_823A7158:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
loc_823A7160:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823A717C"))) PPC_WEAK_FUNC(sub_823A717C);
PPC_FUNC_IMPL(__imp__sub_823A717C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7180"))) PPC_WEAK_FUNC(sub_823A7180);
PPC_FUNC_IMPL(__imp__sub_823A7180) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,17592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 17592);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// extsb r30,r9
	r30.s64 = ctx.r9.s8;
	// cmpwi cr6,r30,68
	cr6.compare<int32_t>(r30.s32, 68, xer);
	// stw r10,17592(r11)
	PPC_STORE_U32(r11.u32 + 17592, ctx.r10.u32);
	// bgt cr6,0x823a7308
	if (cr6.gt) goto loc_823A7308;
	// beq cr6,0x823a7350
	if (cr6.eq) goto loc_823A7350;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823a72f8
	if (cr6.eq) goto loc_823A72F8;
	// cmpwi cr6,r30,48
	cr6.compare<int32_t>(r30.s32, 48, xer);
	// beq cr6,0x823a72ec
	if (cr6.eq) goto loc_823A72EC;
	// cmpwi cr6,r30,49
	cr6.compare<int32_t>(r30.s32, 49, xer);
	// beq cr6,0x823a72a4
	if (cr6.eq) goto loc_823A72A4;
	// cmpwi cr6,r30,50
	cr6.compare<int32_t>(r30.s32, 50, xer);
	// bne cr6,0x823a722c
	if (!cr6.eq) goto loc_823A722C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a7200
	if (cr0.eq) goto loc_823A7200;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a729c
	if (!cr6.eq) goto loc_823A729C;
loc_823A7200:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a7214
	if (cr0.eq) goto loc_823A7214;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a729c
	if (!cr6.eq) goto loc_823A729C;
loc_823A7214:
	// li r5,100
	ctx.r5.s64 = 100;
	// addi r4,r1,177
	ctx.r4.s64 = ctx.r1.s64 + 177;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4e90
	sub_823A4E90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823a723c
	if (!cr0.eq) goto loc_823A723C;
loc_823A722C:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823A7230:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// b 0x823a74b8
	goto loc_823A74B8;
loc_823A723C:
	// lbz r11,177(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 177);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// stb r11,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, r11.u8);
	// bne cr6,0x823a7260
	if (!cr6.eq) goto loc_823A7260;
	// lbz r11,178(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 178);
	// stb r11,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, r11.u8);
	// li r11,46
	r11.s64 = 46;
	// stb r11,178(r1)
	PPC_STORE_U8(ctx.r1.u32 + 178, r11.u8);
	// b 0x823a7268
	goto loc_823A7268;
loc_823A7260:
	// li r11,46
	r11.s64 = 46;
	// stb r11,177(r1)
	PPC_STORE_U8(ctx.r1.u32 + 177, r11.u8);
loc_823A7268:
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// li r5,101
	ctx.r5.s64 = 101;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
loc_823A7288:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// b 0x823a74b8
	goto loc_823A74B8;
loc_823A729C:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x823a7230
	goto loc_823A7230;
loc_823A72A4:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// bne cr6,0x823a72cc
	if (!cr6.eq) goto loc_823A72CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r4,r9,-28652
	ctx.r4.s64 = ctx.r9.s64 + -28652;
	// stw r10,17592(r11)
	PPC_STORE_U32(r11.u32 + 17592, ctx.r10.u32);
loc_823A72C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// b 0x823a74b8
	goto loc_823A74B8;
loc_823A72CC:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823a9828
	sub_823A9828(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,25840
	ctx.r4.s64 = r11.s64 + 25840;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// b 0x823a7288
	goto loc_823A7288;
loc_823A72EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// b 0x823a74b8
	goto loc_823A74B8;
loc_823A72F8:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r10,17592(r11)
	PPC_STORE_U32(r11.u32 + 17592, ctx.r10.u32);
	// b 0x823a7230
	goto loc_823A7230;
loc_823A7308:
	// cmpwi cr6,r30,69
	cr6.compare<int32_t>(r30.s32, 69, xer);
	// beq cr6,0x823a74b0
	if (cr6.eq) goto loc_823A74B0;
	// ble cr6,0x823a722c
	if (!cr6.gt) goto loc_823A722C;
	// cmpwi cr6,r30,74
	cr6.compare<int32_t>(r30.s32, 74, xer);
	// ble cr6,0x823a73e8
	if (!cr6.gt) goto loc_823A73E8;
	// cmpwi cr6,r30,81
	cr6.compare<int32_t>(r30.s32, 81, xer);
	// beq cr6,0x823a7350
	if (cr6.eq) goto loc_823A7350;
	// cmpwi cr6,r30,82
	cr6.compare<int32_t>(r30.s32, 82, xer);
	// bne cr6,0x823a722c
	if (!cr6.eq) goto loc_823A722C;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a8208
	sub_823A8208(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a74b8
	goto loc_823A74B8;
loc_823A7350:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17608);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a7398
	if (cr0.eq) goto loc_823A7398;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4e90
	sub_823A4E90(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17612(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17612);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x823a72c0
	if (!cr0.eq) goto loc_823A72C0;
loc_823A7398:
	// cmpwi cr6,r30,68
	cr6.compare<int32_t>(r30.s32, 68, xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x823a73dc
	if (!cr6.eq) goto loc_823A73DC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28672
	ctx.r4.s64 = r11.s64 + -28672;
loc_823A73B0:
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,12472
	ctx.r5.s64 = r11.s64 + 12472;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// b 0x823a74b8
	goto loc_823A74B8;
loc_823A73DC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28808
	ctx.r4.s64 = r11.s64 + -28808;
	// b 0x823a73b0
	goto loc_823A73B0;
loc_823A73E8:
	// li r4,123
	ctx.r4.s64 = 123;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// addi r11,r30,-72
	r11.s64 = r30.s64 + -72;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bgt cr6,0x823a7420
	if (cr6.gt) goto loc_823A7420;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a9828
	sub_823A9828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
loc_823A7420:
	// cmpwi cr6,r30,70
	cr6.compare<int32_t>(r30.s32, 70, xer);
	// beq cr6,0x823a7468
	if (cr6.eq) goto loc_823A7468;
	// cmpwi cr6,r30,71
	cr6.compare<int32_t>(r30.s32, 71, xer);
	// beq cr6,0x823a7448
	if (cr6.eq) goto loc_823A7448;
	// cmpwi cr6,r30,72
	cr6.compare<int32_t>(r30.s32, 72, xer);
	// beq cr6,0x823a7488
	if (cr6.eq) goto loc_823A7488;
	// cmpwi cr6,r30,73
	cr6.compare<int32_t>(r30.s32, 73, xer);
	// beq cr6,0x823a7468
	if (cr6.eq) goto loc_823A7468;
	// cmpwi cr6,r30,74
	cr6.compare<int32_t>(r30.s32, 74, xer);
	// bne cr6,0x823a749c
	if (!cr6.eq) goto loc_823A749C;
loc_823A7448:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
loc_823A7468:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
loc_823A7488:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823A749C:
	// li r5,125
	ctx.r5.s64 = 125;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// b 0x823a74b8
	goto loc_823A74B8;
loc_823A74B0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a9828
	sub_823A9828(ctx, base);
loc_823A74B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823A74D4"))) PPC_WEAK_FUNC(sub_823A74D4);
PPC_FUNC_IMPL(__imp__sub_823A74D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A74D8"))) PPC_WEAK_FUNC(sub_823A74D8);
PPC_FUNC_IMPL(__imp__sub_823A74D8) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823a75f0
	if (cr0.eq) goto loc_823A75F0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823a7568
	if (cr6.eq) goto loc_823A7568;
	// cmpwi cr6,r9,88
	cr6.compare<int32_t>(ctx.r9.s32, 88, xer);
	// bne cr6,0x823a7568
	if (!cr6.eq) goto loc_823A7568;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7540
	if (cr6.eq) goto loc_823A7540;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a7554
	if (cr0.eq) goto loc_823A7554;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a7554
	if (cr6.eq) goto loc_823A7554;
loc_823A7540:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-28732
	ctx.r4.s64 = r11.s64 + -28732;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// b 0x823a760c
	goto loc_823A760C;
loc_823A7554:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-28616
	ctx.r4.s64 = r11.s64 + -28616;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// b 0x823a75fc
	goto loc_823A75FC;
loc_823A7568:
	// cmpwi cr6,r9,89
	cr6.compare<int32_t>(ctx.r9.s32, 89, xer);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bne cr6,0x823a7588
	if (!cr6.eq) goto loc_823A7588;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// bl 0x823a6b48
	sub_823A6B48(ctx, base);
	// b 0x823a760c
	goto loc_823A760C;
loc_823A7588:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ab0d0
	sub_823AB0D0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,10,10
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a75a8
	if (cr0.eq) goto loc_823A75A8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28628
	ctx.r4.s64 = r11.s64 + -28628;
	// b 0x823a75b8
	goto loc_823A75B8;
loc_823A75A8:
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a75e0
	if (cr0.eq) goto loc_823A75E0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28644
	ctx.r4.s64 = r11.s64 + -28644;
loc_823A75B8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A75E0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a760c
	goto loc_823A760C;
loc_823A75F0:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823A75FC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
loc_823A760C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_823A7628"))) PPC_WEAK_FUNC(sub_823A7628);
PPC_FUNC_IMPL(__imp__sub_823A7628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r22,0
	r22.s64 = 0;
	// lis r21,-32127
	r21.s64 = -2105475072;
	// li r20,1
	r20.s64 = 1;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r22,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r22.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stb r11,17617(r21)
	PPC_STORE_U8(r21.u32 + 17617, r11.u8);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a7880
	if (!cr0.eq) goto loc_823A7880;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lis r23,-32127
	r23.s64 = -2105475072;
	// addi r27,r11,12472
	r27.s64 = r11.s64 + 12472;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r24,-32127
	r24.s64 = -2105475072;
	// addi r26,r11,-28672
	r26.s64 = r11.s64 + -28672;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// addi r25,r11,-28732
	r25.s64 = r11.s64 + -28732;
	// lis r31,-32127
	r31.s64 = -2105475072;
loc_823A7690:
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a7880
	if (cr0.eq) goto loc_823A7880;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// beq cr6,0x823a7880
	if (cr6.eq) goto loc_823A7880;
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// beq cr6,0x823a76b8
	if (cr6.eq) goto loc_823A76B8;
	// mr r20,r22
	r20.u64 = r22.u64;
	// b 0x823a76c8
	goto loc_823A76C8;
loc_823A76B8:
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
loc_823A76C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r9,r10,-48
	ctx.r9.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bgt cr6,0x823a7714
	if (cr6.gt) goto loc_823A7714;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// lwz r11,17588(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17588);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x823a770c
	if (cr6.eq) goto loc_823A770C;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bgt cr6,0x823a770c
	if (cr6.gt) goto loc_823A770C;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x823a786c
	goto loc_823A786C;
loc_823A770C:
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// b 0x823a786c
	goto loc_823A786C;
loc_823A7714:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r11
	r30.u64 = r11.u64;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r22.u32);
	// cmpwi cr6,r10,88
	cr6.compare<int32_t>(ctx.r10.s32, 88, xer);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bne cr6,0x823a7748
	if (!cr6.eq) goto loc_823A7748;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
loc_823A773C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// b 0x823a7840
	goto loc_823A7840;
loc_823A7748:
	// cmpwi cr6,r10,36
	cr6.compare<int32_t>(ctx.r10.s32, 36, xer);
	// bne cr6,0x823a7770
	if (!cr6.eq) goto loc_823A7770;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,36
	cr6.compare<uint32_t>(ctx.r9.u32, 36, xer);
	// beq cr6,0x823a7770
	if (cr6.eq) goto loc_823A7770;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// bl 0x823a7180
	sub_823A7180(ctx, base);
	// b 0x823a7834
	goto loc_823A7834;
loc_823A7770:
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// bne cr6,0x823a7818
	if (!cr6.eq) goto loc_823A7818;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// lwz r11,17608(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 17608);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a77ec
	if (cr0.eq) goto loc_823A77EC;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4e90
	sub_823A4E90(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// lwz r11,17612(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 17612);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x823a773c
	if (!cr0.eq) goto loc_823A773C;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r19,r1,88
	r19.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
loc_823A77E0:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// b 0x823a7834
	goto loc_823A7834;
loc_823A77EC:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r19,r1,88
	r19.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// b 0x823a77e0
	goto loc_823A77E0;
loc_823A7818:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x823ab520
	sub_823AB520(ctx, base);
loc_823A7834:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A7840:
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x823a7868
	if (!cr6.gt) goto loc_823A7868;
	// lwz r3,17588(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 17588);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x823a7868
	if (cr6.eq) goto loc_823A7868;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a50e8
	sub_823A50E8(ctx, base);
loc_823A7868:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_823A786C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm. r11,r11,0,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a7690
	if (cr0.eq) goto loc_823A7690;
loc_823A7880:
	// mr r11,r22
	r11.u64 = r22.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,17617(r21)
	PPC_STORE_U8(r21.u32 + 17617, r11.u8);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823A7894"))) PPC_WEAK_FUNC(sub_823A7894);
PPC_FUNC_IMPL(__imp__sub_823A7894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A7898"))) PPC_WEAK_FUNC(sub_823A7898);
PPC_FUNC_IMPL(__imp__sub_823A7898) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r31,-32127
	r31.s64 = -2105475072;
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r8,r8,12
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFF;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// clrlwi r8,r8,12
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFF;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stw r30,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r30.u32);
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bgt cr6,0x823a7b0c
	if (cr6.gt) goto loc_823A7B0C;
	// beq cr6,0x823a7fe8
	if (cr6.eq) goto loc_823A7FE8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823a7af4
	if (cr6.eq) goto loc_823A7AF4;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// ble cr6,0x823a7c60
	if (!cr6.gt) goto loc_823A7C60;
	// cmpwi cr6,r10,49
	cr6.compare<int32_t>(ctx.r10.s32, 49, xer);
	// ble cr6,0x823a79a8
	if (!cr6.gt) goto loc_823A79A8;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x823a7c60
	if (cr6.gt) goto loc_823A7C60;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lbz r10,-1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + -1);
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r11,r11,-50
	r11.s64 = r11.s64 + -50;
loc_823A7930:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
loc_823A7940:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7990
	if (cr6.eq) goto loc_823A7990;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a7960
	if (cr0.eq) goto loc_823A7960;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a7990
	if (!cr6.eq) goto loc_823A7990;
loc_823A7960:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,-29524
	ctx.r4.s64 = r11.s64 + -29524;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A7990:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
loc_823A7994:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
loc_823A799C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd44
	return;
loc_823A79A8:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// beq 0x823a7a50
	if (cr0.eq) goto loc_823A7A50;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823a7628
	sub_823A7628(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a4df0
	sub_823A4DF0(ctx, base);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// bne cr6,0x823a7a14
	if (!cr6.eq) goto loc_823A7A14;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
loc_823A7A14:
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823a7a30
	if (cr6.eq) goto loc_823A7A30;
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
loc_823A7A30:
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a7a48
	if (!cr6.eq) goto loc_823A7A48;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x823a7994
	goto loc_823A7994;
loc_823A7A48:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// stw r30,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r30.u32);
loc_823A7A50:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823a8208
	sub_823A8208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r30,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7ac4
	if (cr6.eq) goto loc_823A7AC4;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a7a8c
	if (cr0.eq) goto loc_823A7A8C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a7ac4
	if (!cr6.eq) goto loc_823A7AC4;
loc_823A7A8C:
	// lbz r11,-1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -1);
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(r11.u32, 49, xer);
	// bne cr6,0x823a7ac4
	if (!cr6.eq) goto loc_823A7AC4;
	// li r4,126
	ctx.r4.s64 = 126;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A7AC4:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7990
	if (cr6.eq) goto loc_823A7990;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a7ae4
	if (cr0.eq) goto loc_823A7AE4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a7990
	if (!cr6.eq) goto loc_823A7990;
loc_823A7AE4:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// b 0x823a7990
	goto loc_823A7990;
loc_823A7AF4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
loc_823A7AFC:
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
loc_823A7B04:
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// b 0x823a799c
	goto loc_823A799C;
loc_823A7B0C:
	// cmpwi cr6,r10,66
	cr6.compare<int32_t>(ctx.r10.s32, 66, xer);
	// beq cr6,0x823a7fe4
	if (cr6.eq) goto loc_823A7FE4;
	// ble cr6,0x823a7c60
	if (!cr6.gt) goto loc_823A7C60;
	// cmpwi cr6,r10,90
	cr6.compare<int32_t>(ctx.r10.s32, 90, xer);
	// ble cr6,0x823a7fe8
	if (!cr6.gt) goto loc_823A7FE8;
	// cmpwi cr6,r10,95
	cr6.compare<int32_t>(ctx.r10.s32, 95, xer);
	// bne cr6,0x823a7c60
	if (!cr6.eq) goto loc_823A7C60;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,79
	cr6.compare<int32_t>(ctx.r10.s32, 79, xer);
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// bgt cr6,0x823a7c7c
	if (cr6.gt) goto loc_823A7C7C;
	// cmpwi cr6,r10,68
	cr6.compare<int32_t>(ctx.r10.s32, 68, xer);
	// bge cr6,0x823a7cb0
	if (!cr6.lt) goto loc_823A7CB0;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// bgt cr6,0x823a7c04
	if (cr6.gt) goto loc_823A7C04;
	// beq cr6,0x823a7bc8
	if (cr6.eq) goto loc_823A7BC8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823a7bbc
	if (cr6.eq) goto loc_823A7BBC;
	// cmpwi cr6,r10,47
	cr6.compare<int32_t>(ctx.r10.s32, 47, xer);
	// ble cr6,0x823a7c60
	if (!cr6.gt) goto loc_823A7C60;
	// cmpwi cr6,r10,54
	cr6.compare<int32_t>(ctx.r10.s32, 54, xer);
	// ble cr6,0x823a7ba0
	if (!cr6.gt) goto loc_823A7BA0;
	// cmpwi cr6,r10,56
	cr6.compare<int32_t>(ctx.r10.s32, 56, xer);
	// bgt cr6,0x823a7c60
	if (cr6.gt) goto loc_823A7C60;
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r11,r11,-14
	r11.s64 = r11.s64 + -14;
loc_823A7B8C:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
loc_823A7B94:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// b 0x823a799c
	goto loc_823A799C;
loc_823A7BA0:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r11,r11,-14
	r11.s64 = r11.s64 + -14;
	// b 0x823a7930
	goto loc_823A7930;
loc_823A7BBC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_823A7BC0:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823a7afc
	goto loc_823A7AFC;
loc_823A7BC8:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r11,r11,-14
	r11.s64 = r11.s64 + -14;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
loc_823A7BF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x823a7994
	goto loc_823A7994;
loc_823A7C04:
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// beq cr6,0x823a7c44
	if (cr6.eq) goto loc_823A7C44;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// ble cr6,0x823a7c60
	if (!cr6.gt) goto loc_823A7C60;
	// cmpwi cr6,r10,66
	cr6.compare<int32_t>(ctx.r10.s32, 66, xer);
	// ble cr6,0x823a7cb0
	if (!cr6.gt) goto loc_823A7CB0;
	// cmpwi cr6,r10,67
	cr6.compare<int32_t>(ctx.r10.s32, 67, xer);
	// bne cr6,0x823a7c60
	if (!cr6.eq) goto loc_823A7C60;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-29652
	ctx.r4.s64 = r11.s64 + -29652;
loc_823A7C30:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a6ff0
	sub_823A6FF0(ctx, base);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// b 0x823a7bf8
	goto loc_823A7BF8;
loc_823A7C44:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a7bbc
	if (cr0.eq) goto loc_823A7BBC;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// beq cr6,0x823a7c6c
	if (cr6.eq) goto loc_823A7C6C;
loc_823A7C60:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x823a7b04
	goto loc_823A7B04;
loc_823A7C6C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-28604
	ctx.r4.s64 = r11.s64 + -28604;
	// b 0x823a7c30
	goto loc_823A7C30;
loc_823A7C7C:
	// addi r10,r10,-80
	ctx.r10.s64 = ctx.r10.s64 + -80;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bgt cr6,0x823a7c60
	if (cr6.gt) goto loc_823A7C60;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-28944
	r12.s64 = r12.s64 + -28944;
	// rlwinm r0,r10,1,0,30
	r0.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32198
	r12.s64 = -2110128128;
	// addi r12,r12,31120
	r12.s64 = r12.s64 + 31120;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_823A7CCC;
	case 1:
		goto loc_823A7990;
	case 2:
		goto loc_823A7D64;
	case 3:
		goto loc_823A7CB0;
	case 4:
		goto loc_823A7CB0;
	case 5:
		goto loc_823A7EE0;
	case 6:
		goto loc_823A7EE0;
	case 7:
		goto loc_823A7C60;
	case 8:
		goto loc_823A7CB0;
	case 9:
		goto loc_823A7CB0;
	case 10:
		goto loc_823A7C60;
	case 11:
		goto loc_823A7C60;
	case 12:
		goto loc_823A7C60;
	case 13:
		goto loc_823A7C60;
	case 14:
		goto loc_823A7C60;
	case 15:
		goto loc_823A7EFC;
	default:
		__builtin_unreachable();
	}
loc_823A7CB0:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r11,r11,-21
	r11.s64 = r11.s64 + -21;
	// b 0x823a7b8c
	goto loc_823A7B8C;
loc_823A7CCC:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r11,r11,-21
	r11.s64 = r11.s64 + -21;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823a7898
	sub_823A7898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7d50
	if (cr6.eq) goto loc_823A7D50;
	// lwz r31,100(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// srawi. r11,r31,28
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r31.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a7d30
	if (cr0.eq) goto loc_823A7D30;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a7d50
	if (!cr6.eq) goto loc_823A7D50;
loc_823A7D30:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a4a28
	sub_823A4A28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a7d48
	if (cr0.eq) goto loc_823A7D48;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823a7d50
	if (!cr6.eq) goto loc_823A7D50;
loc_823A7D48:
	// rlwinm. r11,r31,0,6,6
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a7c60
	if (!cr0.eq) goto loc_823A7C60;
loc_823A7D50:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_823A7D54:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_823A7D5C:
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// b 0x823a799c
	goto loc_823A799C;
loc_823A7D64:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r11,-29324
	r30.s64 = r11.s64 + -29324;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r9,r30,20
	ctx.r9.s64 = r30.s64 + 20;
	// addi r11,r11,-21
	r11.s64 = r11.s64 + -21;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// beq cr6,0x823a7e9c
	if (cr6.eq) goto loc_823A7E9C;
	// cmpwi cr6,r10,49
	cr6.compare<int32_t>(ctx.r10.s32, 49, xer);
	// beq cr6,0x823a7de4
	if (cr6.eq) goto loc_823A7DE4;
	// addi r10,r10,-50
	ctx.r10.s64 = ctx.r10.s64 + -50;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// ble cr6,0x823a7d54
	if (!cr6.gt) goto loc_823A7D54;
	// b 0x823a7bc0
	goto loc_823A7BC0;
loc_823A7DE4:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,41
	ctx.r5.s64 = 41;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// b 0x823a799c
	goto loc_823A799C;
loc_823A7E9C:
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823ab6e0
	sub_823AB6E0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r31,r1,96
	r31.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x823a7d5c
	goto loc_823A7D5C;
loc_823A7EE0:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r11,r11,-21
	r11.s64 = r11.s64 + -21;
	// b 0x823a7930
	goto loc_823A7930;
loc_823A7EFC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// blt cr6,0x823a7c60
	if (cr6.lt) goto loc_823A7C60;
	// cmpwi cr6,r10,68
	cr6.compare<int32_t>(ctx.r10.s32, 68, xer);
	// ble cr6,0x823a7f2c
	if (!cr6.gt) goto loc_823A7F2C;
	// cmpwi cr6,r10,70
	cr6.compare<int32_t>(ctx.r10.s32, 70, xer);
	// ble cr6,0x823a7f50
	if (!cr6.gt) goto loc_823A7F50;
	// cmpwi cr6,r10,74
	cr6.compare<int32_t>(ctx.r10.s32, 74, xer);
	// bgt cr6,0x823a7c60
	if (cr6.gt) goto loc_823A7C60;
loc_823A7F2C:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x823a7b94
	goto loc_823A7B94;
loc_823A7F50:
	// lbz r10,-1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + -1);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// bne cr6,0x823a7fb8
	if (!cr6.eq) goto loc_823A7FB8;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a9828
	sub_823A9828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// lwz r11,17592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x823a7fcc
	if (!cr6.eq) goto loc_823A7FCC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r31)
	PPC_STORE_U32(r31.u32 + 17592, r11.u32);
	// b 0x823a7fcc
	goto loc_823A7FCC;
loc_823A7FB8:
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823a87c0
	sub_823A87C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823A7FCC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28608
	ctx.r4.s64 = r11.s64 + -28608;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823a7994
	goto loc_823A7994;
loc_823A7FE4:
	// li r29,1
	r29.s64 = 1;
loc_823A7FE8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lbz r10,-1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + -1);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,-29324
	r11.s64 = r11.s64 + -29324;
	// addi r9,r11,20
	ctx.r9.s64 = r11.s64 + 20;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r11,r11,-57
	r11.s64 = r11.s64 + -57;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x823a7940
	if (cr6.eq) goto loc_823A7940;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a7990
	if (cr6.eq) goto loc_823A7990;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a28
	sub_823A4A28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a803c
	if (cr0.eq) goto loc_823A803C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823a7990
	if (!cr6.eq) goto loc_823A7990;
loc_823A803C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// b 0x823a7990
	goto loc_823A7990;
}

__attribute__((alias("__imp__sub_823A804C"))) PPC_WEAK_FUNC(sub_823A804C);
PPC_FUNC_IMPL(__imp__sub_823A804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8050"))) PPC_WEAK_FUNC(sub_823A8050);
PPC_FUNC_IMPL(__imp__sub_823A8050) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r11,17592(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// bne cr6,0x823a81f0
	if (!cr6.eq) goto loc_823A81F0;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r10,36
	cr6.compare<uint32_t>(ctx.r10.u32, 36, xer);
	// bne cr6,0x823a81f0
	if (!cr6.eq) goto loc_823A81F0;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,17592(r28)
	PPC_STORE_U32(r28.u32 + 17592, r11.u32);
	// lwz r27,17580(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 17580);
	// lwz r26,17584(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 17584);
	// lwz r25,17588(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 17588);
	// bl 0x823a5098
	sub_823A5098(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823a5098
	sub_823A5098(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823a5098
	sub_823A5098(ctx, base);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r8,r8,12
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFFF;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,17580(r29)
	PPC_STORE_U32(r29.u32 + 17580, r11.u32);
	// addi r11,r1,192
	r11.s64 = ctx.r1.s64 + 192;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r11,17584(r30)
	PPC_STORE_U32(r30.u32 + 17584, r11.u32);
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// stw r11,17588(r31)
	PPC_STORE_U32(r31.u32 + 17588, r11.u32);
	// lwz r11,17592(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,63
	cr6.compare<uint32_t>(ctx.r9.u32, 63, xer);
	// bne cr6,0x823a8118
	if (!cr6.eq) goto loc_823A8118;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,17592(r28)
	PPC_STORE_U32(r28.u32 + 17592, r11.u32);
	// bl 0x823a7898
	sub_823A7898(ctx, base);
	// b 0x823a811c
	goto loc_823A811C;
loc_823A8118:
	// bl 0x823a8208
	sub_823A8208(ctx, base);
loc_823A811C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8148
	if (cr6.eq) goto loc_823A8148;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8154
	if (cr0.eq) goto loc_823A8154;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a8154
	if (cr6.eq) goto loc_823A8154;
loc_823A8148:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// li r11,1
	r11.s64 = 1;
	// stb r11,17616(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17616, r11.u8);
loc_823A8154:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823a81d4
	if (!cr0.eq) goto loc_823A81D4;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a7628
	sub_823A7628(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4df0
	sub_823A4DF0(ctx, base);
	// extsb r11,r3
	r11.s64 = ctx.r3.s8;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// bne cr6,0x823a81b4
	if (!cr6.eq) goto loc_823A81B4;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
loc_823A81B4:
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a81d4
	if (cr0.eq) goto loc_823A81D4;
	// lwz r11,17592(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17592);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r28)
	PPC_STORE_U32(r28.u32 + 17592, r11.u32);
loc_823A81D4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r27,17580(r29)
	PPC_STORE_U32(r29.u32 + 17580, r27.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r26,17584(r30)
	PPC_STORE_U32(r30.u32 + 17584, r26.u32);
	// stw r25,17588(r31)
	PPC_STORE_U32(r31.u32 + 17588, r25.u32);
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a81fc
	goto loc_823A81FC;
loc_823A81F0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823A81FC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823A8208"))) PPC_WEAK_FUNC(sub_823A8208);
PPC_FUNC_IMPL(__imp__sub_823A8208) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,17592
	r30.s64 = r11.s64 + 17592;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r9,r10,-48
	ctx.r9.s64 = ctx.r10.s64 + -48;
	// cmplwi cr6,r9,9
	cr6.compare<uint32_t>(ctx.r9.u32, 9, xer);
	// bgt cr6,0x823a8278
	if (cr6.gt) goto loc_823A8278;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17584(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17584);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x823a8270
	if (cr6.eq) goto loc_823A8270;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bgt cr6,0x823a8270
	if (cr6.gt) goto loc_823A8270;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x823a84bc
	goto loc_823A84BC;
loc_823A8270:
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// b 0x823a84bc
	goto loc_823A84BC;
loc_823A8278:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r9,r9,12
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bne cr6,0x823a82ec
	if (!cr6.eq) goto loc_823A82EC;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a8050
	sub_823A8050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x823a8494
	if (cr6.eq) goto loc_823A8494;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x823a4fa0
	sub_823A4FA0(ctx, base);
	// b 0x823a8494
	goto loc_823A8494;
loc_823A82EC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,18
	ctx.r8.s64 = 18;
	// addi r31,r10,-28564
	r31.s64 = ctx.r10.s64 + -28564;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_823A8300:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823a832c
	if (cr0.eq) goto loc_823A832C;
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bne cr6,0x823a832c
	if (!cr6.eq) goto loc_823A832C;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x823a8300
	if (!cr0.eq) goto loc_823A8300;
loc_823A832C:
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823a8344
	if (!cr0.eq) goto loc_823A8344;
	// addi r11,r11,19
	r11.s64 = r11.s64 + 19;
	// b 0x823a8398
	goto loc_823A8398;
loc_823A8344:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r8,12
	ctx.r8.s64 = 12;
	// addi r31,r10,-28580
	r31.s64 = ctx.r10.s64 + -28580;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
loc_823A8358:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r7,r7
	ctx.r7.s64 = ctx.r7.s8;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823a8384
	if (cr0.eq) goto loc_823A8384;
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r6,r6
	ctx.r6.s64 = ctx.r6.s8;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bne cr6,0x823a8384
	if (!cr6.eq) goto loc_823A8384;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x823a8358
	if (!cr0.eq) goto loc_823A8358;
loc_823A8384:
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823a8478
	if (!cr0.eq) goto loc_823A8478;
	// addi r11,r11,13
	r11.s64 = r11.s64 + 13;
loc_823A8398:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x823a70e0
	sub_823A70E0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17608);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8424
	if (cr0.eq) goto loc_823A8424;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4e90
	sub_823A4E90(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17612(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17612);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// beq 0x823a83f0
	if (cr0.eq) goto loc_823A83F0;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// b 0x823a8494
	goto loc_823A8494;
loc_823A83F0:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,25384
	ctx.r4.s64 = r11.s64 + 25384;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x823a8458
	goto loc_823A8458;
loc_823A8424:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25384
	ctx.r4.s64 = r11.s64 + 25384;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
loc_823A8458:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,12472
	ctx.r5.s64 = r11.s64 + 12472;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// b 0x823a8494
	goto loc_823A8494;
loc_823A8478:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a5860
	sub_823A5860(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A8494:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a84b8
	if (cr0.eq) goto loc_823A84B8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,17584(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 17584);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x823a84b8
	if (cr6.eq) goto loc_823A84B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823a50e8
	sub_823A50E8(ctx, base);
loc_823A84B8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_823A84BC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A84D0"))) PPC_WEAK_FUNC(sub_823A84D0);
PPC_FUNC_IMPL(__imp__sub_823A84D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x823a8208
	sub_823A8208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r30,-32127
	r30.s64 = -2105475072;
	// rlwinm. r11,r11,0,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r29,r11,-28544
	r29.s64 = r11.s64 + -28544;
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// bne 0x823a8574
	if (!cr0.eq) goto loc_823A8574;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a8574
	if (cr0.eq) goto loc_823A8574;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// beq cr6,0x823a8574
	if (cr6.eq) goto loc_823A8574;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a9b38
	sub_823A9B38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
loc_823A8574:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// bne cr6,0x823a8590
	if (!cr6.eq) goto loc_823A8590;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// b 0x823a8628
	goto loc_823A8628;
loc_823A8590:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823a85c0
	if (cr6.eq) goto loc_823A85C0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x823a8628
	if (cr6.eq) goto loc_823A8628;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x823a8628
	goto loc_823A8628;
loc_823A85C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a85e0
	if (cr6.eq) goto loc_823A85E0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a85f0
	if (cr0.eq) goto loc_823A85F0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a85f0
	if (cr6.eq) goto loc_823A85F0;
loc_823A85E0:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4fa0
	sub_823A4FA0(ctx, base);
	// b 0x823a8628
	goto loc_823A8628;
loc_823A85F0:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A8628:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A8634"))) PPC_WEAK_FUNC(sub_823A8634);
PPC_FUNC_IMPL(__imp__sub_823A8634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8638"))) PPC_WEAK_FUNC(sub_823A8638);
PPC_FUNC_IMPL(__imp__sub_823A8638) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,17608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17608);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm. r8,r10,17,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823a866c
	if (cr0.eq) goto loc_823A866C;
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,1
	r30.s64 = 1;
	// beq 0x823a8670
	if (cr0.eq) goto loc_823A8670;
loc_823A866C:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823A8670:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// clrlwi r7,r7,12
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFF;
	// lwz r10,17592(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 17592);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,17592(r11)
	PPC_STORE_U32(r11.u32 + 17592, ctx.r10.u32);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823a8794
	if (cr0.eq) goto loc_823A8794;
	// cmpwi cr6,r9,84
	cr6.compare<int32_t>(ctx.r9.s32, 84, xer);
	// beq cr6,0x823a873c
	if (cr6.eq) goto loc_823A873C;
	// cmpwi cr6,r9,85
	cr6.compare<int32_t>(ctx.r9.s32, 85, xer);
	// beq cr6,0x823a8730
	if (cr6.eq) goto loc_823A8730;
	// cmpwi cr6,r9,86
	cr6.compare<int32_t>(ctx.r9.s32, 86, xer);
	// beq cr6,0x823a8724
	if (cr6.eq) goto loc_823A8724;
	// cmpwi cr6,r9,87
	cr6.compare<int32_t>(ctx.r9.s32, 87, xer);
	// beq cr6,0x823a86e4
	if (cr6.eq) goto loc_823A86E4;
	// cmpwi cr6,r9,88
	cr6.compare<int32_t>(ctx.r9.s32, 88, xer);
	// beq cr6,0x823a86d8
	if (cr6.eq) goto loc_823A86D8;
	// cmpwi cr6,r9,89
	cr6.compare<int32_t>(ctx.r9.s32, 89, xer);
	// bne cr6,0x823a874c
	if (!cr6.eq) goto loc_823A874C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28480
	ctx.r4.s64 = r11.s64 + -28480;
	// b 0x823a8744
	goto loc_823A8744;
loc_823A86D8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28492
	ctx.r4.s64 = r11.s64 + -28492;
	// b 0x823a8744
	goto loc_823A8744;
loc_823A86E4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// bl 0x823a6640
	sub_823A6640(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-28500
	ctx.r4.s64 = r11.s64 + -28500;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823a874c
	goto loc_823A874C;
loc_823A8724:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28508
	ctx.r4.s64 = r11.s64 + -28508;
	// b 0x823a8744
	goto loc_823A8744;
loc_823A8730:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28516
	ctx.r4.s64 = r11.s64 + -28516;
	// b 0x823a8744
	goto loc_823A8744;
loc_823A873C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28524
	ctx.r4.s64 = r11.s64 + -28524;
loc_823A8744:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
loc_823A874C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x823a8770
	if (cr6.eq) goto loc_823A8770;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A8770:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a84d0
	sub_823A84D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a87b0
	goto loc_823A87B0;
loc_823A8794:
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r9,-28540
	ctx.r9.s64 = ctx.r9.s64 + -28540;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// stw r10,17592(r11)
	PPC_STORE_U32(r11.u32 + 17592, ctx.r10.u32);
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
loc_823A87B0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823A87BC"))) PPC_WEAK_FUNC(sub_823A87BC);
PPC_FUNC_IMPL(__imp__sub_823A87BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A87C0"))) PPC_WEAK_FUNC(sub_823A87C0);
PPC_FUNC_IMPL(__imp__sub_823A87C0) {
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,63
	cr6.compare<uint32_t>(ctx.r9.u32, 63, xer);
	// bne cr6,0x823a8818
	if (!cr6.eq) goto loc_823A8818;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,36
	cr6.compare<uint32_t>(ctx.r9.u32, 36, xer);
	// bne cr6,0x823a8804
	if (!cr6.eq) goto loc_823A8804;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823a8050
	sub_823A8050(ctx, base);
	// b 0x823a8820
	goto loc_823A8820;
loc_823A8804:
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823a7898
	sub_823A7898(ctx, base);
	// b 0x823a8820
	goto loc_823A8820;
loc_823A8818:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823a8208
	sub_823A8208(ctx, base);
loc_823A8820:
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

__attribute__((alias("__imp__sub_823A8838"))) PPC_WEAK_FUNC(sub_823A8838);
PPC_FUNC_IMPL(__imp__sub_823A8838) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,17608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17608);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// beq 0x823a886c
	if (cr0.eq) goto loc_823A886C;
	// lwz r4,-29368(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -29368);
	// b 0x823a8874
	goto loc_823A8874;
loc_823A886C:
	// lwz r11,-29368(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -29368);
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
loc_823A8874:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823a88f4
	if (cr6.eq) goto loc_823A88F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// extsb r11,r9
	r11.s64 = ctx.r9.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// beq cr6,0x823a88e0
	if (cr6.eq) goto loc_823A88E0;
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// beq cr6,0x823a88c8
	if (cr6.eq) goto loc_823A88C8;
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(r11.s32, 53, xer);
	// bne cr6,0x823a8900
	if (!cr6.eq) goto loc_823A8900;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// b 0x823a891c
	goto loc_823A891C;
loc_823A88C8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a84d0
	sub_823A84D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// b 0x823a8900
	goto loc_823A8900;
loc_823A88E0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28732
	ctx.r4.s64 = r11.s64 + -28732;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// b 0x823a8900
	goto loc_823A8900;
loc_823A88F4:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5578
	sub_823A5578(ctx, base);
loc_823A8900:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28996
	ctx.r4.s64 = r11.s64 + -28996;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
loc_823A891C:
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

__attribute__((alias("__imp__sub_823A8934"))) PPC_WEAK_FUNC(sub_823A8934);
PPC_FUNC_IMPL(__imp__sub_823A8934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A8938"))) PPC_WEAK_FUNC(sub_823A8938);
PPC_FUNC_IMPL(__imp__sub_823A8938) {
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
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r24,0
	r24.s64 = 0;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x823a43c8
	sub_823A43C8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a89a4
	if (cr6.eq) goto loc_823A89A4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a4a28
	sub_823A4A28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a8994
	if (cr0.eq) goto loc_823A8994;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a4a28
	sub_823A4A28(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823a89a4
	if (!cr6.eq) goto loc_823A89A4;
loc_823A8994:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r25,1
	r25.s64 = 1;
	// rlwinm. r11,r11,0,5,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a89a8
	if (!cr0.eq) goto loc_823A89A8;
loc_823A89A4:
	// mr r25,r24
	r25.u64 = r24.u64;
loc_823A89A8:
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(r29.u32, 65535, xer);
	// bne cr6,0x823a89c0
	if (!cr6.eq) goto loc_823A89C0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// b 0x823a9818
	goto loc_823A9818;
loc_823A89C0:
	// cmplwi cr6,r29,65534
	cr6.compare<uint32_t>(r29.u32, 65534, xer);
	// bne cr6,0x823a89e8
	if (!cr6.eq) goto loc_823A89E8;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// b 0x823a9818
	goto loc_823A9818;
loc_823A89E8:
	// cmplwi cr6,r29,65533
	cr6.compare<uint32_t>(r29.u32, 65533, xer);
	// bne cr6,0x823a89f8
	if (!cr6.eq) goto loc_823A89F8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x823a9810
	goto loc_823A9810;
loc_823A89F8:
	// rlwinm. r23,r29,0,16,16
	r23.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// lis r22,-32127
	r22.s64 = -2105475072;
	// beq 0x823a9154
	if (cr0.eq) goto loc_823A9154;
	// rlwinm r30,r29,0,19,20
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r30,-2048
	r11.s64 = r30.s64 + -2048;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r27,r11,27,31,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne 0x823a8a20
	if (!cr0.eq) goto loc_823A8A20;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A8A20:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8a34
	if (cr6.eq) goto loc_823A8A34;
	// andi. r11,r29,6912
	r11.u64 = r29.u64 & 6912;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// beq cr6,0x823a9154
	if (cr6.eq) goto loc_823A9154;
loc_823A8A34:
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne 0x823a8a44
	if (!cr0.eq) goto loc_823A8A44;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A8A44:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8a60
	if (cr6.eq) goto loc_823A8A60;
	// andi. r11,r29,6912
	r11.u64 = r29.u64 & 6912;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r11,4352
	cr6.compare<uint32_t>(r11.u32, 4352, xer);
	// beq cr6,0x823a9154
	if (cr6.eq) goto loc_823A9154;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(r11.u32, 4608, xer);
	// beq cr6,0x823a9154
	if (cr6.eq) goto loc_823A9154;
loc_823A8A60:
	// rlwinm. r11,r29,0,17,17
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r26,12288
	r26.s64 = 805306368;
	// beq 0x823a8af4
	if (cr0.eq) goto loc_823A8AF4;
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a8ac0
	if (cr0.eq) goto loc_823A8AC0;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8ac0
	if (cr0.eq) goto loc_823A8AC0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823a8838
	sub_823A8838(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823a8af4
	goto loc_823A8AF4;
loc_823A8AC0:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823a8838
	sub_823A8838(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r10,0,0,3
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// beq cr6,0x823a8af4
	if (cr6.eq) goto loc_823A8AF4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8af4
	if (cr0.eq) goto loc_823A8AF4;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a8af4
	if (cr6.eq) goto loc_823A8AF4;
	// rlwimi r10,r11,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A8AF4:
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne 0x823a8b04
	if (!cr0.eq) goto loc_823A8B04;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A8B04:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8c30
	if (cr6.eq) goto loc_823A8C30;
	// cmplwi cr6,r30,6144
	cr6.compare<uint32_t>(r30.u32, 6144, xer);
	// bne cr6,0x823a8c30
	if (!cr6.eq) goto loc_823A8C30;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// li r5,123
	ctx.r5.s64 = 123;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a5ed8
	sub_823A5ED8(ctx, base);
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a8ba4
	if (!cr0.eq) goto loc_823A8BA4;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r11,-28204
	ctx.r5.s64 = r11.s64 + -28204;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823A8BA4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28208
	ctx.r4.s64 = r11.s64 + -28208;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a5d28
	sub_823A5D28(ctx, base);
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9448
	if (cr0.eq) goto loc_823A9448;
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9448
	if (cr0.eq) goto loc_823A9448;
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a9448
	if (!cr0.eq) goto loc_823A9448;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// addi r31,r1,128
	r31.s64 = ctx.r1.s64 + 128;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// b 0x823a943c
	goto loc_823A943C;
loc_823A8C30:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r24,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r24.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r24.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r24.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r31,r11,12
	r31.u64 = r11.u32 & 0xFFFFF;
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// bne 0x823a8c90
	if (!cr0.eq) goto loc_823A8C90;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A8C90:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8d24
	if (cr6.eq) goto loc_823A8D24;
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x823a8d0c
	if (cr0.eq) goto loc_823A8D0C;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,1536
	cr6.compare<uint32_t>(r11.u32, 1536, xer);
	// bne cr6,0x823a8ce0
	if (!cr6.eq) goto loc_823A8CE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823a8cf4
	goto loc_823A8CF4;
loc_823A8CE0:
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x823a8d0c
	if (cr0.eq) goto loc_823A8D0C;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,1280
	cr6.compare<uint32_t>(r11.u32, 1280, xer);
	// bne cr6,0x823a8d0c
	if (!cr6.eq) goto loc_823A8D0C;
loc_823A8CF4:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A8D0C:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A8D24:
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x823a8d8c
	if (cr0.eq) goto loc_823A8D8C;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// beq cr6,0x823a8d8c
	if (cr6.eq) goto loc_823A8D8C;
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// rlwinm r11,r11,0,25,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r11,96
	cr6.compare<uint32_t>(r11.u32, 96, xer);
	// beq cr6,0x823a8d60
	if (cr6.eq) goto loc_823A8D60;
	// bl 0x823a4b60
	sub_823A4B60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823a8d8c
	goto loc_823A8D8C;
loc_823A8D60:
	// bl 0x823a4b60
	sub_823A4B60(ctx, base);
	// rlwinm r11,r31,0,0,3
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// beq cr6,0x823a8d8c
	if (cr6.eq) goto loc_823A8D8C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8d8c
	if (cr0.eq) goto loc_823A8D8C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a8d8c
	if (cr6.eq) goto loc_823A8D8C;
	// rlwimi r31,r11,28,0,3
	r31.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (r31.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
loc_823A8D8C:
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a8dd8
	if (cr0.eq) goto loc_823A8DD8;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8dd8
	if (cr0.eq) goto loc_823A8DD8;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5d28
	sub_823A5D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823a8e08
	goto loc_823A8E08;
loc_823A8DD8:
	// bl 0x823a5d28
	sub_823A5D28(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r10,0,0,3
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// beq cr6,0x823a8e08
	if (cr6.eq) goto loc_823A8E08;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8e08
	if (cr0.eq) goto loc_823A8E08;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a8e08
	if (cr6.eq) goto loc_823A8E08;
	// rlwimi r10,r11,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A8E08:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8e88
	if (cr6.eq) goto loc_823A8E88;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8e28
	if (cr0.eq) goto loc_823A8E28;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a8e88
	if (!cr6.eq) goto loc_823A8E88;
loc_823A8E28:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a8e7c
	if (cr6.eq) goto loc_823A8E7C;
	// srawi. r11,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8e44
	if (cr0.eq) goto loc_823A8E44;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a8e7c
	if (!cr6.eq) goto loc_823A8E7C;
loc_823A8E44:
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a8e7c
	if (!cr0.eq) goto loc_823A8E7C;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// b 0x823a8e88
	goto loc_823A8E88;
loc_823A8E7C:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A8E88:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r30,r24
	r30.u64 = r24.u64;
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r24.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// beq cr6,0x823a8ef0
	if (cr6.eq) goto loc_823A8EF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823a5520
	sub_823A5520(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,2836
	ctx.r4.s64 = r11.s64 + 2836;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a8f40
	if (cr0.eq) goto loc_823A8F40;
	// b 0x823a980c
	goto loc_823A980C;
loc_823A8EF0:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823a8f24
	if (cr0.eq) goto loc_823A8F24;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x823a8f28
	goto loc_823A8F28;
loc_823A8F24:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823A8F28:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823a5520
	sub_823A5520(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A8F40:
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne 0x823a8f50
	if (!cr0.eq) goto loc_823A8F50;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A8F50:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a906c
	if (cr6.eq) goto loc_823A906C;
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x823a903c
	if (cr0.eq) goto loc_823A903C;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,1536
	cr6.compare<uint32_t>(r11.u32, 1536, xer);
	// bne cr6,0x823a8fe4
	if (!cr6.eq) goto loc_823A8FE4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// addi r4,r11,-28224
	ctx.r4.s64 = r11.s64 + -28224;
	// addi r31,r1,104
	r31.s64 = ctx.r1.s64 + 104;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,44
	ctx.r5.s64 = 44;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// b 0x823a9024
	goto loc_823A9024;
loc_823A8FE4:
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x823a903c
	if (cr0.eq) goto loc_823A903C;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,1280
	cr6.compare<uint32_t>(r11.u32, 1280, xer);
	// bne cr6,0x823a903c
	if (!cr6.eq) goto loc_823A903C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,-28236
	ctx.r4.s64 = r11.s64 + -28236;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
loc_823A9024:
	// li r5,44
	ctx.r5.s64 = 44;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// b 0x823a904c
	goto loc_823A904C;
loc_823A903C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28248
	ctx.r4.s64 = r11.s64 + -28248;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
loc_823A904C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r5,r11,-28204
	ctx.r5.s64 = r11.s64 + -28204;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823A906C:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x823a6790
	sub_823A6790(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x823a90d0
	if (cr0.eq) goto loc_823A90D0;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// beq cr6,0x823a90d0
	if (cr6.eq) goto loc_823A90D0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823A90D0:
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,24,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a90f8
	if (cr0.eq) goto loc_823A90F8;
	// bl 0x823a68d8
	sub_823A68D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// b 0x823a9128
	goto loc_823A9128;
loc_823A90F8:
	// bl 0x823a68d8
	sub_823A68D8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r10,0,0,3
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// beq cr6,0x823a9128
	if (cr6.eq) goto loc_823A9128;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9128
	if (cr0.eq) goto loc_823A9128;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a9128
	if (cr6.eq) goto loc_823A9128;
	// rlwimi r10,r11,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823A9128:
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9448
	if (cr0.eq) goto loc_823A9448;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823a9448
	if (cr6.eq) goto loc_823A9448;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// b 0x823a9440
	goto loc_823A9440;
loc_823A9154:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x823a9224
	if (!cr6.eq) goto loc_823A9224;
	// rlwinm r11,r29,0,17,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x7C00;
	// cmplwi cr6,r11,26624
	cr6.compare<uint32_t>(r11.u32, 26624, xer);
	// bne cr6,0x823a9184
	if (!cr6.eq) goto loc_823A9184;
loc_823A9174:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823a6df0
	sub_823A6DF0(ctx, base);
	// b 0x823a9818
	goto loc_823A9818;
loc_823A9184:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x823a9224
	if (!cr6.eq) goto loc_823A9224;
	// rlwinm r11,r29,0,17,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x7C00;
	// cmplwi cr6,r11,28672
	cr6.compare<uint32_t>(r11.u32, 28672, xer);
	// beq cr6,0x823a9174
	if (cr6.eq) goto loc_823A9174;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x823a9224
	if (!cr6.eq) goto loc_823A9224;
	// rlwinm r11,r29,0,17,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x7C00;
	// cmplwi cr6,r11,24576
	cr6.compare<uint32_t>(r11.u32, 24576, xer);
	// bne cr6,0x823a91f8
	if (!cr6.eq) goto loc_823A91F8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823a64b8
	sub_823A64B8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,123
	ctx.r5.s64 = 123;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r31,r11,-28208
	r31.s64 = r11.s64 + -28208;
	// addi r30,r1,136
	r30.s64 = ctx.r1.s64 + 136;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// b 0x823a9818
	goto loc_823A9818;
loc_823A91F8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x823a9224
	if (!cr6.eq) goto loc_823A9224;
	// rlwinm r11,r29,0,17,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x7C00;
	// cmplwi cr6,r11,31744
	cr6.compare<uint32_t>(r11.u32, 31744, xer);
	// bne cr6,0x823a921c
	if (!cr6.eq) goto loc_823A921C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823a6348
	sub_823A6348(ctx, base);
	// b 0x823a9818
	goto loc_823A9818;
loc_823A921C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9230
	if (cr6.eq) goto loc_823A9230;
loc_823A9224:
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a9234
	goto loc_823A9234;
loc_823A9230:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A9234:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne cr6,0x823a924c
	if (!cr6.eq) goto loc_823A924C;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A924C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9288
	if (cr6.eq) goto loc_823A9288;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9270
	if (cr6.eq) goto loc_823A9270;
	// andi. r11,r29,6912
	r11.u64 = r29.u64 & 6912;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-4096
	r11.s64 = r11.s64 + -4096;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x823a9274
	goto loc_823A9274;
loc_823A9270:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823A9274:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9288
	if (cr6.eq) goto loc_823A9288;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28284
	ctx.r4.s64 = r11.s64 + -28284;
	// b 0x823a935c
	goto loc_823A935C;
loc_823A9288:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a929c
	if (cr6.eq) goto loc_823A929C;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a92a0
	goto loc_823A92A0;
loc_823A929C:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A92A0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne cr6,0x823a92b8
	if (!cr6.eq) goto loc_823A92B8;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A92B8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a92f4
	if (cr6.eq) goto loc_823A92F4;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a92dc
	if (cr6.eq) goto loc_823A92DC;
	// andi. r11,r29,6912
	r11.u64 = r29.u64 & 6912;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-4352
	r11.s64 = r11.s64 + -4352;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x823a92e0
	goto loc_823A92E0;
loc_823A92DC:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823A92E0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a92f4
	if (cr6.eq) goto loc_823A92F4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28336
	ctx.r4.s64 = r11.s64 + -28336;
	// b 0x823a935c
	goto loc_823A935C;
loc_823A92F4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9308
	if (cr6.eq) goto loc_823A9308;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a930c
	goto loc_823A930C;
loc_823A9308:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A930C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne cr6,0x823a9324
	if (!cr6.eq) goto loc_823A9324;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A9324:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9368
	if (cr6.eq) goto loc_823A9368;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9348
	if (cr6.eq) goto loc_823A9348;
	// andi. r11,r29,6912
	r11.u64 = r29.u64 & 6912;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-4608
	r11.s64 = r11.s64 + -4608;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x823a934c
	goto loc_823A934C;
loc_823A9348:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823A934C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9368
	if (cr6.eq) goto loc_823A9368;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28384
	ctx.r4.s64 = r11.s64 + -28384;
loc_823A935C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// b 0x823a937c
	goto loc_823A937C;
loc_823A9368:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x823a9384
	if (!cr6.eq) goto loc_823A9384;
	// rlwinm r11,r29,0,17,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x7C00;
	// cmplwi cr6,r11,30720
	cr6.compare<uint32_t>(r11.u32, 30720, xer);
	// beq cr6,0x823a980c
	if (cr6.eq) goto loc_823A980C;
loc_823A937C:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9390
	if (cr6.eq) goto loc_823A9390;
loc_823A9384:
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a9394
	goto loc_823A9394;
loc_823A9390:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A9394:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne cr6,0x823a93ac
	if (!cr6.eq) goto loc_823A93AC;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A93AC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9430
	if (cr6.eq) goto loc_823A9430;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a93d0
	if (cr6.eq) goto loc_823A93D0;
	// andi. r11,r29,6912
	r11.u64 = r29.u64 & 6912;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-4352
	r11.s64 = r11.s64 + -4352;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x823a93d4
	goto loc_823A93D4;
loc_823A93D0:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823A93D4:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823a9404
	if (!cr6.eq) goto loc_823A9404;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a93f8
	if (cr6.eq) goto loc_823A93F8;
	// andi. r11,r29,6912
	r11.u64 = r29.u64 & 6912;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,-4608
	r11.s64 = r11.s64 + -4608;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x823a93fc
	goto loc_823A93FC;
loc_823A93F8:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823A93FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9430
	if (cr6.eq) goto loc_823A9430;
loc_823A9404:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,2836
	ctx.r4.s64 = r11.s64 + 2836;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// b 0x823a9440
	goto loc_823A9440;
loc_823A9430:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x823ab808
	sub_823AB808(ctx, base);
loc_823A943C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823A9440:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A9448:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a945c
	if (cr6.eq) goto loc_823A945C;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a9460
	goto loc_823A9460;
loc_823A945C:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A9460:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9760
	if (cr6.eq) goto loc_823A9760;
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9618
	if (cr0.eq) goto loc_823A9618;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9494
	if (cr6.eq) goto loc_823A9494;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a9498
	goto loc_823A9498;
loc_823A9494:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A9498:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9500
	if (cr6.eq) goto loc_823A9500;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a94c4
	if (cr6.eq) goto loc_823A94C4;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// addi r11,r11,-512
	r11.s64 = r11.s64 + -512;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x823a94c8
	goto loc_823A94C8;
loc_823A94C4:
	// li r11,1
	r11.s64 = 1;
loc_823A94C8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9500
	if (cr6.eq) goto loc_823A9500;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,-28392
	ctx.r4.s64 = r11.s64 + -28392;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A9500:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9528
	if (cr6.eq) goto loc_823A9528;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// beq cr6,0x823a95e8
	if (cr6.eq) goto loc_823A95E8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9528
	if (cr6.eq) goto loc_823A9528;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a952c
	goto loc_823A952C;
loc_823A9528:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A952C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne cr6,0x823a9544
	if (!cr6.eq) goto loc_823A9544;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A9544:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9618
	if (cr6.eq) goto loc_823A9618;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9560
	if (cr6.eq) goto loc_823A9560;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a9564
	goto loc_823A9564;
loc_823A9560:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A9564:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9580
	if (cr6.eq) goto loc_823A9580;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,1280
	cr6.compare<uint32_t>(r11.u32, 1280, xer);
	// beq cr6,0x823a95e8
	if (cr6.eq) goto loc_823A95E8;
loc_823A9580:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9594
	if (cr6.eq) goto loc_823A9594;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a9598
	goto loc_823A9598;
loc_823A9594:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A9598:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a95b4
	if (cr6.eq) goto loc_823A95B4;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,1536
	cr6.compare<uint32_t>(r11.u32, 1536, xer);
	// beq cr6,0x823a95e8
	if (cr6.eq) goto loc_823A95E8;
loc_823A95B4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a95c8
	if (cr6.eq) goto loc_823A95C8;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a95cc
	goto loc_823A95CC;
loc_823A95C8:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A95CC:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9618
	if (cr6.eq) goto loc_823A9618;
	// rlwinm r11,r29,0,21,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x700;
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(r11.u32, 1024, xer);
	// bne cr6,0x823a9618
	if (!cr6.eq) goto loc_823A9618;
loc_823A95E8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,-28404
	ctx.r4.s64 = r11.s64 + -28404;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A9618:
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,25,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9760
	if (cr0.eq) goto loc_823A9760;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a963c
	if (cr6.eq) goto loc_823A963C;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a9640
	goto loc_823A9640;
loc_823A963C:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A9640:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9688
	if (cr6.eq) goto loc_823A9688;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9664
	if (cr6.eq) goto loc_823A9664;
	// rlwinm r11,r29,0,24,25
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xC0;
	// addi r11,r11,-64
	r11.s64 = r11.s64 + -64;
	// b 0x823a966c
	goto loc_823A966C;
loc_823A9664:
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
loc_823A966C:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9688
	if (cr6.eq) goto loc_823A9688;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28416
	ctx.r4.s64 = r11.s64 + -28416;
	// b 0x823a9738
	goto loc_823A9738;
loc_823A9688:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a969c
	if (cr6.eq) goto loc_823A969C;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a96a0
	goto loc_823A96A0;
loc_823A969C:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A96A0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a96e8
	if (cr6.eq) goto loc_823A96E8;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a96c4
	if (cr6.eq) goto loc_823A96C4;
	// rlwinm r11,r29,0,24,25
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xC0;
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// b 0x823a96cc
	goto loc_823A96CC;
loc_823A96C4:
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-4096
	r11.s64 = r11.s64 + -4096;
loc_823A96CC:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a96e8
	if (cr6.eq) goto loc_823A96E8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28428
	ctx.r4.s64 = r11.s64 + -28428;
	// b 0x823a9738
	goto loc_823A9738;
loc_823A96E8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a96fc
	if (cr6.eq) goto loc_823A96FC;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a9700
	goto loc_823A9700;
loc_823A96FC:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A9700:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9760
	if (cr6.eq) goto loc_823A9760;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// rlwinm r11,r29,0,24,25
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xC0;
	// bne cr6,0x823a9720
	if (!cr6.eq) goto loc_823A9720;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
loc_823A9720:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9760
	if (cr6.eq) goto loc_823A9760;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28440
	ctx.r4.s64 = r11.s64 + -28440;
loc_823A9738:
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A9760:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823a9774
	if (cr6.eq) goto loc_823A9774;
	// rlwinm r11,r29,0,19,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1800;
	// addi r11,r11,-2048
	r11.s64 = r11.s64 + -2048;
	// b 0x823a9778
	goto loc_823A9778;
loc_823A9774:
	// rlwinm r11,r29,0,17,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x6000;
loc_823A9778:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	// bne cr6,0x823a9790
	if (!cr6.eq) goto loc_823A9790;
	// rlwinm r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
loc_823A9790:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a97d4
	if (cr6.eq) goto loc_823A97D4;
	// lwz r11,17608(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 17608);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a97d4
	if (!cr0.eq) goto loc_823A97D4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,-28452
	ctx.r4.s64 = r11.s64 + -28452;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A97D4:
	// rlwinm. r11,r29,0,15,15
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a980c
	if (cr0.eq) goto loc_823A980C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// addi r4,r11,-28464
	ctx.r4.s64 = r11.s64 + -28464;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A980C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_823A9810:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
loc_823A9818:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823A9824"))) PPC_WEAK_FUNC(sub_823A9824);
PPC_FUNC_IMPL(__imp__sub_823A9824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9828"))) PPC_WEAK_FUNC(sub_823A9828);
PPC_FUNC_IMPL(__imp__sub_823A9828) {
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
	// lis r27,-32127
	r27.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,17608(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17608);
	// rlwinm. r10,r11,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a9878
	if (cr0.eq) goto loc_823A9878;
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,17608(r27)
	PPC_STORE_U32(r27.u32 + 17608, r11.u32);
	// bl 0x823ab6e0
	sub_823AB6E0(ctx, base);
	// lwz r11,17608(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17608);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,17608(r27)
	PPC_STORE_U32(r27.u32 + 17608, r11.u32);
loc_823A9868:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_823A986C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823a9b2c
	goto loc_823A9B2C;
loc_823A9878:
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// bne cr6,0x823a9b14
	if (!cr6.eq) goto loc_823A9B14;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// bne cr6,0x823a98d8
	if (!cr6.eq) goto loc_823A98D8;
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// bne cr6,0x823a98d8
	if (!cr6.eq) goto loc_823A98D8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a9828
	sub_823A9828(ctx, base);
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// b 0x823a98c8
	goto loc_823A98C8;
loc_823A98C0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
loc_823A98C8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823a98c0
	if (!cr6.eq) goto loc_823A98C0;
	// b 0x823a9868
	goto loc_823A9868;
loc_823A98D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a87c0
	sub_823A87C0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9914
	if (cr6.eq) goto loc_823A9914;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a28
	sub_823A4A28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a9908
	if (cr0.eq) goto loc_823A9908;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823a9914
	if (!cr6.eq) goto loc_823A9914;
loc_823A9908:
	// rlwinm. r11,r31,0,5,5
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r26,1
	r26.s64 = 1;
	// bne 0x823a9918
	if (!cr0.eq) goto loc_823A9918;
loc_823A9914:
	// li r26,0
	r26.s64 = 0;
loc_823A9918:
	// srawi. r11,r31,28
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r31.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r29,r31,12,31,31
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 12) & 0x1;
	// beq 0x823a9934
	if (cr0.eq) goto loc_823A9934;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a9934
	if (cr6.eq) goto loc_823A9934;
loc_823A992C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// b 0x823a986c
	goto loc_823A986C;
loc_823A9934:
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9a28
	if (cr0.eq) goto loc_823A9A28;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x823a9a28
	if (cr6.eq) goto loc_823A9A28;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a9b38
	sub_823A9B38(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9a28
	if (cr6.eq) goto loc_823A9A28;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9974
	if (cr0.eq) goto loc_823A9974;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a9a28
	if (!cr6.eq) goto loc_823A9A28;
loc_823A9974:
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lbz r11,17616(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17616);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a99f0
	if (cr0.eq) goto loc_823A99F0;
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stb r11,17616(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17616, r11.u8);
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// beq cr6,0x823a9a24
	if (cr6.eq) goto loc_823A9A24;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a9b38
	sub_823A9B38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-28544
	ctx.r5.s64 = r11.s64 + -28544;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x823a9a10
	goto loc_823A9A10;
loc_823A99F0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r5,r11,-28544
	ctx.r5.s64 = r11.s64 + -28544;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_823A9A10:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A9A24:
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823A9A28:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x823a9a5c
	if (cr6.eq) goto loc_823A9A5C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9a5c
	if (cr6.eq) goto loc_823A9A5C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a28
	sub_823A4A28(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823a9a54
	if (cr0.eq) goto loc_823A9A54;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823a9a5c
	if (!cr6.eq) goto loc_823A9A5C;
loc_823A9A54:
	// oris r31,r31,1024
	r31.u64 = r31.u64 | 67108864;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_823A9A5C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x823a9a6c
	if (cr6.eq) goto loc_823A9A6C;
	// oris r31,r31,16
	r31.u64 = r31.u64 | 1048576;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_823A9A6C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a992c
	if (cr6.eq) goto loc_823A992C;
	// srawi. r11,r31,28
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r31.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9a88
	if (cr0.eq) goto loc_823A9A88;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a992c
	if (!cr6.eq) goto loc_823A992C;
loc_823A9A88:
	// rlwinm. r11,r31,0,8,8
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a992c
	if (!cr0.eq) goto loc_823A992C;
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9ab0
	if (cr0.eq) goto loc_823A9AB0;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x823a9ab0
	if (cr6.eq) goto loc_823A9AB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823a9b24
	goto loc_823A9B24;
loc_823A9AB0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823a9ac4
	if (cr6.eq) goto loc_823A9AC4;
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
loc_823A9AC4:
	// lwz r11,17608(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17608);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9b04
	if (cr0.eq) goto loc_823A9B04;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x823a9b04
	if (!cr6.eq) goto loc_823A9B04;
	// rlwinm. r11,r31,0,11,11
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a9b04
	if (!cr0.eq) goto loc_823A9B04;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x823a8938
	sub_823A8938(ctx, base);
	// b 0x823a992c
	goto loc_823A992C;
loc_823A9B04:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a8938
	sub_823A8938(ctx, base);
	// b 0x823a9b2c
	goto loc_823A9B2C;
loc_823A9B14:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x823a9b24
	if (!cr6.eq) goto loc_823A9B24;
	// li r4,2
	ctx.r4.s64 = 2;
loc_823A9B24:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823A9B2C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823A9B38"))) PPC_WEAK_FUNC(sub_823A9B38);
PPC_FUNC_IMPL(__imp__sub_823A9B38) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r28,r23
	r28.u64 = r23.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r23,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r23.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// rlwinm. r10,r11,0,0,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r22,r11,-28544
	r22.s64 = r11.s64 + -28544;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,17592
	r30.s64 = r11.s64 + 17592;
	// bne 0x823a9e38
	if (!cr0.eq) goto loc_823A9E38;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r26,-32127
	r26.s64 = -2105475072;
	// addi r27,r11,-28604
	r27.s64 = r11.s64 + -28604;
	// lis r24,-32127
	r24.s64 = -2105475072;
	// lis r25,-32127
	r25.s64 = -2105475072;
loc_823A9B8C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9e38
	if (cr0.eq) goto loc_823A9E38;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x823a9e38
	if (cr6.eq) goto loc_823A9E38;
	// lbz r11,17616(r25)
	r11.u64 = PPC_LOAD_U8(r25.u32 + 17616);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a9bbc
	if (cr0.eq) goto loc_823A9BBC;
	// lbz r11,17617(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 17617);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823a9ee0
	if (cr0.eq) goto loc_823A9EE0;
loc_823A9BBC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9c38
	if (cr6.eq) goto loc_823A9C38;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9bdc
	if (cr0.eq) goto loc_823A9BDC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823a9c38
	if (!cr6.eq) goto loc_823A9C38;
loc_823A9BDC:
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9c38
	if (cr0.eq) goto loc_823A9C38;
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// mr r28,r23
	r28.u64 = r23.u64;
loc_823A9C38:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// bne cr6,0x823a9e04
	if (!cr6.eq) goto loc_823A9E04;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,36
	cr6.compare<int32_t>(ctx.r10.s32, 36, xer);
	// beq cr6,0x823a9de4
	if (cr6.eq) goto loc_823A9DE4;
	// cmpwi cr6,r10,37
	cr6.compare<int32_t>(ctx.r10.s32, 37, xer);
	// beq cr6,0x823a9d90
	if (cr6.eq) goto loc_823A9D90;
	// cmpwi cr6,r10,63
	cr6.compare<int32_t>(ctx.r10.s32, 63, xer);
	// beq cr6,0x823a9ce0
	if (cr6.eq) goto loc_823A9CE0;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// beq cr6,0x823a9d90
	if (cr6.eq) goto loc_823A9D90;
	// cmpwi cr6,r10,73
	cr6.compare<int32_t>(ctx.r10.s32, 73, xer);
	// beq cr6,0x823a9c98
	if (cr6.eq) goto loc_823A9C98;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823a6d80
	sub_823A6D80(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// b 0x823a9e18
	goto loc_823A9E18;
loc_823A9C98:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x823a8208
	sub_823A8208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// li r5,93
	ctx.r5.s64 = 93;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// li r28,1
	r28.s64 = 1;
	// b 0x823a9e2c
	goto loc_823A9E2C;
loc_823A9CE0:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,95
	cr6.compare<uint32_t>(ctx.r9.u32, 95, xer);
	// bne cr6,0x823a9d4c
	if (!cr6.eq) goto loc_823A9D4C;
	// lbz r11,2(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// cmplwi cr6,r11,63
	cr6.compare<uint32_t>(r11.u32, 63, xer);
	// bne cr6,0x823a9d4c
	if (!cr6.eq) goto loc_823A9D4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x823a7898
	sub_823A7898(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bne cr6,0x823a9e2c
	if (!cr6.eq) goto loc_823A9E2C;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x823a9e2c
	goto loc_823A9E2C;
loc_823A9D4C:
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x823a9828
	sub_823A9828(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// b 0x823a9e18
	goto loc_823A9E18;
loc_823A9D90:
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5860
	sub_823A5860(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r3,17584(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 17584);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x823a9e2c
	if (cr6.eq) goto loc_823A9E2C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x823a50e8
	sub_823A50E8(ctx, base);
	// b 0x823a9e2c
	goto loc_823A9E2C;
loc_823A9DE4:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x823a8208
	sub_823A8208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// b 0x823a9e18
	goto loc_823A9E18;
loc_823A9E04:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823a8208
	sub_823A8208(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_823A9E18:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A9E2C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9b8c
	if (cr0.eq) goto loc_823A9B8C;
loc_823A9E38:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9e78
	if (cr0.eq) goto loc_823A9E78;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// beq cr6,0x823a9ee0
	if (cr6.eq) goto loc_823A9EE0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,12288
	ctx.r10.s64 = 805306368;
	// stw r23,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r23.u32);
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// beq cr6,0x823a9ee0
	if (cr6.eq) goto loc_823A9EE0;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x823a9ee0
	goto loc_823A9EE0;
loc_823A9E78:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823a9e98
	if (cr6.eq) goto loc_823A9E98;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823a9ea8
	if (cr0.eq) goto loc_823A9EA8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823a9ea8
	if (cr6.eq) goto loc_823A9EA8;
loc_823A9E98:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4fa0
	sub_823A4FA0(ctx, base);
	// b 0x823a9ee0
	goto loc_823A9EE0;
loc_823A9EA8:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823A9EE0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823A9EEC"))) PPC_WEAK_FUNC(sub_823A9EEC);
PPC_FUNC_IMPL(__imp__sub_823A9EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823A9EF0"))) PPC_WEAK_FUNC(sub_823A9EF0);
PPC_FUNC_IMPL(__imp__sub_823A9EF0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32127
	r30.s64 = -2105475072;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r10,17592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823a9f38
	if (!cr0.eq) goto loc_823A9F38;
loc_823A9F18:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
loc_823A9F28:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// b 0x823aa3a4
	goto loc_823AA3A4;
loc_823A9F38:
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(r11.s32, 54, xer);
	// blt cr6,0x823a9f48
	if (cr6.lt) goto loc_823A9F48;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x823a9f58
	if (!cr6.gt) goto loc_823A9F58;
loc_823A9F48:
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// beq cr6,0x823a9f58
	if (cr6.eq) goto loc_823A9F58;
loc_823A9F50:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823aa39c
	goto loc_823AA39C;
loc_823A9F58:
	// addi r31,r11,-54
	r31.s64 = r11.s64 + -54;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r31,41
	cr6.compare<int32_t>(r31.s32, 41, xer);
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// bne cr6,0x823a9f94
	if (!cr6.eq) goto loc_823A9F94;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823a9f18
	if (cr0.eq) goto loc_823A9F18;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r31,r10,-61
	r31.s64 = ctx.r10.s64 + -61;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// blt cr6,0x823a9fa4
	if (cr6.lt) goto loc_823A9FA4;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(r31.s32, 7, xer);
	// b 0x823a9fa0
	goto loc_823A9FA0;
loc_823A9F94:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x823a9fa4
	if (cr6.lt) goto loc_823A9FA4;
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
loc_823A9FA0:
	// ble cr6,0x823a9fa8
	if (!cr6.gt) goto loc_823A9FA8;
loc_823A9FA4:
	// li r31,-1
	r31.s64 = -1;
loc_823A9FA8:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x823a9f50
	if (cr6.eq) goto loc_823A9F50;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r26,0
	r26.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi r28,r11,12
	r28.u64 = r11.u32 & 0xFFFFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r26.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// lis r24,12288
	r24.s64 = 805306368;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// rlwinm. r25,r31,0,30,30
	r25.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x823aa0d0
	if (cr0.eq) goto loc_823AA0D0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,-28544
	ctx.r4.s64 = r11.s64 + -28544;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,17592(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa060
	if (cr6.eq) goto loc_823AA060;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a9b38
	sub_823A9B38(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823aa084
	goto loc_823AA084;
loc_823AA060:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r29,r1,80
	r29.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_823AA084:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r10,17592(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa19c
	if (cr0.eq) goto loc_823AA19C;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// bne cr6,0x823a9f50
	if (!cr6.eq) goto loc_823A9F50;
	// lwz r11,17608(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17608);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r9,r11,0,25,26
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x60;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,96
	cr6.compare<uint32_t>(ctx.r9.u32, 96, xer);
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// beq cr6,0x823aa16c
	if (cr6.eq) goto loc_823AA16C;
	// bl 0x823a4b60
	sub_823A4B60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823AA0D0:
	// rlwinm. r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa12c
	if (cr0.eq) goto loc_823AA12C;
	// lwz r11,17608(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17608);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa1b4
	if (cr0.eq) goto loc_823AA1B4;
	// bl 0x823a8838
	sub_823A8838(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823AA12C:
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823AA130:
	// lwz r11,17608(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17608);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa1e8
	if (cr0.eq) goto loc_823AA1E8;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5d28
	sub_823A5D28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823aa214
	goto loc_823AA214;
loc_823AA16C:
	// bl 0x823a4b60
	sub_823A4B60(ctx, base);
	// rlwinm r11,r28,0,0,3
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// beq cr6,0x823aa0d0
	if (cr6.eq) goto loc_823AA0D0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa0d0
	if (cr0.eq) goto loc_823AA0D0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823aa0d0
	if (cr6.eq) goto loc_823AA0D0;
	// rlwimi r28,r11,28,0,3
	r28.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (r28.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r28.u32);
	// b 0x823aa0d0
	goto loc_823AA0D0;
loc_823AA19C:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x823a9f28
	goto loc_823A9F28;
loc_823AA1B4:
	// bl 0x823a8838
	sub_823A8838(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r31,0,0,3
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// beq cr6,0x823aa130
	if (cr6.eq) goto loc_823AA130;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa130
	if (cr0.eq) goto loc_823AA130;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823aa130
	if (cr6.eq) goto loc_823AA130;
	// rlwimi r31,r11,28,0,3
	r31.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (r31.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// b 0x823aa130
	goto loc_823AA130;
loc_823AA1E8:
	// bl 0x823a5d28
	sub_823A5D28(ctx, base);
	// rlwinm r11,r31,0,0,3
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// beq cr6,0x823aa214
	if (cr6.eq) goto loc_823AA214;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa214
	if (cr0.eq) goto loc_823AA214;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823aa214
	if (cr6.eq) goto loc_823AA214;
	// rlwimi r31,r11,28,0,3
	r31.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (r31.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
loc_823AA214:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa270
	if (cr6.eq) goto loc_823AA270;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa234
	if (cr0.eq) goto loc_823AA234;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aa270
	if (!cr6.eq) goto loc_823AA270;
loc_823AA234:
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823AA270:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823aa2a4
	if (cr0.eq) goto loc_823AA2A4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x823aa2a8
	goto loc_823AA2A8;
loc_823AA2A4:
	// mr r30,r26
	r30.u64 = r26.u64;
loc_823AA2A8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a5520
	sub_823A5520(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823a6790
	sub_823A6790(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,41
	ctx.r5.s64 = 41;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// lwz r11,17608(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17608);
	// rlwinm r10,r11,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x60;
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, xer);
	// beq cr6,0x823aa320
	if (cr6.eq) goto loc_823AA320;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x823aa320
	if (cr6.eq) goto loc_823AA320;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// lwz r11,17608(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17608);
loc_823AA320:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm. r11,r11,24,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa344
	if (cr0.eq) goto loc_823AA344;
	// bl 0x823a68d8
	sub_823A68D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// b 0x823aa374
	goto loc_823AA374;
loc_823AA344:
	// bl 0x823a68d8
	sub_823A68D8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r10,0,0,3
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r24
	cr6.compare<int32_t>(r11.s32, r24.s32, xer);
	// beq cr6,0x823aa374
	if (cr6.eq) goto loc_823AA374;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa374
	if (cr0.eq) goto loc_823AA374;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823aa374
	if (cr6.eq) goto loc_823AA374;
	// rlwimi r10,r11,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_823AA374:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823aa398
	if (cr6.eq) goto loc_823AA398;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823aa3a4
	goto loc_823AA3A4;
loc_823AA398:
	// li r4,3
	ctx.r4.s64 = 3;
loc_823AA39C:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823AA3A4:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823AA3B0"))) PPC_WEAK_FUNC(sub_823AA3B0);
PPC_FUNC_IMPL(__imp__sub_823AA3B0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r27,-32127
	r27.s64 = -2105475072;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r31,0
	r31.s64 = 0;
	// stb r5,327(r1)
	PPC_STORE_U8(ctx.r1.u32 + 327, ctx.r5.u8);
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,17592(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17592);
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r31.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stb r31,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r31.u8);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aab08
	if (cr0.eq) goto loc_823AAB08;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// bne cr6,0x823aa448
	if (!cr6.eq) goto loc_823AA448;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,327
	ctx.r4.s64 = ctx.r1.s64 + 327;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823a69b8
	sub_823A69B8(ctx, base);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa448
	if (cr6.eq) goto loc_823AA448;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa438
	if (cr0.eq) goto loc_823AA438;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aa448
	if (!cr6.eq) goto loc_823AA448;
loc_823AA438:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_823AA43C:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823aabe8
	goto loc_823AABE8;
loc_823AA448:
	// lwz r11,17592(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r11
	ctx.r10.s64 = r11.s8;
	// li r11,65
	r11.s64 = 65;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// bge cr6,0x823aa464
	if (!cr6.lt) goto loc_823AA464;
	// li r11,22
	r11.s64 = 22;
loc_823AA464:
	// subf r29,r11,r10
	r29.s64 = ctx.r10.s64 - r11.s64;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r22,r31
	r22.u64 = r31.u64;
	// clrlwi r21,r11,12
	r21.u64 = r11.u32 & 0xFFFFF;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r19,r31
	r19.u64 = r31.u64;
	// clrlwi r20,r11,12
	r20.u64 = r11.u32 & 0xFFFFF;
	// lis r28,-32127
	r28.s64 = -2105475072;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r22.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
	// addi r30,r11,-29368
	r30.s64 = r11.s64 + -29368;
	// stw r19,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r19.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// lwz r11,17608(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17608);
loc_823AA4A0:
	// cmplwi cr6,r29,4
	cr6.compare<uint32_t>(r29.u32, 4, xer);
	// beq cr6,0x823aa5d4
	if (cr6.eq) goto loc_823AA5D4;
	// cmplwi cr6,r29,5
	cr6.compare<uint32_t>(r29.u32, 5, xer);
	// beq cr6,0x823aa544
	if (cr6.eq) goto loc_823AA544;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// bne cr6,0x823aa6ec
	if (!cr6.eq) goto loc_823AA6EC;
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823aa664
	if (cr0.eq) goto loc_823AA664;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823aa528
	if (cr6.eq) goto loc_823AA528;
	// srawi. r10,r21,28
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = r21.s32 >> 28;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823aa4dc
	if (cr0.eq) goto loc_823AA4DC;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x823aa528
	if (!cr6.eq) goto loc_823AA528;
loc_823AA4DC:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa4f0
	if (cr0.eq) goto loc_823AA4F0;
	// lwz r31,32(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// b 0x823aa4f8
	goto loc_823AA4F8;
loc_823AA4F0:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r31,r11,2
	r31.s64 = r11.s64 + 2;
loc_823AA4F8:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_823AA510:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_823AA520:
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823aa660
	goto loc_823AA660;
loc_823AA528:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa53c
	if (cr0.eq) goto loc_823AA53C;
	// lwz r4,32(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// b 0x823aa658
	goto loc_823AA658;
loc_823AA53C:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// b 0x823aa654
	goto loc_823AA654;
loc_823AA544:
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823aa664
	if (cr0.eq) goto loc_823AA664;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x823aa5b0
	if (cr6.eq) goto loc_823AA5B0;
	// srawi. r10,r20,28
	xer.ca = (r20.s32 < 0) & ((r20.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = r20.s32 >> 28;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823aa568
	if (cr0.eq) goto loc_823AA568;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x823aa5b0
	if (!cr6.eq) goto loc_823AA5B0;
loc_823AA568:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa57c
	if (cr0.eq) goto loc_823AA57C;
	// lwz r31,36(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// b 0x823aa584
	goto loc_823AA584;
loc_823AA57C:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r31,r11,2
	r31.s64 = r11.s64 + 2;
loc_823AA584:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a6440
	sub_823A6440(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x823aa520
	goto loc_823AA520;
loc_823AA5B0:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa5c4
	if (cr0.eq) goto loc_823AA5C4;
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// b 0x823aa5cc
	goto loc_823AA5CC;
loc_823AA5C4:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
loc_823AA5CC:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x823aa65c
	goto loc_823AA65C;
loc_823AA5D4:
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823aa664
	if (cr0.eq) goto loc_823AA664;
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// rlwinm. r10,r10,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823aa664
	if (cr0.eq) goto loc_823AA664;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823aa63c
	if (cr6.eq) goto loc_823AA63C;
	// srawi. r10,r21,28
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0xFFFFFFF) != 0);
	ctx.r10.s64 = r21.s32 >> 28;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823aa604
	if (cr0.eq) goto loc_823AA604;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x823aa63c
	if (!cr6.eq) goto loc_823AA63C;
loc_823AA604:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa618
	if (cr0.eq) goto loc_823AA618;
	// lwz r31,28(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// b 0x823aa620
	goto loc_823AA620;
loc_823AA618:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r31,r11,2
	r31.s64 = r11.s64 + 2;
loc_823AA620:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// b 0x823aa510
	goto loc_823AA510;
loc_823AA63C:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa650
	if (cr0.eq) goto loc_823AA650;
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// b 0x823aa658
	goto loc_823AA658;
loc_823AA650:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
loc_823AA654:
	// addi r4,r11,2
	ctx.r4.s64 = r11.s64 + 2;
loc_823AA658:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
loc_823AA65C:
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
loc_823AA660:
	// lwz r11,17608(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17608);
loc_823AA664:
	// lwz r10,17592(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 17592);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,17592(r27)
	PPC_STORE_U32(r27.u32 + 17592, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,36
	cr6.compare<uint32_t>(ctx.r10.u32, 36, xer);
	// bne cr6,0x823aa6b8
	if (!cr6.eq) goto loc_823AA6B8;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,327
	ctx.r4.s64 = ctx.r1.s64 + 327;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a69b8
	sub_823A69B8(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa6b4
	if (cr6.eq) goto loc_823AA6B4;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aab00
	if (cr0.eq) goto loc_823AAB00;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823aab00
	if (cr6.eq) goto loc_823AAB00;
loc_823AA6B4:
	// lwz r11,17608(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17608);
loc_823AA6B8:
	// lwz r10,17592(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 17592);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// li r10,65
	ctx.r10.s64 = 65;
	// cmpwi cr6,r9,65
	cr6.compare<int32_t>(ctx.r9.s32, 65, xer);
	// bge cr6,0x823aa6d4
	if (!cr6.lt) goto loc_823AA6D4;
	// li r10,22
	ctx.r10.s64 = 22;
loc_823AA6D4:
	// lwz r21,100(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r29,r10,r9
	r29.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r19,104(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r22,96(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r20,108(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x823aa4a0
	goto loc_823AA4A0;
loc_823AA6EC:
	// lwz r11,17592(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17592);
	// cmplwi cr6,r29,31
	cr6.compare<uint32_t>(r29.u32, 31, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r27)
	PPC_STORE_U32(r27.u32 + 17592, r11.u32);
	// bgt cr6,0x823aa7d0
	if (cr6.gt) goto loc_823AA7D0;
	// lbz r31,327(r1)
	r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 327);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823aa774
	if (cr6.eq) goto loc_823AA774;
	// srawi. r11,r21,28
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r21.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa744
	if (cr0.eq) goto loc_823AA744;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aa774
	if (!cr6.eq) goto loc_823AA774;
loc_823AA744:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823AA774:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x823aa7bc
	if (cr6.eq) goto loc_823AA7BC;
	// srawi. r11,r20,28
	xer.ca = (r20.s32 < 0) & ((r20.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r20.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa78c
	if (cr0.eq) goto loc_823AA78C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aa7bc
	if (!cr6.eq) goto loc_823AA7BC;
loc_823AA78C:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r30,r1,88
	r30.s64 = ctx.r1.s64 + 88;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823AA7BC:
	// rlwinm. r11,r29,0,27,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r30,12288
	r30.s64 = 805306368;
	// beq 0x823aa8e4
	if (cr0.eq) goto loc_823AA8E4;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x823aa7d8
	if (cr6.eq) goto loc_823AA7D8;
loc_823AA7D0:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823aabe0
	goto loc_823AABE0;
loc_823AA7D8:
	// extsb. r11,r31
	r11.s64 = r31.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa86c
	if (cr0.eq) goto loc_823AA86C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28544
	ctx.r4.s64 = r11.s64 + -28544;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,17592(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17592);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa844
	if (cr6.eq) goto loc_823AA844;
	// bl 0x823a9b38
	sub_823A9B38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823aa860
	goto loc_823AA860;
loc_823AA844:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_823AA860:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823aa8b0
	goto loc_823AA8B0;
loc_823AA86C:
	// lwz r11,17592(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aa8b0
	if (cr6.eq) goto loc_823AA8B0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a9b38
	sub_823A9B38(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r10,0,0,3
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x823aa8b0
	if (cr6.eq) goto loc_823AA8B0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa8b0
	if (cr0.eq) goto loc_823AA8B0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823aa8b0
	if (cr6.eq) goto loc_823AA8B0;
	// rlwimi r10,r11,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_823AA8B0:
	// lwz r11,17592(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823aa8d0
	if (!cr0.eq) goto loc_823AA8D0;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5578
	sub_823A5578(ctx, base);
	// b 0x823aa8e4
	goto loc_823AA8E4;
loc_823AA8D0:
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// lwz r11,17592(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 17592);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r27)
	PPC_STORE_U32(r27.u32 + 17592, r11.u32);
	// bne cr6,0x823aa7d0
	if (!cr6.eq) goto loc_823AA7D0;
loc_823AA8E4:
	// lwz r11,17608(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 17608);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r11,r29,0,28,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xC;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bne cr6,0x823aa968
	if (!cr6.eq) goto loc_823AA968;
	// beq 0x823aa934
	if (cr0.eq) goto loc_823AA934;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x823aa7d0
	if (!cr6.eq) goto loc_823AA7D0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a8838
	sub_823A8838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823aa968
	goto loc_823AA968;
loc_823AA934:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a8838
	sub_823A8838(ctx, base);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r10,0,0,3
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x823aa968
	if (cr6.eq) goto loc_823AA968;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa968
	if (cr0.eq) goto loc_823AA968;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823aa968
	if (cr6.eq) goto loc_823AA968;
	// rlwimi r10,r11,28,0,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0xF0000000) | (ctx.r10.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_823AA968:
	// rlwinm. r11,r29,0,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa9a0
	if (cr0.eq) goto loc_823AA9A0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28192
	ctx.r4.s64 = r11.s64 + -28192;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823AA9A0:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aa9d8
	if (cr0.eq) goto loc_823AA9D8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,-28200
	ctx.r4.s64 = r11.s64 + -28200;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823AA9D8:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x823aaae0
	if (!cr6.eq) goto loc_823AAAE0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaa98
	if (cr6.eq) goto loc_823AAA98;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// srawi. r11,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aaa00
	if (cr0.eq) goto loc_823AAA00;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aaa98
	if (!cr6.eq) goto loc_823AAA98;
loc_823AAA00:
	// rlwinm. r11,r10,0,4,4
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823aaa6c
	if (!cr0.eq) goto loc_823AAA6C;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaa6c
	if (cr6.eq) goto loc_823AAA6C;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aaa28
	if (cr0.eq) goto loc_823AAA28;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aaa6c
	if (!cr6.eq) goto loc_823AAA6C;
loc_823AAA28:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823aaad8
	goto loc_823AAAD8;
loc_823AAA6C:
	// rlwinm. r11,r10,0,7,7
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aaa84
	if (cr0.eq) goto loc_823AAA84;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823aaae0
	goto loc_823AAAE0;
loc_823AAA84:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// b 0x823aaac8
	goto loc_823AAAC8;
loc_823AAA98:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaae0
	if (cr6.eq) goto loc_823AAAE0;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aaab8
	if (cr0.eq) goto loc_823AAAB8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aaae0
	if (!cr6.eq) goto loc_823AAAE0;
loc_823AAAB8:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
loc_823AAAC8:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
loc_823AAAD8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823AAAE0:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq 0x823aab00
	if (cr0.eq) goto loc_823AAB00;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_823AAB00:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// b 0x823aa43c
	goto loc_823AA43C;
loc_823AAB08:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x823aabdc
	if (!cr6.eq) goto loc_823AABDC;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaba8
	if (cr6.eq) goto loc_823AABA8;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// srawi. r11,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aab30
	if (cr0.eq) goto loc_823AAB30;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aaba8
	if (!cr6.eq) goto loc_823AABA8;
loc_823AAB30:
	// rlwinm. r11,r10,0,4,4
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823aab98
	if (!cr0.eq) goto loc_823AAB98;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aab98
	if (cr6.eq) goto loc_823AAB98;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aab58
	if (cr0.eq) goto loc_823AAB58;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aab98
	if (!cr6.eq) goto loc_823AAB98;
loc_823AAB58:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
loc_823AAB84:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_823AAB88:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// b 0x823aabe8
	goto loc_823AABE8;
loc_823AAB98:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// b 0x823aab84
	goto loc_823AAB84;
loc_823AABA8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aabdc
	if (cr6.eq) goto loc_823AABDC;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aabc8
	if (cr0.eq) goto loc_823AABC8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aabdc
	if (!cr6.eq) goto loc_823AABDC;
loc_823AABC8:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x823aab88
	goto loc_823AAB88;
loc_823AABDC:
	// li r4,2
	ctx.r4.s64 = 2;
loc_823AABE0:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823AABE8:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823AABF4"))) PPC_WEAK_FUNC(sub_823AABF4);
PPC_FUNC_IMPL(__imp__sub_823AABF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AABF8"))) PPC_WEAK_FUNC(sub_823AABF8);
PPC_FUNC_IMPL(__imp__sub_823AABF8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r31,-32127
	r31.s64 = -2105475072;
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r4,17596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 17596);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x823aad00
	if (cr6.eq) goto loc_823AAD00;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// bne cr6,0x823aace8
	if (!cr6.eq) goto loc_823AACE8;
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r10,64
	cr6.compare<uint32_t>(ctx.r10.u32, 64, xer);
	// bne cr6,0x823aac98
	if (!cr6.eq) goto loc_823AAC98;
	// lwz r11,17592(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17592);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,17592(r29)
	PPC_STORE_U32(r29.u32 + 17592, r11.u32);
	// bl 0x823a9828
	sub_823A9828(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,-28180
	ctx.r4.s64 = r11.s64 + -28180;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// b 0x823aacf4
	goto loc_823AACF4;
loc_823AAC98:
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// bne cr6,0x823aace8
	if (!cr6.eq) goto loc_823AACE8;
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(r11.u32, 36, xer);
	// bne cr6,0x823aace8
	if (!cr6.eq) goto loc_823AACE8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a8050
	sub_823A8050(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// rlwinm r11,r10,0,0,3
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000000;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x823aacfc
	if (!cr6.eq) goto loc_823AACFC;
	// lwz r11,17596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17596);
	// stw r11,17592(r29)
	PPC_STORE_U32(r29.u32 + 17592, r11.u32);
	// clrlwi r11,r10,4
	r11.u64 = ctx.r10.u32 & 0xFFFFFFF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_823AACE8:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823a9828
	sub_823A9828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_823AACF4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823AACFC:
	// lwz r4,17596(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 17596);
loc_823AAD00:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x823aad18
	if (!cr6.eq) goto loc_823AAD18;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823aae0c
	goto loc_823AAE0C;
loc_823AAD18:
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x823aad50
	if (cr6.eq) goto loc_823AAD50;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17608);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823aad40
	if (!cr0.eq) goto loc_823AAD40;
	// lwz r11,17592(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823aad50
	if (!cr6.eq) goto loc_823AAD50;
loc_823AAD40:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823aad58
	goto loc_823AAD58;
loc_823AAD50:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
loc_823AAD58:
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,17600(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 17600);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823aada0
	if (!cr6.eq) goto loc_823AADA0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4d78
	sub_823A4D78(ctx, base);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// stw r11,17604(r31)
	PPC_STORE_U32(r31.u32 + 17604, r11.u32);
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// rlwinm r3,r11,0,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// lwz r11,17560(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17560);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,17600(r30)
	PPC_STORE_U32(r30.u32 + 17600, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823aae0c
	if (cr0.eq) goto loc_823AAE0C;
loc_823AADA0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r5,17604(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 17604);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4e90
	sub_823A4E90(ctx, base);
	// lwz r11,17600(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 17600);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// b 0x823aadf4
	goto loc_823AADF4;
loc_823AADBC:
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne cr6,0x823aadec
	if (!cr6.eq) goto loc_823AADEC;
	// li r10,32
	ctx.r10.s64 = 32;
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x823aaddc
	goto loc_823AADDC;
loc_823AADD8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823AADDC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// beq cr6,0x823aadd8
	if (cr6.eq) goto loc_823AADD8;
	// b 0x823aadf4
	goto loc_823AADF4;
loc_823AADEC:
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_823AADF4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823aadbc
	if (!cr0.eq) goto loc_823AADBC;
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// stb r11,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, r11.u8);
	// lwz r3,17600(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 17600);
loc_823AAE0C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823AAE14"))) PPC_WEAK_FUNC(sub_823AAE14);
PPC_FUNC_IMPL(__imp__sub_823AAE14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AAE18"))) PPC_WEAK_FUNC(sub_823AAE18);
PPC_FUNC_IMPL(__imp__sub_823AAE18) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,17592(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17592);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aaf34
	if (cr0.eq) goto loc_823AAF34;
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(r11.s32, 54, xer);
	// blt cr6,0x823aae58
	if (cr6.lt) goto loc_823AAE58;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x823aae60
	if (!cr6.gt) goto loc_823AAE60;
loc_823AAE58:
	// cmpwi cr6,r11,95
	cr6.compare<int32_t>(r11.s32, 95, xer);
	// bne cr6,0x823aaefc
	if (!cr6.eq) goto loc_823AAEFC;
loc_823AAE60:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaec0
	if (cr6.eq) goto loc_823AAEC0;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aae8c
	if (cr0.eq) goto loc_823AAE8C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aaec0
	if (!cr6.eq) goto loc_823AAEC0;
loc_823AAE8C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaeb4
	if (cr6.eq) goto loc_823AAEB4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// srawi. r11,r10,28
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFFFFF) != 0);
	r11.s64 = ctx.r10.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aaeac
	if (cr0.eq) goto loc_823AAEAC;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aaeb4
	if (!cr6.eq) goto loc_823AAEB4;
loc_823AAEAC:
	// rlwinm. r11,r10,0,4,4
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823aaec0
	if (!cr0.eq) goto loc_823AAEC0;
loc_823AAEB4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823AAEC0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaeec
	if (cr6.eq) goto loc_823AAEEC;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aaee0
	if (cr0.eq) goto loc_823AAEE0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aaeec
	if (!cr6.eq) goto loc_823AAEEC;
loc_823AAEE0:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823AAEEC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a9ef0
	sub_823A9EF0(ctx, base);
	// b 0x823aafdc
	goto loc_823AAFDC;
loc_823AAEFC:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823aa3b0
	sub_823AA3B0(ctx, base);
	// extsb r11,r31
	r11.s64 = r31.s8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-42
	r11.s64 = r11.s64 + -42;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bl 0x823a74d8
	sub_823A74D8(ctx, base);
	// b 0x823aafdc
	goto loc_823AAFDC;
loc_823AAF34:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aaf78
	if (cr6.eq) goto loc_823AAF78;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aaf6c
	if (cr0.eq) goto loc_823AAF6C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aaf78
	if (!cr6.eq) goto loc_823AAF78;
loc_823AAF6C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823AAF78:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aafd0
	if (cr6.eq) goto loc_823AAFD0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aaf98
	if (cr0.eq) goto loc_823AAF98;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aafd0
	if (!cr6.eq) goto loc_823AAFD0;
loc_823AAF98:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823aafc4
	if (cr6.eq) goto loc_823AAFC4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aafb8
	if (cr0.eq) goto loc_823AAFB8;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823aafc4
	if (!cr6.eq) goto loc_823AAFC4;
loc_823AAFB8:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
loc_823AAFC4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
loc_823AAFD0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
loc_823AAFDC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823AAFE8"))) PPC_WEAK_FUNC(sub_823AAFE8);
PPC_FUNC_IMPL(__imp__sub_823AAFE8) {
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
	// lwz r16,-14480(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14480);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823ab028
	if (!cr6.eq) goto loc_823AB028;
loc_823AB020:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ab0a4
	goto loc_823AB0A4;
loc_823AB028:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823a4120
	sub_823A4120(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ab020
	if (cr0.eq) goto loc_823AB020;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,17560
	r30.s64 = r11.s64 + 17560;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r25.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// clrlwi r8,r24,16
	ctx.r8.u64 = r24.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x823a5470
	sub_823A5470(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823aabf8
	sub_823AABF8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a42c0
	sub_823A42C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,288
	r12.s64 = r31.s64 + 288;
	// bl 0x823ab0ac
	sub_823AB0AC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823AB0A4:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823AAFF0"))) PPC_WEAK_FUNC(sub_823AAFF0);
PPC_FUNC_IMPL(__imp__sub_823AAFF0) {
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
	// addi r31,r1,-288
	r31.s64 = ctx.r1.s64 + -288;
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823ab028
	if (!cr6.eq) goto loc_823AB028;
loc_823AB020:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823ab0a4
	goto loc_823AB0A4;
loc_823AB028:
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823a4120
	sub_823A4120(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ab020
	if (cr0.eq) goto loc_823AB020;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r30,r11,17560
	r30.s64 = r11.s64 + 17560;
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
	// stw r25,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r25.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// clrlwi r8,r24,16
	ctx.r8.u64 = r24.u32 & 0xFFFF;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x823a5470
	sub_823A5470(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823aabf8
	sub_823AABF8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a42c0
	sub_823A42C0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,288
	r12.s64 = r31.s64 + 288;
	// bl 0x823ab0ac
	sub_823AB0AC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823AB0A4:
	// addi r1,r31,288
	ctx.r1.s64 = r31.s64 + 288;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823AB0AC"))) PPC_WEAK_FUNC(sub_823AB0AC);
PPC_FUNC_IMPL(__imp__sub_823AB0AC) {
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
	// li r3,5
	ctx.r3.s64 = 5;
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

__attribute__((alias("__imp__sub_823AB0D0"))) PPC_WEAK_FUNC(sub_823AB0D0);
PPC_FUNC_IMPL(__imp__sub_823AB0D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x823ab4f8
	if (cr0.eq) goto loc_823AB4F8;
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r7,r7,12
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFF;
	// clrlwi r30,r9,24
	r30.u64 = ctx.r9.u32 & 0xFF;
	// addi r9,r30,-67
	ctx.r9.s64 = r30.s64 + -67;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// cmplwi cr6,r9,28
	cr6.compare<uint32_t>(ctx.r9.u32, 28, xer);
	// bgt cr6,0x823ab3ec
	if (cr6.gt) goto loc_823AB3EC;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-28912
	r12.s64 = r12.s64 + -28912;
	// lbzx r0,r12,r9
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r9.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32197
	r12.s64 = -2110062592;
	// addi r12,r12,-20148
	r12.s64 = r12.s64 + -20148;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_823AB14C;
	case 1:
		goto loc_823AB14C;
	case 2:
		goto loc_823AB14C;
	case 3:
		goto loc_823AB160;
	case 4:
		goto loc_823AB160;
	case 5:
		goto loc_823AB16C;
	case 6:
		goto loc_823AB16C;
	case 7:
		goto loc_823AB178;
	case 8:
		goto loc_823AB178;
	case 9:
		goto loc_823AB3EC;
	case 10:
		goto loc_823AB184;
	case 11:
		goto loc_823AB1A0;
	case 12:
		goto loc_823AB190;
	case 13:
		goto loc_823AB1B4;
	case 14:
		goto loc_823AB1B4;
	case 15:
		goto loc_823AB1B4;
	case 16:
		goto loc_823AB1B4;
	case 17:
		goto loc_823AB3EC;
	case 18:
		goto loc_823AB3EC;
	case 19:
		goto loc_823AB3EC;
	case 20:
		goto loc_823AB3EC;
	case 21:
		goto loc_823AB3EC;
	case 22:
		goto loc_823AB3EC;
	case 23:
		goto loc_823AB3EC;
	case 24:
		goto loc_823AB3EC;
	case 25:
		goto loc_823AB3EC;
	case 26:
		goto loc_823AB3EC;
	case 27:
		goto loc_823AB3EC;
	case 28:
		goto loc_823AB228;
	default:
		__builtin_unreachable();
	}
loc_823AB14C:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r4,r11,6584
	ctx.r4.s64 = r11.s64 + 6584;
loc_823AB154:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// b 0x823ab1c0
	goto loc_823AB1C0;
loc_823AB160:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28040
	ctx.r4.s64 = r11.s64 + -28040;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB16C:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,25892
	ctx.r4.s64 = r11.s64 + 25892;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB178:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28048
	ctx.r4.s64 = r11.s64 + -28048;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB184:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28056
	ctx.r4.s64 = r11.s64 + -28056;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB190:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-28764
	ctx.r4.s64 = r11.s64 + -28764;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
loc_823AB1A0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-28064
	ctx.r4.s64 = r11.s64 + -28064;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// b 0x823ab1c0
	goto loc_823AB1C0;
loc_823AB1B4:
	// clrlwi r31,r30,30
	r31.u64 = r30.u32 & 0x3;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x823ab378
	if (!cr6.eq) goto loc_823AB378;
loc_823AB1C0:
	// cmpwi cr6,r30,67
	cr6.compare<int32_t>(r30.s32, 67, xer);
	// beq cr6,0x823ab3f8
	if (cr6.eq) goto loc_823AB3F8;
	// cmpwi cr6,r30,69
	cr6.compare<int32_t>(r30.s32, 69, xer);
	// beq cr6,0x823ab21c
	if (cr6.eq) goto loc_823AB21C;
	// cmpwi cr6,r30,71
	cr6.compare<int32_t>(r30.s32, 71, xer);
	// beq cr6,0x823ab21c
	if (cr6.eq) goto loc_823AB21C;
	// cmpwi cr6,r30,73
	cr6.compare<int32_t>(r30.s32, 73, xer);
	// beq cr6,0x823ab21c
	if (cr6.eq) goto loc_823AB21C;
	// cmpwi cr6,r30,75
	cr6.compare<int32_t>(r30.s32, 75, xer);
	// beq cr6,0x823ab21c
	if (cr6.eq) goto loc_823AB21C;
	// cmpwi cr6,r30,95
	cr6.compare<int32_t>(r30.s32, 95, xer);
	// bne cr6,0x823ab428
	if (!cr6.eq) goto loc_823AB428;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(r11.s32, 69, xer);
	// beq cr6,0x823ab21c
	if (cr6.eq) goto loc_823AB21C;
	// cmpwi cr6,r11,71
	cr6.compare<int32_t>(r11.s32, 71, xer);
	// beq cr6,0x823ab21c
	if (cr6.eq) goto loc_823AB21C;
	// cmpwi cr6,r11,73
	cr6.compare<int32_t>(r11.s32, 73, xer);
	// beq cr6,0x823ab21c
	if (cr6.eq) goto loc_823AB21C;
	// cmpwi cr6,r11,75
	cr6.compare<int32_t>(r11.s32, 75, xer);
	// beq cr6,0x823ab21c
	if (cr6.eq) goto loc_823AB21C;
	// cmpwi cr6,r11,77
	cr6.compare<int32_t>(r11.s32, 77, xer);
	// bne cr6,0x823ab428
	if (!cr6.eq) goto loc_823AB428;
loc_823AB21C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28776
	ctx.r4.s64 = r11.s64 + -28776;
	// b 0x823ab400
	goto loc_823AB400;
loc_823AB228:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,77
	cr6.compare<int32_t>(r11.s32, 77, xer);
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stw r9,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, ctx.r9.u32);
	// bgt cr6,0x823ab2ec
	if (cr6.gt) goto loc_823AB2EC;
	// cmpwi cr6,r11,76
	cr6.compare<int32_t>(r11.s32, 76, xer);
	// bge cr6,0x823ab2e0
	if (!cr6.lt) goto loc_823AB2E0;
	// cmpwi cr6,r11,71
	cr6.compare<int32_t>(r11.s32, 71, xer);
	// bgt cr6,0x823ab2b0
	if (cr6.gt) goto loc_823AB2B0;
	// cmpwi cr6,r11,70
	cr6.compare<int32_t>(r11.s32, 70, xer);
	// bge cr6,0x823ab2a4
	if (!cr6.lt) goto loc_823AB2A4;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// beq cr6,0x823ab27c
	if (cr6.eq) goto loc_823AB27C;
	// addi r11,r11,-68
	r11.s64 = r11.s64 + -68;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x823ab35c
	if (cr6.gt) goto loc_823AB35C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28072
	ctx.r4.s64 = r11.s64 + -28072;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB27C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823ab0d0
	sub_823AB0D0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,-28080
	ctx.r4.s64 = r11.s64 + -28080;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// b 0x823ab508
	goto loc_823AB508;
loc_823AB2A4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28088
	ctx.r4.s64 = r11.s64 + -28088;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB2B0:
	// cmpwi cr6,r11,72
	cr6.compare<int32_t>(r11.s32, 72, xer);
	// blt cr6,0x823ab35c
	if (cr6.lt) goto loc_823AB35C;
	// cmpwi cr6,r11,73
	cr6.compare<int32_t>(r11.s32, 73, xer);
	// ble cr6,0x823ab2d4
	if (!cr6.gt) goto loc_823AB2D4;
	// cmpwi cr6,r11,75
	cr6.compare<int32_t>(r11.s32, 75, xer);
	// bgt cr6,0x823ab35c
	if (cr6.gt) goto loc_823AB35C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28096
	ctx.r4.s64 = r11.s64 + -28096;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB2D4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28104
	ctx.r4.s64 = r11.s64 + -28104;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB2E0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28116
	ctx.r4.s64 = r11.s64 + -28116;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB2EC:
	// cmpwi cr6,r11,78
	cr6.compare<int32_t>(r11.s32, 78, xer);
	// beq cr6,0x823ab3e0
	if (cr6.eq) goto loc_823AB3E0;
	// cmpwi cr6,r11,79
	cr6.compare<int32_t>(r11.s32, 79, xer);
	// beq cr6,0x823ab374
	if (cr6.eq) goto loc_823AB374;
	// cmpwi cr6,r11,87
	cr6.compare<int32_t>(r11.s32, 87, xer);
	// beq cr6,0x823ab368
	if (cr6.eq) goto loc_823AB368;
	// addi r11,r11,-88
	r11.s64 = r11.s64 + -88;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x823ab35c
	if (cr6.gt) goto loc_823AB35C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
loc_823AB318:
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// bl 0x823a8638
	sub_823A8638(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab34c
	if (cr6.eq) goto loc_823AB34C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab1c0
	if (cr0.eq) goto loc_823AB1C0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823ab1c0
	if (cr6.eq) goto loc_823AB1C0;
loc_823AB34C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
loc_823AB350:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// b 0x823ab514
	goto loc_823AB514;
loc_823AB35C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28124
	ctx.r4.s64 = r11.s64 + -28124;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB368:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28132
	ctx.r4.s64 = r11.s64 + -28132;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB374:
	// li r31,-2
	r31.s64 = -2;
loc_823AB378:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// cmpwi cr6,r31,-2
	cr6.compare<int32_t>(r31.s32, -2, xer);
	// bne cr6,0x823ab474
	if (!cr6.eq) goto loc_823AB474;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x823aae18
	sub_823AAE18(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm. r11,r11,0,7,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ab3d8
	if (!cr0.eq) goto loc_823AB3D8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// addi r4,r11,-29512
	ctx.r4.s64 = r11.s64 + -29512;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
loc_823AB3D8:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// b 0x823ab350
	goto loc_823AB350;
loc_823AB3E0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-24640
	ctx.r4.s64 = r11.s64 + -24640;
	// b 0x823ab154
	goto loc_823AB154;
loc_823AB3EC:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x823ab318
	goto loc_823AB318;
loc_823AB3F8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-28140
	ctx.r4.s64 = r11.s64 + -28140;
loc_823AB400:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// addi r31,r1,88
	r31.s64 = ctx.r1.s64 + 88;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
loc_823AB428:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab34c
	if (cr6.eq) goto loc_823AB34C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab448
	if (cr0.eq) goto loc_823AB448;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823ab34c
	if (!cr6.eq) goto loc_823AB34C;
loc_823AB448:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a57a0
	sub_823A57A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a5b80
	sub_823A5B80(ctx, base);
	// b 0x823ab34c
	goto loc_823AB34C;
loc_823AB474:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab494
	if (cr6.eq) goto loc_823AB494;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab4e0
	if (cr0.eq) goto loc_823AB4E0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823ab4e0
	if (cr6.eq) goto loc_823AB4E0;
loc_823AB494:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab4c8
	if (cr0.eq) goto loc_823AB4C8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-28148
	ctx.r4.s64 = r11.s64 + -28148;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// rlwinm. r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab4e0
	if (cr0.eq) goto loc_823AB4E0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-28160
	ctx.r4.s64 = r11.s64 + -28160;
	// bl 0x823a6100
	sub_823A6100(ctx, base);
	// b 0x823ab4e0
	goto loc_823AB4E0;
loc_823AB4C8:
	// rlwinm. r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab4e0
	if (cr0.eq) goto loc_823AB4E0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-28172
	ctx.r4.s64 = r11.s64 + -28172;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
loc_823AB4E0:
	// li r6,42
	ctx.r6.s64 = 42;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823aae18
	sub_823AAE18(ctx, base);
	// b 0x823ab514
	goto loc_823AB514;
loc_823AB4F8:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
loc_823AB508:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
loc_823AB514:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823AB520"))) PPC_WEAK_FUNC(sub_823AB520);
PPC_FUNC_IMPL(__imp__sub_823AB520) {
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
	// lis r30,-32127
	r30.s64 = -2105475072;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r9,0
	ctx.r9.s64 = 0;
	// clrlwi r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r29,17592(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 17592);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab6b8
	if (cr0.eq) goto loc_823AB6B8;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// beq cr6,0x823ab5f8
	if (cr6.eq) goto loc_823AB5F8;
	// cmpwi cr6,r11,65
	cr6.compare<int32_t>(r11.s32, 65, xer);
	// beq cr6,0x823ab5c0
	if (cr6.eq) goto loc_823AB5C0;
	// cmpwi cr6,r11,66
	cr6.compare<int32_t>(r11.s32, 66, xer);
	// beq cr6,0x823ab580
	if (cr6.eq) goto loc_823AB580;
loc_823AB574:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ab0d0
	sub_823AB0D0(ctx, base);
	// b 0x823ab6d4
	goto loc_823AB6D4;
loc_823AB580:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28172
	ctx.r4.s64 = r11.s64 + -28172;
	// bl 0x823a5cc8
	sub_823A5CC8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab5bc
	if (cr6.eq) goto loc_823AB5BC;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab5b0
	if (cr0.eq) goto loc_823AB5B0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x823ab5bc
	if (!cr6.eq) goto loc_823AB5BC;
loc_823AB5B0:
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a5ff8
	sub_823A5FF8(ctx, base);
loc_823AB5BC:
	// lwz r29,17592(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 17592);
loc_823AB5C0:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4988
	sub_823A4988(ctx, base);
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// li r6,38
	ctx.r6.s64 = 38;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823aae18
	sub_823AAE18(ctx, base);
	// b 0x823ab6d4
	goto loc_823AB6D4;
loc_823AB5F8:
	// lbz r11,1(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 1);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// beq cr6,0x823ab620
	if (cr6.eq) goto loc_823AB620;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823ab6b8
	if (cr6.eq) goto loc_823AB6B8;
loc_823AB610:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// b 0x823ab6d4
	goto loc_823AB6D4;
loc_823AB620:
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ab6b8
	if (cr0.eq) goto loc_823AB6B8;
	// cmpwi cr6,r10,65
	cr6.compare<int32_t>(ctx.r10.s32, 65, xer);
	// beq cr6,0x823ab6a0
	if (cr6.eq) goto loc_823AB6A0;
	// cmpwi cr6,r10,66
	cr6.compare<int32_t>(ctx.r10.s32, 66, xer);
	// beq cr6,0x823ab684
	if (cr6.eq) goto loc_823AB684;
	// cmpwi cr6,r10,67
	cr6.compare<int32_t>(ctx.r10.s32, 67, xer);
	// bne cr6,0x823ab610
	if (!cr6.eq) goto loc_823AB610;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823aa3b0
	sub_823AA3B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823ab574
	goto loc_823AB574;
loc_823AB684:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// bl 0x823a74d8
	sub_823A74D8(ctx, base);
	// b 0x823ab6d4
	goto loc_823AB6D4;
loc_823AB6A0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,17592(r30)
	PPC_STORE_U32(r30.u32 + 17592, r11.u32);
	// bl 0x823a9ef0
	sub_823A9EF0(ctx, base);
	// b 0x823ab6d4
	goto loc_823AB6D4;
loc_823AB6B8:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
loc_823AB6D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823AB6E0"))) PPC_WEAK_FUNC(sub_823AB6E0);
PPC_FUNC_IMPL(__imp__sub_823AB6E0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4bc8
	sub_823A4BC8(ctx, base);
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,17592(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17592);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823ab7cc
	if (cr0.eq) goto loc_823AB7CC;
	// cmpwi cr6,r9,63
	cr6.compare<int32_t>(ctx.r9.s32, 63, xer);
	// beq cr6,0x823ab788
	if (cr6.eq) goto loc_823AB788;
	// cmpwi cr6,r9,88
	cr6.compare<int32_t>(ctx.r9.s32, 88, xer);
	// beq cr6,0x823ab734
	if (cr6.eq) goto loc_823AB734;
loc_823AB724:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ab520
	sub_823AB520(ctx, base);
	// b 0x823ab7ec
	goto loc_823AB7EC;
loc_823AB734:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823ab75c
	if (cr6.eq) goto loc_823AB75C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// srawi. r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab770
	if (cr0.eq) goto loc_823AB770;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823ab770
	if (cr6.eq) goto loc_823AB770;
loc_823AB75C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-28732
	ctx.r4.s64 = r11.s64 + -28732;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// b 0x823ab7ec
	goto loc_823AB7EC;
loc_823AB770:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-28616
	ctx.r4.s64 = r11.s64 + -28616;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bl 0x823a57f8
	sub_823A57F8(ctx, base);
	// b 0x823ab7dc
	goto loc_823AB7DC;
loc_823AB788:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,17592(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17592, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x823aa3b0
	sub_823AA3B0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// b 0x823ab724
	goto loc_823AB724;
loc_823AB7CC:
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4ca8
	sub_823A4CA8(ctx, base);
loc_823AB7DC:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
loc_823AB7EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_823AB808"))) PPC_WEAK_FUNC(sub_823AB808);
PPC_FUNC_IMPL(__imp__sub_823AB808) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r11,17560
	ctx.r3.s64 = r11.s64 + 17560;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x823a4898
	sub_823A4898(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823ab854
	if (cr0.eq) goto loc_823AB854;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r11,12
	r11.u64 = r11.u32 & 0xFFFFF;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x823ab858
	goto loc_823AB858;
loc_823AB854:
	// li r31,0
	r31.s64 = 0;
loc_823AB858:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ab6e0
	sub_823AB6E0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a4af8
	sub_823A4AF8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823a63c8
	sub_823A63C8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823a5f48
	sub_823A5F48(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a4a38
	sub_823A4A38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823AB8A4"))) PPC_WEAK_FUNC(sub_823AB8A4);
PPC_FUNC_IMPL(__imp__sub_823AB8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AB8A8"))) PPC_WEAK_FUNC(sub_823AB8A8);
PPC_FUNC_IMPL(__imp__sub_823AB8A8) {
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
	// lis r10,-8083
	ctx.r10.s64 = -529727488;
	// ori r10,r10,29539
	ctx.r10.u64 = ctx.r10.u64 | 29539;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x823ab91c
	if (!cr6.eq) goto loc_823AB91C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x823ab91c
	if (!cr6.eq) goto loc_823AB91C;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// ori r10,r10,1312
	ctx.r10.u64 = ctx.r10.u64 | 1312;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823ab918
	if (cr6.eq) goto loc_823AB918;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1313
	ctx.r10.u64 = ctx.r10.u64 | 1313;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823ab918
	if (cr6.eq) goto loc_823AB918;
	// lis r10,6547
	ctx.r10.s64 = 429064192;
	// ori r10,r10,1314
	ctx.r10.u64 = ctx.r10.u64 | 1314;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823ab91c
	if (!cr6.eq) goto loc_823AB91C;
loc_823AB918:
	// bl 0x823a3e60
	sub_823A3E60(ctx, base);
loc_823AB91C:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r3,17620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 17620);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823ab94c
	if (cr6.eq) goto loc_823AB94C;
	// bl 0x823b1220
	sub_823B1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ab94c
	if (cr0.eq) goto loc_823AB94C;
	// lwz r11,17620(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17620);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823ab950
	goto loc_823AB950;
loc_823AB94C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AB950:
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

__attribute__((alias("__imp__sub_823AB968"))) PPC_WEAK_FUNC(sub_823AB968);
PPC_FUNC_IMPL(__imp__sub_823AB968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,17620(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 17620);
	// b 0x823b9c08
	sub_823B9C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AB974"))) PPC_WEAK_FUNC(sub_823AB974);
PPC_FUNC_IMPL(__imp__sub_823AB974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AB978"))) PPC_WEAK_FUNC(sub_823AB978);
PPC_FUNC_IMPL(__imp__sub_823AB978) {
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
	// stwu r1,-2816(r1)
	ea = -2816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32139
	r31.s64 = -2106261504;
	// lwz r11,-22784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -22784);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ab9a0
	if (cr0.eq) goto loc_823AB9A0;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823aba48
	sub_823ABA48(ctx, base);
loc_823AB9A0:
	// bl 0x823b1348
	sub_823B1348(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823ab9b4
	if (cr0.eq) goto loc_823AB9B4;
	// li r3,22
	ctx.r3.s64 = 22;
	// bl 0x823b1360
	sub_823B1360(ctx, base);
loc_823AB9B4:
	// lwz r11,-22784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -22784);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aba20
	if (cr0.eq) goto loc_823ABA20;
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
loc_823AB9E0:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x823ab9e0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823AB9E0;
	// lis r11,16384
	r11.s64 = 1073741824;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r11,r11,21
	r11.u64 = r11.u64 | 21;
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
loc_823ABA20:
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x8239f2b0
	sub_8239F2B0(ctx, base);
}

__attribute__((alias("__imp__sub_823ABA28"))) PPC_WEAK_FUNC(sub_823ABA28);
PPC_FUNC_IMPL(__imp__sub_823ABA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// and r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 & ctx.r4.u64;
	// lwz r11,-22784(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -22784);
	// andc r8,r11,r4
	ctx.r8.u64 = r11.u64 & ~ctx.r4.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r11,-22784(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22784, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABA48"))) PPC_WEAK_FUNC(sub_823ABA48);
PPC_FUNC_IMPL(__imp__sub_823ABA48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r9,r11,-22776
	ctx.r9.s64 = r11.s64 + -22776;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823ABA58:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// beq cr6,0x823aba74
	if (cr6.eq) goto loc_823ABA74;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// blt cr6,0x823aba58
	if (cr6.lt) goto loc_823ABA58;
loc_823ABA74:
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// b 0x823b54a0
	sub_823B54A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ABA8C"))) PPC_WEAK_FUNC(sub_823ABA8C);
PPC_FUNC_IMPL(__imp__sub_823ABA8C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABA90"))) PPC_WEAK_FUNC(sub_823ABA90);
PPC_FUNC_IMPL(__imp__sub_823ABA90) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x823aba48
	sub_823ABA48(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x823aba48
	sub_823ABA48(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABABC"))) PPC_WEAK_FUNC(sub_823ABABC);
PPC_FUNC_IMPL(__imp__sub_823ABABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABAC0"))) PPC_WEAK_FUNC(sub_823ABAC0);
PPC_FUNC_IMPL(__imp__sub_823ABAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,17624(r11)
	PPC_STORE_U32(r11.u32 + 17624, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABACC"))) PPC_WEAK_FUNC(sub_823ABACC);
PPC_FUNC_IMPL(__imp__sub_823ABACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABAD0"))) PPC_WEAK_FUNC(sub_823ABAD0);
PPC_FUNC_IMPL(__imp__sub_823ABAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,17628(r11)
	PPC_STORE_U32(r11.u32 + 17628, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABADC"))) PPC_WEAK_FUNC(sub_823ABADC);
PPC_FUNC_IMPL(__imp__sub_823ABADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABAE0"))) PPC_WEAK_FUNC(sub_823ABAE0);
PPC_FUNC_IMPL(__imp__sub_823ABAE0) {
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
	// lwz r11,17628(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17628);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823abb10
	if (cr0.eq) goto loc_823ABB10;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x823abb14
	if (!cr0.eq) goto loc_823ABB14;
loc_823ABB10:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823ABB14:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABB24"))) PPC_WEAK_FUNC(sub_823ABB24);
PPC_FUNC_IMPL(__imp__sub_823ABB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABB28"))) PPC_WEAK_FUNC(sub_823ABB28);
PPC_FUNC_IMPL(__imp__sub_823ABB28) {
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
	// bne cr6,0x823abb74
	if (!cr6.eq) goto loc_823ABB74;
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
	// b 0x823abb84
	goto loc_823ABB84;
loc_823ABB74:
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823b77f8
	sub_823B77F8(ctx, base);
loc_823ABB84:
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

__attribute__((alias("__imp__sub_823ABB98"))) PPC_WEAK_FUNC(sub_823ABB98);
PPC_FUNC_IMPL(__imp__sub_823ABB98) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r30,-4096
	r30.s64 = -4096;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823abbf4
	if (cr6.eq) goto loc_823ABBF4;
	// divwu r11,r30,r3
	r11.u32 = r30.u32 / ctx.r3.u32;
	// twllei r3,0
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x823abbf4
	if (!cr6.lt) goto loc_823ABBF4;
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
loc_823ABBEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823abc68
	goto loc_823ABC68;
loc_823ABBF4:
	// mullw. r31,r3,r4
	r31.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823abc00
	if (!cr0.eq) goto loc_823ABC00;
	// li r31,1
	r31.s64 = 1;
loc_823ABC00:
	// lis r29,-32127
	r29.s64 = -2105475072;
loc_823ABC04:
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bgt cr6,0x823abc28
	if (cr6.gt) goto loc_823ABC28;
	// bl 0x823b99e8
	sub_823B99E8(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x823b8560
	sub_823B8560(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823abc68
	if (!cr0.eq) goto loc_823ABC68;
loc_823ABC28:
	// lwz r11,17632(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 17632);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823abc58
	if (cr6.eq) goto loc_823ABC58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823abae0
	sub_823ABAE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823abc04
	if (!cr0.eq) goto loc_823ABC04;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823abbec
	if (cr6.eq) goto loc_823ABBEC;
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x823abbec
	goto loc_823ABBEC;
loc_823ABC58:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823abc68
	if (cr6.eq) goto loc_823ABC68;
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_823ABC68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823ABC70"))) PPC_WEAK_FUNC(sub_823ABC70);
PPC_FUNC_IMPL(__imp__sub_823ABC70) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823abb98
	sub_823ABB98(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823abcbc
	if (!cr0.eq) goto loc_823ABCBC;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823abcbc
	if (cr6.eq) goto loc_823ABCBC;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823abcbc
	if (cr0.eq) goto loc_823ABCBC;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_823ABCBC:
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

__attribute__((alias("__imp__sub_823ABCD8"))) PPC_WEAK_FUNC(sub_823ABCD8);
PPC_FUNC_IMPL(__imp__sub_823ABCD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// addi r11,r4,1022
	r11.s64 = ctx.r4.s64 + 1022;
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lhz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// andi. r10,r10,32783
	ctx.r10.u64 = ctx.r10.u64 & 32783;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, r11.u16);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABD00"))) PPC_WEAK_FUNC(sub_823ABD00);
PPC_FUNC_IMPL(__imp__sub_823ABD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,28,21,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7FF;
	// addi r11,r11,-1022
	r11.s64 = r11.s64 + -1022;
	// extsh r3,r11
	ctx.r3.s64 = r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABD18"))) PPC_WEAK_FUNC(sub_823ABD18);
PPC_FUNC_IMPL(__imp__sub_823ABD18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// stfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f1.u64);
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r10,-8(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// rlwinm r11,r11,28,21,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7FF;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r10,32783
	ctx.r10.u64 = ctx.r10.u64 & 32783;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, r11.u16);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABD4C"))) PPC_WEAK_FUNC(sub_823ABD4C);
PPC_FUNC_IMPL(__imp__sub_823ABD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABD50"))) PPC_WEAK_FUNC(sub_823ABD50);
PPC_FUNC_IMPL(__imp__sub_823ABD50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lis r11,32752
	r11.s64 = 2146435072;
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823abd78
	if (!cr6.eq) goto loc_823ABD78;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823abd94
	if (!cr6.eq) goto loc_823ABD94;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823ABD78:
	// lis r11,-16
	r11.s64 = -1048576;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823abd94
	if (!cr6.eq) goto loc_823ABD94;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823abd94
	if (!cr6.eq) goto loc_823ABD94;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_823ABD94:
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32760
	cr6.compare<uint32_t>(r11.u32, 32760, xer);
	// bne cr6,0x823abdac
	if (!cr6.eq) goto loc_823ABDAC;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_823ABDAC:
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x823abdcc
	if (!cr6.eq) goto loc_823ABDCC;
	// clrlwi. r11,r10,13
	r11.u64 = ctx.r10.u32 & 0x7FFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823abdc4
	if (!cr0.eq) goto loc_823ABDC4;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823abdcc
	if (cr6.eq) goto loc_823ABDCC;
loc_823ABDC4:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_823ABDCC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABDD4"))) PPC_WEAK_FUNC(sub_823ABDD4);
PPC_FUNC_IMPL(__imp__sub_823ABDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABDD8"))) PPC_WEAK_FUNC(sub_823ABDD8);
PPC_FUNC_IMPL(__imp__sub_823ABDD8) {
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
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x823abdf4
	if (!cr6.eq) goto loc_823ABDF4;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823abeb4
	goto loc_823ABEB4;
loc_823ABDF4:
	// lhz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// rlwinm. r11,r7,0,17,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7FF0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823abe90
	if (!cr0.eq) goto loc_823ABE90;
	// lwz r6,16(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r10,r6,12
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// bne 0x823abe1c
	if (!cr0.eq) goto loc_823ABE1C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823abe90
	if (cr6.eq) goto loc_823ABE90;
loc_823ABE1C:
	// li r9,-1021
	ctx.r9.s64 = -1021;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f0.f64);
	// li r5,1
	ctx.r5.s64 = 1;
	// blt cr6,0x823abe30
	if (cr6.lt) goto loc_823ABE30;
	// li r5,0
	ctx.r5.s64 = 0;
loc_823ABE30:
	// rlwinm. r11,r7,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823abe68
	if (!cr0.eq) goto loc_823ABE68;
loc_823ABE38:
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm. r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r6,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r6.u32);
	// beq 0x823abe50
	if (cr0.eq) goto loc_823ABE50;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stw r6,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r6.u32);
loc_823ABE50:
	// lhz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm. r11,r8,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823abe38
	if (cr0.eq) goto loc_823ABE38;
	// stw r10,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r10.u32);
loc_823ABE68:
	// andi. r11,r8,65519
	r11.u64 = ctx.r8.u64 & 65519;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, r11.u16);
	// beq cr6,0x823abe80
	if (cr6.eq) goto loc_823ABE80;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, r11.u16);
loc_823ABE80:
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// stfd f0,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, f0.u64);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// b 0x823abea0
	goto loc_823ABEA0;
loc_823ABE90:
	// rlwinm r11,r11,28,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFF;
	// stfd f1,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f1.u64);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// addi r9,r11,-1022
	ctx.r9.s64 = r11.s64 + -1022;
loc_823ABEA0:
	// lhz r11,-8(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -8);
	// andi. r11,r11,32783
	r11.u64 = r11.u64 & 32783;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ori r11,r11,16352
	r11.u64 = r11.u64 | 16352;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, r11.u16);
	// lfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_823ABEB4:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ABEBC"))) PPC_WEAK_FUNC(sub_823ABEBC);
PPC_FUNC_IMPL(__imp__sub_823ABEBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ABEC0"))) PPC_WEAK_FUNC(sub_823ABEC0);
PPC_FUNC_IMPL(__imp__sub_823ABEC0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x823abf54
	if (!cr6.eq) goto loc_823ABF54;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r3,r29
	cr6.compare<uint32_t>(ctx.r3.u32, r29.u32, xer);
	// bne cr6,0x823abf30
	if (!cr6.eq) goto loc_823ABF30;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bne 0x823abf14
	if (!cr0.eq) goto loc_823ABF14;
loc_823ABF0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823abf58
	goto loc_823ABF58;
loc_823ABF14:
	// li r11,1
	r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x823abf48
	goto loc_823ABF48;
loc_823ABF30:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x823a1190
	sub_823A1190(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823abf0c
	if (cr0.eq) goto loc_823ABF0C;
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
loc_823ABF48:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823ABF54:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823ABF58:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823ABF60"))) PPC_WEAK_FUNC(sub_823ABF60);
PPC_FUNC_IMPL(__imp__sub_823ABF60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,176
	r11.s64 = ctx.r1.s64 + 176;
	// stw r6,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, ctx.r6.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,350
	r11.s64 = 350;
	// stw r28,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r28.u32);
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r23.u32);
	// sth r23,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r23.u16);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bne cr6,0x823abfd0
	if (!cr6.eq) goto loc_823ABFD0;
loc_823ABFA0:
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
loc_823ABFC8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823ad19c
	goto loc_823AD19C;
loc_823ABFD0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823abfa0
	if (cr6.eq) goto loc_823ABFA0;
	// lwz r11,12(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ac0ac
	if (!cr0.eq) goto loc_823AC0AC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r30,r11,14880
	r30.s64 = r11.s64 + 14880;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r29,r11,-22548
	r29.s64 = r11.s64 + -22548;
	// beq cr6,0x823ac040
	if (cr6.eq) goto loc_823AC040;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823ac040
	if (cr6.eq) goto loc_823AC040;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823ac044
	goto loc_823AC044;
loc_823AC040:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823AC044:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823abfa0
	if (!cr0.eq) goto loc_823ABFA0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ac09c
	if (cr6.eq) goto loc_823AC09C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823ac09c
	if (cr6.eq) goto loc_823AC09C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823ac0a0
	goto loc_823AC0A0;
loc_823AC09C:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823AC0A0:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823abfa0
	if (!cr0.eq) goto loc_823ABFA0;
loc_823AC0AC:
	// lbz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// mr r14,r23
	r14.u64 = r23.u64;
	// stb r23,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r23.u8);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r23.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823ad198
	if (cr0.eq) goto loc_823AD198;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r11,-21688
	r11.s64 = r11.s64 + -21688;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-23136
	r11.s64 = r11.s64 + -23136;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
loc_823AC0E0:
	// bl 0x823a1260
	sub_823A1260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ac160
	if (cr0.eq) goto loc_823AC160;
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
loc_823AC0F0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ac118
	if (cr0.lt) goto loc_823AC118;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ac124
	goto loc_823AC124;
loc_823AC118:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_823AC124:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x823ac148
	if (cr6.eq) goto loc_823AC148;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x823a1260
	sub_823A1260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823ac0f0
	if (!cr0.eq) goto loc_823AC0F0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b1668
	sub_823B1668(ctx, base);
loc_823AC148:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// lbz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// bl 0x823a1260
	sub_823A1260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823ac148
	if (!cr0.eq) goto loc_823AC148;
	// b 0x823ad12c
	goto loc_823AD12C;
loc_823AC160:
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x823ad064
	if (!cr6.eq) goto loc_823AD064;
	// li r27,0
	r27.s64 = 0;
	// li r16,1
	r16.s64 = 1;
	// mr r22,r27
	r22.u64 = r27.u64;
	// mr r18,r27
	r18.u64 = r27.u64;
	// mr r17,r27
	r17.u64 = r27.u64;
	// mr r15,r27
	r15.u64 = r27.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// mr r20,r27
	r20.u64 = r27.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
	// mr r24,r27
	r24.u64 = r27.u64;
	// mr r28,r27
	r28.u64 = r27.u64;
	// mr r21,r27
	r21.u64 = r27.u64;
loc_823AC1A0:
	// addi r11,r19,1
	r11.s64 = r19.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r11,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ac1d0
	if (cr0.eq) goto loc_823AC1D0;
	// mulli r11,r15,10
	r11.s64 = r15.s64 * 10;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r15,r11,-48
	r15.s64 = r11.s64 + -48;
	// b 0x823ac300
	goto loc_823AC300;
loc_823AC1D0:
	// cmpwi cr6,r31,78
	cr6.compare<int32_t>(r31.s32, 78, xer);
	// bgt cr6,0x823ac298
	if (cr6.gt) goto loc_823AC298;
	// beq cr6,0x823ac300
	if (cr6.eq) goto loc_823AC300;
	// cmpwi cr6,r31,42
	cr6.compare<int32_t>(r31.s32, 42, xer);
	// beq cr6,0x823ac28c
	if (cr6.eq) goto loc_823AC28C;
	// cmpwi cr6,r31,70
	cr6.compare<int32_t>(r31.s32, 70, xer);
	// beq cr6,0x823ac300
	if (cr6.eq) goto loc_823AC300;
	// cmpwi cr6,r31,73
	cr6.compare<int32_t>(r31.s32, 73, xer);
	// beq cr6,0x823ac208
	if (cr6.eq) goto loc_823AC208;
	// cmpwi cr6,r31,76
	cr6.compare<int32_t>(r31.s32, 76, xer);
	// bne cr6,0x823ac2b0
	if (!cr6.eq) goto loc_823AC2B0;
	// addi r11,r16,1
	r11.s64 = r16.s64 + 1;
	// extsb r16,r11
	r16.s64 = r11.s8;
	// b 0x823ac300
	goto loc_823AC300;
loc_823AC208:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r10,54
	cr6.compare<uint32_t>(ctx.r10.u32, 54, xer);
	// bne cr6,0x823ac23c
	if (!cr6.eq) goto loc_823AC23C;
	// addi r11,r19,2
	r11.s64 = r19.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,52
	cr6.compare<uint32_t>(ctx.r9.u32, 52, xer);
	// bne cr6,0x823ac23c
	if (!cr6.eq) goto loc_823AC23C;
loc_823AC228:
	// mr r19,r11
	r19.u64 = r11.u64;
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r27.u64);
	// addi r21,r21,1
	r21.s64 = r21.s64 + 1;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// b 0x823ac304
	goto loc_823AC304;
loc_823AC23C:
	// cmplwi cr6,r10,51
	cr6.compare<uint32_t>(ctx.r10.u32, 51, xer);
	// bne cr6,0x823ac260
	if (!cr6.eq) goto loc_823AC260;
	// addi r11,r19,2
	r11.s64 = r19.s64 + 2;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,50
	cr6.compare<uint32_t>(ctx.r9.u32, 50, xer);
	// bne cr6,0x823ac260
	if (!cr6.eq) goto loc_823AC260;
	// mr r19,r11
	r19.u64 = r11.u64;
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// b 0x823ac304
	goto loc_823AC304;
loc_823AC260:
	// cmplwi cr6,r10,100
	cr6.compare<uint32_t>(ctx.r10.u32, 100, xer);
	// beq cr6,0x823ac304
	if (cr6.eq) goto loc_823AC304;
	// cmplwi cr6,r10,105
	cr6.compare<uint32_t>(ctx.r10.u32, 105, xer);
	// beq cr6,0x823ac304
	if (cr6.eq) goto loc_823AC304;
	// cmplwi cr6,r10,111
	cr6.compare<uint32_t>(ctx.r10.u32, 111, xer);
	// beq cr6,0x823ac304
	if (cr6.eq) goto loc_823AC304;
	// cmplwi cr6,r10,120
	cr6.compare<uint32_t>(ctx.r10.u32, 120, xer);
	// beq cr6,0x823ac304
	if (cr6.eq) goto loc_823AC304;
	// cmplwi cr6,r10,88
	cr6.compare<uint32_t>(ctx.r10.u32, 88, xer);
	// bne cr6,0x823ac2b4
	if (!cr6.eq) goto loc_823AC2B4;
	// b 0x823ac304
	goto loc_823AC304;
loc_823AC28C:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
	// b 0x823ac300
	goto loc_823AC300;
loc_823AC298:
	// cmpwi cr6,r31,104
	cr6.compare<int32_t>(r31.s32, 104, xer);
	// beq cr6,0x823ac2f0
	if (cr6.eq) goto loc_823AC2F0;
	// cmpwi cr6,r31,108
	cr6.compare<int32_t>(r31.s32, 108, xer);
	// beq cr6,0x823ac2c0
	if (cr6.eq) goto loc_823AC2C0;
	// cmpwi cr6,r31,119
	cr6.compare<int32_t>(r31.s32, 119, xer);
	// beq cr6,0x823ac2e0
	if (cr6.eq) goto loc_823AC2E0;
loc_823AC2B0:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_823AC2B4:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// extsb r30,r11
	r30.s64 = r11.s8;
	// b 0x823ac304
	goto loc_823AC304;
loc_823AC2C0:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r19,1
	r11.s64 = r19.s64 + 1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,108
	cr6.compare<uint32_t>(ctx.r10.u32, 108, xer);
	// beq cr6,0x823ac228
	if (cr6.eq) goto loc_823AC228;
	// addi r11,r16,1
	r11.s64 = r16.s64 + 1;
	// extsb r16,r11
	r16.s64 = r11.s8;
	// b 0x823ac2e4
	goto loc_823AC2E4;
loc_823AC2E0:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_823AC2E4:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// extsb r28,r11
	r28.s64 = r11.s8;
	// b 0x823ac304
	goto loc_823AC304;
loc_823AC2F0:
	// addi r10,r16,-1
	ctx.r10.s64 = r16.s64 + -1;
	// addi r11,r28,-1
	r11.s64 = r28.s64 + -1;
	// extsb r16,r10
	r16.s64 = ctx.r10.s8;
	// extsb r28,r11
	r28.s64 = r11.s8;
loc_823AC300:
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_823AC304:
	// extsb. r11,r30
	r11.s64 = r30.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ac1a0
	if (cr0.eq) goto loc_823AC1A0;
	// extsb. r11,r29
	r11.s64 = r29.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bne 0x823ac33c
	if (!cr0.eq) goto loc_823AC33C;
	// lwz r11,732(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// addi r10,r11,7
	ctx.r10.s64 = r11.s64 + 7;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// rlwinm r11,r10,0,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r11.u32);
	// lwz r11,-4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// b 0x823ac340
	goto loc_823AC340;
loc_823AC33C:
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
loc_823AC340:
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r29,r27
	r29.u64 = r27.u64;
	// bne 0x823ac368
	if (!cr0.eq) goto loc_823AC368;
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,83
	cr6.compare<uint32_t>(r11.u32, 83, xer);
	// beq cr6,0x823ac364
	if (cr6.eq) goto loc_823AC364;
	// cmplwi cr6,r11,67
	cr6.compare<uint32_t>(r11.u32, 67, xer);
	// li r28,-1
	r28.s64 = -1;
	// bne cr6,0x823ac368
	if (!cr6.eq) goto loc_823AC368;
loc_823AC364:
	// li r28,1
	r28.s64 = 1;
loc_823AC368:
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// ori r19,r11,32
	r19.u64 = r11.u64 | 32;
	// cmpwi cr6,r19,110
	cr6.compare<int32_t>(r19.s32, 110, xer);
	// beq cr6,0x823ac420
	if (cr6.eq) goto loc_823AC420;
	// cmpwi cr6,r19,99
	cr6.compare<int32_t>(r19.s32, 99, xer);
	// beq cr6,0x823ac3e0
	if (cr6.eq) goto loc_823AC3E0;
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(r19.s32, 123, xer);
	// beq cr6,0x823ac3e0
	if (cr6.eq) goto loc_823AC3E0;
loc_823AC38C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ac3b4
	if (cr0.lt) goto loc_823AC3B4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ac3c0
	goto loc_823AC3C0;
loc_823AC3B4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_823AC3C0:
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// beq cr6,0x823ac3d8
	if (cr6.eq) goto loc_823AC3D8;
	// clrlwi r3,r31,24
	ctx.r3.u64 = r31.u32 & 0xFF;
	// bl 0x823a1260
	sub_823A1260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823ac38c
	if (!cr0.eq) goto loc_823AC38C;
loc_823AC3D8:
	// mr r23,r31
	r23.u64 = r31.u64;
	// b 0x823ac414
	goto loc_823AC414;
loc_823AC3E0:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ac408
	if (cr0.lt) goto loc_823AC408;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ac414
	goto loc_823AC414;
loc_823AC408:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823AC414:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x823ad160
	if (cr6.eq) goto loc_823AD160;
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_823AC420:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x823ac430
	if (cr6.eq) goto loc_823AC430;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// beq cr6,0x823ad14c
	if (cr6.eq) goto loc_823AD14C;
loc_823AC430:
	// addi r11,r19,-99
	r11.s64 = r19.s64 + -99;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// bgt cr6,0x823ad018
	if (cr6.gt) goto loc_823AD018;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-26712
	r12.s64 = r12.s64 + -26712;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32197
	r12.s64 = -2110062592;
	// addi r12,r12,-15260
	r12.s64 = r12.s64 + -15260;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823AC464;
	case 1:
		goto loc_823AC900;
	case 2:
		goto loc_823ACC40;
	case 3:
		goto loc_823ACC40;
	case 4:
		goto loc_823ACC40;
	case 5:
		goto loc_823AD018;
	case 6:
		goto loc_823AC7A0;
	case 7:
		goto loc_823AD018;
	case 8:
		goto loc_823AD018;
	case 9:
		goto loc_823AD018;
	case 10:
		goto loc_823AD018;
	case 11:
		goto loc_823ACBEC;
	case 12:
		goto loc_823AC900;
	case 13:
		goto loc_823AC8FC;
	case 14:
		goto loc_823AD018;
	case 15:
		goto loc_823AD018;
	case 16:
		goto loc_823AC474;
	case 17:
		goto loc_823AD018;
	case 18:
		goto loc_823AC900;
	case 19:
		goto loc_823AD018;
	case 20:
		goto loc_823AD018;
	case 21:
		goto loc_823AC7A4;
	case 22:
		goto loc_823AD018;
	case 23:
		goto loc_823AD018;
	case 24:
		goto loc_823AC484;
	default:
		__builtin_unreachable();
	}
loc_823AC464:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x823ac474
	if (!cr6.eq) goto loc_823AC474;
	// li r17,1
	r17.s64 = 1;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
loc_823AC474:
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823ac5c4
	if (!cr0.gt) goto loc_823AC5C4;
	// li r24,1
	r24.s64 = 1;
	// b 0x823ac5c4
	goto loc_823AC5C4;
loc_823AC484:
	// extsb. r11,r28
	r11.s64 = r28.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823ac490
	if (!cr0.gt) goto loc_823AC490;
	// li r24,1
	r24.s64 = 1;
loc_823AC490:
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// stw r6,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r6.u32);
	// cmplwi cr6,r11,94
	cr6.compare<uint32_t>(r11.u32, 94, xer);
	// bne cr6,0x823ac4ac
	if (!cr6.eq) goto loc_823AC4AC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// li r25,-1
	r25.s64 = -1;
loc_823AC4AC:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(r19.s32, 123, xer);
	// std r5,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r5.u64);
	// std r5,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r5.u64);
	// std r5,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r5.u64);
	// std r5,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r5.u64);
	// bne cr6,0x823ac4e8
	if (!cr6.eq) goto loc_823AC4E8;
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x823ac4e8
	if (!cr6.eq) goto loc_823AC4E8;
	// li r11,32
	r11.s64 = 32;
	// li r27,93
	r27.s64 = 93;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,155(r1)
	PPC_STORE_U8(ctx.r1.u32 + 155, r11.u8);
loc_823AC4E8:
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// beq cr6,0x823ac5ac
	if (cr6.eq) goto loc_823AC5AC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823AC4F8:
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r9,45
	cr6.compare<uint32_t>(ctx.r9.u32, 45, xer);
	// bne cr6,0x823ac580
	if (!cr6.eq) goto loc_823AC580;
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ac580
	if (cr0.eq) goto loc_823AC580;
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// beq cr6,0x823ac580
	if (cr6.eq) goto loc_823AC580;
	// clrlwi r9,r11,24
	ctx.r9.u64 = r11.u32 & 0xFF;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x823ac538
	if (!cr6.lt) goto loc_823AC538;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x823ac540
	goto loc_823AC540;
loc_823AC538:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_823AC540:
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// b 0x823ac570
	goto loc_823AC570;
loc_823AC54C:
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// slw r3,r4,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (r11.u8 & 0x3F));
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lbzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 | ctx.r8.u64;
	// stbx r8,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u8);
loc_823AC570:
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x823ac54c
	if (!cr6.gt) goto loc_823AC54C;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// b 0x823ac5a0
	goto loc_823AC5A0;
loc_823AC580:
	// rlwinm r11,r9,29,3,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lbzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// slw r9,r4,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stbx r9,r11,r10
	PPC_STORE_U8(r11.u32 + ctx.r10.u32, ctx.r9.u8);
loc_823AC5A0:
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi cr6,r11,93
	cr6.compare<uint32_t>(r11.u32, 93, xer);
	// bne cr6,0x823ac4f8
	if (!cr6.eq) goto loc_823AC4F8;
loc_823AC5AC:
	// lbz r11,0(r6)
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823ad160
	if (cr0.eq) goto loc_823AD160;
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(r19.s32, 123, xer);
	// bne cr6,0x823ac5c4
	if (!cr6.eq) goto loc_823AC5C4;
	// stw r6,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r6.u32);
loc_823AC5C4:
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// mr r31,r30
	r31.u64 = r30.u64;
	// beq cr6,0x823ac5e4
	if (cr6.eq) goto loc_823AC5E4;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823b1668
	sub_823B1668(ctx, base);
loc_823AC5E4:
	// lwz r29,124(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_823AC5E8:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x823ac5fc
	if (cr6.eq) goto loc_823AC5FC;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// beq cr6,0x823ac754
	if (cr6.eq) goto loc_823AC754;
loc_823AC5FC:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ac624
	if (cr0.lt) goto loc_823AC624;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ac630
	goto loc_823AC630;
loc_823AC624:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823AC630:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x823ac73c
	if (cr6.eq) goto loc_823AC73C;
	// cmpwi cr6,r19,99
	cr6.compare<int32_t>(r19.s32, 99, xer);
	// beq cr6,0x823ac694
	if (cr6.eq) goto loc_823AC694;
	// cmpwi cr6,r19,115
	cr6.compare<int32_t>(r19.s32, 115, xer);
	// bne cr6,0x823ac660
	if (!cr6.eq) goto loc_823AC660;
	// cmpwi cr6,r23,9
	cr6.compare<int32_t>(r23.s32, 9, xer);
	// blt cr6,0x823ac658
	if (cr6.lt) goto loc_823AC658;
	// cmpwi cr6,r23,13
	cr6.compare<int32_t>(r23.s32, 13, xer);
	// ble cr6,0x823ac73c
	if (!cr6.gt) goto loc_823AC73C;
loc_823AC658:
	// cmpwi cr6,r23,32
	cr6.compare<int32_t>(r23.s32, 32, xer);
	// bne cr6,0x823ac694
	if (!cr6.eq) goto loc_823AC694;
loc_823AC660:
	// cmpwi cr6,r19,123
	cr6.compare<int32_t>(r19.s32, 123, xer);
	// bne cr6,0x823ac73c
	if (!cr6.eq) goto loc_823AC73C;
	// srawi r9,r23,3
	xer.ca = (r23.s32 < 0) & ((r23.u32 & 0x7) != 0);
	ctx.r9.s64 = r23.s32 >> 3;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// clrlwi r11,r23,29
	r11.u64 = r23.u32 & 0x7;
	// extsb r8,r25
	ctx.r8.s64 = r25.s8;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ac73c
	if (cr0.eq) goto loc_823AC73C;
loc_823AC694:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823ac734
	if (!cr6.eq) goto loc_823AC734;
	// extsb. r11,r24
	r11.s64 = r24.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ac724
	if (cr0.eq) goto loc_823AC724;
	// extsb r11,r23
	r11.s64 = r23.s8;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, r11.u8);
	// bl 0x823b1890
	sub_823B1890(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ac6f4
	if (cr0.eq) goto loc_823AC6F4;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ac6e8
	if (cr0.lt) goto loc_823AC6E8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ac6f0
	goto loc_823AC6F0;
loc_823AC6E8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
loc_823AC6F0:
	// stb r3,121(r1)
	PPC_STORE_U8(ctx.r1.u32 + 121, ctx.r3.u8);
loc_823AC6F4:
	// li r11,63
	r11.s64 = 63;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r11.u16);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,172(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// bl 0x823b1848
	sub_823B1848(ctx, base);
	// lhz r11,96(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// b 0x823ac72c
	goto loc_823AC72C;
loc_823AC724:
	// stb r23,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r23.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823AC72C:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// b 0x823ac5e8
	goto loc_823AC5E8;
loc_823AC734:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x823ac5e8
	goto loc_823AC5E8;
loc_823AC73C:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x823ac754
	if (cr6.eq) goto loc_823AC754;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823b1668
	sub_823B1668(ctx, base);
loc_823AC754:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// beq cr6,0x823ad160
	if (cr6.eq) goto loc_823AD160;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823ad044
	if (!cr6.eq) goto loc_823AD044;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,99
	cr6.compare<int32_t>(r19.s32, 99, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// beq cr6,0x823ad044
	if (cr6.eq) goto loc_823AD044;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// extsb. r11,r24
	r11.s64 = r24.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ac794
	if (cr0.eq) goto loc_823AC794;
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// b 0x823ad044
	goto loc_823AD044;
loc_823AC794:
	// li r11,0
	r11.s64 = 0;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// b 0x823ad044
	goto loc_823AD044;
loc_823AC7A0:
	// li r19,100
	r19.s64 = 100;
loc_823AC7A4:
	// cmpwi cr6,r23,45
	cr6.compare<int32_t>(r23.s32, 45, xer);
	// bne cr6,0x823ac7b4
	if (!cr6.eq) goto loc_823AC7B4;
	// li r20,1
	r20.s64 = 1;
	// b 0x823ac7bc
	goto loc_823AC7BC;
loc_823AC7B4:
	// cmpwi cr6,r23,43
	cr6.compare<int32_t>(r23.s32, 43, xer);
	// bne cr6,0x823ac808
	if (!cr6.eq) goto loc_823AC808;
loc_823AC7BC:
	// addic. r15,r15,-1
	xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// bne 0x823ac7d4
	if (!cr0.eq) goto loc_823AC7D4;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x823ac7d4
	if (cr6.eq) goto loc_823AC7D4;
	// li r29,1
	r29.s64 = 1;
	// b 0x823ac808
	goto loc_823AC808;
loc_823AC7D4:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ac7fc
	if (cr0.lt) goto loc_823AC7FC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ac808
	goto loc_823AC808;
loc_823AC7FC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823AC808:
	// cmpwi cr6,r23,48
	cr6.compare<int32_t>(r23.s32, 48, xer);
	// bne cr6,0x823ac964
	if (!cr6.eq) goto loc_823AC964;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ac838
	if (cr0.lt) goto loc_823AC838;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ac844
	goto loc_823AC844;
loc_823AC838:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823AC844:
	// extsb r11,r23
	r11.s64 = r23.s8;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x823ac8a4
	if (cr6.eq) goto loc_823AC8A4;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x823ac8a4
	if (cr6.eq) goto loc_823AC8A4;
	// li r18,1
	r18.s64 = 1;
	// cmpwi cr6,r19,120
	cr6.compare<int32_t>(r19.s32, 120, xer);
	// beq cr6,0x823ac884
	if (cr6.eq) goto loc_823AC884;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x823ac87c
	if (cr6.eq) goto loc_823AC87C;
	// addic. r15,r15,-1
	xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// bne 0x823ac87c
	if (!cr0.eq) goto loc_823AC87C;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_823AC87C:
	// li r19,111
	r19.s64 = 111;
	// b 0x823ac964
	goto loc_823AC964;
loc_823AC884:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x823ac89c
	if (cr6.eq) goto loc_823AC89C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823b1668
	sub_823B1668(ctx, base);
loc_823AC89C:
	// li r23,48
	r23.s64 = 48;
	// b 0x823ac964
	goto loc_823AC964;
loc_823AC8A4:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ac8cc
	if (cr0.lt) goto loc_823AC8CC;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ac8d8
	goto loc_823AC8D8;
loc_823AC8CC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823AC8D8:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x823ac8f4
	if (cr6.eq) goto loc_823AC8F4;
	// addi r15,r15,-2
	r15.s64 = r15.s64 + -2;
	// cmpwi cr6,r15,1
	cr6.compare<int32_t>(r15.s32, 1, xer);
	// bge cr6,0x823ac8f4
	if (!cr6.lt) goto loc_823AC8F4;
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_823AC8F4:
	// li r19,120
	r19.s64 = 120;
	// b 0x823ac964
	goto loc_823AC964;
loc_823AC8FC:
	// li r16,1
	r16.s64 = 1;
loc_823AC900:
	// cmpwi cr6,r23,45
	cr6.compare<int32_t>(r23.s32, 45, xer);
	// bne cr6,0x823ac910
	if (!cr6.eq) goto loc_823AC910;
	// li r20,1
	r20.s64 = 1;
	// b 0x823ac918
	goto loc_823AC918;
loc_823AC910:
	// cmpwi cr6,r23,43
	cr6.compare<int32_t>(r23.s32, 43, xer);
	// bne cr6,0x823ac964
	if (!cr6.eq) goto loc_823AC964;
loc_823AC918:
	// addic. r15,r15,-1
	xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// bne 0x823ac930
	if (!cr0.eq) goto loc_823AC930;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x823ac930
	if (cr6.eq) goto loc_823AC930;
	// li r29,1
	r29.s64 = 1;
	// b 0x823ac964
	goto loc_823AC964;
loc_823AC930:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ac958
	if (cr0.lt) goto loc_823AC958;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ac964
	goto loc_823AC964;
loc_823AC958:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823AC964:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// extsb. r31,r29
	r31.s64 = r29.s8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x823acaac
	if (cr6.eq) goto loc_823ACAAC;
	// bne 0x823aca94
	if (!cr0.eq) goto loc_823ACA94;
loc_823AC974:
	// cmpwi cr6,r19,120
	cr6.compare<int32_t>(r19.s32, 120, xer);
	// beq cr6,0x823ac9c0
	if (cr6.eq) goto loc_823AC9C0;
	// cmpwi cr6,r19,112
	cr6.compare<int32_t>(r19.s32, 112, xer);
	// beq cr6,0x823ac9c0
	if (cr6.eq) goto loc_823AC9C0;
	// clrlwi r3,r23,24
	ctx.r3.u64 = r23.u32 & 0xFF;
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ac9fc
	if (cr0.eq) goto loc_823AC9FC;
	// cmpwi cr6,r19,111
	cr6.compare<int32_t>(r19.s32, 111, xer);
	// bne cr6,0x823ac9b4
	if (!cr6.eq) goto loc_823AC9B4;
	// cmpwi cr6,r23,56
	cr6.compare<int32_t>(r23.s32, 56, xer);
	// bge cr6,0x823ac9fc
	if (!cr6.lt) goto loc_823AC9FC;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r11,r11,3,60
	r11.u64 = __builtin_rotateleft64(r11.u64, 3) & 0xFFFFFFFFFFFFFFF8;
loc_823AC9AC:
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// b 0x823aca04
	goto loc_823ACA04;
loc_823AC9B4:
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mulli r11,r11,10
	r11.s64 = r11.s64 * 10;
	// b 0x823ac9ac
	goto loc_823AC9AC;
loc_823AC9C0:
	// clrlwi r30,r23,24
	r30.u64 = r23.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a1240
	sub_823A1240(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ac9fc
	if (cr0.eq) goto loc_823AC9FC;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rldicr r11,r11,4,59
	r11.u64 = __builtin_rotateleft64(r11.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823aca04
	if (!cr0.eq) goto loc_823ACA04;
	// rlwinm r11,r23,0,27,25
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r23,r11,-7
	r23.s64 = r11.s64 + -7;
	// b 0x823aca04
	goto loc_823ACA04;
loc_823AC9FC:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_823ACA04:
	// extsb. r11,r29
	r11.s64 = r29.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823aca74
	if (!cr0.eq) goto loc_823ACA74;
	// addi r11,r23,-48
	r11.s64 = r23.s64 + -48;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// beq cr6,0x823aca3c
	if (cr6.eq) goto loc_823ACA3C;
	// addic. r15,r15,-1
	xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// bne 0x823aca3c
	if (!cr0.eq) goto loc_823ACA3C;
	// li r29,1
	r29.s64 = 1;
	// b 0x823aca8c
	goto loc_823ACA8C;
loc_823ACA3C:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823aca64
	if (cr0.lt) goto loc_823ACA64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823aca8c
	goto loc_823ACA8C;
loc_823ACA64:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x823aca8c
	goto loc_823ACA8C;
loc_823ACA74:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x823aca8c
	if (cr6.eq) goto loc_823ACA8C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823b1668
	sub_823B1668(ctx, base);
loc_823ACA8C:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823ac974
	if (cr0.eq) goto loc_823AC974;
loc_823ACA94:
	// extsb. r11,r20
	r11.s64 = r20.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823acbbc
	if (cr0.eq) goto loc_823ACBBC;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// neg r11,r11
	r11.s64 = -r11.s64;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, r11.u64);
	// b 0x823acbbc
	goto loc_823ACBBC;
loc_823ACAAC:
	// bne 0x823acbb0
	if (!cr0.eq) goto loc_823ACBB0;
loc_823ACAB0:
	// cmpwi cr6,r19,120
	cr6.compare<int32_t>(r19.s32, 120, xer);
	// beq cr6,0x823acaf0
	if (cr6.eq) goto loc_823ACAF0;
	// cmpwi cr6,r19,112
	cr6.compare<int32_t>(r19.s32, 112, xer);
	// beq cr6,0x823acaf0
	if (cr6.eq) goto loc_823ACAF0;
	// clrlwi r3,r23,24
	ctx.r3.u64 = r23.u32 & 0xFF;
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823acb24
	if (cr0.eq) goto loc_823ACB24;
	// cmpwi cr6,r19,111
	cr6.compare<int32_t>(r19.s32, 111, xer);
	// bne cr6,0x823acae8
	if (!cr6.eq) goto loc_823ACAE8;
	// cmpwi cr6,r23,56
	cr6.compare<int32_t>(r23.s32, 56, xer);
	// bge cr6,0x823acb24
	if (!cr6.lt) goto loc_823ACB24;
	// rlwinm r22,r22,3,0,28
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x823acb2c
	goto loc_823ACB2C;
loc_823ACAE8:
	// mulli r22,r22,10
	r22.s64 = r22.s64 * 10;
	// b 0x823acb2c
	goto loc_823ACB2C;
loc_823ACAF0:
	// clrlwi r30,r23,24
	r30.u64 = r23.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823a1240
	sub_823A1240(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823acb24
	if (cr0.eq) goto loc_823ACB24;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r22,r22,4,0,27
	r22.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823acb2c
	if (!cr0.eq) goto loc_823ACB2C;
	// rlwinm r11,r23,0,27,25
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r23,r11,-7
	r23.s64 = r11.s64 + -7;
	// b 0x823acb2c
	goto loc_823ACB2C;
loc_823ACB24:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_823ACB2C:
	// extsb. r11,r29
	r11.s64 = r29.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823acb90
	if (!cr0.eq) goto loc_823ACB90;
	// add r11,r22,r23
	r11.u64 = r22.u64 + r23.u64;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// addi r22,r11,-48
	r22.s64 = r11.s64 + -48;
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x823acb58
	if (cr6.eq) goto loc_823ACB58;
	// addic. r15,r15,-1
	xer.ca = r15.u32 > 0;
	r15.s64 = r15.s64 + -1;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// bne 0x823acb58
	if (!cr0.eq) goto loc_823ACB58;
	// li r29,1
	r29.s64 = 1;
	// b 0x823acba8
	goto loc_823ACBA8;
loc_823ACB58:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823acb80
	if (cr0.lt) goto loc_823ACB80;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823acba8
	goto loc_823ACBA8;
loc_823ACB80:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// b 0x823acba8
	goto loc_823ACBA8;
loc_823ACB90:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x823acba8
	if (cr6.eq) goto loc_823ACBA8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823b1668
	sub_823B1668(ctx, base);
loc_823ACBA8:
	// extsb. r31,r29
	r31.s64 = r29.s8;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823acab0
	if (cr0.eq) goto loc_823ACAB0;
loc_823ACBB0:
	// extsb. r11,r20
	r11.s64 = r20.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823acbbc
	if (cr0.eq) goto loc_823ACBBC;
	// neg r22,r22
	r22.s64 = -r22.s64;
loc_823ACBBC:
	// cmpwi cr6,r19,70
	cr6.compare<int32_t>(r19.s32, 70, xer);
	// bne cr6,0x823acbc8
	if (!cr6.eq) goto loc_823ACBC8;
	// li r18,0
	r18.s64 = 0;
loc_823ACBC8:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x823ad160
	if (cr6.eq) goto loc_823AD160;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823ad044
	if (!cr6.eq) goto loc_823AD044;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// b 0x823acc08
	goto loc_823ACC08;
loc_823ACBEC:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r22,r14
	r22.u64 = r14.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823ad044
	if (!cr6.eq) goto loc_823AD044;
	// bl 0x8239f590
	sub_8239F590(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad044
	if (cr0.eq) goto loc_823AD044;
loc_823ACC08:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x823acc20
	if (cr6.eq) goto loc_823ACC20;
	// ld r11,112(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// b 0x823ad044
	goto loc_823AD044;
loc_823ACC20:
	// extsb. r11,r16
	r11.s64 = r16.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823acc34
	if (cr0.eq) goto loc_823ACC34;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// b 0x823ad044
	goto loc_823AD044;
loc_823ACC34:
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// sth r22,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r22.u16);
	// b 0x823ad044
	goto loc_823AD044;
loc_823ACC40:
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r23,45
	cr6.compare<int32_t>(r23.s32, 45, xer);
	// bne cr6,0x823acc60
	if (!cr6.eq) goto loc_823ACC60;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,45
	r11.s64 = 45;
	// li r30,1
	r30.s64 = 1;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// b 0x823acc68
	goto loc_823ACC68;
loc_823ACC60:
	// cmpwi cr6,r23,43
	cr6.compare<int32_t>(r23.s32, 43, xer);
	// bne cr6,0x823acca0
	if (!cr6.eq) goto loc_823ACCA0;
loc_823ACC68:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823acc94
	if (cr0.lt) goto loc_823ACC94;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823acca0
	goto loc_823ACCA0;
loc_823ACC94:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823ACCA0:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// bne cr6,0x823acd20
	if (!cr6.eq) goto loc_823ACD20;
	// li r15,-1
	r15.s64 = -1;
	// b 0x823acd20
	goto loc_823ACD20;
loc_823ACCB0:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// beq cr6,0x823acd34
	if (cr6.eq) goto loc_823ACD34;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823abec0
	sub_823ABEC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad160
	if (cr0.eq) goto loc_823AD160;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823acd14
	if (cr0.lt) goto loc_823ACD14;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823acd20
	goto loc_823ACD20;
loc_823ACD14:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823ACD20:
	// clrlwi r31,r23,24
	r31.u64 = r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823accb0
	if (!cr0.eq) goto loc_823ACCB0;
loc_823ACD34:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// extsb r10,r23
	ctx.r10.s64 = r23.s8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 188);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r11,r31
	r11.s64 = r31.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x823ace4c
	if (!cr6.eq) goto loc_823ACE4C;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// beq cr6,0x823ace4c
	if (cr6.eq) goto loc_823ACE4C;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823acd8c
	if (cr0.lt) goto loc_823ACD8C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823acd98
	goto loc_823ACD98;
loc_823ACD8C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823ACD98:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823abec0
	sub_823ABEC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad160
	if (cr0.eq) goto loc_823AD160;
	// b 0x823ace38
	goto loc_823ACE38;
loc_823ACDC8:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// beq cr6,0x823ace4c
	if (cr6.eq) goto loc_823ACE4C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823abec0
	sub_823ABEC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad160
	if (cr0.eq) goto loc_823AD160;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ace2c
	if (cr0.lt) goto loc_823ACE2C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ace38
	goto loc_823ACE38;
loc_823ACE2C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823ACE38:
	// clrlwi r31,r23,24
	r31.u64 = r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823acdc8
	if (!cr0.eq) goto loc_823ACDC8;
loc_823ACE4C:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x823acfb0
	if (cr6.eq) goto loc_823ACFB0;
	// cmpwi cr6,r23,101
	cr6.compare<int32_t>(r23.s32, 101, xer);
	// beq cr6,0x823ace64
	if (cr6.eq) goto loc_823ACE64;
	// cmpwi cr6,r23,69
	cr6.compare<int32_t>(r23.s32, 69, xer);
	// bne cr6,0x823acfb0
	if (!cr6.eq) goto loc_823ACFB0;
loc_823ACE64:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// addi r29,r15,-1
	r29.s64 = r15.s64 + -1;
	// beq cr6,0x823acfb0
	if (cr6.eq) goto loc_823ACFB0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,101
	r11.s64 = 101;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r11,r30,r10
	PPC_STORE_U8(r30.u32 + ctx.r10.u32, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823abec0
	sub_823ABEC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad160
	if (cr0.eq) goto loc_823AD160;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823acec8
	if (cr0.lt) goto loc_823ACEC8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823aced4
	goto loc_823ACED4;
loc_823ACEC8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823ACED4:
	// cmpwi cr6,r23,45
	cr6.compare<int32_t>(r23.s32, 45, xer);
	// bne cr6,0x823acf10
	if (!cr6.eq) goto loc_823ACF10;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// stbx r10,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, ctx.r10.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823abec0
	sub_823ABEC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad160
	if (cr0.eq) goto loc_823AD160;
	// b 0x823acf18
	goto loc_823ACF18;
loc_823ACF10:
	// cmpwi cr6,r23,43
	cr6.compare<int32_t>(r23.s32, 43, xer);
	// bne cr6,0x823acf9c
	if (!cr6.eq) goto loc_823ACF9C;
loc_823ACF18:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// bne cr6,0x823acf68
	if (!cr6.eq) goto loc_823ACF68;
	// li r29,0
	r29.s64 = 0;
	// b 0x823acf9c
	goto loc_823ACF9C;
loc_823ACF2C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// beq cr6,0x823acfb0
	if (cr6.eq) goto loc_823ACFB0;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// stbx r31,r30,r11
	PPC_STORE_U8(r30.u32 + r11.u32, r31.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823abec0
	sub_823ABEC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad160
	if (cr0.eq) goto loc_823AD160;
loc_823ACF68:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823acf90
	if (cr0.lt) goto loc_823ACF90;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823acf9c
	goto loc_823ACF9C;
loc_823ACF90:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823ACF9C:
	// clrlwi r31,r23,24
	r31.u64 = r23.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a1220
	sub_823A1220(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823acf2c
	if (!cr0.eq) goto loc_823ACF2C;
loc_823ACFB0:
	// addi r14,r14,-1
	r14.s64 = r14.s64 + -1;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x823acfc8
	if (cr6.eq) goto loc_823ACFC8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823b1668
	sub_823B1668(ctx, base);
loc_823ACFC8:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x823ad160
	if (cr6.eq) goto loc_823AD160;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823ad044
	if (!cr6.eq) goto loc_823AD044;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// extsb r11,r16
	r11.s64 = r16.s8;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stbx r10,r30,r5
	PPC_STORE_U8(r30.u32 + ctx.r5.u32, ctx.r10.u8);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823ad044
	goto loc_823AD044;
loc_823AD018:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bne cr6,0x823ad14c
	if (!cr6.eq) goto loc_823AD14C;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// bne cr6,0x823ad044
	if (!cr6.eq) goto loc_823AD044;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,732(r1)
	PPC_STORE_U32(ctx.r1.u32 + 732, r11.u32);
loc_823AD044:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,716(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rotlwi r19,r10,0
	r19.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// stw r10,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, ctx.r10.u32);
	// b 0x823ad104
	goto loc_823AD104;
loc_823AD064:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ad08c
	if (cr0.lt) goto loc_823AD08C;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r23,0(r11)
	r23.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ad098
	goto loc_823AD098;
loc_823AD08C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_823AD098:
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// bne cr6,0x823ad14c
	if (!cr6.eq) goto loc_823AD14C;
	// clrlwi r3,r23,24
	ctx.r3.u64 = r23.u32 & 0xFF;
	// bl 0x823b1890
	sub_823B1890(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad104
	if (cr0.eq) goto loc_823AD104;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// addi r31,r14,1
	r31.s64 = r14.s64 + 1;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// blt 0x823ad0e4
	if (cr0.lt) goto loc_823AD0E4;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// b 0x823ad0ec
	goto loc_823AD0EC;
loc_823AD0E4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823ae6e8
	sub_823AE6E8(ctx, base);
loc_823AD0EC:
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// stw r19,716(r1)
	PPC_STORE_U32(ctx.r1.u32 + 716, r19.u32);
	// bne cr6,0x823ad13c
	if (!cr6.eq) goto loc_823AD13C;
	// addi r14,r31,-1
	r14.s64 = r31.s64 + -1;
loc_823AD104:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// bne cr6,0x823ad12c
	if (!cr6.eq) goto loc_823AD12C;
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,37
	cr6.compare<uint32_t>(r11.u32, 37, xer);
	// bne cr6,0x823ad160
	if (!cr6.eq) goto loc_823AD160;
	// lwz r11,716(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lbz r11,1(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cmplwi cr6,r11,110
	cr6.compare<uint32_t>(r11.u32, 110, xer);
	// bne cr6,0x823ad160
	if (!cr6.eq) goto loc_823AD160;
	// lwz r19,716(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
loc_823AD12C:
	// lbz r3,0(r19)
	ctx.r3.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823ac0e0
	if (!cr0.eq) goto loc_823AC0E0;
	// b 0x823ad160
	goto loc_823AD160;
loc_823AD13C:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ad14c
	if (cr6.eq) goto loc_823AD14C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823b1668
	sub_823B1668(ctx, base);
loc_823AD14C:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// beq cr6,0x823ad160
	if (cr6.eq) goto loc_823AD160;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823b1668
	sub_823B1668(ctx, base);
loc_823AD160:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823ad174
	if (!cr6.eq) goto loc_823AD174;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823AD174:
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// bne cr6,0x823ad198
	if (!cr6.eq) goto loc_823AD198;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x823ad19c
	if (!cr6.eq) goto loc_823AD19C;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823ad19c
	if (!cr0.eq) goto loc_823AD19C;
	// b 0x823abfc8
	goto loc_823ABFC8;
loc_823AD198:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823AD19C:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823AD1A4"))) PPC_WEAK_FUNC(sub_823AD1A4);
PPC_FUNC_IMPL(__imp__sub_823AD1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD1A8"))) PPC_WEAK_FUNC(sub_823AD1A8);
PPC_FUNC_IMPL(__imp__sub_823AD1A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// andi. r10,r11,130
	ctx.r10.u64 = r11.u64 & 130;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823ad1fc
	if (!cr0.eq) goto loc_823AD1FC;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_823AD1E0:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_823AD1E8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_823AD1EC:
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x823ad374
	goto loc_823AD374;
loc_823AD1FC:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ad210
	if (cr0.eq) goto loc_823AD210;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x823ad1e0
	goto loc_823AD1E0;
loc_823AD210:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x823ad238
	if (cr0.eq) goto loc_823AD238;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq 0x823ad1ec
	if (cr0.eq) goto loc_823AD1EC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_823AD238:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// andi. r10,r11,268
	ctx.r10.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823ad294
	if (!cr0.eq) goto loc_823AD294;
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x823ad27c
	if (cr6.eq) goto loc_823AD27C;
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823ad28c
	if (!cr6.eq) goto loc_823AD28C;
loc_823AD27C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823ad294
	if (!cr0.eq) goto loc_823AD294;
loc_823AD28C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b18b0
	sub_823B18B0(ctx, base);
loc_823AD294:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// andi. r11,r11,264
	r11.u64 = r11.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ad34c
	if (cr0.eq) goto loc_823AD34C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf. r30,r4,r10
	r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// ble 0x823ad2dc
	if (!cr0.gt) goto loc_823AD2DC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823a02d0
	sub_823A02D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x823ad33c
	goto loc_823AD33C;
loc_823AD2DC:
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x823ad310
	if (cr6.eq) goto loc_823AD310;
	// cmpwi cr6,r29,-2
	cr6.compare<int32_t>(r29.s32, -2, xer);
	// beq cr6,0x823ad310
	if (cr6.eq) goto loc_823AD310;
	// srawi r10,r29,5
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x1F) != 0);
	ctx.r10.s64 = r29.s32 >> 5;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// clrlwi r10,r29,27
	ctx.r10.u64 = r29.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823ad318
	goto loc_823AD318;
loc_823AD310:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-22548
	r11.s64 = r11.s64 + -22548;
loc_823AD318:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ad33c
	if (cr0.eq) goto loc_823AD33C;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239fd50
	sub_8239FD50(ctx, base);
	// cmpdi cr6,r3,-1
	cr6.compare<int64_t>(ctx.r3.s64, -1, xer);
	// beq cr6,0x823ad1e8
	if (cr6.eq) goto loc_823AD1E8;
loc_823AD33C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// b 0x823ad364
	goto loc_823AD364;
loc_823AD34C:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,1
	r30.s64 = 1;
	// bl 0x823a02d0
	sub_823A02D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_823AD364:
	// cmpw cr6,r28,r30
	cr6.compare<int32_t>(r28.s32, r30.s32, xer);
	// bne cr6,0x823ad1e8
	if (!cr6.eq) goto loc_823AD1E8;
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_823AD374:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823AD37C"))) PPC_WEAK_FUNC(sub_823AD37C);
PPC_FUNC_IMPL(__imp__sub_823AD37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD380"))) PPC_WEAK_FUNC(sub_823AD380);
PPC_FUNC_IMPL(__imp__sub_823AD380) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ad3b0
	if (cr0.eq) goto loc_823AD3B0;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ad3f4
	if (cr6.eq) goto loc_823AD3F4;
loc_823AD3B0:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blt 0x823ad3dc
	if (cr0.lt) goto loc_823AD3DC;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// b 0x823ad3e4
	goto loc_823AD3E4;
loc_823AD3DC:
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// bl 0x823ad1a8
	sub_823AD1A8(ctx, base);
loc_823AD3E4:
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x823ad3f4
	if (!cr6.eq) goto loc_823AD3F4;
	// li r11,-1
	r11.s64 = -1;
	// b 0x823ad3fc
	goto loc_823AD3FC;
loc_823AD3F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823AD3FC:
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

__attribute__((alias("__imp__sub_823AD414"))) PPC_WEAK_FUNC(sub_823AD414);
PPC_FUNC_IMPL(__imp__sub_823AD414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AD418"))) PPC_WEAK_FUNC(sub_823AD418);
PPC_FUNC_IMPL(__imp__sub_823AD418) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ad4a0
	if (cr0.eq) goto loc_823AD4A0;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823ad4a0
	if (!cr6.eq) goto loc_823AD4A0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823ad4a8
	goto loc_823AD4A8;
loc_823AD45C:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lbz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// bl 0x823ad380
	sub_823AD380(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x823ad4a0
	if (!cr6.eq) goto loc_823AD4A0;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(r11.s32, 42, xer);
	// bne cr6,0x823ad4a8
	if (!cr6.eq) goto loc_823AD4A8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,63
	ctx.r3.s64 = 63;
	// bl 0x823ad380
	sub_823AD380(ctx, base);
loc_823AD4A0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bgt cr6,0x823ad45c
	if (cr6.gt) goto loc_823AD45C;
loc_823AD4A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823AD4B0"))) PPC_WEAK_FUNC(sub_823AD4B0);
PPC_FUNC_IMPL(__imp__sub_823AD4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	r27.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r27
	r25.u64 = r27.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// mr r16,r27
	r16.u64 = r27.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// bne cr6,0x823ad51c
	if (!cr6.eq) goto loc_823AD51C;
loc_823AD4EC:
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
	// b 0x823ae024
	goto loc_823AE024;
loc_823AD51C:
	// lwz r11,12(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ad5f0
	if (!cr0.eq) goto loc_823AD5F0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// addi r30,r11,14880
	r30.s64 = r11.s64 + 14880;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r29,r11,-22548
	r29.s64 = r11.s64 + -22548;
	// beq cr6,0x823ad584
	if (cr6.eq) goto loc_823AD584;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823ad584
	if (cr6.eq) goto loc_823AD584;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823ad588
	goto loc_823AD588;
loc_823AD584:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823AD588:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rlwinm. r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ad4ec
	if (!cr0.eq) goto loc_823AD4EC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ad5e0
	if (cr6.eq) goto loc_823AD5E0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823ad5e0
	if (cr6.eq) goto loc_823AD5E0;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// rlwinm r31,r11,2,0,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823ad5e4
	goto loc_823AD5E4;
loc_823AD5E0:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823AD5E4:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ad4ec
	if (!cr0.eq) goto loc_823AD4EC;
loc_823AD5F0:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x823ad4ec
	if (cr6.eq) goto loc_823AD4EC;
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x823adff0
	if (cr6.eq) goto loc_823ADFF0;
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// beq cr6,0x823adff0
	if (cr6.eq) goto loc_823ADFF0;
	// lbz r29,0(r19)
	r29.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// mr r24,r27
	r24.u64 = r27.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// mr r15,r27
	r15.u64 = r27.u64;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// extsb. r10,r29
	ctx.r10.s64 = r29.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823adfe8
	if (cr0.eq) goto loc_823ADFE8;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r20,112(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r28,112(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r14,-32249
	r14.s64 = -2113470464;
	// addi r22,r11,-21688
	r22.s64 = r11.s64 + -21688;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lis r17,-32249
	r17.s64 = -2113470464;
	// addi r21,r11,-23136
	r21.s64 = r11.s64 + -23136;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r18,r11,-26568
	r18.s64 = r11.s64 + -26568;
loc_823AD664:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x823adfe8
	if (cr6.lt) goto loc_823ADFE8;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// blt cr6,0x823ad690
	if (cr6.lt) goto loc_823AD690;
	// cmpwi cr6,r10,120
	cr6.compare<int32_t>(ctx.r10.s32, 120, xer);
	// bgt cr6,0x823ad690
	if (cr6.gt) goto loc_823AD690;
	// add r11,r10,r18
	r11.u64 = ctx.r10.u64 + r18.u64;
	// lbz r11,-32(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -32);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// b 0x823ad694
	goto loc_823AD694;
loc_823AD690:
	// li r11,0
	r11.s64 = 0;
loc_823AD694:
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbzx r11,r11,r18
	r11.u64 = PPC_LOAD_U8(r11.u32 + r18.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// srawi r11,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	r11.s64 = r11.s32 >> 4;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// bgt cr6,0x823adfd4
	if (cr6.gt) goto loc_823ADFD4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-26360
	r12.s64 = r12.s64 + -26360;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32197
	r12.s64 = -2110062592;
	// addi r12,r12,-10524
	r12.s64 = r12.s64 + -10524;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823AD8B0;
	case 1:
		goto loc_823AD6E4;
	case 2:
		goto loc_823AD704;
	case 3:
		goto loc_823AD754;
	case 4:
		goto loc_823AD7A0;
	case 5:
		goto loc_823AD7A8;
	case 6:
		goto loc_823AD7E0;
	case 7:
		goto loc_823AD900;
	default:
		__builtin_unreachable();
	}
loc_823AD6E4:
	// li r27,0
	r27.s64 = 0;
	// li r25,-1
	r25.s64 = -1;
	// mr r20,r27
	r20.u64 = r27.u64;
	// mr r16,r27
	r16.u64 = r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD704:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x823ad74c
	if (cr6.eq) goto loc_823AD74C;
	// cmpwi cr6,r10,35
	cr6.compare<int32_t>(ctx.r10.s32, 35, xer);
	// beq cr6,0x823ad744
	if (cr6.eq) goto loc_823AD744;
	// cmpwi cr6,r10,43
	cr6.compare<int32_t>(ctx.r10.s32, 43, xer);
	// beq cr6,0x823ad73c
	if (cr6.eq) goto loc_823AD73C;
	// cmpwi cr6,r10,45
	cr6.compare<int32_t>(ctx.r10.s32, 45, xer);
	// beq cr6,0x823ad734
	if (cr6.eq) goto loc_823AD734;
	// cmpwi cr6,r10,48
	cr6.compare<int32_t>(ctx.r10.s32, 48, xer);
	// bne cr6,0x823adfd4
	if (!cr6.eq) goto loc_823ADFD4;
	// ori r27,r27,8
	r27.u64 = r27.u64 | 8;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD734:
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD73C:
	// ori r27,r27,1
	r27.u64 = r27.u64 | 1;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD744:
	// ori r27,r27,128
	r27.u64 = r27.u64 | 128;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD74C:
	// ori r27,r27,2
	r27.u64 = r27.u64 | 2;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD754:
	// cmpwi cr6,r10,42
	cr6.compare<int32_t>(ctx.r10.s32, 42, xer);
	// bne cr6,0x823ad788
	if (!cr6.eq) goto loc_823AD788;
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r11,-4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bge 0x823adfd4
	if (!cr0.lt) goto loc_823ADFD4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// ori r27,r27,4
	r27.u64 = r27.u64 | 4;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// b 0x823ad798
	goto loc_823AD798;
loc_823AD788:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,10
	r11.s64 = r11.s64 * 10;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
loc_823AD798:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD7A0:
	// li r25,0
	r25.s64 = 0;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD7A8:
	// cmpwi cr6,r10,42
	cr6.compare<int32_t>(ctx.r10.s32, 42, xer);
	// bne cr6,0x823ad7d0
	if (!cr6.eq) goto loc_823AD7D0;
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r25,-4(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// cmpwi r25,0
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// bge 0x823adfd4
	if (!cr0.lt) goto loc_823ADFD4;
	// li r25,-1
	r25.s64 = -1;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD7D0:
	// mulli r11,r25,10
	r11.s64 = r25.s64 * 10;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r25,r11,-48
	r25.s64 = r11.s64 + -48;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD7E0:
	// cmpwi cr6,r10,73
	cr6.compare<int32_t>(ctx.r10.s32, 73, xer);
	// beq cr6,0x823ad830
	if (cr6.eq) goto loc_823AD830;
	// cmpwi cr6,r10,104
	cr6.compare<int32_t>(ctx.r10.s32, 104, xer);
	// beq cr6,0x823ad828
	if (cr6.eq) goto loc_823AD828;
	// cmpwi cr6,r10,108
	cr6.compare<int32_t>(ctx.r10.s32, 108, xer);
	// beq cr6,0x823ad808
	if (cr6.eq) goto loc_823AD808;
	// cmpwi cr6,r10,119
	cr6.compare<int32_t>(ctx.r10.s32, 119, xer);
	// bne cr6,0x823adfd4
	if (!cr6.eq) goto loc_823ADFD4;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD808:
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// cmplwi cr6,r11,108
	cr6.compare<uint32_t>(r11.u32, 108, xer);
	// bne cr6,0x823ad820
	if (!cr6.eq) goto loc_823AD820;
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// ori r27,r27,4096
	r27.u64 = r27.u64 | 4096;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD820:
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD828:
	// ori r27,r27,32
	r27.u64 = r27.u64 | 32;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD830:
	// lbz r11,0(r19)
	r11.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,54
	cr6.compare<int32_t>(r11.s32, 54, xer);
	// bne cr6,0x823ad858
	if (!cr6.eq) goto loc_823AD858;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r10,52
	cr6.compare<uint32_t>(ctx.r10.u32, 52, xer);
	// bne cr6,0x823ad858
	if (!cr6.eq) goto loc_823AD858;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// ori r27,r27,32768
	r27.u64 = r27.u64 | 32768;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD858:
	// cmpwi cr6,r11,51
	cr6.compare<int32_t>(r11.s32, 51, xer);
	// bne cr6,0x823ad878
	if (!cr6.eq) goto loc_823AD878;
	// lbz r10,1(r19)
	ctx.r10.u64 = PPC_LOAD_U8(r19.u32 + 1);
	// cmplwi cr6,r10,50
	cr6.compare<uint32_t>(ctx.r10.u32, 50, xer);
	// bne cr6,0x823ad878
	if (!cr6.eq) goto loc_823AD878;
	// addi r19,r19,2
	r19.s64 = r19.s64 + 2;
	// rlwinm r27,r27,0,17,15
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD878:
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// beq cr6,0x823adfd4
	if (cr6.eq) goto loc_823ADFD4;
	// cmpwi cr6,r11,105
	cr6.compare<int32_t>(r11.s32, 105, xer);
	// beq cr6,0x823adfd4
	if (cr6.eq) goto loc_823ADFD4;
	// cmpwi cr6,r11,111
	cr6.compare<int32_t>(r11.s32, 111, xer);
	// beq cr6,0x823adfd4
	if (cr6.eq) goto loc_823ADFD4;
	// cmpwi cr6,r11,117
	cr6.compare<int32_t>(r11.s32, 117, xer);
	// beq cr6,0x823adfd4
	if (cr6.eq) goto loc_823ADFD4;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// beq cr6,0x823adfd4
	if (cr6.eq) goto loc_823ADFD4;
	// cmpwi cr6,r11,88
	cr6.compare<int32_t>(r11.s32, 88, xer);
	// beq cr6,0x823adfd4
	if (cr6.eq) goto loc_823ADFD4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
loc_823AD8B0:
	// clrlwi r3,r29,24
	ctx.r3.u64 = r29.u32 & 0xFF;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r16,0
	r16.s64 = 0;
	// bl 0x823b1890
	sub_823B1890(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad8e8
	if (cr0.eq) goto loc_823AD8E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ad380
	sub_823AD380(ctx, base);
	// lbz r29,0(r19)
	r29.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x823ad4ec
	if (cr0.eq) goto loc_823AD4EC;
loc_823AD8E8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823ad380
	sub_823AD380(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823adfd4
	goto loc_823ADFD4;
loc_823AD900:
	// addi r11,r10,-65
	r11.s64 = ctx.r10.s64 + -65;
	// cmplwi cr6,r11,55
	cr6.compare<uint32_t>(r11.u32, 55, xer);
	// bgt cr6,0x823ade00
	if (cr6.gt) goto loc_823ADE00;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-26472
	r12.s64 = r12.s64 + -26472;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32197
	r12.s64 = -2110062592;
	// addi r12,r12,-9932
	r12.s64 = r12.s64 + -9932;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823ADB10;
	case 1:
		goto loc_823ADE00;
	case 2:
		goto loc_823AD934;
	case 3:
		goto loc_823ADE00;
	case 4:
		goto loc_823ADB10;
	case 5:
		goto loc_823ADE00;
	case 6:
		goto loc_823ADB10;
	case 7:
		goto loc_823ADE00;
	case 8:
		goto loc_823ADE00;
	case 9:
		goto loc_823ADE00;
	case 10:
		goto loc_823ADE00;
	case 11:
		goto loc_823ADE00;
	case 12:
		goto loc_823ADE00;
	case 13:
		goto loc_823ADE00;
	case 14:
		goto loc_823ADE00;
	case 15:
		goto loc_823ADE00;
	case 16:
		goto loc_823ADE00;
	case 17:
		goto loc_823ADE00;
	case 18:
		goto loc_823ADA1C;
	case 19:
		goto loc_823ADE00;
	case 20:
		goto loc_823ADE00;
	case 21:
		goto loc_823ADE00;
	case 22:
		goto loc_823ADE00;
	case 23:
		goto loc_823ADC50;
	case 24:
		goto loc_823ADE00;
	case 25:
		goto loc_823AD9A0;
	case 26:
		goto loc_823ADE00;
	case 27:
		goto loc_823ADE00;
	case 28:
		goto loc_823ADE00;
	case 29:
		goto loc_823ADE00;
	case 30:
		goto loc_823ADE00;
	case 31:
		goto loc_823ADE00;
	case 32:
		goto loc_823ADB1C;
	case 33:
		goto loc_823ADE00;
	case 34:
		goto loc_823AD944;
	case 35:
		goto loc_823ADC40;
	case 36:
		goto loc_823ADB1C;
	case 37:
		goto loc_823ADB1C;
	case 38:
		goto loc_823ADB1C;
	case 39:
		goto loc_823ADE00;
	case 40:
		goto loc_823ADC40;
	case 41:
		goto loc_823ADE00;
	case 42:
		goto loc_823ADE00;
	case 43:
		goto loc_823ADE00;
	case 44:
		goto loc_823ADE00;
	case 45:
		goto loc_823ADAD4;
	case 46:
		goto loc_823ADC88;
	case 47:
		goto loc_823ADC4C;
	case 48:
		goto loc_823ADE00;
	case 49:
		goto loc_823ADE00;
	case 50:
		goto loc_823ADA2C;
	case 51:
		goto loc_823ADE00;
	case 52:
		goto loc_823ADC44;
	case 53:
		goto loc_823ADE00;
	case 54:
		goto loc_823ADE00;
	case 55:
		goto loc_823ADC58;
	default:
		__builtin_unreachable();
	}
loc_823AD934:
	// andi. r11,r27,2096
	r11.u64 = r27.u64 & 2096;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ad944
	if (!cr0.eq) goto loc_823AD944;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_823AD944:
	// andi. r11,r27,2064
	r11.u64 = r27.u64 & 2064;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// beq 0x823ad984
	if (cr0.eq) goto loc_823AD984;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,-2(r26)
	ctx.r6.u64 = PPC_LOAD_U16(r26.u32 + -2);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x823b1a68
	sub_823B1A68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad994
	if (cr0.eq) goto loc_823AD994;
	// li r11,1
	r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// b 0x823ad994
	goto loc_823AD994;
loc_823AD984:
	// lwz r11,-4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, r11.u8);
loc_823AD994:
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// b 0x823ade00
	goto loc_823ADE00;
loc_823AD9A0:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r11,-4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823ad9f0
	if (cr0.eq) goto loc_823AD9F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823ad9f0
	if (cr0.eq) goto loc_823AD9F0;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// beq 0x823ad9e4
	if (cr0.eq) goto loc_823AD9E4;
	// lha r11,0(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// li r16,1
	r16.s64 = 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r8,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r8.s64 = temp.s64;
	// b 0x823addfc
	goto loc_823ADDFC;
loc_823AD9E4:
	// lha r8,0(r11)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// li r16,0
	r16.s64 = 0;
	// b 0x823addfc
	goto loc_823ADDFC;
loc_823AD9F0:
	// lwz r28,-26580(r17)
	r28.u64 = PPC_LOAD_U32(r17.u32 + -26580);
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823AD9FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823ad9fc
	if (!cr6.eq) goto loc_823AD9FC;
loc_823ADA0C:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r8,r11,0
	ctx.r8.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x823addfc
	goto loc_823ADDFC;
loc_823ADA1C:
	// andi. r11,r27,2096
	r11.u64 = r27.u64 & 2096;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ada2c
	if (!cr0.eq) goto loc_823ADA2C;
	// ori r27,r27,2048
	r27.u64 = r27.u64 | 2048;
loc_823ADA2C:
	// cmpwi cr6,r25,-1
	cr6.compare<int32_t>(r25.s32, -1, xer);
	// bne cr6,0x823ada40
	if (!cr6.eq) goto loc_823ADA40;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x823ada44
	goto loc_823ADA44;
loc_823ADA40:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_823ADA44:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// andi. r9,r27,2064
	ctx.r9.u64 = r27.u64 & 2064;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r28,-4(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x823adaa0
	if (cr0.eq) goto loc_823ADAA0;
	// bne cr6,0x823ada6c
	if (!cr6.eq) goto loc_823ADA6C;
	// lwz r28,-26576(r14)
	r28.u64 = PPC_LOAD_U32(r14.u32 + -26576);
loc_823ADA6C:
	// li r16,1
	r16.s64 = 1;
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x823ada8c
	goto loc_823ADA8C;
loc_823ADA78:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x823ada94
	if (cr0.eq) goto loc_823ADA94;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
loc_823ADA8C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823ada78
	if (!cr6.eq) goto loc_823ADA78;
loc_823ADA94:
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// srawi r8,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r8.s64 = r11.s32 >> 1;
	// b 0x823addfc
	goto loc_823ADDFC;
loc_823ADAA0:
	// bne cr6,0x823adaa8
	if (!cr6.eq) goto loc_823ADAA8;
	// lwz r28,-26580(r17)
	r28.u64 = PPC_LOAD_U32(r17.u32 + -26580);
loc_823ADAA8:
	// mr r11,r28
	r11.u64 = r28.u64;
	// b 0x823adac4
	goto loc_823ADAC4;
loc_823ADAB0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823adacc
	if (cr6.eq) goto loc_823ADACC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823ADAC4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823adab0
	if (!cr6.eq) goto loc_823ADAB0;
loc_823ADACC:
	// subf r8,r28,r11
	ctx.r8.s64 = r11.s64 - r28.s64;
	// b 0x823addfc
	goto loc_823ADDFC;
loc_823ADAD4:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r31,-4(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// bl 0x8239f590
	sub_8239F590(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ad4ec
	if (cr0.eq) goto loc_823AD4EC;
	// rlwinm. r11,r27,0,26,26
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823adb00
	if (cr0.eq) goto loc_823ADB00;
	// sth r24,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r24.u16);
	// b 0x823adb04
	goto loc_823ADB04;
loc_823ADB00:
	// stw r24,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r24.u32);
loc_823ADB04:
	// li r11,1
	r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// b 0x823adfc0
	goto loc_823ADFC0;
loc_823ADB10:
	// addi r11,r10,32
	r11.s64 = ctx.r10.s64 + 32;
	// li r20,1
	r20.s64 = 1;
	// extsb r29,r11
	r29.s64 = r11.s8;
loc_823ADB1C:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
	// addi r28,r1,144
	r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	r30.s64 = 512;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x823adb38
	if (!cr6.lt) goto loc_823ADB38;
	// li r25,6
	r25.s64 = 6;
	// b 0x823adb88
	goto loc_823ADB88;
loc_823ADB38:
	// bne cr6,0x823adb50
	if (!cr6.eq) goto loc_823ADB50;
	// extsb r11,r29
	r11.s64 = r29.s8;
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(r11.s32, 103, xer);
	// bne cr6,0x823adb88
	if (!cr6.eq) goto loc_823ADB88;
	// li r25,1
	r25.s64 = 1;
	// b 0x823adb88
	goto loc_823ADB88;
loc_823ADB50:
	// cmpwi cr6,r25,512
	cr6.compare<int32_t>(r25.s32, 512, xer);
	// ble cr6,0x823adb5c
	if (!cr6.gt) goto loc_823ADB5C;
	// li r25,512
	r25.s64 = 512;
loc_823ADB5C:
	// cmpwi cr6,r25,163
	cr6.compare<int32_t>(r25.s32, 163, xer);
	// ble cr6,0x823adb88
	if (!cr6.gt) goto loc_823ADB88;
	// addi r31,r25,349
	r31.s64 = r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// beq 0x823adb84
	if (cr0.eq) goto loc_823ADB84;
	// mr r28,r15
	r28.u64 = r15.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// b 0x823adb88
	goto loc_823ADB88;
loc_823ADB84:
	// li r25,163
	r25.s64 = 163;
loc_823ADB88:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// extsb r31,r29
	r31.s64 = r29.s8;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r11,24(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 24);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// ld r10,-8(r26)
	ctx.r10.u64 = PPC_LOAD_U64(r26.u32 + -8);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm. r30,r27,0,24,24
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823adbec
	if (cr0.eq) goto loc_823ADBEC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x823adbec
	if (!cr6.eq) goto loc_823ADBEC;
	// lwz r11,36(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 36);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823ADBEC:
	// cmpwi cr6,r31,103
	cr6.compare<int32_t>(r31.s32, 103, xer);
	// bne cr6,0x823adc10
	if (!cr6.eq) goto loc_823ADC10;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x823adc10
	if (!cr6.eq) goto loc_823ADC10;
	// lwz r11,32(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823ADC10:
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,45
	cr6.compare<uint32_t>(r11.u32, 45, xer);
	// bne cr6,0x823adc24
	if (!cr6.eq) goto loc_823ADC24;
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_823ADC24:
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823ADC2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823adc2c
	if (!cr6.eq) goto loc_823ADC2C;
	// b 0x823ada0c
	goto loc_823ADA0C;
loc_823ADC40:
	// ori r27,r27,64
	r27.u64 = r27.u64 | 64;
loc_823ADC44:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x823adc98
	goto loc_823ADC98;
loc_823ADC4C:
	// li r25,8
	r25.s64 = 8;
loc_823ADC50:
	// li r11,7
	r11.s64 = 7;
	// b 0x823adc5c
	goto loc_823ADC5C;
loc_823ADC58:
	// li r11,39
	r11.s64 = 39;
loc_823ADC5C:
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x823adc98
	if (cr0.eq) goto loc_823ADC98;
	// addi r11,r11,81
	r11.s64 = r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r11.u8);
	// li r11,2
	r11.s64 = 2;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// b 0x823adc98
	goto loc_823ADC98;
loc_823ADC88:
	// rlwinm. r11,r27,0,24,24
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x823adc98
	if (cr0.eq) goto loc_823ADC98;
	// ori r27,r27,512
	r27.u64 = r27.u64 | 512;
loc_823ADC98:
	// rlwinm. r11,r27,0,16,16
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823adca8
	if (!cr0.eq) goto loc_823ADCA8;
	// rlwinm. r11,r27,0,19,19
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823adcbc
	if (cr0.eq) goto loc_823ADCBC;
loc_823ADCA8:
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// ld r11,-8(r26)
	r11.u64 = PPC_LOAD_U64(r26.u32 + -8);
	// b 0x823add0c
	goto loc_823ADD0C;
loc_823ADCBC:
	// rlwinm. r11,r27,0,26,26
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823adcec
	if (cr0.eq) goto loc_823ADCEC;
	// rlwinm. r11,r27,0,25,25
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// lwz r11,-4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// beq 0x823adce4
	if (cr0.eq) goto loc_823ADCE4;
	// extsh r11,r11
	r11.s64 = r11.s16;
	// b 0x823add0c
	goto loc_823ADD0C;
loc_823ADCE4:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x823add0c
	goto loc_823ADD0C;
loc_823ADCEC:
	// rlwinm. r11,r27,0,25,25
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r26,7
	r11.s64 = r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	r26.s64 = r11.s64 + 8;
	// beq 0x823add08
	if (cr0.eq) goto loc_823ADD08;
	// lwa r11,-4(r26)
	r11.s64 = int32_t(PPC_LOAD_U32(r26.u32 + -4));
	// b 0x823add0c
	goto loc_823ADD0C;
loc_823ADD08:
	// lwz r11,-4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -4);
loc_823ADD0C:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823add24
	if (cr0.eq) goto loc_823ADD24;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// bge cr6,0x823add24
	if (!cr6.lt) goto loc_823ADD24;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// ori r27,r27,256
	r27.u64 = r27.u64 | 256;
loc_823ADD24:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823add38
	if (!cr0.eq) goto loc_823ADD38;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823add38
	if (!cr0.eq) goto loc_823ADD38;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
loc_823ADD38:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bge cr6,0x823add48
	if (!cr6.lt) goto loc_823ADD48;
	// li r25,1
	r25.s64 = 1;
	// b 0x823add58
	goto loc_823ADD58;
loc_823ADD48:
	// rlwinm r27,r27,0,29,27
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	cr6.compare<int32_t>(r25.s32, 512, xer);
	// ble cr6,0x823add58
	if (!cr6.gt) goto loc_823ADD58;
	// li r25,512
	r25.s64 = 512;
loc_823ADD58:
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// bne cr6,0x823add68
	if (!cr6.eq) goto loc_823ADD68;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_823ADD68:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_823ADD6C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
	// bgt cr6,0x823add80
	if (cr6.gt) goto loc_823ADD80;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823addc0
	if (cr6.eq) goto loc_823ADDC0;
loc_823ADD80:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// divdu r11,r11,r10
	r11.u64 = r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	cr6.compare<int32_t>(ctx.r10.s32, 57, xer);
	// ble cr6,0x823addb4
	if (!cr6.gt) goto loc_823ADDB4;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_823ADDB4:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x823add6c
	goto loc_823ADD6C;
loc_823ADDC0:
	// addi r11,r1,655
	r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r8,r9,r11
	ctx.r8.s64 = r11.s64 - ctx.r9.s64;
	// addi r28,r9,1
	r28.s64 = ctx.r9.s64 + 1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// beq 0x823ade00
	if (cr0.eq) goto loc_823ADE00;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823addec
	if (cr6.eq) goto loc_823ADDEC;
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// beq cr6,0x823ade00
	if (cr6.eq) goto loc_823ADE00;
loc_823ADDEC:
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// li r11,48
	r11.s64 = 48;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,0(r28)
	PPC_STORE_U8(r28.u32 + 0, r11.u8);
loc_823ADDFC:
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
loc_823ADE00:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823adfc0
	if (!cr6.eq) goto loc_823ADFC0;
	// rlwinm. r11,r27,0,25,25
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ade50
	if (cr0.eq) goto loc_823ADE50;
	// rlwinm. r11,r27,0,23,23
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ade24
	if (cr0.eq) goto loc_823ADE24;
	// li r11,45
	r11.s64 = 45;
	// b 0x823ade30
	goto loc_823ADE30;
loc_823ADE24:
	// clrlwi. r11,r27,31
	r11.u64 = r27.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ade40
	if (cr0.eq) goto loc_823ADE40;
	// li r11,43
	r11.s64 = 43;
loc_823ADE30:
	// li r30,1
	r30.s64 = 1;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// b 0x823ade54
	goto loc_823ADE54;
loc_823ADE40:
	// rlwinm. r11,r27,0,30,30
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ade50
	if (cr0.eq) goto loc_823ADE50;
	// li r11,32
	r11.s64 = 32;
	// b 0x823ade30
	goto loc_823ADE30;
loc_823ADE50:
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_823ADE54:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// subf r29,r30,r11
	r29.s64 = r11.s64 - r30.s64;
	// bne 0x823ade9c
	if (!cr0.eq) goto loc_823ADE9C;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823ade9c
	if (!cr6.gt) goto loc_823ADE9C;
loc_823ADE74:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x823ad380
	sub_823AD380(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x823ade9c
	if (cr6.eq) goto loc_823ADE9C;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x823ade74
	if (cr6.gt) goto loc_823ADE74;
loc_823ADE9C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823ad418
	sub_823AD418(ctx, base);
	// rlwinm. r11,r27,0,28,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823adef4
	if (cr0.eq) goto loc_823ADEF4;
	// rlwinm. r11,r27,0,29,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823adef4
	if (!cr0.eq) goto loc_823ADEF4;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823adef4
	if (!cr6.gt) goto loc_823ADEF4;
loc_823ADECC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x823ad380
	sub_823AD380(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x823adef4
	if (cr6.eq) goto loc_823ADEF4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x823adecc
	if (cr6.gt) goto loc_823ADECC;
loc_823ADEF4:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x823adf68
	if (cr6.eq) goto loc_823ADF68;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x823adf68
	if (!cr6.gt) goto loc_823ADF68;
	// mr r30,r28
	r30.u64 = r28.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_823ADF10:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// bl 0x823b1a68
	sub_823B1A68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823adf5c
	if (!cr0.eq) goto loc_823ADF5C;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x823adf5c
	if (cr6.eq) goto loc_823ADF5C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x823ad418
	sub_823AD418(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x823adf10
	if (!cr6.eq) goto loc_823ADF10;
	// b 0x823adf78
	goto loc_823ADF78;
loc_823ADF5C:
	// li r24,-1
	r24.s64 = -1;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// b 0x823adf7c
	goto loc_823ADF7C;
loc_823ADF68:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823ad418
	sub_823AD418(ctx, base);
loc_823ADF78:
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823ADF7C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// blt cr6,0x823adfc0
	if (cr6.lt) goto loc_823ADFC0;
	// rlwinm. r11,r27,0,29,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823adfc0
	if (cr0.eq) goto loc_823ADFC0;
	// mr r31,r29
	r31.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823adfc0
	if (!cr6.gt) goto loc_823ADFC0;
loc_823ADF98:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// bl 0x823ad380
	sub_823AD380(ctx, base);
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,-1
	cr6.compare<int32_t>(r24.s32, -1, xer);
	// beq cr6,0x823adfc0
	if (cr6.eq) goto loc_823ADFC0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bgt cr6,0x823adf98
	if (cr6.gt) goto loc_823ADF98;
loc_823ADFC0:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// beq cr6,0x823adfd4
	if (cr6.eq) goto loc_823ADFD4;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// li r15,0
	r15.s64 = 0;
loc_823ADFD4:
	// lbz r29,0(r19)
	r29.u64 = PPC_LOAD_U8(r19.u32 + 0);
	// extsb. r10,r29
	ctx.r10.s64 = r29.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823adfe8
	if (cr0.eq) goto loc_823ADFE8;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x823ad664
	goto loc_823AD664;
loc_823ADFE8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// b 0x823ae024
	goto loc_823AE024;
loc_823ADFF0:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x8239f070
	sub_8239F070(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,-1
	cr6.compare<int32_t>(r31.s32, -1, xer);
	// bne cr6,0x823ae018
	if (!cr6.eq) goto loc_823AE018;
	// li r31,511
	r31.s64 = 511;
	// stb r27,1167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1167, r27.u8);
loc_823AE018:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x823b54a0
	sub_823B54A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823AE024:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823AE02C"))) PPC_WEAK_FUNC(sub_823AE02C);
PPC_FUNC_IMPL(__imp__sub_823AE02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AE030"))) PPC_WEAK_FUNC(sub_823AE030);
PPC_FUNC_IMPL(__imp__sub_823AE030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// stfd f2,24(r1)
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lfd f0,-31368(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31368);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lwz r11,16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwimi r10,r11,0,1,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x7FFFFFFF) | (ctx.r10.u64 & 0xFFFFFFFF80000000);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE064"))) PPC_WEAK_FUNC(sub_823AE064);
PPC_FUNC_IMPL(__imp__sub_823AE064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AE068"))) PPC_WEAK_FUNC(sub_823AE068);
PPC_FUNC_IMPL(__imp__sub_823AE068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfd f0,-31368(r10)
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31368);
	// lwz r11,16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// not r9,r11
	ctx.r9.u64 = ~r11.u64;
	// rlwimi r9,r11,0,1,31
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x7FFFFFFF) | (ctx.r9.u64 & 0xFFFFFFFF80000000);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stw r10,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r10.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE098"))) PPC_WEAK_FUNC(sub_823AE098);
PPC_FUNC_IMPL(__imp__sub_823AE098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// addi r11,r11,-32752
	r11.s64 = r11.s64 + -32752;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE0B8"))) PPC_WEAK_FUNC(sub_823AE0B8);
PPC_FUNC_IMPL(__imp__sub_823AE0B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	cr6.compare<uint32_t>(r11.u32, 32752, xer);
	// bne cr6,0x823ae0e4
	if (!cr6.eq) goto loc_823AE0E4;
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823ae0ec
	if (!cr0.eq) goto loc_823AE0EC;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ae0ec
	if (!cr6.eq) goto loc_823AE0EC;
loc_823AE0E4:
	// cmplwi cr6,r11,32760
	cr6.compare<uint32_t>(r11.u32, 32760, xer);
	// bne cr6,0x823ae0f4
	if (!cr6.eq) goto loc_823AE0F4;
loc_823AE0EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823AE0F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE0FC"))) PPC_WEAK_FUNC(sub_823AE0FC);
PPC_FUNC_IMPL(__imp__sub_823AE0FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AE100"))) PPC_WEAK_FUNC(sub_823AE100);
PPC_FUNC_IMPL(__imp__sub_823AE100) {
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
	// stfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	cr6.compare<uint32_t>(ctx.r10.u32, 32752, xer);
	// bne cr6,0x823ae158
	if (!cr6.eq) goto loc_823AE158;
	// bl 0x823abd50
	sub_823ABD50(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x823ae150
	if (cr6.eq) goto loc_823AE150;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x823ae148
	if (cr6.eq) goto loc_823AE148;
	// addi r11,r3,-3
	r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// b 0x823ae1c4
	goto loc_823AE1C4;
loc_823AE148:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x823ae1c4
	goto loc_823AE1C4;
loc_823AE150:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x823ae1c4
	goto loc_823AE1C4;
loc_823AE158:
	// rlwinm r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823ae194
	if (!cr6.eq) goto loc_823AE194;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823ae17c
	if (!cr0.eq) goto loc_823AE17C;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823ae194
	if (cr6.eq) goto loc_823AE194;
loc_823AE17C:
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// b 0x823ae1c4
	goto loc_823AE1C4;
loc_823AE194:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lfd f0,-31368(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -31368);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x823ae1b8
	if (!cr6.eq) goto loc_823AE1B8;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// b 0x823ae1c4
	goto loc_823AE1C4;
loc_823AE1B8:
	// rlwinm r11,r11,0,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// addi r3,r11,256
	ctx.r3.s64 = r11.s64 + 256;
loc_823AE1C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE1D4"))) PPC_WEAK_FUNC(sub_823AE1D4);
PPC_FUNC_IMPL(__imp__sub_823AE1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AE1D8"))) PPC_WEAK_FUNC(sub_823AE1D8);
PPC_FUNC_IMPL(__imp__sub_823AE1D8) {
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
	// bne cr6,0x823ae21c
	if (!cr6.eq) goto loc_823AE21C;
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
	// b 0x823ae220
	goto loc_823AE220;
loc_823AE21C:
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
loc_823AE220:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE230"))) PPC_WEAK_FUNC(sub_823AE230);
PPC_FUNC_IMPL(__imp__sub_823AE230) {
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
	// li r28,0
	r28.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// clrlwi r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// bne cr6,0x823ae2a8
	if (!cr6.eq) goto loc_823AE2A8;
	// andi. r11,r11,264
	r11.u64 = r11.u64 & 264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ae2a8
	if (cr0.eq) goto loc_823AE2A8;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf. r30,r29,r11
	r30.s64 = r11.s64 - r29.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x823ae2a8
	if (!cr0.gt) goto loc_823AE2A8;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823a02d0
	sub_823A02D0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// bne cr6,0x823ae29c
	if (!cr6.eq) goto loc_823AE29C;
	// rlwinm. r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ae2a8
	if (cr0.eq) goto loc_823AE2A8;
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// b 0x823ae2a4
	goto loc_823AE2A4;
loc_823AE29C:
	// li r28,-1
	r28.s64 = -1;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_823AE2A4:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_823AE2A8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823AE2C4"))) PPC_WEAK_FUNC(sub_823AE2C4);
PPC_FUNC_IMPL(__imp__sub_823AE2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AE2C8"))) PPC_WEAK_FUNC(sub_823AE2C8);
PPC_FUNC_IMPL(__imp__sub_823AE2C8) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823ae2ec
	if (!cr6.eq) goto loc_823AE2EC;
	// bl 0x823ae348
	sub_823AE348(ctx, base);
	// b 0x823ae32c
	goto loc_823AE32C;
loc_823AE2EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae230
	sub_823AE230(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ae304
	if (cr0.eq) goto loc_823AE304;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823ae32c
	goto loc_823AE32C;
loc_823AE304:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,17,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ae328
	if (cr0.eq) goto loc_823AE328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// bl 0x823b27c0
	sub_823B27C0(ctx, base);
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// b 0x823ae32c
	goto loc_823AE32C;
loc_823AE328:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AE32C:
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

__attribute__((alias("__imp__sub_823AE340"))) PPC_WEAK_FUNC(sub_823AE340);
PPC_FUNC_IMPL(__imp__sub_823AE340) {
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
	// lwz r16,-14456(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14456);
	// mflr r12
	// bl 0x8239bcf4
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
	// li r3,1
	ctx.r3.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,15140
	r29.s64 = r11.s64 + 15140;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r10,r11,15144
	ctx.r10.s64 = r11.s64 + 15144;
loc_823AE388:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x823ae444
	if (!cr6.lt) goto loc_823AE444;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823ae438
	if (cr6.eq) goto loc_823AE438;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ae438
	if (cr0.eq) goto loc_823AE438;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a1030
	sub_823A1030(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ae42c
	if (cr0.eq) goto loc_823AE42C;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x823ae408
	if (!cr6.eq) goto loc_823AE408;
	// bl 0x823ae2c8
	sub_823AE2C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ae42c
	if (cr6.eq) goto loc_823AE42C;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x823ae42c
	goto loc_823AE42C;
loc_823AE408:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x823ae42c
	if (!cr6.eq) goto loc_823AE42C;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ae42c
	if (cr0.eq) goto loc_823AE42C;
	// bl 0x823ae2c8
	sub_823AE2C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x823ae42c
	if (!cr6.eq) goto loc_823AE42C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_823AE42C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x823ae4bc
	sub_823AE4BC(ctx, base);
loc_823AE438:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x823ae388
	goto loc_823AE388;
loc_823AE444:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x823ae46c
	sub_823AE46C(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// beq cr6,0x823ae464
	if (cr6.eq) goto loc_823AE464;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823AE464:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823AE348"))) PPC_WEAK_FUNC(sub_823AE348);
PPC_FUNC_IMPL(__imp__sub_823AE348) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r27,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r28,0
	r28.s64 = 0;
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,15140
	r29.s64 = r11.s64 + 15140;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r10,r11,15144
	ctx.r10.s64 = r11.s64 + 15144;
loc_823AE388:
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x823ae444
	if (!cr6.lt) goto loc_823AE444;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823ae438
	if (cr6.eq) goto loc_823AE438;
	// rotlwi r4,r9,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ae438
	if (cr0.eq) goto loc_823AE438;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823a1030
	sub_823A1030(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ae42c
	if (cr0.eq) goto loc_823AE42C;
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// bne cr6,0x823ae408
	if (!cr6.eq) goto loc_823AE408;
	// bl 0x823ae2c8
	sub_823AE2C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ae42c
	if (cr6.eq) goto loc_823AE42C;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// b 0x823ae42c
	goto loc_823AE42C;
loc_823AE408:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x823ae42c
	if (!cr6.eq) goto loc_823AE42C;
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ae42c
	if (cr0.eq) goto loc_823AE42C;
	// bl 0x823ae2c8
	sub_823AE2C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// bne cr6,0x823ae42c
	if (!cr6.eq) goto loc_823AE42C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_823AE42C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x823ae4bc
	sub_823AE4BC(ctx, base);
loc_823AE438:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x823ae388
	goto loc_823AE388;
loc_823AE444:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x823ae46c
	sub_823AE46C(ctx, base);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// beq cr6,0x823ae464
	if (cr6.eq) goto loc_823AE464;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_823AE464:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823AE46C"))) PPC_WEAK_FUNC(sub_823AE46C);
PPC_FUNC_IMPL(__imp__sub_823AE46C) {
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
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_823AE490"))) PPC_WEAK_FUNC(sub_823AE490);
PPC_FUNC_IMPL(__imp__sub_823AE490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,15140
	r29.s64 = r11.s64 + 15140;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// b 0x823ae4d8
	goto loc_823AE4D8;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_823AE4D8:
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x823a1080
	sub_823A1080(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,15140
	r29.s64 = r11.s64 + 15140;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r10,r11,15144
	ctx.r10.s64 = r11.s64 + 15144;
	// lwz r27,164(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE4BC"))) PPC_WEAK_FUNC(sub_823AE4BC);
PPC_FUNC_IMPL(__imp__sub_823AE4BC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r31,r12,-144
	r31.s64 = r12.s64 + -144;
	// std r29,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r29.u64);
	// std r28,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r28.u64);
	// mflr r12
	// stw r12,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x823a1080
	sub_823A1080(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,15140
	r29.s64 = r11.s64 + 15140;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r10,r11,15144
	ctx.r10.s64 = r11.s64 + 15144;
	// lwz r27,164(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r29,-16(r1)
	r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r28,-24(r1)
	r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lwz r12,-32(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE520"))) PPC_WEAK_FUNC(sub_823AE520);
PPC_FUNC_IMPL(__imp__sub_823AE520) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ae348
	sub_823AE348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AE528"))) PPC_WEAK_FUNC(sub_823AE528);
PPC_FUNC_IMPL(__imp__sub_823AE528) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ae57c
	if (cr0.eq) goto loc_823AE57C;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ae57c
	if (cr0.eq) goto loc_823AE57C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r10,r10,0,29,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// rlwinm r10,r10,0,22,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFBFF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_823AE57C:
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

__attribute__((alias("__imp__sub_823AE590"))) PPC_WEAK_FUNC(sub_823AE590);
PPC_FUNC_IMPL(__imp__sub_823AE590) {
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
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823ae5b8
	if (!cr0.eq) goto loc_823AE5B8;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823ae648
	goto loc_823AE648;
loc_823AE5B8:
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// li r10,32
	ctx.r10.s64 = 32;
	// lis r8,-32126
	ctx.r8.s64 = -2105409536;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r7,r3,1408
	ctx.r7.s64 = ctx.r3.s64 + 1408;
	// stw r10,14864(r9)
	PPC_STORE_U32(ctx.r9.u32 + 14864, ctx.r10.u32);
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,14880(r8)
	PPC_STORE_U32(ctx.r8.u32 + 14880, r11.u32);
	// bge cr6,0x823ae624
	if (!cr6.lt) goto loc_823AE624;
	// li r10,10
	ctx.r10.s64 = 10;
loc_823AE5E4:
	// addi r11,r3,40
	r11.s64 = ctx.r3.s64 + 40;
	// stb r9,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r9.u8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stb r10,41(r3)
	PPC_STORE_U8(ctx.r3.u32 + 41, ctx.r10.u8);
	// stb r10,42(r3)
	PPC_STORE_U8(ctx.r3.u32 + 42, ctx.r10.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// lwz r11,14880(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14880);
	// addi r7,r11,1408
	ctx.r7.s64 = r11.s64 + 1408;
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// blt cr6,0x823ae5e4
	if (cr6.lt) goto loc_823AE5E4;
	// b 0x823ae624
	goto loc_823AE624;
loc_823AE620:
	// lwz r11,14880(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 14880);
loc_823AE624:
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// li r10,-63
	ctx.r10.s64 = -63;
	// li r7,-2
	ctx.r7.s64 = -2;
	// addi r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 + 44;
	// cmpwi cr6,r9,132
	cr6.compare<int32_t>(ctx.r9.s32, 132, xer);
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// blt cr6,0x823ae620
	if (cr6.lt) goto loc_823AE620;
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AE648:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE658"))) PPC_WEAK_FUNC(sub_823AE658);
PPC_FUNC_IMPL(__imp__sub_823AE658) {
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
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r30,r11,14880
	r30.s64 = r11.s64 + 14880;
	// mr r31,r30
	r31.u64 = r30.u64;
loc_823AE678:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823ae690
	if (cr0.eq) goto loc_823AE690;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823AE690:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r11,r30,256
	r11.s64 = r30.s64 + 256;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x823ae678
	if (cr6.lt) goto loc_823AE678;
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

__attribute__((alias("__imp__sub_823AE6B8"))) PPC_WEAK_FUNC(sub_823AE6B8);
PPC_FUNC_IMPL(__imp__sub_823AE6B8) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AE6BC"))) PPC_WEAK_FUNC(sub_823AE6BC);
PPC_FUNC_IMPL(__imp__sub_823AE6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AE6C0"))) PPC_WEAK_FUNC(sub_823AE6C0);
PPC_FUNC_IMPL(__imp__sub_823AE6C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r31{};
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, r31.u64);
	// mflr r31
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x826e4bcc
	__imp__RtlUnwind(ctx, base);
	// mtlr r31
	// ld r31,8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AE6E8"))) PPC_WEAK_FUNC(sub_823AE6E8);
PPC_FUNC_IMPL(__imp__sub_823AE6E8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823ae72c
	if (!cr6.eq) goto loc_823AE72C;
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
	// b 0x823ae8a0
	goto loc_823AE8A0;
loc_823AE72C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// andi. r10,r11,131
	ctx.r10.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ae8a0
	if (cr0.eq) goto loc_823AE8A0;
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823ae8a0
	if (!cr0.eq) goto loc_823AE8A0;
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ae754
	if (cr0.eq) goto loc_823AE754;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// b 0x823ae89c
	goto loc_823AE89C;
loc_823AE754:
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// andi. r10,r11,268
	ctx.r10.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823ae774
	if (!cr0.eq) goto loc_823AE774;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823b18b0
	sub_823B18B0(ctx, base);
	// b 0x823ae77c
	goto loc_823AE77C;
loc_823AE774:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823AE77C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r29,24(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x823aee90
	sub_823AEE90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x823ae87c
	if (cr0.eq) goto loc_823AE87C;
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ae87c
	if (cr6.eq) goto loc_823AE87C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// andi. r11,r11,130
	r11.u64 = r11.u64 & 130;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ae834
	if (!cr0.eq) goto loc_823AE834;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823ae810
	if (cr6.eq) goto loc_823AE810;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// beq cr6,0x823ae810
	if (cr6.eq) goto loc_823AE810;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r30,r11,14880
	r30.s64 = r11.s64 + 14880;
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// clrlwi r11,r3,27
	r11.u64 = ctx.r3.u32 & 0x1F;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// mulli r11,r11,44
	r11.s64 = r11.s64 * 44;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823ae818
	goto loc_823AE818;
loc_823AE810:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-22548
	r11.s64 = r11.s64 + -22548;
loc_823AE818:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// andi. r11,r11,130
	r11.u64 = r11.u64 & 130;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r11,130
	cr6.compare<uint32_t>(r11.u32, 130, xer);
	// bne cr6,0x823ae834
	if (!cr6.eq) goto loc_823AE834;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_823AE834:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(r11.s32, 512, xer);
	// bne cr6,0x823ae85c
	if (!cr6.eq) goto loc_823AE85C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823ae85c
	if (cr0.eq) goto loc_823AE85C;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ae85c
	if (!cr0.eq) goto loc_823AE85C;
	// li r11,4096
	r11.s64 = 4096;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_823AE85C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823ae8a4
	goto loc_823AE8A4;
loc_823AE87C:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_823AE89C:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_823AE8A0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823AE8A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823AE8AC"))) PPC_WEAK_FUNC(sub_823AE8AC);
PPC_FUNC_IMPL(__imp__sub_823AE8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AE8B0"))) PPC_WEAK_FUNC(sub_823AE8B0);
PPC_FUNC_IMPL(__imp__sub_823AE8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// li r19,-2
	r19.s64 = -2;
	// mr r20,r31
	r20.u64 = r31.u64;
	// cmpwi cr6,r21,-2
	cr6.compare<int32_t>(r21.s32, -2, xer);
	// bne cr6,0x823ae8fc
	if (!cr6.eq) goto loc_823AE8FC;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_823AE8EC:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823aee7c
	goto loc_823AEE7C;
loc_823AE8FC:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// blt cr6,0x823ae914
	if (cr6.lt) goto loc_823AE914;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r21,r11
	cr6.compare<uint32_t>(r21.u32, r11.u32, xer);
	// blt cr6,0x823ae950
	if (cr6.lt) goto loc_823AE950;
loc_823AE914:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_823AE928:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
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
	// b 0x823aee7c
	goto loc_823AEE7C;
loc_823AE950:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// srawi r11,r21,5
	xer.ca = (r21.s32 < 0) & ((r21.u32 & 0x1F) != 0);
	r11.s64 = r21.s32 >> 5;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r21,27
	r11.u64 = r21.u32 & 0x1F;
	// mulli r28,r11,44
	r28.s64 = r11.s64 * 44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823ae914
	if (cr0.eq) goto loc_823AE914;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r30,r26
	r30.u64 = r26.u64;
	// beq cr6,0x823aee78
	if (cr6.eq) goto loc_823AEE78;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823aee78
	if (!cr0.eq) goto loc_823AEE78;
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// bne cr6,0x823ae9b4
	if (!cr6.eq) goto loc_823AE9B4;
loc_823AE9A0:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// stw r26,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r26.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r10,22
	ctx.r10.s64 = 22;
	// b 0x823ae928
	goto loc_823AE928;
loc_823AE9B4:
	// lbz r11,40(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// rotlwi r11,r11,24
	r11.u64 = __builtin_rotateleft32(r11.u32, 24);
	// srawi r11,r11,25
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFFFF) != 0);
	r11.s64 = r11.s32 >> 25;
	// extsb r22,r11
	r22.s64 = r11.s8;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// beq cr6,0x823aeb24
	if (cr6.eq) goto loc_823AEB24;
	// cmpwi cr6,r22,2
	cr6.compare<int32_t>(r22.s32, 2, xer);
	// bne cr6,0x823ae9e4
	if (!cr6.eq) goto loc_823AE9E4;
	// not r11,r31
	r11.u64 = ~r31.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ae9a0
	if (cr0.eq) goto loc_823AE9A0;
	// rlwinm r31,r31,0,0,30
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFE;
loc_823AE9E4:
	// mr r23,r18
	r23.u64 = r18.u64;
loc_823AE9E8:
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r24,10
	r24.s64 = 10;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// andi. r10,r10,72
	ctx.r10.u64 = ctx.r10.u64 & 72;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823aeab8
	if (cr0.eq) goto loc_823AEAB8;
	// lbz r11,5(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 5);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823aeab8
	if (cr6.eq) goto loc_823AEAB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823aeab8
	if (cr6.eq) goto loc_823AEAB8;
	// stb r11,0(r23)
	PPC_STORE_U8(r23.u32 + 0, r11.u8);
	// addi r4,r23,1
	ctx.r4.s64 = r23.s64 + 1;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// li r30,1
	r30.s64 = 1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stb r24,5(r11)
	PPC_STORE_U8(r11.u32 + 5, r24.u8);
	// beq cr6,0x823aeab8
	if (cr6.eq) goto loc_823AEAB8;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lbz r11,41(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 41);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823aeab8
	if (cr6.eq) goto loc_823AEAB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823aeab8
	if (cr6.eq) goto loc_823AEAB8;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// li r30,2
	r30.s64 = 2;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stb r24,41(r11)
	PPC_STORE_U8(r11.u32 + 41, r24.u8);
	// bne cr6,0x823aeab8
	if (!cr6.eq) goto loc_823AEAB8;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lbz r11,42(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 42);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823aeab8
	if (cr6.eq) goto loc_823AEAB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823aeab8
	if (cr6.eq) goto loc_823AEAB8;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// li r30,3
	r30.s64 = 3;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// stb r24,42(r11)
	PPC_STORE_U8(r11.u32 + 42, r24.u8);
loc_823AEAB8:
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x823b5eb0
	sub_823B5EB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823aee44
	if (cr0.eq) goto loc_823AEE44;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x823aee44
	if (cr6.lt) goto loc_823AEE44;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bgt cr6,0x823aee44
	if (cr6.gt) goto loc_823AEE44;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r30,r10,r30
	r30.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lbz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823aee18
	if (cr0.eq) goto loc_823AEE18;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823aeb68
	if (cr6.eq) goto loc_823AEB68;
	// lbz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U8(r23.u32 + 0);
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// bne cr6,0x823aeb68
	if (!cr6.eq) goto loc_823AEB68;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
	// b 0x823aeb74
	goto loc_823AEB74;
loc_823AEB24:
	// not r11,r31
	r11.u64 = ~r31.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ae9a0
	if (cr0.eq) goto loc_823AE9A0;
	// rlwinm r31,r31,31,1,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// bge cr6,0x823aeb40
	if (!cr6.lt) goto loc_823AEB40;
	// li r31,4
	r31.s64 = 4;
loc_823AEB40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// bne 0x823ae9e8
	if (!cr0.eq) goto loc_823AE9E8;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x823ae8ec
	goto loc_823AE8EC;
loc_823AEB68:
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_823AEB74:
	// add r25,r23,r30
	r25.u64 = r23.u64 + r30.u64;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// mr r31,r23
	r31.u64 = r23.u64;
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplw cr6,r23,r25
	cr6.compare<uint32_t>(r23.u32, r25.u32, xer);
	// bge cr6,0x823aecd4
	if (!cr6.lt) goto loc_823AECD4;
	// li r26,13
	r26.s64 = 13;
loc_823AEB90:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(r11.s32, 26, xer);
	// beq cr6,0x823aeca4
	if (cr6.eq) goto loc_823AECA4;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823aebb4
	if (cr6.eq) goto loc_823AEBB4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823AEBAC:
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// b 0x823aec94
	goto loc_823AEC94;
loc_823AEBB4:
	// addi r11,r25,-1
	r11.s64 = r25.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x823aebe4
	if (!cr6.lt) goto loc_823AEBE4;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x823aebdc
	if (!cr6.eq) goto loc_823AEBDC;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
loc_823AEBD4:
	// stb r24,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r24.u8);
	// b 0x823aec94
	goto loc_823AEC94;
loc_823AEBDC:
	// mr r30,r11
	r30.u64 = r11.u64;
	// b 0x823aebac
	goto loc_823AEBAC;
loc_823AEBE4:
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwzx r3,r28,r11
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// bl 0x823b5eb0
	sub_823B5EB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823aec18
	if (!cr0.eq) goto loc_823AEC18;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823aec90
	if (!cr0.eq) goto loc_823AEC90;
loc_823AEC18:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823aec90
	if (cr6.eq) goto loc_823AEC90;
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// andi. r11,r11,72
	r11.u64 = r11.u64 & 72;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aec60
	if (cr0.eq) goto loc_823AEC60;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823aebd4
	if (cr6.eq) goto loc_823AEBD4;
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// stb r10,5(r11)
	PPC_STORE_U8(r11.u32 + 5, ctx.r10.u8);
	// b 0x823aec94
	goto loc_823AEC94;
loc_823AEC60:
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(r31.u32, r23.u32, xer);
	// bne cr6,0x823aec74
	if (!cr6.eq) goto loc_823AEC74;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823aebd4
	if (cr6.eq) goto loc_823AEBD4;
loc_823AEC74:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8239fc80
	sub_8239FC80(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823aec98
	if (cr6.eq) goto loc_823AEC98;
loc_823AEC90:
	// stb r26,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r26.u8);
loc_823AEC94:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823AEC98:
	// cmplw cr6,r30,r25
	cr6.compare<uint32_t>(r30.u32, r25.u32, xer);
	// blt cr6,0x823aeb90
	if (cr6.lt) goto loc_823AEB90;
	// b 0x823aecd4
	goto loc_823AECD4;
loc_823AECA4:
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823aecc8
	if (!cr0.eq) goto loc_823AECC8;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// b 0x823aecd4
	goto loc_823AECD4;
loc_823AECC8:
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823AECD4:
	// subf r30,r23,r31
	r30.s64 = r31.s64 - r23.s64;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// bne cr6,0x823aee18
	if (!cr6.eq) goto loc_823AEE18;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823aee18
	if (cr6.eq) goto loc_823AEE18;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm. r11,r10,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823aed00
	if (!cr0.eq) goto loc_823AED00;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// b 0x823aede4
	goto loc_823AEDE4;
loc_823AED00:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,-22496
	r11.s64 = r11.s64 + -22496;
	// b 0x823aed2c
	goto loc_823AED2C;
loc_823AED10:
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// bgt cr6,0x823aed38
	if (cr6.gt) goto loc_823AED38;
	// cmplw cr6,r31,r23
	cr6.compare<uint32_t>(r31.u32, r23.u32, xer);
	// blt cr6,0x823aed38
	if (cr6.lt) goto loc_823AED38;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
loc_823AED2C:
	// lbzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823aed10
	if (cr6.eq) goto loc_823AED10;
loc_823AED38:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823aed5c
	if (!cr0.eq) goto loc_823AED5C;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,42
	r11.s64 = 42;
loc_823AED54:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823aee14
	goto loc_823AEE14;
loc_823AED5C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x823aed70
	if (!cr6.eq) goto loc_823AED70;
	// add r31,r8,r31
	r31.u64 = ctx.r8.u64 + r31.u64;
	// b 0x823aede4
	goto loc_823AEDE4;
loc_823AED70:
	// lwzx r11,r27,r29
	r11.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// add r10,r28,r11
	ctx.r10.u64 = r28.u64 + r11.u64;
	// lbz r11,4(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 4);
	// andi. r11,r11,72
	r11.u64 = r11.u64 & 72;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823aedd0
	if (cr0.eq) goto loc_823AEDD0;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// stb r9,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// cmpwi cr6,r8,2
	cr6.compare<int32_t>(ctx.r8.s32, 2, xer);
	// blt cr6,0x823aedac
	if (cr6.lt) goto loc_823AEDAC;
	// lwzx r10,r27,r29
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// stb r9,41(r10)
	PPC_STORE_U8(ctx.r10.u32 + 41, ctx.r9.u8);
loc_823AEDAC:
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bne cr6,0x823aedc8
	if (!cr6.eq) goto loc_823AEDC8;
	// lwzx r10,r27,r29
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + r29.u32);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r28,r10
	ctx.r10.u64 = r28.u64 + ctx.r10.u64;
	// stb r9,42(r10)
	PPC_STORE_U8(ctx.r10.u32 + 42, ctx.r9.u8);
loc_823AEDC8:
	// subf r31,r8,r11
	r31.s64 = r11.s64 - ctx.r8.s64;
	// b 0x823aede4
	goto loc_823AEDE4;
loc_823AEDD0:
	// neg r11,r8
	r11.s64 = -ctx.r8.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// extsw r4,r11
	ctx.r4.s64 = r11.s32;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8239fc80
	sub_8239FC80(ctx, base);
loc_823AEDE4:
	// lis r3,0
	ctx.r3.s64 = 0;
	// rlwinm r8,r20,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// subf r6,r23,r31
	ctx.r6.s64 = r31.s64 - r23.s64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x823b9d68
	sub_823B9D68(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x823aee3c
	if (!cr0.eq) goto loc_823AEE3C;
	// bl 0x823b6468
	sub_823B6468(ctx, base);
loc_823AEE10:
	// bl 0x823a0000
	sub_823A0000(ctx, base);
loc_823AEE14:
	// li r19,-1
	r19.s64 = -1;
loc_823AEE18:
	// cmplw cr6,r23,r18
	cr6.compare<uint32_t>(r23.u32, r18.u32, xer);
	// beq cr6,0x823aee28
	if (cr6.eq) goto loc_823AEE28;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
loc_823AEE28:
	// cmpwi cr6,r19,-2
	cr6.compare<int32_t>(r19.s32, -2, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// beq cr6,0x823aee7c
	if (cr6.eq) goto loc_823AEE7C;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// b 0x823aee7c
	goto loc_823AEE7C;
loc_823AEE3C:
	// rlwinm r30,r30,1,0,30
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x823aee18
	goto loc_823AEE18;
loc_823AEE44:
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// bne cr6,0x823aee68
	if (!cr6.eq) goto loc_823AEE68;
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
	// b 0x823aed54
	goto loc_823AED54;
loc_823AEE68:
	// cmplwi cr6,r3,109
	cr6.compare<uint32_t>(ctx.r3.u32, 109, xer);
	// bne cr6,0x823aee10
	if (!cr6.eq) goto loc_823AEE10;
	// mr r19,r26
	r19.u64 = r26.u64;
	// b 0x823aee18
	goto loc_823AEE18;
loc_823AEE78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AEE7C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_823AEE84"))) PPC_WEAK_FUNC(sub_823AEE84);
PPC_FUNC_IMPL(__imp__sub_823AEE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AEE88"))) PPC_WEAK_FUNC(sub_823AEE88);
PPC_FUNC_IMPL(__imp__sub_823AEE88) {
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
	// lwz r16,-14416(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14416);
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
	// bne cr6,0x823aeedc
	if (!cr6.eq) goto loc_823AEEDC;
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
	// b 0x823aefc4
	goto loc_823AEFC4;
loc_823AEEDC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x823aeef4
	if (cr6.lt) goto loc_823AEEF4;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823aef30
	if (cr6.lt) goto loc_823AEF30;
loc_823AEEF4:
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
	// b 0x823aefc4
	goto loc_823AEFC4;
loc_823AEF30:
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
	// beq 0x823aeef4
	if (cr0.eq) goto loc_823AEEF4;
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
	// beq 0x823aef94
	if (cr0.eq) goto loc_823AEF94;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae8b0
	sub_823AE8B0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x823aefb4
	goto loc_823AEFB4;
loc_823AEF94:
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
loc_823AEFB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823aefec
	sub_823AEFEC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823AEFC4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823AEE90"))) PPC_WEAK_FUNC(sub_823AEE90);
PPC_FUNC_IMPL(__imp__sub_823AEE90) {
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
	// bne cr6,0x823aeedc
	if (!cr6.eq) goto loc_823AEEDC;
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
	// b 0x823aefc4
	goto loc_823AEFC4;
loc_823AEEDC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x823aeef4
	if (cr6.lt) goto loc_823AEEF4;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823aef30
	if (cr6.lt) goto loc_823AEF30;
loc_823AEEF4:
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
	// b 0x823aefc4
	goto loc_823AEFC4;
loc_823AEF30:
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
	// beq 0x823aeef4
	if (cr0.eq) goto loc_823AEEF4;
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
	// beq 0x823aef94
	if (cr0.eq) goto loc_823AEF94;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823ae8b0
	sub_823AE8B0(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// b 0x823aefb4
	goto loc_823AEFB4;
loc_823AEF94:
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
loc_823AEFB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	r12.s64 = r31.s64 + 160;
	// bl 0x823aefec
	sub_823AEFEC(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823AEFC4:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823AEFCC"))) PPC_WEAK_FUNC(sub_823AEFCC);
PPC_FUNC_IMPL(__imp__sub_823AEFCC) {
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
	// b 0x823af004
	goto loc_823AF004;
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
loc_823AF004:
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

__attribute__((alias("__imp__sub_823AEFEC"))) PPC_WEAK_FUNC(sub_823AEFEC);
PPC_FUNC_IMPL(__imp__sub_823AEFEC) {
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

__attribute__((alias("__imp__sub_823AF024"))) PPC_WEAK_FUNC(sub_823AF024);
PPC_FUNC_IMPL(__imp__sub_823AF024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF028"))) PPC_WEAK_FUNC(sub_823AF028);
PPC_FUNC_IMPL(__imp__sub_823AF028) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x823a29a8
	sub_823A29A8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823af054
	if (!cr0.eq) goto loc_823AF054;
loc_823AF048:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823b9cd8
	sub_823B9CD8(ctx, base);
	// b 0x823af214
	goto loc_823AF214;
loc_823AF054:
	// lis r9,-32139
	ctx.r9.s64 = -2106261504;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r9,-22108(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + -22108);
loc_823AF064:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r8,r30
	cr6.compare<uint32_t>(ctx.r8.u32, r30.u32, xer);
	// beq cr6,0x823af084
	if (cr6.eq) goto loc_823AF084;
	// mulli r8,r9,12
	ctx.r8.s64 = ctx.r9.s64 * 12;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x823af064
	if (cr6.lt) goto loc_823AF064;
loc_823AF084:
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823af0a8
	if (!cr6.lt) goto loc_823AF0A8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// cmplw cr6,r10,r30
	cr6.compare<uint32_t>(ctx.r10.u32, r30.u32, xer);
	// beq cr6,0x823af0ac
	if (cr6.eq) goto loc_823AF0AC;
loc_823AF0A8:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_823AF0AC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823af048
	if (cr6.eq) goto loc_823AF048;
	// lwz r28,8(r5)
	r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x823af048
	if (cr0.eq) goto loc_823AF048;
	// cmplwi cr6,r28,5
	cr6.compare<uint32_t>(r28.u32, 5, xer);
	// bne cr6,0x823af0d4
	if (!cr6.eq) goto loc_823AF0D4;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// b 0x823af214
	goto loc_823AF214;
loc_823AF0D4:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// beq cr6,0x823af210
	if (cr6.eq) goto loc_823AF210;
	// lwz r27,96(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x823af200
	if (!cr6.eq) goto loc_823AF200;
	// lis r6,-32139
	ctx.r6.s64 = -2106261504;
	// lis r7,-32139
	ctx.r7.s64 = -2106261504;
	// lwz r11,-22120(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22120);
	// lwz r10,-22116(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22116);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bge cr6,0x823af138
	if (!cr6.lt) goto loc_823AF138;
	// mulli r10,r11,12
	ctx.r10.s64 = r11.s64 * 12;
loc_823AF110:
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stw r4,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r4.u32);
	// lwz r9,-22116(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -22116);
	// lwz r8,-22120(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + -22120);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x823af110
	if (cr6.lt) goto loc_823AF110;
loc_823AF138:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r30,100(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// ori r10,r10,142
	ctx.r10.u64 = ctx.r10.u64 | 142;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823af158
	if (!cr6.eq) goto loc_823AF158;
	// li r11,131
	r11.s64 = 131;
	// b 0x823af1e4
	goto loc_823AF1E4;
loc_823AF158:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,144
	ctx.r10.u64 = ctx.r10.u64 | 144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823af170
	if (!cr6.eq) goto loc_823AF170;
	// li r11,129
	r11.s64 = 129;
	// b 0x823af1e4
	goto loc_823AF1E4;
loc_823AF170:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,145
	ctx.r10.u64 = ctx.r10.u64 | 145;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823af188
	if (!cr6.eq) goto loc_823AF188;
	// li r11,132
	r11.s64 = 132;
	// b 0x823af1e4
	goto loc_823AF1E4;
loc_823AF188:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,147
	ctx.r10.u64 = ctx.r10.u64 | 147;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823af1a0
	if (!cr6.eq) goto loc_823AF1A0;
	// li r11,133
	r11.s64 = 133;
	// b 0x823af1e4
	goto loc_823AF1E4;
loc_823AF1A0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,141
	ctx.r10.u64 = ctx.r10.u64 | 141;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823af1b8
	if (!cr6.eq) goto loc_823AF1B8;
	// li r11,130
	r11.s64 = 130;
	// b 0x823af1e4
	goto loc_823AF1E4;
loc_823AF1B8:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,143
	ctx.r10.u64 = ctx.r10.u64 | 143;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823af1d0
	if (!cr6.eq) goto loc_823AF1D0;
	// li r11,134
	r11.s64 = 134;
	// b 0x823af1e4
	goto loc_823AF1E4;
loc_823AF1D0:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,146
	ctx.r10.u64 = ctx.r10.u64 | 146;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823af1e8
	if (!cr6.eq) goto loc_823AF1E8;
	// li r11,138
	r11.s64 = 138;
loc_823AF1E4:
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
loc_823AF1E8:
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r3,8
	ctx.r3.s64 = 8;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// b 0x823af20c
	goto loc_823AF20C;
loc_823AF200:
	// stw r4,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r4.u32);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823AF20C:
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
loc_823AF210:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823AF214:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823AF21C"))) PPC_WEAK_FUNC(sub_823AF21C);
PPC_FUNC_IMPL(__imp__sub_823AF21C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF220"))) PPC_WEAK_FUNC(sub_823AF220);
PPC_FUNC_IMPL(__imp__sub_823AF220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,17636(r11)
	PPC_STORE_U32(r11.u32 + 17636, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF22C"))) PPC_WEAK_FUNC(sub_823AF22C);
PPC_FUNC_IMPL(__imp__sub_823AF22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF230"))) PPC_WEAK_FUNC(sub_823AF230);
PPC_FUNC_IMPL(__imp__sub_823AF230) {
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
	// bl 0x826e4bdc
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_823AF254"))) PPC_WEAK_FUNC(sub_823AF254);
PPC_FUNC_IMPL(__imp__sub_823AF254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF258"))) PPC_WEAK_FUNC(sub_823AF258);
PPC_FUNC_IMPL(__imp__sub_823AF258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lwz r16,-14392(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14392);
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
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,17636(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17636);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823af290
	if (!cr6.eq) goto loc_823AF290;
	// lis r11,-32197
	r11.s64 = -2110062592;
	// addi r11,r11,-3536
	r11.s64 = r11.s64 + -3536;
	// stw r11,17636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17636, r11.u32);
loc_823AF290:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823af2d8
	// ERROR 823AF2D8
	return;
}

__attribute__((alias("__imp__sub_823AF260"))) PPC_WEAK_FUNC(sub_823AF260);
PPC_FUNC_IMPL(__imp__sub_823AF260) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32127
	ctx.r10.s64 = -2105475072;
	// lwz r11,17636(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 17636);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823af290
	if (!cr6.eq) goto loc_823AF290;
	// lis r11,-32197
	r11.s64 = -2110062592;
	// addi r11,r11,-3536
	r11.s64 = r11.s64 + -3536;
	// stw r11,17636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 17636, r11.u32);
loc_823AF290:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x823af2d8
	goto loc_823AF2D8;
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x823af2d0
	if (!cr6.eq) goto loc_823AF2D0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
loc_823AF2D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
loc_823AF2D8:
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

__attribute__((alias("__imp__sub_823AF2B8"))) PPC_WEAK_FUNC(sub_823AF2B8);
PPC_FUNC_IMPL(__imp__sub_823AF2B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	// lis r11,-16384
	r11.s64 = -1073741824;
	// ori r11,r11,23
	r11.u64 = r11.u64 | 23;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x823af2d0
	if (!cr6.eq) goto loc_823AF2D0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
loc_823AF2D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_823AF2EC"))) PPC_WEAK_FUNC(sub_823AF2EC);
PPC_FUNC_IMPL(__imp__sub_823AF2EC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,23
	ctx.r10.u64 = ctx.r10.u64 | 23;
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

__attribute__((alias("__imp__sub_823AF310"))) PPC_WEAK_FUNC(sub_823AF310);
PPC_FUNC_IMPL(__imp__sub_823AF310) {
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
	// bl 0x823ae1d8
	sub_823AE1D8(ctx, base);
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823af3ec
	if (cr0.eq) goto loc_823AF3EC;
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// addi r11,r3,32
	r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823af348
	if (!cr6.eq) goto loc_823AF348;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x823af35c
	goto loc_823AF35C;
loc_823AF348:
	// bl 0x823a0e80
	sub_823A0E80(ctx, base);
	// addi r11,r3,64
	r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823af3ec
	if (!cr6.eq) goto loc_823AF3EC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823AF35C:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,17128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 17128);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,17128(r11)
	PPC_STORE_U32(r11.u32 + 17128, ctx.r10.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// andi. r11,r11,268
	r11.u64 = r11.u64 & 268;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823af3ec
	if (!cr0.eq) goto loc_823AF3EC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// rlwinm r29,r9,2,0,29
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r11,17640
	r30.s64 = r11.s64 + 17640;
	// lwzx r3,r29,r30
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823af3c4
	if (!cr0.eq) goto loc_823AF3C4;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x8239d488
	sub_8239D488(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stwx r3,r29,r30
	PPC_STORE_U32(r29.u32 + r30.u32, ctx.r3.u32);
	// bne 0x823af3c4
	if (!cr0.eq) goto loc_823AF3C4;
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823af3d8
	goto loc_823AF3D8;
loc_823AF3C4:
	// li r11,4096
	r11.s64 = 4096;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_823AF3D8:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// ori r11,r11,4354
	r11.u64 = r11.u64 | 4354;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x823af3f0
	goto loc_823AF3F0;
loc_823AF3EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823AF3F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823AF3F8"))) PPC_WEAK_FUNC(sub_823AF3F8);
PPC_FUNC_IMPL(__imp__sub_823AF3F8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823af448
	if (cr6.eq) goto loc_823AF448;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823af448
	if (cr0.eq) goto loc_823AF448;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ae230
	sub_823AE230(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r10,r10,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r10,r10,0,20,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFEFFF;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
loc_823AF448:
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

__attribute__((alias("__imp__sub_823AF45C"))) PPC_WEAK_FUNC(sub_823AF45C);
PPC_FUNC_IMPL(__imp__sub_823AF45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF460"))) PPC_WEAK_FUNC(sub_823AF460);
PPC_FUNC_IMPL(__imp__sub_823AF460) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823af4b8
	if (cr6.lt) goto loc_823AF4B8;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x823af4b8
	if (!cr6.lt) goto loc_823AF4B8;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x823af4b8
	if (!cr6.eq) goto loc_823AF4B8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// b 0x823af4d8
	goto loc_823AF4D8;
loc_823AF4B8:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_823AF4D8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF4E8"))) PPC_WEAK_FUNC(sub_823AF4E8);
PPC_FUNC_IMPL(__imp__sub_823AF4E8) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823af550
	if (cr6.lt) goto loc_823AF550;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x823af550
	if (!cr6.lt) goto loc_823AF550;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823af550
	if (cr0.eq) goto loc_823AF550;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x823af550
	if (cr6.eq) goto loc_823AF550;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823af56c
	goto loc_823AF56C;
loc_823AF550:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,9
	r11.s64 = 9;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823AF56C:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF580"))) PPC_WEAK_FUNC(sub_823AF580);
PPC_FUNC_IMPL(__imp__sub_823AF580) {
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
	// cmpwi cr6,r3,-2
	cr6.compare<int32_t>(ctx.r3.s32, -2, xer);
	// bne cr6,0x823af5b8
	if (!cr6.eq) goto loc_823AF5B8;
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
	// b 0x823af63c
	goto loc_823AF63C;
loc_823AF5B8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x823af5d0
	if (cr6.lt) goto loc_823AF5D0;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,14864(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x823af60c
	if (cr6.lt) goto loc_823AF60C;
loc_823AF5D0:
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
	// b 0x823af63c
	goto loc_823AF63C;
loc_823AF60C:
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823af5d0
	if (cr0.eq) goto loc_823AF5D0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823AF63C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF64C"))) PPC_WEAK_FUNC(sub_823AF64C);
PPC_FUNC_IMPL(__imp__sub_823AF64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF650"))) PPC_WEAK_FUNC(sub_823AF650);
PPC_FUNC_IMPL(__imp__sub_823AF650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// lwz r16,-14368(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14368);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r29,1
	r29.s64 = 1;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mulli r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 * 44;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823af6ec
	if (!cr6.eq) goto loc_823AF6EC;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823af6e0
	if (!cr6.eq) goto loc_823AF6E0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x823af260
	sub_823AF260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823af6d4
	if (!cr0.eq) goto loc_823AF6D4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823AF6D4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_823AF6E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x823af720
	sub_823AF720(ctx, base);
loc_823AF6EC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x823af714
	if (cr6.eq) goto loc_823AF714;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
loc_823AF714:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823AF658"))) PPC_WEAK_FUNC(sub_823AF658);
PPC_FUNC_IMPL(__imp__sub_823AF658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// li r29,1
	r29.s64 = 1;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// mulli r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 * 44;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// add r30,r10,r9
	r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823af6ec
	if (!cr6.eq) goto loc_823AF6EC;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823af6e0
	if (!cr6.eq) goto loc_823AF6E0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x823af260
	sub_823AF260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823af6d4
	if (!cr0.eq) goto loc_823AF6D4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823AF6D4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_823AF6E0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	r12.s64 = r31.s64 + 128;
	// bl 0x823af720
	sub_823AF720(ctx, base);
loc_823AF6EC:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x823af714
	if (cr6.eq) goto loc_823AF714;
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
loc_823AF714:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823AF720"))) PPC_WEAK_FUNC(sub_823AF720);
PPC_FUNC_IMPL(__imp__sub_823AF720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823a4100
	sub_823A4100(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AF754"))) PPC_WEAK_FUNC(sub_823AF754);
PPC_FUNC_IMPL(__imp__sub_823AF754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AF758"))) PPC_WEAK_FUNC(sub_823AF758);
PPC_FUNC_IMPL(__imp__sub_823AF758) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// srawi r10,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14880
	r11.s64 = r11.s64 + 14880;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = r11.s64 + 12;
	// b 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823AF780"))) PPC_WEAK_FUNC(sub_823AF780);
PPC_FUNC_IMPL(__imp__sub_823AF780) {
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
	// lwz r16,-14344(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14344);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,11
	ctx.r3.s64 = 11;
	// li r24,-1
	r24.s64 = -1;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// li r25,0
	r25.s64 = 0;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x823a4120
	sub_823A4120(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823af7c0
	if (!cr0.eq) goto loc_823AF7C0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823af998
	goto loc_823AF998;
loc_823AF7C0:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,0
	r28.s64 = 0;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// li r26,1
	r26.s64 = 1;
loc_823AF7DC:
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// cmpwi cr6,r28,64
	cr6.compare<int32_t>(r28.s32, 64, xer);
	// bge cr6,0x823af988
	if (!cr6.lt) goto loc_823AF988;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x823af8f4
	if (cr0.eq) goto loc_823AF8F4;
loc_823AF7F8:
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r11,r11,1408
	r11.s64 = r11.s64 + 1408;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x823af8dc
	if (!cr6.lt) goto loc_823AF8DC;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823af8a8
	if (!cr0.eq) goto loc_823AF8A8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823af874
	if (!cr6.eq) goto loc_823AF874;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823af868
	if (!cr6.eq) goto loc_823AF868;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x823af260
	sub_823AF260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823af85c
	if (!cr0.eq) goto loc_823AF85C;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// b 0x823af868
	goto loc_823AF868;
loc_823AF85C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_823AF868:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x823af9c4
	sub_823AF9C4(ctx, base);
loc_823AF874:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x823af8a8
	if (!cr6.eq) goto loc_823AF8A8;
	// addi r27,r30,12
	r27.s64 = r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823af8a0
	if (cr0.eq) goto loc_823AF8A0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x823af8a8
	goto loc_823AF8A8;
loc_823AF8A0:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x823af8b4
	if (cr6.eq) goto loc_823AF8B4;
loc_823AF8A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,44
	r30.s64 = r30.s64 + 44;
	// b 0x823af7f8
	goto loc_823AF7F8;
loc_823AF8B4:
	// li r11,44
	r11.s64 = 44;
	// stb r26,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r26.u8);
	// stw r24,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r24.u32);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// subf r9,r9,r30
	ctx.r9.s64 = r30.s64 - ctx.r9.s64;
	// divw r11,r9,r11
	r11.s32 = ctx.r9.s32 / r11.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823AF8DC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x823af988
	if (!cr6.eq) goto loc_823AF988;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x823af7dc
	goto loc_823AF7DC;
loc_823AF8F4:
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823af988
	if (cr0.eq) goto loc_823AF988;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r3.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,14864(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r10,14864(r11)
	PPC_STORE_U32(r11.u32 + 14864, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_823AF924:
	// lwzx r11,r9,r29
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// addi r11,r11,1408
	r11.s64 = r11.s64 + 1408;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x823af954
	if (!cr6.lt) goto loc_823AF954;
	// li r11,10
	r11.s64 = 10;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// b 0x823af924
	goto loc_823AF924;
loc_823AF954:
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r26.u8);
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823af988
	if (!cr0.eq) goto loc_823AF988;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_823AF988:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x823af9a0
	sub_823AF9A0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823AF998:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823AF788"))) PPC_WEAK_FUNC(sub_823AF788);
PPC_FUNC_IMPL(__imp__sub_823AF788) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,11
	ctx.r3.s64 = 11;
	// li r24,-1
	r24.s64 = -1;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// li r25,0
	r25.s64 = 0;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// bl 0x823a4120
	sub_823A4120(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823af7c0
	if (!cr0.eq) goto loc_823AF7C0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x823af998
	goto loc_823AF998;
loc_823AF7C0:
	// li r3,11
	ctx.r3.s64 = 11;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,0
	r28.s64 = 0;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// li r26,1
	r26.s64 = 1;
loc_823AF7DC:
	// stw r28,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r28.u32);
	// cmpwi cr6,r28,64
	cr6.compare<int32_t>(r28.s32, 64, xer);
	// bge cr6,0x823af988
	if (!cr6.lt) goto loc_823AF988;
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x823af8f4
	if (cr0.eq) goto loc_823AF8F4;
loc_823AF7F8:
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r11,r11,1408
	r11.s64 = r11.s64 + 1408;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x823af8dc
	if (!cr6.lt) goto loc_823AF8DC;
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823af8a8
	if (!cr0.eq) goto loc_823AF8A8;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823af874
	if (!cr6.eq) goto loc_823AF874;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823af868
	if (!cr6.eq) goto loc_823AF868;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// bl 0x823af260
	sub_823AF260(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823af85c
	if (!cr0.eq) goto loc_823AF85C;
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// b 0x823af868
	goto loc_823AF868;
loc_823AF85C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_823AF868:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x823af9c4
	sub_823AF9C4(ctx, base);
loc_823AF874:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x823af8a8
	if (!cr6.eq) goto loc_823AF8A8;
	// addi r27,r30,12
	r27.s64 = r30.s64 + 12;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823af8a0
	if (cr0.eq) goto loc_823AF8A0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x823af8a8
	goto loc_823AF8A8;
loc_823AF8A0:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x823af8b4
	if (cr6.eq) goto loc_823AF8B4;
loc_823AF8A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,44
	r30.s64 = r30.s64 + 44;
	// b 0x823af7f8
	goto loc_823AF7F8;
loc_823AF8B4:
	// li r11,44
	r11.s64 = 44;
	// stb r26,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r26.u8);
	// stw r24,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r24.u32);
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r28,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// subf r9,r9,r30
	ctx.r9.s64 = r30.s64 - ctx.r9.s64;
	// divw r11,r9,r11
	r11.s32 = ctx.r9.s32 / r11.s32;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823AF8DC:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x823af988
	if (!cr6.eq) goto loc_823AF988;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x823af7dc
	goto loc_823AF7DC;
loc_823AF8F4:
	// li r4,44
	ctx.r4.s64 = 44;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x823abc70
	sub_823ABC70(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823af988
	if (cr0.eq) goto loc_823AF988;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + r29.u32, ctx.r3.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,14864(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 14864);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stw r10,14864(r11)
	PPC_STORE_U32(r11.u32 + 14864, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_823AF924:
	// lwzx r11,r9,r29
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// addi r11,r11,1408
	r11.s64 = r11.s64 + 1408;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x823af954
	if (!cr6.lt) goto loc_823AF954;
	// li r11,10
	r11.s64 = 10;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r24.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, r11.u8);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r3,r3,44
	ctx.r3.s64 = ctx.r3.s64 + 44;
	// b 0x823af924
	goto loc_823AF924;
loc_823AF954:
	// rlwinm r3,r28,5,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// srawi r11,r3,5
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	r11.s64 = ctx.r3.s32 >> 5;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r3,27
	ctx.r10.u64 = ctx.r3.u32 & 0x1F;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r26,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r26.u8);
	// bl 0x823af658
	sub_823AF658(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823af988
	if (!cr0.eq) goto loc_823AF988;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
loc_823AF988:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,176
	r12.s64 = r31.s64 + 176;
	// bl 0x823af9a0
	sub_823AF9A0(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_823AF998:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823AF9A0"))) PPC_WEAK_FUNC(sub_823AF9A0);
PPC_FUNC_IMPL(__imp__sub_823AF9A0) {
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
	// li r3,11
	ctx.r3.s64 = 11;
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

__attribute__((alias("__imp__sub_823AF9C4"))) PPC_WEAK_FUNC(sub_823AF9C4);
PPC_FUNC_IMPL(__imp__sub_823AF9C4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x823a4100
	sub_823A4100(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,14880
	r29.s64 = r11.s64 + 14880;
	// li r24,-1
	r24.s64 = -1;
	// li r26,1
	r26.s64 = 1;
	// lwz r25,84(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r28,92(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823AFA04"))) PPC_WEAK_FUNC(sub_823AFA04);
PPC_FUNC_IMPL(__imp__sub_823AFA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823AFA08"))) PPC_WEAK_FUNC(sub_823AFA08);
PPC_FUNC_IMPL(__imp__sub_823AFA08) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	r22.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r22
	r25.u64 = r22.u64;
	// bl 0x823b2b68
	sub_823B2B68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823afa60
	if (cr0.eq) goto loc_823AFA60;
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
loc_823AFA60:
	// rlwinm. r11,r21,0,16,16
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823afa6c
	if (!cr0.eq) goto loc_823AFA6C;
	// li r25,-128
	r25.s64 = -128;
loc_823AFA6C:
	// clrlwi r11,r21,30
	r11.u64 = r21.u32 & 0x3;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x823afad8
	if (cr6.lt) goto loc_823AFAD8;
	// beq cr6,0x823afad0
	if (cr6.eq) goto loc_823AFAD0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x823afac8
	if (cr6.lt) goto loc_823AFAC8;
loc_823AFA88:
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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
	// b 0x823afe48
	goto loc_823AFE48;
loc_823AFAC8:
	// lis r27,-16384
	r27.s64 = -1073741824;
	// b 0x823afadc
	goto loc_823AFADC;
loc_823AFAD0:
	// lis r27,16384
	r27.s64 = 1073741824;
	// b 0x823afadc
	goto loc_823AFADC;
loc_823AFAD8:
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_823AFADC:
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// beq cr6,0x823afb2c
	if (cr6.eq) goto loc_823AFB2C;
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(r31.s32, 32, xer);
	// beq cr6,0x823afb24
	if (cr6.eq) goto loc_823AFB24;
	// cmpwi cr6,r31,48
	cr6.compare<int32_t>(r31.s32, 48, xer);
	// beq cr6,0x823afb1c
	if (cr6.eq) goto loc_823AFB1C;
	// cmpwi cr6,r31,64
	cr6.compare<int32_t>(r31.s32, 64, xer);
	// beq cr6,0x823afb14
	if (cr6.eq) goto loc_823AFB14;
	// cmpwi cr6,r31,128
	cr6.compare<int32_t>(r31.s32, 128, xer);
	// bne cr6,0x823afa88
	if (!cr6.eq) goto loc_823AFA88;
	// subf r11,r27,r10
	r11.s64 = ctx.r10.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x823afb30
	goto loc_823AFB30;
loc_823AFB14:
	// li r28,3
	r28.s64 = 3;
	// b 0x823afb30
	goto loc_823AFB30;
loc_823AFB1C:
	// li r28,2
	r28.s64 = 2;
	// b 0x823afb30
	goto loc_823AFB30;
loc_823AFB24:
	// li r28,1
	r28.s64 = 1;
	// b 0x823afb30
	goto loc_823AFB30;
loc_823AFB2C:
	// mr r28,r22
	r28.u64 = r22.u64;
loc_823AFB30:
	// rlwinm r11,r21,0,21,23
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x700;
	// cmpwi cr6,r11,1024
	cr6.compare<int32_t>(r11.s32, 1024, xer);
	// bgt cr6,0x823afb78
	if (cr6.gt) goto loc_823AFB78;
	// beq cr6,0x823afb70
	if (cr6.eq) goto loc_823AFB70;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823afb70
	if (cr6.eq) goto loc_823AFB70;
	// cmpwi cr6,r11,256
	cr6.compare<int32_t>(r11.s32, 256, xer);
	// beq cr6,0x823afb68
	if (cr6.eq) goto loc_823AFB68;
	// cmpwi cr6,r11,512
	cr6.compare<int32_t>(r11.s32, 512, xer);
	// beq cr6,0x823afbe8
	if (cr6.eq) goto loc_823AFBE8;
	// cmpwi cr6,r11,768
	cr6.compare<int32_t>(r11.s32, 768, xer);
	// bne cr6,0x823afa88
	if (!cr6.eq) goto loc_823AFA88;
	// li r29,2
	r29.s64 = 2;
	// b 0x823afb94
	goto loc_823AFB94;
loc_823AFB68:
	// li r29,4
	r29.s64 = 4;
	// b 0x823afb94
	goto loc_823AFB94;
loc_823AFB70:
	// li r29,3
	r29.s64 = 3;
	// b 0x823afb94
	goto loc_823AFB94;
loc_823AFB78:
	// cmpwi cr6,r11,1280
	cr6.compare<int32_t>(r11.s32, 1280, xer);
	// beq cr6,0x823afb90
	if (cr6.eq) goto loc_823AFB90;
	// cmpwi cr6,r11,1536
	cr6.compare<int32_t>(r11.s32, 1536, xer);
	// beq cr6,0x823afbe8
	if (cr6.eq) goto loc_823AFBE8;
	// cmpwi cr6,r11,1792
	cr6.compare<int32_t>(r11.s32, 1792, xer);
	// bne cr6,0x823afa88
	if (!cr6.eq) goto loc_823AFA88;
loc_823AFB90:
	// li r29,1
	r29.s64 = 1;
loc_823AFB94:
	// rlwinm. r11,r21,0,23,23
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r31,128
	r31.s64 = 128;
	// beq 0x823afbb8
	if (cr0.eq) goto loc_823AFBB8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17108(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17108);
	// andc r11,r26,r11
	r11.u64 = r26.u64 & ~r11.u64;
	// rlwinm. r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823afbb8
	if (!cr0.eq) goto loc_823AFBB8;
	// li r31,1
	r31.s64 = 1;
loc_823AFBB8:
	// rlwinm. r11,r21,0,25,25
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afbcc
	if (cr0.eq) goto loc_823AFBCC;
	// oris r31,r31,1024
	r31.u64 = r31.u64 | 67108864;
	// oris r27,r27,1
	r27.u64 = r27.u64 | 65536;
	// ori r28,r28,4
	r28.u64 = r28.u64 | 4;
loc_823AFBCC:
	// rlwinm. r11,r21,0,19,19
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afbd8
	if (cr0.eq) goto loc_823AFBD8;
	// ori r31,r31,256
	r31.u64 = r31.u64 | 256;
loc_823AFBD8:
	// rlwinm. r11,r21,0,26,26
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afbf0
	if (cr0.eq) goto loc_823AFBF0;
	// oris r31,r31,2048
	r31.u64 = r31.u64 | 134217728;
	// b 0x823afbfc
	goto loc_823AFBFC;
loc_823AFBE8:
	// li r29,5
	r29.s64 = 5;
	// b 0x823afb94
	goto loc_823AFB94;
loc_823AFBF0:
	// rlwinm. r11,r21,0,27,27
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afbfc
	if (cr0.eq) goto loc_823AFBFC;
	// oris r31,r31,4096
	r31.u64 = r31.u64 | 268435456;
loc_823AFBFC:
	// bl 0x823af788
	sub_823AF788(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// bne cr6,0x823afc34
	if (!cr6.eq) goto loc_823AFC34;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r22,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r22.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r11,24
	r11.s64 = 24;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823afe48
	goto loc_823AFE48;
loc_823AFC34:
	// li r11,1
	r11.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823b5b78
	sub_823B5B78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x823afcb0
	if (!cr6.eq) goto loc_823AFCB0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// addi r10,r10,14880
	ctx.r10.s64 = ctx.r10.s64 + 14880;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 * 44;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// bl 0x823a0000
	sub_823A0000(ctx, base);
loc_823AFCA4:
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// lwz r22,0(r3)
	r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823afe44
	goto loc_823AFE44;
loc_823AFCB0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823af460
	sub_823AF460(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// addi r31,r11,14880
	r31.s64 = r11.s64 + 14880;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 * 44;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// ori r11,r25,1
	r11.u64 = r25.u64 | 1;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsb r11,r11
	r11.s64 = r11.s8;
	// stb r11,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, r11.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// srawi r10,r10,5
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 5;
	// mulli r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 * 44;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// andi. r29,r11,72
	r29.u64 = r11.u64 & 72;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// cmpwi r29,0
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// stb r9,40(r10)
	PPC_STORE_U8(ctx.r10.u32 + 40, ctx.r9.u8);
	// bne 0x823afdb8
	if (!cr0.eq) goto loc_823AFDB8;
	// rlwinm. r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afdb8
	if (cr0.eq) goto loc_823AFDB8;
	// rlwinm. r11,r21,0,30,30
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afdb8
	if (cr0.eq) goto loc_823AFDB8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x8239f7c8
	sub_8239F7C8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x823afd64
	if (!cr6.eq) goto loc_823AFD64;
	// bl 0x8239ffc8
	sub_8239FFC8(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,131
	cr6.compare<uint32_t>(r11.u32, 131, xer);
	// beq cr6,0x823afdb8
	if (cr6.eq) goto loc_823AFDB8;
loc_823AFD58:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8239fa20
	sub_8239FA20(ctx, base);
	// b 0x823afca4
	goto loc_823AFCA4;
loc_823AFD64:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r22.u8);
	// bl 0x823ae8b0
	sub_823AE8B0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823afda0
	if (!cr0.eq) goto loc_823AFDA0;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bne cr6,0x823afda0
	if (!cr6.eq) goto loc_823AFDA0;
	// extsw r4,r28
	ctx.r4.s64 = r28.s32;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823b2948
	sub_823B2948(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823afd58
	if (cr6.eq) goto loc_823AFD58;
loc_823AFDA0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8239f7c8
	sub_8239F7C8(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823afd58
	if (cr6.eq) goto loc_823AFD58;
loc_823AFDB8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 40);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,40(r11)
	PPC_STORE_U8(r11.u32 + 40, ctx.r10.u8);
	// bne cr6,0x823afe44
	if (!cr6.eq) goto loc_823AFE44;
	// rlwinm. r11,r21,0,28,28
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afe44
	if (cr0.eq) goto loc_823AFE44;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_823AFE44:
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
loc_823AFE48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823AFE50"))) PPC_WEAK_FUNC(sub_823AFE50);
PPC_FUNC_IMPL(__imp__sub_823AFE50) {
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
	// lwz r16,-14304(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14304);
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823afec8
	if (!cr0.eq) goto loc_823AFEC8;
loc_823AFE98:
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
	// b 0x823aff48
	goto loc_823AFF48;
loc_823AFEC8:
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afe98
	if (cr0.eq) goto loc_823AFE98;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x823afefc
	if (cr6.eq) goto loc_823AFEFC;
	// rlwinm r11,r6,0,25,22
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afe98
	if (cr0.eq) goto loc_823AFE98;
loc_823AFEFC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823afa08
	sub_823AFA08(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x823aff80
	sub_823AFF80(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823aff48
	if (cr6.eq) goto loc_823AFF48;
	// li r11,-1
	r11.s64 = -1;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_823AFF48:
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

__attribute__((alias("__imp__sub_823AFE58"))) PPC_WEAK_FUNC(sub_823AFE58);
PPC_FUNC_IMPL(__imp__sub_823AFE58) {
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823afec8
	if (!cr0.eq) goto loc_823AFEC8;
loc_823AFE98:
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
	// b 0x823aff48
	goto loc_823AFF48;
loc_823AFEC8:
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afe98
	if (cr0.eq) goto loc_823AFE98;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x823afefc
	if (cr6.eq) goto loc_823AFEFC;
	// rlwinm r11,r6,0,25,22
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFFFE7F;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823afe98
	if (cr0.eq) goto loc_823AFE98;
loc_823AFEFC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823afa08
	sub_823AFA08(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,112
	r12.s64 = r31.s64 + 112;
	// bl 0x823aff80
	sub_823AFF80(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823aff48
	if (cr6.eq) goto loc_823AFF48;
	// li r11,-1
	r11.s64 = -1;
	// lwz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_823AFF48:
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

__attribute__((alias("__imp__sub_823AFF60"))) PPC_WEAK_FUNC(sub_823AFF60);
PPC_FUNC_IMPL(__imp__sub_823AFF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// lwz r30,164(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// b 0x823aff98
	goto loc_823AFF98;
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
loc_823AFF98:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823affec
	if (cr6.eq) goto loc_823AFFEC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823affe4
	if (cr6.eq) goto loc_823AFFE4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,14880
	ctx.r10.s64 = ctx.r10.s64 + 14880;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// mulli r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 * 44;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_823AFFE4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823af758
	sub_823AF758(ctx, base);
loc_823AFFEC:
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

__attribute__((alias("__imp__sub_823AFF80"))) PPC_WEAK_FUNC(sub_823AFF80);
PPC_FUNC_IMPL(__imp__sub_823AFF80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823affec
	if (cr6.eq) goto loc_823AFFEC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823affe4
	if (cr6.eq) goto loc_823AFFE4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,14880
	ctx.r10.s64 = ctx.r10.s64 + 14880;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// srawi r11,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	r11.s64 = r11.s32 >> 5;
	// mulli r9,r9,44
	ctx.r9.s64 = ctx.r9.s64 * 44;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lbz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stb r10,4(r11)
	PPC_STORE_U8(r11.u32 + 4, ctx.r10.u8);
loc_823AFFE4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823af758
	sub_823AF758(ctx, base);
loc_823AFFEC:
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

__attribute__((alias("__imp__sub_823B0004"))) PPC_WEAK_FUNC(sub_823B0004);
PPC_FUNC_IMPL(__imp__sub_823B0004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0008"))) PPC_WEAK_FUNC(sub_823B0008);
PPC_FUNC_IMPL(__imp__sub_823B0008) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B000C"))) PPC_WEAK_FUNC(sub_823B000C);
PPC_FUNC_IMPL(__imp__sub_823B000C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0010"))) PPC_WEAK_FUNC(sub_823B0010);
PPC_FUNC_IMPL(__imp__sub_823B0010) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr0{};
	PPCRegister r12{};
	// lis r12,-32249
	r12.s64 = -2113470464;
	// lfd f4,-26272(r12)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(r12.u32 + -26272);
	// lis r12,-32249
	r12.s64 = -2113470464;
	// lfd f5,-26264(r12)
	ctx.f5.u64 = PPC_LOAD_U64(r12.u32 + -26264);
	// fcmpu cr0,f1,f4
	cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// beq- 0x823b0050
	if (cr0.eq) goto loc_823B0050;
	// fabs f6,f1
	ctx.f6.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// fcmpu cr0,f6,f5
	cr0.compare(ctx.f6.f64, ctx.f5.f64);
	// bge- 0x823b0050
	if (!cr0.lt) goto loc_823B0050;
	// fcmpu cr0,f1,f4
	cr0.compare(ctx.f1.f64, ctx.f4.f64);
	// blt 0x823b0048
	if (cr0.lt) goto loc_823B0048;
	// fadd f4,f1,f5
	ctx.f4.f64 = ctx.f1.f64 + ctx.f5.f64;
	// fsub f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 - ctx.f5.f64;
	// b 0x823b0050
	goto loc_823B0050;
loc_823B0048:
	// fsub f4,f1,f5
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = ctx.f1.f64 - ctx.f5.f64;
	// fadd f1,f4,f5
	ctx.f1.f64 = ctx.f4.f64 + ctx.f5.f64;
loc_823B0050:
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0054"))) PPC_WEAK_FUNC(sub_823B0054);
PPC_FUNC_IMPL(__imp__sub_823B0054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0058"))) PPC_WEAK_FUNC(sub_823B0058);
PPC_FUNC_IMPL(__imp__sub_823B0058) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r27,0
	r27.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r27
	r30.u64 = r27.u64;
	// bl 0x823b0140
	sub_823B0140(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm. r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b00b4
	if (cr0.eq) goto loc_823B00B4;
	// li r30,512
	r30.s64 = 512;
	// stw r27,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// b 0x823b00e8
	goto loc_823B00E8;
loc_823B00B4:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823b2cc0
	sub_823B2CC0(ctx, base);
	// rlwinm. r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b00d0
	if (!cr0.eq) goto loc_823B00D0;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x823b00d4
	if (!cr6.eq) goto loc_823B00D4;
loc_823B00D0:
	// li r30,128
	r30.s64 = 128;
loc_823B00D4:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b00e4
	if (!cr0.eq) goto loc_823B00E4;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823b00e8
	if (!cr6.eq) goto loc_823B00E8;
loc_823B00E4:
	// ori r30,r30,256
	r30.u64 = r30.u64 | 256;
loc_823B00E8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// std r10,16(r29)
	PPC_STORE_U64(r29.u32 + 16, ctx.r10.u64);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823B010C"))) PPC_WEAK_FUNC(sub_823B010C);
PPC_FUNC_IMPL(__imp__sub_823B010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0110"))) PPC_WEAK_FUNC(sub_823B0110);
PPC_FUNC_IMPL(__imp__sub_823B0110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bgt cr6,0x823b0138
	if (cr6.gt) goto loc_823B0138;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,-21688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -21688);
	// lwz r11,200(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 200);
	// lhzx r11,r11,r10
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_823B0138:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0140"))) PPC_WEAK_FUNC(sub_823B0140);
PPC_FUNC_IMPL(__imp__sub_823B0140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bccc
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r21,0
	r21.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r18,r21
	r18.u64 = r21.u64;
	// li r27,1
	r27.s64 = 1;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r30,r21
	r30.u64 = r21.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// mr r28,r21
	r28.u64 = r21.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
	// mr r31,r21
	r31.u64 = r21.u64;
	// mr r11,r21
	r11.u64 = r21.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b01c0
	if (!cr6.eq) goto loc_823B01C0;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823b0b34
	goto loc_823B0B34;
loc_823B01C0:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_823B01C4:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x823b01ec
	if (cr6.eq) goto loc_823B01EC;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x823b01ec
	if (cr6.eq) goto loc_823B01EC;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// beq cr6,0x823b01ec
	if (cr6.eq) goto loc_823B01EC;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bne cr6,0x823b01f4
	if (!cr6.eq) goto loc_823B01F4;
loc_823B01EC:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x823b01c4
	goto loc_823B01C4;
loc_823B01F4:
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r20,r7,32768
	r20.u64 = ctx.r7.u64 | 32768;
	// lwz r7,-21628(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + -21628);
loc_823B0204:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bgt cr6,0x823b057c
	if (cr6.gt) goto loc_823B057C;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-26256
	r12.s64 = r12.s64 + -26256;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32197
	r12.s64 = -2110062592;
	// addi r12,r12,572
	r12.s64 = r12.s64 + 572;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823B023C;
	case 1:
		goto loc_823B02B0;
	case 2:
		goto loc_823B032C;
	case 3:
		goto loc_823B03A8;
	case 4:
		goto loc_823B0418;
	case 5:
		goto loc_823B048C;
	case 6:
		goto loc_823B04AC;
	case 7:
		goto loc_823B0530;
	case 8:
		goto loc_823B04F4;
	case 9:
		goto loc_823B0588;
	case 10:
		goto loc_823B057C;
	case 11:
		goto loc_823B0548;
	default:
		__builtin_unreachable();
	}
loc_823B023C:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x823b025c
	if (cr6.lt) goto loc_823B025C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x823b025c
	if (cr6.gt) goto loc_823B025C;
loc_823B0250:
	// li r11,3
	r11.s64 = 3;
loc_823B0254:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B025C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x823b0278
	if (!cr6.eq) goto loc_823B0278;
loc_823B0270:
	// li r11,5
	r11.s64 = 5;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B0278:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x823b02a4
	if (cr6.eq) goto loc_823B02A4;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x823b0298
	if (cr6.eq) goto loc_823B0298;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x823b0528
	if (!cr6.eq) goto loc_823B0528;
loc_823B0290:
	// li r11,1
	r11.s64 = 1;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B0298:
	// li r11,2
	r11.s64 = 2;
	// mr r18,r20
	r18.u64 = r20.u64;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B02A4:
	// li r11,2
	r11.s64 = 2;
	// mr r18,r21
	r18.u64 = r21.u64;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B02B0:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// li r30,1
	r30.s64 = 1;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x823b02c8
	if (cr6.lt) goto loc_823B02C8;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x823b0250
	if (!cr6.gt) goto loc_823B0250;
loc_823B02C8:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x823b02e4
	if (!cr6.eq) goto loc_823B02E4;
loc_823B02DC:
	// li r11,4
	r11.s64 = 4;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B02E4:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x823b0320
	if (cr6.eq) goto loc_823B0320;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x823b0320
	if (cr6.eq) goto loc_823B0320;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// beq cr6,0x823b0290
	if (cr6.eq) goto loc_823B0290;
loc_823B02FC:
	// cmpwi cr6,r11,67
	cr6.compare<int32_t>(r11.s32, 67, xer);
	// ble cr6,0x823b0528
	if (!cr6.gt) goto loc_823B0528;
	// cmpwi cr6,r11,69
	cr6.compare<int32_t>(r11.s32, 69, xer);
	// ble cr6,0x823b0318
	if (!cr6.gt) goto loc_823B0318;
	// addi r11,r11,-100
	r11.s64 = r11.s64 + -100;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x823b0528
	if (cr6.gt) goto loc_823B0528;
loc_823B0318:
	// li r11,6
	r11.s64 = 6;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B0320:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// li r11,11
	r11.s64 = 11;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B032C:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x823b0340
	if (cr6.lt) goto loc_823B0340;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x823b0250
	if (!cr6.gt) goto loc_823B0250;
loc_823B0340:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x823b0270
	if (cr6.eq) goto loc_823B0270;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// beq cr6,0x823b0290
	if (cr6.eq) goto loc_823B0290;
loc_823B035C:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_823B0360:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// beq cr6,0x823b0ad0
	if (cr6.eq) goto loc_823B0AD0;
	// cmplwi cr6,r6,24
	cr6.compare<uint32_t>(ctx.r6.u32, 24, xer);
	// ble cr6,0x823b0398
	if (!cr6.gt) goto loc_823B0398;
	// lbz r11,151(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 151);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// blt cr6,0x823b038c
	if (cr6.lt) goto loc_823B038C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, r11.u8);
loc_823B038C:
	// li r6,24
	ctx.r6.s64 = 24;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823B0398:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823b0abc
	if (cr6.eq) goto loc_823B0ABC;
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// b 0x823b0604
	goto loc_823B0604;
loc_823B03A8:
	// li r30,1
	r30.s64 = 1;
	// b 0x823b03e0
	goto loc_823B03E0;
loc_823B03B0:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x823b03ec
	if (cr6.gt) goto loc_823B03EC;
	// cmplwi cr6,r6,25
	cr6.compare<uint32_t>(ctx.r6.u32, 25, xer);
	// bge cr6,0x823b03d4
	if (!cr6.lt) goto loc_823B03D4;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x823b03d8
	goto loc_823B03D8;
loc_823B03D4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823B03D8:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_823B03E0:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bge cr6,0x823b03b0
	if (!cr6.lt) goto loc_823B03B0;
loc_823B03EC:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x823b02dc
	if (cr6.eq) goto loc_823B02DC;
loc_823B0404:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x823b0320
	if (cr6.eq) goto loc_823B0320;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x823b0320
	if (cr6.eq) goto loc_823B0320;
	// b 0x823b02fc
	goto loc_823B02FC;
loc_823B0418:
	// li r30,1
	r30.s64 = 1;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x823b0478
	if (!cr6.eq) goto loc_823B0478;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x823b0478
	if (!cr6.eq) goto loc_823B0478;
loc_823B0434:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// beq cr6,0x823b0434
	if (cr6.eq) goto loc_823B0434;
	// b 0x823b0478
	goto loc_823B0478;
loc_823B044C:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x823b0484
	if (cr6.gt) goto loc_823B0484;
	// cmplwi cr6,r6,25
	cr6.compare<uint32_t>(ctx.r6.u32, 25, xer);
	// bge cr6,0x823b0470
	if (!cr6.lt) goto loc_823B0470;
	// addi r11,r11,-48
	r11.s64 = r11.s64 + -48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_823B0470:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_823B0478:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bge cr6,0x823b044c
	if (!cr6.lt) goto loc_823B044C;
loc_823B0484:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// b 0x823b0404
	goto loc_823B0404;
loc_823B048C:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x823b035c
	if (cr6.lt) goto loc_823B035C;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x823b035c
	if (cr6.gt) goto loc_823B035C;
	// li r11,4
	r11.s64 = 4;
	// b 0x823b0254
	goto loc_823B0254;
loc_823B04AC:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r5,r8,-2
	ctx.r5.s64 = ctx.r8.s64 + -2;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x823b04cc
	if (cr6.lt) goto loc_823B04CC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x823b04cc
	if (cr6.gt) goto loc_823B04CC;
loc_823B04C4:
	// li r11,9
	r11.s64 = 9;
	// b 0x823b0254
	goto loc_823B0254;
loc_823B04CC:
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x823b04ec
	if (cr6.eq) goto loc_823B04EC;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x823b0568
	if (cr6.eq) goto loc_823B0568;
loc_823B04DC:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x823b035c
	if (!cr6.eq) goto loc_823B035C;
	// li r11,8
	r11.s64 = 8;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B04EC:
	// li r11,7
	r11.s64 = 7;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B04F4:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bne cr6,0x823b0514
	if (!cr6.eq) goto loc_823B0514;
loc_823B0504:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// beq cr6,0x823b0504
	if (cr6.eq) goto loc_823B0504;
loc_823B0514:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x823b0528
	if (cr6.lt) goto loc_823B0528;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x823b04c4
	if (!cr6.gt) goto loc_823B04C4;
loc_823B0528:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// b 0x823b0360
	goto loc_823B0360;
loc_823B0530:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	cr6.compare<int32_t>(r11.s32, 49, xer);
	// blt cr6,0x823b04dc
	if (cr6.lt) goto loc_823B04DC;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x823b04c4
	if (!cr6.gt) goto loc_823B04C4;
	// b 0x823b04dc
	goto loc_823B04DC;
loc_823B0548:
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x823b0574
	if (cr6.eq) goto loc_823B0574;
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// addi r5,r8,-1
	ctx.r5.s64 = ctx.r8.s64 + -1;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x823b04ec
	if (cr6.eq) goto loc_823B04EC;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// bne cr6,0x823b035c
	if (!cr6.eq) goto loc_823B035C;
loc_823B0568:
	// li r11,7
	r11.s64 = 7;
	// li r27,-1
	r27.s64 = -1;
	// b 0x823b0204
	goto loc_823B0204;
loc_823B0574:
	// li r11,10
	r11.s64 = 10;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_823B057C:
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x823b0204
	if (!cr6.eq) goto loc_823B0204;
	// b 0x823b0360
	goto loc_823B0360;
loc_823B0588:
	// li r28,1
	r28.s64 = 1;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// b 0x823b05b8
	goto loc_823B05B8;
loc_823B0594:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x823b05cc
	if (cr6.gt) goto loc_823B05CC;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r9,r11,-48
	ctx.r9.s64 = r11.s64 + -48;
	// cmpwi cr6,r9,5200
	cr6.compare<int32_t>(ctx.r9.s32, 5200, xer);
	// bgt cr6,0x823b05c8
	if (cr6.gt) goto loc_823B05C8;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_823B05B8:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bge cr6,0x823b0594
	if (!cr6.lt) goto loc_823B0594;
	// b 0x823b05cc
	goto loc_823B05CC;
loc_823B05C8:
	// li r9,5201
	ctx.r9.s64 = 5201;
loc_823B05CC:
	// extsb r11,r10
	r11.s64 = ctx.r10.s8;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// b 0x823b05ec
	goto loc_823B05EC;
loc_823B05D8:
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// bgt cr6,0x823b0528
	if (cr6.gt) goto loc_823B0528;
	// lbz r11,0(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// extsb r11,r11
	r11.s64 = r11.s8;
loc_823B05EC:
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// bge cr6,0x823b05d8
	if (!cr6.lt) goto loc_823B05D8;
	// b 0x823b0528
	goto loc_823B0528;
loc_823B05F8:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823B0604:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b05f8
	if (cr6.eq) goto loc_823B05F8;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823b3af0
	sub_823B3AF0(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bge cr6,0x823b062c
	if (!cr6.lt) goto loc_823B062C;
	// neg r29,r29
	r29.s64 = -r29.s64;
loc_823B062C:
	// add r11,r31,r29
	r11.u64 = r31.u64 + r29.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x823b063c
	if (!cr6.eq) goto loc_823B063C;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
loc_823B063C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x823b0648
	if (!cr6.eq) goto loc_823B0648;
	// subf r11,r24,r11
	r11.s64 = r11.s64 - r24.s64;
loc_823B0648:
	// cmpwi cr6,r11,5200
	cr6.compare<int32_t>(r11.s32, 5200, xer);
	// bgt cr6,0x823b0ae8
	if (cr6.gt) goto loc_823B0AE8;
	// cmpwi cr6,r11,-5200
	cr6.compare<int32_t>(r11.s32, -5200, xer);
	// blt cr6,0x823b0b00
	if (cr6.lt) goto loc_823B0B00;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// mr r24,r11
	r24.u64 = r11.u64;
	// addi r10,r10,-19952
	ctx.r10.s64 = ctx.r10.s64 + -19952;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// addi r25,r10,-96
	r25.s64 = ctx.r10.s64 + -96;
	// beq cr6,0x823b0a90
	if (cr6.eq) goto loc_823B0A90;
	// bge cr6,0x823b0684
	if (!cr6.lt) goto loc_823B0684;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// neg r24,r11
	r24.s64 = -r11.s64;
	// addi r10,r10,-19600
	ctx.r10.s64 = ctx.r10.s64 + -19600;
	// addi r25,r10,-96
	r25.s64 = ctx.r10.s64 + -96;
loc_823B0684:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x823b0690
	if (!cr6.eq) goto loc_823B0690;
	// sth r21,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, r21.u16);
loc_823B0690:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x823b0a90
	if (cr6.eq) goto loc_823B0A90;
	// lis r11,0
	r11.s64 = 0;
	// lis r22,-32768
	r22.s64 = -2147483648;
	// ori r26,r11,65535
	r26.u64 = r11.u64 | 65535;
	// lis r11,32767
	r11.s64 = 2147418112;
	// li r23,-32768
	r23.s64 = -32768;
	// ori r17,r11,32768
	r17.u64 = r11.u64 | 32768;
loc_823B06B0:
	// clrlwi. r11,r24,29
	r11.u64 = r24.u32 & 0x7;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r25,r25,84
	r25.s64 = r25.s64 + 84;
	// srawi r24,r24,3
	xer.ca = (r24.s32 < 0) & ((r24.u32 & 0x7) != 0);
	r24.s64 = r24.s32 >> 3;
	// beq 0x823b0a88
	if (cr0.eq) goto loc_823B0A88;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r25
	ctx.r4.u64 = r11.u64 + r25.u64;
	// lhz r11,10(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// cmplwi cr6,r11,32768
	cr6.compare<uint32_t>(r11.u32, 32768, xer);
	// blt cr6,0x823b0704
	if (cr6.lt) goto loc_823B0704;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lhz r11,118(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lhz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,16
	r11.u64 = __builtin_rotateleft32(r11.u32, 16);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r11.u16);
	// sth r10,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r10.u16);
loc_823B0704:
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// mr r28,r21
	r28.u64 = r21.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r21.u32);
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r11,96(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// xor r10,r11,r10
	ctx.r10.u64 = r11.u64 ^ ctx.r10.u64;
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// rlwinm r27,r10,0,16,16
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// clrlwi r10,r8,17
	ctx.r10.u64 = ctx.r8.u32 & 0x7FFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// clrlwi r29,r9,16
	r29.u64 = ctx.r9.u32 & 0xFFFF;
	// bge cr6,0x823b0a70
	if (!cr6.lt) goto loc_823B0A70;
	// cmplwi cr6,r10,32767
	cr6.compare<uint32_t>(ctx.r10.u32, 32767, xer);
	// bge cr6,0x823b0a70
	if (!cr6.lt) goto loc_823B0A70;
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// cmplwi cr6,r9,49149
	cr6.compare<uint32_t>(ctx.r9.u32, 49149, xer);
	// bgt cr6,0x823b0a70
	if (cr6.gt) goto loc_823B0A70;
	// cmplwi cr6,r9,16319
	cr6.compare<uint32_t>(ctx.r9.u32, 16319, xer);
	// bgt cr6,0x823b0764
	if (cr6.gt) goto loc_823B0764;
loc_823B075C:
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r21.u32);
	// b 0x823b0a80
	goto loc_823B0A80;
loc_823B0764:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b07a0
	if (!cr6.eq) goto loc_823B07A0;
	// addi r11,r9,1
	r11.s64 = ctx.r9.s64 + 1;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// clrlwi. r9,r9,1
	ctx.r9.u64 = ctx.r9.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823b07a0
	if (!cr0.eq) goto loc_823B07A0;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b07a0
	if (!cr6.eq) goto loc_823B07A0;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b07a0
	if (!cr6.eq) goto loc_823B07A0;
	// sth r21,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r21.u16);
	// b 0x823b0a88
	goto loc_823B0A88;
loc_823B07A0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823b07d8
	if (!cr6.eq) goto loc_823B07D8;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// clrlwi. r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b07d8
	if (!cr0.eq) goto loc_823B07D8;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823b07d8
	if (!cr6.eq) goto loc_823B07D8;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823b075c
	if (cr6.eq) goto loc_823B075C;
loc_823B07D8:
	// mr r30,r21
	r30.u64 = r21.u64;
	// addi r8,r1,86
	ctx.r8.s64 = ctx.r1.s64 + 86;
	// li r3,5
	ctx.r3.s64 = 5;
loc_823B07E4:
	// rlwinm r11,r30,1,0,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x823b0854
	if (!cr6.gt) goto loc_823B0854;
	// addi r10,r1,106
	ctx.r10.s64 = ctx.r1.s64 + 106;
	// addi r5,r4,2
	ctx.r5.s64 = ctx.r4.s64 + 2;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - r11.s64;
loc_823B0800:
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r7,r21
	ctx.r7.u64 = r21.u64;
	// lhz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// lwz r11,2(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823b0828
	if (cr6.lt) goto loc_823B0828;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x823b082c
	if (!cr6.lt) goto loc_823B082C;
loc_823B0828:
	// li r7,1
	ctx.r7.s64 = 1;
loc_823B082C:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r10,2(r8)
	PPC_STORE_U32(ctx.r8.u32 + 2, ctx.r10.u32);
	// beq cr6,0x823b0844
	if (cr6.eq) goto loc_823B0844;
	// lhz r11,0(r8)
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, r11.u16);
loc_823B0844:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r6,r6,-2
	ctx.r6.s64 = ctx.r6.s64 + -2;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bgt 0x823b0800
	if (cr0.gt) goto loc_823B0800;
loc_823B0854:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bgt 0x823b07e4
	if (cr0.gt) goto loc_823B07E4;
	// clrlwi r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r11,r11,-16382
	r11.s64 = r11.s64 + -16382;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// extsh. r10,r11
	ctx.r10.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// ble 0x823b08cc
	if (!cr0.gt) goto loc_823B08CC;
loc_823B0880:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r9,r6,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823b08cc
	if (!cr0.eq) goto loc_823B08CC;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r10,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r8,r7,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// or r9,r6,r8
	ctx.r9.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x823b0880
	if (cr0.gt) goto loc_823B0880;
loc_823B08CC:
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bgt 0x823b096c
	if (cr0.gt) goto loc_823B096C;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bge 0x823b096c
	if (!cr0.lt) goto loc_823B096C;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823B08F0:
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823b0900
	if (cr0.eq) goto loc_823B0900;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_823B0900:
	// clrlwi. r9,r6,31
	ctx.r9.u64 = ctx.r6.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// bne 0x823b0910
	if (!cr0.eq) goto loc_823B0910;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
loc_823B0910:
	// clrlwi. r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// bne 0x823b0920
	if (!cr0.eq) goto loc_823B0920;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_823B0920:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r6,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 31) & 0x7FFFFFFF;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// extsh. r9,r11
	ctx.r9.s64 = r11.s16;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt 0x823b08f0
	if (cr0.lt) goto loc_823B08F0;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// beq cr6,0x823b096c
	if (cr6.eq) goto loc_823B096C;
	// lhz r10,90(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823B096C:
	// lhz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 90);
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// bgt cr6,0x823b098c
	if (cr6.gt) goto loc_823B098C;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// clrlwi r10,r10,15
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFF;
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x823b0a2c
	if (!cr6.eq) goto loc_823B0A2C;
loc_823B098C:
	// lhz r10,86(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x823b0a1c
	if (!cr6.eq) goto loc_823B0A1C;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// sth r9,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x823b0a08
	if (!cr6.eq) goto loc_823B0A08;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r8,r9,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// sth r9,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r9.u16);
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// bne cr6,0x823b09fc
	if (!cr6.eq) goto loc_823B09FC;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r20,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r20.u16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// b 0x823b0a2c
	goto loc_823B0A2C;
loc_823B09FC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// b 0x823b0a2c
	goto loc_823B0A2C;
loc_823B0A08:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r10.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// b 0x823b0a2c
	goto loc_823B0A2C;
loc_823B0A1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r10.u16);
	// sth r9,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r9.u16);
loc_823B0A2C:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,32767
	cr6.compare<uint32_t>(r11.u32, 32767, xer);
	// bge cr6,0x823b0a70
	if (!cr6.lt) goto loc_823B0A70;
	// lhz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// clrlwi r10,r27,16
	ctx.r10.u64 = r27.u32 & 0xFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// sth r9,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r9.u16);
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r11.u16);
	// sth r9,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r9.u16);
	// rlwinm r9,r10,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// b 0x823b0a88
	goto loc_823B0A88;
loc_823B0A70:
	// stw r23,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r23.u32);
	// clrlwi. r11,r27,16
	r11.u64 = r27.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b0a80
	if (!cr0.eq) goto loc_823B0A80;
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r17.u32);
loc_823B0A80:
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r21.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r21.u32);
loc_823B0A88:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x823b06b0
	if (!cr6.eq) goto loc_823B06B0;
loc_823B0A90:
	// lhz r10,102(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// lhz r11,106(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// or r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// or r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// b 0x823b0b14
	goto loc_823B0B14;
loc_823B0ABC:
	// mr r11,r21
	r11.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// b 0x823b0b14
	goto loc_823B0B14;
loc_823B0AD0:
	// mr r11,r21
	r11.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// li r21,4
	r21.s64 = 4;
	// b 0x823b0b14
	goto loc_823B0B14;
loc_823B0AE8:
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r11,r21
	r11.u64 = r21.u64;
	// li r10,32767
	ctx.r10.s64 = 32767;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// li r21,2
	r21.s64 = 2;
	// b 0x823b0b14
	goto loc_823B0B14;
loc_823B0B00:
	// mr r11,r21
	r11.u64 = r21.u64;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// li r21,1
	r21.s64 = 1;
loc_823B0B14:
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// sth r11,10(r19)
	PPC_STORE_U16(r19.u32 + 10, r11.u16);
	// clrlwi r7,r18,16
	ctx.r7.u64 = r18.u32 & 0xFFFF;
	// stw r8,6(r19)
	PPC_STORE_U32(r19.u32 + 6, ctx.r8.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r9,2(r19)
	PPC_STORE_U32(r19.u32 + 2, ctx.r9.u32);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// sth r10,0(r19)
	PPC_STORE_U16(r19.u32 + 0, ctx.r10.u16);
loc_823B0B34:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_823B0B3C"))) PPC_WEAK_FUNC(sub_823B0B3C);
PPC_FUNC_IMPL(__imp__sub_823B0B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0B40"))) PPC_WEAK_FUNC(sub_823B0B40);
PPC_FUNC_IMPL(__imp__sub_823B0B40) {
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
	// lwz r16,-14280(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14280);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	r28.s64 = 3;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// lis r27,-32126
	r27.s64 = -2105409536;
loc_823B0B78:
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,15144(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 15144);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x823b0bf0
	if (!cr6.lt) goto loc_823B0BF0;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,15140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15140);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b0be4
	if (cr6.eq) goto loc_823B0BE4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b0bc4
	if (cr0.eq) goto loc_823B0BC4;
	// bl 0x8239ee58
	sub_8239EE58(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823b0bc4
	if (cr6.eq) goto loc_823B0BC4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
loc_823B0BC4:
	// cmpwi cr6,r28,20
	cr6.compare<int32_t>(r28.s32, 20, xer);
	// blt cr6,0x823b0be4
	if (cr6.lt) goto loc_823B0BE4;
	// lwz r11,15140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15140);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// lwz r11,15140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15140);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
loc_823B0BE4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x823b0b78
	goto loc_823B0B78;
loc_823B0BF0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x823b0c08
	sub_823B0C08(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823B0B48"))) PPC_WEAK_FUNC(sub_823B0B48);
PPC_FUNC_IMPL(__imp__sub_823B0B48) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// li r26,0
	r26.s64 = 0;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// bl 0x823a4260
	sub_823A4260(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,3
	r28.s64 = 3;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// lis r27,-32126
	r27.s64 = -2105409536;
loc_823B0B78:
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// lwz r11,15144(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 15144);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bge cr6,0x823b0bf0
	if (!cr6.lt) goto loc_823B0BF0;
	// rlwinm r30,r28,2,0,29
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,15140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15140);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b0be4
	if (cr6.eq) goto loc_823B0BE4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// andi. r11,r11,131
	r11.u64 = r11.u64 & 131;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b0bc4
	if (cr0.eq) goto loc_823B0BC4;
	// bl 0x8239ee58
	sub_8239EE58(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823b0bc4
	if (cr6.eq) goto loc_823B0BC4;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
loc_823B0BC4:
	// cmpwi cr6,r28,20
	cr6.compare<int32_t>(r28.s32, 20, xer);
	// blt cr6,0x823b0be4
	if (cr6.lt) goto loc_823B0BE4;
	// lwz r11,15140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15140);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
	// lwz r11,15140(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 15140);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r10.u32);
loc_823B0BE4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// b 0x823b0b78
	goto loc_823B0B78;
loc_823B0BF0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,144
	r12.s64 = r31.s64 + 144;
	// bl 0x823b0c08
	sub_823B0C08(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823B0C08"))) PPC_WEAK_FUNC(sub_823B0C08);
PPC_FUNC_IMPL(__imp__sub_823B0C08) {
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
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_823B0C2C"))) PPC_WEAK_FUNC(sub_823B0C2C);
PPC_FUNC_IMPL(__imp__sub_823B0C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B0C30"))) PPC_WEAK_FUNC(sub_823B0C30);
PPC_FUNC_IMPL(__imp__sub_823B0C30) {
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
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,-21688
	ctx.r10.s64 = r11.s64 + -21688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b0140
	sub_823B0140(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b2cc0
	sub_823B2CC0(ctx, base);
	// clrlwi. r11,r31,30
	r11.u64 = r31.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b0ca8
	if (!cr0.eq) goto loc_823B0CA8;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x823b0c98
	if (!cr6.eq) goto loc_823B0C98;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x823b0cc0
	goto loc_823B0CC0;
loc_823B0C98:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823b0cbc
	if (!cr6.eq) goto loc_823B0CBC;
loc_823B0CA0:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x823b0cc0
	goto loc_823B0CC0;
loc_823B0CA8:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b0ca0
	if (!cr0.eq) goto loc_823B0CA0;
	// rlwinm. r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x823b0cc0
	if (!cr0.eq) goto loc_823B0CC0;
loc_823B0CBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B0CC0:
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

__attribute__((alias("__imp__sub_823B0CD8"))) PPC_WEAK_FUNC(sub_823B0CD8);
PPC_FUNC_IMPL(__imp__sub_823B0CD8) {
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
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r10,r11,-21688
	ctx.r10.s64 = r11.s64 + -21688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b0140
	sub_823B0140(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823b33d8
	sub_823B33D8(ctx, base);
	// clrlwi. r11,r31,30
	r11.u64 = r31.u32 & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b0d50
	if (!cr0.eq) goto loc_823B0D50;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x823b0d40
	if (!cr6.eq) goto loc_823B0D40;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x823b0d68
	goto loc_823B0D68;
loc_823B0D40:
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x823b0d64
	if (!cr6.eq) goto loc_823B0D64;
loc_823B0D48:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x823b0d68
	goto loc_823B0D68;
loc_823B0D50:
	// clrlwi. r11,r31,31
	r11.u64 = r31.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823b0d48
	if (!cr0.eq) goto loc_823B0D48;
	// rlwinm. r11,r31,0,30,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,3
	ctx.r3.s64 = 3;
	// bne 0x823b0d68
	if (!cr0.eq) goto loc_823B0D68;
loc_823B0D64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B0D68:
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

__attribute__((alias("__imp__sub_823B0D80"))) PPC_WEAK_FUNC(sub_823B0D80);
PPC_FUNC_IMPL(__imp__sub_823B0D80) {
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
	// lwz r8,12(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b0dcc
	if (!cr6.eq) goto loc_823B0DCC;
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
	// b 0x823b0efc
	goto loc_823B0EFC;
loc_823B0DCC:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x823b0e00
	if (!cr6.eq) goto loc_823B0E00;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r31,22
	r31.s64 = 22;
loc_823B0DDC:
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
	// b 0x823b0efc
	goto loc_823B0EFC;
loc_823B0E00:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stb r7,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r7.u8);
	// bgt cr6,0x823b0e18
	if (cr6.gt) goto loc_823B0E18;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823B0E18:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgt cr6,0x823b0e30
	if (cr6.gt) goto loc_823B0E30;
	// bl 0x8239ff90
	sub_8239FF90(ctx, base);
	// li r31,34
	r31.s64 = 34;
	// b 0x823b0ddc
	goto loc_823B0DDC;
loc_823B0E30:
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// ble cr6,0x823b0e70
	if (!cr6.gt) goto loc_823B0E70;
loc_823B0E48:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823b0e5c
	if (cr0.eq) goto loc_823B0E5C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x823b0e60
	goto loc_823B0E60;
loc_823B0E5C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823B0E60:
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bgt 0x823b0e48
	if (cr0.gt) goto loc_823B0E48;
loc_823B0E70:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// blt cr6,0x823b0eb0
	if (cr6.lt) goto loc_823B0EB0;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,53
	cr6.compare<int32_t>(ctx.r10.s32, 53, xer);
	// blt cr6,0x823b0eb0
	if (cr6.lt) goto loc_823B0EB0;
	// b 0x823b0e94
	goto loc_823B0E94;
loc_823B0E90:
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_823B0E94:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,57
	cr6.compare<uint32_t>(ctx.r10.u32, 57, xer);
	// beq cr6,0x823b0e90
	if (cr6.eq) goto loc_823B0E90;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
loc_823B0EB0:
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,49
	cr6.compare<uint32_t>(r11.u32, 49, xer);
	// bne cr6,0x823b0ecc
	if (!cr6.eq) goto loc_823B0ECC;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// b 0x823b0ef8
	goto loc_823B0EF8;
loc_823B0ECC:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823B0ED4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b0ed4
	if (!cr6.eq) goto loc_823B0ED4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_823B0EF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823B0EFC:
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

__attribute__((alias("__imp__sub_823B0F10"))) PPC_WEAK_FUNC(sub_823B0F10);
PPC_FUNC_IMPL(__imp__sub_823B0F10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,0(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r6,r11,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF8000;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r11,r11,28,21,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7FF;
	// clrlwi r7,r8,12
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFFF;
	// clrlwi. r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b0f4c
	if (cr0.eq) goto loc_823B0F4C;
	// cmpwi cr6,r11,2047
	cr6.compare<int32_t>(r11.s32, 2047, xer);
	// beq cr6,0x823b0f44
	if (cr6.eq) goto loc_823B0F44;
	// addi r11,r11,15360
	r11.s64 = r11.s64 + 15360;
	// b 0x823b0f78
	goto loc_823B0F78;
loc_823B0F44:
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x823b0f7c
	goto loc_823B0F7C;
loc_823B0F4C:
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x823b0f70
	if (!cr6.eq) goto loc_823B0F70;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823b0f70
	if (!cr6.eq) goto loc_823B0F70;
	// li r11,0
	r11.s64 = 0;
	// sth r6,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r6.u16);
	// stw r11,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, r11.u32);
	// stw r11,6(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6, r11.u32);
	// blr 
	return;
loc_823B0F70:
	// addi r11,r11,15361
	r11.s64 = r11.s64 + 15361;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823B0F78:
	// clrlwi r8,r11,16
	ctx.r8.u64 = r11.u32 & 0xFFFF;
loc_823B0F7C:
	// rlwinm r11,r9,11,21,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// rlwinm r7,r7,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r10,r9,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// stw r11,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, r11.u32);
	// stw r10,6(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6, ctx.r10.u32);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823b0fdc
	if (!cr0.eq) goto loc_823B0FDC;
loc_823B0FA0:
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// lwz r11,6(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 6);
	// lwz r9,2(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r11,6(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6, r11.u32);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r10,2(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2, ctx.r10.u32);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823b0fa0
	if (cr0.eq) goto loc_823B0FA0;
loc_823B0FDC:
	// clrlwi r11,r6,16
	r11.u64 = ctx.r6.u32 & 0xFFFF;
	// clrlwi r10,r8,16
	ctx.r10.u64 = ctx.r8.u32 & 0xFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B0FF0"))) PPC_WEAK_FUNC(sub_823B0FF0);
PPC_FUNC_IMPL(__imp__sub_823B0FF0) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r3,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r3.u64);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x823b0f10
	sub_823B0F10(ctx, base);
	// lhz r11,88(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,0
	ctx.r6.s64 = 0;
	// ld r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,17
	ctx.r5.s64 = 17;
	// rldicr r4,r11,48,63
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// bl 0x823b3d80
	sub_823B3D80(ctx, base);
	// lbz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 98);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lha r9,96(r1)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 96));
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// bl 0x8239d3a0
	sub_8239D3A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823b1080
	if (cr0.eq) goto loc_823B1080;
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
loc_823B1080:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823B1090"))) PPC_WEAK_FUNC(sub_823B1090);
PPC_FUNC_IMPL(__imp__sub_823B1090) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8239f088
	sub_8239F088(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823B1098"))) PPC_WEAK_FUNC(sub_823B1098);
PPC_FUNC_IMPL(__imp__sub_823B1098) {
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
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x823b10cc
	if (cr6.eq) goto loc_823B10CC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,-31612(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -31612);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b10f0
	if (cr6.eq) goto loc_823B10F0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823b10f0
	goto loc_823B10F0;
loc_823B10CC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,-31608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -31608);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823b10e8
	if (cr6.eq) goto loc_823B10E8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823B10E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823a2b58
	sub_823A2B58(ctx, base);
loc_823B10F0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1100"))) PPC_WEAK_FUNC(sub_823B1100);
PPC_FUNC_IMPL(__imp__sub_823B1100) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r7
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// stw r7,-88(r1)
	PPC_STORE_U32(ctx.r1.u32 + -88, ctx.r7.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x823b4ac0
	sub_823B4AC0(ctx, base);
	// mr r12,r4
	r12.u64 = ctx.r4.u64;
	// stw r30,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r30.u32);
	// mtlr r3
	// blrl 
__builtin_debugtrap();
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// cmplwi r31,256
	cr0.compare<uint32_t>(r31.u32, 256, xer);
	// bne 0x823b1140
	if (!cr0.eq) goto loc_823B1140;
	// li r5,2
	ctx.r5.s64 = 2;
loc_823B1140:
	// bl 0x823b4ac0
	sub_823B4AC0(ctx, base);
	// lwz r7,8(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 8);
	// mtlr r7
	// ld r30,80(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r31,88(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B115C"))) PPC_WEAK_FUNC(sub_823B115C);
PPC_FUNC_IMPL(__imp__sub_823B115C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr1{};
	PPCCRRegister cr2{};
	PPCCRRegister cr3{};
	PPCCRRegister cr4{};
	PPCCRRegister cr5{};
	PPCCRRegister cr6{};
	PPCCRRegister cr7{};
	PPCRegister r2{};
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
	// lfd f14,408(r4)
	ctx.fpscr.disableFlushMode();
	f14.u64 = PPC_LOAD_U64(ctx.r4.u32 + 408);
	// lfd f15,416(r4)
	f15.u64 = PPC_LOAD_U64(ctx.r4.u32 + 416);
	// lfd f16,424(r4)
	f16.u64 = PPC_LOAD_U64(ctx.r4.u32 + 424);
	// lfd f17,432(r4)
	f17.u64 = PPC_LOAD_U64(ctx.r4.u32 + 432);
	// lfd f18,440(r4)
	f18.u64 = PPC_LOAD_U64(ctx.r4.u32 + 440);
	// lfd f19,448(r4)
	f19.u64 = PPC_LOAD_U64(ctx.r4.u32 + 448);
	// lfd f20,456(r4)
	f20.u64 = PPC_LOAD_U64(ctx.r4.u32 + 456);
	// lfd f21,464(r4)
	f21.u64 = PPC_LOAD_U64(ctx.r4.u32 + 464);
	// lfd f22,472(r4)
	f22.u64 = PPC_LOAD_U64(ctx.r4.u32 + 472);
	// lfd f23,480(r4)
	f23.u64 = PPC_LOAD_U64(ctx.r4.u32 + 480);
	// lfd f24,488(r4)
	f24.u64 = PPC_LOAD_U64(ctx.r4.u32 + 488);
	// lfd f25,496(r4)
	f25.u64 = PPC_LOAD_U64(ctx.r4.u32 + 496);
	// lfd f26,504(r4)
	f26.u64 = PPC_LOAD_U64(ctx.r4.u32 + 504);
	// lfd f27,512(r4)
	f27.u64 = PPC_LOAD_U64(ctx.r4.u32 + 512);
	// lfd f28,520(r4)
	f28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 520);
	// lfd f29,528(r4)
	f29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 528);
	// lfd f30,536(r4)
	f30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 536);
	// lfd f31,544(r4)
	f31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 544);
	// ld r14,136(r4)
	r14.u64 = PPC_LOAD_U64(ctx.r4.u32 + 136);
	// ld r15,144(r4)
	r15.u64 = PPC_LOAD_U64(ctx.r4.u32 + 144);
	// ld r16,152(r4)
	r16.u64 = PPC_LOAD_U64(ctx.r4.u32 + 152);
	// ld r17,160(r4)
	r17.u64 = PPC_LOAD_U64(ctx.r4.u32 + 160);
	// ld r18,168(r4)
	r18.u64 = PPC_LOAD_U64(ctx.r4.u32 + 168);
	// ld r19,176(r4)
	r19.u64 = PPC_LOAD_U64(ctx.r4.u32 + 176);
	// ld r20,184(r4)
	r20.u64 = PPC_LOAD_U64(ctx.r4.u32 + 184);
	// ld r21,192(r4)
	r21.u64 = PPC_LOAD_U64(ctx.r4.u32 + 192);
	// ld r22,200(r4)
	r22.u64 = PPC_LOAD_U64(ctx.r4.u32 + 200);
	// ld r23,208(r4)
	r23.u64 = PPC_LOAD_U64(ctx.r4.u32 + 208);
	// ld r24,216(r4)
	r24.u64 = PPC_LOAD_U64(ctx.r4.u32 + 216);
	// ld r25,224(r4)
	r25.u64 = PPC_LOAD_U64(ctx.r4.u32 + 224);
	// ld r26,232(r4)
	r26.u64 = PPC_LOAD_U64(ctx.r4.u32 + 232);
	// ld r27,240(r4)
	r27.u64 = PPC_LOAD_U64(ctx.r4.u32 + 240);
	// ld r28,248(r4)
	r28.u64 = PPC_LOAD_U64(ctx.r4.u32 + 248);
	// ld r29,256(r4)
	r29.u64 = PPC_LOAD_U64(ctx.r4.u32 + 256);
	// ld r30,264(r4)
	r30.u64 = PPC_LOAD_U64(ctx.r4.u32 + 264);
	// ld r31,272(r4)
	r31.u64 = PPC_LOAD_U64(ctx.r4.u32 + 272);
	// lfd f0,288(r4)
	f0.u64 = PPC_LOAD_U64(ctx.r4.u32 + 288);
	// lwz r5,280(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	// lwz r6,284(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 284);
	// ld r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16);
	// mtfsf 255,f0
	ctx.fpscr.storeFromGuest(f0.u32);
	// mtlr r3
	// mtcr r5
	cr0.lt = (ctx.r5.u32 & 0x80000000) != 0;
	cr0.gt = (ctx.r5.u32 & 0x40000000) != 0;
	cr0.eq = (ctx.r5.u32 & 0x20000000) != 0;
	cr0.so = (ctx.r5.u32 & 0x10000000) != 0;
	cr1.lt = (ctx.r5.u32 & 0x8000000) != 0;
	cr1.gt = (ctx.r5.u32 & 0x4000000) != 0;
	cr1.eq = (ctx.r5.u32 & 0x2000000) != 0;
	cr1.so = (ctx.r5.u32 & 0x1000000) != 0;
	cr2.lt = (ctx.r5.u32 & 0x800000) != 0;
	cr2.gt = (ctx.r5.u32 & 0x400000) != 0;
	cr2.eq = (ctx.r5.u32 & 0x200000) != 0;
	cr2.so = (ctx.r5.u32 & 0x100000) != 0;
	cr3.lt = (ctx.r5.u32 & 0x80000) != 0;
	cr3.gt = (ctx.r5.u32 & 0x40000) != 0;
	cr3.eq = (ctx.r5.u32 & 0x20000) != 0;
	cr3.so = (ctx.r5.u32 & 0x10000) != 0;
	cr4.lt = (ctx.r5.u32 & 0x8000) != 0;
	cr4.gt = (ctx.r5.u32 & 0x4000) != 0;
	cr4.eq = (ctx.r5.u32 & 0x2000) != 0;
	cr4.so = (ctx.r5.u32 & 0x1000) != 0;
	cr5.lt = (ctx.r5.u32 & 0x800) != 0;
	cr5.gt = (ctx.r5.u32 & 0x400) != 0;
	cr5.eq = (ctx.r5.u32 & 0x200) != 0;
	cr5.so = (ctx.r5.u32 & 0x100) != 0;
	cr6.lt = (ctx.r5.u32 & 0x80) != 0;
	cr6.gt = (ctx.r5.u32 & 0x40) != 0;
	cr6.eq = (ctx.r5.u32 & 0x20) != 0;
	cr6.so = (ctx.r5.u32 & 0x10) != 0;
	cr7.lt = (ctx.r5.u32 & 0x8) != 0;
	cr7.gt = (ctx.r5.u32 & 0x4) != 0;
	cr7.eq = (ctx.r5.u32 & 0x2) != 0;
	cr7.so = (ctx.r5.u32 & 0x1) != 0;
	// mtxer r6
	xer.so = (ctx.r6.u64 & 0x80000000) != 0;
	xer.ov = (ctx.r6.u64 & 0x40000000) != 0;
	xer.ca = (ctx.r6.u64 & 0x20000000) != 0;
	// mtctr r7
	ctr.u64 = ctx.r7.u64;
	// ld r2,40(r4)
	r2.u64 = PPC_LOAD_U64(ctx.r4.u32 + 40);
	// ld r1,32(r4)
	ctx.r1.u64 = PPC_LOAD_U64(ctx.r4.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B121C"))) PPC_WEAK_FUNC(sub_823B121C);
PPC_FUNC_IMPL(__imp__sub_823B121C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B1220"))) PPC_WEAK_FUNC(sub_823B1220);
PPC_FUNC_IMPL(__imp__sub_823B1220) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823b1230
	if (!cr6.eq) goto loc_823B1230;
	// li r11,0
	r11.s64 = 0;
loc_823B1230:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823B1238"))) PPC_WEAK_FUNC(sub_823B1238);
PPC_FUNC_IMPL(__imp__sub_823B1238) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823B123C"))) PPC_WEAK_FUNC(sub_823B123C);
PPC_FUNC_IMPL(__imp__sub_823B123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

