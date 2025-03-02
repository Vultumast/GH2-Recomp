#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82491098"))) PPC_WEAK_FUNC(sub_82491098);
PPC_FUNC_IMPL(__imp__sub_82491098) {
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
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r5,19
	cr6.compare<uint32_t>(ctx.r5.u32, 19, xer);
	// stw r6,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// beq cr6,0x8249111c
	if (cr6.eq) goto loc_8249111C;
	// cmplwi cr6,r5,20
	cr6.compare<uint32_t>(ctx.r5.u32, 20, xer);
	// beq cr6,0x82491114
	if (cr6.eq) goto loc_82491114;
	// cmplwi cr6,r5,21
	cr6.compare<uint32_t>(ctx.r5.u32, 21, xer);
	// beq cr6,0x8249110c
	if (cr6.eq) goto loc_8249110C;
	// cmplwi cr6,r5,22
	cr6.compare<uint32_t>(ctx.r5.u32, 22, xer);
	// beq cr6,0x82491100
	if (cr6.eq) goto loc_82491100;
	// cmplwi cr6,r5,23
	cr6.compare<uint32_t>(ctx.r5.u32, 23, xer);
	// beq cr6,0x824910f4
	if (cr6.eq) goto loc_824910F4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// li r11,15
	r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82491180
	goto loc_82491180;
loc_824910F4:
	// li r11,11
	r11.s64 = 11;
loc_824910F8:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82491190
	goto loc_82491190;
loc_82491100:
	// li r11,10
	r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82491178
	goto loc_82491178;
loc_8249110C:
	// li r11,10
	r11.s64 = 10;
	// b 0x824910f8
	goto loc_824910F8;
loc_82491114:
	// li r11,5
	r11.s64 = 5;
	// b 0x824910f8
	goto loc_824910F8;
loc_8249111C:
	// cmplwi cr6,r6,10
	cr6.compare<uint32_t>(ctx.r6.u32, 10, xer);
	// bge cr6,0x8249116c
	if (!cr6.lt) goto loc_8249116C;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// beq cr6,0x8249115c
	if (cr6.eq) goto loc_8249115C;
	// cmplwi cr6,r3,21
	cr6.compare<uint32_t>(ctx.r3.u32, 21, xer);
	// beq cr6,0x8249110c
	if (cr6.eq) goto loc_8249110C;
	// cmplwi cr6,r3,22
	cr6.compare<uint32_t>(ctx.r3.u32, 22, xer);
	// beq cr6,0x82491100
	if (cr6.eq) goto loc_82491100;
	// cmplwi cr6,r3,23
	cr6.compare<uint32_t>(ctx.r3.u32, 23, xer);
	// beq cr6,0x824910f4
	if (cr6.eq) goto loc_824910F4;
	// cmplwi cr6,r3,33
	cr6.compare<uint32_t>(ctx.r3.u32, 33, xer);
	// beq cr6,0x82491114
	if (cr6.eq) goto loc_82491114;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// li r11,15
	r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8249118c
	goto loc_8249118C;
loc_8249115C:
	// li r11,5
	r11.s64 = 5;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r4.u32);
	// b 0x82491180
	goto loc_82491180;
loc_8249116C:
	// rlwinm r11,r6,28,4,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82491178:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82491180:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// ble cr6,0x82491190
	if (!cr6.gt) goto loc_82491190;
loc_8249118C:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82491190:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x824911a0
	if (cr6.lt) goto loc_824911A0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824911A0:
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

__attribute__((alias("__imp__sub_824911B8"))) PPC_WEAK_FUNC(sub_824911B8);
PPC_FUNC_IMPL(__imp__sub_824911B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r30,27,5,31
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// blt cr6,0x824911fc
	if (cr6.lt) goto loc_824911FC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,808
	ctx.r7.s64 = 808;
	// addi r6,r11,9064
	ctx.r6.s64 = r11.s64 + 9064;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,9004
	ctx.r5.s64 = r11.s64 + 9004;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_824911FC:
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82491220"))) PPC_WEAK_FUNC(sub_82491220);
PPC_FUNC_IMPL(__imp__sub_82491220) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r30,r31,27,5,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x7FFFFFF;
	// cmplwi cr6,r30,8
	cr6.compare<uint32_t>(r30.u32, 8, xer);
	// blt cr6,0x82491264
	if (cr6.lt) goto loc_82491264;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,814
	ctx.r7.s64 = 814;
	// addi r6,r11,9064
	ctx.r6.s64 = r11.s64 + 9064;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,9004
	ctx.r5.s64 = r11.s64 + 9004;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82491264:
	// clrlwi r11,r31,27
	r11.u64 = r31.u32 & 0x1F;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r29.u32);
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// and r11,r11,r9
	r11.u64 = r11.u64 & ctx.r9.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82491294"))) PPC_WEAK_FUNC(sub_82491294);
PPC_FUNC_IMPL(__imp__sub_82491294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82491298"))) PPC_WEAK_FUNC(sub_82491298);
PPC_FUNC_IMPL(__imp__sub_82491298) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister temp{};
	// srawi r11,r4,5
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	r11.s64 = ctx.r4.s32 >> 5;
	// addze. r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x824912e0
	if (cr0.lt) goto loc_824912E0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_824912AC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x824912d4
	if (cr6.eq) goto loc_824912D4;
	// li r10,31
	ctx.r10.s64 = 31;
loc_824912BC:
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and. r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x824912e8
	if (cr0.eq) goto loc_824912E8;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge 0x824912bc
	if (!cr0.lt) goto loc_824912BC;
loc_824912D4:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x824912ac
	if (!cr0.lt) goto loc_824912AC;
loc_824912E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_824912E8:
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824912F4"))) PPC_WEAK_FUNC(sub_824912F4);
PPC_FUNC_IMPL(__imp__sub_824912F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824912F8"))) PPC_WEAK_FUNC(sub_824912F8);
PPC_FUNC_IMPL(__imp__sub_824912F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r30,12(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r28,8(r4)
	r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82491318
	if (!cr0.eq) goto loc_82491318;
	// li r30,1
	r30.s64 = 1;
loc_82491318:
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82491340
	if (cr6.eq) goto loc_82491340;
	// addi r29,r3,40
	r29.s64 = ctx.r3.s64 + 40;
loc_82491328:
	// add r4,r31,r28
	ctx.r4.u64 = r31.u64 + r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824911b8
	sub_824911B8(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x82491328
	if (cr6.lt) goto loc_82491328;
loc_82491340:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82491348"))) PPC_WEAK_FUNC(sub_82491348);
PPC_FUNC_IMPL(__imp__sub_82491348) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x824913a4
	if (!cr6.eq) goto loc_824913A4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8249139c
	if (!cr6.eq) goto loc_8249139C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824912f8
	sub_824912F8(ctx, base);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_8249139C:
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// beq cr6,0x82491468
	if (cr6.eq) goto loc_82491468;
loc_824913A4:
	// lhz r11,6(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x824913c8
	if (cr6.eq) goto loc_824913C8;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x824913d8
	if (!cr6.eq) goto loc_824913D8;
loc_824913C8:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x824913d8
	if (cr0.eq) goto loc_824913D8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_824913D8:
	// mr. r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq 0x82491570
	if (cr0.eq) goto loc_82491570;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_824913F0:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82491400
	if (!cr6.lt) goto loc_82491400;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82491400:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// bl 0x82491348
	sub_82491348(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249145c
	if (cr6.eq) goto loc_8249145C;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_8249145C:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x824913f0
	if (!cr0.eq) goto loc_824913F0;
	// b 0x82491570
	goto loc_82491570;
loc_82491468:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82491570
	if (cr6.eq) goto loc_82491570;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
loc_82491488:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// add r7,r11,r28
	ctx.r7.u64 = r11.u64 + r28.u64;
	// lhz r11,6(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x824914ac
	if (cr6.eq) goto loc_824914AC;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x824914bc
	if (!cr6.eq) goto loc_824914BC;
loc_824914AC:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x824914bc
	if (cr0.eq) goto loc_824914BC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_824914BC:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lhz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bge cr6,0x824914dc
	if (!cr6.lt) goto loc_824914DC;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_824914DC:
	// lhz r10,6(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lhz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lhz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lhz r10,10(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// bl 0x82491348
	sub_82491348(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82491564
	if (cr6.eq) goto loc_82491564;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
loc_82491564:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82491488
	if (!cr0.eq) goto loc_82491488;
loc_82491570:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82491578"))) PPC_WEAK_FUNC(sub_82491578);
PPC_FUNC_IMPL(__imp__sub_82491578) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lhz r11,4(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lhz r11,6(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lhz r11,8(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,16(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// bne 0x824915b0
	if (!cr0.eq) goto loc_824915B0;
	// li r11,0
	r11.s64 = 0;
loc_824915B0:
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, r11.u32);
	// lhz r11,6(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// lhz r11,4(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// lhz r11,0(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lhz r11,2(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lhz r11,8(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, r11.u32);
	// lhz r11,10(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824915E8"))) PPC_WEAK_FUNC(sub_824915E8);
PPC_FUNC_IMPL(__imp__sub_824915E8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x8249168c
	if (cr6.eq) goto loc_8249168C;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8249168c
	if (cr0.eq) goto loc_8249168C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8249168c
	if (cr0.eq) goto loc_8249168C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// add r30,r10,r31
	r30.u64 = ctx.r10.u64 + r31.u64;
	// beq cr6,0x8249168c
	if (cr6.eq) goto loc_8249168C;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_8249163C:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r29,r11,r31
	r29.u64 = r11.u64 + r31.u64;
	// lhz r11,2(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82491680
	if (!cr6.eq) goto loc_82491680;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82491578
	sub_82491578(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82491348
	sub_82491348(ctx, base);
loc_82491680:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bne 0x8249163c
	if (!cr0.eq) goto loc_8249163C;
loc_8249168C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82491694"))) PPC_WEAK_FUNC(sub_82491694);
PPC_FUNC_IMPL(__imp__sub_82491694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82491698"))) PPC_WEAK_FUNC(sub_82491698);
PPC_FUNC_IMPL(__imp__sub_82491698) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r27,r31,8
	r27.s64 = r31.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82491220
	sub_82491220(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82491728
	if (!cr0.eq) goto loc_82491728;
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// lwz r4,4680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4680);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82491298
	sub_82491298(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x824916e8
	if (!cr0.lt) goto loc_824916E8;
	// li r11,1
	r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
	// b 0x82491730
	goto loc_82491730;
loc_824916E8:
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,4680(r31)
	PPC_STORE_U32(r31.u32 + 4680, r11.u32);
	// bl 0x824911b8
	sub_824911B8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stb r29,328(r11)
	PPC_STORE_U8(r11.u32 + 328, r29.u8);
	// bl 0x824911b8
	sub_824911B8(ctx, base);
	// add r10,r29,r31
	ctx.r10.u64 = r29.u64 + r31.u64;
	// stb r30,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, r30.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82491728:
	// add r11,r29,r31
	r11.u64 = r29.u64 + r31.u64;
	// lbz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 72);
loc_82491730:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82491738"))) PPC_WEAK_FUNC(sub_82491738);
PPC_FUNC_IMPL(__imp__sub_82491738) {
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
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82491858
	if (cr0.eq) goto loc_82491858;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82491858
	if (!cr0.eq) goto loc_82491858;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249177c
	if (!cr0.eq) goto loc_8249177C;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249177c
	if (!cr0.eq) goto loc_8249177C;
	// rlwinm. r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82491780
	if (!cr0.eq) goto loc_82491780;
loc_8249177C:
	// li r11,0
	r11.s64 = 0;
loc_82491780:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82491858
	if (cr0.eq) goto loc_82491858;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-1736
	r30.s64 = r11.s64 + -1736;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r29,r11,10,25,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x824917bc
	if (cr6.lt) goto loc_824917BC;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824917bc
	if (!cr0.eq) goto loc_824917BC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// bl 0x82491698
	sub_82491698(ctx, base);
	// stb r3,9(r31)
	PPC_STORE_U8(r31.u32 + 9, ctx.r3.u8);
loc_824917BC:
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x824917e4
	if (cr6.lt) goto loc_824917E4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824917e4
	if (!cr0.eq) goto loc_824917E4;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// bl 0x82491698
	sub_82491698(ctx, base);
	// stb r3,10(r31)
	PPC_STORE_U8(r31.u32 + 10, ctx.r3.u8);
loc_824917E4:
	// lwzx r11,r29,r30
	r11.u64 = PPC_LOAD_U32(r29.u32 + r30.u32);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-1296
	r30.s64 = r11.s64 + -1296;
	// bge cr6,0x8249180c
	if (!cr6.lt) goto loc_8249180C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82491828
	if (!cr6.eq) goto loc_82491828;
loc_8249180C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82491828
	if (!cr0.eq) goto loc_82491828;
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82491698
	sub_82491698(ctx, base);
	// stb r3,11(r31)
	PPC_STORE_U8(r31.u32 + 11, ctx.r3.u8);
loc_82491828:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8249184c
	if (!cr6.eq) goto loc_8249184C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r4,11(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 11);
	// bl 0x82491698
	sub_82491698(ctx, base);
	// stb r3,11(r31)
	PPC_STORE_U8(r31.u32 + 11, ctx.r3.u8);
loc_8249184C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,3,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82491858:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82491860"))) PPC_WEAK_FUNC(sub_82491860);
PPC_FUNC_IMPL(__imp__sub_82491860) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq 0x8249187c
	if (cr0.eq) goto loc_8249187C;
	// std r30,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r30.u64);
loc_8249187C:
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// beq 0x824918ec
	if (cr0.eq) goto loc_824918EC;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r9,19
	cr6.compare<uint32_t>(ctx.r9.u32, 19, xer);
	// bgt cr6,0x824918a8
	if (cr6.gt) goto loc_824918A8;
	// rlwinm r10,r11,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x3F;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
loc_824918A8:
	// clrlwi. r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// beq 0x824918c0
	if (cr0.eq) goto loc_824918C0;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x824918c8
	if (!cr0.eq) goto loc_824918C8;
loc_824918C0:
	// rlwinm r9,r11,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x3F;
	// slw r8,r4,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
loc_824918C8:
	// rlwinm. r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bne 0x824918d8
	if (!cr0.eq) goto loc_824918D8;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_824918D8:
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne 0x824918f0
	if (!cr0.eq) goto loc_824918F0;
	// clrldi r11,r8,32
	r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// b 0x824918f4
	goto loc_824918F4;
loc_824918EC:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_824918F0:
	// li r11,-1
	r11.s64 = -1;
loc_824918F4:
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// and r11,r11,r8
	r11.u64 = r11.u64 & ctx.r8.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x8249190c
	if (cr6.eq) goto loc_8249190C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_8249190C:
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82491918
	if (cr0.eq) goto loc_82491918;
	// std r30,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r30.u64);
loc_82491918:
	// ld r11,0(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82491934"))) PPC_WEAK_FUNC(sub_82491934);
PPC_FUNC_IMPL(__imp__sub_82491934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82491938"))) PPC_WEAK_FUNC(sub_82491938);
PPC_FUNC_IMPL(__imp__sub_82491938) {
	PPC_FUNC_PROLOGUE();
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
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,-27412
	r31.s64 = r11.s64 + -27412;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
loc_82491960:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x824919b4
	if (!cr6.eq) goto loc_824919B4;
	// stwcx. r29,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r29.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82491960
	if (!cr0.eq) goto loc_82491960;
	// b 0x824919bc
	goto loc_824919BC;
loc_82491984:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b5498
	sub_823B5498(ctx, base);
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
loc_82491990:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x824919b4
	if (!cr6.eq) goto loc_824919B4;
	// stwcx. r29,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r29.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82491990
	if (!cr0.eq) goto loc_82491990;
	// b 0x824919bc
	goto loc_824919BC;
loc_824919B4:
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
loc_824919BC:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82491984
	if (cr6.eq) goto loc_82491984;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824919e0
	if (!cr6.eq) goto loc_824919E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4bdc
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_824919E0:
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// addi r7,r31,40
	ctx.r7.s64 = r31.s64 + 40;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_824919F8:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r7
	reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r7
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), reserved.s32, __builtin_bswap32(r30.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x824919f8
	if (!cr0.eq) goto loc_824919F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a0038
	sub_824A0038(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
loc_82491A34:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x82491a88
	if (!cr6.eq) goto loc_82491A88;
	// stwcx. r29,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r29.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82491a34
	if (!cr0.eq) goto loc_82491A34;
	// b 0x82491a90
	goto loc_82491A90;
loc_82491A58:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b5498
	sub_823B5498(ctx, base);
	// addi r8,r31,40
	ctx.r8.s64 = r31.s64 + 40;
loc_82491A64:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// bne cr6,0x82491a88
	if (!cr6.eq) goto loc_82491A88;
	// stwcx. r29,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r29.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82491a64
	if (!cr0.eq) goto loc_82491A64;
	// b 0x82491a90
	goto loc_82491A90;
loc_82491A88:
	// stwcx. r10,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
loc_82491A90:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82491a58
	if (cr6.eq) goto loc_82491A58;
	// addi r11,r31,36
	r11.s64 = r31.s64 + 36;
	// addi r10,r31,36
	ctx.r10.s64 = r31.s64 + 36;
	// addi r7,r31,36
	ctx.r7.s64 = r31.s64 + 36;
	// addi r6,r31,40
	ctx.r6.s64 = r31.s64 + 40;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_82491ABC:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r9,0,r6
	reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r30,0,r6
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), reserved.s32, __builtin_bswap32(r30.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82491abc
	if (!cr0.eq) goto loc_82491ABC;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82491AE0"))) PPC_WEAK_FUNC(sub_82491AE0);
PPC_FUNC_IMPL(__imp__sub_82491AE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x82491b30
	if (!cr6.eq) goto loc_82491B30;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// bge cr6,0x82491afc
	if (!cr6.lt) goto loc_82491AFC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82491AFC:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82491b30
	if (cr0.eq) goto loc_82491B30;
loc_82491B10:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r8,r8,20
	ctx.r8.u64 = ctx.r8.u32 & 0xFFF;
	// cmplw cr6,r8,r5
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, xer);
	// beq cr6,0x82491b38
	if (cr6.eq) goto loc_82491B38;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82491b10
	if (cr6.lt) goto loc_82491B10;
loc_82491B30:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82491B38:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r10,r11,24,24,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF0;
	// rlwinm r11,r11,16,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82491B54"))) PPC_WEAK_FUNC(sub_82491B54);
PPC_FUNC_IMPL(__imp__sub_82491B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82491B58"))) PPC_WEAK_FUNC(sub_82491B58);
PPC_FUNC_IMPL(__imp__sub_82491B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lhz r11,4(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lhz r11,6(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lhz r11,8(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// bne 0x82491b90
	if (!cr0.eq) goto loc_82491B90;
	// li r11,0
	r11.s64 = 0;
loc_82491B90:
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, r11.u32);
	// lhz r11,6(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// lhz r11,4(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// lhz r11,0(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// lhz r11,2(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// lhz r11,8(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// lhz r11,10(r6)
	r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82491BC8"))) PPC_WEAK_FUNC(sub_82491BC8);
PPC_FUNC_IMPL(__imp__sub_82491BC8) {
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
	// bne cr6,0x82491bec
	if (!cr6.eq) goto loc_82491BEC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x82491c14
	goto loc_82491C14;
loc_82491BEC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82491c14
	if (cr6.eq) goto loc_82491C14;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82491C14:
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

__attribute__((alias("__imp__sub_82491C28"))) PPC_WEAK_FUNC(sub_82491C28);
PPC_FUNC_IMPL(__imp__sub_82491C28) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r29,r11,9312
	r29.s64 = r11.s64 + 9312;
	// bne cr6,0x82491c74
	if (!cr6.eq) goto loc_82491C74;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,411
	ctx.r7.s64 = 411;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82491C74:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x82491c9c
	if (cr6.lt) goto loc_82491C9C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,411
	ctx.r7.s64 = 411;
	// addi r5,r11,9240
	ctx.r5.s64 = r11.s64 + 9240;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82491C9C:
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r28,r27,3,0,28
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82491cd0
	if (cr6.lt) goto loc_82491CD0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,411
	ctx.r7.s64 = 411;
	// addi r5,r11,9152
	ctx.r5.s64 = r11.s64 + 9152;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82491CD0:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// stwx r26,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r26.u32);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwzx r11,r11,r28
	r11.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r8,r8,r11
	ctx.r8.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r9,29,3,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82491D1C"))) PPC_WEAK_FUNC(sub_82491D1C);
PPC_FUNC_IMPL(__imp__sub_82491D1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82491D20"))) PPC_WEAK_FUNC(sub_82491D20);
PPC_FUNC_IMPL(__imp__sub_82491D20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,9312
	r27.s64 = r11.s64 + 9312;
	// blt cr6,0x82491d74
	if (cr6.lt) goto loc_82491D74;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,557
	ctx.r7.s64 = 557;
	// addi r5,r11,9464
	ctx.r5.s64 = r11.s64 + 9464;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82491D74:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r30,r30,12
	r30.s64 = r30.s64 * 12;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82491da8
	if (cr6.lt) goto loc_82491DA8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,557
	ctx.r7.s64 = 557;
	// addi r5,r11,9392
	ctx.r5.s64 = r11.s64 + 9392;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82491DA8:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82491c28
	sub_82491C28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82491DE0"))) PPC_WEAK_FUNC(sub_82491DE0);
PPC_FUNC_IMPL(__imp__sub_82491DE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// li r30,0
	r30.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82491e14
	if (cr0.eq) goto loc_82491E14;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_82491E14:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
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

__attribute__((alias("__imp__sub_82491E38"))) PPC_WEAK_FUNC(sub_82491E38);
PPC_FUNC_IMPL(__imp__sub_82491E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bccc
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r17,1
	r17.s64 = 1;
	// li r27,-1
	r27.s64 = -1;
	// beq 0x82491f58
	if (cr0.eq) goto loc_82491F58;
	// mr r28,r27
	r28.u64 = r27.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82491f58
	if (cr6.eq) goto loc_82491F58;
loc_82491E78:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// bge cr6,0x82491f58
	if (!cr6.lt) goto loc_82491F58;
	// li r11,6
	r11.s64 = 6;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// divwu r7,r30,r11
	ctx.r7.u32 = r30.u32 / r11.u32;
	// rlwinm r9,r7,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r11,r7,3,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x8;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r31,r9,r26
	r31.u64 = ctx.r9.u64 + r26.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// rlwinm r11,r10,16,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r11,r17,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r17.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82491f08
	if (cr0.eq) goto loc_82491F08;
	// cmpwi cr6,r28,-1
	cr6.compare<int32_t>(r28.s32, -1, xer);
	// bne cr6,0x82491f08
	if (!cr6.eq) goto loc_82491F08;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r28,r11,12
	r28.s64 = r11.s64 * 12;
loc_82491F08:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r19
	ctr.u64 = r19.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// stw r8,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r8.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// blt cr6,0x82491e78
	if (cr6.lt) goto loc_82491E78;
loc_82491F58:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824920a4
	if (cr0.eq) goto loc_824920A4;
	// lwz r24,80(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r23,r27
	r23.u64 = r27.u64;
	// add r21,r26,r29
	r21.u64 = r26.u64 + r29.u64;
loc_82491F6C:
	// li r25,-1
	r25.s64 = -1;
	// li r20,0
	r20.s64 = 0;
	// mr r22,r26
	r22.u64 = r26.u64;
	// cmplw cr6,r26,r21
	cr6.compare<uint32_t>(r26.u32, r21.u32, xer);
	// bge cr6,0x824920a4
	if (!cr6.lt) goto loc_824920A4;
loc_82491F80:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// srawi r11,r25,1
	xer.ca = (r25.s32 < 0) & ((r25.u32 & 0x1) != 0);
	r11.s64 = r25.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x8249209c
	if (cr6.eq) goto loc_8249209C;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// rlwinm r10,r25,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0x8;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r31,r10,r9
	r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r8,r9,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// rlwinm r11,r10,16,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// rlwinm r11,r9,16,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r30,0,20,20
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82491fe8
	if (cr0.eq) goto loc_82491FE8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82491FE8:
	// rlwinm r11,r30,20,28,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0xF;
	// slw r11,r17,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r17.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82492090
	if (cr0.eq) goto loc_82492090;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// clrlwi r31,r11,20
	r31.u64 = r11.u32 & 0xFFF;
	// bne cr6,0x82492020
	if (!cr6.eq) goto loc_82492020;
	// mr r23,r31
	r23.u64 = r31.u64;
	// mr r24,r31
	r24.u64 = r31.u64;
loc_82492020:
	// rlwinm r9,r30,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0x30;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// mulli r10,r31,12
	ctx.r10.s64 = r31.s64 * 12;
	// rlwinm. r27,r11,20,29,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// rlwinm r29,r11,16,20,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFF;
	// or r30,r9,r8
	r30.u64 = ctx.r9.u64 | ctx.r8.u64;
	// add r28,r10,r26
	r28.u64 = ctx.r10.u64 + r26.u64;
	// beq 0x82492090
	if (cr0.eq) goto loc_82492090;
loc_82492040:
	// clrlwi r5,r29,31
	ctx.r5.u64 = r29.u32 & 0x1;
	// clrlwi r6,r30,31
	ctx.r6.u64 = r30.u32 & 0x1;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r29,r29,30,2,31
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r31,r24
	cr6.compare<uint32_t>(r31.u32, r24.u32, xer);
	// bne cr6,0x82492078
	if (!cr6.eq) goto loc_82492078;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mtctr r19
	ctr.u64 = r19.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r24,r31,1
	r24.s64 = r31.s64 + 1;
	// b 0x82492080
	goto loc_82492080;
loc_82492078:
	// ble cr6,0x82492080
	if (!cr6.gt) goto loc_82492080;
	// mr r20,r17
	r20.u64 = r17.u64;
loc_82492080:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bne 0x82492040
	if (!cr0.eq) goto loc_82492040;
loc_82492090:
	// addi r22,r22,6
	r22.s64 = r22.s64 + 6;
	// cmplw cr6,r22,r21
	cr6.compare<uint32_t>(r22.u32, r21.u32, xer);
	// blt cr6,0x82491f80
	if (cr6.lt) goto loc_82491F80;
loc_8249209C:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// bne cr6,0x82491f6c
	if (!cr6.eq) goto loc_82491F6C;
loc_824920A4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_824920AC"))) PPC_WEAK_FUNC(sub_824920AC);
PPC_FUNC_IMPL(__imp__sub_824920AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824920B0"))) PPC_WEAK_FUNC(sub_824920B0);
PPC_FUNC_IMPL(__imp__sub_824920B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// bl 0x824a2e58
	sub_824A2E58(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x824a1da0
	sub_824A1DA0(ctx, base);
	// b 0x8249215c
	goto loc_8249215C;
loc_824920E4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,-1978
	r11.s64 = r11.s64 + -1978;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bgt cr6,0x8249214c
	if (cr6.gt) goto loc_8249214C;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,9528
	r12.s64 = r12.s64 + 9528;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32183
	r12.s64 = -2109145088;
	// addi r12,r12,8488
	r12.s64 = r12.s64 + 8488;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82492128;
	case 1:
		goto loc_824921E0;
	case 2:
		goto loc_82492144;
	case 3:
		goto loc_824921F8;
	case 4:
		goto loc_82492204;
	case 5:
		goto loc_8249221C;
	case 6:
		goto loc_82492198;
	case 7:
		goto loc_824921B0;
	case 8:
		goto loc_82492234;
	case 9:
		goto loc_824921C8;
	case 10:
		goto loc_8249214C;
	case 11:
		goto loc_8249226C;
	case 12:
		goto loc_8249214C;
	case 13:
		goto loc_8249224C;
	default:
		__builtin_unreachable();
	}
loc_82492128:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82492134
	if (cr0.eq) goto loc_82492134;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82492134:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r11,r31,0,0,25
	r11.u64 = (__builtin_rotateleft32(r31.u32, 0) & 0xFFFFFFC0) | (r11.u64 & 0xFFFFFFFF0000003F);
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82492150
	goto loc_82492150;
loc_82492144:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82492150
	if (cr0.eq) goto loc_82492150;
loc_8249214C:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82492150:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a20a0
	sub_824A20A0(ctx, base);
loc_8249215C:
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x824920e4
	if (!cr0.eq) goto loc_824920E4;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823c9128
	sub_823C9128(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82492180
	if (cr6.eq) goto loc_82492180;
	// stw r31,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r31.u32);
loc_82492180:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x8249218c
	if (cr6.eq) goto loc_8249218C;
	// stw r27,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r27.u32);
loc_8249218C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
loc_82492198:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824921a4
	if (cr0.eq) goto loc_824921A4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824921A4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,20,8,11
	r31.u64 = (__builtin_rotateleft32(r11.u32, 20) & 0xF00000) | (r31.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x82492150
	goto loc_82492150;
loc_824921B0:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824921bc
	if (cr0.eq) goto loc_824921BC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824921BC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,24,5,7
	r31.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0x7000000) | (r31.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x82492150
	goto loc_82492150;
loc_824921C8:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824921d4
	if (cr0.eq) goto loc_824921D4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824921D4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,31,0,0
	r31.u64 = (__builtin_rotateleft32(r11.u32, 31) & 0x80000000) | (r31.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x82492150
	goto loc_82492150;
loc_824921E0:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824921ec
	if (!cr0.eq) goto loc_824921EC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824921EC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,8,18,23
	r31.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0x3F00) | (r31.u64 & 0xFFFFFFFFFFFFC0FF);
	// b 0x82492150
	goto loc_82492150;
loc_824921F8:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82492150
	if (!cr0.eq) goto loc_82492150;
	// b 0x8249214c
	goto loc_8249214C;
loc_82492204:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82492210
	if (!cr0.eq) goto loc_82492210;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82492210:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,18,13,13
	r31.u64 = (__builtin_rotateleft32(r11.u32, 18) & 0x40000) | (r31.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x82492150
	goto loc_82492150;
loc_8249221C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82492228
	if (!cr0.eq) goto loc_82492228;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82492228:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,19,12,12
	r31.u64 = (__builtin_rotateleft32(r11.u32, 19) & 0x80000) | (r31.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x82492150
	goto loc_82492150;
loc_82492234:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82492240
	if (!cr0.eq) goto loc_82492240;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82492240:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r31,r11,27,1,4
	r31.u64 = (__builtin_rotateleft32(r11.u32, 27) & 0x78000000) | (r31.u64 & 0xFFFFFFFF87FFFFFF);
	// b 0x82492150
	goto loc_82492150;
loc_8249224C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82492258
	if (!cr0.eq) goto loc_82492258;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82492258:
	// lbz r11,7(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 7);
	// rlwinm r10,r27,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r11,r11,8
	r11.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r27,r11,r10
	r27.u64 = r11.u64 | ctx.r10.u64;
	// b 0x82492150
	goto loc_82492150;
loc_8249226C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82492278
	if (!cr0.eq) goto loc_82492278;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82492278:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r27,r11,1,30,30
	r27.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x2) | (r27.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82492150
	goto loc_82492150;
}

__attribute__((alias("__imp__sub_82492284"))) PPC_WEAK_FUNC(sub_82492284);
PPC_FUNC_IMPL(__imp__sub_82492284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82492288"))) PPC_WEAK_FUNC(sub_82492288);
PPC_FUNC_IMPL(__imp__sub_82492288) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// stw r20,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r20.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = r31.s64 + 72;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,328
	ctx.r3.s64 = r31.s64 + 328;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,584
	ctx.r3.s64 = r31.s64 + 584;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stb r20,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r20.u8);
	// add r29,r30,r29
	r29.u64 = r30.u64 + r29.u64;
	// stw r10,4680(r31)
	PPC_STORE_U32(r31.u32 + 4680, ctx.r10.u32);
	// b 0x82492380
	goto loc_82492380;
loc_8249231C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x82492388
	if (cr6.eq) goto loc_82492388;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// bne cr6,0x82492344
	if (!cr6.eq) goto loc_82492344;
	// rlwinm r11,r10,18,15,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// b 0x82492380
	goto loc_82492380;
loc_82492344:
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(r11.u32, 81, xer);
	// bne cr6,0x8249235c
	if (!cr6.eq) goto loc_8249235C;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lbz r4,3(r30)
	ctx.r4.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// bl 0x824911b8
	sub_824911B8(ctx, base);
	// b 0x82492364
	goto loc_82492364;
loc_8249235C:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x8249236c
	if (!cr6.eq) goto loc_8249236C;
loc_82492364:
	// addi r11,r30,20
	r11.s64 = r30.s64 + 20;
	// b 0x82492380
	goto loc_82492380;
loc_8249236C:
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8249237c
	if (cr6.eq) goto loc_8249237C;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// bne cr6,0x82492388
	if (!cr6.eq) goto loc_82492388;
loc_8249237C:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
loc_82492380:
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x8249231c
	if (cr6.lt) goto loc_8249231C;
loc_82492388:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824915e8
	sub_824915E8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a3588
	sub_824A3588(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824a3ee0
	sub_824A3EE0(ctx, base);
	// mr. r21,r3
	r21.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// beq 0x824924a8
	if (cr0.eq) goto loc_824924A8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r23,r11,9608
	r23.s64 = r11.s64 + 9608;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,8972
	r26.s64 = r11.s64 + 8972;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,9564
	r22.s64 = r11.s64 + 9564;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,9064
	r25.s64 = r11.s64 + 9064;
loc_824923D0:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lbz r24,0(r10)
	r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r28,r11,12,28,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// blt cr6,0x82492400
	if (cr6.lt) goto loc_82492400;
	// li r7,910
	ctx.r7.s64 = 910;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82492400:
	// mr r29,r20
	r29.u64 = r20.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82492498
	if (cr6.eq) goto loc_82492498;
	// mr r30,r20
	r30.u64 = r20.u64;
	// mr r27,r20
	r27.u64 = r20.u64;
loc_82492414:
	// clrlwi. r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82492484
	if (cr0.eq) goto loc_82492484;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r11,r11,20,24,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFF;
	// srw r11,r11,r27
	r11.u64 = r27.u8 & 0x20 ? 0 : (r11.u32 >> (r27.u8 & 0x3F));
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82492468
	if (cr6.lt) goto loc_82492468;
	// beq cr6,0x82492484
	if (cr6.eq) goto loc_82492484;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82492460
	if (cr6.lt) goto loc_82492460;
	// li r7,1006
	ctx.r7.s64 = 1006;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82492484
	goto loc_82492484;
loc_82492460:
	// mr r28,r20
	r28.u64 = r20.u64;
	// b 0x82492484
	goto loc_82492484;
loc_82492468:
	// rlwinm r11,r24,2,0,29
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r11,r11,146
	r11.s64 = r11.s64 + 146;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfsx f0,r11,r31
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + r31.u32, temp.u32);
loc_82492484:
	// rlwinm. r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82492414
	if (!cr0.eq) goto loc_82492414;
loc_82492498:
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// addic. r21,r21,-1
	xer.ca = r21.u32 > 0;
	r21.s64 = r21.s64 + -1;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bne 0x824923d0
	if (!cr0.eq) goto loc_824923D0;
loc_824924A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_824924B4"))) PPC_WEAK_FUNC(sub_824924B4);
PPC_FUNC_IMPL(__imp__sub_824924B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824924B8"))) PPC_WEAK_FUNC(sub_824924B8);
PPC_FUNC_IMPL(__imp__sub_824924B8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824924e8
	if (cr0.eq) goto loc_824924E8;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2932
	ctx.r3.u64 = ctx.r3.u64 | 2932;
	// b 0x82492588
	goto loc_82492588;
loc_824924E8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mulli r30,r11,20
	r30.s64 = r11.s64 * 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82492510
	if (!cr0.eq) goto loc_82492510;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82492588
	goto loc_82492588;
loc_82492510:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8249257c
	if (!cr6.gt) goto loc_8249257C;
	// addi r6,r31,72
	ctx.r6.s64 = r31.s64 + 72;
	// addi r5,r31,328
	ctx.r5.s64 = r31.s64 + 328;
loc_8249252C:
	// lbzx r10,r5,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r8,4
	ctx.r8.s64 = 4;
	// lbzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// rotlwi r10,r10,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// sth r3,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r3.u16);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// addi r10,r10,584
	ctx.r10.s64 = ctx.r10.s64 + 584;
	// sth r9,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r9.u16);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82492554:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82492554
	if (!cr0.eq) goto loc_82492554;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, xer);
	// blt cr6,0x8249252c
	if (cr6.lt) goto loc_8249252C;
loc_8249257C:
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r4.u32);
loc_82492588:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82492590"))) PPC_WEAK_FUNC(sub_82492590);
PPC_FUNC_IMPL(__imp__sub_82492590) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// bne cr6,0x824925c4
	if (!cr6.eq) goto loc_824925C4;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823ce870
	sub_823CE870(ctx, base);
loc_824925C4:
	// li r22,0
	r22.s64 = 0;
	// li r23,0
	r23.s64 = 0;
	// li r21,-1
	r21.s64 = -1;
loc_824925D0:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x824a2c58
	sub_824A2C58(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x824926f0
	if (!cr6.eq) goto loc_824926F0;
	// cmplw cr6,r22,r23
	cr6.compare<uint32_t>(r22.u32, r23.u32, xer);
	// beq cr6,0x824925f8
	if (cr6.eq) goto loc_824925F8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824925F8:
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// mr r27,r21
	r27.u64 = r21.u64;
	// mr r26,r21
	r26.u64 = r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x82492624
	if (cr6.eq) goto loc_82492624;
	// lwz r11,228(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82492628
	if (cr6.eq) goto loc_82492628;
loc_82492624:
	// li r11,0
	r11.s64 = 0;
loc_82492628:
	// clrlwi r24,r11,24
	r24.u64 = r11.u32 & 0xFF;
	// li r25,0
	r25.s64 = 0;
	// addi r31,r1,164
	r31.s64 = ctx.r1.s64 + 164;
loc_82492634:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r30,-16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + -16);
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824926c8
	if (cr6.eq) goto loc_824926C8;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bne cr6,0x82492658
	if (!cr6.eq) goto loc_82492658;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// beq cr6,0x824926bc
	if (cr6.eq) goto loc_824926BC;
loc_82492658:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82492674
	if (cr6.eq) goto loc_82492674;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823ce858
	sub_823CE858(ctx, base);
	// li r28,0
	r28.s64 = 0;
loc_82492674:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + -48);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r3,-32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -32);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r26,r29
	r26.u64 = r29.u64;
	// bl 0x82491098
	sub_82491098(ctx, base);
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// clrlwi r11,r10,27
	r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwimi r6,r11,4,0,27
	ctx.r6.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xFFFFFFF0) | (ctx.r6.u64 & 0xFFFFFFFF0000000F);
loc_824926BC:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r25
	r11.u64 = r25.u8 & 0x20 ? 0 : (r11.u32 << (r25.u8 & 0x3F));
	// or r28,r11,r28
	r28.u64 = r11.u64 | r28.u64;
loc_824926C8:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(r25.u32, 4, xer);
	// blt cr6,0x82492634
	if (cr6.lt) goto loc_82492634;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824926f0
	if (cr6.eq) goto loc_824926F0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823ce858
	sub_823CE858(ctx, base);
loc_824926F0:
	// addi r23,r23,1
	r23.s64 = r23.s64 + 1;
	// cmplwi cr6,r23,16
	cr6.compare<uint32_t>(r23.u32, 16, xer);
	// blt cr6,0x824925d0
	if (cr6.lt) goto loc_824925D0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_82492704"))) PPC_WEAK_FUNC(sub_82492704);
PPC_FUNC_IMPL(__imp__sub_82492704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82492708"))) PPC_WEAK_FUNC(sub_82492708);
PPC_FUNC_IMPL(__imp__sub_82492708) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249284c
	if (cr0.eq) goto loc_8249284C;
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// beq 0x824927f0
	if (cr0.eq) goto loc_824927F0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82492768
	if (cr0.eq) goto loc_82492768;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x8249275c
	if (!cr6.eq) goto loc_8249275C;
	// lwz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r10,r10,12,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1F;
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwimi r9,r10,14,16,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xC000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_8249275C:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x823ceef8
	sub_823CEEF8(ctx, base);
	// b 0x82492898
	goto loc_82492898;
loc_82492768:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x824927e0
	if (cr0.eq) goto loc_824927E0;
loc_82492778:
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// beq cr6,0x82492794
	if (cr6.eq) goto loc_82492794;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82492778
	if (!cr0.eq) goto loc_82492778;
loc_82492794:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x824927e0
	if (cr6.eq) goto loc_824927E0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// li r8,209
	ctx.r8.s64 = 209;
	// rlwimi r10,r8,3,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,24,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// rlwinm r5,r10,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// bl 0x823cef28
	sub_823CEF28(ctx, base);
	// b 0x82492898
	goto loc_82492898;
loc_824927E0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x823cef10
	sub_823CEF10(ctx, base);
	// b 0x82492898
	goto loc_82492898;
loc_824927F0:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r10,r9,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82492840
	if (cr0.eq) goto loc_82492840;
	// clrlwi r10,r9,26
	ctx.r10.u64 = ctx.r9.u32 & 0x3F;
	// cmplwi cr6,r10,63
	cr6.compare<uint32_t>(ctx.r10.u32, 63, xer);
	// bne cr6,0x82492840
	if (!cr6.eq) goto loc_82492840;
	// lbz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lis r7,-241
	ctx.r7.s64 = -15794176;
	// addi r10,r10,9636
	ctx.r10.s64 = ctx.r10.s64 + 9636;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// lis r6,-16
	ctx.r6.s64 = -1048576;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// lbzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// rlwimi r7,r10,20,8,11
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF00000) | (ctx.r7.u64 & 0xFFFFFFFFFF0FFFFF);
	// rlwimi r6,r10,16,12,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r6.u64 & 0xFFFFFFFFFFF0FFFF);
	// and r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82492840:
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x823cef40
	sub_823CEF40(ctx, base);
	// b 0x82492898
	goto loc_82492898;
loc_8249284C:
	// ld r11,0(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// li r11,1
	r11.s64 = 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82492890
	if (cr0.eq) goto loc_82492890;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82492890:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823cf168
	sub_823CF168(ctx, base);
loc_82492898:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824928A8"))) PPC_WEAK_FUNC(sub_824928A8);
PPC_FUNC_IMPL(__imp__sub_824928A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// add r28,r31,r29
	r28.u64 = r31.u64 + r29.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r30,r31
	r30.u64 = r31.u64;
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bge cr6,0x82492998
	if (!cr6.lt) goto loc_82492998;
loc_824928E0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r11,r8,24,16,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r7,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r6,r9,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// rlwimi r7,r9,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r11,r10,16,16,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwinm r10,r8,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r11,24,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r7,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r8,r6,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFF0000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// or r11,r9,r8
	r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8249296c
	if (!cr0.gt) goto loc_8249296C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x824929e8
	if (!cr6.gt) goto loc_824929E8;
loc_8249296C:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8249298c
	if (!cr0.gt) goto loc_8249298C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x82492a00
	if (!cr6.gt) goto loc_82492A00;
loc_8249298C:
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// blt cr6,0x824928e0
	if (cr6.lt) goto loc_824928E0;
loc_82492998:
	// li r11,12
	r11.s64 = 12;
	// divwu r10,r29,r11
	ctx.r10.u32 = r29.u32 / r11.u32;
loc_824929A0:
	// lis r11,-32183
	r11.s64 = -2109145088;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// addi r5,r11,9992
	ctx.r5.s64 = r11.s64 + 9992;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r25.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r27.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r23.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x82491e38
	sub_82491E38(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd34
	return;
loc_824929E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_824929EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x824929a0
	goto loc_824929A0;
loc_82492A00:
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// b 0x824929ec
	goto loc_824929EC;
}

__attribute__((alias("__imp__sub_82492A08"))) PPC_WEAK_FUNC(sub_82492A08);
PPC_FUNC_IMPL(__imp__sub_82492A08) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// li r3,4684
	ctx.r3.s64 = 4684;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82492a60
	if (!cr0.eq) goto loc_82492A60;
	// lis r28,-32761
	r28.s64 = -2147024896;
	// ori r28,r28,14
	r28.u64 = r28.u64 | 14;
	// b 0x82492b10
	goto loc_82492B10;
loc_82492A60:
	// cntlzw r11,r24
	r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// xori r8,r11,1
	ctx.r8.u64 = r11.u64 ^ 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82492288
	sub_82492288(ctx, base);
	// lis r11,-32183
	r11.s64 = -2109145088;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,5944
	ctx.r5.s64 = r11.s64 + 5944;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82491e38
	sub_82491E38(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824924b8
	sub_824924B8(ctx, base);
	// lwz r27,80(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82492af0
	if (cr0.lt) goto loc_82492AF0;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,20
	r11.s64 = 20;
	// divwu. r29,r10,r11
	r29.u32 = ctx.r10.u32 / r11.u32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82492af0
	if (cr0.eq) goto loc_82492AF0;
	// addi r30,r27,2
	r30.s64 = r27.s64 + 2;
loc_82492AD4:
	// addi r5,r30,2
	ctx.r5.s64 = r30.s64 + 2;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823cb618
	sub_823CB618(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// bne 0x82492ad4
	if (!cr0.eq) goto loc_82492AD4;
loc_82492AF0:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82492b10
	if (cr6.eq) goto loc_82492B10;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_82492B10:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82492B1C"))) PPC_WEAK_FUNC(sub_82492B1C);
PPC_FUNC_IMPL(__imp__sub_82492B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82492B20"))) PPC_WEAK_FUNC(sub_82492B20);
PPC_FUNC_IMPL(__imp__sub_82492B20) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// add r25,r11,r10
	r25.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// std r30,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r30.u64);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r30.u64);
	// std r30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r30.u64);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r30.u64);
	// bge cr6,0x82492db8
	if (!cr6.lt) goto loc_82492DB8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r26,1
	r26.s64 = 1;
	// addi r24,r11,9644
	r24.s64 = r11.s64 + 9644;
loc_82492BA0:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x82492db8
	if (cr6.eq) goto loc_82492DB8;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplwi cr6,r10,31
	cr6.compare<uint32_t>(ctx.r10.u32, 31, xer);
	// beq cr6,0x82492d58
	if (cr6.eq) goto loc_82492D58;
	// cmplwi cr6,r10,47
	cr6.compare<uint32_t>(ctx.r10.u32, 47, xer);
	// beq cr6,0x82492ccc
	if (cr6.eq) goto loc_82492CCC;
	// cmplwi cr6,r10,48
	cr6.compare<uint32_t>(ctx.r10.u32, 48, xer);
	// beq cr6,0x82492c54
	if (cr6.eq) goto loc_82492C54;
	// cmplwi cr6,r10,81
	cr6.compare<uint32_t>(ctx.r10.u32, 81, xer);
	// beq cr6,0x82492be8
	if (cr6.eq) goto loc_82492BE8;
	// cmplwi cr6,r10,65534
	cr6.compare<uint32_t>(ctx.r10.u32, 65534, xer);
	// bne cr6,0x82492db8
	if (!cr6.eq) goto loc_82492DB8;
	// rlwinm r10,r9,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r31,r10,r11
	r31.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82492db0
	goto loc_82492DB0;
loc_82492BE8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r4,256
	cr6.compare<uint32_t>(ctx.r4.u32, 256, xer);
	// bge cr6,0x82492dc4
	if (!cr6.lt) goto loc_82492DC4;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// slw r9,r26,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82492dd0
	if (!cr0.eq) goto loc_82492DD0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x823cb618
	sub_823CB618(ctx, base);
loc_82492C4C:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// b 0x82492db0
	goto loc_82492DB0;
loc_82492C54:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// clrlwi r11,r10,21
	r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x82492ddc
	if (!cr6.lt) goto loc_82492DDC;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// slw r8,r26,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82492de8
	if (!cr0.eq) goto loc_82492DE8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x82492cbc
	if (cr6.eq) goto loc_82492CBC;
	// addi r4,r11,16
	ctx.r4.s64 = r11.s64 + 16;
loc_82492CBC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cd0b0
	sub_823CD0B0(ctx, base);
	// b 0x82492c4c
	goto loc_82492C4C;
loc_82492CCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = r11.s64 + 4;
	// clrlwi r11,r10,21
	r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// bge cr6,0x82492df4
	if (!cr6.lt) goto loc_82492DF4;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// slw r8,r26,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82492e00
	if (!cr0.eq) goto loc_82492E00;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x82492d34
	if (cr6.eq) goto loc_82492D34;
	// addi r4,r11,128
	ctx.r4.s64 = r11.s64 + 128;
loc_82492D34:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r7,4
	r31.s64 = ctx.r7.s64 + 4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82492d4c
	if (!cr6.eq) goto loc_82492D4C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
loc_82492D4C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823cb600
	sub_823CB600(ctx, base);
	// b 0x82492db0
	goto loc_82492DB0;
loc_82492D58:
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r10,2560
	cr6.compare<uint32_t>(ctx.r10.u32, 2560, xer);
	// bne cr6,0x82492db0
	if (!cr6.eq) goto loc_82492DB0;
	// clrlwi r11,r11,21
	r11.u64 = r11.u32 & 0x7FF;
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// bge cr6,0x82492db0
	if (!cr6.lt) goto loc_82492DB0;
	// rlwinm r10,r9,5,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x7;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// bgt cr6,0x82492db0
	if (cr6.gt) goto loc_82492DB0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x82492da4
	if (!cr6.eq) goto loc_82492DA4;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
loc_82492DA4:
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// lbz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// stbx r10,r11,r27
	PPC_STORE_U8(r11.u32 + r27.u32, ctx.r10.u8);
loc_82492DB0:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// blt cr6,0x82492ba0
	if (cr6.lt) goto loc_82492BA0;
loc_82492DB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82492DBC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd38
	return;
loc_82492DC4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2935
	ctx.r3.u64 = ctx.r3.u64 | 2935;
	// b 0x82492dbc
	goto loc_82492DBC;
loc_82492DD0:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2944
	ctx.r3.u64 = ctx.r3.u64 | 2944;
	// b 0x82492dbc
	goto loc_82492DBC;
loc_82492DDC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2934
	ctx.r3.u64 = ctx.r3.u64 | 2934;
	// b 0x82492dbc
	goto loc_82492DBC;
loc_82492DE8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2943
	ctx.r3.u64 = ctx.r3.u64 | 2943;
	// b 0x82492dbc
	goto loc_82492DBC;
loc_82492DF4:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2933
	ctx.r3.u64 = ctx.r3.u64 | 2933;
	// b 0x82492dbc
	goto loc_82492DBC;
loc_82492E00:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2942
	ctx.r3.u64 = ctx.r3.u64 | 2942;
	// b 0x82492dbc
	goto loc_82492DBC;
}

__attribute__((alias("__imp__sub_82492E0C"))) PPC_WEAK_FUNC(sub_82492E0C);
PPC_FUNC_IMPL(__imp__sub_82492E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82492E10"))) PPC_WEAK_FUNC(sub_82492E10);
PPC_FUNC_IMPL(__imp__sub_82492E10) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// bl 0x824a2b50
	sub_824A2B50(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r30,r27,8
	r30.s64 = r27.s64 + 8;
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r30,r29
	r31.u64 = r30.u64 + r29.u64;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// bge cr6,0x82492e90
	if (!cr6.lt) goto loc_82492E90;
loc_82492E64:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82492e84
	if (!cr0.gt) goto loc_82492E84;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// ble cr6,0x82492ed8
	if (!cr6.gt) goto loc_82492ED8;
loc_82492E84:
	// addi r28,r28,6
	r28.s64 = r28.s64 + 6;
	// cmplw cr6,r28,r31
	cr6.compare<uint32_t>(r28.u32, r31.u32, xer);
	// blt cr6,0x82492e64
	if (cr6.lt) goto loc_82492E64;
loc_82492E90:
	// li r11,12
	r11.s64 = 12;
	// divwu r3,r29,r11
	ctx.r3.u32 = r29.u32 / r11.u32;
loc_82492E98:
	// mulli r11,r3,12
	r11.s64 = ctx.r3.s64 * 12;
	// rlwinm. r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// beq 0x82492ec0
	if (cr0.eq) goto loc_82492EC0;
loc_82492EA8:
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwbrx r9,0,r9
	ctx.r9.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82492ea8
	if (!cr0.eq) goto loc_82492EA8;
loc_82492EC0:
	// bl 0x823cdca0
	sub_823CDCA0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82492eec
	if (!cr0.eq) goto loc_82492EEC;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,14
	r29.u64 = r29.u64 | 14;
	// b 0x8249300c
	goto loc_8249300C;
loc_82492ED8:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// b 0x82492e98
	goto loc_82492E98;
loc_82492EEC:
	// li r4,50
	ctx.r4.s64 = 50;
	// stw r31,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r31.u32);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82492f00
	if (cr6.eq) goto loc_82492F00;
	// li r4,54
	ctx.r4.s64 = 54;
loc_82492F00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ceee8
	sub_823CEEE8(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82492590
	sub_82492590(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82492a08
	sub_82492A08(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8249300c
	if (cr0.lt) goto loc_8249300C;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82492b20
	sub_82492B20(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// blt 0x8249300c
	if (cr0.lt) goto loc_8249300C;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82492fb0
	if (cr6.eq) goto loc_82492FB0;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82492fb0
	if (cr0.eq) goto loc_82492FB0;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ceef0
	sub_823CEEF0(ctx, base);
loc_82492FB0:
	// cntlzw r11,r25
	r11.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// xori r7,r11,1
	ctx.r7.u64 = r11.u64 ^ 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824920b0
	sub_824920B0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824928a8
	sub_824928A8(ctx, base);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x8249300c
	if (cr6.eq) goto loc_8249300C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// bl 0x823cef58
	sub_823CEF58(ctx, base);
loc_8249300C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_82493018"))) PPC_WEAK_FUNC(sub_82493018);
PPC_FUNC_IMPL(__imp__sub_82493018) {
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
	// b 0x824930bc
	goto loc_824930BC;
loc_82493038:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x823cb678
	sub_823CB678(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r10,20,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824930b8
	if (cr0.eq) goto loc_824930B8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824930dc
	if (cr6.eq) goto loc_824930DC;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// ble cr6,0x8249308c
	if (!cr6.gt) goto loc_8249308C;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// beq cr6,0x82493080
	if (cr6.eq) goto loc_82493080;
	// ble cr6,0x824930dc
	if (!cr6.gt) goto loc_824930DC;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// ble cr6,0x8249308c
	if (!cr6.gt) goto loc_8249308C;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bne cr6,0x824930dc
	if (!cr6.eq) goto loc_824930DC;
	// b 0x824930b8
	goto loc_824930B8;
loc_82493080:
	// rlwinm. r11,r10,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824930dc
	if (cr0.eq) goto loc_824930DC;
	// b 0x824930b8
	goto loc_824930B8;
loc_8249308C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r10,r10,0,17,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824930d0
	if (!cr0.eq) goto loc_824930D0;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,16468
	r11.u64 = r11.u64 & 16468;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x824930dc
	if (!cr0.eq) goto loc_824930DC;
loc_824930B8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_824930BC:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x823cf180
	sub_823CF180(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bgt cr6,0x82493038
	if (cr6.gt) goto loc_82493038;
	// b 0x824930dc
	goto loc_824930DC;
loc_824930D0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_824930DC:
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

__attribute__((alias("__imp__sub_824930F4"))) PPC_WEAK_FUNC(sub_824930F4);
PPC_FUNC_IMPL(__imp__sub_824930F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824930F8"))) PPC_WEAK_FUNC(sub_824930F8);
PPC_FUNC_IMPL(__imp__sub_824930F8) {
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
	// li r30,0
	r30.s64 = 0;
	// addi r6,r31,16
	ctx.r6.s64 = r31.s64 + 16;
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stb r30,16(r11)
	PPC_STORE_U8(r11.u32 + 16, r30.u8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r5,r11,7101
	ctx.r5.s64 = r11.s64 + 7101;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r30,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r30.u16);
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

__attribute__((alias("__imp__sub_82493164"))) PPC_WEAK_FUNC(sub_82493164);
PPC_FUNC_IMPL(__imp__sub_82493164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82493168"))) PPC_WEAK_FUNC(sub_82493168);
PPC_FUNC_IMPL(__imp__sub_82493168) {
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
	// li r3,0
	ctx.r3.s64 = 0;
loc_82493184:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824931d4
	if (cr6.eq) goto loc_824931D4;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x824931c4
	if (cr6.eq) goto loc_824931C4;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, r11.u8);
	// lhz r11,8(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,511
	cr6.compare<uint32_t>(r11.u32, 511, xer);
	// sth r11,8(r31)
	PPC_STORE_U16(r31.u32 + 8, r11.u16);
	// blt cr6,0x824931cc
	if (cr6.lt) goto loc_824931CC;
loc_824931C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824930f8
	sub_824930F8(ctx, base);
loc_824931CC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x82493184
	if (!cr6.lt) goto loc_82493184;
loc_824931D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824931DC"))) PPC_WEAK_FUNC(sub_824931DC);
PPC_FUNC_IMPL(__imp__sub_824931DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824931E0"))) PPC_WEAK_FUNC(sub_824931E0);
PPC_FUNC_IMPL(__imp__sub_824931E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82493168
	sub_82493168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824931E4"))) PPC_WEAK_FUNC(sub_824931E4);
PPC_FUNC_IMPL(__imp__sub_824931E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824931E8"))) PPC_WEAK_FUNC(sub_824931E8);
PPC_FUNC_IMPL(__imp__sub_824931E8) {
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
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8239f070
	sub_8239F070(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r3,2143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2143, ctx.r3.u8);
	// bge 0x82493254
	if (!cr0.lt) goto loc_82493254;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x824932fc
	goto loc_824932FC;
loc_82493254:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x824932fc
	if (!cr6.gt) goto loc_824932FC;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824932cc
	if (cr6.eq) goto loc_824932CC;
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x8249329c
	if (cr6.eq) goto loc_8249329C;
	// cmpwi cr6,r11,45
	cr6.compare<int32_t>(r11.s32, 45, xer);
	// beq cr6,0x8249329c
	if (cr6.eq) goto loc_8249329C;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x82493294
	if (cr6.lt) goto loc_82493294;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// ble cr6,0x8249329c
	if (!cr6.gt) goto loc_8249329C;
loc_82493294:
	// li r11,1
	r11.s64 = 1;
	// b 0x824932a0
	goto loc_824932A0;
loc_8249329C:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_824932A0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824932cc
	if (!cr0.eq) goto loc_824932CC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,2836
	ctx.r4.s64 = r11.s64 + 2836;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x824932ec
	if (cr0.lt) goto loc_824932EC;
loc_824932CC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824932fc
	if (!cr0.lt) goto loc_824932FC;
loc_824932EC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x824932fc
	if (cr6.lt) goto loc_824932FC;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_824932FC:
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

__attribute__((alias("__imp__sub_82493314"))) PPC_WEAK_FUNC(sub_82493314);
PPC_FUNC_IMPL(__imp__sub_82493314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82493318"))) PPC_WEAK_FUNC(sub_82493318);
PPC_FUNC_IMPL(__imp__sub_82493318) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82493408
	if (!cr0.eq) goto loc_82493408;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r11,r11,r9
	r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82493408
	if (cr0.eq) goto loc_82493408;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// rlwinm r9,r10,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x30;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// clrlwi r28,r11,20
	r28.u64 = r11.u32 & 0xFFF;
	// rlwinm r31,r11,16,20,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFF;
	// std r26,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r26.u64);
	// or r30,r9,r8
	r30.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm. r10,r11,20,29,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82493408
	if (cr0.eq) goto loc_82493408;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
loc_8249338C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823cb6a8
	sub_823CB6A8(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// clrlwi r4,r31,31
	ctx.r4.u64 = r31.u32 & 0x1;
	// rlwinm r5,r31,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x1;
	// clrlwi r6,r30,31
	ctx.r6.u64 = r30.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r30,r30,31,1,31
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r31,r31,30,2,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82491860
	sub_82491860(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824933e0
	if (cr0.eq) goto loc_824933E0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// slw r10,r10,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r26.u8 & 0x3F));
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,16,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r10.u64 & 0xFFF0000);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_824933E0:
	// addic. r25,r25,-1
	xer.ca = r25.u32 > 0;
	r25.s64 = r25.s64 + -1;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// addi r26,r26,2
	r26.s64 = r26.s64 + 2;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// bne 0x8249338c
	if (!cr0.eq) goto loc_8249338C;
	// ld r11,0(r29)
	r11.u64 = PPC_LOAD_U64(r29.u32 + 0);
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x82493408
	if (cr6.eq) goto loc_82493408;
	// addi r4,r24,1
	ctx.r4.s64 = r24.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82493018
	sub_82493018(ctx, base);
loc_82493408:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82493410"))) PPC_WEAK_FUNC(sub_82493410);
PPC_FUNC_IMPL(__imp__sub_82493410) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8249344c
	if (!cr0.lt) goto loc_8249344C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8249344c
	if (cr6.lt) goto loc_8249344C;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_8249344C:
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

__attribute__((alias("__imp__sub_82493460"))) PPC_WEAK_FUNC(sub_82493460);
PPC_FUNC_IMPL(__imp__sub_82493460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8249348c
	if (!cr6.eq) goto loc_8249348C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,9664
	ctx.r4.s64 = r11.s64 + 9664;
	// b 0x824934fc
	goto loc_824934FC;
loc_8249348C:
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7F800000;
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x82493504
	if (!cr6.eq) goto loc_82493504;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824934b0
	if (!cr6.eq) goto loc_824934B0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,13684
	ctx.r4.s64 = r11.s64 + 13684;
	// b 0x824934fc
	goto loc_824934FC;
loc_824934B0:
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824934c8
	if (!cr6.eq) goto loc_824934C8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,9656
	ctx.r4.s64 = r11.s64 + 9656;
	// b 0x824934fc
	goto loc_824934FC;
loc_824934C8:
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824934e0
	if (!cr6.eq) goto loc_824934E0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,13692
	ctx.r4.s64 = r11.s64 + 13692;
	// b 0x824934fc
	goto loc_824934FC;
loc_824934E0:
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824934f4
	if (cr0.eq) goto loc_824934F4;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,13676
	ctx.r4.s64 = r11.s64 + 13676;
	// b 0x824934fc
	goto loc_824934FC;
loc_824934F4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,13668
	ctx.r4.s64 = r11.s64 + 13668;
loc_824934FC:
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// b 0x82493518
	goto loc_82493518;
loc_82493504:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// addi r4,r11,9648
	ctx.r4.s64 = r11.s64 + 9648;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82493518:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82493528"))) PPC_WEAK_FUNC(sub_82493528);
PPC_FUNC_IMPL(__imp__sub_82493528) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd4
	// stwu r1,-624(r1)
	ea = -624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82493574
	if (cr6.lt) goto loc_82493574;
	// beq cr6,0x8249356c
	if (cr6.eq) goto loc_8249356C;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x82493564
	if (cr6.lt) goto loc_82493564;
	// bne cr6,0x8249357c
	if (!cr6.eq) goto loc_8249357C;
	// li r11,115
	r11.s64 = 115;
	// b 0x82493580
	goto loc_82493580;
loc_82493564:
	// li r11,99
	r11.s64 = 99;
	// b 0x82493580
	goto loc_82493580;
loc_8249356C:
	// li r11,105
	r11.s64 = 105;
	// b 0x82493580
	goto loc_82493580;
loc_82493574:
	// li r11,98
	r11.s64 = 98;
	// b 0x82493580
	goto loc_82493580;
loc_8249357C:
	// lbz r11,96(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
loc_82493580:
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x824935a4
	if (!cr0.eq) goto loc_824935A4;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,9776
	ctx.r4.s64 = ctx.r10.s64 + 9776;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// b 0x824935d4
	goto loc_824935D4;
loc_824935A4:
	// lwz r6,8(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bne cr6,0x824935c0
	if (!cr6.eq) goto loc_824935C0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,9768
	ctx.r4.s64 = ctx.r10.s64 + 9768;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// b 0x824935d4
	goto loc_824935D4;
loc_824935C0:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// add r11,r6,r9
	r11.u64 = ctx.r6.u64 + ctx.r9.u64;
	// addi r4,r10,9760
	ctx.r4.s64 = ctx.r10.s64 + 9760;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
loc_824935D4:
	// li r21,0
	r21.s64 = 0;
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,257
	ctx.r3.s64 = ctx.r1.s64 + 257;
	// stb r21,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, r21.u8);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r31,44(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82493814
	if (cr0.eq) goto loc_82493814;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82493814
	if (cr6.eq) goto loc_82493814;
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82493814
	if (!cr6.eq) goto loc_82493814;
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82493814
	if (!cr6.eq) goto loc_82493814;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r4,r11,9752
	ctx.r4.s64 = r11.s64 + 9752;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r22,r21
	r22.u64 = r21.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x824937dc
	if (!cr6.gt) goto loc_824937DC;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r23,r11,27144
	r23.s64 = r11.s64 + 27144;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,9728
	r27.s64 = r11.s64 + 9728;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,9712
	r26.s64 = r11.s64 + 9712;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-24616
	r30.s64 = r11.s64 + -24616;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r25,r11,-24612
	r25.s64 = r11.s64 + -24612;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r24,r11,-24604
	r24.s64 = r11.s64 + -24604;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r29,r11,-17980
	r29.s64 = r11.s64 + -17980;
loc_82493674:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x824936b0
	if (cr6.eq) goto loc_824936B0;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
loc_82493684:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82493684
	if (!cr6.eq) goto loc_82493684;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82493698:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x82493698
	if (!cr0.eq) goto loc_82493698;
loc_824936B0:
	// li r5,127
	ctx.r5.s64 = 127;
	// stb r21,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, r21.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,129
	ctx.r3.s64 = ctx.r1.s64 + 129;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82493774
	if (cr6.lt) goto loc_82493774;
	// beq cr6,0x82493750
	if (cr6.eq) goto loc_82493750;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x824936f0
	if (cr6.lt) goto loc_824936F0;
	// bne cr6,0x82493798
	if (!cr6.eq) goto loc_82493798;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// b 0x82493798
	goto loc_82493798;
loc_824936F0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lfs f4,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f4.f64 = double(temp.f32);
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// lfs f3,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f3.f64 = double(temp.f32);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// lfs f2,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f2.f64 = double(temp.f32);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lfs f1,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// b 0x8249376c
	goto loc_8249376C;
loc_82493750:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
loc_8249376C:
	// addi r31,r31,16
	r31.s64 = r31.s64 + 16;
	// b 0x82493798
	goto loc_82493798;
loc_82493774:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82493788
	if (!cr6.eq) goto loc_82493788;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_82493788:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82493798:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
loc_824937A0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x824937a0
	if (!cr6.eq) goto loc_824937A0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_824937B4:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x824937b4
	if (!cr0.eq) goto loc_824937B4;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x82493674
	if (cr6.lt) goto loc_82493674;
loc_824937DC:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r11,9708
	ctx.r10.s64 = r11.s64 + 9708;
	// addi r11,r1,256
	r11.s64 = ctx.r1.s64 + 256;
loc_824937E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x824937e8
	if (!cr6.eq) goto loc_824937E8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_824937FC:
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
	// bne 0x824937fc
	if (!cr0.eq) goto loc_824937FC;
loc_82493814:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// addi r11,r11,-3584
	r11.s64 = r11.s64 + -3584;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r7,r10,9120
	ctx.r7.s64 = ctx.r10.s64 + 9120;
	// beq cr6,0x82493850
	if (cr6.eq) goto loc_82493850;
loc_82493834:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82493864
	if (cr6.eq) goto loc_82493864;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82493834
	if (!cr6.eq) goto loc_82493834;
loc_82493850:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_82493854:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// addi r11,r11,-3640
	r11.s64 = r11.s64 + -3640;
	// b 0x8249387c
	goto loc_8249387C;
loc_82493864:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82493854
	goto loc_82493854;
loc_8249386C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x8249388c
	if (cr6.eq) goto loc_8249388C;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
loc_8249387C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8249386c
	if (!cr6.eq) goto loc_8249386C;
	// b 0x82493890
	goto loc_82493890;
loc_8249388C:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_82493890:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r9,28(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lwz r8,24(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// addi r10,r1,384
	ctx.r10.s64 = ctx.r1.s64 + 384;
	// addi r4,r11,9668
	ctx.r4.s64 = r11.s64 + 9668;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// addi r1,r1,624
	ctx.r1.s64 = ctx.r1.s64 + 624;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_824938C0"))) PPC_WEAK_FUNC(sub_824938C0);
PPC_FUNC_IMPL(__imp__sub_824938C0) {
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
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8252
	r28.s64 = r11.s64 + 8252;
	// beq cr6,0x82493918
	if (cr6.eq) goto loc_82493918;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,9808
	ctx.r4.s64 = r11.s64 + 9808;
	// b 0x82493934
	goto loc_82493934;
loc_82493918:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82493930
	if (cr6.eq) goto loc_82493930;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,9796
	ctx.r4.s64 = r11.s64 + 9796;
	// b 0x82493934
	goto loc_82493934;
loc_82493930:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_82493934:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82493980
	if (!cr6.eq) goto loc_82493980;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82493aa4
	if (!cr6.eq) goto loc_82493AA4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82493528
	sub_82493528(ctx, base);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82493a98
	if (cr6.eq) goto loc_82493A98;
loc_82493980:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r4,r11,9788
	ctx.r4.s64 = r11.s64 + 9788;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// lhz r11,6(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 6);
	// lhz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U16(r27.u32 + 4);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// beq cr6,0x824939c0
	if (cr6.eq) goto loc_824939C0;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x824939d0
	if (!cr6.eq) goto loc_824939D0;
loc_824939C0:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x824939d0
	if (cr0.eq) goto loc_824939D0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_824939D0:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// lwz r26,112(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r29,0
	r29.s64 = 0;
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// beq 0x82493bf0
	if (cr0.eq) goto loc_82493BF0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r11,9120
	r30.s64 = r11.s64 + 9120;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,9780
	r28.s64 = r11.s64 + 9780;
loc_824939FC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82493a20
	if (!cr6.lt) goto loc_82493A20;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82493A20:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// bl 0x824938c0
	sub_824938C0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82493a88
	if (cr6.eq) goto loc_82493A88;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
loc_82493A88:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplw cr6,r29,r26
	cr6.compare<uint32_t>(r29.u32, r26.u32, xer);
	// blt cr6,0x824939fc
	if (cr6.lt) goto loc_824939FC;
	// b 0x82493bf0
	goto loc_82493BF0;
loc_82493A98:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82493bf0
	if (cr6.eq) goto loc_82493BF0;
loc_82493AA4:
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r31,92(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r30,r11,r25
	r30.u64 = r11.u64 + r25.u64;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82493bf0
	if (cr6.eq) goto loc_82493BF0;
	// mr r27,r11
	r27.u64 = r11.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r29,r11,22044
	r29.s64 = r11.s64 + 22044;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r11,9120
	r28.s64 = r11.s64 + 9120;
loc_82493AF0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lhz r11,6(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// beq cr6,0x82493b20
	if (cr6.eq) goto loc_82493B20;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bne cr6,0x82493b30
	if (!cr6.eq) goto loc_82493B30;
loc_82493B20:
	// clrlwi. r9,r11,30
	ctx.r9.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x82493b30
	if (cr0.eq) goto loc_82493B30;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82493B30:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bge cr6,0x82493b50
	if (!cr6.lt) goto loc_82493B50;
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_82493B50:
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// subf r31,r11,r31
	r31.s64 = r31.s64 - r11.s64;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// lhz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lhz r6,10(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// bl 0x824938c0
	sub_824938C0(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82493be4
	if (cr6.eq) goto loc_82493BE4;
	// subfic r8,r9,0
	xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
loc_82493BE4:
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x82493af0
	if (!cr0.eq) goto loc_82493AF0;
loc_82493BF0:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82493BF8"))) PPC_WEAK_FUNC(sub_82493BF8);
PPC_FUNC_IMPL(__imp__sub_82493BF8) {
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
	// lwz r11,16(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82493ca0
	if (cr0.eq) goto loc_82493CA0;
	// addi r10,r11,28
	ctx.r10.s64 = r11.s64 + 28;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// ble cr6,0x82493c2c
	if (!cr6.gt) goto loc_82493C2C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82493ca4
	goto loc_82493CA4;
loc_82493C2C:
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// lwz r28,12(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82493ca0
	if (cr0.eq) goto loc_82493CA0;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// beq cr6,0x82493ca0
	if (cr6.eq) goto loc_82493CA0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,9120
	r29.s64 = r11.s64 + 9120;
loc_82493C58:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// bl 0x82491b58
	sub_82491B58(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824938c0
	sub_824938C0(ctx, base);
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
	// bne 0x82493c58
	if (!cr0.eq) goto loc_82493C58;
loc_82493CA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82493CA4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82493CAC"))) PPC_WEAK_FUNC(sub_82493CAC);
PPC_FUNC_IMPL(__imp__sub_82493CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82493CB0"))) PPC_WEAK_FUNC(sub_82493CB0);
PPC_FUNC_IMPL(__imp__sub_82493CB0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82493cf0
	if (cr6.eq) goto loc_82493CF0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,-24616
	ctx.r4.s64 = r11.s64 + -24616;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82493CF0:
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

__attribute__((alias("__imp__sub_82493D04"))) PPC_WEAK_FUNC(sub_82493D04);
PPC_FUNC_IMPL(__imp__sub_82493D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82493D08"))) PPC_WEAK_FUNC(sub_82493D08);
PPC_FUNC_IMPL(__imp__sub_82493D08) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x823cf180
	sub_823CF180(ctx, base);
	// li r31,0
	r31.s64 = 0;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82493d60
	if (cr0.eq) goto loc_82493D60;
loc_82493D2C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x823cb678
	sub_823CB678(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493318
	sub_82493318(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82493d2c
	if (cr6.lt) goto loc_82493D2C;
loc_82493D60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82493D68"))) PPC_WEAK_FUNC(sub_82493D68);
PPC_FUNC_IMPL(__imp__sub_82493D68) {
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
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// lwz r11,-27384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -27384);
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r30.u32);
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// li r31,0
	r31.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82493dbc
	if (cr6.eq) goto loc_82493DBC;
	// rlwinm. r11,r8,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// bne 0x82493dc0
	if (!cr0.eq) goto loc_82493DC0;
loc_82493DBC:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
loc_82493DC0:
	// li r5,448
	ctx.r5.s64 = 448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// bl 0x82491048
	sub_82491048(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x824940b4
	if (cr0.lt) goto loc_824940B4;
	// li r11,8
	r11.s64 = 8;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, r31.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, r31.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, r11.u32);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8249cbe0
	sub_8249CBE0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82491bc8
	sub_82491BC8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82493e40
	if (cr6.eq) goto loc_82493E40;
	// lis r28,-30602
	r28.s64 = -2005532672;
	// ori r28,r28,2156
	r28.u64 = r28.u64 | 2156;
	// b 0x824940ac
	goto loc_824940AC;
loc_82493E40:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82493E50:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82493e50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82493E50;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r24.u32);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// lis r6,-32183
	ctx.r6.s64 = -2109145088;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// addi r6,r6,4144
	ctx.r6.s64 = ctx.r6.s64 + 4144;
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// lis r25,-32183
	r25.s64 = -2109145088;
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// lis r26,-32183
	r26.s64 = -2109145088;
	// lis r27,-32183
	r27.s64 = -2109145088;
	// lis r28,-32183
	r28.s64 = -2109145088;
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// lis r29,-32209
	r29.s64 = -2110849024;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r11,r7,-1880
	r11.s64 = ctx.r7.s64 + -1880;
	// lis r30,-32183
	r30.s64 = -2109145088;
	// lis r5,-32216
	ctx.r5.s64 = -2111307776;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r5,-1880
	ctx.r5.s64 = ctx.r5.s64 + -1880;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r11,r8,-7712
	r11.s64 = ctx.r8.s64 + -7712;
	// li r24,50
	r24.s64 = 50;
	// addi r25,r25,3960
	r25.s64 = r25.s64 + 3960;
	// addi r26,r26,4136
	r26.s64 = r26.s64 + 4136;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// addi r27,r27,3968
	r27.s64 = r27.s64 + 3968;
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// addi r11,r9,-7712
	r11.s64 = ctx.r9.s64 + -7712;
	// addi r28,r28,4048
	r28.s64 = r28.s64 + 4048;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// addi r29,r29,21608
	r29.s64 = r29.s64 + 21608;
	// stw r25,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r25.u32);
	// addi r30,r30,4008
	r30.s64 = r30.s64 + 4008;
	// stw r26,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r26.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r27.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// addi r11,r10,21608
	r11.s64 = ctx.r10.s64 + 21608;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r28,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r28.u32);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r29.u32);
	// stw r30,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r30.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// bl 0x824a4168
	sub_824A4168(ctx, base);
	// lwz r11,280(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8249fe90
	sub_8249FE90(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82494084
	if (cr0.eq) goto loc_82494084;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a4930
	sub_824A4930(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// bl 0x824a0260
	sub_824A0260(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82493fb8
	if (cr6.eq) goto loc_82493FB8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a3f30
	sub_824A3F30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a3f18
	sub_824A3F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824a5100
	sub_824A5100(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a5ad0
	sub_824A5AD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82493fec
	goto loc_82493FEC;
loc_82493FB8:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82491938
	sub_82491938(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82493ff4
	if (!cr0.eq) goto loc_82493FF4;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x824a3f18
	sub_824A3F18(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824a5260
	sub_824A5260(ctx, base);
	// bl 0x824a1da0
	sub_824A1DA0(ctx, base);
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82493FEC:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82494000
	if (cr6.eq) goto loc_82494000;
loc_82493FF4:
	// lis r28,-32768
	r28.s64 = -2147483648;
	// ori r28,r28,16389
	r28.u64 = r28.u64 | 16389;
	// b 0x82494070
	goto loc_82494070;
loc_82494000:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,924(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r5,916(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82492e10
	sub_82492E10(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// blt 0x82494060
	if (cr0.lt) goto loc_82494060;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r31.u32);
	// bl 0x82493d08
	sub_82493D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cef60
	sub_823CEF60(ctx, base);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cef68
	sub_823CEF68(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82494060:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82494070
	if (cr6.eq) goto loc_82494070;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ceee0
	sub_823CEEE0(ctx, base);
loc_82494070:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a02f8
	sub_824A02F8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824a4c78
	sub_824A4C78(ctx, base);
	// b 0x82494090
	goto loc_82494090;
loc_82494084:
	// lis r28,-30602
	r28.s64 = -2005532672;
	// ori r28,r28,2156
	r28.u64 = r28.u64 | 2156;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82494090:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824940a4
	if (cr6.eq) goto loc_824940A4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249ff78
	sub_8249FF78(ctx, base);
loc_824940A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a4750
	sub_824A4750(ctx, base);
loc_824940AC:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82491de0
	sub_82491DE0(ctx, base);
loc_824940B4:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_824940C0"))) PPC_WEAK_FUNC(sub_824940C0);
PPC_FUNC_IMPL(__imp__sub_824940C0) {
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
	// stwu r1,-2576(r1)
	ea = -2576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r18,r6
	r18.u64 = ctx.r6.u64;
	// lwz r11,-27384(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -27384);
	// mr r17,r7
	r17.u64 = ctx.r7.u64;
	// li r25,0
	r25.s64 = 0;
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249410c
	if (cr6.eq) goto loc_8249410C;
	// rlwinm. r11,r8,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// bne 0x82494110
	if (!cr0.eq) goto loc_82494110;
loc_8249410C:
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
loc_82494110:
	// li r5,1860
	ctx.r5.s64 = 1860;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// ori r3,r3,33024
	ctx.r3.u64 = ctx.r3.u64 | 33024;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// addi r11,r1,240
	r11.s64 = ctx.r1.s64 + 240;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r16,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r16.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82494148:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82494148
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82494148;
	// li r5,260
	ctx.r5.s64 = 260;
	// stw r21,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r10,r1,2176
	ctx.r10.s64 = ctx.r1.s64 + 2176;
	// lhz r11,2(r21)
	r11.u64 = PPC_LOAD_U16(r21.u32 + 2);
	// cmplwi cr6,r11,1024
	cr6.compare<uint32_t>(r11.u32, 1024, xer);
	// stw r10,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, ctx.r10.u32);
	// lis r10,16392
	ctx.r10.s64 = 1074266112;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r11.u32);
	// stw r10,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r10.u32);
	// blt cr6,0x8249418c
	if (cr6.lt) goto loc_8249418C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249418C:
	// mr r30,r25
	r30.u64 = r25.u64;
	// addi r11,r21,4
	r11.s64 = r21.s64 + 4;
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, r30.u32);
	// b 0x82494260
	goto loc_82494260;
loc_8249419C:
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// beq cr6,0x824941e0
	if (cr6.eq) goto loc_824941E0;
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// beq cr6,0x8249425c
	if (cr6.eq) goto loc_8249425C;
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// beq cr6,0x824941d8
	if (cr6.eq) goto loc_824941D8;
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(r11.u32, 81, xer);
	// beq cr6,0x824941d8
	if (cr6.eq) goto loc_824941D8;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// bne cr6,0x8249426c
	if (!cr6.eq) goto loc_8249426C;
	// rlwinm r11,r10,18,15,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x82494260
	goto loc_82494260;
loc_824941D8:
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// b 0x82494260
	goto loc_82494260;
loc_824941E0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x8249425c
	if (!cr6.eq) goto loc_8249425C;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(r30.u32, 64, xer);
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, r11.u32);
	// blt cr6,0x8249420c
	if (cr6.lt) goto loc_8249420C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249420C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,356
	ctx.r10.s64 = ctx.r1.s64 + 356;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,7(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 7);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rlwinm r9,r9,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwimi r9,r10,20,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r30,612(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
loc_8249425C:
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
loc_82494260:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x8249419c
	if (!cr6.eq) goto loc_8249419C;
loc_8249426C:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x824a6438
	sub_824A6438(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// addi r9,r1,1136
	ctx.r9.s64 = ctx.r1.s64 + 1136;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x824a7b68
	sub_824A7B68(ctx, base);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// blt 0x824946cc
	if (cr0.lt) goto loc_824946CC;
	// lwz r11,336(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// ble cr6,0x824942b8
	if (!cr6.gt) goto loc_824942B8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824942B8:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// li r10,9
	ctx.r10.s64 = 9;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_824942C8:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x824942c8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_824942C8;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r24,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r24.u32);
	// lis r7,-32216
	ctx.r7.s64 = -2111307776;
	// lis r8,-32203
	ctx.r8.s64 = -2110455808;
	// lis r9,-32203
	ctx.r9.s64 = -2110455808;
	// lis r6,-32183
	ctx.r6.s64 = -2109145088;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// lis r10,-32209
	ctx.r10.s64 = -2110849024;
	// std r25,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r25.u64);
	// addi r6,r6,4144
	ctx.r6.s64 = ctx.r6.s64 + 4144;
	// std r25,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r25.u64);
	// lis r26,-32183
	r26.s64 = -2109145088;
	// std r25,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r25.u64);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// lis r27,-32183
	r27.s64 = -2109145088;
	// lis r28,-32183
	r28.s64 = -2109145088;
	// lis r29,-32183
	r29.s64 = -2109145088;
	// stw r6,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r6.u32);
	// lis r30,-32209
	r30.s64 = -2110849024;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// addi r11,r7,-1880
	r11.s64 = ctx.r7.s64 + -1880;
	// lis r31,-32183
	r31.s64 = -2109145088;
	// lis r5,-32216
	ctx.r5.s64 = -2111307776;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r5,-1880
	ctx.r5.s64 = ctx.r5.s64 + -1880;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r11,r8,-7712
	r11.s64 = ctx.r8.s64 + -7712;
	// li r24,50
	r24.s64 = 50;
	// addi r26,r26,3960
	r26.s64 = r26.s64 + 3960;
	// addi r27,r27,4136
	r27.s64 = r27.s64 + 4136;
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// addi r28,r28,3968
	r28.s64 = r28.s64 + 3968;
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// addi r11,r9,-7712
	r11.s64 = ctx.r9.s64 + -7712;
	// addi r29,r29,4048
	r29.s64 = r29.s64 + 4048;
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r24.u32);
	// addi r30,r30,21608
	r30.s64 = r30.s64 + 21608;
	// stw r26,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r26.u32);
	// addi r31,r31,4008
	r31.s64 = r31.s64 + 4008;
	// stw r27,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r27.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r28.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, r11.u32);
	// addi r11,r10,21608
	r11.s64 = ctx.r10.s64 + 21608;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r29,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, r29.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r30.u32);
	// stw r31,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r31.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// bl 0x824a4168
	sub_824A4168(ctx, base);
	// lwz r11,336(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// bl 0x8249fe90
	sub_8249FE90(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82494698
	if (cr0.eq) goto loc_82494698;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a4930
	sub_824A4930(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// bl 0x824a0260
	sub_824A0260(ctx, base);
	// lwz r11,612(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r31,r25
	r31.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82494414
	if (cr6.eq) goto loc_82494414;
loc_824943F0:
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82491d20
	sub_82491D20(ctx, base);
	// lwz r11,612(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x824943f0
	if (cr6.lt) goto loc_824943F0;
loc_82494414:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82494464
	if (cr6.eq) goto loc_82494464;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a3f30
	sub_824A3F30(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a3f18
	sub_824A3F18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824a5100
	sub_824A5100(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a5ad0
	sub_824A5AD0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82494498
	goto loc_82494498;
loc_82494464:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82491938
	sub_82491938(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824944a0
	if (!cr0.eq) goto loc_824944A0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826b43d8
	sub_826B43D8(ctx, base);
	// bl 0x824a3f18
	sub_824A3F18(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824a5260
	sub_824A5260(ctx, base);
	// bl 0x824a1da0
	sub_824A1DA0(ctx, base);
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82494498:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x824944a8
	if (cr6.eq) goto loc_824944A8;
loc_824944A0:
	// lis r23,-32768
	r23.s64 = -2147483648;
	// ori r23,r23,16389
	r23.u64 = r23.u64 | 16389;
loc_824944A8:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// blt cr6,0x82494684
	if (cr6.lt) goto loc_82494684;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r25
	r29.u64 = r25.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82494500
	if (!cr6.eq) goto loc_82494500;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824a2d10
	sub_824A2D10(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x824a1da0
	sub_824A1DA0(ctx, base);
	// b 0x824944f8
	goto loc_824944F8;
loc_824944D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x824944ec
	if (!cr6.eq) goto loc_824944EC;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_824944EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a20a0
	sub_824A20A0(ctx, base);
loc_824944F8:
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x824944d4
	if (!cr0.eq) goto loc_824944D4;
loc_82494500:
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x82494520
	if (!cr0.eq) goto loc_82494520;
	// lis r23,-32761
	r23.s64 = -2147024896;
	// ori r23,r23,14
	r23.u64 = r23.u64 | 14;
loc_82494520:
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// blt cr6,0x824945a8
	if (cr6.lt) goto loc_824945A8;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824945a4
	if (!cr6.eq) goto loc_824945A4;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824a2d10
	sub_824A2D10(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x824a1da0
	sub_824A1DA0(ctx, base);
	// b 0x8249459c
	goto loc_8249459C;
loc_8249454C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a2148
	sub_824A2148(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82494590
	if (!cr6.eq) goto loc_82494590;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,356
	ctx.r10.s64 = ctx.r1.s64 + 356;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r9,r8
	ctx.r9.u32 = ctx.r9.u32 / ctx.r8.u32;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// rlwimi r9,r11,20,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 20) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r9,r11,0,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// clrlwi r11,r9,12
	r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82494590:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824a20a0
	sub_824A20A0(ctx, base);
loc_8249459C:
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8249454c
	if (!cr0.eq) goto loc_8249454C;
loc_824945A4:
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
loc_824945A8:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// blt cr6,0x82494670
	if (cr6.lt) goto loc_82494670;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// lwz r10,2668(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2668);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r5,2660(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2660);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82492e10
	sub_82492E10(ctx, base);
	// lwz r31,84(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r23,r3
	r23.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// blt 0x82494660
	if (cr0.lt) goto loc_82494660;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, r31.u32);
	// bl 0x82493d08
	sub_82493D08(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cb648
	sub_823CB648(ctx, base);
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82494640
	if (cr0.eq) goto loc_82494640;
loc_82494604:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cb6a8
	sub_823CB6A8(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82494634
	if (cr6.eq) goto loc_82494634;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82494634
	if (cr0.eq) goto loc_82494634;
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82494634:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// blt cr6,0x82494604
	if (cr6.lt) goto loc_82494604;
loc_82494640:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cef60
	sub_823CEF60(ctx, base);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823cef68
	sub_823CEF68(ctx, base);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_82494660:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82494670
	if (cr6.eq) goto loc_82494670;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823ceee0
	sub_823CEEE0(ctx, base);
loc_82494670:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82494684
	if (cr6.eq) goto loc_82494684;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_82494684:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824a02f8
	sub_824A02F8(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x824a4c78
	sub_824A4C78(ctx, base);
	// b 0x824946a4
	goto loc_824946A4;
loc_82494698:
	// lis r23,-32768
	r23.s64 = -2147483648;
	// stw r25,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r25.u32);
	// ori r23,r23,16389
	r23.u64 = r23.u64 | 16389;
loc_824946A4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824946b8
	if (cr6.eq) goto loc_824946B8;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8249ff78
	sub_8249FF78(ctx, base);
loc_824946B8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a4750
	sub_824A4750(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_824946CC:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,2576
	ctx.r1.s64 = ctx.r1.s64 + 2576;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_824946D8"))) PPC_WEAK_FUNC(sub_824946D8);
PPC_FUNC_IMPL(__imp__sub_824946D8) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82494758
	if (cr6.eq) goto loc_82494758;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82494758
	if (cr6.lt) goto loc_82494758;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82494758
	if (cr6.eq) goto loc_82494758;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82494758
	if (cr6.eq) goto loc_82494758;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-2
	r31.s64 = -131072;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82494734
	if (!cr6.eq) goto loc_82494734;
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824940c0
	sub_824940C0(ctx, base);
	// b 0x82494760
	goto loc_82494760;
loc_82494734:
	// lis r31,-1
	r31.s64 = -65536;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x82494758
	if (!cr6.eq) goto loc_82494758;
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82493d68
	sub_82493D68(ctx, base);
	// b 0x82494760
	goto loc_82494760;
loc_82494758:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82494760:
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

__attribute__((alias("__imp__sub_82494774"))) PPC_WEAK_FUNC(sub_82494774);
PPC_FUNC_IMPL(__imp__sub_82494774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82494778"))) PPC_WEAK_FUNC(sub_82494778);
PPC_FUNC_IMPL(__imp__sub_82494778) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lwz r26,4(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// add r24,r11,r8
	r24.u64 = r11.u64 + ctx.r8.u64;
	// beq 0x82494890
	if (cr0.eq) goto loc_82494890;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ori r25,r3,2
	r25.u64 = ctx.r3.u64 | 2;
	// bne cr6,0x824947b8
	if (!cr6.eq) goto loc_824947B8;
	// ori r25,r3,1
	r25.u64 = ctx.r3.u64 | 1;
loc_824947B8:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,9820
	r29.s64 = r11.s64 + 9820;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r11,2936
	r28.s64 = r11.s64 + 2936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// bne cr6,0x8249481c
	if (!cr6.eq) goto loc_8249481C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r9,r31,36
	ctx.r9.s64 = r31.s64 + 36;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r9.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// b 0x82494824
	goto loc_82494824;
loc_8249481C:
	// addi r10,r31,32
	ctx.r10.s64 = r31.s64 + 32;
	// stw r10,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r10.u32);
loc_82494824:
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r9,-32183
	ctx.r9.s64 = -2109145088;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r10,13328
	ctx.r6.s64 = ctx.r10.s64 + 13328;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// addi r9,r9,6880
	ctx.r9.s64 = ctx.r9.s64 + 6880;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x826d1f48
	sub_826D1F48(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x82494894
	if (cr6.lt) goto loc_82494894;
loc_82494890:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82494894:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8249489C"))) PPC_WEAK_FUNC(sub_8249489C);
PPC_FUNC_IMPL(__imp__sub_8249489C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824948A0"))) PPC_WEAK_FUNC(sub_824948A0);
PPC_FUNC_IMPL(__imp__sub_824948A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,9884
	ctx.r4.s64 = r11.s64 + 9884;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,9820
	r29.s64 = r11.s64 + 9820;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,2936
	r28.s64 = r11.s64 + 2936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r11,9864
	ctx.r4.s64 = r11.s64 + 9864;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9852
	ctx.r4.s64 = r11.s64 + 9852;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r30,8
	ctx.r4.s64 = r30.s64 + 8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82494958
	if (!cr0.lt) goto loc_82494958;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82494958
	if (cr6.lt) goto loc_82494958;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
loc_82494958:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12480
	ctx.r4.s64 = r11.s64 + 12480;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8249498C"))) PPC_WEAK_FUNC(sub_8249498C);
PPC_FUNC_IMPL(__imp__sub_8249498C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82494990"))) PPC_WEAK_FUNC(sub_82494990);
PPC_FUNC_IMPL(__imp__sub_82494990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x8239bcc4
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82494778
	sub_82494778(ctx, base);
	// mr. r15,r3
	r15.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r15.s32, 0, xer);
	// blt 0x82494c04
	if (cr0.lt) goto loc_82494C04;
	// rlwinm. r11,r29,0,23,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82494c04
	if (cr0.eq) goto loc_82494C04;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,9820
	r29.s64 = r11.s64 + 9820;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,2936
	r28.s64 = r11.s64 + 2936;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9844
	ctx.r4.s64 = r11.s64 + 9844;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lhz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// addi r4,r11,10064
	ctx.r4.s64 = r11.s64 + 10064;
	// lhz r5,26(r30)
	ctx.r5.u64 = PPC_LOAD_U16(r30.u32 + 26);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,10012
	ctx.r4.s64 = ctx.r10.s64 + 10012;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// clrlwi r5,r11,28
	ctx.r5.u64 = r11.u32 & 0xF;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// rlwinm. r23,r11,27,27,31
	r23.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// beq 0x82494bf4
	if (cr0.eq) goto loc_82494BF4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lwz r17,96(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9984
	ctx.r4.s64 = r11.s64 + 9984;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// li r16,0
	r16.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82494bdc
	if (cr6.eq) goto loc_82494BDC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,9932
	r22.s64 = r11.s64 + 9932;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,9904
	r26.s64 = r11.s64 + 9904;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r25,r11,-4288
	r25.s64 = r11.s64 + -4288;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r21,r11,14828
	r21.s64 = r11.s64 + 14828;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r20,r11,21632
	r20.s64 = r11.s64 + 21632;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r19,r11,27864
	r19.s64 = r11.s64 + 27864;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r24,r11,9120
	r24.s64 = r11.s64 + 9120;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r18,r11,22000
	r18.s64 = r11.s64 + 22000;
loc_82494B04:
	// lwz r30,0(r17)
	r30.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// rlwinm r9,r30,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0xF;
	// rlwinm r6,r30,28,28,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 28) & 0xF;
	// clrlwi r7,r30,28
	ctx.r7.u64 = r30.u32 & 0xF;
	// rlwinm. r11,r9,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82494b24
	if (!cr0.eq) goto loc_82494B24;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
loc_82494B24:
	// rlwinm. r11,r9,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r19
	r11.u64 = r19.u64;
	// bne 0x82494b34
	if (!cr0.eq) goto loc_82494B34;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82494B34:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// bne 0x82494b44
	if (!cr0.eq) goto loc_82494B44;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_82494B44:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// bne 0x82494b54
	if (!cr0.eq) goto loc_82494B54;
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
loc_82494B54:
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// rlwinm r8,r30,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 24) & 0xF;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r6,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r25.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82494bc8
	if (cr6.eq) goto loc_82494BC8;
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// blt cr6,0x82494bc8
	if (cr6.lt) goto loc_82494BC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82494BC8:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// clrlwi r16,r30,24
	r16.u64 = r30.u32 & 0xFF;
	// addi r17,r17,4
	r17.s64 = r17.s64 + 4;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// blt cr6,0x82494b04
	if (cr6.lt) goto loc_82494B04;
loc_82494BDC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82494BF4:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9836
	ctx.r4.s64 = r11.s64 + 9836;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
loc_82494C04:
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_82494C10"))) PPC_WEAK_FUNC(sub_82494C10);
PPC_FUNC_IMPL(__imp__sub_82494C10) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82494778
	sub_82494778(ctx, base);
	// mr. r14,r3
	r14.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r14.u32);
	// blt 0x82495038
	if (cr0.lt) goto loc_82495038;
	// rlwinm. r11,r30,0,23,23
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82495038
	if (cr0.eq) goto loc_82495038;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lwz r30,28(r23)
	r30.u64 = PPC_LOAD_U32(r23.u32 + 28);
	// lwz r26,24(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// addi r15,r11,9836
	r15.s64 = r11.s64 + 9836;
	// lwz r24,96(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// addi r22,r11,9844
	r22.s64 = r11.s64 + 9844;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r15,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r15.u32);
	// addi r28,r11,2936
	r28.s64 = r11.s64 + 2936;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,9820
	r27.s64 = r11.s64 + 9820;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r16,r11,-4288
	r16.s64 = r11.s64 + -4288;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r16.u32);
	// beq 0x82494db4
	if (cr0.eq) goto loc_82494DB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,10324
	ctx.r4.s64 = r11.s64 + 10324;
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r24
	r29.u64 = r11.u64 + r24.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82494da8
	if (cr6.eq) goto loc_82494DA8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r21,r29
	r21.u64 = r29.u64;
	// addi r19,r11,10320
	r19.s64 = r11.s64 + 10320;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r18,r11,-3424
	r18.s64 = r11.s64 + -3424;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r17,r11,10296
	r17.s64 = r11.s64 + 10296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r20,r11,10268
	r20.s64 = r11.s64 + 10268;
loc_82494D28:
	// lwz r29,0(r21)
	r29.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// rlwinm r11,r29,22,26,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 22) & 0x3C;
	// clrlwi r9,r29,20
	ctx.r9.u64 = r29.u32 & 0xFFF;
	// rlwinm r7,r29,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// lwzx r6,r11,r16
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + r16.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// rlwinm. r11,r29,0,9,9
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82494d64
	if (cr0.eq) goto loc_82494D64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82494D64:
	// rlwinm. r11,r29,12,30,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 12) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82494d80
	if (cr0.eq) goto loc_82494D80;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwzx r5,r11,r18
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r18.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82494D80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// cmplw cr6,r25,r30
	cr6.compare<uint32_t>(r25.u32, r30.u32, xer);
	// blt cr6,0x82494d28
	if (cr6.lt) goto loc_82494D28;
loc_82494DA8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
loc_82494DB4:
	// lwz r11,20(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 20);
	// rlwinm. r21,r11,27,27,31
	r21.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	cr0.compare<int32_t>(r21.s32, 0, xer);
	// beq 0x82495038
	if (cr0.eq) goto loc_82495038;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lwz r9,32(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + 32);
	// add r11,r21,r30
	r11.u64 = r21.u64 + r30.u64;
	// add r10,r30,r26
	ctx.r10.u64 = r30.u64 + r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// add r9,r11,r26
	ctx.r9.u64 = r11.u64 + r26.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// add r22,r10,r24
	r22.u64 = ctx.r10.u64 + r24.u64;
	// addi r4,r11,10236
	ctx.r4.s64 = r11.s64 + 10236;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8249502c
	if (cr6.eq) goto loc_8249502C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r19,r11,10176
	r19.s64 = r11.s64 + 10176;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r20,r11,10160
	r20.s64 = r11.s64 + 10160;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r18,r11,9932
	r18.s64 = r11.s64 + 9932;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,10132
	r24.s64 = r11.s64 + 10132;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r17,r11,14828
	r17.s64 = r11.s64 + 14828;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r16,r11,21632
	r16.s64 = r11.s64 + 21632;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r15,r11,27864
	r15.s64 = r11.s64 + 27864;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r23,r11,9120
	r23.s64 = r11.s64 + 9120;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r14,r11,22000
	r14.s64 = r11.s64 + 22000;
	// b 0x82494e94
	goto loc_82494E94;
loc_82494E90:
	// lwz r30,104(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82494E94:
	// lwz r29,0(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// rlwinm r9,r29,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0xF;
	// rlwinm r5,r29,28,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xF;
	// clrlwi r7,r29,28
	ctx.r7.u64 = r29.u32 & 0xF;
	// rlwinm r8,r29,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 24) & 0xF;
	// rlwinm. r11,r9,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82494eb8
	if (!cr0.eq) goto loc_82494EB8;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
loc_82494EB8:
	// rlwinm. r11,r9,0,29,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r15
	r11.u64 = r15.u64;
	// bne 0x82494ec8
	if (!cr0.eq) goto loc_82494EC8;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82494EC8:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
	// bne 0x82494ed8
	if (!cr0.eq) goto loc_82494ED8;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_82494ED8:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r9,r17
	ctx.r9.u64 = r17.u64;
	// bne 0x82494ee8
	if (!cr0.eq) goto loc_82494EE8;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_82494EE8:
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82494f5c
	if (cr6.eq) goto loc_82494F5C;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82494f5c
	if (cr6.lt) goto loc_82494F5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82494F5C:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// rlwinm r30,r29,16,20,31
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFF;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82494fd8
	if (!cr6.lt) goto loc_82494FD8;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r10
	r26.u64 = r11.u64 + ctx.r10.u64;
loc_82494F80:
	// lwz r29,0(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// clrlwi r6,r29,20
	ctx.r6.u64 = r29.u32 & 0xFFF;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// rlwinm. r11,r29,0,19,19
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82494fcc
	if (!cr0.eq) goto loc_82494FCC;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82494f80
	if (cr6.lt) goto loc_82494F80;
loc_82494FCC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82494ffc
	if (cr6.lt) goto loc_82494FFC;
loc_82494FD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82494FFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmplw cr6,r25,r21
	cr6.compare<uint32_t>(r25.u32, r21.u32, xer);
	// blt cr6,0x82494e90
	if (cr6.lt) goto loc_82494E90;
	// lwz r14,112(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r15,116(r1)
	r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_8249502C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
loc_82495038:
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82495044"))) PPC_WEAK_FUNC(sub_82495044);
PPC_FUNC_IMPL(__imp__sub_82495044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82495048"))) PPC_WEAK_FUNC(sub_82495048);
PPC_FUNC_IMPL(__imp__sub_82495048) {
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(r11.u32, 36, xer);
	// bge cr6,0x82495084
	if (!cr6.lt) goto loc_82495084;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82495084:
	// addi r11,r10,3
	r11.s64 = ctx.r10.s64 + 3;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824950e0
	if (cr0.eq) goto loc_824950E0;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x824950e0
	if (cr6.lt) goto loc_824950E0;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x824950d0
	if (cr6.lt) goto loc_824950D0;
	// beq cr6,0x824950bc
	if (cr6.eq) goto loc_824950BC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x824950e0
	goto loc_824950E0;
loc_824950BC:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82494c10
	sub_82494C10(ctx, base);
	// b 0x824950e0
	goto loc_824950E0;
loc_824950D0:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82494990
	sub_82494990(ctx, base);
loc_824950E0:
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

__attribute__((alias("__imp__sub_824950F8"))) PPC_WEAK_FUNC(sub_824950F8);
PPC_FUNC_IMPL(__imp__sub_824950F8) {
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
	// lwz r16,-14008(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14008);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// stw r29,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r29.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r28,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82495134
	if (!cr6.eq) goto loc_82495134;
loc_82495128:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x824951e8
	// ERROR 824951E8
	return;
loc_82495134:
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82495128
	if (cr6.lt) goto loc_82495128;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82495128
	if (cr6.eq) goto loc_82495128;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82495128
	if (cr6.eq) goto loc_82495128;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824946d8
	sub_824946D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// bge 0x824951a8
	if (!cr0.lt) goto loc_824951A8;
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2921
	r11.u64 = r11.u64 | 2921;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x824951a8
	if (!cr6.eq) goto loc_824951A8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r6,r11,10496
	ctx.r6.s64 = r11.s64 + 10496;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824951A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824951e4
	// ERROR 824951E4
	return;
}

__attribute__((alias("__imp__sub_82495100"))) PPC_WEAK_FUNC(sub_82495100);
PPC_FUNC_IMPL(__imp__sub_82495100) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// stw r29,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r29.u32);
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// stw r28,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r28.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82495134
	if (!cr6.eq) goto loc_82495134;
loc_82495128:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x824951e8
	goto loc_824951E8;
loc_82495134:
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82495128
	if (cr6.lt) goto loc_82495128;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82495128
	if (cr6.eq) goto loc_82495128;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x82495128
	if (cr6.eq) goto loc_82495128;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x824946d8
	sub_824946D8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// bge 0x824951a8
	if (!cr0.lt) goto loc_824951A8;
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2921
	r11.u64 = r11.u64 | 2921;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x824951a8
	if (!cr6.eq) goto loc_824951A8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r6,r11,10496
	ctx.r6.s64 = r11.s64 + 10496;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_824951A8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x824951e4
	goto loc_824951E4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r6,r11,10440
	ctx.r6.s64 = r11.s64 + 10440;
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
loc_824951E4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824951E8:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824951B8"))) PPC_WEAK_FUNC(sub_824951B8);
PPC_FUNC_IMPL(__imp__sub_824951B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r6,r11,10440
	ctx.r6.s64 = r11.s64 + 10440;
	// lwz r11,220(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// li r5,47
	ctx.r5.s64 = 47;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824951F0"))) PPC_WEAK_FUNC(sub_824951F0);
PPC_FUNC_IMPL(__imp__sub_824951F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824951FC"))) PPC_WEAK_FUNC(sub_824951FC);
PPC_FUNC_IMPL(__imp__sub_824951FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82495200"))) PPC_WEAK_FUNC(sub_82495200);
PPC_FUNC_IMPL(__imp__sub_82495200) {
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
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8249524c
	if (!cr0.eq) goto loc_8249524C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x824953b8
	goto loc_824953B8;
loc_8249524C:
	// lwz r11,812(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r11,804(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82495100
	sub_82495100(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x82495298
	if (cr0.lt) goto loc_82495298;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823ca800
	sub_823CA800(ctx, base);
loc_82495298:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x824953b4
	if (cr6.lt) goto loc_824953B4;
	// rlwinm. r11,r24,0,27,27
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824953b4
	if (!cr0.eq) goto loc_824953B4;
	// lwz r11,820(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// li r31,0
	r31.s64 = 0;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r27,r11,10,15,21
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1FC00;
	// lis r11,-32191
	r11.s64 = -2109669376;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-6576
	ctx.r7.s64 = r11.s64 + -6576;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x824952f8
	if (cr0.lt) goto loc_824952F8;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824953b4
	if (cr6.eq) goto loc_824953B4;
loc_824952F8:
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// sth r31,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, r31.u16);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// bge cr6,0x82495330
	if (!cr6.lt) goto loc_82495330;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r11,1648
	ctx.r6.s64 = r11.s64 + 1648;
	// b 0x82495338
	goto loc_82495338;
loc_82495330:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r6,r11,1596
	ctx.r6.s64 = r11.s64 + 1596;
loc_82495338:
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r5,r11,7101
	ctx.r5.s64 = r11.s64 + 7101;
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32183
	r11.s64 = -2109145088;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// addi r7,r11,12768
	ctx.r7.s64 = r11.s64 + 12768;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// lhz r11,120(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8249537c
	if (cr0.eq) goto loc_8249537C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824930f8
	sub_824930F8(ctx, base);
loc_8249537C:
	// lis r11,-32183
	r11.s64 = -2109145088;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,12768
	ctx.r6.s64 = r11.s64 + 12768;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82496aa0
	sub_82496AA0(ctx, base);
	// lhz r11,120(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824953b4
	if (cr0.eq) goto loc_824953B4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824930f8
	sub_824930F8(ctx, base);
loc_824953B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824953B8:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_824953C0"))) PPC_WEAK_FUNC(sub_824953C0);
PPC_FUNC_IMPL(__imp__sub_824953C0) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824a8f68
	sub_824A8F68(ctx, base);
	// addi r11,r29,-1
	r11.s64 = r29.s64 + -1;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// fcmpu cr6,f0,f0
	cr6.compare(f0.f64, f0.f64);
	// rlwinm r25,r11,27,31,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x82495a48
	if (!cr6.eq) goto loc_82495A48;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x82495434
	if (cr6.eq) goto loc_82495434;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-4368
	ctx.r5.s64 = r11.s64 + -4368;
	// b 0x8249543c
	goto loc_8249543C;
loc_82495434:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-4376
	ctx.r5.s64 = r11.s64 + -4376;
loc_8249543C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11908
	ctx.r4.s64 = r11.s64 + 11908;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,9820
	r30.s64 = r11.s64 + 9820;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,2936
	r29.s64 = r11.s64 + 2936;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// bne cr6,0x824954a8
	if (!cr6.eq) goto loc_824954A8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11896
	ctx.r4.s64 = r11.s64 + 11896;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// b 0x824954d0
	goto loc_824954D0;
loc_824954A8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11880
	ctx.r4.s64 = r11.s64 + 11880;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824954D0:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// bne cr6,0x82495504
	if (!cr6.eq) goto loc_82495504;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11864
	ctx.r4.s64 = r11.s64 + 11864;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// b 0x8249552c
	goto loc_8249552C;
loc_82495504:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11848
	ctx.r4.s64 = r11.s64 + 11848;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_8249552C:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// bne cr6,0x82495560
	if (!cr6.eq) goto loc_82495560;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11832
	ctx.r4.s64 = r11.s64 + 11832;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// b 0x82495588
	goto loc_82495588;
loc_82495560:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11812
	ctx.r4.s64 = r11.s64 + 11812;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82495588:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11796
	ctx.r4.s64 = r11.s64 + 11796;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// addi r28,r11,9120
	r28.s64 = r11.s64 + 9120;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,14436
	r27.s64 = r11.s64 + 14436;
	// bne cr6,0x82495638
	if (!cr6.eq) goto loc_82495638;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11776
	ctx.r4.s64 = r11.s64 + 11776;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11772
	ctx.r4.s64 = r11.s64 + 11772;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,64
	r11.s64 = 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divw r11,r11,r5
	r11.s32 = r11.s32 / ctx.r5.s32;
	// twllei r5,0
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpwi cr6,r11,63
	cr6.compare<int32_t>(r11.s32, 63, xer);
	// ble cr6,0x8249566c
	if (!cr6.gt) goto loc_8249566C;
	// li r26,63
	r26.s64 = 63;
	// b 0x8249567c
	goto loc_8249567C;
loc_82495638:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,2836
	ctx.r4.s64 = r11.s64 + 2836;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,64
	r11.s64 = 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divw r11,r11,r5
	r11.s32 = r11.s32 / ctx.r5.s32;
	// twllei r5,0
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// ble cr6,0x8249566c
	if (!cr6.gt) goto loc_8249566C;
	// li r26,31
	r26.s64 = 31;
	// b 0x8249567c
	goto loc_8249567C;
loc_8249566C:
	// mr r26,r11
	r26.u64 = r11.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// beq cr6,0x82495680
	if (cr6.eq) goto loc_82495680;
loc_8249567C:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
loc_82495680:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// bne cr6,0x82495690
	if (!cr6.eq) goto loc_82495690;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
loc_82495690:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r4,r11,11748
	ctx.r4.s64 = r11.s64 + 11748;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// bne cr6,0x824956f0
	if (!cr6.eq) goto loc_824956F0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11688
	ctx.r4.s64 = r11.s64 + 11688;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// b 0x82495718
	goto loc_82495718;
loc_824956F0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,11624
	ctx.r4.s64 = r11.s64 + 11624;
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82495718:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249578c
	if (cr6.eq) goto loc_8249578C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11544
	ctx.r4.s64 = r11.s64 + 11544;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11520
	ctx.r4.s64 = r11.s64 + 11520;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_8249578C:
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824957e8
	if (cr6.eq) goto loc_824957E8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11440
	ctx.r4.s64 = r11.s64 + 11440;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11368
	ctx.r4.s64 = r11.s64 + 11368;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824957E8:
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249581c
	if (cr6.eq) goto loc_8249581C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11280
	ctx.r4.s64 = r11.s64 + 11280;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_8249581C:
	// lwz r11,148(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82495850
	if (cr6.eq) goto loc_82495850;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11208
	ctx.r4.s64 = r11.s64 + 11208;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82495850:
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824958ac
	if (cr6.eq) goto loc_824958AC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11128
	ctx.r4.s64 = r11.s64 + 11128;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11088
	ctx.r4.s64 = r11.s64 + 11088;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824958AC:
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82495908
	if (cr6.eq) goto loc_82495908;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11008
	ctx.r4.s64 = r11.s64 + 11008;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,10960
	ctx.r4.s64 = r11.s64 + 10960;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82495908:
	// cmplwi cr6,r26,9
	cr6.compare<uint32_t>(r26.u32, 9, xer);
	// beq cr6,0x82495918
	if (cr6.eq) goto loc_82495918;
	// cmplwi cr6,r26,6
	cr6.compare<uint32_t>(r26.u32, 6, xer);
	// bne cr6,0x82495940
	if (!cr6.eq) goto loc_82495940;
loc_82495918:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,10880
	ctx.r4.s64 = r11.s64 + 10880;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82495940:
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(r26.u32, 3, xer);
	// bne cr6,0x82495a30
	if (!cr6.eq) goto loc_82495A30;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,10800
	ctx.r4.s64 = r11.s64 + 10800;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,56
	cr6.compare<int32_t>(r11.s32, 56, xer);
	// ble cr6,0x82495990
	if (!cr6.gt) goto loc_82495990;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,10736
	ctx.r4.s64 = r11.s64 + 10736;
	// b 0x82495998
	goto loc_82495998;
loc_82495990:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,10680
	ctx.r4.s64 = r11.s64 + 10680;
loc_82495998:
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x824959c8
	if (cr6.eq) goto loc_824959C8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,10660
	ctx.r5.s64 = r11.s64 + 10660;
	// b 0x824959d0
	goto loc_824959D0;
loc_824959C8:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,10640
	ctx.r5.s64 = r11.s64 + 10640;
loc_824959D0:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,10592
	ctx.r4.s64 = r11.s64 + 10592;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// subfic r10,r25,0
	xer.ca = r25.u32 <= 0;
	ctx.r10.s64 = 0 - r25.s64;
	// addi r4,r11,10556
	ctx.r4.s64 = r11.s64 + 10556;
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,29,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x6;
	// addi r5,r11,80
	ctx.r5.s64 = r11.s64 + 80;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82495A30:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82495A48:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82495A54"))) PPC_WEAK_FUNC(sub_82495A54);
PPC_FUNC_IMPL(__imp__sub_82495A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82495A58"))) PPC_WEAK_FUNC(sub_82495A58);
PPC_FUNC_IMPL(__imp__sub_82495A58) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r11,9828
	ctx.r4.s64 = r11.s64 + 9828;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,-24616
	ctx.r4.s64 = r11.s64 + -24616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9836
	ctx.r4.s64 = r11.s64 + 9836;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
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

__attribute__((alias("__imp__sub_82495ABC"))) PPC_WEAK_FUNC(sub_82495ABC);
PPC_FUNC_IMPL(__imp__sub_82495ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82495AC0"))) PPC_WEAK_FUNC(sub_82495AC0);
PPC_FUNC_IMPL(__imp__sub_82495AC0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// addi r11,r11,-3408
	r11.s64 = r11.s64 + -3408;
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// li r3,18
	ctx.r3.s64 = 18;
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r10,r10,-4160
	ctx.r10.s64 = ctx.r10.s64 + -4160;
	// stw r7,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r7.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addi r14,r10,20
	r14.s64 = ctx.r10.s64 + 20;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r25,r11,-3696
	r25.s64 = r11.s64 + -3696;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r23,r11,2936
	r23.s64 = r11.s64 + 2936;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,9820
	r22.s64 = r11.s64 + 9820;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r18,r11,9836
	r18.s64 = r11.s64 + 9836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,9844
	r21.s64 = r11.s64 + 9844;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r20,r11,14924
	r20.s64 = r11.s64 + 14924;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r17,r11,-24612
	r17.s64 = r11.s64 + -24612;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r16,r11,-24604
	r16.s64 = r11.s64 + -24604;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r27,r11,-24616
	r27.s64 = r11.s64 + -24616;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,11960
	r24.s64 = r11.s64 + 11960;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r19,r11,11772
	r19.s64 = r11.s64 + 11772;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r15,r11,19404
	r15.s64 = r11.s64 + 19404;
loc_82495B78:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82495b8c
	if (cr6.eq) goto loc_82495B8C;
	// lwz r11,-4(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82495de4
	if (cr6.eq) goto loc_82495DE4;
loc_82495B8C:
	// lbz r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U8(r14.u32 + 0);
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r9,17
	cr6.compare<uint32_t>(ctx.r9.u32, 17, xer);
	// bgt cr6,0x82495c58
	if (cr6.gt) goto loc_82495C58;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,9544
	r12.s64 = r12.s64 + 9544;
	// lbzx r0,r12,r9
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r9.u32);
	// lis r12,-32183
	r12.s64 = -2109145088;
	// addi r12,r12,23496
	r12.s64 = r12.s64 + 23496;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82495BC8;
	case 1:
		goto loc_82495BD0;
	case 2:
		goto loc_82495BD8;
	case 3:
		goto loc_82495BE0;
	case 4:
		goto loc_82495BE8;
	case 5:
		goto loc_82495BF0;
	case 6:
		goto loc_82495BFC;
	case 7:
		goto loc_82495C04;
	case 8:
		goto loc_82495C0C;
	case 9:
		goto loc_82495C14;
	case 10:
		goto loc_82495C1C;
	case 11:
		goto loc_82495C24;
	case 12:
		goto loc_82495C2C;
	case 13:
		goto loc_82495C34;
	case 14:
		goto loc_82495C3C;
	case 15:
		goto loc_82495C44;
	case 16:
		goto loc_82495C4C;
	case 17:
		goto loc_82495C54;
	default:
		__builtin_unreachable();
	}
loc_82495BC8:
	// clrlwi r31,r26,26
	r31.u64 = r26.u32 & 0x3F;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495BD0:
	// rlwinm r31,r26,24,26,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 24) & 0x3F;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495BD8:
	// rlwinm r31,r26,16,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0x1;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495BE0:
	// rlwinm r31,r26,15,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 15) & 0x1;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495BE8:
	// rlwinm r31,r26,14,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 14) & 0x1;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495BF0:
	// rlwinm r31,r26,13,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 13) & 0x1;
loc_82495BF4:
	// li r29,1
	r29.s64 = 1;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495BFC:
	// rlwinm r31,r26,12,28,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 12) & 0xF;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495C04:
	// rlwinm r31,r26,8,29,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 8) & 0x7;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495C0C:
	// rlwinm r31,r26,5,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 5) & 0x1;
	// b 0x82495bf4
	goto loc_82495BF4;
loc_82495C14:
	// rlwinm r31,r26,4,29,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 4) & 0x7;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495C1C:
	// rlwinm r31,r26,1,31,31
	r31.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0x1;
	// b 0x82495bf4
	goto loc_82495BF4;
loc_82495C24:
	// clrlwi r31,r8,31
	r31.u64 = ctx.r8.u32 & 0x1;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495C2C:
	// rlwinm r31,r8,31,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x1;
	// b 0x82495bf4
	goto loc_82495BF4;
loc_82495C34:
	// rlwinm r31,r8,30,30,31
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495C3C:
	// rlwinm r31,r8,24,24,31
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495C44:
	// rlwinm r31,r8,16,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x1;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495C4C:
	// rlwinm r31,r8,15,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x1;
	// b 0x82495c58
	goto loc_82495C58;
loc_82495C54:
	// rlwinm r31,r8,14,31,31
	r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 14) & 0x1;
loc_82495C58:
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82495c6c
	if (!cr6.eq) goto loc_82495C6C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82495c70
	if (cr6.eq) goto loc_82495C70;
loc_82495C6C:
	// li r11,1
	r11.s64 = 1;
loc_82495C70:
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82495cd8
	if (cr6.eq) goto loc_82495CD8;
	// lwz r11,-12(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -12);
loc_82495C80:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82495ce0
	if (!cr6.eq) goto loc_82495CE0;
loc_82495C88:
	// lwz r3,-8(r14)
	ctx.r3.u64 = PPC_LOAD_U32(r14.u32 + -8);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82495ca0
	if (cr6.eq) goto loc_82495CA0;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82495ca4
	if (!cr0.eq) goto loc_82495CA4;
loc_82495CA0:
	// li r11,0
	r11.s64 = 0;
loc_82495CA4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x82495cb4
	if (cr6.eq) goto loc_82495CB4;
	// li r11,1
	r11.s64 = 1;
loc_82495CB4:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x82495cec
	if (cr6.eq) goto loc_82495CEC;
	// cmplwi cr6,r9,14
	cr6.compare<uint32_t>(ctx.r9.u32, 14, xer);
	// bne cr6,0x82495cec
	if (!cr6.eq) goto loc_82495CEC;
	// rlwinm. r11,r26,0,13,13
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82495ce8
	if (cr0.eq) goto loc_82495CE8;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	r11.s64 = 1;
	// b 0x82495cec
	goto loc_82495CEC;
loc_82495CD8:
	// lwz r11,-16(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + -16);
	// b 0x82495c80
	goto loc_82495C80;
loc_82495CE0:
	// li r11,1
	r11.s64 = 1;
	// b 0x82495c88
	goto loc_82495C88;
loc_82495CE8:
	// li r11,0
	r11.s64 = 0;
loc_82495CEC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82495de4
	if (cr0.eq) goto loc_82495DE4;
	// clrlwi. r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// beq 0x82495d14
	if (cr0.eq) goto loc_82495D14;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// b 0x82495d28
	goto loc_82495D28;
loc_82495D14:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82495D28:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r6,-20(r14)
	ctx.r6.u64 = PPC_LOAD_U32(r14.u32 + -20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lbz r11,0(r14)
	r11.u64 = PPC_LOAD_U8(r14.u32 + 0);
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// bne cr6,0x82495d5c
	if (!cr6.eq) goto loc_82495D5C;
	// addi r11,r25,-32
	r11.s64 = r25.s64 + -32;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x82495d9c
	goto loc_82495D9C;
loc_82495D5C:
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bne cr6,0x82495d74
	if (!cr6.eq) goto loc_82495D74;
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// b 0x82495d9c
	goto loc_82495D9C;
loc_82495D74:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82495d94
	if (cr0.eq) goto loc_82495D94;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// bne cr6,0x82495d8c
	if (!cr6.eq) goto loc_82495D8C;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
loc_82495D8C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x82495d9c
	goto loc_82495D9C;
loc_82495D94:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
loc_82495D9C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82495db8
	if (!cr6.eq) goto loc_82495DB8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
loc_82495DB8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r7,324(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r6,300(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
loc_82495DE4:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r14,r14,24
	r14.s64 = r14.s64 + 24;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bne 0x82495b78
	if (!cr0.eq) goto loc_82495B78;
	// stb r5,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r5.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82495E04"))) PPC_WEAK_FUNC(sub_82495E04);
PPC_FUNC_IMPL(__imp__sub_82495E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82495E08"))) PPC_WEAK_FUNC(sub_82495E08);
PPC_FUNC_IMPL(__imp__sub_82495E08) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	cr6.compare<uint32_t>(ctx.r6.u32, 36, xer);
	// bge cr6,0x82495e34
	if (!cr6.lt) goto loc_82495E34;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82495ee4
	goto loc_82495EE4;
loc_82495E34:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3400
	r11.s64 = r11.s64 + -3400;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,9820
	r30.s64 = r11.s64 + 9820;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,2936
	r29.s64 = r11.s64 + 2936;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm. r10,r28,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// bne 0x82495e8c
	if (!cr0.eq) goto loc_82495E8C;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82495ee0
	if (cr0.eq) goto loc_82495EE0;
loc_82495E8C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,19404
	ctx.r4.s64 = r11.s64 + 19404;
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82495eb0
	if (cr0.eq) goto loc_82495EB0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-24604
	ctx.r5.s64 = r11.s64 + -24604;
	// b 0x82495eb8
	goto loc_82495EB8;
loc_82495EB0:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
loc_82495EB8:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,11968
	ctx.r4.s64 = r11.s64 + 11968;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82495EE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82495EE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82495EEC"))) PPC_WEAK_FUNC(sub_82495EEC);
PPC_FUNC_IMPL(__imp__sub_82495EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82495EF0"))) PPC_WEAK_FUNC(sub_82495EF0);
PPC_FUNC_IMPL(__imp__sub_82495EF0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	cr6.compare<uint32_t>(ctx.r6.u32, 36, xer);
	// bge cr6,0x82495f18
	if (!cr6.lt) goto loc_82495F18;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82496578
	goto loc_82496578;
loc_82495F18:
	// addi r11,r8,3
	r11.s64 = ctx.r8.s64 + 3;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwzx r11,r11,r5
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r5.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82496574
	if (cr0.eq) goto loc_82496574;
	// add r26,r11,r5
	r26.u64 = r11.u64 + ctx.r5.u64;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// clrlwi. r23,r10,24
	r23.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,12352
	r11.s64 = r11.s64 + 12352;
	// lwz r16,20(r26)
	r16.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// lwz r25,8(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r24,12(r26)
	r24.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r16,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 15) & 0x1;
	// add r15,r11,r26
	r15.u64 = r11.u64 + r26.u64;
	// bne 0x82495f6c
	if (!cr0.eq) goto loc_82495F6C;
	// rlwinm r10,r16,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 14) & 0x1;
loc_82495F6C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,19404
	r30.s64 = r11.s64 + 19404;
	// clrlwi r28,r10,24
	r28.u64 = ctx.r10.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12328
	ctx.r4.s64 = r11.s64 + 12328;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r21,r11,9820
	r21.s64 = r11.s64 + 9820;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// stw r21,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r21.u32);
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r20,r11,2936
	r20.s64 = r11.s64 + 2936;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r20.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12308
	ctx.r4.s64 = r11.s64 + 12308;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// li r17,1
	r17.s64 = 1;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r17.u8);
	// rlwinm. r29,r27,25,31,31
	r29.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82496010
	if (!cr0.eq) goto loc_82496010;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82496064
	if (cr0.eq) goto loc_82496064;
loc_82496010:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82496030
	if (cr0.eq) goto loc_82496030;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-24604
	ctx.r5.s64 = r11.s64 + -24604;
	// b 0x82496038
	goto loc_82496038;
loc_82496030:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
loc_82496038:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12280
	ctx.r4.s64 = r11.s64 + 12280;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r17.u8);
loc_82496064:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82495ac0
	sub_82495AC0(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824960a8
	if (cr0.eq) goto loc_824960A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824960A8:
	// rlwinm. r11,r27,0,23,23
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,9836
	r24.s64 = r11.s64 + 9836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,9844
	r27.s64 = r11.s64 + 9844;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r24.u32);
	// beq 0x82496204
	if (cr0.eq) goto loc_82496204;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x824960e4
	if (!cr6.eq) goto loc_824960E4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82496114
	if (cr6.eq) goto loc_82496114;
loc_824960E4:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// rlwinm r6,r11,16,28,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// addi r4,r10,12220
	ctx.r4.s64 = ctx.r10.s64 + 12220;
	// clrlwi r5,r11,16
	ctx.r5.u64 = r11.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82496114:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82496124
	if (!cr6.eq) goto loc_82496124;
	// clrlwi. r30,r16,27
	r30.u64 = r16.u32 & 0x1F;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8249615c
	if (cr0.eq) goto loc_8249615C;
loc_82496124:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// clrlwi r30,r16,27
	r30.u64 = r16.u32 & 0x1F;
	// addi r4,r11,12164
	ctx.r4.s64 = r11.s64 + 12164;
	// rlwinm r7,r16,22,25,31
	ctx.r7.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 22) & 0x7F;
	// rlwinm r6,r16,27,27,31
	ctx.r6.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 27) & 0x1F;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_8249615C:
	// rlwinm r29,r16,27,27,31
	r29.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 27) & 0x1F;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// ble cr6,0x82496190
	if (!cr6.gt) goto loc_82496190;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12124
	ctx.r4.s64 = r11.s64 + 12124;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82496190:
	// rlwinm r28,r16,22,25,31
	r28.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 22) & 0x7F;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// bge cr6,0x824961c4
	if (!cr6.lt) goto loc_824961C4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12084
	ctx.r4.s64 = r11.s64 + 12084;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824961C4:
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// ble cr6,0x824961f8
	if (!cr6.gt) goto loc_824961F8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12040
	ctx.r4.s64 = r11.s64 + 12040;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824961F8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
loc_82496204:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// li r22,0
	r22.s64 = 0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// stb r22,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r22.u8);
	// beq cr6,0x82496374
	if (cr6.eq) goto loc_82496374;
	// lhz r11,24(r26)
	r11.u64 = PPC_LOAD_U16(r26.u32 + 24);
	// rlwinm. r14,r16,27,27,31
	r14.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 27) & 0x1F;
	cr0.compare<int32_t>(r14.s32, 0, xer);
	// lhz r10,26(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 26);
	// mr r28,r15
	r28.u64 = r15.u64;
	// not r16,r11
	r16.u64 = ~r11.u64;
	// not r15,r10
	r15.u64 = ~ctx.r10.u64;
	// beq 0x82496544
	if (cr0.eq) goto loc_82496544;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r17.u8);
	// addi r24,r11,9828
	r24.s64 = r11.s64 + 9828;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r20,r11,12036
	r20.s64 = r11.s64 + 12036;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,12028
	r21.s64 = r11.s64 + 12028;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r18,r11,12008
	r18.s64 = r11.s64 + 12008;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r17,r11,11996
	r17.s64 = r11.s64 + 11996;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r19,r11,14924
	r19.s64 = r11.s64 + 14924;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,11988
	r23.s64 = r11.s64 + 11988;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r27,r11,-4288
	r27.s64 = r11.s64 + -4288;
loc_82496280:
	// li r11,1
	r11.s64 = 1;
	// lbz r30,3(r28)
	r30.u64 = PPC_LOAD_U8(r28.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// clrlwi r29,r30,28
	r29.u64 = r30.u32 & 0xF;
	// slw r11,r11,r22
	r11.u64 = r22.u8 & 0x20 ? 0 : (r11.u32 << (r22.u8 & 0x3F));
	// and r26,r11,r16
	r26.u64 = r11.u64 & r16.u64;
	// and r25,r11,r15
	r25.u64 = r11.u64 & r15.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// rlwinm r11,r30,30,2,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwzx r5,r11,r27
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x824962d0
	if (cr6.eq) goto loc_824962D0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824962D0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x824962e0
	if (cr6.eq) goto loc_824962E0;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// b 0x824962ec
	goto loc_824962EC;
loc_824962E0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x824962f4
	if (cr6.eq) goto loc_824962F4;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
loc_824962EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824962F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// beq cr6,0x8249633c
	if (cr6.eq) goto loc_8249633C;
	// addi r10,r27,64
	ctx.r10.s64 = r27.s64 + 64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_8249633C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r22,r14
	cr6.compare<uint32_t>(r22.u32, r14.u32, xer);
	// blt cr6,0x82496280
	if (cr6.lt) goto loc_82496280;
	// lwz r21,88(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r20,92(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r24,84(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82496544
	goto loc_82496544;
loc_82496374:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r30,r15
	r30.u64 = r15.u64;
	// addi r23,r10,9828
	r23.s64 = ctx.r10.s64 + 9828;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r19,r10,12036
	r19.s64 = ctx.r10.s64 + 12036;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r18,r10,14924
	r18.s64 = ctx.r10.s64 + 14924;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r22,r10,11988
	r22.s64 = ctx.r10.s64 + 11988;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r25,r10,-4288
	r25.s64 = ctx.r10.s64 + -4288;
	// beq 0x8249646c
	if (cr0.eq) goto loc_8249646C;
	// mr r27,r11
	r27.u64 = r11.u64;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r17.u8);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,12028
	r24.s64 = r11.s64 + 12028;
loc_824963BC:
	// lbz r29,3(r30)
	r29.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi r28,r29,28
	r28.u64 = r29.u32 & 0xF;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// rlwinm r11,r29,30,2,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824963fc
	if (cr6.eq) goto loc_824963FC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824963FC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// rlwinm r5,r11,24,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,23,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0xF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// beq cr6,0x82496444
	if (cr6.eq) goto loc_82496444;
	// addi r10,r25,64
	ctx.r10.s64 = r25.s64 + 64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82496444:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x824963bc
	if (!cr0.eq) goto loc_824963BC;
	// lwz r24,84(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8249646C:
	// lwz r10,28(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// rlwinm. r11,r16,27,27,31
	r11.u64 = __builtin_rotateleft64(r16.u32 | (r16.u64 << 32), 27) & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r15
	r30.u64 = ctx.r10.u64 + r15.u64;
	// beq 0x82496544
	if (cr0.eq) goto loc_82496544;
	// mr r27,r11
	r27.u64 = r11.u64;
	// stb r17,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r17.u8);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,11980
	r26.s64 = r11.s64 + 11980;
loc_82496498:
	// lbz r29,3(r30)
	r29.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// clrlwi r28,r29,28
	r28.u64 = r29.u32 & 0xF;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// rlwinm r11,r29,30,2,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x824964d8
	if (cr6.eq) goto loc_824964D8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824964D8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// beq cr6,0x82496520
	if (cr6.eq) goto loc_82496520;
	// addi r10,r25,64
	ctx.r10.s64 = r25.s64 + 64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82496520:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// addic. r27,r27,-1
	xer.ca = r27.u32 > 0;
	r27.s64 = r27.s64 + -1;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82496498
	if (!cr0.eq) goto loc_82496498;
loc_82496544:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82496574
	if (cr0.eq) goto loc_82496574;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_82496574:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82496578:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82496580"))) PPC_WEAK_FUNC(sub_82496580);
PPC_FUNC_IMPL(__imp__sub_82496580) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x824966ac
	if (!cr6.eq) goto loc_824966AC;
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82496658
	if (cr6.lt) goto loc_82496658;
	// beq cr6,0x82496600
	if (cr6.eq) goto loc_82496600;
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// blt cr6,0x824965c8
	if (cr6.lt) goto loc_824965C8;
	// lis r27,-32768
	r27.s64 = -2147483648;
	// ori r27,r27,16389
	r27.u64 = r27.u64 | 16389;
	// b 0x8249669c
	goto loc_8249669C;
loc_824965C8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14648
	ctx.r4.s64 = r11.s64 + 14648;
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r4,r11,12380
	ctx.r4.s64 = r11.s64 + 12380;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// b 0x8249669c
	goto loc_8249669C;
loc_82496600:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12704
	ctx.r4.s64 = r11.s64 + 12704;
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,12372
	ctx.r4.s64 = r11.s64 + 12372;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r29,4
	r29.s64 = 4;
	// addi r28,r11,-17980
	r28.s64 = r11.s64 + -17980;
loc_82496630:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82493460
	sub_82493460(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82496630
	if (!cr0.eq) goto loc_82496630;
	// b 0x8249669c
	goto loc_8249669C;
loc_82496658:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14640
	ctx.r4.s64 = r11.s64 + 14640;
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82496680
	if (cr6.eq) goto loc_82496680;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r6,r11,-24604
	ctx.r6.s64 = r11.s64 + -24604;
	// b 0x82496688
	goto loc_82496688;
loc_82496680:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r6,r11,-24612
	ctx.r6.s64 = r11.s64 + -24612;
loc_82496688:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,12360
	ctx.r4.s64 = r11.s64 + 12360;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_8249669C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2936
	ctx.r4.s64 = r11.s64 + 2936;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
loc_824966AC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824966B8"))) PPC_WEAK_FUNC(sub_824966B8);
PPC_FUNC_IMPL(__imp__sub_824966B8) {
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
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824966f0
	if (!cr6.eq) goto loc_824966F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249674c
	goto loc_8249674C;
loc_824966F0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r30,0
	r30.s64 = 0;
	// lis r10,-32183
	ctx.r10.s64 = -2109145088;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r10,25984
	ctx.r5.s64 = ctx.r10.s64 + 25984;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// std r30,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r30.u64);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x823cb978
	sub_823CB978(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8249674c
	if (cr0.lt) goto loc_8249674C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,9820
	ctx.r4.s64 = r11.s64 + 9820;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2936
	ctx.r4.s64 = r11.s64 + 2936;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_8249674C:
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

__attribute__((alias("__imp__sub_82496764"))) PPC_WEAK_FUNC(sub_82496764);
PPC_FUNC_IMPL(__imp__sub_82496764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496768"))) PPC_WEAK_FUNC(sub_82496768);
PPC_FUNC_IMPL(__imp__sub_82496768) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82496a90
	if (cr6.eq) goto loc_82496A90;
	// cmplwi cr6,r4,4
	cr6.compare<uint32_t>(ctx.r4.u32, 4, xer);
	// blt cr6,0x82496a90
	if (cr6.lt) goto loc_82496A90;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82496a90
	if (cr6.eq) goto loc_82496A90;
	// li r11,0
	r11.s64 = 0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// clrlwi. r10,r28,30
	ctx.r10.u64 = r28.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bne 0x82496a90
	if (!cr0.eq) goto loc_82496A90;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12624
	ctx.r4.s64 = r11.s64 + 12624;
	// rlwinm r11,r28,28,31,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0x1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12496
	ctx.r4.s64 = r11.s64 + 12496;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12440
	ctx.r4.s64 = r11.s64 + 12440;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r10,31
	r30.u64 = ctx.r10.u32 & 0x1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r4,-3376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -3376);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,12420
	ctx.r4.s64 = r11.s64 + 12420;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x8249684c
	if (cr6.gt) goto loc_8249684C;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-3384
	r11.s64 = r11.s64 + -3384;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r4,r10,-24540
	ctx.r4.s64 = ctx.r10.s64 + -24540;
	// lwzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// b 0x82496858
	goto loc_82496858;
loc_8249684C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,12404
	ctx.r4.s64 = r11.s64 + 12404;
loc_82496858:
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-18000
	ctx.r4.s64 = r11.s64 + -18000;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-3388(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -3388);
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-3392(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -3392);
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495e08
	sub_82495E08(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82493bf8
	sub_82493BF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82496a98
	if (cr0.lt) goto loc_82496A98;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495ef0
	sub_82495EF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82496930
	if (cr0.lt) goto loc_82496930;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824966b8
	sub_824966B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82496930
	if (cr0.lt) goto loc_82496930;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = r11.u64 + r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495048
	sub_82495048(ctx, base);
loc_82496930:
	// rlwinm. r27,r28,0,20,20
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// beq 0x82496958
	if (cr0.eq) goto loc_82496958;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824953c0
	sub_824953C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82496960
	if (!cr0.lt) goto loc_82496960;
	// b 0x82496a98
	goto loc_82496A98;
loc_82496958:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82496a98
	if (cr6.lt) goto loc_82496A98;
loc_82496960:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82496a38
	if (cr0.eq) goto loc_82496A38;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-17984
	ctx.r4.s64 = r11.s64 + -17984;
	// bl 0x82495a58
	sub_82495A58(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9820
	ctx.r4.s64 = r11.s64 + 9820;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2936
	ctx.r4.s64 = r11.s64 + 2936;
	// bl 0x824931e8
	sub_824931E8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495ef0
	sub_82495EF0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82496a98
	if (cr0.lt) goto loc_82496A98;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824966b8
	sub_824966B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82496a98
	if (cr0.lt) goto loc_82496A98;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = r11.u64 + r31.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82495048
	sub_82495048(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82496a98
	if (cr0.lt) goto loc_82496A98;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82496a38
	if (cr6.eq) goto loc_82496A38;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x824953c0
	sub_824953C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82496a98
	if (cr0.lt) goto loc_82496A98;
loc_82496A38:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82496a78
	if (cr0.eq) goto loc_82496A78;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9844
	ctx.r4.s64 = r11.s64 + 9844;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r31
	ctx.r3.u64 = r30.u64 + r31.u64;
	// bl 0x824948a0
	sub_824948A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82496a98
	if (cr0.lt) goto loc_82496A98;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9836
	ctx.r4.s64 = r11.s64 + 9836;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
loc_82496A78:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,6624
	ctx.r4.s64 = r11.s64 + 6624;
	// bl 0x82493cb0
	sub_82493CB0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82496a98
	goto loc_82496A98;
loc_82496A90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82496A98:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82496AA0"))) PPC_WEAK_FUNC(sub_82496AA0);
PPC_FUNC_IMPL(__imp__sub_82496AA0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82496768
	sub_82496768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82496AA8"))) PPC_WEAK_FUNC(sub_82496AA8);
PPC_FUNC_IMPL(__imp__sub_82496AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82496AC4"))) PPC_WEAK_FUNC(sub_82496AC4);
PPC_FUNC_IMPL(__imp__sub_82496AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496AC8"))) PPC_WEAK_FUNC(sub_82496AC8);
PPC_FUNC_IMPL(__imp__sub_82496AC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r9,r11,-3368
	ctx.r9.s64 = r11.s64 + -3368;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82496AD8:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r3
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, xer);
	// beq cr6,0x82496afc
	if (cr6.eq) goto loc_82496AFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpwi cr6,r11,147
	cr6.compare<int32_t>(r11.s32, 147, xer);
	// blt cr6,0x82496ad8
	if (cr6.lt) goto loc_82496AD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82496AFC:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496B0C"))) PPC_WEAK_FUNC(sub_82496B0C);
PPC_FUNC_IMPL(__imp__sub_82496B0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496B10"))) PPC_WEAK_FUNC(sub_82496B10);
PPC_FUNC_IMPL(__imp__sub_82496B10) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82496ac8
	sub_82496AC8(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82496b48
	if (cr0.eq) goto loc_82496B48;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x8239f070
	sub_8239F070(ctx, base);
	// b 0x82496b58
	goto loc_82496B58;
loc_82496B48:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,12836
	ctx.r4.s64 = r11.s64 + 12836;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82496B58:
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

__attribute__((alias("__imp__sub_82496B6C"))) PPC_WEAK_FUNC(sub_82496B6C);
PPC_FUNC_IMPL(__imp__sub_82496B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496B70"))) PPC_WEAK_FUNC(sub_82496B70);
PPC_FUNC_IMPL(__imp__sub_82496B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,1088
	ctx.r3.s64 = r11.s64 + 1088;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// b 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
	return;
}

__attribute__((alias("__imp__sub_82496B8C"))) PPC_WEAK_FUNC(sub_82496B8C);
PPC_FUNC_IMPL(__imp__sub_82496B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496B90"))) PPC_WEAK_FUNC(sub_82496B90);
PPC_FUNC_IMPL(__imp__sub_82496B90) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r27,0,26,26
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82496cd0
	if (cr0.eq) goto loc_82496CD0;
	// rlwinm. r11,r26,0,13,13
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82496cd0
	if (!cr0.eq) goto loc_82496CD0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82496c18
	if (cr6.eq) goto loc_82496C18;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-2184(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -2184);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82496BF0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82496bf0
	if (!cr6.eq) goto loc_82496BF0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82496C18:
	// li r11,0
	r11.s64 = 0;
	// rlwinm r10,r27,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82496cd8
	if (cr6.eq) goto loc_82496CD8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x82496c94
	if (cr6.lt) goto loc_82496C94;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-2188(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -2188);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82496C80:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82496c80
	if (!cr6.eq) goto loc_82496C80;
	// b 0x82496cb4
	goto loc_82496CB4;
loc_82496C94:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-2192(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -2192);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82496CA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82496ca4
	if (!cr6.eq) goto loc_82496CA4;
loc_82496CB4:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82496cd8
	goto loc_82496CD8;
loc_82496CD0:
	// lis r31,-32768
	r31.s64 = -2147483648;
	// ori r31,r31,16389
	r31.u64 = r31.u64 | 16389;
loc_82496CD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82496CE4"))) PPC_WEAK_FUNC(sub_82496CE4);
PPC_FUNC_IMPL(__imp__sub_82496CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496CE8"))) PPC_WEAK_FUNC(sub_82496CE8);
PPC_FUNC_IMPL(__imp__sub_82496CE8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82496b10
	sub_82496B10(ctx, base);
	// lwz r11,1420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1420);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82496d48
	if (cr0.eq) goto loc_82496D48;
	// cmpwi cr6,r30,3537
	cr6.compare<int32_t>(r30.s32, 3537, xer);
	// beq cr6,0x82496d48
	if (cr6.eq) goto loc_82496D48;
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1416);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r30,-1100
	ctx.r6.s64 = r30.s64 + -1100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82496D48:
	// cmpwi cr6,r30,3517
	cr6.compare<int32_t>(r30.s32, 3517, xer);
	// beq cr6,0x82496d84
	if (cr6.eq) goto loc_82496D84;
	// cmpwi cr6,r30,3525
	cr6.compare<int32_t>(r30.s32, 3525, xer);
	// beq cr6,0x82496d90
	if (cr6.eq) goto loc_82496D90;
	// cmpwi cr6,r30,3527
	cr6.compare<int32_t>(r30.s32, 3527, xer);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// beq cr6,0x82496d7c
	if (cr6.eq) goto loc_82496D7C;
	// cmpwi cr6,r30,3537
	cr6.compare<int32_t>(r30.s32, 3537, xer);
	// beq cr6,0x82496d74
	if (cr6.eq) goto loc_82496D74;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// b 0x82496d8c
	goto loc_82496D8C;
loc_82496D74:
	// ori r11,r11,16385
	r11.u64 = r11.u64 | 16385;
	// b 0x82496d8c
	goto loc_82496D8C;
loc_82496D7C:
	// ori r11,r11,16388
	r11.u64 = r11.u64 | 16388;
	// b 0x82496d8c
	goto loc_82496D8C;
loc_82496D84:
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
loc_82496D8C:
	// stw r11,1408(r31)
	PPC_STORE_U32(r31.u32 + 1408, r11.u32);
loc_82496D90:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,1088
	ctx.r3.s64 = r31.s64 + 1088;
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
}

__attribute__((alias("__imp__sub_82496D9C"))) PPC_WEAK_FUNC(sub_82496D9C);
PPC_FUNC_IMPL(__imp__sub_82496D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496DA0"))) PPC_WEAK_FUNC(sub_82496DA0);
PPC_FUNC_IMPL(__imp__sub_82496DA0) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82496b10
	sub_82496B10(ctx, base);
	// lwz r11,1420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1420);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82496e1c
	if (cr0.eq) goto loc_82496E1C;
	// lwz r3,1416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1416);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r30,-1100
	ctx.r6.s64 = r30.s64 + -1100;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82496E1C:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
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

__attribute__((alias("__imp__sub_82496E34"))) PPC_WEAK_FUNC(sub_82496E34);
PPC_FUNC_IMPL(__imp__sub_82496E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496E38"))) PPC_WEAK_FUNC(sub_82496E38);
PPC_FUNC_IMPL(__imp__sub_82496E38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r3,0,0,19
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r5,132
	cr6.compare<uint32_t>(ctx.r5.u32, 132, xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// ble cr6,0x82496e78
	if (!cr6.gt) goto loc_82496E78;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x82120e68
	sub_82120E68(ctx, base);
	return;
loc_82496E78:
	// rlwinm r11,r5,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82496E94"))) PPC_WEAK_FUNC(sub_82496E94);
PPC_FUNC_IMPL(__imp__sub_82496E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496E98"))) PPC_WEAK_FUNC(sub_82496E98);
PPC_FUNC_IMPL(__imp__sub_82496E98) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82496ce8
	sub_82496CE8(ctx, base);
}

__attribute__((alias("__imp__sub_82496ED0"))) PPC_WEAK_FUNC(sub_82496ED0);
PPC_FUNC_IMPL(__imp__sub_82496ED0) {
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
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x8239f070
	sub_8239F070(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,3542
	ctx.r4.s64 = 3542;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
}

__attribute__((alias("__imp__sub_82496F2C"))) PPC_WEAK_FUNC(sub_82496F2C);
PPC_FUNC_IMPL(__imp__sub_82496F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496F30"))) PPC_WEAK_FUNC(sub_82496F30);
PPC_FUNC_IMPL(__imp__sub_82496F30) {
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
	// bl 0x8240e2e8
	sub_8240E2E8(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82496f6c
	if (cr0.eq) goto loc_82496F6C;
	// rlwinm r11,r31,0,0,19
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
loc_82496F6C:
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

__attribute__((alias("__imp__sub_82496F88"))) PPC_WEAK_FUNC(sub_82496F88);
PPC_FUNC_IMPL(__imp__sub_82496F88) {
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
	// addi r31,r3,152
	r31.s64 = ctx.r3.s64 + 152;
loc_82496F9C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82496fe0
	if (!cr0.eq) goto loc_82496FE0;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82496fe0
	if (cr0.eq) goto loc_82496FE0;
	// rlwinm r11,r3,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// b 0x82496f9c
	goto loc_82496F9C;
loc_82496FE0:
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

__attribute__((alias("__imp__sub_82496FF4"))) PPC_WEAK_FUNC(sub_82496FF4);
PPC_FUNC_IMPL(__imp__sub_82496FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82496FF8"))) PPC_WEAK_FUNC(sub_82496FF8);
PPC_FUNC_IMPL(__imp__sub_82496FF8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82497034
	if (cr0.eq) goto loc_82497034;
loc_8249701C:
	// lis r4,-24435
	ctx.r4.s64 = -1601372160;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8249701c
	if (!cr6.eq) goto loc_8249701C;
loc_82497034:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82496f88
	sub_82496F88(ctx, base);
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

__attribute__((alias("__imp__sub_82497054"))) PPC_WEAK_FUNC(sub_82497054);
PPC_FUNC_IMPL(__imp__sub_82497054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82497058"))) PPC_WEAK_FUNC(sub_82497058);
PPC_FUNC_IMPL(__imp__sub_82497058) {
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
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// b 0x82497088
	goto loc_82497088;
loc_82497078:
	// li r5,4088
	ctx.r5.s64 = 4088;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_82497088:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne 0x82497078
	if (!cr0.eq) goto loc_82497078;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// stw r10,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r10.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496f88
	sub_82496F88(ctx, base);
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

__attribute__((alias("__imp__sub_824970D0"))) PPC_WEAK_FUNC(sub_824970D0);
PPC_FUNC_IMPL(__imp__sub_824970D0) {
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
	// lis r4,-8051
	ctx.r4.s64 = -527630336;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82497104
	if (!cr0.eq) goto loc_82497104;
	// li r4,3517
	ctx.r4.s64 = 3517;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82497104:
	// li r11,0
	r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_82497124"))) PPC_WEAK_FUNC(sub_82497124);
PPC_FUNC_IMPL(__imp__sub_82497124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82497128"))) PPC_WEAK_FUNC(sub_82497128);
PPC_FUNC_IMPL(__imp__sub_82497128) {
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
	// beq cr6,0x824972c0
	if (cr6.eq) goto loc_824972C0;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,25,25,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7F;
	// addi r9,r10,-114
	ctx.r9.s64 = ctx.r10.s64 + -114;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x824972c0
	if (!cr0.eq) goto loc_824972C0;
	// cmplwi cr6,r10,124
	cr6.compare<uint32_t>(ctx.r10.u32, 124, xer);
	// beq cr6,0x82497184
	if (cr6.eq) goto loc_82497184;
	// rlwinm r11,r11,13,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x7;
	// addi r11,r11,10
	r11.s64 = r11.s64 + 10;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824972c4
	if (!cr0.eq) goto loc_824972C4;
loc_82497184:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_82497188:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x824971f4
	if (!cr0.eq) goto loc_824971F4;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addic. r11,r11,-36
	xer.ca = r11.u32 > 35;
	r11.s64 = r11.s64 + -36;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824971f4
	if (cr0.eq) goto loc_824971F4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,15872
	cr6.compare<uint32_t>(ctx.r9.u32, 15872, xer);
	// beq cr6,0x82497188
	if (cr6.eq) goto loc_82497188;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82497188
	if (cr0.eq) goto loc_82497188;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,15872
	cr6.compare<uint32_t>(ctx.r9.u32, 15872, xer);
	// beq cr6,0x824971f4
	if (cr6.eq) goto loc_824971F4;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824972c4
	if (!cr0.eq) goto loc_824972C4;
loc_824971F4:
	// mr r11,r31
	r11.u64 = r31.u64;
loc_824971F8:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82497260
	if (!cr0.eq) goto loc_82497260;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82497260
	if (cr6.eq) goto loc_82497260;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,15872
	cr6.compare<uint32_t>(ctx.r9.u32, 15872, xer);
	// beq cr6,0x824971f8
	if (cr6.eq) goto loc_824971F8;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x824971f8
	if (cr0.eq) goto loc_824971F8;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r9,r10,0,18,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3F80;
	// cmplwi cr6,r9,15872
	cr6.compare<uint32_t>(ctx.r9.u32, 15872, xer);
	// beq cr6,0x82497260
	if (cr6.eq) goto loc_82497260;
	// rlwinm r10,r10,13,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x7;
	// addi r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 + 10;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824972c4
	if (!cr0.eq) goto loc_824972C4;
loc_82497260:
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824972c0
	if (cr0.eq) goto loc_824972C0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249727c
	if (cr0.eq) goto loc_8249727C;
	// li r11,0
	r11.s64 = 0;
loc_8249727C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497128
	sub_82497128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824972c4
	if (!cr0.eq) goto loc_824972C4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824972a8
	if (cr0.eq) goto loc_824972A8;
	// li r11,0
	r11.s64 = 0;
loc_824972A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497128
	sub_82497128(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x824972c4
	if (!cr0.eq) goto loc_824972C4;
loc_824972C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824972C4:
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

__attribute__((alias("__imp__sub_824972DC"))) PPC_WEAK_FUNC(sub_824972DC);
PPC_FUNC_IMPL(__imp__sub_824972DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824972E0"))) PPC_WEAK_FUNC(sub_824972E0);
PPC_FUNC_IMPL(__imp__sub_824972E0) {
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
	// lwz r16,-13984(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -13984);
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
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 736);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8249732c
	if (cr0.eq) goto loc_8249732C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82496f30
	sub_82496F30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,736(r30)
	PPC_STORE_U32(r30.u32 + 736, r11.u32);
loc_8249732C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497340
	// ERROR 82497340
	return;
}

__attribute__((alias("__imp__sub_824972E8"))) PPC_WEAK_FUNC(sub_824972E8);
PPC_FUNC_IMPL(__imp__sub_824972E8) {
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
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,736(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 736);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8249732c
	if (cr0.eq) goto loc_8249732C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82496f30
	sub_82496F30(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,736(r30)
	PPC_STORE_U32(r30.u32 + 736, r11.u32);
loc_8249732C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497340
	goto loc_82497340;
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
loc_82497340:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 732);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82497364
	if (cr0.eq) goto loc_82497364;
	// bl 0x823ceee0
	sub_823CEEE0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,732(r30)
	PPC_STORE_U32(r30.u32 + 732, r11.u32);
loc_82497364:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497378
	goto loc_82497378;
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
loc_82497378:
	// addi r3,r30,764
	ctx.r3.s64 = r30.s64 + 764;
	// bl 0x82496ff8
	sub_82496FF8(ctx, base);
	// addi r3,r30,924
	ctx.r3.s64 = r30.s64 + 924;
	// bl 0x82496ff8
	sub_82496FF8(ctx, base);
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

__attribute__((alias("__imp__sub_8249733C"))) PPC_WEAK_FUNC(sub_8249733C);
PPC_FUNC_IMPL(__imp__sub_8249733C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,732(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 732);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82497364
	if (cr0.eq) goto loc_82497364;
	// bl 0x823ceee0
	sub_823CEEE0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,732(r30)
	PPC_STORE_U32(r30.u32 + 732, r11.u32);
loc_82497364:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497378
	// ERROR 82497378
	return;
}

__attribute__((alias("__imp__sub_82497374"))) PPC_WEAK_FUNC(sub_82497374);
PPC_FUNC_IMPL(__imp__sub_82497374) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lwz r30,132(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r3,r30,764
	ctx.r3.s64 = r30.s64 + 764;
	// bl 0x82496ff8
	sub_82496FF8(ctx, base);
	// addi r3,r30,924
	ctx.r3.s64 = r30.s64 + 924;
	// bl 0x82496ff8
	sub_82496FF8(ctx, base);
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

__attribute__((alias("__imp__sub_824973A0"))) PPC_WEAK_FUNC(sub_824973A0);
PPC_FUNC_IMPL(__imp__sub_824973A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824973AC"))) PPC_WEAK_FUNC(sub_824973AC);
PPC_FUNC_IMPL(__imp__sub_824973AC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824973B8"))) PPC_WEAK_FUNC(sub_824973B8);
PPC_FUNC_IMPL(__imp__sub_824973B8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// andis. r11,r11,5
	r11.u64 = r11.u64 & 327680;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824973ec
	if (cr0.eq) goto loc_824973EC;
	// bl 0x824fbe18
	sub_824FBE18(ctx, base);
loc_824973EC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82519b40
	sub_82519B40(ctx, base);
	// addi r30,r31,924
	r30.s64 = r31.s64 + 924;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497058
	sub_82497058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824f5920
	sub_824F5920(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497058
	sub_82497058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824edfd0
	sub_824EDFD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497058
	sub_82497058(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82497448
	if (cr6.eq) goto loc_82497448;
	// stw r27,644(r31)
	PPC_STORE_U32(r31.u32 + 644, r27.u32);
	// stw r27,648(r31)
	PPC_STORE_U32(r31.u32 + 648, r27.u32);
	// stw r27,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r27.u32);
	// stw r27,664(r31)
	PPC_STORE_U32(r31.u32 + 664, r27.u32);
	// stw r27,668(r31)
	PPC_STORE_U32(r31.u32 + 668, r27.u32);
	// stw r27,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r27.u32);
loc_82497448:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d8ac0
	sub_824D8AC0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497058
	sub_82497058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824d6e08
	sub_824D6E08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497058
	sub_82497058(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824cfdd0
	sub_824CFDD0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497058
	sub_82497058(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249748c
	if (cr6.eq) goto loc_8249748C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824cca58
	sub_824CCA58(ctx, base);
loc_8249748C:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824974a0
	if (cr0.eq) goto loc_824974A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824be6f0
	sub_824BE6F0(ctx, base);
loc_824974A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b9a48
	sub_824B9A48(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824974b8
	if (cr0.eq) goto loc_824974B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b91f0
	sub_824B91F0(ctx, base);
loc_824974B8:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824974ec
	if (cr0.eq) goto loc_824974EC;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824974e4
	if (cr6.eq) goto loc_824974E4;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_824974E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824aa090
	sub_824AA090(ctx, base);
loc_824974EC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82497504
	if (cr0.eq) goto loc_82497504;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x82497508
	if (cr0.eq) goto loc_82497508;
loc_82497504:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82497508:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497518
	if (cr0.eq) goto loc_82497518;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b34d0
	sub_824B34D0(ctx, base);
loc_82497518:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b25b8
	sub_824B25B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824b0ce0
	sub_824B0CE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497058
	sub_82497058(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82497554
	if (cr6.eq) goto loc_82497554;
	// stw r27,644(r31)
	PPC_STORE_U32(r31.u32 + 644, r27.u32);
	// stw r27,648(r31)
	PPC_STORE_U32(r31.u32 + 648, r27.u32);
	// stw r27,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r27.u32);
	// stw r27,664(r31)
	PPC_STORE_U32(r31.u32 + 664, r27.u32);
	// stw r27,668(r31)
	PPC_STORE_U32(r31.u32 + 668, r27.u32);
	// stw r27,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r27.u32);
loc_82497554:
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824aca70
	sub_824ACA70(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824976c4
	if (!cr0.eq) goto loc_824976C4;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,18,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824975d4
	if (cr0.eq) goto loc_824975D4;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x824975c4
	if (cr0.eq) goto loc_824975C4;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x824b0560
	sub_824B0560(ctx, base);
	// b 0x824975cc
	goto loc_824975CC;
loc_824975C4:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x824b0568
	sub_824B0568(ctx, base);
loc_824975CC:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x824976c4
	if (!cr6.eq) goto loc_824976C4;
loc_824975D4:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 744);
	// rlwinm r29,r10,10,15,21
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
	// rlwinm. r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824975ec
	if (cr0.eq) goto loc_824975EC;
	// oris r29,r29,4
	r29.u64 = r29.u64 | 262144;
loc_824975EC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// lis r11,-32181
	r11.s64 = -2109014016;
	// addi r26,r11,-27712
	r26.s64 = r11.s64 + -27712;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824976c4
	if (!cr0.lt) goto loc_824976C4;
	// lis r11,-32181
	r11.s64 = -2109014016;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,-27712
	ctx.r5.s64 = r11.s64 + -27712;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82496b90
	sub_82496B90(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x824976c4
	if (!cr0.lt) goto loc_824976C4;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// beq cr6,0x824976ac
	if (cr6.eq) goto loc_824976AC;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824976ac
	if (cr0.eq) goto loc_824976AC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r27,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r27.u32);
loc_824976AC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824976cc
	if (cr0.eq) goto loc_824976CC;
	// bl 0x82496da0
	sub_82496DA0(ctx, base);
loc_824976C4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd38
	return;
loc_824976CC:
	// bl 0x82496e98
	sub_82496E98(ctx, base);
}

__attribute__((alias("__imp__sub_824976D0"))) PPC_WEAK_FUNC(sub_824976D0);
PPC_FUNC_IMPL(__imp__sub_824976D0) {
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
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824970d0
	sub_824970D0(ctx, base);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// addi r11,r31,152
	r11.s64 = r31.s64 + 152;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// ori r8,r11,1
	ctx.r8.u64 = r11.u64 | 1;
	// stw r3,140(r31)
	PPC_STORE_U32(r31.u32 + 140, ctx.r3.u32);
	// stw r9,144(r31)
	PPC_STORE_U32(r31.u32 + 144, ctx.r9.u32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82497748"))) PPC_WEAK_FUNC(sub_82497748);
PPC_FUNC_IMPL(__imp__sub_82497748) {
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
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// ori r10,r31,1
	ctx.r10.u64 = r31.u64 | 1;
	// ori r9,r11,1
	ctx.r9.u64 = r11.u64 | 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,764
	ctx.r3.s64 = r31.s64 + 764;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x824976d0
	sub_824976D0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r31,924
	ctx.r3.s64 = r31.s64 + 924;
	// bl 0x824976d0
	sub_824976D0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r10,740(r31)
	PPC_STORE_U32(r31.u32 + 740, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_824977AC"))) PPC_WEAK_FUNC(sub_824977AC);
PPC_FUNC_IMPL(__imp__sub_824977AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824977B0"))) PPC_WEAK_FUNC(sub_824977B0);
PPC_FUNC_IMPL(__imp__sub_824977B0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x824977ec
	if (cr6.eq) goto loc_824977EC;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
loc_824977EC:
	// lwz r30,356(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lis r29,-1
	r29.s64 = -65536;
	// stw r23,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r23.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r28.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// beq cr6,0x824978b4
	if (cr6.eq) goto loc_824978B4;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi cr6,r6,64
	cr6.compare<uint32_t>(ctx.r6.u32, 64, xer);
	// stw r6,744(r31)
	PPC_STORE_U32(r31.u32 + 744, ctx.r6.u32);
	// ble cr6,0x82497828
	if (!cr6.gt) goto loc_82497828;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3589
	ctx.r4.s64 = 3589;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82497828:
	// rlwinm r11,r28,0,0,15
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497860
	if (cr0.eq) goto loc_82497860;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,752(r31)
	PPC_STORE_U32(r31.u32 + 752, r11.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r11,756(r31)
	PPC_STORE_U32(r31.u32 + 756, r11.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// b 0x82497874
	goto loc_82497874;
loc_82497860:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// stw r11,752(r31)
	PPC_STORE_U32(r31.u32 + 752, r11.u32);
	// lwz r11,44(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r11,756(r31)
	PPC_STORE_U32(r31.u32 + 756, r11.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
loc_82497874:
	// stw r11,760(r31)
	PPC_STORE_U32(r31.u32 + 760, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497890
	if (cr0.eq) goto loc_82497890;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_82497890:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x824978b4
	if (cr6.eq) goto loc_824978B4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824978b4
	if (cr0.eq) goto loc_824978B4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82490dd8
	sub_82490DD8(ctx, base);
loc_824978B4:
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r10,r11,1
	ctx.r10.u64 = r11.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x824978f8
	if (cr0.eq) goto loc_824978F8;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x824978ec
	if (cr0.eq) goto loc_824978EC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824978f8
	if (cr0.eq) goto loc_824978F8;
loc_824978EC:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_824978F8:
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497928
	if (cr0.eq) goto loc_82497928;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82497928
	if (cr0.eq) goto loc_82497928;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497928
	if (cr0.eq) goto loc_82497928;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
loc_82497928:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82537158
	sub_82537158(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x82497950
	if (!cr0.eq) goto loc_82497950;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,3501
	ctx.r4.s64 = 3501;
	// bl 0x82496e98
	sub_82496E98(ctx, base);
loc_82497950:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// bl 0x82534730
	sub_82534730(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251cc28
	sub_8251CC28(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82497970
	if (cr0.eq) goto loc_82497970;
	// li r11,0
	r11.s64 = 0;
loc_82497970:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82497990
	if (!cr0.eq) goto loc_82497990;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82497990
	if (cr6.eq) goto loc_82497990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251b1c0
	sub_8251B1C0(ctx, base);
loc_82497990:
	// addi r3,r31,924
	ctx.r3.s64 = r31.s64 + 924;
	// bl 0x82497058
	sub_82497058(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824973b8
	sub_824973B8(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_824979BC"))) PPC_WEAK_FUNC(sub_824979BC);
PPC_FUNC_IMPL(__imp__sub_824979BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824979C0"))) PPC_WEAK_FUNC(sub_824979C0);
PPC_FUNC_IMPL(__imp__sub_824979C0) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bl 0x82537be0
	sub_82537BE0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251cc28
	sub_8251CC28(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82497a08
	if (cr0.eq) goto loc_82497A08;
	// li r11,0
	r11.s64 = 0;
loc_82497A08:
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82497a28
	if (!cr0.eq) goto loc_82497A28;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82497a28
	if (cr6.eq) goto loc_82497A28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8251b1c0
	sub_8251B1C0(ctx, base);
loc_82497A28:
	// addi r3,r31,924
	ctx.r3.s64 = r31.s64 + 924;
	// bl 0x82497058
	sub_82497058(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_82497A40:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x82497a40
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82497A40;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82497a78
	if (!cr0.eq) goto loc_82497A78;
	// lis r4,-2
	ctx.r4.s64 = -131072;
loc_82497A78:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824973b8
	sub_824973B8(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82497aa0
	if (cr6.eq) goto loc_82497AA0;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
loc_82497AA0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82497AA8"))) PPC_WEAK_FUNC(sub_82497AA8);
PPC_FUNC_IMPL(__imp__sub_82497AA8) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-13944(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -13944);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// stw r5,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r5.u32);
	// stw r6,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r6.u32);
	// stw r7,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r7.u32);
	// stw r8,252(r31)
	PPC_STORE_U32(r31.u32 + 252, ctx.r8.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r9.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r27,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r27.u32);
	// stw r27,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r27.u32);
	// stb r27,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r27.u8);
	// rlwinm r11,r4,0,26,22
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,129
	r28.s64 = 129;
	// li r29,1
	r29.s64 = 1;
loc_82497B04:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwimi r11,r28,16,8,15
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// rlwimi r11,r29,26,4,7
	r11.u64 = (__builtin_rotateleft32(r29.u32, 26) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwimi r11,r29,29,2,3
	r11.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// bne 0x82497b78
	if (!cr0.eq) goto loc_82497B78;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = r11.u64 | 14;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497d48
	// ERROR 82497D48
	return;
loc_82497B78:
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// stw r11,1416(r30)
	PPC_STORE_U32(r30.u32 + 1416, r11.u32);
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// stw r11,1420(r30)
	PPC_STORE_U32(r30.u32 + 1420, r11.u32);
	// addi r3,r30,1088
	ctx.r3.s64 = r30.s64 + 1088;
	// bl 0x826a7300
	sub_826A7300(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bne 0x82497c04
	if (!cr0.eq) goto loc_82497C04;
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497748
	sub_82497748(ctx, base);
	// stb r29,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r29.u8);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824977b0
	sub_824977B0(ctx, base);
	// b 0x82497cc0
	goto loc_82497CC0;
loc_82497C04:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// rlwinm. r11,r11,0,3,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497ca4
	if (cr0.eq) goto loc_82497CA4;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82497c98
	if (cr6.eq) goto loc_82497C98;
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824972e8
	sub_824972E8(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rlwimi r11,r28,16,8,15
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwimi r11,r29,26,4,7
	r11.u64 = (__builtin_rotateleft32(r29.u32, 26) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwimi r11,r29,29,2,3
	r11.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r27,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r27.u32);
	// stb r27,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r27.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497b04
	goto loc_82497B04;
loc_82497C98:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,1408(r30)
	PPC_STORE_U32(r30.u32 + 1408, r11.u32);
loc_82497CA4:
	// lwz r11,1408(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82497cc0
	if (cr0.lt) goto loc_82497CC0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82497CC0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497cf4
	// ERROR 82497CF4
	return;
}

__attribute__((alias("__imp__sub_82497AB0"))) PPC_WEAK_FUNC(sub_82497AB0);
PPC_FUNC_IMPL(__imp__sub_82497AB0) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,212(r31)
	PPC_STORE_U32(r31.u32 + 212, ctx.r3.u32);
	// stw r5,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r5.u32);
	// stw r6,236(r31)
	PPC_STORE_U32(r31.u32 + 236, ctx.r6.u32);
	// stw r7,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r7.u32);
	// stw r8,252(r31)
	PPC_STORE_U32(r31.u32 + 252, ctx.r8.u32);
	// stw r9,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r9.u32);
	// stw r10,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r10.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r27,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r27.u32);
	// stw r27,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r27.u32);
	// stb r27,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r27.u8);
	// rlwinm r11,r4,0,26,22
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,129
	r28.s64 = 129;
	// li r29,1
	r29.s64 = 1;
loc_82497B04:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwimi r11,r28,16,8,15
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// rlwimi r11,r29,26,4,7
	r11.u64 = (__builtin_rotateleft32(r29.u32, 26) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwimi r11,r29,29,2,3
	r11.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r4.u32);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r30.u32);
	// bne 0x82497b78
	if (!cr0.eq) goto loc_82497B78;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = r11.u64 | 14;
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497d48
	goto loc_82497D48;
loc_82497B78:
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,284(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// stw r11,1416(r30)
	PPC_STORE_U32(r30.u32 + 1416, r11.u32);
	// lwz r11,292(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// stw r11,1420(r30)
	PPC_STORE_U32(r30.u32 + 1420, r11.u32);
	// addi r3,r30,1088
	ctx.r3.s64 = r30.s64 + 1088;
	// bl 0x826a7300
	sub_826A7300(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// bne 0x82497c04
	if (!cr0.eq) goto loc_82497C04;
	// lwz r5,292(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// lwz r4,284(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 284);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497748
	sub_82497748(ctx, base);
	// stb r29,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r29.u8);
	// lwz r10,260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lwz r9,252(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 252);
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r7,236(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r6,228(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r4,212(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824977b0
	sub_824977B0(ctx, base);
	// b 0x82497cc0
	goto loc_82497CC0;
loc_82497C04:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// rlwinm. r11,r11,0,3,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497ca4
	if (cr0.eq) goto loc_82497CA4;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82497c98
	if (cr6.eq) goto loc_82497C98;
	// stw r11,220(r31)
	PPC_STORE_U32(r31.u32 + 220, r11.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824972e8
	sub_824972E8(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rlwimi r11,r28,16,8,15
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwimi r11,r29,26,4,7
	r11.u64 = (__builtin_rotateleft32(r29.u32, 26) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwimi r11,r29,29,2,3
	r11.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r27,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r27.u32);
	// stb r27,112(r31)
	PPC_STORE_U8(r31.u32 + 112, r27.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497b04
	goto loc_82497B04;
loc_82497C98:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,1408(r30)
	PPC_STORE_U32(r30.u32 + 1408, r11.u32);
loc_82497CA4:
	// lwz r11,1408(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82497cc0
	if (cr0.lt) goto loc_82497CC0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82497CC0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497cf4
	goto loc_82497CF4;
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16387
	r11.u64 = r11.u64 | 16387;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
loc_82497CF4:
	// lbz r11,112(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82497d28
	if (cr0.eq) goto loc_82497D28;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824972e8
	sub_824972E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497d28
	goto loc_82497D28;
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
loc_82497D28:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82497d44
	if (cr6.eq) goto loc_82497D44;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lis r11,9345
	r11.s64 = 612433920;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_82497D44:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
loc_82497D48:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82497CD0"))) PPC_WEAK_FUNC(sub_82497CD0);
PPC_FUNC_IMPL(__imp__sub_82497CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r30{};
	PPCRegister r31{};
	// li r27,0
	r27.s64 = 0;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16387
	r11.u64 = r11.u64 | 16387;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,268(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lbz r11,112(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82497d28
	if (cr0.eq) {
		// ERROR 82497D28
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824972e8
	sub_824972E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497d28
	// ERROR 82497D28
	return;
}

__attribute__((alias("__imp__sub_82497D24"))) PPC_WEAK_FUNC(sub_82497D24);
PPC_FUNC_IMPL(__imp__sub_82497D24) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lwz r30,124(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82497d44
	if (cr6.eq) goto loc_82497D44;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lis r11,9345
	r11.s64 = 612433920;
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_82497D44:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82497D50"))) PPC_WEAK_FUNC(sub_82497D50);
PPC_FUNC_IMPL(__imp__sub_82497D50) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497D5C"))) PPC_WEAK_FUNC(sub_82497D5C);
PPC_FUNC_IMPL(__imp__sub_82497D5C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82497D68"))) PPC_WEAK_FUNC(sub_82497D68);
PPC_FUNC_IMPL(__imp__sub_82497D68) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,-13904(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -13904);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// stw r4,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r4.u32);
	// stw r6,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r6.u32);
	// stw r9,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r9.u32);
	// lis r11,-32183
	r11.s64 = -2109145088;
	// stw r7,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r7.u32);
	// stw r8,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r8.u32);
	// addi r11,r11,27304
	r11.s64 = r11.s64 + 27304;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// rlwinm r11,r5,0,26,22
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,129
	r28.s64 = 129;
	// li r29,1
	r29.s64 = 1;
loc_82497DD4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwimi r11,r28,16,8,15
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// rlwimi r11,r29,26,4,7
	r11.u64 = (__builtin_rotateleft32(r29.u32, 26) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwimi r11,r29,29,2,3
	r11.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// bne 0x82497e48
	if (!cr0.eq) goto loc_82497E48;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = r11.u64 | 14;
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497ff0
	// ERROR 82497FF0
	return;
loc_82497E48:
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// stw r11,1416(r30)
	PPC_STORE_U32(r30.u32 + 1416, r11.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,1420(r30)
	PPC_STORE_U32(r30.u32 + 1420, r11.u32);
	// addi r3,r30,1088
	ctx.r3.s64 = r30.s64 + 1088;
	// bl 0x826a7300
	sub_826A7300(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bne 0x82497eb4
	if (!cr0.eq) goto loc_82497EB4;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497748
	sub_82497748(ctx, base);
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824979c0
	sub_824979C0(ctx, base);
	// b 0x82497f70
	goto loc_82497F70;
loc_82497EB4:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// rlwinm. r11,r11,0,3,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497f54
	if (cr0.eq) goto loc_82497F54;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82497f48
	if (cr6.eq) goto loc_82497F48;
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824972e8
	sub_824972E8(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwimi r11,r28,16,8,15
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwimi r11,r29,26,4,7
	r11.u64 = (__builtin_rotateleft32(r29.u32, 26) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwimi r11,r29,29,2,3
	r11.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497dd4
	goto loc_82497DD4;
loc_82497F48:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,1408(r30)
	PPC_STORE_U32(r30.u32 + 1408, r11.u32);
loc_82497F54:
	// lwz r11,1408(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82497f70
	if (cr0.lt) goto loc_82497F70;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_82497F70:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497f9c
	// ERROR 82497F9C
	return;
}

__attribute__((alias("__imp__sub_82497D70"))) PPC_WEAK_FUNC(sub_82497D70);
PPC_FUNC_IMPL(__imp__sub_82497D70) {
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
	// stw r3,196(r31)
	PPC_STORE_U32(r31.u32 + 196, ctx.r3.u32);
	// stw r4,204(r31)
	PPC_STORE_U32(r31.u32 + 204, ctx.r4.u32);
	// stw r6,220(r31)
	PPC_STORE_U32(r31.u32 + 220, ctx.r6.u32);
	// stw r9,244(r31)
	PPC_STORE_U32(r31.u32 + 244, ctx.r9.u32);
	// lis r11,-32183
	r11.s64 = -2109145088;
	// stw r7,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r7.u32);
	// stw r8,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r8.u32);
	// addi r11,r11,27304
	r11.s64 = r11.s64 + 27304;
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// addi r11,r31,120
	r11.s64 = r31.s64 + 120;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// li r27,0
	r27.s64 = 0;
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// rlwinm r11,r5,0,26,22
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r28,129
	r28.s64 = 129;
	// li r29,1
	r29.s64 = 1;
loc_82497DD4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwimi r11,r28,16,8,15
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r3,1424
	ctx.r3.s64 = 1424;
	// rlwimi r11,r29,26,4,7
	r11.u64 = (__builtin_rotateleft32(r29.u32, 26) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwimi r11,r29,29,2,3
	r11.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// bne 0x82497e48
	if (!cr0.eq) goto loc_82497E48;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = r11.u64 | 14;
	// stw r3,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497ff0
	goto loc_82497FF0;
loc_82497E48:
	// li r5,1424
	ctx.r5.s64 = 1424;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// stw r11,1416(r30)
	PPC_STORE_U32(r30.u32 + 1416, r11.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,1420(r30)
	PPC_STORE_U32(r30.u32 + 1420, r11.u32);
	// addi r3,r30,1088
	ctx.r3.s64 = r30.s64 + 1088;
	// bl 0x826a7300
	sub_826A7300(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// bne 0x82497eb4
	if (!cr0.eq) goto loc_82497EB4;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r4,228(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82497748
	sub_82497748(ctx, base);
	// stb r29,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r29.u8);
	// lwz r8,244(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// lwz r6,212(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// lwz r5,204(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 204);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824979c0
	sub_824979C0(ctx, base);
	// b 0x82497f70
	goto loc_82497F70;
loc_82497EB4:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// rlwinm. r11,r11,0,3,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82497f54
	if (cr0.eq) goto loc_82497F54;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 212);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82497f48
	if (cr6.eq) goto loc_82497F48;
	// stw r11,212(r31)
	PPC_STORE_U32(r31.u32 + 212, r11.u32);
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// ori r4,r4,16389
	ctx.r4.u64 = ctx.r4.u64 | 16389;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824972e8
	sub_824972E8(ctx, base);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwimi r11,r28,16,8,15
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwimi r11,r29,26,4,7
	r11.u64 = (__builtin_rotateleft32(r29.u32, 26) & 0xF000000) | (r11.u64 & 0xFFFFFFFFF0FFFFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwimi r11,r29,29,2,3
	r11.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r11,r11,0,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFE000;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r11,r11,0,19,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// rlwinm r4,r11,0,17,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r27,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r27.u32);
	// stb r27,80(r31)
	PPC_STORE_U8(r31.u32 + 80, r27.u8);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497dd4
	goto loc_82497DD4;
loc_82497F48:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,1408(r30)
	PPC_STORE_U32(r30.u32 + 1408, r11.u32);
loc_82497F54:
	// lwz r11,1408(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1408);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82497f70
	if (cr0.lt) goto loc_82497F70;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
loc_82497F70:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497f9c
	goto loc_82497F9C;
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,16387
	ctx.r10.u64 = ctx.r10.u64 | 16387;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
loc_82497F9C:
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82497fd0
	if (cr0.eq) goto loc_82497FD0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824972e8
	sub_824972E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497fd0
	goto loc_82497FD0;
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
loc_82497FD0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82497fec
	if (cr6.eq) goto loc_82497FEC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lis r11,9345
	r11.s64 = 612433920;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_82497FEC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
loc_82497FF0:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82497F80"))) PPC_WEAK_FUNC(sub_82497F80);
PPC_FUNC_IMPL(__imp__sub_82497F80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,16387
	ctx.r10.u64 = ctx.r10.u64 | 16387;
	// stw r10,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r10.u32);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lbz r11,80(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82497fd0
	if (cr0.eq) {
		// ERROR 82497FD0
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824972e8
	sub_824972E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82497fd0
	// ERROR 82497FD0
	return;
}

__attribute__((alias("__imp__sub_82497FCC"))) PPC_WEAK_FUNC(sub_82497FCC);
PPC_FUNC_IMPL(__imp__sub_82497FCC) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// lwz r30,92(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82497fec
	if (cr6.eq) goto loc_82497FEC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lis r11,9345
	r11.s64 = 612433920;
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_82497FEC:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82497FF8"))) PPC_WEAK_FUNC(sub_82497FF8);
PPC_FUNC_IMPL(__imp__sub_82497FF8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498004"))) PPC_WEAK_FUNC(sub_82498004);
PPC_FUNC_IMPL(__imp__sub_82498004) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82498010"))) PPC_WEAK_FUNC(sub_82498010);
PPC_FUNC_IMPL(__imp__sub_82498010) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// b 0x82121108
	sub_82121108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249801C"))) PPC_WEAK_FUNC(sub_8249801C);
PPC_FUNC_IMPL(__imp__sub_8249801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498020"))) PPC_WEAK_FUNC(sub_82498020);
PPC_FUNC_IMPL(__imp__sub_82498020) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x82120e68
	sub_82120E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249802C"))) PPC_WEAK_FUNC(sub_8249802C);
PPC_FUNC_IMPL(__imp__sub_8249802C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498030"))) PPC_WEAK_FUNC(sub_82498030);
PPC_FUNC_IMPL(__imp__sub_82498030) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82498064
	if (cr0.eq) goto loc_82498064;
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,-2160
	r11.s64 = r11.s64 + -2160;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x82498074
	goto loc_82498074;
loc_82498064:
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// rlwinm r11,r11,2,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// addi r10,r10,-2176
	ctx.r10.s64 = ctx.r10.s64 + -2176;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_82498074:
	// rlwinm r3,r11,9,0,22
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFFFFFE00;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249807C"))) PPC_WEAK_FUNC(sub_8249807C);
PPC_FUNC_IMPL(__imp__sub_8249807C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498080"))) PPC_WEAK_FUNC(sub_82498080);
PPC_FUNC_IMPL(__imp__sub_82498080) {
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
	// lis r11,1536
	r11.s64 = 100663296;
	// li r31,0
	r31.s64 = 0;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bgt cr6,0x8249811c
	if (cr6.gt) goto loc_8249811C;
	// beq cr6,0x82498114
	if (cr6.eq) goto loc_82498114;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82498198
	if (cr6.eq) goto loc_82498198;
	// lis r11,256
	r11.s64 = 16777216;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82498108
	if (cr6.eq) goto loc_82498108;
	// lis r11,512
	r11.s64 = 33554432;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82498100
	if (cr6.eq) goto loc_82498100;
	// lis r11,768
	r11.s64 = 50331648;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x824980f8
	if (cr6.eq) goto loc_824980F8;
	// lis r11,1024
	r11.s64 = 67108864;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x824980f0
	if (cr6.eq) goto loc_824980F0;
	// lis r11,1280
	r11.s64 = 83886080;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x82498164
	if (!cr6.eq) goto loc_82498164;
	// lis r31,6
	r31.s64 = 393216;
	// b 0x8249810c
	goto loc_8249810C;
loc_824980F0:
	// lis r31,6
	r31.s64 = 393216;
	// b 0x82498198
	goto loc_82498198;
loc_824980F8:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x8249810c
	goto loc_8249810C;
loc_82498100:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x82498198
	goto loc_82498198;
loc_82498108:
	// lis r31,0
	r31.s64 = 0;
loc_8249810C:
	// ori r31,r31,34952
	r31.u64 = r31.u64 | 34952;
	// b 0x82498198
	goto loc_82498198;
loc_82498114:
	// lis r31,1
	r31.s64 = 65536;
	// b 0x82498198
	goto loc_82498198;
loc_8249811C:
	// lis r11,1792
	r11.s64 = 117440512;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82498194
	if (cr6.eq) goto loc_82498194;
	// lis r11,2048
	r11.s64 = 134217728;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8249818c
	if (cr6.eq) goto loc_8249818C;
	// lis r11,2304
	r11.s64 = 150994944;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82498184
	if (cr6.eq) goto loc_82498184;
	// lis r11,2560
	r11.s64 = 167772160;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8249817c
	if (cr6.eq) goto loc_8249817C;
	// lis r11,2816
	r11.s64 = 184549376;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82498174
	if (cr6.eq) goto loc_82498174;
	// lis r11,3072
	r11.s64 = 201326592;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8249816c
	if (cr6.eq) goto loc_8249816C;
loc_82498164:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x82498198
	goto loc_82498198;
loc_8249816C:
	// lis r31,16
	r31.s64 = 1048576;
	// b 0x8249810c
	goto loc_8249810C;
loc_82498174:
	// lis r31,16
	r31.s64 = 1048576;
	// b 0x82498198
	goto loc_82498198;
loc_8249817C:
	// lis r31,96
	r31.s64 = 6291456;
	// b 0x82498198
	goto loc_82498198;
loc_82498184:
	// lis r31,64
	r31.s64 = 4194304;
	// b 0x82498198
	goto loc_82498198;
loc_8249818C:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x8249810c
	goto loc_8249810C;
loc_82498194:
	// lis r31,4
	r31.s64 = 262144;
loc_82498198:
	// rlwinm. r11,r31,0,15,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824981b4
	if (cr0.eq) goto loc_824981B4;
	// lis r12,6
	r12.s64 = 393216;
	// ori r12,r12,34952
	r12.u64 = r12.u64 | 34952;
	// and. r11,r31,r12
	r11.u64 = r31.u64 & r12.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824981b4
	if (cr0.eq) goto loc_824981B4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824981B4:
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

__attribute__((alias("__imp__sub_824981CC"))) PPC_WEAK_FUNC(sub_824981CC);
PPC_FUNC_IMPL(__imp__sub_824981CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824981D0"))) PPC_WEAK_FUNC(sub_824981D0);
PPC_FUNC_IMPL(__imp__sub_824981D0) {
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
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x824982b8
	if (cr6.eq) goto loc_824982B8;
	// cmplwi cr6,r3,3
	cr6.compare<uint32_t>(ctx.r3.u32, 3, xer);
	// beq cr6,0x8249827c
	if (cr6.eq) goto loc_8249827C;
	// cmplwi cr6,r3,8
	cr6.compare<uint32_t>(ctx.r3.u32, 8, xer);
	// beq cr6,0x82498220
	if (cr6.eq) goto loc_82498220;
	// cmplwi cr6,r3,9
	cr6.compare<uint32_t>(ctx.r3.u32, 9, xer);
	// bne cr6,0x824982b0
	if (!cr6.eq) goto loc_824982B0;
	// li r11,4
	r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r31,34
	r31.s64 = 34;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,156(r30)
	PPC_STORE_U32(r30.u32 + 156, ctx.r10.u32);
	// b 0x824982c0
	goto loc_824982C0;
loc_82498220:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r29,r10,512
	r29.u64 = ctx.r10.u64 | 512;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x82498238
	if (!cr6.lt) goto loc_82498238;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498238:
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82498244
	if (cr6.lt) goto loc_82498244;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498244:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x82498274
	if (!cr6.eq) goto loc_82498274;
	// li r11,1
	r11.s64 = 1;
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// li r10,4
	ctx.r10.s64 = 4;
	// slw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 << (r31.u8 & 0x3F));
	// addi r31,r31,35
	r31.s64 = r31.s64 + 35;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stw r11,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r11.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// b 0x824982c0
	goto loc_824982C0;
loc_82498274:
	// li r11,23
	r11.s64 = 23;
	// b 0x824982bc
	goto loc_824982BC;
loc_8249827C:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82498294
	if (cr6.lt) goto loc_82498294;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498294:
	// addi r11,r31,41
	r11.s64 = r31.s64 + 41;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	r31.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x824982c0
	if (!cr0.eq) goto loc_824982C0;
loc_824982B0:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x824982c0
	goto loc_824982C0;
loc_824982B8:
	// li r11,4
	r11.s64 = 4;
loc_824982BC:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_824982C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824982CC"))) PPC_WEAK_FUNC(sub_824982CC);
PPC_FUNC_IMPL(__imp__sub_824982CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824982D0"))) PPC_WEAK_FUNC(sub_824982D0);
PPC_FUNC_IMPL(__imp__sub_824982D0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,52
	cr6.compare<int32_t>(r31.s32, 52, xer);
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// beq cr6,0x82498300
	if (cr6.eq) goto loc_82498300;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(r31.s32, 7, xer);
	// beq cr6,0x82498300
	if (cr6.eq) goto loc_82498300;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498300:
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82498324
	if (!cr6.eq) goto loc_82498324;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x70000) | (r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x82498328
	goto loc_82498328;
loc_82498324:
	// rlwinm r10,r11,0,16,12
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
loc_82498328:
	// rlwinm r11,r30,0,8,15
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0000;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// addi r9,r29,4
	ctx.r9.s64 = r29.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x824983a8
	if (cr6.eq) goto loc_824983A8;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// ori r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 | 32;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// addi r11,r11,-2144
	r11.s64 = r11.s64 + -2144;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// rlwinm r7,r11,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x824983b8
	goto loc_824983B8;
loc_824983A8:
	// lis r11,4
	r11.s64 = 262144;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
loc_824983B8:
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824983DC"))) PPC_WEAK_FUNC(sub_824983DC);
PPC_FUNC_IMPL(__imp__sub_824983DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824983E0"))) PPC_WEAK_FUNC(sub_824983E0);
PPC_FUNC_IMPL(__imp__sub_824983E0) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x8249840c
	goto loc_8249840C;
loc_82498408:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8249840C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82498408
	if (!cr0.eq) goto loc_82498408;
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

__attribute__((alias("__imp__sub_82498434"))) PPC_WEAK_FUNC(sub_82498434);
PPC_FUNC_IMPL(__imp__sub_82498434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498438"))) PPC_WEAK_FUNC(sub_82498438);
PPC_FUNC_IMPL(__imp__sub_82498438) {
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
	// lis r11,-1
	r11.s64 = -65536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82498464
	if (cr6.eq) goto loc_82498464;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498464:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// addi r27,r10,4
	r27.s64 = ctx.r10.s64 + 4;
	// lwz r31,0(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// mr r11,r31
	r11.u64 = r31.u64;
	// stw r8,156(r26)
	PPC_STORE_U32(r26.u32 + 156, ctx.r8.u32);
	// rlwimi r11,r31,12,21,23
	r11.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824984a0
	if (cr0.eq) goto loc_824984A0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824984A0:
	// lis r11,88
	r11.s64 = 5767168;
	// li r10,257
	ctx.r10.s64 = 257;
	// li r9,17
	ctx.r9.s64 = 17;
	// lis r8,32
	ctx.r8.s64 = 2097152;
	// rlwimi r31,r9,18,0,20
	r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xFFFFF800) | (r31.u64 & 0xFFFFFFFF000007FF);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// ori r8,r8,12816
	ctx.r8.u64 = ctx.r8.u64 | 12816;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_824984E8"))) PPC_WEAK_FUNC(sub_824984E8);
PPC_FUNC_IMPL(__imp__sub_824984E8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82498510
	if (!cr6.eq) goto loc_82498510;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498510:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82498524
	if (cr6.lt) goto loc_82498524;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82498534
	goto loc_82498534;
loc_82498524:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mullw r11,r11,r30
	r11.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_82498534:
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

__attribute__((alias("__imp__sub_8249854C"))) PPC_WEAK_FUNC(sub_8249854C);
PPC_FUNC_IMPL(__imp__sub_8249854C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498550"))) PPC_WEAK_FUNC(sub_82498550);
PPC_FUNC_IMPL(__imp__sub_82498550) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82498578
	if (!cr6.eq) goto loc_82498578;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498578:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subfc r11,r11,r30
	xer.ca = r30.u32 >= r11.u32;
	r11.s64 = r30.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_824985A0"))) PPC_WEAK_FUNC(sub_824985A0);
PPC_FUNC_IMPL(__imp__sub_824985A0) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824985c0
	if (!cr6.eq) goto loc_824985C0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824985C0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x824985d0
	if (!cr6.eq) goto loc_824985D0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824985D0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82498678
	if (cr6.lt) goto loc_82498678;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824985f8
	if (cr6.eq) goto loc_824985F8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x824985fc
	goto loc_824985FC;
loc_824985F8:
	// li r11,4096
	r11.s64 = 4096;
loc_824985FC:
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// b 0x8249860c
	goto loc_8249860C;
loc_82498604:
	// rlwinm. r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82498684
	if (cr0.eq) goto loc_82498684;
loc_8249860C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r8,r11,-32
	ctx.r8.s64 = r11.s64 + -32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// blt cr6,0x82498604
	if (cr6.lt) goto loc_82498604;
	// addi r29,r11,-32
	r29.s64 = r11.s64 + -32;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82498684
	if (cr0.eq) goto loc_82498684;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82498664
	if (cr0.eq) goto loc_82498664;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_82498664:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// twllei r11,0
	// divwu r11,r29,r11
	r11.u32 = r29.u32 / r11.u32;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82498678:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8249867C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_82498684:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8249867c
	goto loc_8249867C;
}

__attribute__((alias("__imp__sub_8249868C"))) PPC_WEAK_FUNC(sub_8249868C);
PPC_FUNC_IMPL(__imp__sub_8249868C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82498690"))) PPC_WEAK_FUNC(sub_82498690);
PPC_FUNC_IMPL(__imp__sub_82498690) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x824986b8
	if (!cr6.eq) goto loc_824986B8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824986B8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498550
	sub_82498550(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne 0x824986f8
	if (!cr0.eq) goto loc_824986F8;
	// bl 0x824985a0
	sub_824985A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x824986f0
	if (cr0.eq) goto loc_824986F0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824984e8
	sub_824984E8(ctx, base);
	// b 0x82498710
	goto loc_82498710;
loc_824986F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82498710
	goto loc_82498710;
loc_824986F8:
	// bl 0x824984e8
	sub_824984E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82498710:
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

__attribute__((alias("__imp__sub_82498728"))) PPC_WEAK_FUNC(sub_82498728);
PPC_FUNC_IMPL(__imp__sub_82498728) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwimi r11,r3,12,21,23
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// rlwinm r11,r11,24,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// clrlwi r10,r3,21
	ctx.r10.u64 = ctx.r3.u32 & 0x7FF;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// beq cr6,0x8249877c
	if (cr6.eq) goto loc_8249877C;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// beq cr6,0x82498774
	if (cr6.eq) goto loc_82498774;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// beq cr6,0x8249876c
	if (cr6.eq) goto loc_8249876C;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// b 0x82498780
	goto loc_82498780;
loc_8249876C:
	// addi r31,r10,6144
	r31.s64 = ctx.r10.s64 + 6144;
	// b 0x82498780
	goto loc_82498780;
loc_82498774:
	// addi r31,r10,4096
	r31.s64 = ctx.r10.s64 + 4096;
	// b 0x82498780
	goto loc_82498780;
loc_8249877C:
	// addi r31,r10,2048
	r31.s64 = ctx.r10.s64 + 2048;
loc_82498780:
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// blt cr6,0x82498794
	if (cr6.lt) goto loc_82498794;
	// cmplwi cr6,r11,13
	cr6.compare<uint32_t>(r11.u32, 13, xer);
	// bgt cr6,0x82498794
	if (cr6.gt) goto loc_82498794;
	// li r11,2
	r11.s64 = 2;
loc_82498794:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82498898
	if (cr6.lt) goto loc_82498898;
	// beq cr6,0x82498844
	if (cr6.eq) goto loc_82498844;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8249883c
	if (cr6.lt) goto loc_8249883C;
	// beq cr6,0x824987f8
	if (cr6.eq) goto loc_824987F8;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x824987f0
	if (cr6.eq) goto loc_824987F0;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// beq cr6,0x824987e8
	if (cr6.eq) goto loc_824987E8;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bne cr6,0x82498890
	if (!cr6.eq) goto loc_82498890;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// blt cr6,0x824987d8
	if (cr6.lt) goto loc_824987D8;
	// bne cr6,0x824987e0
	if (!cr6.eq) goto loc_824987E0;
	// li r11,21
	r11.s64 = 21;
	// b 0x824987dc
	goto loc_824987DC;
loc_824987D8:
	// li r11,22
	r11.s64 = 22;
loc_824987DC:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_824987E0:
	// li r31,0
	r31.s64 = 0;
	// b 0x824988a0
	goto loc_824988A0;
loc_824987E8:
	// li r11,0
	r11.s64 = 0;
	// b 0x8249889c
	goto loc_8249889C;
loc_824987F0:
	// li r11,2
	r11.s64 = 2;
	// b 0x8249889c
	goto loc_8249889C;
loc_824987F8:
	// addi r11,r31,41
	r11.s64 = r31.s64 + 41;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r29
	r11.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82498834
	if (cr6.eq) goto loc_82498834;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82498824
	if (cr6.lt) goto loc_82498824;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498824:
	// li r11,4
	r11.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwzx r31,r30,r29
	r31.u64 = PPC_LOAD_U32(r30.u32 + r29.u32);
	// b 0x824988a0
	goto loc_824988A0;
loc_82498834:
	// li r11,17
	r11.s64 = 17;
	// b 0x8249889c
	goto loc_8249889C;
loc_8249883C:
	// li r11,1
	r11.s64 = 1;
	// b 0x8249889c
	goto loc_8249889C;
loc_82498844:
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r31,28(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// blt cr6,0x8249886c
	if (cr6.lt) goto loc_8249886C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249886C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,18
	cr6.compare<int32_t>(r11.s32, 18, xer);
	// beq cr6,0x824988a0
	if (cr6.eq) goto loc_824988A0;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// beq cr6,0x824988a0
	if (cr6.eq) goto loc_824988A0;
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// beq cr6,0x824988a0
	if (cr6.eq) goto loc_824988A0;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x824988a0
	if (cr6.eq) goto loc_824988A0;
loc_82498890:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x824988a0
	goto loc_824988A0;
loc_82498898:
	// li r11,4
	r11.s64 = 4;
loc_8249889C:
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_824988A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_824988AC"))) PPC_WEAK_FUNC(sub_824988AC);
PPC_FUNC_IMPL(__imp__sub_824988AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824988B0"))) PPC_WEAK_FUNC(sub_824988B0);
PPC_FUNC_IMPL(__imp__sub_824988B0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r3,r11,8,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xF;
	// lwz r27,0(r25)
	r27.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r26,r11,0,12,15
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000;
	// rlwinm r29,r10,24,27,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// clrlwi r28,r11,21
	r28.u64 = r11.u32 & 0x7FF;
	// li r31,0
	r31.s64 = 0;
	// rlwinm. r9,r11,0,11,11
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x824988f4
	if (cr0.eq) goto loc_824988F4;
	// li r31,256
	r31.s64 = 256;
loc_824988F4:
	// bl 0x82498030
	sub_82498030(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// or r31,r11,r31
	r31.u64 = r11.u64 | r31.u64;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82498940
	if (!cr6.eq) goto loc_82498940;
	// lis r11,15
	r11.s64 = 983040;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bne cr6,0x82498940
	if (!cr6.eq) goto loc_82498940;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
	// b 0x8249899c
	goto loc_8249899C;
loc_82498940:
	// rlwinm. r10,r26,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x82498950
	if (cr0.eq) goto loc_82498950;
	// li r11,1
	r11.s64 = 1;
loc_82498950:
	// rlwinm. r10,r26,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249895c
	if (cr0.eq) goto loc_8249895C;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_8249895C:
	// rlwinm. r10,r26,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82498968
	if (cr0.eq) goto loc_82498968;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_82498968:
	// rlwinm. r10,r26,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82498974
	if (cr0.eq) goto loc_82498974;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_82498974:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r10,r11,r31
	ctx.r10.u64 = r11.u64 | r31.u64;
	// or r11,r9,r8
	r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8249899C:
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824989A8"))) PPC_WEAK_FUNC(sub_824989A8);
PPC_FUNC_IMPL(__imp__sub_824989A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// rlwinm r11,r31,0,8,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFF0000;
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r26,0(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82498a2c
	if (cr6.eq) goto loc_82498A2C;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-2144
	r11.s64 = r11.s64 + -2144;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r27,r8,r11
	r27.u64 = ctx.r8.u64 | r11.u64;
	// b 0x82498a30
	goto loc_82498A30;
loc_82498A2C:
	// li r27,12816
	r27.s64 = 12816;
loc_82498A30:
	// rlwinm r3,r31,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF000000;
	// bl 0x82498080
	sub_82498080(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r28,r11,r30
	r28.u64 = r11.u64 | r30.u64;
	// bl 0x82498728
	sub_82498728(ctx, base);
	// rlwinm r11,r31,0,18,18
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x82498ab4
	if (!cr6.eq) goto loc_82498AB4;
	// mr r11,r31
	r11.u64 = r31.u64;
	// rlwimi r11,r31,12,21,23
	r11.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x82498ab4
	if (!cr6.eq) goto loc_82498AB4;
	// mr r11,r25
	r11.u64 = r25.u64;
	// rlwimi r11,r25,12,21,23
	r11.u64 = (__builtin_rotateleft32(r25.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	cr6.compare<uint32_t>(r11.u32, 3840, xer);
	// beq cr6,0x82498a94
	if (cr6.eq) goto loc_82498A94;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x82498ab4
	goto loc_82498AB4;
loc_82498A94:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// andis. r11,r11,65521
	r11.u64 = r11.u64 & 4293984256;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// oris r11,r11,1
	r11.u64 = r11.u64 | 65536;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// clrlwi. r10,r25,21
	ctx.r10.u64 = r25.u32 & 0x7FF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82498ab0
	if (cr0.eq) goto loc_82498AB0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498AB0:
	// li r29,1
	r29.s64 = 1;
loc_82498AB4:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82498ae0
	if (!cr6.eq) goto loc_82498AE0;
	// cmplwi cr6,r27,12816
	cr6.compare<uint32_t>(r27.u32, 12816, xer);
	// bne cr6,0x82498ae0
	if (!cr6.eq) goto loc_82498AE0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r29,7,24,24
	r11.u64 = (__builtin_rotateleft32(r29.u32, 7) & 0x80) | (r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwimi r30,r11,16,0,15
	r30.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
	// stw r30,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r30.u32);
	// b 0x82498b10
	goto loc_82498B10;
loc_82498AE0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// or r9,r28,r27
	ctx.r9.u64 = r28.u64 | r27.u64;
	// rlwimi r11,r29,7,24,24
	r11.u64 = (__builtin_rotateleft32(r29.u32, 7) & 0x80) | (r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// rlwinm r11,r11,16,8,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r11,r11,0,10,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82498B10:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82498b24
	if (cr6.eq) goto loc_82498B24;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82498B24:
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82498B30"))) PPC_WEAK_FUNC(sub_82498B30);
PPC_FUNC_IMPL(__imp__sub_82498B30) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// rlwimi r11,r31,12,21,23
	r11.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r31,21
	ctx.r4.u64 = r31.u32 & 0x7FF;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// li r11,71
	r11.s64 = 71;
	// rlwinm r10,r31,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// beq cr6,0x82498bd8
	if (cr6.eq) goto loc_82498BD8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// beq 0x82498bac
	if (cr0.eq) goto loc_82498BAC;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82498BAC:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82498bb8
	if (cr0.eq) goto loc_82498BB8;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_82498BB8:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82498bc4
	if (cr0.eq) goto loc_82498BC4;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_82498BC4:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82498bd0
	if (cr0.eq) goto loc_82498BD0;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_82498BD0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x82498be8
	goto loc_82498BE8;
loc_82498BD8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82498BE8:
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwimi r28,r9,18,0,15
	r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xFFFF0000) | (r28.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82498C08"))) PPC_WEAK_FUNC(sub_82498C08);
PPC_FUNC_IMPL(__imp__sub_82498C08) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r31,21
	ctx.r4.u64 = r31.u32 & 0x7FF;
	// rlwinm r3,r10,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// rlwinm r11,r31,0,12,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82498cbc
	if (cr6.eq) goto loc_82498CBC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// beq 0x82498c8c
	if (cr0.eq) goto loc_82498C8C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82498C8C:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82498c98
	if (cr0.eq) goto loc_82498C98;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_82498C98:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82498ca4
	if (cr0.eq) goto loc_82498CA4;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_82498CA4:
	// rlwinm. r11,r11,0,12,12
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82498cb0
	if (cr0.eq) goto loc_82498CB0;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_82498CB0:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r8,r9,4
	ctx.r8.s64 = ctx.r9.s64 + 4;
	// b 0x82498cd0
	goto loc_82498CD0;
loc_82498CBC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82498CD0:
	// rlwinm r11,r29,0,4,7
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// rlwinm r10,r29,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// lis r7,1
	ctx.r7.s64 = 65536;
	// beq cr6,0x82498cec
	if (cr6.eq) goto loc_82498CEC;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82498CEC:
	// lis r6,228
	ctx.r6.s64 = 14942208;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// addi r11,r11,-2144
	r11.s64 = r11.s64 + -2144;
	// bne cr6,0x82498d1c
	if (!cr6.eq) goto loc_82498D1C;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x82498d1c
	if (!cr6.eq) goto loc_82498D1C;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// b 0x82498d7c
	goto loc_82498D7C;
loc_82498D1C:
	// lis r9,68
	ctx.r9.s64 = 4456448;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// ori r5,r9,32
	ctx.r5.u64 = ctx.r9.u64 | 32;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r4,r10,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	// rlwinm r4,r4,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// rlwinm r4,r10,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + r11.u32);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// rlwinm r5,r10,12,0,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// or r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 | ctx.r9.u64;
	// addi r10,r8,4
	ctx.r10.s64 = ctx.r8.s64 + 4;
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82498D7C:
	// cmplw cr6,r28,r6
	cr6.compare<uint32_t>(r28.u32, ctx.r6.u32, xer);
	// beq cr6,0x82498ddc
	if (cr6.eq) goto loc_82498DDC;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r9,r28,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFFFF;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r9,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r7,r9,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r9,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r7,r11,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r8
	r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// b 0x82498de4
	goto loc_82498DE4;
loc_82498DDC:
	// lis r11,4
	r11.s64 = 262144;
	// ori r11,r11,33
	r11.u64 = r11.u64 | 33;
loc_82498DE4:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82498DF8"))) PPC_WEAK_FUNC(sub_82498DF8);
PPC_FUNC_IMPL(__imp__sub_82498DF8) {
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
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r8,71
	ctx.r8.s64 = 71;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// clrlwi r4,r11,21
	ctx.r4.u64 = r11.u32 & 0x7FF;
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// rlwinm r28,r11,0,12,15
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF0000;
	// addi r30,r10,4
	r30.s64 = ctx.r10.s64 + 4;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwimi r11,r31,12,21,23
	r11.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r31,r31,21
	r31.u64 = r31.u32 & 0x7FF;
	// rlwinm. r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82498e60
	if (cr0.eq) goto loc_82498E60;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498E60:
	// lis r11,15
	r11.s64 = 983040;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82498ec8
	if (cr6.eq) goto loc_82498EC8;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r29,16
	ctx.r9.u64 = r29.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r8,r28,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// beq 0x82498e98
	if (cr0.eq) goto loc_82498E98;
	// li r11,1
	r11.s64 = 1;
loc_82498E98:
	// rlwinm. r9,r28,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82498ea4
	if (cr0.eq) goto loc_82498EA4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_82498EA4:
	// rlwinm. r9,r28,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82498eb0
	if (cr0.eq) goto loc_82498EB0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_82498EB0:
	// rlwinm. r9,r28,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82498ebc
	if (cr0.eq) goto loc_82498EBC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_82498EBC:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// b 0x82498ed8
	goto loc_82498ED8;
loc_82498EC8:
	// rlwimi r29,r11,16,10,15
	r29.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// clrlwi r11,r29,10
	r11.u64 = r29.u32 & 0x3FFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82498ED8:
	// li r8,17
	ctx.r8.s64 = 17;
	// rlwinm r10,r26,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF;
	// rlwimi r31,r8,18,0,15
	r31.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFF0000) | (r31.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// addi r11,r11,-2144
	r11.s64 = r11.s64 + -2144;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r31.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r7,r9,4
	ctx.r7.s64 = ctx.r9.s64 + 4;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r11,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r8
	r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r6,r11
	r11.u64 = ctx.r6.u64 | r11.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r7,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82498F48"))) PPC_WEAK_FUNC(sub_82498F48);
PPC_FUNC_IMPL(__imp__sub_82498F48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lwz r29,0(r18)
	r29.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r17,r11,0,3,3
	r17.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	// rlwinm r16,r11,0,1,1
	r16.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// clrlwi r24,r11,16
	r24.u64 = r11.u32 & 0xFFFF;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82498f94
	if (!cr0.eq) goto loc_82498F94;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498F94:
	// lis r11,-1
	r11.s64 = -65536;
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// ori r23,r11,512
	r23.u64 = r11.u64 | 512;
	// mr r19,r27
	r19.u64 = r27.u64;
	// cmplw cr6,r22,r23
	cr6.compare<uint32_t>(r22.u32, r23.u32, xer);
	// bge cr6,0x82499004
	if (!cr6.lt) goto loc_82499004;
	// lwz r11,428(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 428);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r9,r11,25
	ctx.r9.s64 = r11.s64 + 25;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r26.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82499004
	if (!cr6.eq) goto loc_82499004;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// lwz r11,204(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 204);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82498fe4
	if (!cr6.eq) goto loc_82498FE4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498FE4:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x82498ff0
	if (cr6.eq) goto loc_82498FF0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82498FF0:
	// lis r12,-28673
	r12.s64 = -1879113728;
	// ori r12,r12,57360
	r12.u64 = r12.u64 | 57360;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// oris r27,r11,15
	r27.u64 = r11.u64 | 983040;
	// ori r27,r27,16
	r27.u64 = r27.u64 | 16;
loc_82499004:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82499038
	if (cr6.eq) goto loc_82499038;
	// lis r12,-28673
	r12.s64 = -1879113728;
	// lwz r21,0(r28)
	r21.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// ori r12,r12,57377
	r12.u64 = r12.u64 | 57377;
	// cmplw cr6,r22,r23
	cr6.compare<uint32_t>(r22.u32, r23.u32, xer);
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// oris r27,r11,15
	r27.u64 = r11.u64 | 983040;
	// ori r27,r27,33
	r27.u64 = r27.u64 | 33;
	// bge cr6,0x8249903c
	if (!cr6.lt) goto loc_8249903C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x8249903c
	goto loc_8249903C;
loc_82499038:
	// lwz r21,80(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8249903C:
	// li r25,1
	r25.s64 = 1;
	// cmpwi cr6,r30,13
	cr6.compare<int32_t>(r30.s32, 13, xer);
	// bne cr6,0x82499060
	if (!cr6.eq) goto loc_82499060;
	// cmplwi cr6,r24,80
	cr6.compare<uint32_t>(r24.u32, 80, xer);
	// lis r11,67
	r11.s64 = 4390912;
	// beq cr6,0x82499058
	if (cr6.eq) goto loc_82499058;
	// lis r11,2
	r11.s64 = 131072;
loc_82499058:
	// ori r11,r11,13
	r11.u64 = r11.u64 | 13;
	// b 0x82499148
	goto loc_82499148;
loc_82499060:
	// cmpwi cr6,r30,69
	cr6.compare<int32_t>(r30.s32, 69, xer);
	// bne cr6,0x824990cc
	if (!cr6.eq) goto loc_824990CC;
	// li r31,69
	r31.s64 = 69;
	// cmplwi cr6,r24,20
	cr6.compare<uint32_t>(r24.u32, 20, xer);
	// beq cr6,0x824990c0
	if (cr6.eq) goto loc_824990C0;
	// cmplwi cr6,r24,21
	cr6.compare<uint32_t>(r24.u32, 21, xer);
	// beq cr6,0x824990b4
	if (cr6.eq) goto loc_824990B4;
	// cmplwi cr6,r24,22
	cr6.compare<uint32_t>(r24.u32, 22, xer);
	// beq cr6,0x824990ac
	if (cr6.eq) goto loc_824990AC;
	// cmplwi cr6,r24,23
	cr6.compare<uint32_t>(r24.u32, 23, xer);
	// beq cr6,0x824990a4
	if (cr6.eq) goto loc_824990A4;
	// cmplwi cr6,r24,24
	cr6.compare<uint32_t>(r24.u32, 24, xer);
	// beq cr6,0x8249909c
	if (cr6.eq) goto loc_8249909C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x824990c4
	goto loc_824990C4;
loc_8249909C:
	// lis r31,4
	r31.s64 = 262144;
	// b 0x824990b8
	goto loc_824990B8;
loc_824990A4:
	// lis r31,3
	r31.s64 = 196608;
	// b 0x824990b8
	goto loc_824990B8;
loc_824990AC:
	// lis r31,2
	r31.s64 = 131072;
	// b 0x824990b8
	goto loc_824990B8;
loc_824990B4:
	// lis r31,1
	r31.s64 = 65536;
loc_824990B8:
	// ori r31,r31,69
	r31.u64 = r31.u64 | 69;
	// b 0x824990c4
	goto loc_824990C4;
loc_824990C0:
	// li r31,69
	r31.s64 = 69;
loc_824990C4:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// b 0x8249914c
	goto loc_8249914C;
loc_824990CC:
	// cmpwi cr6,r30,61
	cr6.compare<int32_t>(r30.s32, 61, xer);
	// beq cr6,0x82499144
	if (cr6.eq) goto loc_82499144;
	// cmpwi cr6,r30,60
	cr6.compare<int32_t>(r30.s32, 60, xer);
	// beq cr6,0x82499144
	if (cr6.eq) goto loc_82499144;
	// cmpwi cr6,r30,76
	cr6.compare<int32_t>(r30.s32, 76, xer);
	// beq cr6,0x82499144
	if (cr6.eq) goto loc_82499144;
	// cmpwi cr6,r30,81
	cr6.compare<int32_t>(r30.s32, 81, xer);
	// beq cr6,0x82499138
	if (cr6.eq) goto loc_82499138;
	// cmpwi cr6,r30,85
	cr6.compare<int32_t>(r30.s32, 85, xer);
	// beq cr6,0x82499138
	if (cr6.eq) goto loc_82499138;
	// cmpwi cr6,r30,37
	cr6.compare<int32_t>(r30.s32, 37, xer);
	// beq cr6,0x82499104
	if (cr6.eq) goto loc_82499104;
	// cmpwi cr6,r30,38
	cr6.compare<int32_t>(r30.s32, 38, xer);
	// bne cr6,0x82499144
	if (!cr6.eq) goto loc_82499144;
loc_82499104:
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249911c
	if (!cr6.eq) goto loc_8249911C;
	// li r11,0
	r11.s64 = 0;
	// b 0x8249912c
	goto loc_8249912C;
loc_8249911C:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// mr r11,r25
	r11.u64 = r25.u64;
	// beq cr6,0x8249912c
	if (cr6.eq) goto loc_8249912C;
	// rlwinm r11,r19,10,31,31
	r11.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 10) & 0x1;
loc_8249912C:
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// b 0x8249914c
	goto loc_8249914C;
loc_82499138:
	// rlwimi r30,r25,17,0,15
	r30.u64 = (__builtin_rotateleft32(r25.u32, 17) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// b 0x8249914c
	goto loc_8249914C;
loc_82499144:
	// clrlwi r11,r30,16
	r11.u64 = r30.u32 & 0xFFFF;
loc_82499148:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8249914C:
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499174
	if (!cr0.eq) goto loc_82499174;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499174:
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// rlwinm r11,r30,0,18,18
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x824991a4
	if (!cr6.eq) goto loc_824991A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249919c
	if (!cr0.eq) goto loc_8249919C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249919C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_824991A4:
	// cmplwi cr6,r24,7
	cr6.compare<uint32_t>(r24.u32, 7, xer);
	// beq cr6,0x824991cc
	if (cr6.eq) goto loc_824991CC;
	// cmplwi cr6,r24,15
	cr6.compare<uint32_t>(r24.u32, 15, xer);
	// beq cr6,0x824991cc
	if (cr6.eq) goto loc_824991CC;
	// cmplwi cr6,r24,32
	cr6.compare<uint32_t>(r24.u32, 32, xer);
	// beq cr6,0x824991cc
	if (cr6.eq) goto loc_824991CC;
	// cmplwi cr6,r24,37
	cr6.compare<uint32_t>(r24.u32, 37, xer);
	// beq cr6,0x82499264
	if (cr6.eq) goto loc_82499264;
	// cmplwi cr6,r24,79
	cr6.compare<uint32_t>(r24.u32, 79, xer);
	// bne cr6,0x82499240
	if (!cr6.eq) goto loc_82499240;
loc_824991CC:
	// rlwinm r11,r30,0,4,7
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF000000;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824992b0
	if (cr6.eq) goto loc_824992B0;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x824992a8
	if (cr6.eq) goto loc_824992A8;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8249929c
	if (cr6.eq) goto loc_8249929C;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82499290
	if (cr6.eq) goto loc_82499290;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x824992b4
	if (!cr6.eq) goto loc_824992B4;
	// li r11,11
	r11.s64 = 11;
	// b 0x82499294
	goto loc_82499294;
loc_82499214:
	// rlwinm r11,r30,0,18,18
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x82499240
	if (!cr6.eq) goto loc_82499240;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499238
	if (!cr0.eq) goto loc_82499238;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499238:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82499240:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499214
	if (!cr0.eq) goto loc_82499214;
	// b 0x82499334
	goto loc_82499334;
loc_82499264:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// b 0x82499280
	goto loc_82499280;
loc_8249927C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82499280:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249927c
	if (!cr0.eq) goto loc_8249927C;
	// b 0x82499334
	goto loc_82499334;
loc_82499290:
	// li r11,7
	r11.s64 = 7;
loc_82499294:
	// rlwimi r30,r11,24,4,7
	r30.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xF000000) | (r30.u64 & 0xFFFFFFFFF0FFFFFF);
	// b 0x824992b4
	goto loc_824992B4;
loc_8249929C:
	// rlwinm r11,r30,0,8,6
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// oris r30,r11,1024
	r30.u64 = r11.u64 | 67108864;
	// b 0x824992b4
	goto loc_824992B4;
loc_824992A8:
	// rlwimi r30,r25,25,6,7
	r30.u64 = (__builtin_rotateleft32(r25.u32, 25) & 0x3000000) | (r30.u64 & 0xFFFFFFFFFCFFFFFF);
	// b 0x824992b4
	goto loc_824992B4;
loc_824992B0:
	// rlwinm r30,r30,0,8,6
	r30.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_824992B4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// cmplwi cr6,r24,32
	cr6.compare<uint32_t>(r24.u32, 32, xer);
	// bne cr6,0x82499324
	if (!cr6.eq) goto loc_82499324;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x824992e0
	if (!cr0.eq) goto loc_824992E0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824992E0:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm r11,r30,0,18,18
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x82499310
	if (!cr6.eq) goto loc_82499310;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499308
	if (!cr0.eq) goto loc_82499308;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499308:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82499310:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
loc_82499324:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82499334
	if (cr0.eq) goto loc_82499334;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499334:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// beq cr6,0x82499354
	if (cr6.eq) goto loc_82499354;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82498c08
	sub_82498C08(ctx, base);
loc_82499354:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// beq cr6,0x824993a8
	if (cr6.eq) goto loc_824993A8;
	// cmplw cr6,r22,r23
	cr6.compare<uint32_t>(r22.u32, r23.u32, xer);
	// blt cr6,0x82499368
	if (cr6.lt) goto loc_82499368;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499368:
	// lwz r11,428(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 428);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82498b30
	sub_82498B30(ctx, base);
	// lwz r11,428(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 428);
	// lwz r10,424(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 424);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,428(r26)
	PPC_STORE_U32(r26.u32 + 428, r11.u32);
	// ble cr6,0x824993a8
	if (!cr6.gt) goto loc_824993A8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824993A8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r11.u32);
	// stw r31,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_824993BC"))) PPC_WEAK_FUNC(sub_824993BC);
PPC_FUNC_IMPL(__imp__sub_824993BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824993C0"))) PPC_WEAK_FUNC(sub_824993C0);
PPC_FUNC_IMPL(__imp__sub_824993C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	r11.s64 = -65536;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x824993f4
	if (!cr6.lt) goto loc_824993F4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824993F4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r27,1
	r27.s64 = 1;
	// lwz r31,0(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r26,r11,4
	r26.s64 = r11.s64 + 4;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// bne cr6,0x82499430
	if (!cr6.eq) goto loc_82499430;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8249942c
	if (!cr6.eq) goto loc_8249942C;
	// li r28,43
	r28.s64 = 43;
	// stw r27,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r27.u32);
	// b 0x8249943c
	goto loc_8249943C;
loc_8249942C:
	// li r28,83
	r28.s64 = 83;
loc_82499430:
	// cmplwi cr6,r10,96
	cr6.compare<uint32_t>(ctx.r10.u32, 96, xer);
	// bgt cr6,0x82499888
	if (cr6.gt) goto loc_82499888;
	// beq cr6,0x82499848
	if (cr6.eq) goto loc_82499848;
loc_8249943C:
	// addi r11,r10,-25
	r11.s64 = ctx.r10.s64 + -25;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// bgt cr6,0x82499888
	if (cr6.gt) goto loc_82499888;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,19552
	r12.s64 = r12.s64 + 19552;
	// rlwinm r0,r11,1,0,30
	r0.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32182
	r12.s64 = -2109079552;
	// addi r12,r12,-27536
	r12.s64 = r12.s64 + -27536;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_82499470;
	case 1:
		goto loc_824994D8;
	case 2:
		goto loc_824996B0;
	case 3:
		goto loc_824996A0;
	case 4:
		goto loc_824996A0;
	case 5:
		goto loc_8249973C;
	case 6:
		goto loc_82499888;
	case 7:
		goto loc_82499888;
	case 8:
		goto loc_82499888;
	case 9:
		goto loc_82499888;
	case 10:
		goto loc_82499888;
	case 11:
		goto loc_82499888;
	case 12:
		goto loc_82499888;
	case 13:
		goto loc_824996DC;
	case 14:
		goto loc_824996A0;
	case 15:
		goto loc_824997A0;
	case 16:
		goto loc_82499888;
	case 17:
		goto loc_82499608;
	case 18:
		goto loc_82499658;
	case 19:
		goto loc_824996A0;
	default:
		__builtin_unreachable();
	}
loc_82499470:
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// clrlwi r31,r11,21
	r31.u64 = r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(r11.u32, 4608, xer);
	// beq cr6,0x824994a0
	if (cr6.eq) goto loc_824994A0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824994A0:
	// cmplwi cr6,r31,2048
	cr6.compare<uint32_t>(r31.u32, 2048, xer);
	// blt cr6,0x824994ac
	if (cr6.lt) goto loc_824994AC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824994AC:
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// blt cr6,0x824994c8
	if (cr6.lt) goto loc_824994C8;
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x824994c8
	if (!cr6.lt) goto loc_824994C8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824994C8:
	// clrlwi r11,r31,16
	r11.u64 = r31.u32 & 0xFFFF;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8249988c
	goto loc_8249988C;
loc_824994D8:
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r11,4
	r26.s64 = r11.s64 + 4;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r11,r29
	r11.u64 = r29.u64;
	// rlwimi r11,r29,12,21,23
	r11.u64 = (__builtin_rotateleft32(r29.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r27,r11,24,27,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r27,14
	cr6.compare<uint32_t>(r27.u32, 14, xer);
	// beq cr6,0x82499508
	if (cr6.eq) goto loc_82499508;
	// cmplwi cr6,r27,19
	cr6.compare<uint32_t>(r27.u32, 19, xer);
	// beq cr6,0x82499508
	if (cr6.eq) goto loc_82499508;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499508:
	// rlwinm r11,r29,0,18,18
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x82499518
	if (!cr6.eq) goto loc_82499518;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499518:
	// mr r11,r28
	r11.u64 = r28.u64;
	// clrlwi r30,r28,21
	r30.u64 = r28.u32 & 0x7FF;
	// rlwimi r11,r28,12,21,23
	r11.u64 = (__builtin_rotateleft32(r28.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(r11.u32, 4608, xer);
	// beq cr6,0x82499534
	if (cr6.eq) goto loc_82499534;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499534:
	// cmplwi cr6,r30,2048
	cr6.compare<uint32_t>(r30.u32, 2048, xer);
	// blt cr6,0x82499540
	if (cr6.lt) goto loc_82499540;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499540:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// blt cr6,0x8249955c
	if (cr6.lt) goto loc_8249955C;
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x8249955c
	if (!cr6.lt) goto loc_8249955C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249955C:
	// cmplwi cr6,r27,19
	cr6.compare<uint32_t>(r27.u32, 19, xer);
	// bne cr6,0x82499590
	if (!cr6.eq) goto loc_82499590;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824982d0
	sub_824982D0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// li r8,41
	ctx.r8.s64 = 41;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x824995f4
	goto loc_824995F4;
loc_82499590:
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// rlwinm r10,r29,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF000000;
	// clrlwi r11,r29,21
	r11.u64 = r29.u32 & 0x7FF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// bne cr6,0x824995e8
	if (!cr6.eq) goto loc_824995E8;
	// li r10,53
	ctx.r10.s64 = 53;
	// li r8,39
	ctx.r8.s64 = 39;
	// li r7,8
	ctx.r7.s64 = 8;
	// clrlwi r6,r30,16
	ctx.r6.u64 = r30.u32 & 0xFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r10,41
	ctx.r10.s64 = 41;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82499798
	goto loc_82499798;
loc_824995E8:
	// li r10,9
	ctx.r10.s64 = 9;
	// clrlwi r8,r30,16
	ctx.r8.u64 = r30.u32 & 0xFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_824995F4:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_82499600:
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// b 0x8249988c
	goto loc_8249988C;
loc_82499608:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82499618
	if (!cr6.eq) goto loc_82499618;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499618:
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x824984e8
	sub_824984E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824996a0
	if (cr0.eq) goto loc_824996A0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x824996a0
	if (cr6.eq) goto loc_824996A0;
	// li r11,41
	r11.s64 = 41;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lhz r10,6(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// b 0x82499798
	goto loc_82499798;
loc_82499658:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82499668
	if (!cr6.eq) goto loc_82499668;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499668:
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x824984e8
	sub_824984E8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82499694
	if (cr0.eq) goto loc_82499694;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82499694
	if (cr6.eq) goto loc_82499694;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
loc_82499694:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
loc_824996A0:
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x8249988c
	goto loc_8249988C;
loc_824996B0:
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwimi r11,r30,12,21,23
	r11.u64 = (__builtin_rotateleft32(r30.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	cr6.compare<uint32_t>(r11.u32, 3840, xer);
	// beq cr6,0x824996d0
	if (cr6.eq) goto loc_824996D0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824996D0:
	// clrlwi. r11,r30,21
	r11.u64 = r30.u32 & 0x7FF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x824996dc
	if (cr0.eq) goto loc_824996DC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824996DC:
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwimi r11,r30,12,21,23
	r11.u64 = (__builtin_rotateleft32(r30.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	cr6.compare<uint32_t>(r11.u32, 1792, xer);
	// beq cr6,0x824996fc
	if (cr6.eq) goto loc_824996FC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824996FC:
	// clrlwi r11,r30,21
	r11.u64 = r30.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x8249970c
	if (cr6.lt) goto loc_8249970C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249970C:
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824989a8
	sub_824989A8(ctx, base);
loc_82499734:
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8249988c
	goto loc_8249988C;
loc_8249973C:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// clrlwi r30,r11,21
	r30.u64 = r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	cr6.compare<uint32_t>(r11.u32, 4608, xer);
	// beq cr6,0x82499760
	if (cr6.eq) goto loc_82499760;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499760:
	// cmplwi cr6,r30,2048
	cr6.compare<uint32_t>(r30.u32, 2048, xer);
	// blt cr6,0x8249976c
	if (cr6.lt) goto loc_8249976C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249976C:
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// blt cr6,0x82499788
	if (cr6.lt) goto loc_82499788;
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x82499788
	if (!cr6.lt) goto loc_82499788;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499788:
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// clrlwi r10,r30,16
	ctx.r10.u64 = r30.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82499798:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x82499600
	goto loc_82499600;
loc_824997A0:
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r11.u32);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// rlwinm r11,r30,0,18,18
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x824997c4
	if (!cr6.eq) goto loc_824997C4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824997C4:
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwimi r11,r30,12,21,23
	r11.u64 = (__builtin_rotateleft32(r30.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r28,r11,24,27,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r28,14
	cr6.compare<uint32_t>(r28.u32, 14, xer);
	// beq cr6,0x824997e4
	if (cr6.eq) goto loc_824997E4;
	// cmplwi cr6,r28,19
	cr6.compare<uint32_t>(r28.u32, 19, xer);
	// beq cr6,0x824997ec
	if (cr6.eq) goto loc_824997EC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_824997E4:
	// cmplwi cr6,r28,19
	cr6.compare<uint32_t>(r28.u32, 19, xer);
	// bne cr6,0x824997f8
	if (!cr6.eq) goto loc_824997F8;
loc_824997EC:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x8249987c
	goto loc_8249987C;
loc_824997F8:
	// li r11,53
	r11.s64 = 53;
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r28,r30,21
	r28.u64 = r30.u32 & 0x7FF;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8249988c
	if (!cr6.eq) goto loc_8249988C;
	// li r11,39
	r11.s64 = 39;
	// addi r3,r29,12
	ctx.r3.s64 = r29.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x82498690
	sub_82498690(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r28.u32);
	// b 0x8249988c
	goto loc_8249988C;
loc_82499848:
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// mr r11,r31
	r11.u64 = r31.u64;
	// rlwimi r11,r31,12,21,23
	r11.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	cr6.compare<uint32_t>(r11.u32, 4864, xer);
	// beq cr6,0x82499868
	if (cr6.eq) goto loc_82499868;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499868:
	// clrlwi. r11,r31,21
	r11.u64 = r31.u32 & 0x7FF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82499874
	if (cr0.eq) goto loc_82499874;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499874:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249987C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x824982d0
	sub_824982D0(ctx, base);
	// b 0x82499734
	goto loc_82499734;
loc_82499888:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249988C:
	// stw r26,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r26.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8249989C"))) PPC_WEAK_FUNC(sub_8249989C);
PPC_FUNC_IMPL(__imp__sub_8249989C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824998A0"))) PPC_WEAK_FUNC(sub_824998A0);
PPC_FUNC_IMPL(__imp__sub_824998A0) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// clrlwi r31,r30,16
	r31.u64 = r30.u32 & 0xFFFF;
	// lwz r29,0(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r27,1
	r27.s64 = 1;
	// lwz r28,0(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// clrlwi r11,r11,29
	r11.u64 = r11.u32 & 0x7;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82499934
	if (cr6.eq) goto loc_82499934;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8249992c
	if (cr6.eq) goto loc_8249992C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82499924
	if (cr6.eq) goto loc_82499924;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8249991c
	if (cr6.eq) goto loc_8249991C;
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// beq cr6,0x82499914
	if (cr6.eq) goto loc_82499914;
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x8249990c
	if (cr6.eq) goto loc_8249990C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x8249993c
	goto loc_8249993C;
loc_8249990C:
	// rlwimi r31,r27,18,13,15
	r31.u64 = (__builtin_rotateleft32(r27.u32, 18) & 0x70000) | (r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x8249993c
	goto loc_8249993C;
loc_82499914:
	// rlwinm r31,r31,0,16,12
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// b 0x8249993c
	goto loc_8249993C;
loc_8249991C:
	// li r11,5
	r11.s64 = 5;
	// b 0x82499938
	goto loc_82499938;
loc_82499924:
	// rlwimi r31,r27,17,13,15
	r31.u64 = (__builtin_rotateleft32(r27.u32, 17) & 0x70000) | (r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x8249993c
	goto loc_8249993C;
loc_8249992C:
	// rlwimi r31,r27,16,13,15
	r31.u64 = (__builtin_rotateleft32(r27.u32, 16) & 0x70000) | (r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x8249993c
	goto loc_8249993C;
loc_82499934:
	// li r11,3
	r11.s64 = 3;
loc_82499938:
	// rlwimi r31,r11,16,13,15
	r31.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x70000) | (r31.u64 & 0xFFFFFFFFFFF8FFFF);
loc_8249993C:
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r31,r28,4
	r31.s64 = r28.s64 + 4;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpwi cr6,r30,86
	cr6.compare<int32_t>(r30.s32, 86, xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bne cr6,0x824999ec
	if (!cr6.eq) goto loc_824999EC;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwimi r11,r30,12,21,23
	r11.u64 = (__builtin_rotateleft32(r30.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	cr6.compare<uint32_t>(r11.u32, 4864, xer);
	// beq cr6,0x82499974
	if (cr6.eq) goto loc_82499974;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499974:
	// rlwinm r10,r30,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF0000;
	// lis r11,15
	r11.s64 = 983040;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82499998
	if (!cr6.eq) goto loc_82499998;
	// lis r11,4
	r11.s64 = 262144;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// b 0x824999e4
	goto loc_824999E4;
loc_82499998:
	// lis r11,68
	r11.s64 = 4456448;
	// rlwinm. r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// ori r9,r11,32
	ctx.r9.u64 = r11.u64 | 32;
	// li r11,0
	r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// beq 0x824999b8
	if (cr0.eq) goto loc_824999B8;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_824999B8:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x824999c4
	if (cr0.eq) goto loc_824999C4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_824999C4:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x824999d0
	if (cr0.eq) goto loc_824999D0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_824999D0:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824999dc
	if (cr0.eq) goto loc_824999DC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_824999DC:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r31,r9,4
	r31.s64 = ctx.r9.s64 + 4;
loc_824999E4:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// b 0x82499a00
	goto loc_82499A00;
loc_824999EC:
	// cmpwi cr6,r30,52
	cr6.compare<int32_t>(r30.s32, 52, xer);
	// bne cr6,0x82499a00
	if (!cr6.eq) goto loc_82499A00;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r26)
	PPC_STORE_U32(r26.u32 + 24, r11.u32);
loc_82499A00:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82499a5c
	if (cr0.eq) goto loc_82499A5C;
loc_82499A0C:
	// rlwinm r11,r30,0,18,18
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x2000;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x82499a38
	if (!cr6.eq) goto loc_82499A38;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499a30
	if (!cr0.eq) goto loc_82499A30;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499A30:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_82499A38:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499a0c
	if (!cr0.eq) goto loc_82499A0C;
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82499A5C:
	// stw r29,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r29.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82499A6C"))) PPC_WEAK_FUNC(sub_82499A6C);
PPC_FUNC_IMPL(__imp__sub_82499A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499A70"))) PPC_WEAK_FUNC(sub_82499A70);
PPC_FUNC_IMPL(__imp__sub_82499A70) {
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
	// lis r11,-1
	r11.s64 = -65536;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82499aa0
	if (cr6.lt) goto loc_82499AA0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499AA0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r30,0(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// ori r10,r10,259
	ctx.r10.u64 = ctx.r10.u64 | 259;
	// addi r26,r11,4
	r26.s64 = r11.s64 + 4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r28,r31,21
	r28.u64 = r31.u32 & 0x7FF;
	// bgt cr6,0x82499b54
	if (cr6.gt) goto loc_82499B54;
	// rlwinm r11,r31,0,12,15
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xF0000;
	// li r29,256
	r29.s64 = 256;
	// rlwinm. r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82499adc
	if (cr0.eq) goto loc_82499ADC;
	// li r29,257
	r29.s64 = 257;
loc_82499ADC:
	// rlwinm. r10,r11,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82499ae8
	if (cr0.eq) goto loc_82499AE8;
	// ori r29,r29,4
	r29.u64 = r29.u64 | 4;
loc_82499AE8:
	// rlwinm. r11,r11,0,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82499af4
	if (cr0.eq) goto loc_82499AF4;
	// ori r29,r29,16
	r29.u64 = r29.u64 | 16;
loc_82499AF4:
	// rlwinm r3,r31,8,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 8) & 0xF;
	// bl 0x82498030
	sub_82498030(ctx, base);
	// mr r11,r31
	r11.u64 = r31.u64;
	// or r10,r3,r29
	ctx.r10.u64 = ctx.r3.u64 | r29.u64;
	// rlwimi r11,r31,12,21,23
	r11.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// ori r31,r10,192
	r31.u64 = ctx.r10.u64 | 192;
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// beq cr6,0x82499b1c
	if (cr6.eq) goto loc_82499B1C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499B1C:
	// li r10,71
	ctx.r10.s64 = 71;
	// clrlwi r11,r28,16
	r11.u64 = r28.u32 & 0xFFFF;
	// oris r9,r11,81
	ctx.r9.u64 = r11.u64 | 5308416;
	// oris r8,r11,17
	ctx.r8.u64 = r11.u64 | 1114112;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82499bc0
	goto loc_82499BC0;
loc_82499B54:
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// mr r11,r28
	r11.u64 = r28.u64;
	// rlwimi r11,r28,12,21,23
	r11.u64 = (__builtin_rotateleft32(r28.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// beq cr6,0x82499b74
	if (cr6.eq) goto loc_82499B74;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499B74:
	// li r11,71
	r11.s64 = 71;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82499bc0
	if (cr6.eq) goto loc_82499BC0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499BC0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r26,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82499BD4"))) PPC_WEAK_FUNC(sub_82499BD4);
PPC_FUNC_IMPL(__imp__sub_82499BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499BD8"))) PPC_WEAK_FUNC(sub_82499BD8);
PPC_FUNC_IMPL(__imp__sub_82499BD8) {
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
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r31,0(r22)
	r31.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r27,r10,0,3,3
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499c18
	if (!cr0.eq) goto loc_82499C18;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499C18:
	// lis r11,-1
	r11.s64 = -65536;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r24,r30,4
	r24.s64 = r30.s64 + 4;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ori r30,r11,512
	r30.u64 = r11.u64 | 512;
	// beq cr6,0x82499c58
	if (cr6.eq) goto loc_82499C58;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499c40
	if (!cr0.eq) goto loc_82499C40;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499C40:
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// bge cr6,0x82499c4c
	if (!cr6.lt) goto loc_82499C4C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499C4C:
	// lwz r25,0(r24)
	r25.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r24,r24,4
	r24.s64 = r24.s64 + 4;
	// b 0x82499c5c
	goto loc_82499C5C;
loc_82499C58:
	// lwz r25,80(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82499C5C:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,259
	r11.u64 = r11.u64 | 259;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// bgt cr6,0x82499c78
	if (cr6.gt) goto loc_82499C78;
	// clrlwi r3,r29,21
	ctx.r3.u64 = r29.u32 & 0x7FF;
	// li r7,17
	ctx.r7.s64 = 17;
	// b 0x82499c8c
	goto loc_82499C8C;
loc_82499C78:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82498728
	sub_82498728(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82499C8C:
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// bge cr6,0x82499cc4
	if (!cr6.lt) goto loc_82499CC4;
	// li r11,55
	r11.s64 = 55;
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r7,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r8,21008
	ctx.r8.s64 = 21008;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x82499de0
	goto loc_82499DE0;
loc_82499CC4:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82499dc8
	if (cr6.eq) goto loc_82499DC8;
	// lis r11,1
	r11.s64 = 65536;
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r10,r11,13
	ctx.r10.u64 = r11.u64 | 13;
	// ori r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 | 33;
	// rlwinm r11,r25,0,8,15
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x82499d5c
	if (cr6.eq) goto loc_82499D5C;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-2144
	r11.s64 = r11.s64 + -2144;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r6,r10,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + r11.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r6,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r6,r11,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r8
	r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r6,r11
	r11.u64 = ctx.r6.u64 | r11.u64;
	// b 0x82499d64
	goto loc_82499D64;
loc_82499D5C:
	// lis r11,4
	r11.s64 = 262144;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_82499D64:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// rlwinm r10,r25,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// rlwimi r3,r7,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r9,21845
	ctx.r9.s64 = 21845;
	// bne cr6,0x82499da4
	if (!cr6.eq) goto loc_82499DA4;
	// clrlwi r8,r3,10
	ctx.r8.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x82499dbc
	goto loc_82499DBC;
loc_82499DA4:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82499DBC:
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// li r3,33
	ctx.r3.s64 = 33;
	// li r7,4
	ctx.r7.s64 = 4;
loc_82499DC8:
	// li r11,55
	r11.s64 = 55;
	// rlwimi r3,r7,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82499DE0:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82499DF4"))) PPC_WEAK_FUNC(sub_82499DF4);
PPC_FUNC_IMPL(__imp__sub_82499DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82499DF8"))) PPC_WEAK_FUNC(sub_82499DF8);
PPC_FUNC_IMPL(__imp__sub_82499DF8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// lwz r20,0(r7)
	r20.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// lwz r11,0(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r15,r10,0,3,3
	r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499e38
	if (!cr0.eq) goto loc_82499E38;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499E38:
	// lwz r24,0(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r21,r31,4
	r21.s64 = r31.s64 + 4;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r16,r24
	r16.u64 = r24.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82499e58
	if (!cr6.eq) goto loc_82499E58;
	// li r29,0
	r29.s64 = 0;
	// b 0x82499e68
	goto loc_82499E68;
loc_82499E58:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// li r29,1
	r29.s64 = 1;
	// beq cr6,0x82499e68
	if (cr6.eq) goto loc_82499E68;
	// rlwinm r29,r24,10,31,31
	r29.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 10) & 0x1;
loc_82499E68:
	// lis r11,-1
	r11.s64 = -65536;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// ori r22,r11,512
	r22.u64 = r11.u64 | 512;
	// lis r11,15
	r11.s64 = 983040;
	// ori r19,r11,33
	r19.u64 = r11.u64 | 33;
	// beq cr6,0x82499eb8
	if (cr6.eq) goto loc_82499EB8;
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499e90
	if (!cr0.eq) goto loc_82499E90;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499E90:
	// cmplw cr6,r18,r22
	cr6.compare<uint32_t>(r18.u32, r22.u32, xer);
	// bge cr6,0x82499e9c
	if (!cr6.lt) goto loc_82499E9C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499E9C:
	// lis r12,-28673
	r12.s64 = -1879113728;
	// lwz r17,0(r21)
	r17.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// ori r12,r12,57377
	r12.u64 = r12.u64 | 57377;
	// and r11,r24,r12
	r11.u64 = r24.u64 & r12.u64;
	// or r24,r11,r19
	r24.u64 = r11.u64 | r19.u64;
	// b 0x82499ebc
	goto loc_82499EBC;
loc_82499EB8:
	// lwz r17,80(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82499EBC:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// mr r25,r26
	r25.u64 = r26.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82499f50
	if (cr0.eq) goto loc_82499F50;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_82499EDC:
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(r28.u32, 2, xer);
	// blt cr6,0x82499ee8
	if (cr6.lt) goto loc_82499EE8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499EE8:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// stwx r10,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r26,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, r26.u32);
	// rlwinm r11,r11,0,18,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// bne cr6,0x82499f38
	if (!cr6.eq) goto loc_82499F38;
	// cmplw cr6,r18,r22
	cr6.compare<uint32_t>(r18.u32, r22.u32, xer);
	// bgt cr6,0x82499f1c
	if (cr6.gt) goto loc_82499F1C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499F1C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499f2c
	if (!cr0.eq) goto loc_82499F2C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499F2C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, r11.u32);
loc_82499F38:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82499edc
	if (!cr0.eq) goto loc_82499EDC;
	// lwz r25,80(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82499F50:
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(r28.u32, 2, xer);
	// blt cr6,0x82499f7c
	if (cr6.lt) goto loc_82499F7C;
	// cmplw cr6,r18,r22
	cr6.compare<uint32_t>(r18.u32, r22.u32, xer);
	// bge cr6,0x82499f68
	if (!cr6.lt) goto loc_82499F68;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499F68:
	// lwz r11,0(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// clrlwi r31,r30,21
	r31.u64 = r30.u32 & 0x7FF;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r26,r11,0,8,15
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFF0000;
	// b 0x82499f80
	goto loc_82499F80;
loc_82499F7C:
	// clrlwi r31,r16,21
	r31.u64 = r16.u32 & 0x7FF;
loc_82499F80:
	// mr r11,r31
	r11.u64 = r31.u64;
	// rlwinm. r27,r26,0,14,14
	r27.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// rlwimi r11,r29,8,23,23
	r11.u64 = (__builtin_rotateleft32(r29.u32, 8) & 0x100) | (r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// beq 0x82499f9c
	if (cr0.eq) goto loc_82499F9C;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// b 0x82499fa0
	goto loc_82499FA0;
loc_82499F9C:
	// ori r10,r10,93
	ctx.r10.u64 = ctx.r10.u64 | 93;
loc_82499FA0:
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// addi r11,r20,4
	r11.s64 = r20.s64 + 4;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stw r10,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne cr6,0x8249a014
	if (!cr6.eq) goto loc_8249A014;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82499fc4
	if (cr6.eq) goto loc_82499FC4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499FC4:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// blt cr6,0x82499fd8
	if (cr6.lt) goto loc_82499FD8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_82499FD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// li r11,81
	r11.s64 = 81;
	// lis r10,128
	ctx.r10.s64 = 8388608;
	// rlwimi r31,r11,16,0,15
	r31.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (r31.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ori r10,r10,12816
	ctx.r10.u64 = ctx.r10.u64 | 12816;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x8249a168
	goto loc_8249A168;
loc_8249A014:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bne cr6,0x8249a068
	if (!cr6.eq) goto loc_8249A068;
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// beq cr6,0x8249a030
	if (cr6.eq) goto loc_8249A030;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A030:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8249a03c
	if (cr6.eq) goto loc_8249A03C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A03C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// b 0x8249a168
	goto loc_8249A168;
loc_8249A068:
	// rlwinm r29,r30,0,8,15
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0000;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(r28.u32, 2, xer);
	// beq cr6,0x8249a07c
	if (cr6.eq) goto loc_8249A07C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A07C:
	// cmplw cr6,r18,r22
	cr6.compare<uint32_t>(r18.u32, r22.u32, xer);
	// bge cr6,0x8249a088
	if (!cr6.lt) goto loc_8249A088;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A088:
	// lis r28,228
	r28.s64 = 14942208;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// beq cr6,0x8249a0b0
	if (cr6.eq) goto loc_8249A0B0;
	// oris r24,r24,15
	r24.u64 = r24.u64 | 983040;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// bne cr6,0x8249a0b0
	if (!cr6.eq) goto loc_8249A0B0;
	// lis r12,-28673
	r12.s64 = -1879113728;
	// ori r12,r12,57377
	r12.u64 = r12.u64 | 57377;
	// and r11,r24,r12
	r11.u64 = r24.u64 & r12.u64;
	// or r24,r11,r19
	r24.u64 = r11.u64 | r19.u64;
loc_8249A0B0:
	// rlwinm. r11,r26,0,15,15
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249a0bc
	if (cr0.eq) goto loc_8249A0BC;
	// lis r30,96
	r30.s64 = 6291456;
loc_8249A0BC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// lwz r31,88(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x8249a124
	if (cr6.eq) goto loc_8249A124;
	// andis. r11,r31,2816
	r11.u64 = r31.u64 & 184549376;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8249a100
	if (cr0.eq) goto loc_8249A100;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A100:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8249a10c
	if (cr6.eq) goto loc_8249A10C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A10C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
loc_8249A124:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// beq cr6,0x8249a148
	if (cr6.eq) goto loc_8249A148;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82498c08
	sub_82498C08(ctx, base);
	// b 0x8249a168
	goto loc_8249A168;
loc_8249A148:
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// beq cr6,0x8249a168
	if (cr6.eq) goto loc_8249A168;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// bl 0x82498df8
	sub_82498DF8(ctx, base);
loc_8249A168:
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r21,0(r14)
	PPC_STORE_U32(r14.u32 + 0, r21.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8249A180"))) PPC_WEAK_FUNC(sub_8249A180);
PPC_FUNC_IMPL(__imp__sub_8249A180) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc8
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// lwz r11,4(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249a1b0
	if (!cr6.eq) goto loc_8249A1B0;
	// li r20,0
	r20.s64 = 0;
	// b 0x8249a1bc
	goto loc_8249A1BC;
loc_8249A1B0:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r20,r11,27,31,31
	r20.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8249A1BC:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r30,r11,512
	r30.u64 = r11.u64 | 512;
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bge cr6,0x8249a1d0
	if (!cr6.lt) goto loc_8249A1D0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A1D0:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r26,0(r16)
	r26.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r21,r10,0,3,3
	r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000000;
	// clrlwi r23,r10,16
	r23.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249a1f8
	if (!cr0.eq) goto loc_8249A1F8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A1F8:
	// lwz r27,0(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,15
	r11.s64 = 983040;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r18,r27
	r18.u64 = r27.u64;
	// ori r24,r11,33
	r24.u64 = r11.u64 | 33;
	// beq cr6,0x8249a24c
	if (cr6.eq) goto loc_8249A24C;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249a224
	if (!cr0.eq) goto loc_8249A224;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A224:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bgt cr6,0x8249a230
	if (cr6.gt) goto loc_8249A230;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A230:
	// lis r12,-28673
	r12.s64 = -1879113728;
	// lwz r19,0(r29)
	r19.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// ori r12,r12,57377
	r12.u64 = r12.u64 | 57377;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// or r27,r11,r24
	r27.u64 = r11.u64 | r24.u64;
	// b 0x8249a250
	goto loc_8249A250;
loc_8249A24C:
	// lwz r19,80(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8249A250:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249a2c8
	if (cr0.eq) goto loc_8249A2C8;
	// li r31,0
	r31.s64 = 0;
loc_8249A264:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	r30.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stwx r11,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,0,18,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	cr6.compare<uint32_t>(r11.u32, 8192, xer);
	// stwx r10,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, ctx.r10.u32);
	// bne cr6,0x8249a2a8
	if (!cr6.eq) goto loc_8249A2A8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249a29c
	if (!cr0.eq) goto loc_8249A29C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A29C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, r11.u32);
loc_8249A2A8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249a264
	if (!cr0.eq) goto loc_8249A264;
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(r25.u32, 4, xer);
	// ble cr6,0x8249a2c8
	if (!cr6.gt) goto loc_8249A2C8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A2C8:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r23,95
	cr6.compare<uint32_t>(r23.u32, 95, xer);
	// clrlwi r11,r10,21
	r11.u64 = ctx.r10.u32 & 0x7FF;
	// rlwimi r11,r20,8,23,23
	r11.u64 = (__builtin_rotateleft32(r20.u32, 8) & 0x100) | (r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// bne cr6,0x8249a2e8
	if (!cr6.eq) goto loc_8249A2E8;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// ori r9,r9,94
	ctx.r9.u64 = ctx.r9.u64 | 94;
	// b 0x8249a2f0
	goto loc_8249A2F0;
loc_8249A2E8:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,95
	ctx.r9.u64 = ctx.r9.u64 | 95;
loc_8249A2F0:
	// rlwimi r9,r11,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
	// rlwinm r28,r10,0,8,15
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
	// lis r26,228
	r26.s64 = 14942208;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// beq cr6,0x8249a32c
	if (cr6.eq) goto loc_8249A32C;
	// oris r27,r27,15
	r27.u64 = r27.u64 | 983040;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// bne cr6,0x8249a32c
	if (!cr6.eq) goto loc_8249A32C;
	// lis r12,-28673
	r12.s64 = -1879113728;
	// ori r12,r12,57377
	r12.u64 = r12.u64 | 57377;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// or r27,r11,r24
	r27.u64 = r11.u64 | r24.u64;
loc_8249A32C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// lwz r30,112(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,96(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// cmplwi cr6,r23,95
	cr6.compare<uint32_t>(r23.u32, 95, xer);
	// bne cr6,0x8249a380
	if (!cr6.eq) goto loc_8249A380;
	// andis. r11,r31,2816
	r11.u64 = r31.u64 & 184549376;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8249a374
	if (cr0.eq) goto loc_8249A374;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A374:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x8249a3ac
	goto loc_8249A3AC;
loc_8249A380:
	// cmplwi cr6,r25,4
	cr6.compare<uint32_t>(r25.u32, 4, xer);
	// beq cr6,0x8249a38c
	if (cr6.eq) goto loc_8249A38C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A38C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_8249A3AC:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x8249a3e0
	if (cr6.eq) goto loc_8249A3E0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82498c08
	sub_82498C08(ctx, base);
	// b 0x8249a400
	goto loc_8249A400;
loc_8249A3E0:
	// cmplw cr6,r28,r26
	cr6.compare<uint32_t>(r28.u32, r26.u32, xer);
	// beq cr6,0x8249a400
	if (cr6.eq) goto loc_8249A400;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x82498df8
	sub_82498DF8(ctx, base);
loc_8249A400:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r11.u32);
	// stw r29,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_8249A414"))) PPC_WEAK_FUNC(sub_8249A414);
PPC_FUNC_IMPL(__imp__sub_8249A414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249A418"))) PPC_WEAK_FUNC(sub_8249A418);
PPC_FUNC_IMPL(__imp__sub_8249A418) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r14,r3
	r14.u64 = ctx.r3.u64;
	// li r18,0
	r18.s64 = 0;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// stw r31,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r31.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249a44c
	if (!cr6.eq) goto loc_8249A44C;
	// mr r17,r18
	r17.u64 = r18.u64;
	// b 0x8249a458
	goto loc_8249A458;
loc_8249A44C:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r17,r11,27,31,31
	r17.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8249A458:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x8249a46c
	if (cr6.lt) goto loc_8249A46C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A46C:
	// lwz r11,0(r14)
	r11.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r11,4
	r30.s64 = r11.s64 + 4;
	// lwz r16,0(r11)
	r16.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249a48c
	if (!cr0.eq) goto loc_8249A48C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A48C:
	// lwz r20,0(r30)
	r20.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// clrlwi r30,r20,21
	r30.u64 = r20.u32 & 0x7FF;
	// rlwimi r10,r20,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r20.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r15,r11,4
	r15.s64 = r11.s64 + 4;
	// rlwinm r29,r10,24,27,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// beq cr6,0x8249a4b8
	if (cr6.eq) goto loc_8249A4B8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A4B8:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// li r10,80
	ctx.r10.s64 = 80;
	// lwz r21,80(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwimi r10,r30,16,8,15
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 16) & 0xFF0000) | (ctx.r10.u64 & 0xFFFFFFFFFF00FFFF);
	// clrlwi r11,r21,26
	r11.u64 = r21.u32 & 0x3F;
	// ori r7,r9,12816
	ctx.r7.u64 = ctx.r9.u64 | 12816;
	// rlwinm r5,r11,16,0,15
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// oris r5,r5,64
	ctx.r5.u64 = ctx.r5.u64 | 4194304;
	// or r25,r11,r9
	r25.u64 = r11.u64 | ctx.r9.u64;
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// or r22,r5,r9
	r22.u64 = ctx.r5.u64 | ctx.r9.u64;
	// li r23,33
	r23.s64 = 33;
	// rlwinm r8,r28,0,8,15
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFF0000;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r6,228
	ctx.r6.s64 = 14942208;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8249a59c
	if (cr6.eq) goto loc_8249A59C;
	// rlwinm r10,r8,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-2144
	r11.s64 = r11.s64 + -2144;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r24,r8,r11
	r24.u64 = ctx.r8.u64 | r11.u64;
	// b 0x8249a5a0
	goto loc_8249A5A0;
loc_8249A59C:
	// li r24,12816
	r24.s64 = 12816;
loc_8249A5A0:
	// rlwinm r3,r28,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF000000;
	// bl 0x82498080
	sub_82498080(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82498728
	sub_82498728(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x8249a5ec
	if (!cr6.eq) goto loc_8249A5EC;
	// cmplwi cr6,r24,12816
	cr6.compare<uint32_t>(r24.u32, 12816, xer);
	// bne cr6,0x8249a5ec
	if (!cr6.eq) goto loc_8249A5EC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r26,r3,16
	r26.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r27,r11,26
	r27.u64 = r11.u32 & 0x3F;
	// rlwinm r11,r27,16,0,15
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r26
	r11.u64 = r11.u64 | r26.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// b 0x8249a618
	goto loc_8249A618;
loc_8249A5EC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r26,r3,16
	r26.u64 = ctx.r3.u32 & 0xFFFF;
	// or r10,r29,r24
	ctx.r10.u64 = r29.u64 | r24.u64;
	// clrlwi r27,r11,26
	r27.u64 = r11.u32 & 0x3F;
	// rlwinm r11,r27,16,0,15
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// or r11,r11,r26
	r11.u64 = r11.u64 | r26.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8249A618:
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// clrlwi r9,r30,16
	ctx.r9.u64 = r30.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// oris r9,r9,81
	ctx.r9.u64 = ctx.r9.u64 | 5308416;
	// oris r7,r10,1
	ctx.r7.u64 = ctx.r10.u64 | 65536;
	// li r8,4
	ctx.r8.s64 = 4;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r22,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r22.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x8249a680
	if (!cr6.eq) goto loc_8249A680;
	// cmplwi cr6,r24,12816
	cr6.compare<uint32_t>(r24.u32, 12816, xer);
	// bne cr6,0x8249a680
	if (!cr6.eq) goto loc_8249A680;
	// rlwinm r8,r27,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | r26.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// b 0x8249a69c
	goto loc_8249A69C;
loc_8249A680:
	// rlwinm r8,r27,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r29,r24
	ctx.r7.u64 = r29.u64 | r24.u64;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | r26.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
loc_8249A69C:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// oris r10,r10,65
	ctx.r10.u64 = ctx.r10.u64 | 4259840;
	// li r7,50
	ctx.r7.s64 = 50;
	// li r28,4369
	r28.s64 = 4369;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r6,93
	ctx.r6.s64 = 93;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwimi r8,r17,8,23,23
	ctx.r8.u64 = (__builtin_rotateleft32(r17.u32, 8) & 0x100) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFEFF);
	// cmpwi cr6,r21,4
	cr6.compare<int32_t>(r21.s32, 4, xer);
	// clrlwi r8,r8,23
	ctx.r8.u64 = ctx.r8.u32 & 0x1FF;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwimi r6,r8,16,0,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r6.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// beq cr6,0x8249a6f8
	if (cr6.eq) goto loc_8249A6F8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A6F8:
	// cmplwi cr6,r16,67
	cr6.compare<uint32_t>(r16.u32, 67, xer);
	// bne cr6,0x8249a71c
	if (!cr6.eq) goto loc_8249A71C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// b 0x8249a854
	goto loc_8249A854;
loc_8249A71C:
	// cmplwi cr6,r16,68
	cr6.compare<uint32_t>(r16.u32, 68, xer);
	// bne cr6,0x8249a858
	if (!cr6.eq) goto loc_8249A858;
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// ori r30,r10,15
	r30.u64 = ctx.r10.u64 | 15;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// li r9,64
	ctx.r9.s64 = 64;
	// li r7,272
	ctx.r7.s64 = 272;
	// rlwinm r8,r27,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r25,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r25.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// oris r11,r11,65
	r11.u64 = r11.u64 | 4259840;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r9,r8,r26
	ctx.r9.u64 = ctx.r8.u64 | r26.u64;
	// or r8,r29,r24
	ctx.r8.u64 = r29.u64 | r24.u64;
	// mr r29,r18
	r29.u64 = r18.u64;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// li r9,73
	ctx.r9.s64 = 73;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm. r8,r20,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r18,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r18.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// beq 0x8249a7c4
	if (cr0.eq) goto loc_8249A7C4;
	// li r29,256
	r29.s64 = 256;
loc_8249A7C4:
	// rlwinm r3,r20,8,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 8) & 0xF;
	// bl 0x82498030
	sub_82498030(ctx, base);
	// or. r8,r3,r29
	ctx.r8.u64 = ctx.r3.u64 | r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8249a7f0
	if (!cr0.eq) goto loc_8249A7F0;
	// rlwinm r11,r20,0,12,15
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8249a7f0
	if (!cr6.eq) goto loc_8249A7F0;
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// b 0x8249a83c
	goto loc_8249A83C;
loc_8249A7F0:
	// rlwinm r10,r20,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 0) & 0xF0000;
	// stw r22,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r22.u32);
	// mr r11,r18
	r11.u64 = r18.u64;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// rlwinm. r7,r10,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8249a80c
	if (cr0.eq) goto loc_8249A80C;
	// li r11,1
	r11.s64 = 1;
loc_8249A80C:
	// rlwinm. r7,r10,0,14,14
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8249a818
	if (cr0.eq) goto loc_8249A818;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
loc_8249A818:
	// rlwinm. r7,r10,0,13,13
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8249a824
	if (cr0.eq) goto loc_8249A824;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_8249A824:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249a830
	if (cr0.eq) goto loc_8249A830;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_8249A830:
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
loc_8249A83C:
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r10,8738
	ctx.r10.s64 = 8738;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8249A854:
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
loc_8249A858:
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r15,0(r14)
	PPC_STORE_U32(r14.u32 + 0, r15.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8249A86C"))) PPC_WEAK_FUNC(sub_8249A86C);
PPC_FUNC_IMPL(__imp__sub_8249A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249A870"))) PPC_WEAK_FUNC(sub_8249A870);
PPC_FUNC_IMPL(__imp__sub_8249A870) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	r11.s64 = -65536;
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r14,r7
	r14.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8249a89c
	if (cr6.eq) goto loc_8249A89C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A89C:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// lwz r30,0(r14)
	r30.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249a8b8
	if (!cr0.eq) goto loc_8249A8B8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249A8B8:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// clrlwi r27,r29,21
	r27.u64 = r29.u32 & 0x7FF;
	// rlwimi r10,r29,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r3,r10,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r16,r11,8
	r16.s64 = r11.s64 + 8;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// li r20,33
	r20.s64 = 33;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// stw r20,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r20.u32);
	// li r30,0
	r30.s64 = 0;
	// rlwinm. r9,r29,0,8,11
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xF00000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// or r24,r10,r9
	r24.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// beq 0x8249a920
	if (cr0.eq) goto loc_8249A920;
	// li r30,256
	r30.s64 = 256;
loc_8249A920:
	// rlwinm r3,r29,8,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 8) & 0xF;
	// bl 0x82498030
	sub_82498030(ctx, base);
	// or r17,r3,r30
	r17.u64 = ctx.r3.u64 | r30.u64;
	// addi r26,r31,4
	r26.s64 = r31.s64 + 4;
	// rlwinm. r11,r29,0,15,15
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249a944
	if (cr0.eq) goto loc_8249A944;
	// ori r11,r17,1
	r11.u64 = r17.u64 | 1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8249a948
	goto loc_8249A948;
loc_8249A944:
	// stw r17,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r17.u32);
loc_8249A948:
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// rlwinm r11,r28,0,8,15
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r31,r10,-2144
	r31.s64 = ctx.r10.s64 + -2144;
	// beq cr6,0x8249a9a8
	if (cr6.eq) goto loc_8249A9A8;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r10
	r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r18,r8,r11
	r18.u64 = ctx.r8.u64 | r11.u64;
	// b 0x8249a9ac
	goto loc_8249A9AC;
loc_8249A9A8:
	// li r18,12816
	r18.s64 = 12816;
loc_8249A9AC:
	// rlwinm r30,r28,0,4,7
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF000000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82498080
	sub_82498080(ctx, base);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82498728
	sub_82498728(ctx, base);
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x8249a9fc
	if (!cr6.eq) goto loc_8249A9FC;
	// cmplwi cr6,r18,12816
	cr6.compare<uint32_t>(r18.u32, 12816, xer);
	// bne cr6,0x8249a9fc
	if (!cr6.eq) goto loc_8249A9FC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r21,r3,16
	r21.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// clrlwi r22,r11,26
	r22.u64 = r11.u32 & 0x3F;
	// rlwinm r11,r22,16,0,15
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r21
	r11.u64 = r11.u64 | r21.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// b 0x8249aa28
	goto loc_8249AA28;
loc_8249A9FC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r21,r3,16
	r21.u64 = ctx.r3.u32 & 0xFFFF;
	// or r10,r19,r18
	ctx.r10.u64 = r19.u64 | r18.u64;
	// clrlwi r22,r11,26
	r22.u64 = r11.u32 & 0x3F;
	// rlwinm r11,r22,16,0,15
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// or r11,r11,r21
	r11.u64 = r11.u64 | r21.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r11,r26,4
	r11.s64 = r26.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
loc_8249AA28:
	// addi r9,r27,8
	ctx.r9.s64 = r27.s64 + 8;
	// rlwinm r11,r28,16,24,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFF;
	// clrlwi r27,r9,16
	r27.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// oris r8,r27,1
	ctx.r8.u64 = r27.u64 | 65536;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r30,r10,4
	r30.s64 = ctx.r10.s64 + 4;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwzx r10,r9,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r9,r11,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,0,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r31.u32);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r10
	r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r26,r8,r11
	r26.u64 = ctx.r8.u64 | r11.u64;
	// clrlwi r31,r26,29
	r31.u64 = r26.u32 & 0x7;
	// bl 0x82498080
	sub_82498080(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82498728
	sub_82498728(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// rlwinm r9,r31,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r11,r9,r31
	r11.u64 = ctx.r9.u64 | r31.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r31
	r11.u64 = r11.u64 | r31.u64;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r25
	r11.u64 = r11.u64 | r25.u64;
	// rlwinm. r9,r29,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r9,r11,r31
	ctx.r9.u64 = r11.u64 | r31.u64;
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// beq 0x8249ab04
	if (cr0.eq) goto loc_8249AB04;
	// ori r9,r17,4
	ctx.r9.u64 = r17.u64 | 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x8249ab08
	goto loc_8249AB08;
loc_8249AB04:
	// stw r17,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r17.u32);
loc_8249AB08:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// bne cr6,0x8249ab2c
	if (!cr6.eq) goto loc_8249AB2C;
	// cmplwi cr6,r18,12816
	cr6.compare<uint32_t>(r18.u32, 12816, xer);
	// bne cr6,0x8249ab2c
	if (!cr6.eq) goto loc_8249AB2C;
	// rlwinm r9,r22,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 | r21.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// b 0x8249ab48
	goto loc_8249AB48;
loc_8249AB2C:
	// rlwinm r9,r22,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r19,r18
	ctx.r8.u64 = r19.u64 | r18.u64;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// or r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 | r21.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_8249AB48:
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// oris r8,r27,65
	ctx.r8.u64 = r27.u64 | 4259840;
	// rlwinm r11,r26,28,29,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 28) & 0x7;
	// li r7,50
	ctx.r7.s64 = 50;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | r11.u64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 | r11.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// or r8,r11,r25
	ctx.r8.u64 = r11.u64 | r25.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r10,0(r14)
	PPC_STORE_U32(r14.u32 + 0, ctx.r10.u32);
	// stw r16,0(r15)
	PPC_STORE_U32(r15.u32 + 0, r16.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8249ABA4"))) PPC_WEAK_FUNC(sub_8249ABA4);
PPC_FUNC_IMPL(__imp__sub_8249ABA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249ABA8"))) PPC_WEAK_FUNC(sub_8249ABA8);
PPC_FUNC_IMPL(__imp__sub_8249ABA8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249abd4
	if (!cr6.eq) goto loc_8249ABD4;
	// li r26,0
	r26.s64 = 0;
	// b 0x8249abe0
	goto loc_8249ABE0;
loc_8249ABD4:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8249ABE0:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x8249abf4
	if (cr6.lt) goto loc_8249ABF4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249ABF4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r28,0(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// addi r22,r11,4
	r22.s64 = r11.s64 + 4;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r29,r31,21
	r29.u64 = r31.u32 & 0x7FF;
	// rlwinm r11,r10,0,19,23
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// beq cr6,0x8249ac30
	if (cr6.eq) goto loc_8249AC30;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249AC30:
	// rlwimi r29,r26,8,23,23
	r29.u64 = (__builtin_rotateleft32(r26.u32, 8) & 0x100) | (r29.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r11,93
	r11.s64 = 93;
	// clrlwi r10,r29,23
	ctx.r10.u64 = r29.u32 & 0x1FF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r10,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// rlwimi r11,r30,12,21,23
	r11.u64 = (__builtin_rotateleft32(r30.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// beq cr6,0x8249ac74
	if (cr6.eq) goto loc_8249AC74;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249AC74:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82498728
	sub_82498728(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// rlwinm r3,r30,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF000000;
	// bl 0x82498080
	sub_82498080(ctx, base);
	// rlwinm r31,r30,0,8,15
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFF0000;
	// lis r11,228
	r11.s64 = 14942208;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x8249acf8
	if (cr6.eq) goto loc_8249ACF8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// rlwinm r10,r31,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-2144
	r11.s64 = r11.s64 + -2144;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// b 0x8249acfc
	goto loc_8249ACFC;
loc_8249ACF8:
	// li r11,12816
	r11.s64 = 12816;
loc_8249ACFC:
	// cmplwi cr6,r25,82
	cr6.compare<uint32_t>(r25.u32, 82, xer);
	// bne cr6,0x8249ad30
	if (!cr6.eq) goto loc_8249AD30;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8249ad30
	if (!cr6.eq) goto loc_8249AD30;
	// cmplwi cr6,r11,12816
	cr6.compare<uint32_t>(r11.u32, 12816, xer);
	// bne cr6,0x8249ad30
	if (!cr6.eq) goto loc_8249AD30;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r29,r11,16,10,15
	r29.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r29,10
	ctx.r10.u64 = r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8249ad8c
	goto loc_8249AD8C;
loc_8249AD30:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r29,16
	ctx.r8.u64 = r29.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,69
	cr6.compare<uint32_t>(r25.u32, 69, xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x8249ad6c
	if (!cr6.eq) goto loc_8249AD6C;
	// li r9,13312
	ctx.r9.s64 = 13312;
	// rlwinm r8,r11,20,29,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// rlwimi r9,r11,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// or r11,r9,r8
	r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x8249ad80
	goto loc_8249AD80;
loc_8249AD6C:
	// cmplwi cr6,r25,70
	cr6.compare<uint32_t>(r25.u32, 70, xer);
	// bne cr6,0x8249ad80
	if (!cr6.eq) goto loc_8249AD80;
	// rlwinm r11,r11,28,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7F;
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r11,r11,13312
	r11.u64 = r11.u64 | 13312;
loc_8249AD80:
	// or r11,r11,r30
	r11.u64 = r11.u64 | r30.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
loc_8249AD8C:
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// stw r22,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8249AD9C"))) PPC_WEAK_FUNC(sub_8249AD9C);
PPC_FUNC_IMPL(__imp__sub_8249AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249ADA0"))) PPC_WEAK_FUNC(sub_8249ADA0);
PPC_FUNC_IMPL(__imp__sub_8249ADA0) {
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
	// lis r11,-1
	r11.s64 = -65536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x8249adcc
	if (cr6.lt) goto loc_8249ADCC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249ADCC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r25,r10,4
	r25.s64 = ctx.r10.s64 + 4;
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r26,0(r10)
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r31,r11,21
	r31.u64 = r11.u32 & 0x7FF;
	// rlwinm r29,r9,24,27,31
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// beq cr6,0x8249ae04
	if (cr6.eq) goto loc_8249AE04;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249AE04:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r31,1
	ctx.r4.s64 = r31.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r9,r11,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r11,17
	r11.s64 = 17;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r31,r11,16,0,15
	r31.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (r31.u64 & 0xFFFFFFFF0000FFFF);
	// li r8,34
	ctx.r8.s64 = 34;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// li r29,1
	r29.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8249AE90"))) PPC_WEAK_FUNC(sub_8249AE90);
PPC_FUNC_IMPL(__imp__sub_8249AE90) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	r11.s64 = -65536;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x8249aebc
	if (cr6.lt) goto loc_8249AEBC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249AEBC:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r29,0(r22)
	r29.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r24,r10,4
	r24.s64 = ctx.r10.s64 + 4;
	// clrlwi r30,r11,21
	r30.u64 = r11.u32 & 0x7FF;
	// lwz r27,0(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lhz r11,2(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 2);
	// rlwinm r28,r10,24,27,31
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// addi r10,r11,-73
	ctx.r10.s64 = r11.s64 + -73;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r31,r10,1
	r31.u64 = ctx.r10.u64 ^ 1;
	// cmpwi r31,0
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8249af08
	if (!cr0.eq) goto loc_8249AF08;
	// lhz r11,14(r24)
	r11.u64 = PPC_LOAD_U16(r24.u32 + 14);
loc_8249AF08:
	// addi r11,r11,-77
	r11.s64 = r11.s64 + -77;
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r26,r11,27,31,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8249af20
	if (cr6.eq) goto loc_8249AF20;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249AF20:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// subfic r11,r31,0
	xer.ca = r31.u32 <= 0;
	r11.s64 = 0 - r31.s64;
	// clrlwi r31,r30,16
	r31.u64 = r30.u32 & 0xFFFF;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// lis r11,64
	r11.s64 = 4194304;
	// li r8,34
	ctx.r8.s64 = 34;
	// rlwimi r11,r9,16,10,15
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// oris r9,r31,17
	ctx.r9.u64 = r31.u64 | 1114112;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x8249b000
	if (cr6.eq) goto loc_8249B000;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// li r9,71
	ctx.r9.s64 = 71;
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// ori r8,r8,14
	ctx.r8.u64 = ctx.r8.u64 | 14;
	// oris r7,r31,81
	ctx.r7.u64 = r31.u64 | 5308416;
	// li r6,13107
	ctx.r6.s64 = 13107;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8249b004
	goto loc_8249B004;
loc_8249B000:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8249B004:
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8249B014"))) PPC_WEAK_FUNC(sub_8249B014);
PPC_FUNC_IMPL(__imp__sub_8249B014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249B018"))) PPC_WEAK_FUNC(sub_8249B018);
PPC_FUNC_IMPL(__imp__sub_8249B018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
	// mr r16,r7
	r16.u64 = ctx.r7.u64;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249b044
	if (!cr6.eq) goto loc_8249B044;
	// li r19,0
	r19.s64 = 0;
	// b 0x8249b050
	goto loc_8249B050;
loc_8249B044:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r19,r11,27,31,31
	r19.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8249B050:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,260
	r11.u64 = r11.u64 | 260;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x8249b064
	if (cr6.lt) goto loc_8249B064;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249B064:
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// lhz r25,2(r11)
	r25.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplwi cr6,r25,72
	cr6.compare<uint32_t>(r25.u32, 72, xer);
	// beq cr6,0x8249b088
	if (cr6.eq) goto loc_8249B088;
	// cmplwi cr6,r25,84
	cr6.compare<uint32_t>(r25.u32, 84, xer);
	// li r28,1
	r28.s64 = 1;
	// bne cr6,0x8249b08c
	if (!cr6.eq) goto loc_8249B08C;
loc_8249B088:
	// li r28,0
	r28.s64 = 0;
loc_8249B08C:
	// lwz r23,0(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r9,34
	ctx.r9.s64 = 34;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r18,r11,4
	r18.s64 = r11.s64 + 4;
	// rlwimi r8,r23,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(r23.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r26,r23,21
	r26.u64 = r23.u32 & 0x7FF;
	// rlwinm r24,r8,24,27,31
	r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1F;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r24,3
	cr6.compare<uint32_t>(r24.u32, 3, xer);
	// beq cr6,0x8249b0c4
	if (cr6.eq) goto loc_8249B0C4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249B0C4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// beq cr6,0x8249b0ec
	if (cr6.eq) goto loc_8249B0EC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249B0EC:
	// clrlwi r22,r29,26
	r22.u64 = r29.u32 & 0x3F;
	// clrlwi r21,r30,16
	r21.u64 = r30.u32 & 0xFFFF;
	// rlwinm r11,r22,16,0,15
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// or r29,r11,r21
	r29.u64 = r11.u64 | r21.u64;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// beq cr6,0x8249b130
	if (cr6.eq) goto loc_8249B130;
	// cmplwi cr6,r25,76
	cr6.compare<uint32_t>(r25.u32, 76, xer);
	// beq cr6,0x8249b128
	if (cr6.eq) goto loc_8249B128;
	// cmplwi cr6,r25,77
	cr6.compare<uint32_t>(r25.u32, 77, xer);
	// beq cr6,0x8249b128
	if (cr6.eq) goto loc_8249B128;
	// li r10,208
	ctx.r10.s64 = 208;
	// b 0x8249b134
	goto loc_8249B134;
loc_8249B128:
	// li r10,144
	ctx.r10.s64 = 144;
	// b 0x8249b134
	goto loc_8249B134;
loc_8249B130:
	// li r10,228
	ctx.r10.s64 = 228;
loc_8249B134:
	// clrlwi r31,r26,16
	r31.u64 = r26.u32 & 0xFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// oris r10,r31,17
	ctx.r10.u64 = r31.u64 | 1114112;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// lis r11,68
	r11.s64 = 4456448;
	// li r27,93
	r27.s64 = 93;
	// ori r30,r11,14
	r30.u64 = r11.u64 | 14;
	// cmplwi cr6,r25,72
	cr6.compare<uint32_t>(r25.u32, 72, xer);
	// beq cr6,0x8249b21c
	if (cr6.eq) goto loc_8249B21C;
	// cmplwi cr6,r25,74
	cr6.compare<uint32_t>(r25.u32, 74, xer);
	// beq cr6,0x8249b21c
	if (cr6.eq) goto loc_8249B21C;
	// cmplwi cr6,r25,77
	cr6.compare<uint32_t>(r25.u32, 77, xer);
	// beq cr6,0x8249b1dc
	if (cr6.eq) goto loc_8249B1DC;
	// cmplwi cr6,r25,84
	cr6.compare<uint32_t>(r25.u32, 84, xer);
	// bne cr6,0x8249b268
	if (!cr6.eq) goto loc_8249B268;
	// li r11,1
	r11.s64 = 1;
	// li r10,71
	ctx.r10.s64 = 71;
	// lis r9,88
	ctx.r9.s64 = 5767168;
	// li r8,257
	ctx.r8.s64 = 257;
	// stw r11,156(r20)
	PPC_STORE_U32(r20.u32 + 156, r11.u32);
	// lis r11,32
	r11.s64 = 2097152;
	// ori r7,r11,12816
	ctx.r7.u64 = r11.u64 | 12816;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// b 0x8249b400
	goto loc_8249B400;
loc_8249B1DC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,71
	ctx.r9.s64 = 71;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// oris r7,r31,81
	ctx.r7.u64 = r31.u64 | 5308416;
	// li r6,13107
	ctx.r6.s64 = 13107;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8249b27c
	goto loc_8249B27C;
loc_8249B21C:
	// mr r11,r26
	r11.u64 = r26.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// rlwimi r11,r19,8,23,23
	r11.u64 = (__builtin_rotateleft32(r19.u32, 8) & 0x100) | (r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// clrlwi r11,r11,23
	r11.u64 = r11.u32 & 0x1FF;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// rlwinm r11,r22,16,0,15
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r11,r21
	ctx.r10.u64 = r11.u64 | r21.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8249b26c
	goto loc_8249B26C;
loc_8249B268:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8249B26C:
	// cmplwi cr6,r25,77
	cr6.compare<uint32_t>(r25.u32, 77, xer);
	// beq cr6,0x8249b27c
	if (cr6.eq) goto loc_8249B27C;
	// cmplwi cr6,r25,76
	cr6.compare<uint32_t>(r25.u32, 76, xer);
	// bne cr6,0x8249b404
	if (!cr6.eq) goto loc_8249B404;
loc_8249B27C:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r24,3
	cr6.compare<uint32_t>(r24.u32, 3, xer);
	// ori r10,r10,82
	ctx.r10.u64 = ctx.r10.u64 | 82;
	// addi r31,r11,4
	r31.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x8249b298
	if (cr6.eq) goto loc_8249B298;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249B298:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// li r10,21
	ctx.r10.s64 = 21;
	// cmplwi cr6,r25,77
	cr6.compare<uint32_t>(r25.u32, 77, xer);
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// bne cr6,0x8249b2cc
	if (!cr6.eq) goto loc_8249B2CC;
	// lis r11,0
	r11.s64 = 0;
	// stw r30,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r30.u32);
	// ori r10,r11,47768
	ctx.r10.u64 = r11.u64 | 47768;
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x8249b3bc
	goto loc_8249B3BC;
loc_8249B2CC:
	// lwz r28,0(r18)
	r28.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// addi r18,r18,4
	r18.s64 = r18.s64 + 4;
	// rlwinm r11,r28,0,8,15
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8249b334
	if (cr6.eq) goto loc_8249B334;
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r9,r10,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-2144
	r11.s64 = r11.s64 + -2144;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r10,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC;
	// lwzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r10,r8,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r11,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r30,r8,r11
	r30.u64 = ctx.r8.u64 | r11.u64;
	// b 0x8249b338
	goto loc_8249B338;
loc_8249B334:
	// li r30,12816
	r30.s64 = 12816;
loc_8249B338:
	// rlwinm r3,r28,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xF000000;
	// bl 0x82498080
	sub_82498080(ctx, base);
	// andi. r11,r3,34952
	r11.u64 = ctx.r3.u64 & 34952;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi cr6,r11,34952
	cr6.compare<uint32_t>(r11.u32, 34952, xer);
	// bne cr6,0x8249b35c
	if (!cr6.eq) goto loc_8249B35C;
	// lis r12,-1
	r12.s64 = -65536;
	// ori r12,r12,30583
	r12.u64 = r12.u64 | 30583;
	// and r31,r3,r12
	r31.u64 = ctx.r3.u64 & r12.u64;
	// b 0x8249b360
	goto loc_8249B360;
loc_8249B35C:
	// ori r31,r3,34952
	r31.u64 = ctx.r3.u64 | 34952;
loc_8249B360:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82498728
	sub_82498728(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8249b398
	if (!cr6.eq) goto loc_8249B398;
	// cmplwi cr6,r30,12816
	cr6.compare<uint32_t>(r30.u32, 12816, xer);
	// bne cr6,0x8249b398
	if (!cr6.eq) goto loc_8249B398;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// b 0x8249b3c0
	goto loc_8249B3C0;
loc_8249B398:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r8,r31,r30
	ctx.r8.u64 = r31.u64 | r30.u64;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
loc_8249B3BC:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8249B3C0:
	// rlwinm r10,r22,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r26,r19,8,23,23
	r26.u64 = (__builtin_rotateleft32(r19.u32, 8) & 0x100) | (r26.u64 & 0xFFFFFFFFFFFFFEFF);
	// or r31,r10,r21
	r31.u64 = ctx.r10.u64 | r21.u64;
	// clrlwi r10,r26,23
	ctx.r10.u64 = r26.u32 & 0x1FF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r27,r10,16,0,15
	r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r27.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_8249B400:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8249B404:
	// stw r11,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r11.u32);
	// stw r18,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_8249B414"))) PPC_WEAK_FUNC(sub_8249B414);
PPC_FUNC_IMPL(__imp__sub_8249B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249B418"))) PPC_WEAK_FUNC(sub_8249B418);
PPC_FUNC_IMPL(__imp__sub_8249B418) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249b444
	if (!cr6.eq) goto loc_8249B444;
	// li r20,0
	r20.s64 = 0;
	// b 0x8249b450
	goto loc_8249B450;
loc_8249B444:
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r20,r11,27,31,31
	r20.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_8249B450:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,258
	r11.u64 = r11.u64 | 258;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8249b474
	if (cr6.eq) goto loc_8249B474;
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,259
	r11.u64 = r11.u64 | 259;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x8249b474
	if (cr6.eq) goto loc_8249B474;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249B474:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r28,0(r21)
	r28.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lhz r26,2(r11)
	r26.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// clrlwi r30,r31,21
	r30.u64 = r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r23,r11,4
	r23.s64 = r11.s64 + 4;
	// rlwinm r29,r10,24,27,31
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	cr6.compare<uint32_t>(r29.u32, 3, xer);
	// beq cr6,0x8249b4b0
	if (cr6.eq) goto loc_8249B4B0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249B4B0:
	// li r11,34
	r11.s64 = 34;
	// addi r25,r28,4
	r25.s64 = r28.s64 + 4;
	// cmplwi cr6,r26,85
	cr6.compare<uint32_t>(r26.u32, 85, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// bne cr6,0x8249b4e4
	if (!cr6.eq) goto loc_8249B4E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8249b534
	goto loc_8249B534;
loc_8249B4E4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x824981d0
	sub_824981D0(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// beq cr6,0x8249b50c
	if (cr6.eq) goto loc_8249B50C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249B50C:
	// lis r11,64
	r11.s64 = 4194304;
	// clrlwi r10,r29,16
	ctx.r10.u64 = r29.u32 & 0xFFFF;
	// rlwimi r11,r28,16,10,15
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0x3F0000) | (r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r9,41
	ctx.r9.s64 = 41;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r11,r25,4
	r11.s64 = r25.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_8249B534:
	// mr r11,r24
	r11.u64 = r24.u64;
	// rlwimi r11,r24,12,21,23
	r11.u64 = (__builtin_rotateleft32(r24.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	cr6.compare<uint32_t>(r11.u32, 768, xer);
	// beq cr6,0x8249b54c
	if (cr6.eq) goto loc_8249B54C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249B54C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x824989a8
	sub_824989A8(ctx, base);
	// li r10,17
	ctx.r10.s64 = 17;
	// mr r11,r30
	r11.u64 = r30.u64;
	// cmplwi cr6,r26,83
	cr6.compare<uint32_t>(r26.u32, 83, xer);
	// rlwimi r11,r10,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne cr6,0x8249b5c8
	if (!cr6.eq) goto loc_8249B5C8;
	// rlwimi r30,r20,8,23,23
	r30.u64 = (__builtin_rotateleft32(r20.u32, 8) & 0x100) | (r30.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r10,93
	ctx.r10.s64 = 93;
	// clrlwi r9,r30,23
	ctx.r9.u64 = r30.u32 & 0x1FF;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824988b0
	sub_824988B0(ctx, base);
	// rlwimi r29,r28,16,10,15
	r29.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0x3F0000) | (r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r29,10
	ctx.r10.u64 = r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8249B5C8:
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
	// stw r23,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8249B5D8"))) PPC_WEAK_FUNC(sub_8249B5D8);
PPC_FUNC_IMPL(__imp__sub_8249B5D8) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x8239bcc0
	// lis r11,-32182
	r11.s64 = -2109079552;
	// li r10,75
	ctx.r10.s64 = 75;
	// lis r14,-32182
	r14.s64 = -2109079552;
	// lis r15,-32182
	r15.s64 = -2109079552;
	// lis r16,-32182
	r16.s64 = -2109079552;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r11.u32);
	// lis r11,-32182
	r11.s64 = -2109079552;
	// lis r17,-32182
	r17.s64 = -2109079552;
	// lis r18,-32182
	r18.s64 = -2109079552;
	// lis r19,-32182
	r19.s64 = -2109079552;
	// lis r20,-32182
	r20.s64 = -2109079552;
	// stw r11,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, r11.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r21,-32182
	r21.s64 = -2109079552;
	// addi r11,r11,-27344
	r11.s64 = r11.s64 + -27344;
	// lis r22,-32182
	r22.s64 = -2109079552;
	// lis r23,-32182
	r23.s64 = -2109079552;
	// lis r24,-32182
	r24.s64 = -2109079552;
	// lis r25,-32182
	r25.s64 = -2109079552;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lis r26,-32182
	r26.s64 = -2109079552;
	// lis r27,-32182
	r27.s64 = -2109079552;
	// lis r28,-32182
	r28.s64 = -2109079552;
	// lis r29,-32182
	r29.s64 = -2109079552;
	// lis r30,-32182
	r30.s64 = -2109079552;
	// lis r31,-32182
	r31.s64 = -2109079552;
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r10,r10,-31776
	ctx.r10.s64 = ctx.r10.s64 + -31776;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,-156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// addi r10,r10,-28856
	ctx.r10.s64 = ctx.r10.s64 + -28856;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// addi r10,r14,-28856
	ctx.r10.s64 = r14.s64 + -28856;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// li r10,91
	ctx.r10.s64 = 91;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// addi r10,r15,-28856
	ctx.r10.s64 = r15.s64 + -28856;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// addi r10,r16,-28856
	ctx.r10.s64 = r16.s64 + -28856;
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// li r10,73
	ctx.r10.s64 = 73;
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// addi r10,r17,-28856
	ctx.r10.s64 = r17.s64 + -28856;
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// li r10,81
	ctx.r10.s64 = 81;
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// addi r10,r18,-28856
	ctx.r10.s64 = r18.s64 + -28856;
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// li r10,85
	ctx.r10.s64 = 85;
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// addi r10,r19,-28856
	ctx.r10.s64 = r19.s64 + -28856;
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r10.u32);
	// addi r10,r20,-28856
	ctx.r10.s64 = r20.s64 + -28856;
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// li r10,35
	ctx.r10.s64 = 35;
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// addi r10,r21,-28856
	ctx.r10.s64 = r21.s64 + -28856;
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// li r10,68
	ctx.r10.s64 = 68;
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// addi r10,r22,-28856
	ctx.r10.s64 = r22.s64 + -28856;
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// li r10,65
	ctx.r10.s64 = 65;
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// addi r10,r23,-28856
	ctx.r10.s64 = r23.s64 + -28856;
	// stw r10,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r10.u32);
	// li r10,86
	ctx.r10.s64 = 86;
	// lis r14,-32182
	r14.s64 = -2109079552;
	// lis r15,-32182
	r15.s64 = -2109079552;
	// lis r16,-32182
	r16.s64 = -2109079552;
	// lis r17,-32182
	r17.s64 = -2109079552;
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// addi r10,r24,-31776
	ctx.r10.s64 = r24.s64 + -31776;
	// lis r18,-32182
	r18.s64 = -2109079552;
	// lis r19,-32182
	r19.s64 = -2109079552;
	// lis r20,-32182
	r20.s64 = -2109079552;
	// lis r21,-32182
	r21.s64 = -2109079552;
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
	// li r10,86
	ctx.r10.s64 = 86;
	// lis r22,-32182
	r22.s64 = -2109079552;
	// lis r23,-32182
	r23.s64 = -2109079552;
	// lis r24,-32182
	r24.s64 = -2109079552;
	// stw r10,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r10.u32);
	// addi r10,r25,-31776
	ctx.r10.s64 = r25.s64 + -31776;
	// lis r25,-32182
	r25.s64 = -2109079552;
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r10,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r10.u32);
	// addi r10,r26,-28856
	ctx.r10.s64 = r26.s64 + -28856;
	// lis r26,-32182
	r26.s64 = -2109079552;
	// stw r10,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r10.u32);
	// li r10,60
	ctx.r10.s64 = 60;
	// stw r10,120(r11)
	PPC_STORE_U32(r11.u32 + 120, ctx.r10.u32);
	// addi r10,r27,-28856
	ctx.r10.s64 = r27.s64 + -28856;
	// lis r27,-32182
	r27.s64 = -2109079552;
	// stw r10,124(r11)
	PPC_STORE_U32(r11.u32 + 124, ctx.r10.u32);
	// li r10,57
	ctx.r10.s64 = 57;
	// stw r10,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r10.u32);
	// addi r10,r28,-31776
	ctx.r10.s64 = r28.s64 + -31776;
	// lis r28,-32182
	r28.s64 = -2109079552;
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r10,136(r11)
	PPC_STORE_U32(r11.u32 + 136, ctx.r10.u32);
	// addi r10,r29,-31776
	ctx.r10.s64 = r29.s64 + -31776;
	// lis r29,-32182
	r29.s64 = -2109079552;
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
	// li r10,63
	ctx.r10.s64 = 63;
	// stw r10,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r10.u32);
	// addi r10,r30,-28856
	ctx.r10.s64 = r30.s64 + -28856;
	// lis r30,-32182
	r30.s64 = -2109079552;
	// stw r10,148(r11)
	PPC_STORE_U32(r11.u32 + 148, ctx.r10.u32);
	// li r10,49
	ctx.r10.s64 = 49;
	// stw r10,152(r11)
	PPC_STORE_U32(r11.u32 + 152, ctx.r10.u32);
	// addi r10,r31,-28856
	ctx.r10.s64 = r31.s64 + -28856;
	// stw r10,156(r11)
	PPC_STORE_U32(r11.u32 + 156, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,160(r11)
	PPC_STORE_U32(r11.u32 + 160, ctx.r10.u32);
	// addi r10,r3,-28856
	ctx.r10.s64 = ctx.r3.s64 + -28856;
	// stw r10,164(r11)
	PPC_STORE_U32(r11.u32 + 164, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,168(r11)
	PPC_STORE_U32(r11.u32 + 168, ctx.r10.u32);
	// addi r10,r4,-28856
	ctx.r10.s64 = ctx.r4.s64 + -28856;
	// stw r10,172(r11)
	PPC_STORE_U32(r11.u32 + 172, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,176(r11)
	PPC_STORE_U32(r11.u32 + 176, ctx.r10.u32);
	// addi r10,r5,-28856
	ctx.r10.s64 = ctx.r5.s64 + -28856;
	// stw r10,180(r11)
	PPC_STORE_U32(r11.u32 + 180, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,184(r11)
	PPC_STORE_U32(r11.u32 + 184, ctx.r10.u32);
	// addi r10,r6,-28856
	ctx.r10.s64 = ctx.r6.s64 + -28856;
	// stw r10,188(r11)
	PPC_STORE_U32(r11.u32 + 188, ctx.r10.u32);
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r10,192(r11)
	PPC_STORE_U32(r11.u32 + 192, ctx.r10.u32);
	// addi r10,r7,-28856
	ctx.r10.s64 = ctx.r7.s64 + -28856;
	// stw r10,196(r11)
	PPC_STORE_U32(r11.u32 + 196, ctx.r10.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r10,200(r11)
	PPC_STORE_U32(r11.u32 + 200, ctx.r10.u32);
	// addi r10,r8,-27712
	ctx.r10.s64 = ctx.r8.s64 + -27712;
	// stw r10,204(r11)
	PPC_STORE_U32(r11.u32 + 204, ctx.r10.u32);
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,208(r11)
	PPC_STORE_U32(r11.u32 + 208, ctx.r10.u32);
	// addi r10,r9,-27712
	ctx.r10.s64 = ctx.r9.s64 + -27712;
	// stw r10,212(r11)
	PPC_STORE_U32(r11.u32 + 212, ctx.r10.u32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// lis r31,-32182
	r31.s64 = -2109079552;
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// stw r10,216(r11)
	PPC_STORE_U32(r11.u32 + 216, ctx.r10.u32);
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// lwz r10,-156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// addi r10,r10,-27712
	ctx.r10.s64 = ctx.r10.s64 + -27712;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r10,220(r11)
	PPC_STORE_U32(r11.u32 + 220, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,224(r11)
	PPC_STORE_U32(r11.u32 + 224, ctx.r10.u32);
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r10,r10,-27712
	ctx.r10.s64 = ctx.r10.s64 + -27712;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r10,232(r11)
	PPC_STORE_U32(r11.u32 + 232, ctx.r10.u32);
	// addi r10,r14,-27712
	ctx.r10.s64 = r14.s64 + -27712;
	// stw r10,236(r11)
	PPC_STORE_U32(r11.u32 + 236, ctx.r10.u32);
	// li r10,50
	ctx.r10.s64 = 50;
	// stw r10,240(r11)
	PPC_STORE_U32(r11.u32 + 240, ctx.r10.u32);
	// addi r10,r15,-27712
	ctx.r10.s64 = r15.s64 + -27712;
	// stw r10,244(r11)
	PPC_STORE_U32(r11.u32 + 244, ctx.r10.u32);
	// li r10,22
	ctx.r10.s64 = 22;
	// stw r10,248(r11)
	PPC_STORE_U32(r11.u32 + 248, ctx.r10.u32);
	// addi r10,r16,-31776
	ctx.r10.s64 = r16.s64 + -31776;
	// stw r10,252(r11)
	PPC_STORE_U32(r11.u32 + 252, ctx.r10.u32);
	// li r10,78
	ctx.r10.s64 = 78;
	// stw r10,256(r11)
	PPC_STORE_U32(r11.u32 + 256, ctx.r10.u32);
	// addi r10,r17,-28856
	ctx.r10.s64 = r17.s64 + -28856;
	// stw r10,260(r11)
	PPC_STORE_U32(r11.u32 + 260, ctx.r10.u32);
	// li r10,19
	ctx.r10.s64 = 19;
	// stw r10,264(r11)
	PPC_STORE_U32(r11.u32 + 264, ctx.r10.u32);
	// addi r10,r18,-28856
	ctx.r10.s64 = r18.s64 + -28856;
	// stw r10,268(r11)
	PPC_STORE_U32(r11.u32 + 268, ctx.r10.u32);
	// li r10,87
	ctx.r10.s64 = 87;
	// stw r10,272(r11)
	PPC_STORE_U32(r11.u32 + 272, ctx.r10.u32);
	// addi r10,r19,-31776
	ctx.r10.s64 = r19.s64 + -31776;
	// stw r10,276(r11)
	PPC_STORE_U32(r11.u32 + 276, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,280(r11)
	PPC_STORE_U32(r11.u32 + 280, ctx.r10.u32);
	// addi r10,r20,-28856
	ctx.r10.s64 = r20.s64 + -28856;
	// stw r10,284(r11)
	PPC_STORE_U32(r11.u32 + 284, ctx.r10.u32);
	// li r10,76
	ctx.r10.s64 = 76;
	// stw r10,288(r11)
	PPC_STORE_U32(r11.u32 + 288, ctx.r10.u32);
	// addi r10,r21,-28856
	ctx.r10.s64 = r21.s64 + -28856;
	// stw r10,292(r11)
	PPC_STORE_U32(r11.u32 + 292, ctx.r10.u32);
	// li r10,89
	ctx.r10.s64 = 89;
	// stw r10,296(r11)
	PPC_STORE_U32(r11.u32 + 296, ctx.r10.u32);
	// addi r10,r22,-28856
	ctx.r10.s64 = r22.s64 + -28856;
	// stw r10,300(r11)
	PPC_STORE_U32(r11.u32 + 300, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r10,304(r11)
	PPC_STORE_U32(r11.u32 + 304, ctx.r10.u32);
	// addi r10,r23,-27712
	ctx.r10.s64 = r23.s64 + -27712;
	// stw r10,308(r11)
	PPC_STORE_U32(r11.u32 + 308, ctx.r10.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r10,312(r11)
	PPC_STORE_U32(r11.u32 + 312, ctx.r10.u32);
	// addi r10,r24,-27712
	ctx.r10.s64 = r24.s64 + -27712;
	// stw r10,316(r11)
	PPC_STORE_U32(r11.u32 + 316, ctx.r10.u32);
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r10,320(r11)
	PPC_STORE_U32(r11.u32 + 320, ctx.r10.u32);
	// addi r10,r25,-27712
	ctx.r10.s64 = r25.s64 + -27712;
	// stw r10,324(r11)
	PPC_STORE_U32(r11.u32 + 324, ctx.r10.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r10,328(r11)
	PPC_STORE_U32(r11.u32 + 328, ctx.r10.u32);
	// addi r10,r26,-26464
	ctx.r10.s64 = r26.s64 + -26464;
	// stw r10,332(r11)
	PPC_STORE_U32(r11.u32 + 332, ctx.r10.u32);
	// li r10,39
	ctx.r10.s64 = 39;
	// stw r10,336(r11)
	PPC_STORE_U32(r11.u32 + 336, ctx.r10.u32);
	// addi r10,r27,-27712
	ctx.r10.s64 = r27.s64 + -27712;
	// stw r10,340(r11)
	PPC_STORE_U32(r11.u32 + 340, ctx.r10.u32);
	// li r10,41
	ctx.r10.s64 = 41;
	// stw r10,344(r11)
	PPC_STORE_U32(r11.u32 + 344, ctx.r10.u32);
	// addi r10,r28,-27712
	ctx.r10.s64 = r28.s64 + -27712;
	// stw r10,348(r11)
	PPC_STORE_U32(r11.u32 + 348, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r10,352(r11)
	PPC_STORE_U32(r11.u32 + 352, ctx.r10.u32);
	// addi r10,r29,-27712
	ctx.r10.s64 = r29.s64 + -27712;
	// stw r10,356(r11)
	PPC_STORE_U32(r11.u32 + 356, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// lis r14,-32182
	r14.s64 = -2109079552;
	// lis r15,-32182
	r15.s64 = -2109079552;
	// lis r16,-32182
	r16.s64 = -2109079552;
	// lis r17,-32182
	r17.s64 = -2109079552;
	// stw r10,360(r11)
	PPC_STORE_U32(r11.u32 + 360, ctx.r10.u32);
	// addi r10,r30,-26464
	ctx.r10.s64 = r30.s64 + -26464;
	// lis r18,-32182
	r18.s64 = -2109079552;
	// lis r19,-32182
	r19.s64 = -2109079552;
	// lis r20,-32182
	r20.s64 = -2109079552;
	// lis r21,-32182
	r21.s64 = -2109079552;
	// stw r10,364(r11)
	PPC_STORE_U32(r11.u32 + 364, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r22,-32182
	r22.s64 = -2109079552;
	// lis r23,-32182
	r23.s64 = -2109079552;
	// lis r24,-32182
	r24.s64 = -2109079552;
	// lis r25,-32182
	r25.s64 = -2109079552;
	// stw r10,368(r11)
	PPC_STORE_U32(r11.u32 + 368, ctx.r10.u32);
	// addi r10,r31,-31776
	ctx.r10.s64 = r31.s64 + -31776;
	// lis r26,-32182
	r26.s64 = -2109079552;
	// lis r27,-32182
	r27.s64 = -2109079552;
	// lis r28,-32182
	r28.s64 = -2109079552;
	// lis r29,-32182
	r29.s64 = -2109079552;
	// stw r10,372(r11)
	PPC_STORE_U32(r11.u32 + 372, ctx.r10.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// lis r30,-32182
	r30.s64 = -2109079552;
	// lis r31,-32182
	r31.s64 = -2109079552;
	// stw r10,376(r11)
	PPC_STORE_U32(r11.u32 + 376, ctx.r10.u32);
	// addi r10,r3,-31776
	ctx.r10.s64 = ctx.r3.s64 + -31776;
	// lis r3,-32182
	ctx.r3.s64 = -2109079552;
	// stw r10,380(r11)
	PPC_STORE_U32(r11.u32 + 380, ctx.r10.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r10,384(r11)
	PPC_STORE_U32(r11.u32 + 384, ctx.r10.u32);
	// addi r10,r4,-31776
	ctx.r10.s64 = ctx.r4.s64 + -31776;
	// lis r4,-32182
	ctx.r4.s64 = -2109079552;
	// stw r10,388(r11)
	PPC_STORE_U32(r11.u32 + 388, ctx.r10.u32);
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r10,512(r11)
	PPC_STORE_U32(r11.u32 + 512, ctx.r10.u32);
	// addi r10,r5,-26000
	ctx.r10.s64 = ctx.r5.s64 + -26000;
	// lis r5,-32182
	ctx.r5.s64 = -2109079552;
	// stw r10,516(r11)
	PPC_STORE_U32(r11.u32 + 516, ctx.r10.u32);
	// li r10,55
	ctx.r10.s64 = 55;
	// stw r10,520(r11)
	PPC_STORE_U32(r11.u32 + 520, ctx.r10.u32);
	// addi r10,r6,-25640
	ctx.r10.s64 = ctx.r6.s64 + -25640;
	// lis r6,-32182
	ctx.r6.s64 = -2109079552;
	// stw r10,524(r11)
	PPC_STORE_U32(r11.u32 + 524, ctx.r10.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r10,528(r11)
	PPC_STORE_U32(r11.u32 + 528, ctx.r10.u32);
	// addi r10,r7,-25096
	ctx.r10.s64 = ctx.r7.s64 + -25096;
	// lis r7,-32182
	ctx.r7.s64 = -2109079552;
	// stw r10,532(r11)
	PPC_STORE_U32(r11.u32 + 532, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,536(r11)
	PPC_STORE_U32(r11.u32 + 536, ctx.r10.u32);
	// addi r10,r8,-23528
	ctx.r10.s64 = ctx.r8.s64 + -23528;
	// lis r8,-32182
	ctx.r8.s64 = -2109079552;
	// stw r10,540(r11)
	PPC_STORE_U32(r11.u32 + 540, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,544(r11)
	PPC_STORE_U32(r11.u32 + 544, ctx.r10.u32);
	// addi r10,r9,-23528
	ctx.r10.s64 = ctx.r9.s64 + -23528;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r10,548(r11)
	PPC_STORE_U32(r11.u32 + 548, ctx.r10.u32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r10,-156(r1)
	PPC_STORE_U32(ctx.r1.u32 + -156, ctx.r10.u32);
	// lis r10,-32182
	ctx.r10.s64 = -2109079552;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r10,552(r11)
	PPC_STORE_U32(r11.u32 + 552, ctx.r10.u32);
	// lwz r10,-156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -156);
	// addi r10,r10,-21592
	ctx.r10.s64 = ctx.r10.s64 + -21592;
	// stw r10,556(r11)
	PPC_STORE_U32(r11.u32 + 556, ctx.r10.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r10,560(r11)
	PPC_STORE_U32(r11.u32 + 560, ctx.r10.u32);
	// lwz r10,-160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// addi r10,r10,-21592
	ctx.r10.s64 = ctx.r10.s64 + -21592;
	// stw r10,564(r11)
	PPC_STORE_U32(r11.u32 + 564, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,568(r11)
	PPC_STORE_U32(r11.u32 + 568, ctx.r10.u32);
	// addi r10,r14,-21088
	ctx.r10.s64 = r14.s64 + -21088;
	// stw r10,572(r11)
	PPC_STORE_U32(r11.u32 + 572, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,576(r11)
	PPC_STORE_U32(r11.u32 + 576, ctx.r10.u32);
	// addi r10,r15,-20456
	ctx.r10.s64 = r15.s64 + -20456;
	// stw r10,580(r11)
	PPC_STORE_U32(r11.u32 + 580, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,584(r11)
	PPC_STORE_U32(r11.u32 + 584, ctx.r10.u32);
	// addi r10,r16,-20848
	ctx.r10.s64 = r16.s64 + -20848;
	// stw r10,588(r11)
	PPC_STORE_U32(r11.u32 + 588, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,592(r11)
	PPC_STORE_U32(r11.u32 + 592, ctx.r10.u32);
	// addi r10,r17,-20456
	ctx.r10.s64 = r17.s64 + -20456;
	// stw r10,596(r11)
	PPC_STORE_U32(r11.u32 + 596, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,600(r11)
	PPC_STORE_U32(r11.u32 + 600, ctx.r10.u32);
	// addi r10,r18,-31776
	ctx.r10.s64 = r18.s64 + -31776;
	// stw r10,604(r11)
	PPC_STORE_U32(r11.u32 + 604, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,608(r11)
	PPC_STORE_U32(r11.u32 + 608, ctx.r10.u32);
	// addi r10,r19,-20456
	ctx.r10.s64 = r19.s64 + -20456;
	// stw r10,612(r11)
	PPC_STORE_U32(r11.u32 + 612, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,616(r11)
	PPC_STORE_U32(r11.u32 + 616, ctx.r10.u32);
	// addi r10,r20,-20456
	ctx.r10.s64 = r20.s64 + -20456;
	// stw r10,620(r11)
	PPC_STORE_U32(r11.u32 + 620, ctx.r10.u32);
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r10,624(r11)
	PPC_STORE_U32(r11.u32 + 624, ctx.r10.u32);
	// addi r10,r21,-28856
	ctx.r10.s64 = r21.s64 + -28856;
	// stw r10,628(r11)
	PPC_STORE_U32(r11.u32 + 628, ctx.r10.u32);
	// li r10,61
	ctx.r10.s64 = 61;
	// stw r10,632(r11)
	PPC_STORE_U32(r11.u32 + 632, ctx.r10.u32);
	// addi r10,r22,-28856
	ctx.r10.s64 = r22.s64 + -28856;
	// stw r10,636(r11)
	PPC_STORE_U32(r11.u32 + 636, ctx.r10.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,640(r11)
	PPC_STORE_U32(r11.u32 + 640, ctx.r10.u32);
	// addi r10,r23,-28856
	ctx.r10.s64 = r23.s64 + -28856;
	// stw r10,644(r11)
	PPC_STORE_U32(r11.u32 + 644, ctx.r10.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r10,648(r11)
	PPC_STORE_U32(r11.u32 + 648, ctx.r10.u32);
	// addi r10,r24,-31776
	ctx.r10.s64 = r24.s64 + -31776;
	// stw r10,652(r11)
	PPC_STORE_U32(r11.u32 + 652, ctx.r10.u32);
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r10,656(r11)
	PPC_STORE_U32(r11.u32 + 656, ctx.r10.u32);
	// addi r10,r25,-21592
	ctx.r10.s64 = r25.s64 + -21592;
	// stw r10,660(r11)
	PPC_STORE_U32(r11.u32 + 660, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,664(r11)
	PPC_STORE_U32(r11.u32 + 664, ctx.r10.u32);
	// addi r10,r26,-19432
	ctx.r10.s64 = r26.s64 + -19432;
	// stw r10,668(r11)
	PPC_STORE_U32(r11.u32 + 668, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,672(r11)
	PPC_STORE_U32(r11.u32 + 672, ctx.r10.u32);
	// addi r10,r27,-20456
	ctx.r10.s64 = r27.s64 + -20456;
	// stw r10,676(r11)
	PPC_STORE_U32(r11.u32 + 676, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,680(r11)
	PPC_STORE_U32(r11.u32 + 680, ctx.r10.u32);
	// addi r10,r28,-19432
	ctx.r10.s64 = r28.s64 + -19432;
	// stw r10,684(r11)
	PPC_STORE_U32(r11.u32 + 684, ctx.r10.u32);
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r10,688(r11)
	PPC_STORE_U32(r11.u32 + 688, ctx.r10.u32);
	// addi r10,r29,-20456
	ctx.r10.s64 = r29.s64 + -20456;
	// stw r10,692(r11)
	PPC_STORE_U32(r11.u32 + 692, ctx.r10.u32);
	// li r10,71
	ctx.r10.s64 = 71;
	// stw r10,696(r11)
	PPC_STORE_U32(r11.u32 + 696, ctx.r10.u32);
	// addi r10,r30,-31688
	ctx.r10.s64 = r30.s64 + -31688;
	// stw r10,700(r11)
	PPC_STORE_U32(r11.u32 + 700, ctx.r10.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r10,704(r11)
	PPC_STORE_U32(r11.u32 + 704, ctx.r10.u32);
	// addi r10,r31,-28856
	ctx.r10.s64 = r31.s64 + -28856;
	// stw r10,708(r11)
	PPC_STORE_U32(r11.u32 + 708, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,712(r11)
	PPC_STORE_U32(r11.u32 + 712, ctx.r10.u32);
	// addi r10,r3,-22416
	ctx.r10.s64 = ctx.r3.s64 + -22416;
	// stw r10,716(r11)
	PPC_STORE_U32(r11.u32 + 716, ctx.r10.u32);
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r10,720(r11)
	PPC_STORE_U32(r11.u32 + 720, ctx.r10.u32);
	// addi r10,r4,-28856
	ctx.r10.s64 = ctx.r4.s64 + -28856;
	// stw r10,724(r11)
	PPC_STORE_U32(r11.u32 + 724, ctx.r10.u32);
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r10,728(r11)
	PPC_STORE_U32(r11.u32 + 728, ctx.r10.u32);
	// addi r10,r5,-28856
	ctx.r10.s64 = ctx.r5.s64 + -28856;
	// stw r10,732(r11)
	PPC_STORE_U32(r11.u32 + 732, ctx.r10.u32);
	// li r10,38
	ctx.r10.s64 = 38;
	// stw r10,736(r11)
	PPC_STORE_U32(r11.u32 + 736, ctx.r10.u32);
	// addi r10,r6,-28856
	ctx.r10.s64 = ctx.r6.s64 + -28856;
	// stw r10,740(r11)
	PPC_STORE_U32(r11.u32 + 740, ctx.r10.u32);
	// li r10,95
	ctx.r10.s64 = 95;
	// stw r10,744(r11)
	PPC_STORE_U32(r11.u32 + 744, ctx.r10.u32);
	// addi r10,r7,-24192
	ctx.r10.s64 = ctx.r7.s64 + -24192;
	// stw r10,748(r11)
	PPC_STORE_U32(r11.u32 + 748, ctx.r10.u32);
	// li r10,86
	ctx.r10.s64 = 86;
	// stw r10,752(r11)
	PPC_STORE_U32(r11.u32 + 752, ctx.r10.u32);
	// addi r10,r8,-26464
	ctx.r10.s64 = ctx.r8.s64 + -26464;
	// stw r10,756(r11)
	PPC_STORE_U32(r11.u32 + 756, ctx.r10.u32);
	// li r10,94
	ctx.r10.s64 = 94;
	// stw r10,760(r11)
	PPC_STORE_U32(r11.u32 + 760, ctx.r10.u32);
	// addi r10,r9,-24192
	ctx.r10.s64 = ctx.r9.s64 + -24192;
	// lis r9,-32182
	ctx.r9.s64 = -2109079552;
	// stw r10,764(r11)
	PPC_STORE_U32(r11.u32 + 764, ctx.r10.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// stw r10,768(r11)
	PPC_STORE_U32(r11.u32 + 768, ctx.r10.u32);
	// addi r10,r9,-27712
	ctx.r10.s64 = ctx.r9.s64 + -27712;
	// stw r10,772(r11)
	PPC_STORE_U32(r11.u32 + 772, ctx.r10.u32);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8249BC84"))) PPC_WEAK_FUNC(sub_8249BC84);
PPC_FUNC_IMPL(__imp__sub_8249BC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249BC88"))) PPC_WEAK_FUNC(sub_8249BC88);
PPC_FUNC_IMPL(__imp__sub_8249BC88) {
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
	// lis r11,-1
	r11.s64 = -65536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8249bcb0
	if (!cr6.lt) goto loc_8249BCB0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249BCB0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r31,r26,21
	r31.u64 = r26.u32 & 0x7FF;
	// cmplwi cr6,r31,256
	cr6.compare<uint32_t>(r31.u32, 256, xer);
	// blt cr6,0x8249bcd8
	if (cr6.lt) goto loc_8249BCD8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// li r31,255
	r31.s64 = 255;
loc_8249BCD8:
	// mr r11,r26
	r11.u64 = r26.u64;
	// rlwimi r11,r26,12,21,23
	r11.u64 = (__builtin_rotateleft32(r26.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	cr6.compare<uint32_t>(r11.u32, 512, xer);
	// beq cr6,0x8249bcf0
	if (cr6.eq) goto loc_8249BCF0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249BCF0:
	// li r11,28
	r11.s64 = 28;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r31,r10,16,0,15
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r31.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8249BD5C"))) PPC_WEAK_FUNC(sub_8249BD5C);
PPC_FUNC_IMPL(__imp__sub_8249BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249BD60"))) PPC_WEAK_FUNC(sub_8249BD60);
PPC_FUNC_IMPL(__imp__sub_8249BD60) {
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
	// lis r11,-1
	r11.s64 = -65536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x8249bd88
	if (!cr6.lt) goto loc_8249BD88;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249BD88:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r31,r26,21
	r31.u64 = r26.u32 & 0x7FF;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// blt cr6,0x8249bdb0
	if (cr6.lt) goto loc_8249BDB0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// li r31,15
	r31.s64 = 15;
loc_8249BDB0:
	// mr r11,r26
	r11.u64 = r26.u64;
	// rlwimi r11,r26,12,21,23
	r11.u64 = (__builtin_rotateleft32(r26.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	cr6.compare<uint32_t>(r11.u32, 1792, xer);
	// beq cr6,0x8249bdc8
	if (cr6.eq) goto loc_8249BDC8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249BDC8:
	// li r11,28
	r11.s64 = 28;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r31,r10,17,0,15
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 17) & 0xFFFF0000) | (r31.u64 & 0xFFFFFFFF0000FFFF);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r8,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r8.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8249BE34"))) PPC_WEAK_FUNC(sub_8249BE34);
PPC_FUNC_IMPL(__imp__sub_8249BE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249BE38"))) PPC_WEAK_FUNC(sub_8249BE38);
PPC_FUNC_IMPL(__imp__sub_8249BE38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// rlwinm. r10,r3,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x8249be50
	if (cr0.eq) goto loc_8249BE50;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x8249be54
	goto loc_8249BE54;
loc_8249BE50:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_8249BE54:
	// rlwinm. r10,r3,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249be68
	if (cr0.eq) goto loc_8249BE68;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x8249be6c
	goto loc_8249BE6C;
loc_8249BE68:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
loc_8249BE6C:
	// rlwinm. r10,r3,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249be80
	if (cr0.eq) goto loc_8249BE80;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x8249be84
	goto loc_8249BE84;
loc_8249BE80:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
loc_8249BE84:
	// rlwinm. r10,r3,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249be90
	if (cr0.eq) goto loc_8249BE90;
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_8249BE90:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249BE98"))) PPC_WEAK_FUNC(sub_8249BE98);
PPC_FUNC_IMPL(__imp__sub_8249BE98) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(r29.u32, 16, xer);
	// lwz r27,0(r28)
	r27.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// blt cr6,0x8249bec0
	if (cr6.lt) goto loc_8249BEC0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249BEC0:
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x8249bf10
	if (cr6.eq) goto loc_8249BF10;
	// lis r11,4096
	r11.s64 = 268435456;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x8249bf08
	if (cr6.eq) goto loc_8249BF08;
	// lis r11,6144
	r11.s64 = 402653184;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x8249bf00
	if (cr6.eq) goto loc_8249BF00;
	// lis r11,8192
	r11.s64 = 536870912;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// beq cr6,0x8249bef8
	if (cr6.eq) goto loc_8249BEF8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x8249bf14
	goto loc_8249BF14;
loc_8249BEF8:
	// lis r31,768
	r31.s64 = 50331648;
	// b 0x8249bf14
	goto loc_8249BF14;
loc_8249BF00:
	// lis r31,1024
	r31.s64 = 67108864;
	// b 0x8249bf14
	goto loc_8249BF14;
loc_8249BF08:
	// lis r31,512
	r31.s64 = 33554432;
	// b 0x8249bf14
	goto loc_8249BF14;
loc_8249BF10:
	// li r31,0
	r31.s64 = 0;
loc_8249BF14:
	// rlwimi r31,r29,16,8,15
	r31.u64 = (__builtin_rotateleft32(r29.u32, 16) & 0xFF0000) | (r31.u64 & 0xFFFFFFFFFF00FFFF);
	// li r11,801
	r11.s64 = 801;
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
	// rlwimi r31,r11,27,16,31
	r31.u64 = (__builtin_rotateleft32(r11.u32, 27) & 0xFFFF) | (r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r11,27,3,4
	r31.u64 = (__builtin_rotateleft32(r11.u32, 27) & 0x18000000) | (r31.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8249BF38"))) PPC_WEAK_FUNC(sub_8249BF38);
PPC_FUNC_IMPL(__imp__sub_8249BF38) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r22,r10
	r22.u64 = ctx.r10.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm r11,r28,21,3,10
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 21) & 0x1FE00000;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r23,0(r22)
	r23.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r25,r7
	r25.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r31,13
	cr6.compare<int32_t>(r31.s32, 13, xer);
	// ori r29,r11,23
	r29.u64 = r11.u64 | 23;
	// ble cr6,0x8249bf7c
	if (!cr6.gt) goto loc_8249BF7C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249BF7C:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(r27.u32, 16, xer);
	// blt cr6,0x8249bf88
	if (cr6.lt) goto loc_8249BF88;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249BF88:
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(r31.s32, 5, xer);
	// bne cr6,0x8249bfe4
	if (!cr6.eq) goto loc_8249BFE4;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8249bfa4
	if (!cr6.lt) goto loc_8249BFA4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8249BFA4:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249bfc0
	if (!cr6.eq) goto loc_8249BFC0;
	// li r26,0
	r26.s64 = 0;
	// b 0x8249bfcc
	goto loc_8249BFCC;
loc_8249BFC0:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8249bfcc
	if (!cr6.eq) goto loc_8249BFCC;
	// li r26,1
	r26.s64 = 1;
loc_8249BFCC:
	// li r11,5
	r11.s64 = 5;
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// rlwimi r29,r11,16,11,15
	r29.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x1F0000) | (r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// blt cr6,0x8249c014
	if (cr6.lt) goto loc_8249C014;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x8249c014
	goto loc_8249C014;
loc_8249BFE4:
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(r31.s32, 10, xer);
	// bne cr6,0x8249bff8
	if (!cr6.eq) goto loc_8249BFF8;
	// li r11,1
	r11.s64 = 1;
	// rlwimi r29,r11,17,11,15
	r29.u64 = (__builtin_rotateleft32(r11.u32, 17) & 0x1F0000) | (r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x8249c014
	goto loc_8249C014;
loc_8249BFF8:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// rlwinm r10,r28,21,0,10
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 21) & 0xFFE00000;
	// rlwinm r11,r11,25,0,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0xFE000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// li r10,5
	ctx.r10.s64 = 5;
	// rlwimi r29,r11,0,3,10
	r29.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x1FE00000) | (r29.u64 & 0xFFFFFFFFE01FFFFF);
	// rlwimi r29,r10,16,11,15
	r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x1F0000) | (r29.u64 & 0xFFFFFFFFFFE0FFFF);
loc_8249C014:
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(r27.u32, 16, xer);
	// blt cr6,0x8249c020
	if (cr6.lt) goto loc_8249C020;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C020:
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
	// lwz r31,16(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r10,12
	ctx.r10.s64 = 12;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stwx r10,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r10.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r27,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r27.u32);
	// bl 0x8249be38
	sub_8249BE38(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x8249c0a8
	if (!cr6.eq) goto loc_8249C0A8;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// bne cr6,0x8249c0a8
	if (!cr6.eq) goto loc_8249C0A8;
	// cmpwi cr6,r8,3
	cr6.compare<int32_t>(ctx.r8.s32, 3, xer);
	// bne cr6,0x8249c0a8
	if (!cr6.eq) goto loc_8249C0A8;
	// cmpwi cr6,r9,3
	cr6.compare<int32_t>(ctx.r9.s32, 3, xer);
	// bne cr6,0x8249c0a8
	if (!cr6.eq) goto loc_8249C0A8;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x8249c0a8
	if (!cr6.eq) goto loc_8249C0A8;
	// clrlwi r11,r29,1
	r11.u64 = r29.u32 & 0x7FFFFFFF;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r11,r23,4
	r11.s64 = r23.s64 + 4;
	// b 0x8249c0d0
	goto loc_8249C0D0;
loc_8249C0A8:
	// rlwimi r10,r26,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(r26.u32, 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// oris r11,r29,32768
	r11.u64 = r29.u64 | 2147483648;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r11,r23,4
	r11.s64 = r23.s64 + 4;
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8249C0D0:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,4
	ctx.r9.s64 = r11.s64 + 4;
	// rlwimi r27,r10,18,0,15
	r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stw r9,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8249C0EC"))) PPC_WEAK_FUNC(sub_8249C0EC);
PPC_FUNC_IMPL(__imp__sub_8249C0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249C0F0"))) PPC_WEAK_FUNC(sub_8249C0F0);
PPC_FUNC_IMPL(__imp__sub_8249C0F0) {
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
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r27,0(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// beq cr6,0x8249c138
	if (cr6.eq) goto loc_8249C138;
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// beq cr6,0x8249c150
	if (cr6.eq) goto loc_8249C150;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8249c190
	goto loc_8249C190;
loc_8249C138:
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// li r31,0
	r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r29,r11,18
	r29.s64 = r11.s64 + 18;
	// b 0x8249c190
	goto loc_8249C190;
loc_8249C150:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// li r29,17
	r29.s64 = 17;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8249c168
	if (!cr6.lt) goto loc_8249C168;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8249C168:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249c184
	if (!cr6.eq) goto loc_8249C184;
	// li r25,0
	r25.s64 = 0;
	// b 0x8249c190
	goto loc_8249C190;
loc_8249C184:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8249c190
	if (!cr6.eq) goto loc_8249C190;
	// li r25,1
	r25.s64 = 1;
loc_8249C190:
	// cmplwi cr6,r28,16
	cr6.compare<uint32_t>(r28.u32, 16, xer);
	// blt cr6,0x8249c19c
	if (cr6.lt) goto loc_8249C19C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C19C:
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stwx r29,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, r29.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r31,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r31.u32);
	// bl 0x8249be38
	sub_8249BE38(ctx, base);
	// cntlzw r11,r25
	r11.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r31,r29,16,10,15
	r31.u64 = (__builtin_rotateleft32(r29.u32, 16) & 0x3F0000) | (r31.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r10,r11,2,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// li r10,22
	ctx.r10.s64 = 22;
	// rlwimi r11,r9,2,0,29
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (r11.u64 & 0xFFFFFFFF00000003);
	// clrlwi r9,r31,10
	ctx.r9.u64 = r31.u32 & 0x3FFFFF;
	// rlwimi r8,r11,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
	// rlwimi r10,r8,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r10,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8249C230"))) PPC_WEAK_FUNC(sub_8249C230);
PPC_FUNC_IMPL(__imp__sub_8249C230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r31,0(r21)
	r31.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8249c26c
	if (cr6.eq) goto loc_8249C26C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C26C:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x8249c280
	if (!cr6.lt) goto loc_8249C280;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C280:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r22,r11,4
	r22.s64 = r11.s64 + 4;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r11,r30
	r11.u64 = r30.u64;
	// clrlwi r31,r30,21
	r31.u64 = r30.u32 & 0x7FF;
	// rlwimi r11,r30,12,21,23
	r11.u64 = (__builtin_rotateleft32(r30.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,24,27,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// bne cr6,0x8249c318
	if (!cr6.eq) goto loc_8249C318;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// blt cr6,0x8249c2d8
	if (cr6.lt) goto loc_8249C2D8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,5105
	ctx.r5.s64 = 5105;
	// addi r6,r11,19708
	ctx.r6.s64 = r11.s64 + 19708;
loc_8249C2C0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8249c468
	goto loc_8249C468;
loc_8249C2D8:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r4,r29,0,1,4
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x78000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249be98
	sub_8249BE98(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8249c2fc
	if (!cr6.lt) goto loc_8249C2FC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8249C2FC:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// slw r11,r10,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// b 0x8249c460
	goto loc_8249C460;
loc_8249C318:
	// rlwinm r27,r30,0,12,15
	r27.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xF0000;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8249c388
	if (cr6.eq) goto loc_8249C388;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8249c350
	if (cr6.eq) goto loc_8249C350;
	// cmpwi cr6,r11,17
	cr6.compare<int32_t>(r11.s32, 17, xer);
	// beq cr6,0x8249c33c
	if (cr6.eq) goto loc_8249C33C;
loc_8249C334:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x8249c460
	goto loc_8249C460;
loc_8249C33C:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bge cr6,0x8249c460
	if (!cr6.lt) goto loc_8249C460;
	// b 0x8249c334
	goto loc_8249C334;
loc_8249C350:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x8249c364
	if (cr6.lt) goto loc_8249C364;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C364:
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// blt cr6,0x8249c370
	if (cr6.lt) goto loc_8249C370;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C370:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-2088
	ctx.r7.s64 = r11.s64 + -2088;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// b 0x8249c44c
	goto loc_8249C44C;
loc_8249C388:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x8249c414
	if (cr6.lt) goto loc_8249C414;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// blt cr6,0x8249c3a4
	if (cr6.lt) goto loc_8249C3A4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C3A4:
	// clrlwi r4,r29,28
	ctx.r4.u64 = r29.u32 & 0xF;
	// rlwinm r6,r30,10,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 10) & 0x1;
	// rlwinm r11,r29,16,28,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xF;
	// cmpwi cr6,r4,10
	cr6.compare<int32_t>(ctx.r4.s32, 10, xer);
	// bne cr6,0x8249c3bc
	if (!cr6.eq) goto loc_8249C3BC;
	// li r6,1
	ctx.r6.s64 = 1;
loc_8249C3BC:
	// cmpwi cr6,r4,5
	cr6.compare<int32_t>(ctx.r4.s32, 5, xer);
	// bne cr6,0x8249c3f0
	if (!cr6.eq) goto loc_8249C3F0;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x8249c3f0
	if (cr6.lt) goto loc_8249C3F0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// addi r5,r10,19592
	ctx.r5.s64 = ctx.r10.s64 + 19592;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5106
	ctx.r5.s64 = 5106;
	// b 0x8249c2c0
	goto loc_8249C2C0;
loc_8249C3F0:
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r7,r10,-2072
	ctx.r7.s64 = ctx.r10.s64 + -2072;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249bf38
	sub_8249BF38(ctx, base);
	// b 0x8249c460
	goto loc_8249C460;
loc_8249C414:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8249c428
	if (!cr6.eq) goto loc_8249C428;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-2120
	r30.s64 = r11.s64 + -2120;
	// b 0x8249c43c
	goto loc_8249C43C;
loc_8249C428:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// addi r30,r11,-2104
	r30.s64 = r11.s64 + -2104;
	// blt cr6,0x8249c43c
	if (cr6.lt) goto loc_8249C43C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C43C:
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249C44C:
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8249c0f0
	sub_8249C0F0(ctx, base);
loc_8249C460:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r22.u32);
loc_8249C468:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8249C470"))) PPC_WEAK_FUNC(sub_8249C470);
PPC_FUNC_IMPL(__imp__sub_8249C470) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r11,-1
	r11.s64 = -65536;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// lwz r26,16(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x8249c49c
	if (cr6.lt) goto loc_8249C49C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C49C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8249c4f4
	if (!cr6.gt) goto loc_8249C4F4;
loc_8249C4AC:
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// srw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249c4e4
	if (cr0.eq) goto loc_8249C4E4;
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// blt cr6,0x8249c4cc
	if (cr6.lt) goto loc_8249C4CC;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C4CC:
	// lis r11,2048
	r11.s64 = 134217728;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// ori r11,r11,25
	r11.u64 = r11.u64 | 25;
	// rlwimi r11,r31,16,8,15
	r11.u64 = (__builtin_rotateleft32(r31.u32, 16) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_8249C4E4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8249c4ac
	if (cr6.lt) goto loc_8249C4AC;
loc_8249C4F4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8249c550
	if (!cr6.gt) goto loc_8249C550;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r30,r11,-2088
	r30.s64 = r11.s64 + -2088;
loc_8249C50C:
	// lwz r11,196(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 196);
	// srw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 >> (r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249c540
	if (cr0.eq) goto loc_8249C540;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = r31.s64 + 2;
	// bl 0x8249c0f0
	sub_8249C0F0(ctx, base);
loc_8249C540:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8249c50c
	if (cr6.lt) goto loc_8249C50C;
loc_8249C550:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r11,-2104
	r30.s64 = r11.s64 + -2104;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r28,r11,-2120
	r28.s64 = r11.s64 + -2120;
loc_8249C564:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249c5a8
	if (cr6.eq) goto loc_8249C5A8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// beq cr6,0x8249c588
	if (cr6.eq) goto loc_8249C588;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_8249C588:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249c0f0
	sub_8249C0F0(ctx, base);
loc_8249C5A8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// blt cr6,0x8249c564
	if (cr6.lt) goto loc_8249C564;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8249C5BC"))) PPC_WEAK_FUNC(sub_8249C5BC);
PPC_FUNC_IMPL(__imp__sub_8249C5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249C5C0"))) PPC_WEAK_FUNC(sub_8249C5C0);
PPC_FUNC_IMPL(__imp__sub_8249C5C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// lis r11,-1
	r11.s64 = -65536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// lwz r24,16(r23)
	r24.u64 = PPC_LOAD_U32(r23.u32 + 16);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8249c5f0
	if (cr6.lt) goto loc_8249C5F0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C5F0:
	// lwz r11,432(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 432);
	// lwz r31,0(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249c64c
	if (cr6.eq) goto loc_8249C64C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249c64c
	if (cr0.eq) goto loc_8249C64C;
	// lwz r11,424(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 424);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(r11.u32, 28, xer);
	// blt cr6,0x8249c61c
	if (cr6.lt) goto loc_8249C61C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C61C:
	// lwz r11,424(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 424);
	// lwz r10,432(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 432);
	// addi r11,r11,25
	r11.s64 = r11.s64 + 25;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r24
	PPC_STORE_U32(r11.u32 + r24.u32, ctx.r10.u32);
	// lwz r11,424(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 424);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// stw r31,204(r11)
	PPC_STORE_U32(r11.u32 + 204, r31.u32);
	// lwz r11,424(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 424);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,424(r24)
	PPC_STORE_U32(r24.u32 + 424, r11.u32);
loc_8249C64C:
	// addi r21,r31,4
	r21.s64 = r31.s64 + 4;
	// stw r31,432(r24)
	PPC_STORE_U32(r24.u32 + 432, r31.u32);
	// lhz r27,2(r31)
	r27.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249c898
	if (cr0.eq) goto loc_8249C898;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// clrlwi r31,r11,21
	r31.u64 = r11.u32 & 0x7FF;
	// rlwinm r26,r9,24,27,31
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// li r22,1
	r22.s64 = 1;
	// bge cr6,0x8249c790
	if (!cr6.lt) goto loc_8249C790;
	// addi r11,r27,-64
	r11.s64 = r27.s64 + -64;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// bgt cr6,0x8249c6e8
	if (cr6.gt) goto loc_8249C6E8;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,19752
	r12.s64 = r12.s64 + 19752;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32182
	r12.s64 = -2109079552;
	// addi r12,r12,-14644
	r12.s64 = r12.s64 + -14644;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8249C6E0;
	case 1:
		goto loc_8249C6E0;
	case 2:
		goto loc_8249C6CC;
	case 3:
		goto loc_8249C6CC;
	case 4:
		goto loc_8249C6CC;
	case 5:
		goto loc_8249C6D8;
	case 6:
		goto loc_8249C6D8;
	case 7:
		goto loc_8249C6E0;
	case 8:
		goto loc_8249C6CC;
	case 9:
		goto loc_8249C6E0;
	case 10:
		goto loc_8249C6CC;
	case 11:
		goto loc_8249C6E8;
	case 12:
		goto loc_8249C6CC;
	case 13:
		goto loc_8249C6CC;
	case 14:
		goto loc_8249C6E8;
	case 15:
		goto loc_8249C6E8;
	case 16:
		goto loc_8249C6E8;
	case 17:
		goto loc_8249C6E8;
	case 18:
		goto loc_8249C6D8;
	case 19:
		goto loc_8249C6CC;
	case 20:
		goto loc_8249C6D0;
	case 21:
		goto loc_8249C6D0;
	case 22:
		goto loc_8249C6D0;
	default:
		__builtin_unreachable();
	}
loc_8249C6CC:
	// mr r29,r22
	r29.u64 = r22.u64;
loc_8249C6D0:
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x8249c6f0
	goto loc_8249C6F0;
loc_8249C6D8:
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x8249c6f0
	goto loc_8249C6F0;
loc_8249C6E0:
	// mr r28,r22
	r28.u64 = r22.u64;
	// b 0x8249c6f4
	goto loc_8249C6F4;
loc_8249C6E8:
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(r26.u32, 3, xer);
	// bne cr6,0x8249c6f4
	if (!cr6.eq) goto loc_8249C6F4;
loc_8249C6F0:
	// mr r25,r22
	r25.u64 = r22.u64;
loc_8249C6F4:
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// blt cr6,0x8249c700
	if (cr6.lt) goto loc_8249C700;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C700:
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(r26.u32, 3, xer);
	// bne cr6,0x8249c88c
	if (!cr6.eq) goto loc_8249C88C;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8249c744
	if (cr6.eq) goto loc_8249C744;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// slw r11,r22,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r22.u32 << (r31.u8 & 0x3F));
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(r31.u32, 32, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,12(r23)
	PPC_STORE_U32(r23.u32 + 12, r11.u32);
	// blt cr6,0x8249c72c
	if (cr6.lt) goto loc_8249C72C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C72C:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8249c740
	if (!cr6.lt) goto loc_8249C740;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8249C740:
	// stw r11,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r11.u32);
loc_8249C744:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8249c774
	if (cr6.eq) goto loc_8249C774;
	// lwz r9,196(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 196);
	// slw r10,r22,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (r22.u32 << (r31.u8 & 0x3F));
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,196(r24)
	PPC_STORE_U32(r24.u32 + 196, ctx.r10.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8249c770
	if (!cr6.lt) goto loc_8249C770;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8249C770:
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
loc_8249C774:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x8249c88c
	if (cr6.eq) goto loc_8249C88C;
	// addi r11,r31,41
	r11.s64 = r31.s64 + 41;
	// addi r10,r31,6
	ctx.r10.s64 = r31.s64 + 6;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r24
	PPC_STORE_U32(r11.u32 + r24.u32, ctx.r10.u32);
	// b 0x8249c88c
	goto loc_8249C88C;
loc_8249C790:
	// beq cr6,0x8249c798
	if (cr6.eq) goto loc_8249C798;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C798:
	// cmplwi cr6,r27,65
	cr6.compare<uint32_t>(r27.u32, 65, xer);
	// beq cr6,0x8249c7e0
	if (cr6.eq) goto loc_8249C7E0;
	// cmplwi cr6,r27,66
	cr6.compare<uint32_t>(r27.u32, 66, xer);
	// bne cr6,0x8249c88c
	if (!cr6.eq) goto loc_8249C88C;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// slw r11,r22,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r22.u32 << (r31.u8 & 0x3F));
	// cmplwi cr6,r31,32
	cr6.compare<uint32_t>(r31.u32, 32, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,12(r23)
	PPC_STORE_U32(r23.u32 + 12, r11.u32);
	// blt cr6,0x8249c7c4
	if (cr6.lt) goto loc_8249C7C4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C7C4:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8249c7d8
	if (!cr6.lt) goto loc_8249C7D8;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8249C7D8:
	// stw r11,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r11.u32);
	// b 0x8249c88c
	goto loc_8249C88C;
loc_8249C7E0:
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(r26.u32, 3, xer);
	// bne cr6,0x8249c88c
	if (!cr6.eq) goto loc_8249C88C;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8249c7fc
	if (!cr6.lt) goto loc_8249C7FC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8249C7FC:
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// b 0x8249c88c
	goto loc_8249C88C;
loc_8249C804:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// clrlwi r31,r11,21
	r31.u64 = r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x8249c868
	if (!cr6.eq) goto loc_8249C868;
	// addi r11,r31,41
	r11.s64 = r31.s64 + 41;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	r11.u64 = PPC_LOAD_U32(r11.u32 + r24.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8249c888
	if (!cr6.eq) goto loc_8249C888;
	// cmplwi cr6,r31,8
	cr6.compare<uint32_t>(r31.u32, 8, xer);
	// blt cr6,0x8249c83c
	if (cr6.lt) goto loc_8249C83C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C83C:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8249c850
	if (!cr6.lt) goto loc_8249C850;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8249C850:
	// stw r11,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r11.u32);
	// slw r11,r22,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r22.u32 << (r31.u8 & 0x3F));
	// lwz r10,196(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 196);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,196(r24)
	PPC_STORE_U32(r24.u32 + 196, r11.u32);
	// b 0x8249c888
	goto loc_8249C888;
loc_8249C868:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x8249c888
	if (!cr6.eq) goto loc_8249C888;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// blt cr6,0x8249c87c
	if (cr6.lt) goto loc_8249C87C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249C87C:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r22,r11,r24
	PPC_STORE_U32(r11.u32 + r24.u32, r22.u32);
loc_8249C888:
	// addi r21,r21,4
	r21.s64 = r21.s64 + 4;
loc_8249C88C:
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249c804
	if (!cr0.eq) goto loc_8249C804;
loc_8249C898:
	// stw r21,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r21.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8249C8A4"))) PPC_WEAK_FUNC(sub_8249C8A4);
PPC_FUNC_IMPL(__imp__sub_8249C8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249C8A8"))) PPC_WEAK_FUNC(sub_8249C8A8);
PPC_FUNC_IMPL(__imp__sub_8249C8A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-1
	r11.s64 = -65536;
	// addi r31,r30,4
	r31.s64 = r30.s64 + 4;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r29,0(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8249c95c
	if (cr6.lt) goto loc_8249C95C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x8249c95c
	goto loc_8249C95C;
loc_8249C8E4:
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// bne 0x8249c988
	if (!cr0.eq) goto loc_8249C988;
	// cmplwi cr6,r10,65534
	cr6.compare<uint32_t>(ctx.r10.u32, 65534, xer);
	// bne cr6,0x8249c90c
	if (!cr6.eq) goto loc_8249C90C;
	// rlwinm r11,r11,16,17,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// b 0x8249c948
	goto loc_8249C948;
loc_8249C90C:
	// cmplwi cr6,r10,65533
	cr6.compare<uint32_t>(ctx.r10.u32, 65533, xer);
	// beq cr6,0x8249c944
	if (cr6.eq) goto loc_8249C944;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8249c944
	if (cr6.eq) goto loc_8249C944;
	// cmplwi cr6,r10,81
	cr6.compare<uint32_t>(ctx.r10.u32, 81, xer);
	// bne cr6,0x8249c92c
	if (!cr6.eq) goto loc_8249C92C;
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
	// b 0x8249c948
	goto loc_8249C948;
loc_8249C92C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249c5c0
	sub_8249C5C0(ctx, base);
	// lwz r31,80(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8249c94c
	goto loc_8249C94C;
loc_8249C944:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8249C948:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
loc_8249C94C:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bgt cr6,0x8249c988
	if (cr6.gt) goto loc_8249C988;
loc_8249C95C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,65535
	cr6.compare<uint32_t>(r11.u32, 65535, xer);
	// bne cr6,0x8249c8e4
	if (!cr6.eq) goto loc_8249C8E4;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r11,r28
	cr6.compare<int32_t>(r11.s32, r28.s32, xer);
	// bne cr6,0x8249c988
	if (!cr6.eq) goto loc_8249C988;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249C980:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
loc_8249C988:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8249c980
	goto loc_8249C980;
}

__attribute__((alias("__imp__sub_8249C994"))) PPC_WEAK_FUNC(sub_8249C994);
PPC_FUNC_IMPL(__imp__sub_8249C994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249C998"))) PPC_WEAK_FUNC(sub_8249C998);
PPC_FUNC_IMPL(__imp__sub_8249C998) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r11,r11,16379
	r11.s64 = r11.s64 + 16379;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x8249c9e4
	if (!cr0.eq) goto loc_8249C9E4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x8249ca24
	goto loc_8249CA24;
loc_8249C9E4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8249ca14
	if (cr0.eq) goto loc_8249CA14;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8249ca08
	if (cr0.eq) goto loc_8249CA08;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8249CA08:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_8249CA14:
	// add r11,r29,r30
	r11.u64 = r29.u64 + r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8249CA24:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8249CA2C"))) PPC_WEAK_FUNC(sub_8249CA2C);
PPC_FUNC_IMPL(__imp__sub_8249CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CA30"))) PPC_WEAK_FUNC(sub_8249CA30);
PPC_FUNC_IMPL(__imp__sub_8249CA30) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8249ca64
	if (cr6.lt) goto loc_8249CA64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x8249ca68
	if (!cr6.gt) goto loc_8249CA68;
loc_8249CA64:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249CA68:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,256
	cr6.compare<uint32_t>(ctx.r10.u32, 256, xer);
	// bge cr6,0x8249cab0
	if (!cr6.lt) goto loc_8249CAB0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x8249c998
	sub_8249C998(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8249CAB0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8249CABC"))) PPC_WEAK_FUNC(sub_8249CABC);
PPC_FUNC_IMPL(__imp__sub_8249CABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CAC0"))) PPC_WEAK_FUNC(sub_8249CAC0);
PPC_FUNC_IMPL(__imp__sub_8249CAC0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8249ca30
	sub_8249CA30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8249caf4
	if (cr0.eq) goto loc_8249CAF4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8249cbd4
	goto loc_8249CBD4;
loc_8249CAF4:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8249cb10
	if (!cr6.lt) goto loc_8249CB10;
	// lis r9,87
	ctx.r9.s64 = 5701632;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// b 0x8249cba0
	goto loc_8249CBA0;
loc_8249CB10:
	// lis r11,-1
	r11.s64 = -65536;
	// ori r11,r11,768
	r11.u64 = r11.u64 | 768;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8249cb84
	if (!cr6.lt) goto loc_8249CB84;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_8249CB2C:
	// lwz r8,160(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8249cb74
	if (cr0.eq) goto loc_8249CB74;
	// li r8,14
	ctx.r8.s64 = 14;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r5,r10,35
	ctx.r5.s64 = ctx.r10.s64 + 35;
	// rlwimi r7,r6,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r5,r8,18,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8249CB74:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// blt cr6,0x8249cb2c
	if (cr6.lt) goto loc_8249CB2C;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8249CB84:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249cbd0
	if (cr6.eq) goto loc_8249CBD0;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// lis r9,88
	ctx.r9.s64 = 5767168;
	// ori r7,r7,34
	ctx.r7.u64 = ctx.r7.u64 | 34;
loc_8249CBA0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,71
	ctx.r10.s64 = 71;
	// li r8,341
	ctx.r8.s64 = 341;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8249CBD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249CBD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8249CBDC"))) PPC_WEAK_FUNC(sub_8249CBDC);
PPC_FUNC_IMPL(__imp__sub_8249CBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CBE0"))) PPC_WEAK_FUNC(sub_8249CBE0);
PPC_FUNC_IMPL(__imp__sub_8249CBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r11,r24,12
	r11.s64 = r24.s64 + 12;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// stw r11,16(r26)
	PPC_STORE_U32(r26.u32 + 16, r11.u32);
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r21.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// rlwinm r9,r27,0,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// beq cr6,0x8249cc40
	if (cr6.eq) goto loc_8249CC40;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249CC40:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm r20,r31,30,2,31
	r20.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne 0x8249cc5c
	if (!cr0.eq) goto loc_8249CC5C;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8249CC5C:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r23,r10,512
	r23.u64 = ctx.r10.u64 | 512;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// blt cr6,0x8249cc74
	if (cr6.lt) goto loc_8249CC74;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8249CC74:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bge cr6,0x8249cce0
	if (!cr6.lt) goto loc_8249CCE0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8249c8a8
	sub_8249C8A8(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249ca30
	sub_8249CA30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8249ccd0
	if (cr0.eq) goto loc_8249CCD0;
loc_8249CCC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8249cfd4
	goto loc_8249CFD4;
loc_8249CCD0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8249c470
	sub_8249C470(ctx, base);
loc_8249CCE0:
	// addi r11,r21,4
	r11.s64 = r21.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// beq cr6,0x8249cf40
	if (cr6.eq) goto loc_8249CF40;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r25,r11,-27344
	r25.s64 = r11.s64 + -27344;
loc_8249CCFC:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249ca30
	sub_8249CA30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8249ccc8
	if (!cr0.eq) goto loc_8249CCC8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm. r8,r10,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8249cd30
	if (cr0.eq) goto loc_8249CD30;
loc_8249CD28:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// b 0x8249cf04
	goto loc_8249CF04;
loc_8249CD30:
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// bne cr6,0x8249cd4c
	if (!cr6.eq) goto loc_8249CD4C;
	// rlwinm r11,r10,16,17,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// b 0x8249cf00
	goto loc_8249CF00;
loc_8249CD4C:
	// cmplwi cr6,r11,65533
	cr6.compare<uint32_t>(r11.u32, 65533, xer);
	// beq cr6,0x8249cefc
	if (cr6.eq) goto loc_8249CEFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249cefc
	if (cr6.eq) goto loc_8249CEFC;
	// cmplwi cr6,r11,81
	cr6.compare<uint32_t>(r11.u32, 81, xer);
	// bne cr6,0x8249cd8c
	if (!cr6.eq) goto loc_8249CD8C;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// blt cr6,0x8249cd84
	if (cr6.lt) goto loc_8249CD84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8249bc88
	sub_8249BC88(ctx, base);
	// b 0x8249cf04
	goto loc_8249CF04;
loc_8249CD84:
	// addi r11,r9,24
	r11.s64 = ctx.r9.s64 + 24;
	// b 0x8249cf00
	goto loc_8249CF00;
loc_8249CD8C:
	// cmplwi cr6,r11,48
	cr6.compare<uint32_t>(r11.u32, 48, xer);
	// bne cr6,0x8249cdac
	if (!cr6.eq) goto loc_8249CDAC;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8249bd60
	sub_8249BD60(ctx, base);
	// b 0x8249cf04
	goto loc_8249CF04;
loc_8249CDAC:
	// cmplwi cr6,r11,47
	cr6.compare<uint32_t>(r11.u32, 47, xer);
	// bne cr6,0x8249ce40
	if (!cr6.eq) goto loc_8249CE40;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// bge cr6,0x8249cdc4
	if (!cr6.lt) goto loc_8249CDC4;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_8249CDC4:
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
	// lwz r28,0(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r31,r28,21
	r31.u64 = r28.u32 & 0x7FF;
	// cmplwi cr6,r31,16
	cr6.compare<uint32_t>(r31.u32, 16, xer);
	// blt cr6,0x8249cde8
	if (cr6.lt) goto loc_8249CDE8;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// li r31,15
	r31.s64 = 15;
loc_8249CDE8:
	// mr r11,r28
	r11.u64 = r28.u64;
	// rlwimi r11,r28,12,21,23
	r11.u64 = (__builtin_rotateleft32(r28.u32, 12) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	cr6.compare<uint32_t>(r11.u32, 3584, xer);
	// beq cr6,0x8249ce00
	if (cr6.eq) goto loc_8249CE00;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249CE00:
	// li r11,29
	r11.s64 = 29;
	// clrlwi r10,r31,16
	ctx.r10.u64 = r31.u32 & 0xFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x8249cf04
	goto loc_8249CF04;
loc_8249CE40:
	// cmplwi cr6,r11,31
	cr6.compare<uint32_t>(r11.u32, 31, xer);
	// bne cr6,0x8249ce7c
	if (!cr6.eq) goto loc_8249CE7C;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// bge cr6,0x8249ce54
	if (!cr6.lt) goto loc_8249CE54;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249CE54:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8249c230
	sub_8249C230(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8249cfd4
	if (!cr0.eq) goto loc_8249CFD4;
	// b 0x8249cf04
	goto loc_8249CF04;
loc_8249CE7C:
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(r11.u32, 28, xer);
	// bne cr6,0x8249cec8
	if (!cr6.eq) goto loc_8249CEC8;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8249ced0
	if (!cr6.eq) goto loc_8249CED0;
	// cmplw cr6,r27,r23
	cr6.compare<uint32_t>(r27.u32, r23.u32, xer);
	// bge cr6,0x8249cea0
	if (!cr6.lt) goto loc_8249CEA0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249CEA0:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8249cac0
	sub_8249CAC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8249cfd4
	if (!cr0.eq) goto loc_8249CFD4;
	// lwz r5,224(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 224);
	// lwz r11,228(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 228);
	// b 0x8249cee0
	goto loc_8249CEE0;
loc_8249CEC8:
	// cmplwi cr6,r11,97
	cr6.compare<uint32_t>(r11.u32, 97, xer);
	// bge cr6,0x8249cd28
	if (!cr6.lt) goto loc_8249CD28;
loc_8249CED0:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_8249CEE0:
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8249cf04
	goto loc_8249CF04;
loc_8249CEFC:
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
loc_8249CF00:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_8249CF04:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r11,r20
	cr6.compare<int32_t>(r11.s32, r20.s32, xer);
	// bgt cr6,0x8249cfdc
	if (cr6.gt) goto loc_8249CFDC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r22,r11
	r11.s64 = r11.s64 - r22.s64;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1024
	cr6.compare<int32_t>(r11.s32, 1024, xer);
	// blt cr6,0x8249cf30
	if (cr6.lt) goto loc_8249CF30;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249CF30:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,65535
	cr6.compare<uint32_t>(ctx.r10.u32, 65535, xer);
	// bne cr6,0x8249ccfc
	if (!cr6.eq) goto loc_8249CCFC;
loc_8249CF40:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmpw cr6,r11,r20
	cr6.compare<int32_t>(r11.s32, r20.s32, xer);
	// bne cr6,0x8249cfe0
	if (!cr6.eq) goto loc_8249CFE0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8249ca30
	sub_8249CA30(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8249ccc8
	if (!cr0.eq) goto loc_8249CCC8;
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8249cf98
	if (!cr6.eq) goto loc_8249CF98;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8249cac0
	sub_8249CAC0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8249cfd4
	if (!cr0.eq) goto loc_8249CFD4;
loc_8249CF98:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,40
	r11.s64 = 40;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r9,4(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// srawi r11,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r11.s64 = ctx.r10.s32 >> 2;
	// stw r11,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r11.u32);
	// ble cr6,0x8249cfd0
	if (!cr6.gt) goto loc_8249CFD0;
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249CFD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8249CFD4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
loc_8249CFDC:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
loc_8249CFE0:
	// bl 0x823b54e0
	sub_823B54E0(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8249cfd4
	goto loc_8249CFD4;
}

__attribute__((alias("__imp__sub_8249CFEC"))) PPC_WEAK_FUNC(sub_8249CFEC);
PPC_FUNC_IMPL(__imp__sub_8249CFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249CFF0"))) PPC_WEAK_FUNC(sub_8249CFF0);
PPC_FUNC_IMPL(__imp__sub_8249CFF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// subfic r9,r5,32
	xer.ca = ctx.r5.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r5.s64;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r3
	r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// lbz r8,3(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lbz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 33;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D044"))) PPC_WEAK_FUNC(sub_8249D044);
PPC_FUNC_IMPL(__imp__sub_8249D044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D048"))) PPC_WEAK_FUNC(sub_8249D048);
PPC_FUNC_IMPL(__imp__sub_8249D048) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfic r4,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r4.s64 = 32 - ctx.r10.s64;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// lbz r31,0(r11)
	r31.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// slw r6,r6,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// srw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// lbz r5,3(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// or r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 | ctx.r4.u64;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r11,r7,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// and r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 & r11.u64;
	// or r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 | ctx.r3.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 | r31.u64;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
loc_8249D0BC:
	// srw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// stb r10,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r10.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// blt cr6,0x8249d0bc
	if (cr6.lt) goto loc_8249D0BC;
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D0DC"))) PPC_WEAK_FUNC(sub_8249D0DC);
PPC_FUNC_IMPL(__imp__sub_8249D0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D0E0"))) PPC_WEAK_FUNC(sub_8249D0E0);
PPC_FUNC_IMPL(__imp__sub_8249D0E0) {
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
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r11,-26568
	r31.s64 = r11.s64 + -26568;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,1040(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1040);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249d2d0
	if (cr6.eq) goto loc_8249D2D0;
	// cmpwi cr6,r30,15
	cr6.compare<int32_t>(r30.s32, 15, xer);
	// blt cr6,0x8249d138
	if (cr6.lt) goto loc_8249D138;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,20028
	ctx.r5.s64 = r11.s64 + 20028;
	// b 0x8249d1f8
	goto loc_8249D1F8;
loc_8249D138:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mulli r28,r30,12
	r28.s64 = r30.s64 * 12;
	// addi r11,r11,-2056
	r11.s64 = r11.s64 + -2056;
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// lwzx r11,r28,r27
	r11.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249d15c
	if (!cr0.eq) goto loc_8249D15C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8249d2e4
	if (!cr6.eq) goto loc_8249D2E4;
loc_8249D15C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8249d2e4
	if (cr6.eq) goto loc_8249D2E4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r4,1022
	ctx.r4.s64 = 1022;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x8239f070
	sub_8239F070(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r11,26416
	ctx.r5.s64 = r11.s64 + 26416;
	// li r11,0
	r11.s64 = 0;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,1022(r31)
	PPC_STORE_U8(r31.u32 + 1022, r11.u8);
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// stb r11,1023(r31)
	PPC_STORE_U8(r31.u32 + 1023, r11.u8);
	// beq cr6,0x8249d1bc
	if (cr6.eq) goto loc_8249D1BC;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// bne cr6,0x8249d1e4
	if (!cr6.eq) goto loc_8249D1E4;
loc_8249D1BC:
	// addi r11,r31,1052
	r11.s64 = r31.s64 + 1052;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1036);
	// addi r10,r30,-3
	ctx.r10.s64 = r30.s64 + -3;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r4,r10,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249D1E4:
	// lwzx r11,r28,r27
	r11.u64 = PPC_LOAD_U32(r28.u32 + r27.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8249d218
	if (!cr6.eq) goto loc_8249D218;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_8249D1F8:
	// addi r10,r31,1040
	ctx.r10.s64 = r31.s64 + 1040;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1036);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,20020
	ctx.r4.s64 = r11.s64 + 20020;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8249d2e4
	goto loc_8249D2E4;
loc_8249D218:
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x8249d2d0
	if (!cr6.eq) goto loc_8249D2D0;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-25544(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249d2d0
	if (cr6.eq) goto loc_8249D2D0;
	// lis r28,-32126
	r28.s64 = -2105409536;
	// lwz r11,-25536(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -25536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249d2d0
	if (cr6.eq) goto loc_8249D2D0;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// lwz r11,-25540(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -25540);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8249d2d0
	if (cr6.eq) goto loc_8249D2D0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1036);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,20008
	ctx.r4.s64 = r11.s64 + 20008;
	// lwz r11,-25544(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25544);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8249d2e4
	if (cr0.eq) goto loc_8249D2E4;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8249D27C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8249d27c
	if (!cr6.eq) goto loc_8249D27C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1036);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,-25536(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -25536);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1036);
	// lwz r11,-25540(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -25540);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8249d2e4
	goto loc_8249D2E4;
loc_8249D2D0:
	// addi r11,r31,1048
	r11.s64 = r31.s64 + 1048;
	// lwz r3,1036(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 1036);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8249D2E4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8249D2EC"))) PPC_WEAK_FUNC(sub_8249D2EC);
PPC_FUNC_IMPL(__imp__sub_8249D2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D2F0"))) PPC_WEAK_FUNC(sub_8249D2F0);
PPC_FUNC_IMPL(__imp__sub_8249D2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,-25544(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25544);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,-25536(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25536);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,-25540(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25540);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-25532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -25532);
	// lwz r11,-25544(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25544);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8249D340"))) PPC_WEAK_FUNC(sub_8249D340);
PPC_FUNC_IMPL(__imp__sub_8249D340) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D344"))) PPC_WEAK_FUNC(sub_8249D344);
PPC_FUNC_IMPL(__imp__sub_8249D344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D348"))) PPC_WEAK_FUNC(sub_8249D348);
PPC_FUNC_IMPL(__imp__sub_8249D348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-25540(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25540);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r3,-25532(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -25532);
	// lwz r11,-25540(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -25540);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8249D378"))) PPC_WEAK_FUNC(sub_8249D378);
PPC_FUNC_IMPL(__imp__sub_8249D378) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D37C"))) PPC_WEAK_FUNC(sub_8249D37C);
PPC_FUNC_IMPL(__imp__sub_8249D37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D380"))) PPC_WEAK_FUNC(sub_8249D380);
PPC_FUNC_IMPL(__imp__sub_8249D380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-25516
	r11.s64 = r11.s64 + -25516;
	// stw r4,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, ctx.r4.u32);
	// lis r4,-32126
	ctx.r4.s64 = -2105409536;
	// stw r3,-16(r11)
	PPC_STORE_U32(r11.u32 + -16, ctx.r3.u32);
	// stw r8,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r8.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r5,-25544(r4)
	PPC_STORE_U32(ctx.r4.u32 + -25544, ctx.r5.u32);
	// lis r5,-32126
	ctx.r5.s64 = -2105409536;
	// stw r6,-25540(r5)
	PPC_STORE_U32(ctx.r5.u32 + -25540, ctx.r6.u32);
	// lis r6,-32126
	ctx.r6.s64 = -2105409536;
	// stw r7,-25536(r6)
	PPC_STORE_U32(ctx.r6.u32 + -25536, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D3B8"))) PPC_WEAK_FUNC(sub_8249D3B8);
PPC_FUNC_IMPL(__imp__sub_8249D3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D40C"))) PPC_WEAK_FUNC(sub_8249D40C);
PPC_FUNC_IMPL(__imp__sub_8249D40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D410"))) PPC_WEAK_FUNC(sub_8249D410);
PPC_FUNC_IMPL(__imp__sub_8249D410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r8,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r8.u8);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8249D46C"))) PPC_WEAK_FUNC(sub_8249D46C);
PPC_FUNC_IMPL(__imp__sub_8249D46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249D470"))) PPC_WEAK_FUNC(sub_8249D470);
PPC_FUNC_IMPL(__imp__sub_8249D470) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x8239bcc0
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r10,r11,-3104
	ctx.r10.s64 = r11.s64 + -3104;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r11,19884
	ctx.r5.s64 = r11.s64 + 19884;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r4,r11,6776
	ctx.r4.s64 = r11.s64 + 6776;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r3,r11,6780
	ctx.r3.s64 = r11.s64 + 6780;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r31,r11,21400
	r31.s64 = r11.s64 + 21400;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,21392
	r30.s64 = r11.s64 + 21392;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,21384
	r29.s64 = r11.s64 + 21384;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,21376
	r28.s64 = r11.s64 + 21376;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,21368
	r27.s64 = r11.s64 + 21368;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r26,r11,-17052
	r26.s64 = r11.s64 + -17052;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r25,r11,-25800
	r25.s64 = r11.s64 + -25800;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r24,r11,15012
	r24.s64 = r11.s64 + 15012;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,21552
	r23.s64 = r11.s64 + 21552;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r22,r11,-17068
	r22.s64 = r11.s64 + -17068;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r21,r11,-17076
	r21.s64 = r11.s64 + -17076;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r20,r11,14996
	r20.s64 = r11.s64 + 14996;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r19,r11,15000
	r19.s64 = r11.s64 + 15000;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r18,r11,14556
	r18.s64 = r11.s64 + 14556;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r17,r11,28152
	r17.s64 = r11.s64 + 28152;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r16,r11,-17084
	r16.s64 = r11.s64 + -17084;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r15,r11,21536
	r15.s64 = r11.s64 + 21536;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r14,r11,21684
	r14.s64 = r11.s64 + 21684;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,21668
	r11.s64 = r11.s64 + 21668;
	// stw r11,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r11,r11,21652
	r11.s64 = r11.s64 + 21652;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r9,r11,21468
	ctx.r9.s64 = r11.s64 + 21468;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r8,r11,21460
	ctx.r8.s64 = r11.s64 + 21460;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r7,r11,21452
	ctx.r7.s64 = r11.s64 + 21452;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r6,r11,21444
	ctx.r6.s64 = r11.s64 + 21444;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,14980
	r11.s64 = r11.s64 + 14980;
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,14844
	r11.s64 = r11.s64 + 14844;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, r11.u32);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r11,r11,-1096
	r11.s64 = r11.s64 + -1096;
	// stw r10,-760(r11)
	PPC_STORE_U32(r11.u32 + -760, ctx.r10.u32);
	// stw r5,-756(r11)
	PPC_STORE_U32(r11.u32 + -756, ctx.r5.u32);
	// stw r4,-752(r11)
	PPC_STORE_U32(r11.u32 + -752, ctx.r4.u32);
	// stw r3,-748(r11)
	PPC_STORE_U32(r11.u32 + -748, ctx.r3.u32);
	// stw r31,-744(r11)
	PPC_STORE_U32(r11.u32 + -744, r31.u32);
	// stw r30,-740(r11)
	PPC_STORE_U32(r11.u32 + -740, r30.u32);
	// stw r29,-736(r11)
	PPC_STORE_U32(r11.u32 + -736, r29.u32);
	// stw r28,-732(r11)
	PPC_STORE_U32(r11.u32 + -732, r28.u32);
	// stw r27,-728(r11)
	PPC_STORE_U32(r11.u32 + -728, r27.u32);
	// stw r26,-724(r11)
	PPC_STORE_U32(r11.u32 + -724, r26.u32);
	// stw r25,-720(r11)
	PPC_STORE_U32(r11.u32 + -720, r25.u32);
	// stw r24,-716(r11)
	PPC_STORE_U32(r11.u32 + -716, r24.u32);
	// stw r23,-712(r11)
	PPC_STORE_U32(r11.u32 + -712, r23.u32);
	// stw r22,-708(r11)
	PPC_STORE_U32(r11.u32 + -708, r22.u32);
	// stw r21,-704(r11)
	PPC_STORE_U32(r11.u32 + -704, r21.u32);
	// stw r20,-700(r11)
	PPC_STORE_U32(r11.u32 + -700, r20.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r19,-696(r11)
	PPC_STORE_U32(r11.u32 + -696, r19.u32);
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// lwz r10,-176(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lis r3,-32248
	ctx.r3.s64 = -2113404928;
	// stw r18,-692(r11)
	PPC_STORE_U32(r11.u32 + -692, r18.u32);
	// lis r31,-32246
	r31.s64 = -2113273856;
	// stw r17,-688(r11)
	PPC_STORE_U32(r11.u32 + -688, r17.u32);
	// lis r30,-32246
	r30.s64 = -2113273856;
	// stw r16,-684(r11)
	PPC_STORE_U32(r11.u32 + -684, r16.u32);
	// lis r29,-32248
	r29.s64 = -2113404928;
	// stw r15,-680(r11)
	PPC_STORE_U32(r11.u32 + -680, r15.u32);
	// lis r28,-32248
	r28.s64 = -2113404928;
	// stw r14,-676(r11)
	PPC_STORE_U32(r11.u32 + -676, r14.u32);
	// lis r27,-32246
	r27.s64 = -2113273856;
	// stw r10,-672(r11)
	PPC_STORE_U32(r11.u32 + -672, ctx.r10.u32);
	// lis r26,-32246
	r26.s64 = -2113273856;
	// lwz r10,-172(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lis r25,-32246
	r25.s64 = -2113273856;
	// lis r24,-32246
	r24.s64 = -2113273856;
	// lis r23,-32246
	r23.s64 = -2113273856;
	// lis r22,-32248
	r22.s64 = -2113404928;
	// lis r21,-32248
	r21.s64 = -2113404928;
	// stw r10,-668(r11)
	PPC_STORE_U32(r11.u32 + -668, ctx.r10.u32);
	// lis r20,-32253
	r20.s64 = -2113732608;
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// addi r4,r4,21432
	ctx.r4.s64 = ctx.r4.s64 + 21432;
	// stw r9,-664(r11)
	PPC_STORE_U32(r11.u32 + -664, ctx.r9.u32);
	// addi r3,r3,-17240
	ctx.r3.s64 = ctx.r3.s64 + -17240;
	// stw r8,-660(r11)
	PPC_STORE_U32(r11.u32 + -660, ctx.r8.u32);
	// addi r31,r31,21420
	r31.s64 = r31.s64 + 21420;
	// stw r7,-656(r11)
	PPC_STORE_U32(r11.u32 + -656, ctx.r7.u32);
	// addi r30,r30,21408
	r30.s64 = r30.s64 + 21408;
	// stw r6,-652(r11)
	PPC_STORE_U32(r11.u32 + -652, ctx.r6.u32);
	// addi r29,r29,-17248
	r29.s64 = r29.s64 + -17248;
	// stw r10,-648(r11)
	PPC_STORE_U32(r11.u32 + -648, ctx.r10.u32);
	// addi r28,r28,-17256
	r28.s64 = r28.s64 + -17256;
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// addi r27,r27,21644
	r27.s64 = r27.s64 + 21644;
	// addi r26,r26,21636
	r26.s64 = r26.s64 + 21636;
	// addi r25,r25,21628
	r25.s64 = r25.s64 + 21628;
	// addi r24,r24,21620
	r24.s64 = r24.s64 + 21620;
	// addi r23,r23,21612
	r23.s64 = r23.s64 + 21612;
	// stw r10,-644(r11)
	PPC_STORE_U32(r11.u32 + -644, ctx.r10.u32);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r22,r22,-17296
	r22.s64 = r22.s64 + -17296;
	// addi r10,r10,-1736
	ctx.r10.s64 = ctx.r10.s64 + -1736;
	// addi r21,r21,-17304
	r21.s64 = r21.s64 + -17304;
	// addi r20,r20,18976
	r20.s64 = r20.s64 + 18976;
	// lis r19,-32253
	r19.s64 = -2113732608;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r5,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r5.u32);
	// stw r5,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r5.u32);
	// stw r5,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r5.u32);
	// stw r5,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r5.u32);
	// stw r5,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r5.u32);
	// stw r5,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r5.u32);
	// stw r5,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r5.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// stw r5,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r5.u32);
	// stw r5,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r5.u32);
	// stw r5,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r5.u32);
	// stw r5,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r5.u32);
	// li r5,3
	ctx.r5.s64 = 3;
	// stw r5,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r5.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r5,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r5,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r5.u32);
	// lis r5,-32248
	ctx.r5.s64 = -2113404928;
	// addi r5,r5,-17208
	ctx.r5.s64 = ctx.r5.s64 + -17208;
	// lis r14,-32249
	r14.s64 = -2113470464;
	// stw r5,-400(r11)
	PPC_STORE_U32(r11.u32 + -400, ctx.r5.u32);
	// stw r4,-396(r11)
	PPC_STORE_U32(r11.u32 + -396, ctx.r4.u32);
	// lis r18,-32246
	r18.s64 = -2113273856;
	// addi r14,r14,15004
	r14.s64 = r14.s64 + 15004;
	// stw r3,-392(r11)
	PPC_STORE_U32(r11.u32 + -392, ctx.r3.u32);
	// stw r31,-388(r11)
	PPC_STORE_U32(r11.u32 + -388, r31.u32);
	// lis r17,-32249
	r17.s64 = -2113470464;
	// stw r30,-384(r11)
	PPC_STORE_U32(r11.u32 + -384, r30.u32);
	// addi r19,r19,20092
	r19.s64 = r19.s64 + 20092;
	// stw r29,-380(r11)
	PPC_STORE_U32(r11.u32 + -380, r29.u32);
	// lis r16,-32246
	r16.s64 = -2113273856;
	// stw r28,-376(r11)
	PPC_STORE_U32(r11.u32 + -376, r28.u32);
	// addi r18,r18,21344
	r18.s64 = r18.s64 + 21344;
	// stw r14,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, r14.u32);
	// li r14,2
	r14.s64 = 2;
	// stw r27,-372(r11)
	PPC_STORE_U32(r11.u32 + -372, r27.u32);
	// lis r15,-32246
	r15.s64 = -2113273856;
	// stw r26,-368(r11)
	PPC_STORE_U32(r11.u32 + -368, r26.u32);
	// addi r17,r17,15008
	r17.s64 = r17.s64 + 15008;
	// stw r25,-364(r11)
	PPC_STORE_U32(r11.u32 + -364, r25.u32);
	// addi r16,r16,21600
	r16.s64 = r16.s64 + 21600;
	// stw r24,-360(r11)
	PPC_STORE_U32(r11.u32 + -360, r24.u32);
	// addi r15,r15,21592
	r15.s64 = r15.s64 + 21592;
	// stw r14,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, r14.u32);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// stw r14,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, r14.u32);
	// lis r4,-32248
	ctx.r4.s64 = -2113404928;
	// stw r14,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, r14.u32);
	// addi r5,r5,21584
	ctx.r5.s64 = ctx.r5.s64 + 21584;
	// stw r14,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, r14.u32);
	// stw r14,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, r14.u32);
	// stw r14,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, r14.u32);
	// stw r14,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, r14.u32);
	// stw r14,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, r14.u32);
	// li r14,1
	r14.s64 = 1;
	// stw r23,-356(r11)
	PPC_STORE_U32(r11.u32 + -356, r23.u32);
	// stw r22,-352(r11)
	PPC_STORE_U32(r11.u32 + -352, r22.u32);
	// stw r21,-348(r11)
	PPC_STORE_U32(r11.u32 + -348, r21.u32);
	// stw r20,-344(r11)
	PPC_STORE_U32(r11.u32 + -344, r20.u32);
	// stw r14,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, r14.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r19,-336(r11)
	PPC_STORE_U32(r11.u32 + -336, r19.u32);
	// stw r18,-340(r11)
	PPC_STORE_U32(r11.u32 + -340, r18.u32);
	// stw r17,-324(r11)
	PPC_STORE_U32(r11.u32 + -324, r17.u32);
	// stw r16,-332(r11)
	PPC_STORE_U32(r11.u32 + -332, r16.u32);
	// stw r10,-520(r11)
	PPC_STORE_U32(r11.u32 + -520, ctx.r10.u32);
	// stw r10,-516(r11)
	PPC_STORE_U32(r11.u32 + -516, ctx.r10.u32);
	// stw r10,-512(r11)
	PPC_STORE_U32(r11.u32 + -512, ctx.r10.u32);
	// stw r10,-508(r11)
	PPC_STORE_U32(r11.u32 + -508, ctx.r10.u32);
	// stw r10,-504(r11)
	PPC_STORE_U32(r11.u32 + -504, ctx.r10.u32);
	// stw r10,-500(r11)
	PPC_STORE_U32(r11.u32 + -500, ctx.r10.u32);
	// stw r10,-496(r11)
	PPC_STORE_U32(r11.u32 + -496, ctx.r10.u32);
	// stw r10,-492(r11)
	PPC_STORE_U32(r11.u32 + -492, ctx.r10.u32);
	// stw r10,-488(r11)
	PPC_STORE_U32(r11.u32 + -488, ctx.r10.u32);
	// stw r10,-484(r11)
	PPC_STORE_U32(r11.u32 + -484, ctx.r10.u32);
	// stw r10,-480(r11)
	PPC_STORE_U32(r11.u32 + -480, ctx.r10.u32);
	// stw r10,-476(r11)
	PPC_STORE_U32(r11.u32 + -476, ctx.r10.u32);
	// stw r10,-472(r11)
	PPC_STORE_U32(r11.u32 + -472, ctx.r10.u32);
	// stw r10,-468(r11)
	PPC_STORE_U32(r11.u32 + -468, ctx.r10.u32);
	// stw r10,-464(r11)
	PPC_STORE_U32(r11.u32 + -464, ctx.r10.u32);
	// stw r10,-460(r11)
	PPC_STORE_U32(r11.u32 + -460, ctx.r10.u32);
	// stw r10,-456(r11)
	PPC_STORE_U32(r11.u32 + -456, ctx.r10.u32);
	// stw r10,-452(r11)
	PPC_STORE_U32(r11.u32 + -452, ctx.r10.u32);
	// stw r10,-448(r11)
	PPC_STORE_U32(r11.u32 + -448, ctx.r10.u32);
	// stw r10,-444(r11)
	PPC_STORE_U32(r11.u32 + -444, ctx.r10.u32);
	// stw r10,-440(r11)
	PPC_STORE_U32(r11.u32 + -440, ctx.r10.u32);
	// stw r10,-436(r11)
	PPC_STORE_U32(r11.u32 + -436, ctx.r10.u32);
	// stw r10,-432(r11)
	PPC_STORE_U32(r11.u32 + -432, ctx.r10.u32);
	// stw r10,-428(r11)
	PPC_STORE_U32(r11.u32 + -428, ctx.r10.u32);
	// stw r10,-424(r11)
	PPC_STORE_U32(r11.u32 + -424, ctx.r10.u32);
	// stw r10,-420(r11)
	PPC_STORE_U32(r11.u32 + -420, ctx.r10.u32);
	// stw r10,-416(r11)
	PPC_STORE_U32(r11.u32 + -416, ctx.r10.u32);
	// stw r10,-412(r11)
	PPC_STORE_U32(r11.u32 + -412, ctx.r10.u32);
	// stw r10,-408(r11)
	PPC_STORE_U32(r11.u32 + -408, ctx.r10.u32);
	// stw r10,-404(r11)
	PPC_STORE_U32(r11.u32 + -404, ctx.r10.u32);
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r15,-328(r11)
	PPC_STORE_U32(r11.u32 + -328, r15.u32);
	// stw r10,-312(r11)
	PPC_STORE_U32(r11.u32 + -312, ctx.r10.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r10,r10,21572
	ctx.r10.s64 = ctx.r10.s64 + 21572;
	// lis r14,-32246
	r14.s64 = -2113273856;
	// stw r10,-320(r11)
	PPC_STORE_U32(r11.u32 + -320, ctx.r10.u32);
	// lis r3,-32246
	ctx.r3.s64 = -2113273856;
	// stw r5,-316(r11)
	PPC_STORE_U32(r11.u32 + -316, ctx.r5.u32);
	// addi r14,r14,21028
	r14.s64 = r14.s64 + 21028;
	// lis r31,-32248
	r31.s64 = -2113404928;
	// addi r4,r4,-17580
	ctx.r4.s64 = ctx.r4.s64 + -17580;
	// lis r30,-32246
	r30.s64 = -2113273856;
	// addi r3,r3,21560
	ctx.r3.s64 = ctx.r3.s64 + 21560;
	// stw r14,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, r14.u32);
	// lis r14,-32249
	r14.s64 = -2113470464;
	// lis r29,-32246
	r29.s64 = -2113273856;
	// addi r14,r14,-25776
	r14.s64 = r14.s64 + -25776;
	// stw r4,-308(r11)
	PPC_STORE_U32(r11.u32 + -308, ctx.r4.u32);
	// addi r31,r31,-17380
	r31.s64 = r31.s64 + -17380;
	// lis r28,-32246
	r28.s64 = -2113273856;
	// stw r3,-304(r11)
	PPC_STORE_U32(r11.u32 + -304, ctx.r3.u32);
	// addi r30,r30,21236
	r30.s64 = r30.s64 + 21236;
	// lis r27,-32246
	r27.s64 = -2113273856;
	// stw r14,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, r14.u32);
	// addi r29,r29,21224
	r29.s64 = r29.s64 + 21224;
	// lis r26,-32246
	r26.s64 = -2113273856;
	// stw r31,-300(r11)
	PPC_STORE_U32(r11.u32 + -300, r31.u32);
	// addi r28,r28,21212
	r28.s64 = r28.s64 + 21212;
	// lis r25,-32246
	r25.s64 = -2113273856;
	// stw r30,-296(r11)
	PPC_STORE_U32(r11.u32 + -296, r30.u32);
	// addi r27,r27,21200
	r27.s64 = r27.s64 + 21200;
	// lis r24,-32246
	r24.s64 = -2113273856;
	// stw r29,-292(r11)
	PPC_STORE_U32(r11.u32 + -292, r29.u32);
	// addi r26,r26,21188
	r26.s64 = r26.s64 + 21188;
	// lis r23,-32246
	r23.s64 = -2113273856;
	// stw r28,-288(r11)
	PPC_STORE_U32(r11.u32 + -288, r28.u32);
	// addi r25,r25,21172
	r25.s64 = r25.s64 + 21172;
	// lis r22,-32246
	r22.s64 = -2113273856;
	// stw r27,-284(r11)
	PPC_STORE_U32(r11.u32 + -284, r27.u32);
	// addi r24,r24,21156
	r24.s64 = r24.s64 + 21156;
	// addi r23,r23,21140
	r23.s64 = r23.s64 + 21140;
	// stw r26,-280(r11)
	PPC_STORE_U32(r11.u32 + -280, r26.u32);
	// addi r22,r22,21120
	r22.s64 = r22.s64 + 21120;
	// lis r21,-32246
	r21.s64 = -2113273856;
	// stw r25,-276(r11)
	PPC_STORE_U32(r11.u32 + -276, r25.u32);
	// lis r20,-32249
	r20.s64 = -2113470464;
	// stw r24,-272(r11)
	PPC_STORE_U32(r11.u32 + -272, r24.u32);
	// lis r19,-32246
	r19.s64 = -2113273856;
	// stw r23,-268(r11)
	PPC_STORE_U32(r11.u32 + -268, r23.u32);
	// addi r21,r21,21112
	r21.s64 = r21.s64 + 21112;
	// lis r18,-32246
	r18.s64 = -2113273856;
	// stw r22,-264(r11)
	PPC_STORE_U32(r11.u32 + -264, r22.u32);
	// addi r20,r20,-25772
	r20.s64 = r20.s64 + -25772;
	// stw r9,-260(r11)
	PPC_STORE_U32(r11.u32 + -260, ctx.r9.u32);
	// lis r17,-32246
	r17.s64 = -2113273856;
	// stw r8,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r8.u32);
	// addi r19,r19,21088
	r19.s64 = r19.s64 + 21088;
	// stw r7,-252(r11)
	PPC_STORE_U32(r11.u32 + -252, ctx.r7.u32);
	// lis r16,-32246
	r16.s64 = -2113273856;
	// stw r6,-248(r11)
	PPC_STORE_U32(r11.u32 + -248, ctx.r6.u32);
	// addi r18,r18,21076
	r18.s64 = r18.s64 + 21076;
	// stw r21,-244(r11)
	PPC_STORE_U32(r11.u32 + -244, r21.u32);
	// lis r15,-32246
	r15.s64 = -2113273856;
	// stw r20,-240(r11)
	PPC_STORE_U32(r11.u32 + -240, r20.u32);
	// addi r17,r17,21064
	r17.s64 = r17.s64 + 21064;
	// addi r16,r16,21052
	r16.s64 = r16.s64 + 21052;
	// stw r19,-224(r11)
	PPC_STORE_U32(r11.u32 + -224, r19.u32);
	// addi r15,r15,21040
	r15.s64 = r15.s64 + 21040;
	// stw r18,-216(r11)
	PPC_STORE_U32(r11.u32 + -216, r18.u32);
	// lis r14,-32249
	r14.s64 = -2113470464;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r17,-232(r11)
	PPC_STORE_U32(r11.u32 + -232, r17.u32);
	// addi r14,r14,-25780
	r14.s64 = r14.s64 + -25780;
	// stw r16,-220(r11)
	PPC_STORE_U32(r11.u32 + -220, r16.u32);
	// stw r15,-212(r11)
	PPC_STORE_U32(r11.u32 + -212, r15.u32);
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r10,-228(r11)
	PPC_STORE_U32(r11.u32 + -228, ctx.r10.u32);
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r10,-208(r11)
	PPC_STORE_U32(r11.u32 + -208, ctx.r10.u32);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// stw r14,-204(r11)
	PPC_STORE_U32(r11.u32 + -204, r14.u32);
	// addi r10,r10,-1296
	ctx.r10.s64 = ctx.r10.s64 + -1296;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// stw r9,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r9.u32);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// stw r9,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r9.u32);
	// stw r9,40(r10)
	PPC_STORE_U32(ctx.r10.u32 + 40, ctx.r9.u32);
	// stw r9,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r9.u32);
	// stw r9,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r9.u32);
	// stw r9,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r9.u32);
	// stw r9,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r9.u32);
	// stw r9,64(r10)
	PPC_STORE_U32(ctx.r10.u32 + 64, ctx.r9.u32);
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// stw r9,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r9.u32);
	// stw r9,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r9.u32);
	// stw r9,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r9.u32);
	// stw r9,88(r10)
	PPC_STORE_U32(ctx.r10.u32 + 88, ctx.r9.u32);
	// stw r9,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r9.u32);
	// stw r9,84(r10)
	PPC_STORE_U32(ctx.r10.u32 + 84, ctx.r9.u32);
	// stw r9,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r9.u32);
	// stw r9,96(r10)
	PPC_STORE_U32(ctx.r10.u32 + 96, ctx.r9.u32);
	// stw r9,100(r10)
	PPC_STORE_U32(ctx.r10.u32 + 100, ctx.r9.u32);
	// stw r9,104(r10)
	PPC_STORE_U32(ctx.r10.u32 + 104, ctx.r9.u32);
	// stw r9,108(r10)
	PPC_STORE_U32(ctx.r10.u32 + 108, ctx.r9.u32);
	// stw r9,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r9.u32);
	// stw r9,116(r10)
	PPC_STORE_U32(ctx.r10.u32 + 116, ctx.r9.u32);
	// stw r9,120(r10)
	PPC_STORE_U32(ctx.r10.u32 + 120, ctx.r9.u32);
	// stw r9,124(r10)
	PPC_STORE_U32(ctx.r10.u32 + 124, ctx.r9.u32);
	// stw r9,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,132(r10)
	PPC_STORE_U32(ctx.r10.u32 + 132, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,136(r10)
	PPC_STORE_U32(ctx.r10.u32 + 136, ctx.r9.u32);
	// stw r9,140(r10)
	PPC_STORE_U32(ctx.r10.u32 + 140, ctx.r9.u32);
	// stw r9,144(r10)
	PPC_STORE_U32(ctx.r10.u32 + 144, ctx.r9.u32);
	// stw r9,148(r10)
	PPC_STORE_U32(ctx.r10.u32 + 148, ctx.r9.u32);
	// stw r9,152(r10)
	PPC_STORE_U32(ctx.r10.u32 + 152, ctx.r9.u32);
	// stw r9,156(r10)
	PPC_STORE_U32(ctx.r10.u32 + 156, ctx.r9.u32);
	// stw r9,160(r10)
	PPC_STORE_U32(ctx.r10.u32 + 160, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,176(r10)
	PPC_STORE_U32(ctx.r10.u32 + 176, ctx.r9.u32);
	// stw r9,184(r10)
	PPC_STORE_U32(ctx.r10.u32 + 184, ctx.r9.u32);
	// stw r9,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, ctx.r9.u32);
	// stw r9,180(r10)
	PPC_STORE_U32(ctx.r10.u32 + 180, ctx.r9.u32);
	// stw r9,188(r10)
	PPC_STORE_U32(ctx.r10.u32 + 188, ctx.r9.u32);
	// stw r9,172(r10)
	PPC_STORE_U32(ctx.r10.u32 + 172, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,192(r10)
	PPC_STORE_U32(ctx.r10.u32 + 192, ctx.r9.u32);
	// stw r9,196(r10)
	PPC_STORE_U32(ctx.r10.u32 + 196, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r10.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r10.u32);
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// stw r10,52(r11)
	PPC_STORE_U32(r11.u32 + 52, ctx.r10.u32);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(r11.u32 + 64, ctx.r10.u32);
	// stw r10,60(r11)
	PPC_STORE_U32(r11.u32 + 60, ctx.r10.u32);
	// stw r10,76(r11)
	PPC_STORE_U32(r11.u32 + 76, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(r11.u32 + 68, ctx.r10.u32);
	// stw r10,72(r11)
	PPC_STORE_U32(r11.u32 + 72, ctx.r10.u32);
	// stw r10,88(r11)
	PPC_STORE_U32(r11.u32 + 88, ctx.r10.u32);
	// stw r10,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r10.u32);
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// stw r10,92(r11)
	PPC_STORE_U32(r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(r11.u32 + 96, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(r11.u32 + 100, ctx.r10.u32);
	// stw r10,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r10.u32);
	// stw r10,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r10.u32);
	// stw r10,112(r11)
	PPC_STORE_U32(r11.u32 + 112, ctx.r10.u32);
	// stw r10,116(r11)
	PPC_STORE_U32(r11.u32 + 116, ctx.r10.u32);
	// stw r10,120(r11)
	PPC_STORE_U32(r11.u32 + 120, ctx.r10.u32);
	// stw r10,124(r11)
	PPC_STORE_U32(r11.u32 + 124, ctx.r10.u32);
	// stw r10,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r10.u32);
	// stw r10,132(r11)
	PPC_STORE_U32(r11.u32 + 132, ctx.r10.u32);
	// stw r10,136(r11)
	PPC_STORE_U32(r11.u32 + 136, ctx.r10.u32);
	// stw r10,140(r11)
	PPC_STORE_U32(r11.u32 + 140, ctx.r10.u32);
	// stw r10,144(r11)
	PPC_STORE_U32(r11.u32 + 144, ctx.r10.u32);
	// stw r10,148(r11)
	PPC_STORE_U32(r11.u32 + 148, ctx.r10.u32);
	// stw r10,152(r11)
	PPC_STORE_U32(r11.u32 + 152, ctx.r10.u32);
	// stw r10,156(r11)
	PPC_STORE_U32(r11.u32 + 156, ctx.r10.u32);
	// stw r10,160(r11)
	PPC_STORE_U32(r11.u32 + 160, ctx.r10.u32);
	// stw r10,176(r11)
	PPC_STORE_U32(r11.u32 + 176, ctx.r10.u32);
	// stw r10,184(r11)
	PPC_STORE_U32(r11.u32 + 184, ctx.r10.u32);
	// stw r10,168(r11)
	PPC_STORE_U32(r11.u32 + 168, ctx.r10.u32);
	// stw r10,180(r11)
	PPC_STORE_U32(r11.u32 + 180, ctx.r10.u32);
	// stw r10,188(r11)
	PPC_STORE_U32(r11.u32 + 188, ctx.r10.u32);
	// stw r10,172(r11)
	PPC_STORE_U32(r11.u32 + 172, ctx.r10.u32);
	// stw r10,192(r11)
	PPC_STORE_U32(r11.u32 + 192, ctx.r10.u32);
	// stw r10,196(r11)
	PPC_STORE_U32(r11.u32 + 196, ctx.r10.u32);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8249DB1C"))) PPC_WEAK_FUNC(sub_8249DB1C);
PPC_FUNC_IMPL(__imp__sub_8249DB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249DB20"))) PPC_WEAK_FUNC(sub_8249DB20);
PPC_FUNC_IMPL(__imp__sub_8249DB20) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-24616
	r30.s64 = r11.s64 + -24616;
	// beq 0x8249db58
	if (cr0.eq) goto loc_8249DB58;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,21708
	ctx.r5.s64 = r11.s64 + 21708;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DB58:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249db88
	if (cr0.eq) goto loc_8249DB88;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,21700
	ctx.r5.s64 = r11.s64 + 21700;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DB88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8249DB90"))) PPC_WEAK_FUNC(sub_8249DB90);
PPC_FUNC_IMPL(__imp__sub_8249DB90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r30,r11,-24616
	r30.s64 = r11.s64 + -24616;
	// beq 0x8249dbc8
	if (cr0.eq) goto loc_8249DBC8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,21716
	ctx.r5.s64 = r11.s64 + 21716;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DBC8:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249dbf8
	if (cr0.eq) goto loc_8249DBF8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r5,r11,21700
	ctx.r5.s64 = r11.s64 + 21700;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DBF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8249DC00"))) PPC_WEAK_FUNC(sub_8249DC00);
PPC_FUNC_IMPL(__imp__sub_8249DC00) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r10,2836
	ctx.r4.s64 = ctx.r10.s64 + 2836;
	// srawi r10,r11,7
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7F) != 0);
	ctx.r10.s64 = r11.s32 >> 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// clrlwi r21,r10,31
	r21.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r27,r11,26
	r27.u64 = r11.u32 & 0x3F;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// addi r20,r11,25836
	r20.s64 = r11.s64 + 25836;
	// beq cr6,0x8249dc60
	if (cr6.eq) goto loc_8249DC60;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DC60:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x8249dc74
	if (!cr6.eq) goto loc_8249DC74;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8249dc78
	if (!cr6.eq) goto loc_8249DC78;
loc_8249DC74:
	// li r11,0
	r11.s64 = 0;
loc_8249DC78:
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x8249dc90
	if (!cr6.eq) goto loc_8249DC90;
	// cmpwi cr6,r27,16
	cr6.compare<int32_t>(r27.s32, 16, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8249dc94
	if (!cr6.eq) goto loc_8249DC94;
loc_8249DC90:
	// li r11,0
	r11.s64 = 0;
loc_8249DC94:
	// clrlwi. r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r29,r11,-24616
	r29.s64 = r11.s64 + -24616;
	// beq 0x8249dcb8
	if (cr0.eq) goto loc_8249DCB8;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,25924
	ctx.r4.s64 = r11.s64 + 25924;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// b 0x8249dce0
	goto loc_8249DCE0;
loc_8249DCB8:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x8249dccc
	if (cr6.eq) goto loc_8249DCCC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,14404
	ctx.r5.s64 = r11.s64 + 14404;
	// b 0x8249dcd4
	goto loc_8249DCD4;
loc_8249DCCC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r11,14492
	ctx.r5.s64 = r11.s64 + 14492;
loc_8249DCD4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DCE0:
	// clrlwi. r28,r28,24
	r28.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x8249dcf8
	if (cr0.eq) goto loc_8249DCF8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21748
	ctx.r4.s64 = r11.s64 + 21748;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DCF8:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8249dd48
	if (!cr6.eq) goto loc_8249DD48;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x8249dd34
	if (cr6.eq) goto loc_8249DD34;
	// cmpwi cr6,r27,62
	cr6.compare<int32_t>(r27.s32, 62, xer);
	// beq cr6,0x8249dd28
	if (cr6.eq) goto loc_8249DD28;
	// cmpwi cr6,r27,63
	cr6.compare<int32_t>(r27.s32, 63, xer);
	// bne cr6,0x8249dd34
	if (!cr6.eq) goto loc_8249DD34;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-8504
	ctx.r5.s64 = r11.s64 + -8504;
loc_8249DD20:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8249dd40
	goto loc_8249DD40;
loc_8249DD28:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r5,r11,-8508
	ctx.r5.s64 = r11.s64 + -8508;
	// b 0x8249dd20
	goto loc_8249DD20;
loc_8249DD34:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,14924
	ctx.r4.s64 = r11.s64 + 14924;
loc_8249DD40:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DD48:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x8249dd68
	if (!cr6.eq) goto loc_8249DD68;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x8249dd68
	if (cr6.eq) goto loc_8249DD68;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21744
	ctx.r4.s64 = r11.s64 + 21744;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DD68:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8249dd80
	if (cr6.eq) goto loc_8249DD80;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21740
	ctx.r4.s64 = r11.s64 + 21740;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DD80:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// bne cr6,0x8249ddfc
	if (!cr6.eq) goto loc_8249DDFC;
	// cmpwi cr6,r24,15
	cr6.compare<int32_t>(r24.s32, 15, xer);
	// beq cr6,0x8249df54
	if (cr6.eq) goto loc_8249DF54;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249ddb8
	if (cr0.eq) goto loc_8249DDB8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,14828
	ctx.r4.s64 = r11.s64 + 14828;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DDB8:
	// rlwinm. r11,r24,0,30,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249ddd0
	if (cr0.eq) goto loc_8249DDD0;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21632
	ctx.r4.s64 = r11.s64 + 21632;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DDD0:
	// rlwinm. r11,r24,0,29,29
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249dde8
	if (cr0.eq) goto loc_8249DDE8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,27864
	ctx.r4.s64 = r11.s64 + 27864;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DDE8:
	// rlwinm. r11,r24,0,28,28
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249df54
	if (cr0.eq) goto loc_8249DF54;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,22000
	ctx.r4.s64 = r11.s64 + 22000;
	// b 0x8249df4c
	goto loc_8249DF4C;
loc_8249DDFC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r28,r11,-21448
	r28.s64 = r11.s64 + -21448;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r30,r11,-1520
	r30.s64 = r11.s64 + -1520;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r29,r11,2936
	r29.s64 = r11.s64 + 2936;
	// beq 0x8249de4c
	if (cr0.eq) goto loc_8249DE4C;
	// clrlwi. r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8249de40
	if (cr0.eq) goto loc_8249DE40;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8249de6c
	goto loc_8249DE6C;
loc_8249DE40:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r4,r11,14828
	ctx.r4.s64 = r11.s64 + 14828;
	// b 0x8249de6c
	goto loc_8249DE6C;
loc_8249DE4C:
	// clrlwi r11,r23,31
	r11.u64 = r23.u32 & 0x1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8249de64
	if (cr6.eq) goto loc_8249DE64;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bne cr6,0x8249de68
	if (!cr6.eq) goto loc_8249DE68;
loc_8249DE64:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8249DE68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249DE6C:
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// rlwinm. r11,r24,0,30,30
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249de98
	if (cr0.eq) goto loc_8249DE98;
	// rlwinm. r11,r23,0,30,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8249de8c
	if (cr0.eq) goto loc_8249DE8C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8249deb8
	goto loc_8249DEB8;
loc_8249DE8C:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,21632
	ctx.r4.s64 = r11.s64 + 21632;
	// b 0x8249deb8
	goto loc_8249DEB8;
loc_8249DE98:
	// rlwinm r11,r23,0,30,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8249deb0
	if (cr6.eq) goto loc_8249DEB0;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bne cr6,0x8249deb4
	if (!cr6.eq) goto loc_8249DEB4;
loc_8249DEB0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8249DEB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249DEB8:
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// rlwinm. r11,r24,0,29,29
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249dee4
	if (cr0.eq) goto loc_8249DEE4;
	// rlwinm. r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8249ded8
	if (cr0.eq) goto loc_8249DED8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8249df04
	goto loc_8249DF04;
loc_8249DED8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r4,r11,27864
	ctx.r4.s64 = r11.s64 + 27864;
	// b 0x8249df04
	goto loc_8249DF04;
loc_8249DEE4:
	// rlwinm r11,r23,0,29,29
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x8249defc
	if (cr6.eq) goto loc_8249DEFC;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bne cr6,0x8249df00
	if (!cr6.eq) goto loc_8249DF00;
loc_8249DEFC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8249DF00:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249DF04:
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// rlwinm. r11,r24,0,28,28
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249df30
	if (cr0.eq) goto loc_8249DF30;
	// rlwinm. r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8249df24
	if (cr0.eq) goto loc_8249DF24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8249df50
	goto loc_8249DF50;
loc_8249DF24:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,22000
	ctx.r4.s64 = r11.s64 + 22000;
	// b 0x8249df50
	goto loc_8249DF50;
loc_8249DF30:
	// rlwinm r11,r23,0,28,28
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x8249df48
	if (cr6.eq) goto loc_8249DF48;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bne cr6,0x8249df4c
	if (!cr6.eq) goto loc_8249DF4C;
loc_8249DF48:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
loc_8249DF4C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_8249DF50:
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DF54:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x8249df64
	if (cr6.eq) goto loc_8249DF64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// b 0x8249df6c
	goto loc_8249DF6C;
loc_8249DF64:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_8249DF6C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// beq cr6,0x8249df8c
	if (cr6.eq) goto loc_8249DF8C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21732
	ctx.r4.s64 = r11.s64 + 21732;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249DF8C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8249DF94"))) PPC_WEAK_FUNC(sub_8249DF94);
PPC_FUNC_IMPL(__imp__sub_8249DF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249DF98"))) PPC_WEAK_FUNC(sub_8249DF98);
PPC_FUNC_IMPL(__imp__sub_8249DF98) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x8249dfc4
	if (!cr6.eq) goto loc_8249DFC4;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x8249dfd4
	if (!cr6.eq) goto loc_8249DFD4;
loc_8249DFC4:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bne cr6,0x8249dfdc
	if (!cr6.eq) goto loc_8249DFDC;
	// rlwinm. r11,r5,0,24,24
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249dfdc
	if (cr0.eq) goto loc_8249DFDC;
loc_8249DFD4:
	// li r21,1
	r21.s64 = 1;
	// b 0x8249dfe0
	goto loc_8249DFE0;
loc_8249DFDC:
	// li r21,0
	r21.s64 = 0;
loc_8249DFE0:
	// srawi r10,r5,6
	xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 6;
	// subfic r8,r31,0
	xer.ca = r31.u32 <= 0;
	ctx.r8.s64 = 0 - r31.s64;
	// cntlzw r11,r31
	r11.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + xer.ca < xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwinm r11,r8,0,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFC0;
	// and r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 & r31.u64;
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r27,r10,31
	r27.u64 = ctx.r10.u32 & 0x1;
	// addi r11,r11,255
	r11.s64 = r11.s64 + 255;
	// and r25,r7,r6
	r25.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r26,r11,r5
	r26.u64 = r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x8249e028
	if (cr6.eq) goto loc_8249E028;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25924
	ctx.r4.s64 = r11.s64 + 25924;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E028:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// addi r22,r11,25836
	r22.s64 = r11.s64 + 25836;
	// beq cr6,0x8249e044
	if (cr6.eq) goto loc_8249E044;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E044:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x8249e058
	if (!cr6.eq) goto loc_8249E058;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x8249e05c
	if (cr6.eq) goto loc_8249E05C;
loc_8249E058:
	// li r10,1
	ctx.r10.s64 = 1;
loc_8249E05C:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// subfic r9,r31,0
	xer.ca = r31.u32 <= 0;
	ctx.r9.s64 = 0 - r31.s64;
	// addi r24,r11,-16376
	r24.s64 = r11.s64 + -16376;
	// subfe r11,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r5,r11,99
	ctx.r5.s64 = r11.s64 + 99;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// clrlwi. r30,r31,24
	r30.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8249e09c
	if (cr0.eq) goto loc_8249E09C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21748
	ctx.r4.s64 = r11.s64 + 21748;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E09C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r11,14924
	ctx.r4.s64 = r11.s64 + 14924;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// addi r31,r11,21744
	r31.s64 = r11.s64 + 21744;
	// beq cr6,0x8249e0cc
	if (cr6.eq) goto loc_8249E0CC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E0CC:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x8249e0f4
	if (cr6.eq) goto loc_8249E0F4;
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// beq cr6,0x8249e0e4
	if (cr6.eq) goto loc_8249E0E4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x8249e0ec
	goto loc_8249E0EC;
loc_8249E0E4:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,21752
	ctx.r4.s64 = r11.s64 + 21752;
loc_8249E0EC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E0F4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8249e10c
	if (cr6.eq) goto loc_8249E10C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,21740
	ctx.r4.s64 = r11.s64 + 21740;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E10C:
	// lwz r25,340(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r11,1
	r11.s64 = 1;
	// cmpwi cr6,r25,4
	cr6.compare<int32_t>(r25.s32, 4, xer);
	// blt cr6,0x8249e120
	if (cr6.lt) goto loc_8249E120;
	// li r11,0
	r11.s64 = 0;
loc_8249E120:
	// clrlwi r23,r11,24
	r23.u64 = r11.u32 & 0xFF;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x8249e134
	if (!cr6.eq) goto loc_8249E134;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249e224
	if (cr0.eq) goto loc_8249E224;
loc_8249E134:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// srawi r9,r28,2
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3) != 0);
	ctx.r9.s64 = r28.s32 >> 2;
	// addi r30,r11,-18320
	r30.s64 = r11.s64 + -18320;
	// srawi r10,r28,4
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0xF) != 0);
	ctx.r10.s64 = r28.s32 >> 4;
	// srawi r11,r28,6
	xer.ca = (r28.s32 < 0) & ((r28.u32 & 0x3F) != 0);
	r11.s64 = r28.s32 >> 6;
	// clrlwi r31,r28,30
	r31.u64 = r28.u32 & 0x3;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r26,r11,30
	r26.u64 = r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// lbzx r11,r31,r30
	r11.u64 = PPC_LOAD_U8(r31.u32 + r30.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// clrlwi r28,r9,30
	r28.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r27,r10,30
	r27.u64 = ctx.r10.u32 & 0x3;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// ble cr6,0x8249e224
	if (!cr6.gt) goto loc_8249E224;
	// clrlwi. r23,r23,24
	r23.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// bne 0x8249e1b0
	if (!cr0.eq) goto loc_8249E1B0;
	// cmpw cr6,r28,r31
	cr6.compare<int32_t>(r28.s32, r31.s32, xer);
	// bne cr6,0x8249e1b0
	if (!cr6.eq) goto loc_8249E1B0;
	// cmpw cr6,r27,r31
	cr6.compare<int32_t>(r27.s32, r31.s32, xer);
	// bne cr6,0x8249e1b0
	if (!cr6.eq) goto loc_8249E1B0;
	// cmpw cr6,r26,r31
	cr6.compare<int32_t>(r26.s32, r31.s32, xer);
	// beq cr6,0x8249e224
	if (cr6.eq) goto loc_8249E224;
loc_8249E1B0:
	// lbzx r11,r28,r30
	r11.u64 = PPC_LOAD_U8(r28.u32 + r30.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// ble cr6,0x8249e224
	if (!cr6.gt) goto loc_8249E224;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8249e1e4
	if (!cr6.eq) goto loc_8249E1E4;
	// cmpw cr6,r27,r28
	cr6.compare<int32_t>(r27.s32, r28.s32, xer);
	// bne cr6,0x8249e1e4
	if (!cr6.eq) goto loc_8249E1E4;
	// cmpw cr6,r26,r28
	cr6.compare<int32_t>(r26.s32, r28.s32, xer);
	// beq cr6,0x8249e224
	if (cr6.eq) goto loc_8249E224;
loc_8249E1E4:
	// lbzx r11,r27,r30
	r11.u64 = PPC_LOAD_U8(r27.u32 + r30.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// cmpwi cr6,r25,3
	cr6.compare<int32_t>(r25.s32, 3, xer);
	// ble cr6,0x8249e224
	if (!cr6.gt) goto loc_8249E224;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8249e210
	if (!cr6.eq) goto loc_8249E210;
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// beq cr6,0x8249e224
	if (cr6.eq) goto loc_8249E224;
loc_8249E210:
	// lbzx r11,r26,r30
	r11.u64 = PPC_LOAD_U8(r26.u32 + r30.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E224:
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x8249e234
	if (cr6.eq) goto loc_8249E234;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// b 0x8249e23c
	goto loc_8249E23C;
loc_8249E234:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_8249E23C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8249E24C"))) PPC_WEAK_FUNC(sub_8249E24C);
PPC_FUNC_IMPL(__imp__sub_8249E24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8249E250"))) PPC_WEAK_FUNC(sub_8249E250);
PPC_FUNC_IMPL(__imp__sub_8249E250) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// clrlwi r30,r4,26
	r30.u64 = ctx.r4.u32 & 0x3F;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// clrlwi r27,r11,31
	r27.u64 = r11.u32 & 0x1;
	// beq cr6,0x8249e284
	if (cr6.eq) goto loc_8249E284;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,25924
	ctx.r4.s64 = r11.s64 + 25924;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E284:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// addi r28,r11,25836
	r28.s64 = r11.s64 + 25836;
	// beq cr6,0x8249e2a0
	if (cr6.eq) goto loc_8249E2A0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E2A0:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,21780
	ctx.r4.s64 = r11.s64 + 21780;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21740
	ctx.r4.s64 = r11.s64 + 21740;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x8249e370
	if (cr6.eq) goto loc_8249E370;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// clrlwi r9,r29,30
	ctx.r9.u64 = r29.u32 & 0x3;
	// addi r11,r11,-18320
	r11.s64 = r11.s64 + -18320;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r10,-16376
	r30.s64 = ctx.r10.s64 + -16376;
	// lbzx r11,r9,r11
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// srawi r10,r29,2
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3) != 0);
	ctx.r10.s64 = r29.s32 >> 2;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r11,r11,21772
	r11.s64 = r11.s64 + 21772;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// srawi r10,r29,4
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0xF) != 0);
	ctx.r10.s64 = r29.s32 >> 4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r11,r11,21764
	r11.s64 = r11.s64 + 21764;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// srawi r10,r29,6
	xer.ca = (r29.s32 < 0) & ((r29.u32 & 0x3F) != 0);
	ctx.r10.s64 = r29.s32 >> 6;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// addi r11,r11,21756
	r11.s64 = r11.s64 + 21756;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E370:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x8249e380
	if (cr6.eq) goto loc_8249E380;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x8249e388
	goto loc_8249E388;
loc_8249E380:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_8249E388:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8249E398"))) PPC_WEAK_FUNC(sub_8249E398);
PPC_FUNC_IMPL(__imp__sub_8249E398) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r24,0
	r24.s64 = 0;
	// li r25,0
	r25.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// clrlwi. r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249e3d8
	if (!cr0.eq) goto loc_8249E3D8;
	// lbz r11,8(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x8249e3dc
	if (cr6.eq) goto loc_8249E3DC;
loc_8249E3D8:
	// li r11,0
	r11.s64 = 0;
loc_8249E3DC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249e668
	if (!cr0.eq) goto loc_8249E668;
	// lbz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 8);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-1856
	r11.s64 = r11.s64 + -1856;
	// rlwinm r10,r10,2,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x7C;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8249db20
	sub_8249DB20(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1;
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// rlwinm r7,r11,8,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// bl 0x8249dc00
	sub_8249DC00(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,-17980
	r29.s64 = r11.s64 + -17980;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249e45c
	if (!cr0.eq) goto loc_8249E45C;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249e45c
	if (!cr0.eq) goto loc_8249E45C;
	// rlwinm. r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249e45c
	if (cr0.eq) goto loc_8249E45C;
	// li r24,1
	r24.s64 = 1;
loc_8249E45C:
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r26,4
	r26.s64 = 4;
	// addi r28,r10,-1736
	r28.s64 = ctx.r10.s64 + -1736;
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8249e4e8
	if (cr6.lt) goto loc_8249E4E8;
	// rlwinm. r11,r11,1,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// not r10,r11
	ctx.r10.u64 = ~r11.u64;
	// clrlwi r25,r10,31
	r25.u64 = ctx.r10.u32 & 0x1;
	// mr r27,r25
	r27.u64 = r25.u64;
	// bne 0x8249e4b4
	if (!cr0.eq) goto loc_8249E4B4;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x8249e4b4
	if (cr6.eq) goto loc_8249E4B4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// bl 0x8249e250
	sub_8249E250(ctx, base);
	// b 0x8249e4e8
	goto loc_8249E4E8;
loc_8249E4B4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r9,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 9);
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// bl 0x8249df98
	sub_8249DF98(ctx, base);
loc_8249E4E8:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8249e5a0
	if (cr6.lt) goto loc_8249E5A0;
	// rlwinm r11,r11,2,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249e514
	if (!cr0.eq) goto loc_8249E514;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x8249e514
	if (!cr6.eq) goto loc_8249E514;
	// li r25,2
	r25.s64 = 2;
loc_8249E514:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r27,r11,r27
	r27.u64 = r11.u64 + r27.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249e55c
	if (!cr0.eq) goto loc_8249E55C;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x8249e55c
	if (cr6.eq) goto loc_8249E55C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// bl 0x8249e250
	sub_8249E250(ctx, base);
	// b 0x8249e5a0
	goto loc_8249E5A0;
loc_8249E55C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x8249e570
	if (cr6.eq) goto loc_8249E570;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
loc_8249E570:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r9,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x1;
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// bl 0x8249df98
	sub_8249DF98(ctx, base);
loc_8249E5A0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// blt cr6,0x8249e668
	if (cr6.lt) goto loc_8249E668;
	// rlwinm r11,r11,3,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249e5cc
	if (!cr0.eq) goto loc_8249E5CC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// bne cr6,0x8249e5cc
	if (!cr6.eq) goto loc_8249E5CC;
	// li r25,3
	r25.s64 = 3;
loc_8249E5CC:
	// not r11,r11
	r11.u64 = ~r11.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r29,r11,r27
	r29.u64 = r11.u64 + r27.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249e614
	if (!cr0.eq) goto loc_8249E614;
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x8249e614
	if (cr6.eq) goto loc_8249E614;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x8249e250
	sub_8249E250(ctx, base);
	// b 0x8249e668
	goto loc_8249E668;
loc_8249E614:
	// cmpwi cr6,r25,3
	cr6.compare<int32_t>(r25.s32, 3, xer);
	// beq cr6,0x8249e630
	if (cr6.eq) goto loc_8249E630;
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x8249e630
	if (!cr6.eq) goto loc_8249E630;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// b 0x8249e638
	goto loc_8249E638;
loc_8249E630:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
loc_8249E638:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x8249df98
	sub_8249DF98(ctx, base);
loc_8249E668:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8249E670"))) PPC_WEAK_FUNC(sub_8249E670);
PPC_FUNC_IMPL(__imp__sub_8249E670) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249e6a8
	if (!cr0.eq) goto loc_8249E6A8;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8249e6a8
	if (!cr0.eq) goto loc_8249E6A8;
	// rlwinm. r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249e6a8
	if (cr0.eq) goto loc_8249E6A8;
	// li r28,1
	r28.s64 = 1;
loc_8249E6A8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r29,r11,-896
	r29.s64 = r11.s64 + -896;
	// rlwinm r10,r10,8,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// addi r11,r29,-600
	r11.s64 = r29.s64 + -600;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8249db20
	sub_8249DB20(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8249e6dc
	if (!cr0.eq) goto loc_8249E6DC;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1;
loc_8249E6DC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
	// bne cr6,0x8249e6ec
	if (!cr6.eq) goto loc_8249E6EC;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x3F;
loc_8249E6EC:
	// rlwinm r10,r11,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249dc00
	sub_8249DC00(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,-17980
	ctx.r4.s64 = r11.s64 + -17980;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// rlwinm r7,r8,8,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFC;
	// addi r11,r11,-1296
	r11.s64 = r11.s64 + -1296;
	// lwzx r11,r7,r11
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + r11.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8249e800
	if (cr6.lt) goto loc_8249E800;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r11,2,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// rlwinm. r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,3,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r9,r11,3
	ctx.r9.s64 = r11.s64 + 3;
	// beq 0x8249e758
	if (cr0.eq) goto loc_8249E758;
	// li r11,1
	r11.s64 = 1;
	// b 0x8249e77c
	goto loc_8249E77C;
loc_8249E758:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249e76c
	if (cr0.eq) goto loc_8249E76C;
	// li r11,2
	r11.s64 = 2;
	// b 0x8249e77c
	goto loc_8249E77C;
loc_8249E76C:
	// rlwinm r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
loc_8249E77C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r6,r10,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x8249e7ac
	if (!cr0.eq) goto loc_8249E7AC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x8249e7ac
	if (cr6.eq) goto loc_8249E7AC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi r6,r11,24
	ctx.r6.u64 = r11.u32 & 0xFF;
	// rlwinm r5,r11,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0x1;
	// bl 0x8249e250
	sub_8249E250(ctx, base);
	// b 0x8249e800
	goto loc_8249E800;
loc_8249E7AC:
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8249e7c8
	if (cr6.eq) goto loc_8249E7C8;
	// cmpwi cr6,r9,2
	cr6.compare<int32_t>(ctx.r9.s32, 2, xer);
	// bne cr6,0x8249e7c8
	if (!cr6.eq) goto loc_8249E7C8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// b 0x8249e7d0
	goto loc_8249E7D0;
loc_8249E7C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
loc_8249E7D0:
	// lwzx r10,r7,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + r29.u32);
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0x1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// clrlwi r10,r11,24
	ctx.r10.u64 = r11.u32 & 0xFF;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x8249df98
	sub_8249DF98(ctx, base);
loc_8249E800:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8249E808"))) PPC_WEAK_FUNC(sub_8249E808);
PPC_FUNC_IMPL(__imp__sub_8249E808) {
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
	// lbz r11,4(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8249e854
	if (!cr0.eq) goto loc_8249E854;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249e840
	if (cr0.eq) goto loc_8249E840;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,9820
	ctx.r4.s64 = r11.s64 + 9820;
	// b 0x8249e848
	goto loc_8249E848;
loc_8249E840:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,2936
	ctx.r4.s64 = r11.s64 + 2936;
loc_8249E848:
	// bl 0x8249d3b8
	sub_8249D3B8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
loc_8249E854:
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

__attribute__((alias("__imp__sub_8249E868"))) PPC_WEAK_FUNC(sub_8249E868);
PPC_FUNC_IMPL(__imp__sub_8249E868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// li r29,1
	r29.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r29
	r28.u64 = r29.u64;
	// bl 0x8249d470
	sub_8249D470(ctx, base);
	// li r27,-1
	r27.s64 = -1;
	// li r26,-1
	r26.s64 = -1;
loc_8249E890:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// srawi r11,r26,1
	xer.ca = (r26.s32 < 0) & ((r26.u32 & 0x1) != 0);
	r11.s64 = r26.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// beq cr6,0x8249e948
	if (cr6.eq) goto loc_8249E948;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// bgt cr6,0x8249e93c
	if (cr6.gt) goto loc_8249E93C;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,21808
	r12.s64 = r12.s64 + 21808;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32182
	r12.s64 = -2109079552;
	// addi r12,r12,-5912
	r12.s64 = r12.s64 + -5912;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8249E8E8;
	case 1:
		goto loc_8249E8E8;
	case 2:
		goto loc_8249E908;
	case 3:
		goto loc_8249E908;
	case 4:
		goto loc_8249E908;
	case 5:
		goto loc_8249E908;
	case 6:
		goto loc_8249E910;
	case 7:
		goto loc_8249E910;
	case 8:
		goto loc_8249E910;
	case 9:
		goto loc_8249E93C;
	case 10:
		goto loc_8249E910;
	default:
		__builtin_unreachable();
	}
loc_8249E8E8:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// cmpwi cr6,r27,-1
	cr6.compare<int32_t>(r27.s32, -1, xer);
	// bne cr6,0x8249e93c
	if (!cr6.eq) goto loc_8249E93C;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8249e93c
	goto loc_8249E93C;
loc_8249E908:
	// li r28,0
	r28.s64 = 0;
	// b 0x8249e93c
	goto loc_8249E93C;
loc_8249E910:
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r29.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
loc_8249E93C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
	// bne 0x8249e890
	if (!cr0.eq) goto loc_8249E890;
loc_8249E948:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8249E950"))) PPC_WEAK_FUNC(sub_8249E950);
PPC_FUNC_IMPL(__imp__sub_8249E950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x8249e9ac
	if (!cr6.eq) goto loc_8249E9AC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249e994
	if (cr0.eq) goto loc_8249E994;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,22608
	ctx.r5.s64 = r11.s64 + 22608;
	// b 0x8249e99c
	goto loc_8249E99C;
loc_8249E994:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,22604
	ctx.r5.s64 = r11.s64 + 22604;
loc_8249E99C:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-24540
	ctx.r4.s64 = r11.s64 + -24540;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249E9AC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi. r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249ee9c
	if (cr0.eq) goto loc_8249EE9C;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8249ee88
	if (!cr6.gt) goto loc_8249EE88;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x8249e9e4
	if (!cr6.gt) goto loc_8249E9E4;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// ble cr6,0x8249ee88
	if (!cr6.gt) goto loc_8249EE88;
	// cmpwi cr6,r11,19
	cr6.compare<int32_t>(r11.s32, 19, xer);
	// ble cr6,0x8249e9e4
	if (!cr6.gt) goto loc_8249E9E4;
	// addi r10,r11,-24
	ctx.r10.s64 = r11.s64 + -24;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bgt cr6,0x8249ee88
	if (cr6.gt) goto loc_8249EE88;
loc_8249E9E4:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// addi r4,r10,22588
	ctx.r4.s64 = ctx.r10.s64 + 22588;
	// bgt cr6,0x8249eaac
	if (cr6.gt) goto loc_8249EAAC;
	// lis r12,-32246
	r12.s64 = -2113273856;
	// addi r12,r12,21824
	r12.s64 = r12.s64 + 21824;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32182
	r12.s64 = -2109079552;
	// addi r12,r12,-5600
	r12.s64 = r12.s64 + -5600;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_8249EA20;
	case 1:
		goto loc_8249EA2C;
	case 2:
		goto loc_8249EA38;
	case 3:
		goto loc_8249EA44;
	case 4:
		goto loc_8249EAAC;
	case 5:
		goto loc_8249EAAC;
	case 6:
		goto loc_8249EAAC;
	case 7:
		goto loc_8249EAAC;
	case 8:
		goto loc_8249EAAC;
	case 9:
		goto loc_8249EAAC;
	case 10:
		goto loc_8249EAAC;
	case 11:
		goto loc_8249EAAC;
	case 12:
		goto loc_8249EAAC;
	case 13:
		goto loc_8249EAAC;
	case 14:
		goto loc_8249EAAC;
	case 15:
		goto loc_8249EA50;
	case 16:
		goto loc_8249EA5C;
	case 17:
		goto loc_8249EA68;
	case 18:
		goto loc_8249EA74;
	case 19:
		goto loc_8249EAAC;
	case 20:
		goto loc_8249EAAC;
	case 21:
		goto loc_8249EAAC;
	case 22:
		goto loc_8249EAAC;
	case 23:
		goto loc_8249EA80;
	case 24:
		goto loc_8249EA8C;
	case 25:
		goto loc_8249EA98;
	case 26:
		goto loc_8249EAA4;
	default:
		__builtin_unreachable();
	}
loc_8249EA20:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22580
	ctx.r4.s64 = r11.s64 + 22580;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA2C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22564
	ctx.r4.s64 = r11.s64 + 22564;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA38:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22548
	ctx.r4.s64 = r11.s64 + 22548;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA44:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22528
	ctx.r4.s64 = r11.s64 + 22528;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA50:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22504
	ctx.r4.s64 = r11.s64 + 22504;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA5C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22488
	ctx.r4.s64 = r11.s64 + 22488;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA68:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22476
	ctx.r4.s64 = r11.s64 + 22476;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA74:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22464
	ctx.r4.s64 = r11.s64 + 22464;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA80:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-17876
	ctx.r4.s64 = r11.s64 + -17876;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA8C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-17892
	ctx.r4.s64 = r11.s64 + -17892;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EA98:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-17908
	ctx.r4.s64 = r11.s64 + -17908;
	// b 0x8249eaac
	goto loc_8249EAAC;
loc_8249EAA4:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22444
	ctx.r4.s64 = r11.s64 + 22444;
loc_8249EAAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249db20
	sub_8249DB20(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2836
	ctx.r4.s64 = r11.s64 + 2836;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x3F;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249eae4
	if (cr0.eq) goto loc_8249EAE4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,21792
	ctx.r4.s64 = r11.s64 + 21792;
	// b 0x8249eaec
	goto loc_8249EAEC;
loc_8249EAE4:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,21788
	ctx.r4.s64 = r11.s64 + 21788;
loc_8249EAEC:
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,22044
	r27.s64 = r11.s64 + 22044;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r29,r11,-1872
	r29.s64 = r11.s64 + -1872;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,-16376
	r28.s64 = r11.s64 + -16376;
	// lbzx r11,r10,r29
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,29,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,26,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,23,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17980
	ctx.r4.s64 = r11.s64 + -17980;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x3F;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | r11.u64;
	// bl 0x8249df98
	sub_8249DF98(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,6,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// rlwinm r11,r11,4,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r10,18
	cr6.compare<uint32_t>(ctx.r10.u32, 18, xer);
	// beq cr6,0x8249ec38
	if (cr6.eq) goto loc_8249EC38;
	// rlwinm r11,r11,2,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EC38:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22436
	ctx.r4.s64 = r11.s64 + 22436;
	// rlwinm r5,r10,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1F;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249ec6c
	if (cr0.eq) goto loc_8249EC6C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22400
	ctx.r4.s64 = r11.s64 + 22400;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EC6C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,20,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8249ec98
	if (cr6.eq) goto loc_8249EC98;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1176
	ctx.r10.s64 = r29.s64 + 1176;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22384
	ctx.r4.s64 = r11.s64 + 22384;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EC98:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,18,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8249ecc4
	if (cr6.eq) goto loc_8249ECC4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1192
	ctx.r10.s64 = r29.s64 + 1192;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22368
	ctx.r4.s64 = r11.s64 + 22368;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249ECC4:
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8249ecf0
	if (cr6.eq) goto loc_8249ECF0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1208
	ctx.r10.s64 = r29.s64 + 1208;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22352
	ctx.r4.s64 = r11.s64 + 22352;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249ECF0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,14,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x8249ed1c
	if (cr6.eq) goto loc_8249ED1C;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1224
	ctx.r10.s64 = r29.s64 + 1224;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22332
	ctx.r4.s64 = r11.s64 + 22332;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249ED1C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,11,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x7;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x8249ed48
	if (cr6.eq) goto loc_8249ED48;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1256
	ctx.r10.s64 = r29.s64 + 1256;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,3812
	ctx.r4.s64 = r11.s64 + 3812;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249ED48:
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8249ed74
	if (cr6.eq) goto loc_8249ED74;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1288
	ctx.r10.s64 = r29.s64 + 1288;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22312
	ctx.r4.s64 = r11.s64 + 22312;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249ED74:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,6,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x8249eda0
	if (cr6.eq) goto loc_8249EDA0;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1304
	ctx.r10.s64 = r29.s64 + 1304;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22292
	ctx.r4.s64 = r11.s64 + 22292;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EDA0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249edbc
	if (cr0.eq) goto loc_8249EDBC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22272
	ctx.r4.s64 = r11.s64 + 22272;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EDBC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,3,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249ede4
	if (cr0.eq) goto loc_8249EDE4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1320
	ctx.r10.s64 = r29.s64 + 1320;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22252
	ctx.r4.s64 = r11.s64 + 22252;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EDE4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// clrlwi. r5,r11,31
	ctx.r5.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249ee00
	if (cr0.eq) goto loc_8249EE00;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22224
	ctx.r4.s64 = r11.s64 + 22224;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EE00:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249ee1c
	if (cr0.eq) goto loc_8249EE1C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22196
	ctx.r4.s64 = r11.s64 + 22196;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EE1C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r5,r11,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x7F;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249ee38
	if (cr0.eq) goto loc_8249EE38;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22180
	ctx.r4.s64 = r11.s64 + 22180;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EE38:
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// clrlwi. r5,r11,27
	ctx.r5.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249ee54
	if (cr0.eq) goto loc_8249EE54;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22164
	ctx.r4.s64 = r11.s64 + 22164;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EE54:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r5,r11,11,27,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x1F;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249ee70
	if (cr0.eq) goto loc_8249EE70;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22148
	ctx.r4.s64 = r11.s64 + 22148;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249EE70:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm. r5,r11,6,27,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x1F;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249f228
	if (cr0.eq) goto loc_8249F228;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22132
	ctx.r4.s64 = r11.s64 + 22132;
	// b 0x8249f220
	goto loc_8249F220;
loc_8249EE88:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22108
	ctx.r4.s64 = r11.s64 + 22108;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// b 0x8249f228
	goto loc_8249F228;
loc_8249EE9C:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,-17620
	ctx.r4.s64 = r11.s64 + -17620;
	// bl 0x8249db20
	sub_8249DB20(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,2836
	ctx.r4.s64 = r11.s64 + 2836;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x3F;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8249eedc
	if (cr0.eq) goto loc_8249EEDC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,21792
	ctx.r4.s64 = r11.s64 + 21792;
	// b 0x8249eee4
	goto loc_8249EEE4;
loc_8249EEDC:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,21788
	ctx.r4.s64 = r11.s64 + 21788;
loc_8249EEE4:
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22044
	ctx.r4.s64 = r11.s64 + 22044;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// addi r29,r11,-1872
	r29.s64 = r11.s64 + -1872;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,-16376
	r28.s64 = r11.s64 + -16376;
	// lbzx r11,r10,r29
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r29.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,29,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,26,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,23,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x7;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,-17980
	r27.s64 = r11.s64 + -17980;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x3F;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | r11.u64;
	// bl 0x8249df98
	sub_8249DF98(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,22104
	ctx.r4.s64 = r11.s64 + 22104;
	// lbzx r11,r10,r29
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249f018
	if (!cr0.eq) goto loc_8249F018;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r4,r9,22092
	ctx.r4.s64 = ctx.r9.s64 + 22092;
	// addi r10,r10,-292
	ctx.r10.s64 = ctx.r10.s64 + -292;
	// rlwinm r9,r11,9,28,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x1F;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F018:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r26,r11,24840
	r26.s64 = r11.s64 + 24840;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r25,r11,-24616
	r25.s64 = r11.s64 + -24616;
	// beq 0x8249f054
	if (cr0.eq) goto loc_8249F054;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r11,9844
	ctx.r5.s64 = r11.s64 + 9844;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F054:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,22080
	r28.s64 = r11.s64 + 22080;
	// bne 0x8249f0b8
	if (!cr0.eq) goto loc_8249F0B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r10,22052
	ctx.r4.s64 = ctx.r10.s64 + 22052;
	// rlwinm r6,r11,24,9,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x7FFFFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = r11.u32 & 0xFF;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r10,r29,1336
	ctx.r10.s64 = r29.s64 + 1336;
	// addi r4,r11,22036
	ctx.r4.s64 = r11.s64 + 22036;
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,2,24,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFC;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F0B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r29,r11,-26580
	r29.s64 = r11.s64 + -26580;
	// beq 0x8249f0f4
	if (cr0.eq) goto loc_8249F0F4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,22024
	ctx.r4.s64 = r11.s64 + 22024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F0F4:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,22012
	ctx.r4.s64 = r11.s64 + 22012;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,18,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249f120
	if (cr0.eq) goto loc_8249F120;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,21988
	ctx.r4.s64 = r11.s64 + 21988;
	// b 0x8249f128
	goto loc_8249F128;
loc_8249F120:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,21964
	ctx.r4.s64 = r11.s64 + 21964;
loc_8249F128:
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21952
	ctx.r4.s64 = r11.s64 + 21952;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249f174
	if (cr0.eq) goto loc_8249F174;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8249f17c
	goto loc_8249F17C;
loc_8249F174:
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r4,r11,-26572
	ctx.r4.s64 = r11.s64 + -26572;
loc_8249F17C:
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lbz r11,4(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 4);
	// clrlwi. r5,r11,26
	ctx.r5.u64 = r11.u32 & 0x3F;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8249f19c
	if (cr0.eq) goto loc_8249F19C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,21936
	ctx.r4.s64 = r11.s64 + 21936;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F19C:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x8249f208
	if (cr6.eq) goto loc_8249F208;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249f208
	if (!cr0.eq) goto loc_8249F208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249e808
	sub_8249E808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8249f1fc
	if (!cr0.eq) goto loc_8249F1FC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r4,r11,21900
	ctx.r4.s64 = r11.s64 + 21900;
	// rlwinm r11,r10,5,29,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x7;
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
	// b 0x8249f208
	goto loc_8249F208;
loc_8249F1FC:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,21884
	ctx.r4.s64 = r11.s64 + 21884;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F208:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8249f228
	if (cr0.eq) goto loc_8249F228;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r5,r11,9836
	ctx.r5.s64 = r11.s64 + 9836;
loc_8249F220:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d410
	sub_8249D410(ctx, base);
loc_8249F228:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
}

