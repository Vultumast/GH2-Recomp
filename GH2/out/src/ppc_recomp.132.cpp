#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823BA82C"))) PPC_WEAK_FUNC(sub_823BA82C);
PPC_FUNC_IMPL(__imp__sub_823BA82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA830"))) PPC_WEAK_FUNC(sub_823BA830);
PPC_FUNC_IMPL(__imp__sub_823BA830) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4ccc
	__imp__RtlInitAnsiString(ctx, base);
	// li r11,-4
	r11.s64 = -4;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_823BA888"))) PPC_WEAK_FUNC(sub_823BA888);
PPC_FUNC_IMPL(__imp__sub_823BA888) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x823ba898
	if (!cr6.eq) goto loc_823BA898;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823BA898:
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mulli r11,r11,-10000
	r11.s64 = r11.s64 * -10000;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BA8A8"))) PPC_WEAK_FUNC(sub_823BA8A8);
PPC_FUNC_IMPL(__imp__sub_823BA8A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x823ba888
	sub_823BA888(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// clrlwi r29,r28,24
	r29.u64 = r28.u32 & 0xFF;
loc_823BA8CC:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e4d2c
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823ba8fc
	if (cr0.lt) goto loc_823BA8FC;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x823ba904
	if (cr6.eq) goto loc_823BA904;
	// cmpwi cr6,r3,257
	cr6.compare<int32_t>(ctx.r3.s32, 257, xer);
	// beq cr6,0x823ba8cc
	if (cr6.eq) goto loc_823BA8CC;
	// b 0x823ba904
	goto loc_823BA904;
loc_823BA8FC:
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823BA904:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823BA90C"))) PPC_WEAK_FUNC(sub_823BA90C);
PPC_FUNC_IMPL(__imp__sub_823BA90C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BA910"))) PPC_WEAK_FUNC(sub_823BA910);
PPC_FUNC_IMPL(__imp__sub_823BA910) {
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
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// addi r8,r31,16
	ctx.r8.s64 = r31.s64 + 16;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r7,r30,12
	ctx.r7.s64 = r30.s64 + 12;
	// addi r5,r30,20
	ctx.r5.s64 = r30.s64 + 20;
	// addi r4,r31,64
	ctx.r4.s64 = r31.s64 + 64;
	// addi r3,r30,44
	ctx.r3.s64 = r30.s64 + 44;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// stw r11,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r11.u32);
	// lwz r5,60(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// li r10,0
	ctx.r10.s64 = 0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stb r10,44(r11)
	PPC_STORE_U8(r11.u32 + 44, ctx.r10.u8);
	// stb r10,304(r30)
	PPC_STORE_U8(r30.u32 + 304, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_823BA9C8"))) PPC_WEAK_FUNC(sub_823BA9C8);
PPC_FUNC_IMPL(__imp__sub_823BA9C8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r7,34
	ctx.r7.s64 = 34;
	// li r6,56
	ctx.r6.s64 = 56;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,15160(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 15160);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823baa0c
	if (cr6.eq) goto loc_823BAA0C;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823baa10
	goto loc_823BAA10;
loc_823BAA0C:
	// bl 0x826e4d6c
	__imp__NtQueryInformationFile(ctx, base);
loc_823BAA10:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge cr6,0x823baa24
	if (!cr6.lt) goto loc_823BAA24;
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823baa30
	goto loc_823BAA30;
loc_823BAA24:
	// ld r11,136(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// li r3,1
	ctx.r3.s64 = 1;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
loc_823BAA30:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BAA44"))) PPC_WEAK_FUNC(sub_823BAA44);
PPC_FUNC_IMPL(__imp__sub_823BAA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BAA48"))) PPC_WEAK_FUNC(sub_823BAA48);
PPC_FUNC_IMPL(__imp__sub_823BAA48) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// rlwinm r9,r7,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x823baa78
	if (cr6.eq) goto loc_823BAA78;
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r11,r11,24,0,7
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF000000;
	// or r9,r11,r9
	ctx.r9.u64 = r11.u64 | ctx.r9.u64;
loc_823BAA78:
	// lis r11,-32196
	r11.s64 = -2109997056;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// addi r6,r11,-19824
	ctx.r6.s64 = r11.s64 + -19824;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4f1c
	__imp__ExCreateThread(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823baaa4
	if (!cr0.lt) goto loc_823BAAA4;
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823baaa8
	goto loc_823BAAA8;
loc_823BAAA4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823BAAA8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BAAB8"))) PPC_WEAK_FUNC(sub_823BAAB8);
PPC_FUNC_IMPL(__imp__sub_823BAAB8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x823baae4
	if (!cr6.eq) goto loc_823BAAE4;
	// bl 0x823b4d20
	sub_823B4D20(ctx, base);
	// addi r4,r3,1
	ctx.r4.s64 = ctx.r3.s64 + 1;
loc_823BAAE4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x823babc4
	if (!cr6.gt) goto loc_823BABC4;
	// li r9,1
	ctx.r9.s64 = 1;
loc_823BAAF0:
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(r11.u32, 127, xer);
	// bgt cr6,0x823bab1c
	if (cr6.gt) goto loc_823BAB1C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bgt cr6,0x823babb8
	if (cr6.gt) goto loc_823BABB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823babb8
	if (cr6.eq) goto loc_823BABB8;
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// b 0x823babb4
	goto loc_823BABB4;
loc_823BAB1C:
	// cmplwi cr6,r11,2047
	cr6.compare<uint32_t>(r11.u32, 2047, xer);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// bgt cr6,0x823bab48
	if (cr6.gt) goto loc_823BAB48;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x823bab94
	if (cr6.gt) goto loc_823BAB94;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823bab94
	if (cr6.eq) goto loc_823BAB94;
	// rlwinm r10,r10,26,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FF;
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwimi r10,r8,6,0,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0xFFFFFFE0) | (ctx.r10.u64 & 0xFFFFFFFF0000001F);
	// b 0x823bab8c
	goto loc_823BAB8C;
loc_823BAB48:
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x823bab6c
	if (cr6.gt) goto loc_823BAB6C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823bab6c
	if (cr6.eq) goto loc_823BAB6C;
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// li r8,7
	ctx.r8.s64 = 7;
	// rlwimi r10,r8,5,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 5) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823BAB6C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bgt cr6,0x823bab94
	if (cr6.gt) goto loc_823BAB94;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823bab94
	if (cr6.eq) goto loc_823BAB94;
	// lhz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// rlwinm r10,r10,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3FFFFFF;
	// rlwimi r10,r9,7,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
loc_823BAB8C:
	// stb r10,0(r31)
	PPC_STORE_U8(r31.u32 + 0, ctx.r10.u8);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823BAB94:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// cmpw cr6,r30,r29
	cr6.compare<int32_t>(r30.s32, r29.s32, xer);
	// bgt cr6,0x823babb8
	if (cr6.gt) goto loc_823BABB8;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823babb8
	if (cr6.eq) goto loc_823BABB8;
	// lhz r11,0(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 0);
	// rlwimi r11,r9,7,0,25
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 7) & 0xFFFFFFC0) | (r11.u64 & 0xFFFFFFFF0000003F);
	// stb r11,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r11.u8);
loc_823BABB4:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
loc_823BABB8:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// bne 0x823baaf0
	if (!cr0.eq) goto loc_823BAAF0;
loc_823BABC4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x823babe4
	if (cr6.eq) goto loc_823BABE4;
	// cmpw cr6,r29,r30
	cr6.compare<int32_t>(r29.s32, r30.s32, xer);
	// bge cr6,0x823babe4
	if (!cr6.lt) goto loc_823BABE4;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823babe8
	goto loc_823BABE8;
loc_823BABE4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823BABE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823BABF0"))) PPC_WEAK_FUNC(sub_823BABF0);
PPC_FUNC_IMPL(__imp__sub_823BABF0) {
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
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x823bac38
	if (!cr6.eq) goto loc_823BAC38;
	// mr r11,r22
	r11.u64 = r22.u64;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_823BAC18:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x823bac18
	if (!cr6.eq) goto loc_823BAC18;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
loc_823BAC38:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x823badc8
	if (!cr6.gt) goto loc_823BADC8;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r31,0
	r31.s64 = 0;
	// addi r24,r11,-19120
	r24.s64 = r11.s64 + -19120;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lis r27,-32139
	r27.s64 = -2106261504;
	// lis r26,-32139
	r26.s64 = -2106261504;
	// lis r28,-32139
	r28.s64 = -2106261504;
	// lis r29,-32139
	r29.s64 = -2106261504;
	// lis r25,-32139
	r25.s64 = -2106261504;
	// lis r21,-32139
	r21.s64 = -2106261504;
	// lis r20,-32139
	r20.s64 = -2106261504;
	// lis r23,-32139
	r23.s64 = -2106261504;
	// addi r30,r11,-19096
	r30.s64 = r11.s64 + -19096;
loc_823BAC74:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// lbzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + r30.u32);
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r9,r22,r7
	ctx.r9.s64 = ctx.r7.s64 - r22.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// bgt cr6,0x823badc8
	if (cr6.gt) goto loc_823BADC8;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// blt cr6,0x823bad18
	if (cr6.lt) goto loc_823BAD18;
	// beq cr6,0x823bad04
	if (cr6.eq) goto loc_823BAD04;
	// cmplwi cr6,r7,3
	cr6.compare<uint32_t>(ctx.r7.u32, 3, xer);
	// blt cr6,0x823bacf0
	if (cr6.lt) goto loc_823BACF0;
	// beq cr6,0x823bacdc
	if (cr6.eq) goto loc_823BACDC;
	// cmplwi cr6,r7,5
	cr6.compare<uint32_t>(ctx.r7.u32, 5, xer);
	// blt cr6,0x823bacc8
	if (cr6.lt) goto loc_823BACC8;
	// bne cr6,0x823bad28
	if (!cr6.eq) goto loc_823BAD28;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r8,6,0,25
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
loc_823BACC8:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823BACDC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823BACF0:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823BAD04:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
loc_823BAD18:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_823BAD28:
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r24.u32);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// lwz r9,-19148(r23)
	ctx.r9.u64 = PPC_LOAD_U32(r23.u32 + -19148);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x823bad50
	if (cr6.gt) goto loc_823BAD50;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// bgt cr6,0x823badc0
	if (cr6.gt) goto loc_823BADC0;
	// b 0x823badb8
	goto loc_823BADB8;
loc_823BAD50:
	// lwz r9,-19144(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + -19144);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x823bad70
	if (!cr6.gt) goto loc_823BAD70;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// bgt cr6,0x823badc0
	if (cr6.gt) goto loc_823BADC0;
	// lwz r11,-19152(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + -19152);
	// b 0x823badb8
	goto loc_823BADB8;
loc_823BAD70:
	// lwz r9,-19136(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + -19136);
	// addi r7,r3,1
	ctx.r7.s64 = ctx.r3.s64 + 1;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// bgt cr6,0x823bad9c
	if (cr6.gt) goto loc_823BAD9C;
	// lwz r9,-19140(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + -19140);
	// srw r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r9.u8 & 0x3F));
	// lwz r9,-19128(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + -19128);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r9,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r9.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
loc_823BAD9C:
	// addi r3,r7,1
	ctx.r3.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r3,r6
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r6.s32, xer);
	// bgt cr6,0x823badc0
	if (cr6.gt) goto loc_823BADC0;
	// lwz r9,-19132(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + -19132);
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & r11.u64;
	// lwz r11,-19124(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -19124);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
loc_823BADB8:
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, r11.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
loc_823BADC0:
	// cmpw cr6,r31,r4
	cr6.compare<int32_t>(r31.s32, ctx.r4.s32, xer);
	// blt cr6,0x823bac74
	if (cr6.lt) goto loc_823BAC74;
loc_823BADC8:
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x823bade4
	if (cr6.eq) goto loc_823BADE4;
	// cmpw cr6,r6,r3
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r3.s32, xer);
	// bge cr6,0x823bade4
	if (!cr6.lt) goto loc_823BADE4;
	// li r3,122
	ctx.r3.s64 = 122;
	// bl 0x823b9af0
	sub_823B9AF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BADE4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_823BADEC"))) PPC_WEAK_FUNC(sub_823BADEC);
PPC_FUNC_IMPL(__imp__sub_823BADEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BADF0"))) PPC_WEAK_FUNC(sub_823BADF0);
PPC_FUNC_IMPL(__imp__sub_823BADF0) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x823bb3b0
	sub_823BB3B0(ctx, base);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823bae50
	if (cr0.eq) goto loc_823BAE50;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823bb310
	sub_823BB310(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823bb030
	if (cr0.eq) goto loc_823BB030;
	// ld r11,0(r20)
	r11.u64 = PPC_LOAD_U64(r20.u32 + 0);
	// ld r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U64(r21.u32 + 0);
	// cmpd cr6,r11,r10
	cr6.compare<int64_t>(r11.s64, ctx.r10.s64, xer);
	// blt cr6,0x823bb030
	if (cr6.lt) goto loc_823BB030;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823bb034
	goto loc_823BB034;
loc_823BAE50:
	// lha r22,6(r29)
	r22.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 6));
	// cmpwi cr6,r22,5
	cr6.compare<int32_t>(r22.s32, 5, xer);
	// bgt cr6,0x823bb030
	if (cr6.gt) goto loc_823BB030;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// beq cr6,0x823bb030
	if (cr6.eq) goto loc_823BB030;
	// li r23,0
	r23.s64 = 0;
	// lhz r25,2(r29)
	r25.u64 = PPC_LOAD_U16(r29.u32 + 2);
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lhz r31,4(r29)
	r31.u64 = PPC_LOAD_U16(r29.u32 + 4);
	// mr r26,r23
	r26.u64 = r23.u64;
	// li r24,1
	r24.s64 = 1;
	// bne 0x823baeb0
	if (!cr0.eq) goto loc_823BAEB0;
	// lhz r11,114(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 114);
	// extsh r10,r25
	ctx.r10.s64 = r25.s16;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x823baea0
	if (!cr6.lt) goto loc_823BAEA0;
	// lhz r11,112(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// extsh r28,r11
	r28.s64 = r11.s16;
	// b 0x823baeb4
	goto loc_823BAEB4;
loc_823BAEA0:
	// lhz r28,112(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// bgt cr6,0x823baeb4
	if (cr6.gt) goto loc_823BAEB4;
	// mr r26,r24
	r26.u64 = r24.u64;
	// b 0x823baeb4
	goto loc_823BAEB4;
loc_823BAEB0:
	// lhz r28,112(r1)
	r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
loc_823BAEB4:
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r28.u16);
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r25.u16);
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r24.u16);
	// sth r23,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, r23.u16);
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// lhz r11,10(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 10);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r11.u16);
	// lhz r11,12(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 12);
	// sth r11,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, r11.u16);
	// lhz r11,14(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 14);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, r11.u16);
	// bl 0x826e4f2c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823bb030
	if (cr0.eq) goto loc_823BB030;
	// extsh r27,r31
	r27.s64 = r31.s16;
loc_823BAEFC:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4c9c
	__imp__RtlTimeToTimeFields(ctx, base);
	// lha r11,142(r1)
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 142));
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// ble cr6,0x823baf2c
	if (!cr6.gt) goto loc_823BAF2C;
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
loc_823BAF24:
	// extsh r11,r11
	r11.s64 = r11.s16;
	// b 0x823baf44
	goto loc_823BAF44;
loc_823BAF2C:
	// bge cr6,0x823baf40
	if (!cr6.lt) goto loc_823BAF40;
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// subf r11,r11,r27
	r11.s64 = r27.s64 - r11.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823baf24
	goto loc_823BAF24;
loc_823BAF40:
	// lhz r11,100(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
loc_823BAF44:
	// mr r30,r11
	r30.u64 = r11.u64;
	// mr r31,r24
	r31.u64 = r24.u64;
	// cmpwi cr6,r22,1
	cr6.compare<int32_t>(r22.s32, 1, xer);
	// ble cr6,0x823baf9c
	if (!cr6.gt) goto loc_823BAF9C;
	// b 0x823baf5c
	goto loc_823BAF5C;
loc_823BAF58:
	// lhz r11,100(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
loc_823BAF5C:
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r11,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r11.u16);
	// bl 0x826e4f2c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823baf9c
	if (cr0.eq) goto loc_823BAF9C;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826e4c9c
	__imp__RtlTimeToTimeFields(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lhz r30,132(r1)
	r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 132);
	// extsh r31,r11
	r31.s64 = r11.s16;
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmpw cr6,r11,r22
	cr6.compare<int32_t>(r11.s32, r22.s32, xer);
	// blt cr6,0x823baf58
	if (cr6.lt) goto loc_823BAF58;
loc_823BAF9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r30,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r30.u16);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826e4f2c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823bb030
	if (cr0.eq) goto loc_823BB030;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823bb03c
	if (cr0.eq) goto loc_823BB03C;
	// lhz r11,118(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// lha r10,100(r1)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r1.u32 + 100));
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// blt cr6,0x823bafe0
	if (cr6.lt) goto loc_823BAFE0;
	// bne cr6,0x823bb03c
	if (!cr6.eq) goto loc_823BB03C;
	// ld r11,0(r21)
	r11.u64 = PPC_LOAD_U64(r21.u32 + 0);
	// cmpd cr6,r9,r11
	cr6.compare<int64_t>(ctx.r9.s64, r11.s64, xer);
	// bge cr6,0x823bb03c
	if (!cr6.lt) goto loc_823BB03C;
loc_823BAFE0:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// sth r25,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, r25.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// sth r24,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, r24.u16);
	// extsh r28,r11
	r28.s64 = r11.s16;
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// sth r23,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, r23.u16);
	// mr r26,r23
	r26.u64 = r23.u64;
	// sth r11,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, r11.u16);
	// lhz r11,10(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 10);
	// sth r28,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, r28.u16);
	// sth r11,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, r11.u16);
	// lhz r11,12(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 12);
	// sth r11,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, r11.u16);
	// lhz r11,14(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 14);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, r11.u16);
	// bl 0x826e4f2c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823baefc
	if (!cr0.eq) goto loc_823BAEFC;
loc_823BB030:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BB034:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd28
	return;
loc_823BB03C:
	// li r3,1
	ctx.r3.s64 = 1;
	// std r9,0(r20)
	PPC_STORE_U64(r20.u32 + 0, ctx.r9.u64);
	// b 0x823bb034
	goto loc_823BB034;
}

__attribute__((alias("__imp__sub_823BB048"))) PPC_WEAK_FUNC(sub_823BB048);
PPC_FUNC_IMPL(__imp__sub_823BB048) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r31.u16);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r31.u32);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r31.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r31.u32);
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823bb09c
	if (!cr0.lt) goto loc_823BB09C;
loc_823BB094:
	// bl 0x826e4e2c
	__imp__RtlNtStatusToDosError(ctx, base);
	// b 0x823bb270
	goto loc_823BB270;
loc_823BB09C:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// li r4,2
	ctx.r4.s64 = 2;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823bb094
	if (cr0.lt) goto loc_823BB094;
	// addi r8,r30,4
	ctx.r8.s64 = r30.s64 + 4;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// li r11,4
	r11.s64 = 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_823BB0D4:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x823bb0d4
	if (!cr0.eq) goto loc_823BB0D4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r31,8(r8)
	PPC_STORE_U16(ctx.r8.u32 + 8, r31.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,3
	ctx.r4.s64 = 3;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823bb094
	if (cr0.lt) goto loc_823BB094;
	// addi r8,r30,88
	ctx.r8.s64 = r30.s64 + 88;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r11,4
	r11.s64 = 4;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_823BB120:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x823bb120
	if (!cr0.eq) goto loc_823BB120;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// sth r31,8(r8)
	PPC_STORE_U16(ctx.r8.u32 + 8, r31.u16);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,4
	ctx.r4.s64 = 4;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823bb094
	if (cr0.lt) goto loc_823BB094;
	// addi r31,r30,68
	r31.s64 = r30.s64 + 68;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lbz r11,84(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// lbz r10,85(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 85);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 86);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r8,87(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 87);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,5
	ctx.r4.s64 = 5;
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// sth r8,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r8.u16);
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823bb094
	if (cr0.lt) goto loc_823BB094;
	// addi r31,r30,152
	r31.s64 = r30.s64 + 152;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lbz r11,88(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 88);
	// lbz r10,89(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 89);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r9,90(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 90);
	// li r6,4
	ctx.r6.s64 = 4;
	// lbz r8,91(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 91);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,6
	ctx.r4.s64 = 6;
	// li r3,3
	ctx.r3.s64 = 3;
	// sth r11,2(r31)
	PPC_STORE_U16(r31.u32 + 2, r11.u16);
	// sth r10,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r10.u16);
	// sth r9,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r9.u16);
	// sth r8,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r8.u16);
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823bb094
	if (cr0.lt) goto loc_823BB094;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// li r4,7
	ctx.r4.s64 = 7;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r11,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r11.u32);
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823bb094
	if (cr0.lt) goto loc_823BB094;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
	// beq cr6,0x823bb26c
	if (cr6.eq) goto loc_823BB26C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,12
	ctx.r4.s64 = 12;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x826e4c6c
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823bb094
	if (cr0.lt) goto loc_823BB094;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823BB26C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823BB270:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823BB278"))) PPC_WEAK_FUNC(sub_823BB278);
PPC_FUNC_IMPL(__imp__sub_823BB278) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB27C"))) PPC_WEAK_FUNC(sub_823BB27C);
PPC_FUNC_IMPL(__imp__sub_823BB27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB280"))) PPC_WEAK_FUNC(sub_823BB280);
PPC_FUNC_IMPL(__imp__sub_823BB280) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,20
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB288"))) PPC_WEAK_FUNC(sub_823BB288);
PPC_FUNC_IMPL(__imp__sub_823BB288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-14056(r14)
	r16.u64 = PPC_LOAD_U32(r14.u32 + -14056);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b9af8
	sub_823B9AF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b9af8
	sub_823B9AF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x826e4e1c
	__imp__ExTerminateThread(ctx, base);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x823b9cd8
	sub_823B9CD8(ctx, base);
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

__attribute__((alias("__imp__sub_823BB290"))) PPC_WEAK_FUNC(sub_823BB290);
PPC_FUNC_IMPL(__imp__sub_823BB290) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x823b9af8
	sub_823B9AF8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b9af8
	sub_823B9AF8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x826e4e1c
	__imp__ExTerminateThread(ctx, base);
}

__attribute__((alias("__imp__sub_823BB2EC"))) PPC_WEAK_FUNC(sub_823BB2EC);
PPC_FUNC_IMPL(__imp__sub_823BB2EC) {
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
	// bl 0x823b9cd8
	sub_823B9CD8(ctx, base);
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

__attribute__((alias("__imp__sub_823BB310"))) PPC_WEAK_FUNC(sub_823BB310);
PPC_FUNC_IMPL(__imp__sub_823BB310) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// sth r10,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r10.u16);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// sth r10,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r10.u16);
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// sth r10,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r10.u16);
	// lhz r10,10(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// sth r10,104(r1)
	PPC_STORE_U16(ctx.r1.u32 + 104, ctx.r10.u16);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// lhz r11,14(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 14);
	// sth r10,106(r1)
	PPC_STORE_U16(ctx.r1.u32 + 106, ctx.r10.u16);
	// sth r11,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, r11.u16);
	// bl 0x826e4f2c
	__imp__RtlTimeFieldsToTime(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823bb388
	if (!cr0.eq) goto loc_823BB388;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,13
	ctx.r3.u64 = ctx.r3.u64 | 13;
	// bl 0x823ba6d8
	sub_823BA6D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823bb39c
	goto loc_823BB39C;
loc_823BB388:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_823BB39C:
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

__attribute__((alias("__imp__sub_823BB3B0"))) PPC_WEAK_FUNC(sub_823BB3B0);
PPC_FUNC_IMPL(__imp__sub_823BB3B0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826e4c9c
	__imp__RtlTimeToTimeFields(ctx, base);
	// lhz r11,96(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r10,98(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r8,110(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 110);
	// lhz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// sth r10,2(r31)
	PPC_STORE_U16(r31.u32 + 2, ctx.r10.u16);
	// lhz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 104);
	// lhz r11,106(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 106);
	// lhz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 108);
	// sth r9,6(r31)
	PPC_STORE_U16(r31.u32 + 6, ctx.r9.u16);
	// sth r8,4(r31)
	PPC_STORE_U16(r31.u32 + 4, ctx.r8.u16);
	// sth r7,8(r31)
	PPC_STORE_U16(r31.u32 + 8, ctx.r7.u16);
	// sth r6,10(r31)
	PPC_STORE_U16(r31.u32 + 10, ctx.r6.u16);
	// sth r11,12(r31)
	PPC_STORE_U16(r31.u32 + 12, r11.u16);
	// sth r10,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r10.u16);
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

__attribute__((alias("__imp__sub_823BB43C"))) PPC_WEAK_FUNC(sub_823BB43C);
PPC_FUNC_IMPL(__imp__sub_823BB43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB440"))) PPC_WEAK_FUNC(sub_823BB440);
PPC_FUNC_IMPL(__imp__sub_823BB440) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826e4a4c
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	r11.s64 = 537526272;
	// ori r11,r11,12800
	r11.u64 = r11.u64 | 12800;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x823bb4b0
	if (cr6.lt) goto loc_823BB4B0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,-20612
	ctx.r3.s64 = r11.s64 + -20612;
	// bl 0x826e510c
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823bb4b0
	if (cr0.lt) goto loc_823BB4B0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x826e4f0c
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823bb4b0
	if (!cr0.lt) goto loc_823BB4B0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x823bb4b4
	goto loc_823BB4B4;
loc_823BB4B0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823BB4B4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823bb4dc
	if (cr6.eq) goto loc_823BB4DC;
	// lis r6,8213
	ctx.r6.s64 = 538247168;
	// ori r6,r6,12800
	ctx.r6.u64 = ctx.r6.u64 | 12800;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823bb4e0
	goto loc_823BB4E0;
loc_823BB4DC:
	// bl 0x826e4f3c
	__imp__NetDll_WSAStartup(ctx, base);
loc_823BB4E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823BB4E8"))) PPC_WEAK_FUNC(sub_823BB4E8);
PPC_FUNC_IMPL(__imp__sub_823BB4E8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823bb440
	sub_823BB440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB4F8"))) PPC_WEAK_FUNC(sub_823BB4F8);
PPC_FUNC_IMPL(__imp__sub_823BB4F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4f4c
	__imp__NetDll_WSACleanup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB500"))) PPC_WEAK_FUNC(sub_823BB500);
PPC_FUNC_IMPL(__imp__sub_823BB500) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4f5c
	__imp__NetDll_socket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB514"))) PPC_WEAK_FUNC(sub_823BB514);
PPC_FUNC_IMPL(__imp__sub_823BB514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB518"))) PPC_WEAK_FUNC(sub_823BB518);
PPC_FUNC_IMPL(__imp__sub_823BB518) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4f6c
	__imp__NetDll_closesocket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB524"))) PPC_WEAK_FUNC(sub_823BB524);
PPC_FUNC_IMPL(__imp__sub_823BB524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB528"))) PPC_WEAK_FUNC(sub_823BB528);
PPC_FUNC_IMPL(__imp__sub_823BB528) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4f7c
	__imp__NetDll_shutdown(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB538"))) PPC_WEAK_FUNC(sub_823BB538);
PPC_FUNC_IMPL(__imp__sub_823BB538) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4f8c
	__imp__NetDll_ioctlsocket(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB54C"))) PPC_WEAK_FUNC(sub_823BB54C);
PPC_FUNC_IMPL(__imp__sub_823BB54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB550"))) PPC_WEAK_FUNC(sub_823BB550);
PPC_FUNC_IMPL(__imp__sub_823BB550) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4f9c
	__imp__NetDll_setsockopt(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB56C"))) PPC_WEAK_FUNC(sub_823BB56C);
PPC_FUNC_IMPL(__imp__sub_823BB56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB570"))) PPC_WEAK_FUNC(sub_823BB570);
PPC_FUNC_IMPL(__imp__sub_823BB570) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4fac
	__imp__NetDll_getsockname(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB584"))) PPC_WEAK_FUNC(sub_823BB584);
PPC_FUNC_IMPL(__imp__sub_823BB584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB588"))) PPC_WEAK_FUNC(sub_823BB588);
PPC_FUNC_IMPL(__imp__sub_823BB588) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4fbc
	__imp__NetDll_getpeername(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB59C"))) PPC_WEAK_FUNC(sub_823BB59C);
PPC_FUNC_IMPL(__imp__sub_823BB59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB5A0"))) PPC_WEAK_FUNC(sub_823BB5A0);
PPC_FUNC_IMPL(__imp__sub_823BB5A0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4fcc
	__imp__NetDll_bind(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB5B4"))) PPC_WEAK_FUNC(sub_823BB5B4);
PPC_FUNC_IMPL(__imp__sub_823BB5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB5B8"))) PPC_WEAK_FUNC(sub_823BB5B8);
PPC_FUNC_IMPL(__imp__sub_823BB5B8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4fdc
	__imp__NetDll_connect(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB5CC"))) PPC_WEAK_FUNC(sub_823BB5CC);
PPC_FUNC_IMPL(__imp__sub_823BB5CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB5D0"))) PPC_WEAK_FUNC(sub_823BB5D0);
PPC_FUNC_IMPL(__imp__sub_823BB5D0) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4fec
	__imp__NetDll_listen(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB5E0"))) PPC_WEAK_FUNC(sub_823BB5E0);
PPC_FUNC_IMPL(__imp__sub_823BB5E0) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e4ffc
	__imp__NetDll_accept(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB5F4"))) PPC_WEAK_FUNC(sub_823BB5F4);
PPC_FUNC_IMPL(__imp__sub_823BB5F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB5F8"))) PPC_WEAK_FUNC(sub_823BB5F8);
PPC_FUNC_IMPL(__imp__sub_823BB5F8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e500c
	__imp__NetDll_select(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB614"))) PPC_WEAK_FUNC(sub_823BB614);
PPC_FUNC_IMPL(__imp__sub_823BB614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB618"))) PPC_WEAK_FUNC(sub_823BB618);
PPC_FUNC_IMPL(__imp__sub_823BB618) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e501c
	__imp__NetDll_recv(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB630"))) PPC_WEAK_FUNC(sub_823BB630);
PPC_FUNC_IMPL(__imp__sub_823BB630) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e502c
	__imp__NetDll_recvfrom(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB650"))) PPC_WEAK_FUNC(sub_823BB650);
PPC_FUNC_IMPL(__imp__sub_823BB650) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e503c
	__imp__NetDll_send(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB668"))) PPC_WEAK_FUNC(sub_823BB668);
PPC_FUNC_IMPL(__imp__sub_823BB668) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e504c
	__imp__NetDll_sendto(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB688"))) PPC_WEAK_FUNC(sub_823BB688);
PPC_FUNC_IMPL(__imp__sub_823BB688) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e505c
	__imp__NetDll_WSAGetLastError(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB68C"))) PPC_WEAK_FUNC(sub_823BB68C);
PPC_FUNC_IMPL(__imp__sub_823BB68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB690"))) PPC_WEAK_FUNC(sub_823BB690);
PPC_FUNC_IMPL(__imp__sub_823BB690) {
	PPC_FUNC_PROLOGUE();
	// b 0x826e506c
	__imp__NetDll_WSACreateEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB694"))) PPC_WEAK_FUNC(sub_823BB694);
PPC_FUNC_IMPL(__imp__sub_823BB694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB698"))) PPC_WEAK_FUNC(sub_823BB698);
PPC_FUNC_IMPL(__imp__sub_823BB698) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826e4a4c
	__imp__XamGetSystemVersion(ctx, base);
	// lis r11,8202
	r11.s64 = 537526272;
	// ori r11,r11,12800
	r11.u64 = r11.u64 | 12800;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x823bb70c
	if (cr6.lt) goto loc_823BB70C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r11,-20612
	ctx.r3.s64 = r11.s64 + -20612;
	// bl 0x826e510c
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823bb70c
	if (cr0.lt) goto loc_823BB70C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,80
	ctx.r4.s64 = 80;
	// bl 0x826e4f0c
	__imp__XexGetProcedureAddress(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823bb70c
	if (!cr0.lt) goto loc_823BB70C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x823bb710
	goto loc_823BB710;
loc_823BB70C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823BB710:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq cr6,0x823bb734
	if (cr6.eq) goto loc_823BB734;
	// lis r5,8213
	ctx.r5.s64 = 538247168;
	// ori r5,r5,12800
	ctx.r5.u64 = ctx.r5.u64 | 12800;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823bb738
	goto loc_823BB738;
loc_823BB734:
	// bl 0x826e507c
	__imp__NetDll_XNetStartup(ctx, base);
loc_823BB738:
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

__attribute__((alias("__imp__sub_823BB750"))) PPC_WEAK_FUNC(sub_823BB750);
PPC_FUNC_IMPL(__imp__sub_823BB750) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823bb698
	sub_823BB698(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB75C"))) PPC_WEAK_FUNC(sub_823BB75C);
PPC_FUNC_IMPL(__imp__sub_823BB75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB760"))) PPC_WEAK_FUNC(sub_823BB760);
PPC_FUNC_IMPL(__imp__sub_823BB760) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e508c
	__imp__NetDll_XNetDnsLookup(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB774"))) PPC_WEAK_FUNC(sub_823BB774);
PPC_FUNC_IMPL(__imp__sub_823BB774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB778"))) PPC_WEAK_FUNC(sub_823BB778);
PPC_FUNC_IMPL(__imp__sub_823BB778) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826e509c
	__imp__NetDll_XNetDnsRelease(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB784"))) PPC_WEAK_FUNC(sub_823BB784);
PPC_FUNC_IMPL(__imp__sub_823BB784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB788"))) PPC_WEAK_FUNC(sub_823BB788);
PPC_FUNC_IMPL(__imp__sub_823BB788) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm. r10,r11,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r9,2,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x2;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x823bb7bc
	if (!cr0.eq) goto loc_823BB7BC;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// b 0x823bb818
	goto loc_823BB818;
loc_823BB7BC:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// bne cr6,0x823bb7f8
	if (!cr6.eq) goto loc_823BB7F8;
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r10,21,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r10,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
loc_823BB7F8:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_823BB818:
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB820"))) PPC_WEAK_FUNC(sub_823BB820);
PPC_FUNC_IMPL(__imp__sub_823BB820) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// rlwinm. r10,r11,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r9,2,30,30
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x2;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// bne 0x823bb858
	if (!cr0.eq) goto loc_823BB858;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// blr 
	return;
loc_823BB858:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bne cr6,0x823bb890
	if (!cr6.eq) goto loc_823BB890;
	// clrlwi r10,r10,21
	ctx.r10.u64 = ctx.r10.u32 & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,21,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x7FF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,10,22,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3FF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x823bb8b8
	goto loc_823BB8B8;
loc_823BB890:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r10,19,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,6,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823BB8B8:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB8C0"))) PPC_WEAK_FUNC(sub_823BB8C0);
PPC_FUNC_IMPL(__imp__sub_823BB8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// b 0x823c3a68
	sub_823C3A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB8D4"))) PPC_WEAK_FUNC(sub_823BB8D4);
PPC_FUNC_IMPL(__imp__sub_823BB8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BB8D8"))) PPC_WEAK_FUNC(sub_823BB8D8);
PPC_FUNC_IMPL(__imp__sub_823BB8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r5,r11,0,0,19
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r4,r10,0,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// b 0x823c3a68
	sub_823C3A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BB8F0"))) PPC_WEAK_FUNC(sub_823BB8F0);
PPC_FUNC_IMPL(__imp__sub_823BB8F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,44
	cr6.compare<uint32_t>(ctx.r3.u32, 44, xer);
	// bgt cr6,0x823bb948
	if (cr6.gt) goto loc_823BB948;
	// beq cr6,0x823bb940
	if (cr6.eq) goto loc_823BB940;
	// cmplwi cr6,r3,11
	cr6.compare<uint32_t>(ctx.r3.u32, 11, xer);
	// blt cr6,0x823bb970
	if (cr6.lt) goto loc_823BB970;
	// cmplwi cr6,r3,12
	cr6.compare<uint32_t>(ctx.r3.u32, 12, xer);
	// ble cr6,0x823bb92c
	if (!cr6.gt) goto loc_823BB92C;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// ble cr6,0x823bb970
	if (!cr6.gt) goto loc_823BB970;
	// cmplwi cr6,r3,20
	cr6.compare<uint32_t>(ctx.r3.u32, 20, xer);
	// ble cr6,0x823bb978
	if (!cr6.gt) goto loc_823BB978;
	// cmplwi cr6,r3,39
	cr6.compare<uint32_t>(ctx.r3.u32, 39, xer);
	// beq cr6,0x823bb940
	if (cr6.eq) goto loc_823BB940;
	// cmplwi cr6,r3,40
	cr6.compare<uint32_t>(ctx.r3.u32, 40, xer);
	// bne cr6,0x823bb970
	if (!cr6.eq) goto loc_823BB970;
loc_823BB92C:
	// li r11,2
	r11.s64 = 2;
loc_823BB930:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_823BB940:
	// li r11,4
	r11.s64 = 4;
	// b 0x823bb930
	goto loc_823BB930;
loc_823BB948:
	// cmplwi cr6,r3,49
	cr6.compare<uint32_t>(ctx.r3.u32, 49, xer);
	// beq cr6,0x823bb978
	if (cr6.eq) goto loc_823BB978;
	// cmplwi cr6,r3,50
	cr6.compare<uint32_t>(ctx.r3.u32, 50, xer);
	// ble cr6,0x823bb970
	if (!cr6.gt) goto loc_823BB970;
	// cmplwi cr6,r3,53
	cr6.compare<uint32_t>(ctx.r3.u32, 53, xer);
	// ble cr6,0x823bb978
	if (!cr6.gt) goto loc_823BB978;
	// cmplwi cr6,r3,57
	cr6.compare<uint32_t>(ctx.r3.u32, 57, xer);
	// ble cr6,0x823bb970
	if (!cr6.gt) goto loc_823BB970;
	// cmplwi cr6,r3,61
	cr6.compare<uint32_t>(ctx.r3.u32, 61, xer);
	// ble cr6,0x823bb978
	if (!cr6.gt) goto loc_823BB978;
loc_823BB970:
	// li r11,1
	r11.s64 = 1;
	// b 0x823bb97c
	goto loc_823BB97C;
loc_823BB978:
	// li r11,4
	r11.s64 = 4;
loc_823BB97C:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BB988"))) PPC_WEAK_FUNC(sub_823BB988);
PPC_FUNC_IMPL(__imp__sub_823BB988) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r6,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bgt cr6,0x823bb9a0
	if (cr6.gt) goto loc_823BB9A0;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823BB9A0:
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - r11.s64;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// ble cr6,0x823bb9b4
	if (!cr6.gt) goto loc_823BB9B4;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x823bb9c4
	goto loc_823BB9C4;
loc_823BB9B4:
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bgt cr6,0x823bb9c4
	if (cr6.gt) goto loc_823BB9C4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823BB9C4:
	// subf r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823bba00
	if (cr6.gt) goto loc_823BBA00;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bgt cr6,0x823bb9e0
	if (cr6.gt) goto loc_823BB9E0;
	// li r11,1
	r11.s64 = 1;
loc_823BB9E0:
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// ble cr6,0x823bb9f0
	if (!cr6.gt) goto loc_823BB9F0;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// b 0x823bba00
	goto loc_823BBA00;
loc_823BB9F0:
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// bgt cr6,0x823bba00
	if (cr6.gt) goto loc_823BBA00;
	// li r11,1
	r11.s64 = 1;
loc_823BBA00:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r3,r11,32
	xer.ca = r11.u32 <= 32;
	ctx.r3.s64 = 32 - r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BBA0C"))) PPC_WEAK_FUNC(sub_823BBA0C);
PPC_FUNC_IMPL(__imp__sub_823BBA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BBA10"))) PPC_WEAK_FUNC(sub_823BBA10);
PPC_FUNC_IMPL(__imp__sub_823BBA10) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// subfic r11,r28,0
	xer.ca = r28.u32 <= 0;
	r11.s64 = 0 - r28.s64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// li r25,32
	r25.s64 = 32;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(r28.u32, 2, xer);
	// addi r24,r11,1
	r24.s64 = r11.s64 + 1;
	// li r27,4
	r27.s64 = 4;
	// beq cr6,0x823bba58
	if (cr6.eq) goto loc_823BBA58;
	// li r27,1
	r27.s64 = 1;
loc_823BBA58:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r23,0
	cr6.compare<int32_t>(r23.s32, 0, xer);
	// bne cr6,0x823bbaa0
	if (!cr6.eq) goto loc_823BBAA0;
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r9,r26
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r26.s32);
	// rlwinm. r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823bbaa0
	if (cr0.eq) goto loc_823BBAA0;
	// li r8,256
	ctx.r8.s64 = 256;
	// twllei r9,0
	// divwu r9,r8,r9
	ctx.r9.u32 = ctx.r8.u32 / ctx.r9.u32;
	// cmplwi cr6,r9,32
	cr6.compare<uint32_t>(ctx.r9.u32, 32, xer);
	// blt cr6,0x823bbaa0
	if (cr6.lt) goto loc_823BBAA0;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
loc_823BBAA0:
	// mullw r11,r11,r25
	r11.s64 = int64_t(r11.s32) * int64_t(r25.s32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// andc r11,r9,r11
	r11.u64 = ctx.r9.u64 & ~r11.u64;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r8,r27,-1
	ctx.r8.s64 = r27.s64 + -1;
	// cmplwi cr6,r28,2
	cr6.compare<uint32_t>(r28.u32, 2, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r11,r11,r9
	r11.u64 = r11.u64 & ~ctx.r9.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r11,r11,r8
	r11.u64 = r11.u64 & ~ctx.r8.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r26.s32);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// beq cr6,0x823bbb1c
	if (cr6.eq) goto loc_823BBB1C;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r3,r10,r11
	ctx.r3.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// b 0x823bbb28
	goto loc_823BBB28;
loc_823BBB1C:
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
loc_823BBB28:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823BBB30"))) PPC_WEAK_FUNC(sub_823BBB30);
PPC_FUNC_IMPL(__imp__sub_823BBB30) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// mr r20,r7
	r20.u64 = ctx.r7.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// stw r8,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r8.u32);
	// li r19,1
	r19.s64 = 1;
	// li r17,0
	r17.s64 = 0;
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(r22.u32, 1, xer);
	// bne cr6,0x823bbb7c
	if (!cr6.eq) goto loc_823BBB7C;
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// ble cr6,0x823bbb7c
	if (!cr6.gt) goto loc_823BBB7C;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// b 0x823bbb8c
	goto loc_823BBB8C;
loc_823BBB7C:
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// cmplwi cr6,r22,3
	cr6.compare<uint32_t>(r22.u32, 3, xer);
	// mr r14,r17
	r14.u64 = r17.u64;
	// bne cr6,0x823bbb90
	if (!cr6.eq) goto loc_823BBB90;
loc_823BBB8C:
	// mr r14,r19
	r14.u64 = r19.u64;
loc_823BBB90:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// mr r28,r19
	r28.u64 = r19.u64;
	// bne cr6,0x823bbba0
	if (!cr6.eq) goto loc_823BBBA0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
loc_823BBBA0:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r31,340(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// rlwinm r9,r20,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,-20568
	ctx.r10.s64 = ctx.r10.s64 + -20568;
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r23,r11,r3
	r23.s64 = ctx.r3.s64 - r11.s64;
	// subf r26,r11,r25
	r26.s64 = r25.s64 - r11.s64;
	// cmplwi cr6,r22,2
	cr6.compare<uint32_t>(r22.u32, 2, xer);
	// lbzx r21,r9,r10
	r21.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// addi r10,r23,-1
	ctx.r10.s64 = r23.s64 + -1;
	// addi r9,r26,-1
	ctx.r9.s64 = r26.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf r10,r10,r31
	ctx.r10.s64 = r31.s64 - ctx.r10.s64;
	// subf r9,r9,r31
	ctx.r9.s64 = r31.s64 - ctx.r9.s64;
	// addi r29,r10,32
	r29.s64 = ctx.r10.s64 + 32;
	// addi r30,r9,32
	r30.s64 = ctx.r9.s64 + 32;
	// bne cr6,0x823bbc04
	if (!cr6.eq) goto loc_823BBC04;
	// subf r24,r11,r28
	r24.s64 = r28.s64 - r11.s64;
	// addi r11,r24,-1
	r11.s64 = r24.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// b 0x823bbc0c
	goto loc_823BBC0C;
loc_823BBC04:
	// mr r24,r19
	r24.u64 = r19.u64;
	// mr r11,r17
	r11.u64 = r17.u64;
loc_823BBC0C:
	// slw r10,r19,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r19.u32 << (r29.u8 & 0x3F));
	// lwz r27,356(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// slw r9,r19,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (r19.u32 << (r30.u8 & 0x3F));
	// slw r11,r19,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r19.u32 << (r11.u8 & 0x3F));
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ble cr6,0x823bbc38
	if (!cr6.gt) goto loc_823BBC38;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bgt cr6,0x823bbc40
	if (cr6.gt) goto loc_823BBC40;
loc_823BBC38:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne cr6,0x823bbc68
	if (!cr6.eq) goto loc_823BBC68;
loc_823BBC40:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x823bbc50
	if (!cr6.eq) goto loc_823BBC50;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// b 0x823bbc60
	goto loc_823BBC60;
loc_823BBC50:
	// rlwinm r11,r27,3,0,28
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r21,0
	// divwu r11,r11,r21
	r11.u32 = r11.u32 / r21.u32;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_823BBC60:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_823BBC68:
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// lwz r18,88(r1)
	r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x823bbc9c
	if (!cr6.eq) goto loc_823BBC9C;
	// mullw r11,r18,r21
	r11.s64 = int64_t(r18.s32) * int64_t(r21.s32);
	// rlwinm r27,r11,29,3,31
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_823BBC9C:
	// cmpwi cr6,r16,0
	cr6.compare<int32_t>(r16.s32, 0, xer);
	// bne cr6,0x823bbd18
	if (!cr6.eq) goto loc_823BBD18;
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// bne cr6,0x823bbd18
	if (!cr6.eq) goto loc_823BBD18;
	// cmplwi cr6,r22,2
	cr6.compare<uint32_t>(r22.u32, 2, xer);
	// beq cr6,0x823bbd3c
	if (cr6.eq) goto loc_823BBD3C;
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(r22.u32, 1, xer);
	// bne cr6,0x823bbd04
	if (!cr6.eq) goto loc_823BBD04;
	// cmplwi cr6,r15,1
	cr6.compare<uint32_t>(r15.u32, 1, xer);
	// bne cr6,0x823bbd04
	if (!cr6.eq) goto loc_823BBD04;
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823bbd04
	if (!cr6.eq) goto loc_823BBD04;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823bbd04
	if (!cr6.eq) goto loc_823BBD04;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r11,r25
	ctx.r10.u64 = r11.u64 + r25.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// mullw r25,r11,r27
	r25.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// b 0x823bbe7c
	goto loc_823BBE7C;
loc_823BBD04:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r27,r11
	r11.s64 = int64_t(r27.s32) * int64_t(r11.s32);
	// mullw r25,r11,r10
	r25.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// b 0x823bbd64
	goto loc_823BBD64;
loc_823BBD18:
	// cmplwi cr6,r22,2
	cr6.compare<uint32_t>(r22.u32, 2, xer);
	// beq cr6,0x823bbd3c
	if (cr6.eq) goto loc_823BBD3C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mullw r11,r27,r11
	r11.s64 = int64_t(r27.s32) * int64_t(r11.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r25,r11,r10
	r25.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// b 0x823bbd54
	goto loc_823BBD54;
loc_823BBD3C:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r11,r27,r11
	r11.s64 = int64_t(r27.s32) * int64_t(r11.s32);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r25,r11,0,0,19
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
loc_823BBD54:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// beq cr6,0x823bbd64
	if (cr6.eq) goto loc_823BBD64;
	// lwz r11,292(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mullw r25,r25,r11
	r25.s64 = int64_t(r25.s32) * int64_t(r11.s32);
loc_823BBD64:
	// cmplwi cr6,r15,1
	cr6.compare<uint32_t>(r15.u32, 1, xer);
	// bgt cr6,0x823bbd74
	if (cr6.gt) goto loc_823BBD74;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// bne cr6,0x823bbe7c
	if (!cr6.eq) goto loc_823BBE7C;
loc_823BBD74:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// bgt cr6,0x823bbd84
	if (cr6.gt) goto loc_823BBD84;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823BBD84:
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// ble cr6,0x823bbd94
	if (!cr6.gt) goto loc_823BBD94;
	// mr r11,r23
	r11.u64 = r23.u64;
	// b 0x823bbda4
	goto loc_823BBDA4;
loc_823BBD94:
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// bgt cr6,0x823bbda4
	if (cr6.gt) goto loc_823BBDA4;
	// mr r11,r24
	r11.u64 = r24.u64;
loc_823BBDA4:
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// bne cr6,0x823bbdb4
	if (!cr6.eq) goto loc_823BBDB4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r15,r11,32
	xer.ca = r11.u32 <= 32;
	r15.s64 = 32 - r11.s64;
loc_823BBDB4:
	// li r11,15
	r11.s64 = 15;
	// addic. r31,r15,-1
	xer.ca = r15.u32 > 0;
	r31.s64 = r15.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r27,r11,32
	xer.ca = r11.u32 <= 32;
	r27.s64 = 32 - r11.s64;
	// beq 0x823bbe48
	if (cr0.eq) goto loc_823BBE48;
loc_823BBDC8:
	// lwz r11,332(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823bbde4
	if (cr6.eq) goto loc_823BBDE4;
	// cmplw cr6,r29,r27
	cr6.compare<uint32_t>(r29.u32, r27.u32, xer);
	// ble cr6,0x823bbe48
	if (!cr6.gt) goto loc_823BBE48;
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// ble cr6,0x823bbe48
	if (!cr6.gt) goto loc_823BBE48;
loc_823BBDE4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823bbdf0
	if (cr6.eq) goto loc_823BBDF0;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
loc_823BBDF0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823bbdfc
	if (cr6.eq) goto loc_823BBDFC;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_823BBDFC:
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// ble cr6,0x823bbe08
	if (!cr6.gt) goto loc_823BBE08;
	// rlwinm r28,r28,31,1,31
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 31) & 0x7FFFFFFF;
loc_823BBE08:
	// slw r11,r19,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r19.u32 << (r29.u8 & 0x3F));
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// mr r9,r16
	ctx.r9.u64 = r16.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// slw r11,r19,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r19.u32 << (r30.u8 & 0x3F));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// add r17,r3,r17
	r17.u64 = ctx.r3.u64 + r17.u64;
	// bne 0x823bbdc8
	if (!cr0.eq) goto loc_823BBDC8;
loc_823BBE48:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// beq cr6,0x823bbe7c
	if (cr6.eq) goto loc_823BBE7C;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// mullw r17,r11,r17
	r17.s64 = int64_t(r11.s32) * int64_t(r17.s32);
loc_823BBE7C:
	// lwz r11,364(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
	// stw r18,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r18.u32);
	// lwz r11,372(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// lwz r11,380(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// stw r17,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r17.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823BBEA0"))) PPC_WEAK_FUNC(sub_823BBEA0);
PPC_FUNC_IMPL(__imp__sub_823BBEA0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// addi r8,r10,-20568
	ctx.r8.s64 = ctx.r10.s64 + -20568;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lbzx r24,r7,r8
	r24.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// addi r10,r29,-1
	ctx.r10.s64 = r29.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r11,r11,32
	xer.ca = r11.u32 <= 32;
	r11.s64 = 32 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r8,r28,-1
	ctx.r8.s64 = r28.s64 + -1;
	// subfic r10,r10,32
	xer.ca = ctx.r10.u32 <= 32;
	ctx.r10.s64 = 32 - ctx.r10.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// cmplwi cr6,r31,3
	cr6.compare<uint32_t>(r31.u32, 3, xer);
	// subfic r8,r8,32
	xer.ca = ctx.r8.u32 <= 32;
	ctx.r8.s64 = 32 - ctx.r8.s64;
	// slw r7,r9,r11
	ctx.r7.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bge cr6,0x823bbfbc
	if (!cr6.lt) goto loc_823BBFBC;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// sraw r10,r10,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_823BBF60:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_823BBF64:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r8,r10,r24
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(r24.s32);
	// divwu r7,r9,r10
	ctx.r7.u32 = ctx.r9.u32 / ctx.r10.u32;
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r7,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r7.u32);
	// twllei r10,0
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// twllei r9,0
	// divwu r6,r10,r9
	ctx.r6.u32 = ctx.r10.u32 / ctx.r9.u32;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lwz r8,284(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// mullw r11,r11,r26
	r11.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
loc_823BBFBC:
	// xori r11,r11,4
	r11.u64 = r11.u64 ^ 4;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r7,r31,-2
	ctx.r7.s64 = r31.s64 + -2;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// stwx r10,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// bge cr6,0x823bbf60
	if (!cr6.lt) goto loc_823BBF60;
	// subf r11,r31,r8
	r11.s64 = ctx.r8.s64 - r31.s64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x823bbff0
	if (cr6.gt) goto loc_823BBFF0;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823BBFF0:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823bbf64
	goto loc_823BBF64;
}

__attribute__((alias("__imp__sub_823BBFF8"))) PPC_WEAK_FUNC(sub_823BBFF8);
PPC_FUNC_IMPL(__imp__sub_823BBFF8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r11,r11,-20568
	r11.s64 = r11.s64 + -20568;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// clrlwi r28,r10,26
	r28.u64 = ctx.r10.u32 & 0x3F;
	// mr r18,r7
	r18.u64 = ctx.r7.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r17,r8
	r17.u64 = ctx.r8.u64;
	// mr r16,r9
	r16.u64 = ctx.r9.u64;
	// lbzx r21,r10,r11
	r21.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// bl 0x823c35b8
	sub_823C35B8(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// cmpwi cr6,r15,4
	cr6.compare<int32_t>(r15.s32, 4, xer);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x823bc0b0
	if (!cr6.eq) goto loc_823BC0B0;
	// bl 0x823bb788
	sub_823BB788(ctx, base);
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// rlwinm r8,r10,23,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// lwz r26,84(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r24,88(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,10,23,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x1FF;
	// lwz r23,92(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// mullw r11,r10,r21
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r21.s32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r31,r11,2,3,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FFFFFFC;
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// b 0x823bc358
	goto loc_823BC358;
loc_823BC0B0:
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// rlwinm r31,r11,1,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// rlwinm r8,r31,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823bb788
	sub_823BB788(ctx, base);
	// lwz r24,88(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r26,84(r1)
	r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r9,r8,r24
	ctx.r9.s64 = r24.s64 - ctx.r8.s64;
	// lwz r27,48(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// subf r7,r8,r26
	ctx.r7.s64 = r26.s64 - ctx.r8.s64;
	// lwz r23,92(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// subf r11,r6,r31
	r11.s64 = r31.s64 - ctx.r6.s64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// rlwinm r25,r27,23,30,31
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(r25.u32, 2, xer);
	// slw r4,r5,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// slw r3,r5,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// bne cr6,0x823bc134
	if (!cr6.eq) goto loc_823BC134;
	// subf r11,r8,r23
	r11.s64 = r23.s64 - ctx.r8.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// slw r30,r5,r11
	r30.u64 = r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (r11.u8 & 0x3F));
	// b 0x823bc138
	goto loc_823BC138;
loc_823BC134:
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
loc_823BC138:
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x823bc200
	if (!cr6.eq) goto loc_823BC200;
	// cmplwi cr6,r4,16
	cr6.compare<uint32_t>(ctx.r4.u32, 16, xer);
	// ble cr6,0x823bc154
	if (!cr6.gt) goto loc_823BC154;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// bgt cr6,0x823bc15c
	if (cr6.gt) goto loc_823BC15C;
loc_823BC154:
	// rlwinm. r11,r27,0,20,20
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823bc168
	if (!cr0.eq) goto loc_823BC168;
loc_823BC15C:
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r24.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r26.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
loc_823BC168:
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r28,28(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// rlwinm r30,r28,1,31,31
	r30.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0x1;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823bc1f0
	if (!cr6.eq) goto loc_823BC1F0;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// rlwinm. r10,r11,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823bc1f0
	if (!cr0.eq) goto loc_823BC1F0;
	// rlwinm. r10,r27,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823bc1f0
	if (!cr0.eq) goto loc_823BC1F0;
	// cmplwi cr6,r25,1
	cr6.compare<uint32_t>(r25.u32, 1, xer);
	// bne cr6,0x823bc1f0
	if (!cr6.eq) goto loc_823BC1F0;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// rlwinm. r10,r10,0,22,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3C0;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823bc1f0
	if (!cr0.eq) goto loc_823BC1F0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823bc1f0
	if (!cr6.eq) goto loc_823BC1F0;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_823BC1F0:
	// rlwinm r11,r28,10,23,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 10) & 0x1FF;
	// mullw r11,r11,r21
	r11.s64 = int64_t(r11.s32) * int64_t(r21.s32);
	// rlwinm r31,r11,2,3,29
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x823bc358
	goto loc_823BC358;
loc_823BC200:
	// srw r11,r9,r22
	r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r22.u8 & 0x3F));
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x823bc218
	if (cr6.gt) goto loc_823BC218;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_823BC218:
	// srw r10,r7,r22
	ctx.r10.u64 = r22.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r22.u8 & 0x3F));
	// add r24,r11,r8
	r24.u64 = r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x823bc22c
	if (cr6.gt) goto loc_823BC22C;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
loc_823BC22C:
	// add r26,r10,r8
	r26.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(r25.u32, 2, xer);
	// bne cr6,0x823bc254
	if (!cr6.eq) goto loc_823BC254;
	// subf r11,r8,r23
	r11.s64 = r23.s64 - ctx.r8.s64;
	// srw r11,r11,r22
	r11.u64 = r22.u8 & 0x20 ? 0 : (r11.u32 >> (r22.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x823bc24c
	if (cr6.gt) goto loc_823BC24C;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_823BC24C:
	// add r23,r11,r8
	r23.u64 = r11.u64 + ctx.r8.u64;
	// b 0x823bc258
	goto loc_823BC258;
loc_823BC254:
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
loc_823BC258:
	// rlwinm. r11,r27,0,20,20
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823bc2ec
	if (cr0.eq) goto loc_823BC2EC;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r11,r8,r6
	r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
	// subf r10,r7,r31
	ctx.r10.s64 = r31.s64 - ctx.r7.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x823bc294
	if (cr6.lt) goto loc_823BC294;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823BC294:
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x823bc2a0
	if (cr0.gt) goto loc_823BC2A0;
	// li r11,0
	r11.s64 = 0;
loc_823BC2A0:
	// cmplw cr6,r22,r11
	cr6.compare<uint32_t>(r22.u32, r11.u32, xer);
	// blt cr6,0x823bc2ec
	if (cr6.lt) goto loc_823BC2EC;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r11,r8,r6
	r11.s64 = ctx.r6.s64 - ctx.r8.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r10,r31
	r11.s64 = r31.s64 - ctx.r10.s64;
	// subf r10,r9,r31
	ctx.r10.s64 = r31.s64 - ctx.r9.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x823bc2dc
	if (cr6.lt) goto loc_823BC2DC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823BC2DC:
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r22,r11
	r22.u64 = r11.u64;
	// bgt 0x823bc2ec
	if (cr0.gt) goto loc_823BC2EC;
	// li r22,0
	r22.s64 = 0;
loc_823BC2EC:
	// srw r11,r4,r22
	r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (r22.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bgt cr6,0x823bc300
	if (cr6.gt) goto loc_823BC300;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
loc_823BC300:
	// srw r11,r3,r22
	r11.u64 = r22.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (r22.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bgt cr6,0x823bc314
	if (cr6.gt) goto loc_823BC314;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
loc_823BC314:
	// srw r11,r30,r22
	r11.u64 = r22.u8 & 0x20 ? 0 : (r30.u32 >> (r22.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bgt cr6,0x823bc328
	if (cr6.gt) goto loc_823BC328;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
loc_823BC328:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r9,r11,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r11,r11,r21
	r11.s64 = int64_t(r11.s32) * int64_t(r21.s32);
	// rlwinm r31,r11,29,3,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_823BC358:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r24,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r24.u32);
	// mullw r11,r31,r11
	r11.s64 = int64_t(r31.s32) * int64_t(r11.s32);
	// stw r26,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r26.u32);
	// stw r23,0(r18)
	PPC_STORE_U32(r18.u32 + 0, r23.u32);
	// stw r31,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r31.u32);
	// stw r11,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r11.u32);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823bc398
	if (!cr0.eq) goto loc_823BC398;
	// cmplwi cr6,r22,1
	cr6.compare<uint32_t>(r22.u32, 1, xer);
	// bgt cr6,0x823bc398
	if (cr6.gt) goto loc_823BC398;
	// cmpwi cr6,r15,3
	cr6.compare<int32_t>(r15.s32, 3, xer);
	// beq cr6,0x823bc3b4
	if (cr6.eq) goto loc_823BC3B4;
	// cmpwi cr6,r15,20
	cr6.compare<int32_t>(r15.s32, 20, xer);
	// beq cr6,0x823bc3b4
	if (cr6.eq) goto loc_823BC3B4;
loc_823BC398:
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1024
	cr6.compare<uint32_t>(ctx.r10.u32, 1024, xer);
	// beq cr6,0x823bc3b4
	if (cr6.eq) goto loc_823BC3B4;
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r16)
	PPC_STORE_U32(r16.u32 + 0, r11.u32);
loc_823BC3B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_823BC3BC"))) PPC_WEAK_FUNC(sub_823BC3BC);
PPC_FUNC_IMPL(__imp__sub_823BC3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BC3C0"))) PPC_WEAK_FUNC(sub_823BC3C0);
PPC_FUNC_IMPL(__imp__sub_823BC3C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823bbff8
	sub_823BBFF8(ctx, base);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r7,r11,25,29,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// rlwinm r8,r11,25,26,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x38;
	// rlwinm r6,r11,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r10,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r7,r10,28,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwimi r11,r8,1,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r8,r10,30,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r6,r9,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r5
	r11.u64 = r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwimi r9,r11,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c35b8
	sub_823C35B8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_823BC4C0"))) PPC_WEAK_FUNC(sub_823BC4C0);
PPC_FUNC_IMPL(__imp__sub_823BC4C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823bbff8
	sub_823BBFF8(ctx, base);
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// rlwinm r7,r11,25,29,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x7;
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// rlwinm r8,r11,25,26,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x38;
	// rlwinm r6,r11,28,29,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r7,r11,31,29,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r10,26,30,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x3;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// rlwinm r6,r10,24,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r7,r10,28,30,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x3;
	// rlwimi r11,r8,1,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// rlwinm r8,r10,30,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwinm r6,r9,26,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r5
	r11.u64 = r11.u64 | ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// rlwimi r9,r11,6,0,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0xFFFFFFC0) | (ctx.r9.u64 & 0xFFFFFFFF0000003F);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// bl 0x823c35b8
	sub_823C35B8(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	r11.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// stw r8,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_823BC5C0"))) PPC_WEAK_FUNC(sub_823BC5C0);
PPC_FUNC_IMPL(__imp__sub_823BC5C0) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// addi r11,r11,-20568
	r11.s64 = r11.s64 + -20568;
	// stw r6,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r6.u32);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm r9,r9,1,25,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x7E;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r30,r10,1,31,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r7,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r7.u32);
	// rlwinm r25,r8,23,30,31
	r25.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 23) & 0x3;
	// rlwinm r27,r10,1,31,31
	r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lbzx r15,r9,r11
	r15.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x823c35b8
	sub_823C35B8(ctx, base);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bb788
	sub_823BB788(ctx, base);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r24,116(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r28,1
	r28.s64 = 1;
	// subf r9,r29,r7
	ctx.r9.s64 = ctx.r7.s64 - r29.s64;
	// subf r8,r29,r24
	ctx.r8.s64 = r24.s64 - r29.s64;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// addi r10,r8,-1
	ctx.r10.s64 = ctx.r8.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r6,r10
	ctx.r6.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// subf r11,r6,r30
	r11.s64 = r30.s64 - ctx.r6.s64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(r25.u32, 2, xer);
	// slw r26,r28,r10
	r26.u64 = ctx.r10.u8 & 0x20 ? 0 : (r28.u32 << (ctx.r10.u8 & 0x3F));
	// slw r19,r28,r11
	r19.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// bne cr6,0x823bc6a4
	if (!cr6.eq) goto loc_823BC6A4;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// slw r16,r28,r11
	r16.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// b 0x823bc6a8
	goto loc_823BC6A8;
loc_823BC6A4:
	// mr r16,r28
	r16.u64 = r28.u64;
loc_823BC6A8:
	// cmplwi cr6,r26,16
	cr6.compare<uint32_t>(r26.u32, 16, xer);
	// ble cr6,0x823bc6b8
	if (!cr6.gt) goto loc_823BC6B8;
	// cmplwi cr6,r19,16
	cr6.compare<uint32_t>(r19.u32, 16, xer);
	// bgt cr6,0x823bc6c8
	if (cr6.gt) goto loc_823BC6C8;
loc_823BC6B8:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r30,r28
	r30.u64 = r28.u64;
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823bc6cc
	if (!cr0.eq) goto loc_823BC6CC;
loc_823BC6C8:
	// li r30,0
	r30.s64 = 0;
loc_823BC6CC:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823bc6e4
	if (cr6.eq) goto loc_823BC6E4;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x823bc6e4
	if (!cr6.eq) goto loc_823BC6E4;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// b 0x823bc6e8
	goto loc_823BC6E8;
loc_823BC6E4:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
loc_823BC6E8:
	// rlwinm r14,r11,0,0,19
	r14.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x823bc7d0
	if (!cr6.eq) goto loc_823BC7D0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x823bc7d0
	if (!cr6.eq) goto loc_823BC7D0;
	// lwz r29,48(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r27,r29,23,30,31
	r27.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 23) & 0x3;
	// clrlwi r28,r30,26
	r28.u64 = r30.u32 & 0x3F;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r24.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// lwz r26,28(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm. r11,r26,0,0,0
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823bc7a0
	if (!cr0.eq) goto loc_823BC7A0;
	// rlwinm. r11,r30,0,21,21
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823bc7a0
	if (!cr0.eq) goto loc_823BC7A0;
	// rlwinm. r11,r29,0,20,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823bc7a0
	if (!cr0.eq) goto loc_823BC7A0;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x823bc7a0
	if (!cr6.eq) goto loc_823BC7A0;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// rlwinm. r11,r11,0,22,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3C0;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823bc7a0
	if (!cr0.eq) goto loc_823BC7A0;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823bc7a0
	if (!cr0.eq) goto loc_823BC7A0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r11,r24
	ctx.r10.u64 = r11.u64 + r24.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r19,r10,r11
	r19.u64 = ctx.r10.u64 & ~r11.u64;
	// b 0x823bc7a4
	goto loc_823BC7A4;
loc_823BC7A0:
	// lwz r19,100(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_823BC7A4:
	// lwz r16,96(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x823bc7c0
	if (!cr6.eq) goto loc_823BC7C0;
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mullw r11,r11,r15
	r11.s64 = int64_t(r11.s32) * int64_t(r15.s32);
	// rlwinm r30,r11,29,3,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x823bc9e4
	goto loc_823BC9E4;
loc_823BC7C0:
	// rlwinm r11,r26,10,23,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 10) & 0x1FF;
	// mullw r11,r11,r15
	r11.s64 = int64_t(r11.s32) * int64_t(r15.s32);
	// rlwinm r30,r11,2,3,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FFFFFFC;
	// b 0x823bc9e4
	goto loc_823BC9E4;
loc_823BC7D0:
	// srw r10,r9,r23
	ctx.r10.u64 = r23.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bgt cr6,0x823bc7e0
	if (cr6.gt) goto loc_823BC7E0;
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
loc_823BC7E0:
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + r29.u64;
	// srw r11,r8,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// bgt cr6,0x823bc7f8
	if (cr6.gt) goto loc_823BC7F8;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823BC7F8:
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// cmplwi cr6,r25,2
	cr6.compare<uint32_t>(r25.u32, 2, xer);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bne cr6,0x823bc82c
	if (!cr6.eq) goto loc_823BC82C;
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// srw r11,r11,r23
	r11.u64 = r23.u8 & 0x20 ? 0 : (r11.u32 >> (r23.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x823bc820
	if (cr6.gt) goto loc_823BC820;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823BC820:
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// b 0x823bc830
	goto loc_823BC830;
loc_823BC82C:
	// stw r28,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r28.u32);
loc_823BC830:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c35b8
	sub_823C35B8(ctx, base);
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// beq cr6,0x823bc850
	if (cr6.eq) goto loc_823BC850;
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// beq cr6,0x823bc850
	if (cr6.eq) goto loc_823BC850;
	// mr r17,r28
	r17.u64 = r28.u64;
	// b 0x823bc870
	goto loc_823BC870;
loc_823BC850:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// rlwinm r11,r11,23,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x2;
	// rlwinm r10,r10,6,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// slw r11,r28,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 << (r11.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r17,r10,r11
	r17.u64 = ctx.r10.u64 & ~r11.u64;
loc_823BC870:
	// cntlzw r11,r26
	r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// cntlzw r10,r19
	ctx.r10.u64 = r19.u32 == 0 ? 32 : __builtin_clz(r19.u32);
	// cntlzw r9,r16
	ctx.r9.u64 = r16.u32 == 0 ? 32 : __builtin_clz(r16.u32);
	// subfic r24,r11,31
	xer.ca = r11.u32 <= 31;
	r24.s64 = 31 - r11.s64;
	// subfic r25,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	r25.s64 = 31 - ctx.r10.s64;
	// subfic r26,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	r26.s64 = 31 - ctx.r9.s64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823bc8a4
	if (cr6.eq) goto loc_823BC8A4;
	// mr r20,r23
	r20.u64 = r23.u64;
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// b 0x823bc8a8
	goto loc_823BC8A8;
loc_823BC8A4:
	// addi r20,r23,-1
	r20.s64 = r23.s64 + -1;
loc_823BC8A8:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// blt cr6,0x823bc9e0
	if (cr6.lt) goto loc_823BC9E0;
	// lwz r18,48(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r22,r18,23,30,31
	r22.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 23) & 0x3;
	// rlwinm r21,r11,1,31,31
	r21.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// clrlwi r23,r10,26
	r23.u64 = ctx.r10.u32 & 0x3F;
loc_823BC8C8:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x823bc8d4
	if (cr6.eq) goto loc_823BC8D4;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
loc_823BC8D4:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823bc8e0
	if (cr6.eq) goto loc_823BC8E0;
	// addi r25,r25,-1
	r25.s64 = r25.s64 + -1;
loc_823BC8E0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823bc8ec
	if (cr6.eq) goto loc_823BC8EC;
	// addi r26,r26,-1
	r26.s64 = r26.s64 + -1;
loc_823BC8EC:
	// slw r11,r28,r26
	r11.u64 = r26.u8 & 0x20 ? 0 : (r28.u32 << (r26.u8 & 0x3F));
	// slw r29,r28,r24
	r29.u64 = r24.u8 & 0x20 ? 0 : (r28.u32 << (r24.u8 & 0x3F));
	// slw r27,r28,r25
	r27.u64 = r25.u8 & 0x20 ? 0 : (r28.u32 << (r25.u8 & 0x3F));
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r27.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r29,16
	cr6.compare<uint32_t>(r29.u32, 16, xer);
	// mullw r11,r11,r15
	r11.s64 = int64_t(r11.s32) * int64_t(r15.s32);
	// rlwinm r30,r11,29,3,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// ble cr6,0x823bc940
	if (!cr6.gt) goto loc_823BC940;
	// cmplwi cr6,r27,16
	cr6.compare<uint32_t>(r27.u32, 16, xer);
	// bgt cr6,0x823bc948
	if (cr6.gt) goto loc_823BC948;
loc_823BC940:
	// rlwinm. r11,r18,0,20,20
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823bc998
	if (!cr0.eq) goto loc_823BC998;
loc_823BC948:
	// lwz r19,100(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// lwz r16,96(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ble cr6,0x823bc98c
	if (!cr6.gt) goto loc_823BC98C;
	// cmplwi cr6,r22,2
	cr6.compare<uint32_t>(r22.u32, 2, xer);
	// beq cr6,0x823bc974
	if (cr6.eq) goto loc_823BC974;
	// mullw r11,r30,r19
	r11.s64 = int64_t(r30.s32) * int64_t(r19.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mullw r11,r11,r16
	r11.s64 = int64_t(r11.s32) * int64_t(r16.s32);
	// b 0x823bc984
	goto loc_823BC984;
loc_823BC974:
	// mullw r11,r30,r16
	r11.s64 = int64_t(r30.s32) * int64_t(r16.s32);
	// mullw r11,r11,r19
	r11.s64 = int64_t(r11.s32) * int64_t(r19.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
loc_823BC984:
	// mullw r11,r11,r17
	r11.s64 = int64_t(r11.s32) * int64_t(r17.s32);
	// add r14,r11,r14
	r14.u64 = r11.u64 + r14.u64;
loc_823BC98C:
	// addic. r20,r20,-1
	xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// bge 0x823bc8c8
	if (!cr0.lt) goto loc_823BC8C8;
	// b 0x823bc9e4
	goto loc_823BC9E4;
loc_823BC998:
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// lwz r19,100(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r1,124
	r11.s64 = ctx.r1.s64 + 124;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mullw r8,r30,r19
	ctx.r8.s64 = int64_t(r30.s32) * int64_t(r19.s32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// slw r6,r28,r26
	ctx.r6.u64 = r26.u8 & 0x20 ? 0 : (r28.u32 << (r26.u8 & 0x3F));
	// slw r5,r28,r25
	ctx.r5.u64 = r25.u8 & 0x20 ? 0 : (r28.u32 << (r25.u8 & 0x3F));
	// slw r4,r28,r24
	ctx.r4.u64 = r24.u8 & 0x20 ? 0 : (r28.u32 << (r24.u8 & 0x3F));
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x823bbea0
	sub_823BBEA0(ctx, base);
	// lwz r16,96(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// add r14,r14,r3
	r14.u64 = r14.u64 + ctx.r3.u64;
	// b 0x823bc9e4
	goto loc_823BC9E4;
loc_823BC9E0:
	// lwz r30,124(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_823BC9E4:
	// mullw r11,r30,r19
	r11.s64 = int64_t(r30.s32) * int64_t(r19.s32);
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// addi r10,r11,4095
	ctx.r10.s64 = r11.s64 + 4095;
	// rlwinm r9,r10,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lwz r8,388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// add r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 + r14.u64;
	// stw r9,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r9.u32);
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r30.u32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r9,r9,0,21,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r9,1024
	cr6.compare<uint32_t>(ctx.r9.u32, 1024, xer);
	// lwz r9,340(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// beq cr6,0x823bca2c
	if (cr6.eq) goto loc_823BCA2C;
	// rlwinm r11,r10,0,0,19
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mullw r10,r11,r16
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r16.s32);
	// b 0x823bca38
	goto loc_823BCA38;
loc_823BCA2C:
	// mullw r10,r11,r16
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r16.s32);
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
loc_823BCA38:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,348(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r10,364(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,372(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,380(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823BCA7C"))) PPC_WEAK_FUNC(sub_823BCA7C);
PPC_FUNC_IMPL(__imp__sub_823BCA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BCA80"))) PPC_WEAK_FUNC(sub_823BCA80);
PPC_FUNC_IMPL(__imp__sub_823BCA80) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823bc5c0
	sub_823BC5C0(ctx, base);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// subf r8,r8,r11
	ctx.r8.s64 = r11.s64 - ctx.r8.s64;
	// rlwinm r7,r7,0,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r6,r6,0,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFF000;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c3830
	sub_823C3830(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823BCB48"))) PPC_WEAK_FUNC(sub_823BCB48);
PPC_FUNC_IMPL(__imp__sub_823BCB48) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823bca80
	sub_823BCA80(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823bcbc0
	if (cr6.eq) goto loc_823BCBC0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-20568
	r11.s64 = r11.s64 + -20568;
	// rlwinm r7,r10,1,25,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x7E;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lbzx r11,r7,r11
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + r11.u32);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823bcbc4
	goto loc_823BCBC4;
loc_823BCBC0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823BCBC4:
	// stw r9,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r9.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823BCBD4"))) PPC_WEAK_FUNC(sub_823BCBD4);
PPC_FUNC_IMPL(__imp__sub_823BCBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BCBD8"))) PPC_WEAK_FUNC(sub_823BCBD8);
PPC_FUNC_IMPL(__imp__sub_823BCBD8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r20,340(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// rlwinm r11,r20,1,0,30
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r19,3
	cr6.compare<int32_t>(r19.s32, 3, xer);
	// addi r25,r11,1
	r25.s64 = r11.s64 + 1;
	// beq cr6,0x823bcc88
	if (cr6.eq) goto loc_823BCC88;
	// cmpwi cr6,r19,17
	cr6.compare<int32_t>(r19.s32, 17, xer);
	// beq cr6,0x823bcc4c
	if (cr6.eq) goto loc_823BCC4C;
	// cmpwi cr6,r19,18
	cr6.compare<int32_t>(r19.s32, 18, xer);
	// beq cr6,0x823bcc44
	if (cr6.eq) goto loc_823BCC44;
	// cmpwi cr6,r19,19
	cr6.compare<int32_t>(r19.s32, 19, xer);
	// beq cr6,0x823bcc88
	if (cr6.eq) goto loc_823BCC88;
	// cmpwi cr6,r19,20
	cr6.compare<int32_t>(r19.s32, 20, xer);
	// bne cr6,0x823bcc90
	if (!cr6.eq) goto loc_823BCC90;
	// li r30,0
	r30.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// b 0x823bcc9c
	goto loc_823BCC9C;
loc_823BCC44:
	// li r30,3
	r30.s64 = 3;
	// b 0x823bcc9c
	goto loc_823BCC9C;
loc_823BCC4C:
	// li r30,2
	r30.s64 = 2;
loc_823BCC50:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
loc_823BCC54:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// bne cr6,0x823bcc70
	if (!cr6.eq) goto loc_823BCC70;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823bb988
	sub_823BB988(ctx, base);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
loc_823BCC70:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x823bcca4
	if (!cr6.eq) goto loc_823BCCA4;
	// subfic r11,r22,1
	xer.ca = r22.u32 <= 1;
	r11.s64 = 1 - r22.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r23,r11,31
	r23.u64 = r11.u32 & 0x1;
	// b 0x823bcca8
	goto loc_823BCCA8;
loc_823BCC88:
	// li r30,1
	r30.s64 = 1;
	// b 0x823bcc94
	goto loc_823BCC94;
loc_823BCC90:
	// lwz r30,136(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_823BCC94:
	// cmpwi cr6,r19,17
	cr6.compare<int32_t>(r19.s32, 17, xer);
	// beq cr6,0x823bcc50
	if (cr6.eq) goto loc_823BCC50;
loc_823BCC9C:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823bcc54
	goto loc_823BCC54;
loc_823BCCA4:
	// mr r23,r26
	r23.u64 = r26.u64;
loc_823BCCA8:
	// lwz r11,356(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r21,348(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// clrlwi r26,r31,26
	r26.u64 = r31.u32 & 0x3F;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r20.u32);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// rlwinm r9,r31,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 24) & 0x1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r11,r1,136
	r11.s64 = ctx.r1.s64 + 136;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stw r21,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r21.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// bl 0x823bbb30
	sub_823BBB30(ctx, base);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
	// rlwinm. r11,r24,0,29,29
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823bcd14
	if (cr0.eq) goto loc_823BCD14;
	// lis r9,48
	ctx.r9.s64 = 3145728;
	// ori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 | 3;
loc_823BCD14:
	// rlwinm. r11,r24,0,22,22
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823bcd20
	if (cr0.eq) goto loc_823BCD20;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
loc_823BCD20:
	// lwz r11,364(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// rlwimi r10,r30,9,21,22
	ctx.r10.u64 = (__builtin_rotateleft32(r30.u32, 9) & 0x600) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF9FF);
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// blt cr6,0x823bcde8
	if (cr6.lt) goto loc_823BCDE8;
	// beq cr6,0x823bcdb8
	if (cr6.eq) goto loc_823BCDB8;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x823bcd84
	if (cr6.lt) goto loc_823BCD84;
	// bne cr6,0x823bcdf8
	if (!cr6.eq) goto loc_823BCDF8;
	// subf r9,r25,r28
	ctx.r9.s64 = r28.s64 - r25.s64;
	// subf r8,r25,r29
	ctx.r8.s64 = r29.s64 - r25.s64;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// rlwimi r8,r9,13,6,18
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0x3FFE000) | (ctx.r8.u64 & 0xFFFFFFFFFC001FFF);
	// rlwimi r8,r7,26,0,5
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r7.u32, 26) & 0xFC000000) | (ctx.r8.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r8,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r8.u32);
	// b 0x823bcdf8
	goto loc_823BCDF8;
loc_823BCD84:
	// subf r8,r25,r28
	ctx.r8.s64 = r28.s64 - r25.s64;
	// subf r7,r25,r27
	ctx.r7.s64 = r27.s64 - r25.s64;
	// rlwinm r8,r8,11,10,20
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 11) & 0x3FF800;
	// rlwinm r7,r7,22,0,9
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 22) & 0xFFC00000;
	// subf r9,r25,r29
	ctx.r9.s64 = r29.s64 - r25.s64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwimi r9,r7,0,0,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFF800) | (ctx.r9.u64 & 0xFFFFFFFF000007FF);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r9,r9,21
	ctx.r9.u64 = ctx.r9.u32 & 0x7FF;
loc_823BCDB0:
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// b 0x823bcdf4
	goto loc_823BCDF4;
loc_823BCDB8:
	// subf r8,r25,r28
	ctx.r8.s64 = r28.s64 - r25.s64;
	// addi r7,r27,-1
	ctx.r7.s64 = r27.s64 + -1;
	// rlwinm r8,r8,13,6,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x3FFE000;
	// rlwinm r7,r7,26,0,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xFC000000;
	// subf r9,r25,r29
	ctx.r9.s64 = r29.s64 - r25.s64;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lwz r7,36(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwimi r9,r7,0,0,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFE000) | (ctx.r9.u64 & 0xFFFFFFFF00001FFF);
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// b 0x823bcdb0
	goto loc_823BCDB0;
loc_823BCDE8:
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// subf r9,r25,r29
	ctx.r9.s64 = r29.s64 - r25.s64;
	// rlwimi r9,r8,0,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
loc_823BCDF4:
	// stw r9,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r9.u32);
loc_823BCDF8:
	// srawi r9,r31,15
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = r31.s32 >> 15;
	// srawi r8,r31,13
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = r31.s32 >> 13;
	// srawi r7,r31,11
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FF) != 0);
	ctx.r7.s64 = r31.s32 >> 11;
	// srawi r6,r31,9
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FF) != 0);
	ctx.r6.s64 = r31.s32 >> 9;
	// srawi r5,r31,8
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFF) != 0);
	ctx.r5.s64 = r31.s32 >> 8;
	// srawi r4,r31,6
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3F) != 0);
	ctx.r4.s64 = r31.s32 >> 6;
	// srawi r3,r31,27
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = r31.s32 >> 27;
	// rlwinm r30,r20,21,0,10
	r30.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 21) & 0xFFE00000;
	// clrlwi r3,r3,29
	ctx.r3.u64 = ctx.r3.u32 & 0x7;
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// or r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 | r30.u64;
	// addi r29,r19,-19
	r29.s64 = r19.s64 + -19;
	// rlwimi r9,r5,14,0,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 14) & 0xFFFFC000) | (ctx.r9.u64 & 0xFFFFFFFF00003FFF);
	// rlwimi r3,r21,3,23,28
	ctx.r3.u64 = (__builtin_rotateleft32(r21.u32, 3) & 0x1F8) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFE07);
	// srawi r30,r31,24
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0xFFFFFF) != 0);
	r30.s64 = r31.s32 >> 24;
	// clrlwi r8,r8,28
	ctx.r8.u64 = ctx.r8.u32 & 0xF;
	// cntlzw r5,r29
	ctx.r5.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwimi r30,r3,3,0,28
	r30.u64 = (__builtin_rotateleft32(ctx.r3.u32, 3) & 0xFFFFFFF8) | (r30.u64 & 0xFFFFFFFF00000007);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// rlwinm r5,r5,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// srawi r8,r31,21
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFFFF) != 0);
	ctx.r8.s64 = r31.s32 >> 21;
	// rlwimi r6,r7,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi r4,r5,4,27,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0x10) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFEF);
	// rlwimi r3,r9,17,0,9
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 17) & 0xFFC00000) | (ctx.r3.u64 & 0xFFFFFFFF003FFFFF);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// rlwimi r8,r30,3,0,28
	ctx.r8.u64 = (__builtin_rotateleft32(r30.u32, 3) & 0xFFFFFFF8) | (ctx.r8.u64 & 0xFFFFFFFF00000007);
	// lwz r30,32(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// srawi r7,r31,18
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x3FFFF) != 0);
	ctx.r7.s64 = r31.s32 >> 18;
	// addi r5,r22,-1
	ctx.r5.s64 = r22.s64 + -1;
	// rlwimi r7,r8,3,0,28
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0xFFFFFFF8) | (ctx.r7.u64 & 0xFFFFFFFF00000007);
	// rlwimi r9,r5,6,22,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 6) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// rlwimi r10,r23,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(r23.u32, 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// rlwinm r8,r30,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFC0;
	// lwz r30,40(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// srawi r5,r31,17
	xer.ca = (r31.s32 < 0) & ((r31.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = r31.s32 >> 17;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r5,r7,1,0,30
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r7.u32, 1) & 0xFFFFFFFE) | (ctx.r5.u64 & 0xFFFFFFFF00000001);
	// stw r9,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r9.u32);
	// rlwinm r7,r30,0,1,12
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x7FF80000;
	// stw r10,48(r11)
	PPC_STORE_U32(r11.u32 + 48, ctx.r10.u32);
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | r26.u64;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// or r10,r5,r7
	ctx.r10.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r3,r3,0,0,21
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFC00;
	// rlwimi r8,r4,6,24,25
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 6) & 0xC0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFF3F);
	// or r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 | ctx.r3.u64;
	// rlwimi r8,r4,6,21,21
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 6) & 0x400) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r10,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r10.u32);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// lwz r10,372(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stw r8,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r8.u32);
	// stw r6,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r6.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823BCEE8"))) PPC_WEAK_FUNC(sub_823BCEE8);
PPC_FUNC_IMPL(__imp__sub_823BCEE8) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// clrlwi r24,r28,26
	r24.u64 = r28.u32 & 0x3F;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r24,22
	cr6.compare<uint32_t>(r24.u32, 22, xer);
	// beq cr6,0x823bcf30
	if (cr6.eq) goto loc_823BCF30;
	// cmplwi cr6,r24,23
	cr6.compare<uint32_t>(r24.u32, 23, xer);
	// li r25,0
	r25.s64 = 0;
	// bne cr6,0x823bcf34
	if (!cr6.eq) goto loc_823BCF34;
loc_823BCF30:
	// mr r25,r22
	r25.u64 = r22.u64;
loc_823BCF34:
	// cmplwi cr6,r24,54
	cr6.compare<uint32_t>(r24.u32, 54, xer);
	// bne cr6,0x823bcf40
	if (!cr6.eq) goto loc_823BCF40;
	// li r24,7
	r24.s64 = 7;
loc_823BCF40:
	// li r11,4
	r11.s64 = 4;
	// stw r22,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r22.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// li r23,-1
	r23.s64 = -1;
	// bl 0x82301ff8
	sub_82301FF8(ctx, base);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x823bcfb0
	if (cr6.eq) goto loc_823BCFB0;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// blt cr6,0x823bcf88
	if (cr6.lt) goto loc_823BCF88;
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_823BCF88:
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// bne cr6,0x823bcf94
	if (!cr6.eq) goto loc_823BCF94;
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_823BCF94:
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// clrlwi r7,r11,9
	ctx.r7.u64 = r11.u32 & 0x7FFFFF;
	// b 0x823bcfb4
	goto loc_823BCFB4;
loc_823BCFB0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_823BCFB4:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823bcfcc
	if (cr6.eq) goto loc_823BCFCC;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r23,4(r26)
	r23.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r8,8(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// b 0x823bcff0
	goto loc_823BCFF0;
loc_823BCFCC:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x823bcff0
	if (cr6.eq) goto loc_823BCFF0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r11,17940(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 17940);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823bcff0
	if (!cr6.eq) goto loc_823BCFF0;
	// li r23,0
	r23.s64 = 0;
loc_823BCFF0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823bd000
	if (cr6.eq) goto loc_823BD000;
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// bne cr6,0x823bd01c
	if (!cr6.eq) goto loc_823BD01C;
loc_823BD000:
	// li r10,80
	ctx.r10.s64 = 80;
	// addi r11,r29,79
	r11.s64 = r29.s64 + 79;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r11,80
	ctx.r10.s64 = r11.s64 * 80;
	// addi r11,r29,31
	r11.s64 = r29.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// b 0x823bd034
	goto loc_823BD034;
loc_823BD01C:
	// li r10,40
	ctx.r10.s64 = 40;
	// addi r11,r29,39
	r11.s64 = r29.s64 + 39;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// mulli r10,r11,40
	ctx.r10.s64 = r11.s64 * 40;
	// addi r11,r29,15
	r11.s64 = r29.s64 + 15;
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
loc_823BD034:
	// rlwimi r30,r11,2,0,29
	r30.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0xFFFFFFFC) | (r30.u64 & 0xFFFFFFFF00000003);
	// stw r28,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r28.u32);
	// clrlwi r10,r10,18
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFF;
	// rlwinm r4,r30,16,0,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000;
	// addi r6,r29,-1
	ctx.r6.s64 = r29.s64 + -1;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// rlwinm r6,r6,18,0,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 18) & 0xFFFC0000;
	// addi r5,r27,-1
	ctx.r5.s64 = r27.s64 + -1;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r4,r24,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// addi r11,r11,-20568
	r11.s64 = r11.s64 + -20568;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// clrlwi r10,r10,29
	ctx.r10.u64 = ctx.r10.u32 & 0x7;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwimi r10,r5,3,14,28
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x3FFF8) | (ctx.r10.u64 & 0xFFFFFFFFFFFC0007);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// lhzx r11,r4,r11
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + r11.u32);
	// rlwinm r11,r11,24,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// beq cr6,0x823bd0d0
	if (cr6.eq) goto loc_823BD0D0;
	// rlwinm r11,r11,16,15,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x10000;
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// cmpwi cr6,r23,-1
	cr6.compare<int32_t>(r23.s32, -1, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// beq cr6,0x823bd0c4
	if (cr6.eq) goto loc_823BD0C4;
	// addi r11,r24,-22
	r11.s64 = r24.s64 + -22;
	// rlwinm r10,r23,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 13) & 0xFFFFE000;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r22,r11,4,0,27
	r22.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xFFFFFFF0) | (r22.u64 & 0xFFFFFFFF0000000F);
	// stw r22,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r22.u32);
	// b 0x823bd124
	goto loc_823BD124;
loc_823BD0C4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x823bd124
	goto loc_823BD124;
loc_823BD0D0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823bd110
	if (!cr6.eq) goto loc_823BD110;
	// rlwinm. r10,r28,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823bd110
	if (!cr0.eq) goto loc_823BD110;
	// rlwinm r10,r28,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x600;
	// cmpwi cr6,r10,1536
	cr6.compare<int32_t>(ctx.r10.s32, 1536, xer);
	// bne cr6,0x823bd110
	if (!cr6.eq) goto loc_823BD110;
	// rlwinm r10,r28,0,19,20
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x1800;
	// cmpwi cr6,r10,6144
	cr6.compare<int32_t>(ctx.r10.s32, 6144, xer);
	// bne cr6,0x823bd110
	if (!cr6.eq) goto loc_823BD110;
	// rlwinm r10,r28,0,17,18
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x6000;
	// cmpwi cr6,r10,24576
	cr6.compare<int32_t>(ctx.r10.s32, 24576, xer);
	// bne cr6,0x823bd110
	if (!cr6.eq) goto loc_823BD110;
	// rlwinm. r10,r28,0,15,16
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x18000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823bd110
	if (!cr0.eq) goto loc_823BD110;
	// mr r11,r22
	r11.u64 = r22.u64;
loc_823BD110:
	// rlwimi r11,r8,4,22,27
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 4) & 0x3F0) | (r11.u64 & 0xFFFFFFFFFFFFFC0F);
	// clrlwi r10,r9,20
	ctx.r10.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm r11,r11,16,6,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x3FF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_823BD124:
	// mulli r11,r3,5120
	r11.s64 = ctx.r3.s64 * 5120;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stw r3,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r3.u32);
	// stw r7,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_823BD13C"))) PPC_WEAK_FUNC(sub_823BD13C);
PPC_FUNC_IMPL(__imp__sub_823BD13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD140"))) PPC_WEAK_FUNC(sub_823BD140);
PPC_FUNC_IMPL(__imp__sub_823BD140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,44(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// rlwinm r11,r11,26,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BD150"))) PPC_WEAK_FUNC(sub_823BD150);
PPC_FUNC_IMPL(__imp__sub_823BD150) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bc3c0
	sub_823BC3C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BD154"))) PPC_WEAK_FUNC(sub_823BD154);
PPC_FUNC_IMPL(__imp__sub_823BD154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD158"))) PPC_WEAK_FUNC(sub_823BD158);
PPC_FUNC_IMPL(__imp__sub_823BD158) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x823bc5c0
	sub_823BC5C0(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823bd1c0
	if (!cr0.eq) goto loc_823BD1C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823bd208
	goto loc_823BD208;
loc_823BD1C0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r10,17409
	ctx.r10.s64 = 17409;
	// rlwinm r9,r29,28,0,3
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 28) & 0xF0000000;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// rlwimi r11,r10,20,11,9
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xFFFFFFFFFFDFFFFF) | (r11.u64 & 0x200000);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// clrlwi r11,r11,10
	r11.u64 = r11.u32 & 0x3FFFFF;
	// stw r8,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r8.u32);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,0,10,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF03FFFFF;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x823c3b70
	sub_823C3B70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BD208:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823BD210"))) PPC_WEAK_FUNC(sub_823BD210);
PPC_FUNC_IMPL(__imp__sub_823BD210) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823bcb48
	sub_823BCB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BD228"))) PPC_WEAK_FUNC(sub_823BD228);
PPC_FUNC_IMPL(__imp__sub_823BD228) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bcb48
	sub_823BCB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BD22C"))) PPC_WEAK_FUNC(sub_823BD22C);
PPC_FUNC_IMPL(__imp__sub_823BD22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD230"))) PPC_WEAK_FUNC(sub_823BD230);
PPC_FUNC_IMPL(__imp__sub_823BD230) {
	PPC_FUNC_PROLOGUE();
	// b 0x823bc4c0
	sub_823BC4C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BD234"))) PPC_WEAK_FUNC(sub_823BD234);
PPC_FUNC_IMPL(__imp__sub_823BD234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD238"))) PPC_WEAK_FUNC(sub_823BD238);
PPC_FUNC_IMPL(__imp__sub_823BD238) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r30,0
	r30.s64 = 0;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r22,r30
	r22.u64 = r30.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823bd284
	if (!cr0.eq) goto loc_823BD284;
loc_823BD27C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823bd350
	goto loc_823BD350;
loc_823BD284:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r31.u32);
	// addi r11,r1,132
	r11.s64 = ctx.r1.s64 + 132;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823bcbd8
	sub_823BCBD8(ctx, base);
	// not r11,r29
	r11.u64 = ~r29.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// rlwinm r11,r11,28,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF0000000;
	// oris r30,r11,35968
	r30.u64 = r11.u64 | 2357198848;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x823bd300
	if (!cr0.eq) goto loc_823BD300;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BD2F8:
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// b 0x823bd27c
	goto loc_823BD27C;
loc_823BD300:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823bd334
	if (cr6.eq) goto loc_823BD334;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r22,r3
	r22.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// bne 0x823bd334
	if (!cr0.eq) goto loc_823BD334;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x823bd2f8
	goto loc_823BD2F8;
loc_823BD334:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwimi r11,r29,0,0,19
	r11.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0xFFFFF000) | (r11.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r22,r10,0,20,31
	r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (r22.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r22,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r22.u32);
loc_823BD350:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823BD358"))) PPC_WEAK_FUNC(sub_823BD358);
PPC_FUNC_IMPL(__imp__sub_823BD358) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x823bd394
	if (!cr0.eq) goto loc_823BD394;
loc_823BD38C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823bd478
	goto loc_823BD478;
loc_823BD394:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823bcee8
	sub_823BCEE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bne cr6,0x823bd474
	if (!cr6.eq) goto loc_823BD474;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,22
	cr6.compare<uint32_t>(r11.u32, 22, xer);
	// beq cr6,0x823bd3e8
	if (cr6.eq) goto loc_823BD3E8;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// li r29,0
	r29.s64 = 0;
	// bne cr6,0x823bd3ec
	if (!cr6.eq) goto loc_823BD3EC;
loc_823BD3E8:
	// li r29,1
	r29.s64 = 1;
loc_823BD3EC:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d2c68
	sub_823D2C68(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823bd414
	if (!cr0.eq) goto loc_823BD414;
loc_823BD404:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// b 0x823bd38c
	goto loc_823BD38C;
loc_823BD414:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r30
	r11.u64 = ctx.r3.u64 + r30.u64;
	// cmplwi cr6,r11,2048
	cr6.compare<uint32_t>(r11.u32, 2048, xer);
	// ble cr6,0x823bd430
	if (!cr6.gt) goto loc_823BD430;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823d2c18
	sub_823D2C18(ctx, base);
	// b 0x823bd404
	goto loc_823BD404;
loc_823BD430:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwimi r3,r11,0,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x823bd474
	if (cr6.eq) goto loc_823BD474;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,17940(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 17940);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823bd474
	if (!cr6.eq) goto loc_823BD474;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,17940(r11)
	PPC_STORE_U32(r11.u32 + 17940, ctx.r10.u32);
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// clrlwi r11,r11,15
	r11.u64 = r11.u32 & 0x1FFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
loc_823BD474:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823BD478:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823BD480"))) PPC_WEAK_FUNC(sub_823BD480);
PPC_FUNC_IMPL(__imp__sub_823BD480) {
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
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823bd4b8
	if (cr0.eq) goto loc_823BD4B8;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// bl 0x823bc3c0
	sub_823BC3C0(ctx, base);
	// b 0x823bd4fc
	goto loc_823BD4FC;
loc_823BD4B8:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,14,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lwz r11,36(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,29,17,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lhz r11,24(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_823BD4FC:
	// li r11,4
	r11.s64 = 4;
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

__attribute__((alias("__imp__sub_823BD518"))) PPC_WEAK_FUNC(sub_823BD518);
PPC_FUNC_IMPL(__imp__sub_823BD518) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwinm r5,r11,4,28,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// rlwinm r4,r11,10,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0x3F;
	// b 0x823bcb48
	sub_823BCB48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823BD538"))) PPC_WEAK_FUNC(sub_823BD538);
PPC_FUNC_IMPL(__imp__sub_823BD538) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// bl 0x823bc4c0
	sub_823BC4C0(ctx, base);
	// li r11,16
	r11.s64 = 16;
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

__attribute__((alias("__imp__sub_823BD57C"))) PPC_WEAK_FUNC(sub_823BD57C);
PPC_FUNC_IMPL(__imp__sub_823BD57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD580"))) PPC_WEAK_FUNC(sub_823BD580);
PPC_FUNC_IMPL(__imp__sub_823BD580) {
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
	// addi r11,r4,3102
	r11.s64 = ctx.r4.s64 + 3102;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lwzx r28,r29,r31
	r28.u64 = PPC_LOAD_U32(r29.u32 + r31.u32);
	// beq cr6,0x823bd680
	if (cr6.eq) goto loc_823BD680;
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r8,r31,r4
	ctx.r8.u64 = r31.u64 + ctx.r4.u64;
	// lwz r9,48(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lwz r27,28(r5)
	r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r25,36(r5)
	r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r26,40(r5)
	r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// rlwinm r4,r10,12,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r4,r4,512
	ctx.r4.s64 = ctx.r4.s64 + 512;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// clrlwi r30,r10,3
	r30.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r3,r4,0,19,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// lwz r10,44(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwinm r7,r9,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
	// addi r7,r7,512
	ctx.r7.s64 = ctx.r7.s64 + 512;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r4,r9,0,3,22
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1FFFFE00;
	// rlwinm r7,r7,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
	// rlwimi r27,r30,0,10,21
	r27.u64 = (__builtin_rotateleft32(r30.u32, 0) & 0x3FFC00) | (r27.u64 & 0xFFFFFFFFFFC003FF);
	// lwz r25,20(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lbz r9,11814(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11814);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r30,r10,30,28,31
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0xF;
	// rlwimi r10,r4,0,30,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFFFFFFFC03) | (ctx.r10.u64 & 0x3FC);
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwimi r7,r25,0,23,31
	ctx.r7.u64 = (__builtin_rotateleft32(r25.u32, 0) & 0x1FF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFE00);
	// rlwimi r26,r4,0,1,12
	r26.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FF80000) | (r26.u64 & 0xFFFFFFFF8007FFFF);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// lwz r27,4(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwimi r3,r27,0,20,20
	ctx.r3.u64 = (__builtin_rotateleft32(r27.u32, 0) & 0x800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r7.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r26.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// ble cr6,0x823bd64c
	if (!cr6.gt) goto loc_823BD64C;
	// lwz r9,44(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwinm r9,r9,30,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xF;
loc_823BD64C:
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwimi r10,r9,2,26,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0x3C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC3);
	// lbz r8,11840(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11840);
	// rlwinm r7,r7,26,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// bge cr6,0x823bd66c
	if (!cr6.lt) goto loc_823BD66C;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_823BD66C:
	// rlwimi r10,r8,6,22,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 6) & 0x3C0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC3F);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r11,r6,r11
	r11.u64 = ctx.r6.u64 | r11.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_823BD680:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stwx r5,r29,r31
	PPC_STORE_U32(r29.u32 + r31.u32, ctx.r5.u32);
	// beq cr6,0x823bd6f0
	if (cr6.eq) goto loc_823BD6F0;
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823bd6a0
	if (cr0.eq) goto loc_823BD6A0;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x823bd6f0
	goto loc_823BD6F0;
loc_823BD6A0:
	// lwz r11,10784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10784);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823bd6f0
	if (cr0.eq) goto loc_823BD6F0;
	// lwz r11,13376(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13376);
	// lwz r3,13372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13372);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x823bd6c8
	if (cr6.lt) goto loc_823BD6C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0cd8
	sub_823D0CD8(ctx, base);
loc_823BD6C8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwimi r11,r28,30,2,31
	r11.u64 = (__builtin_rotateleft32(r28.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r10,13372(r31)
	PPC_STORE_U32(r31.u32 + 13372, ctx.r10.u32);
loc_823BD6F0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823BD6F8"))) PPC_WEAK_FUNC(sub_823BD6F8);
PPC_FUNC_IMPL(__imp__sub_823BD6F8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823bd730
	if (!cr6.gt) goto loc_823BD730;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823BD730:
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r9,r10,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823bd744
	if (cr0.eq) goto loc_823BD744;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823bd7d4
	goto loc_823BD7D4;
loc_823BD744:
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823bd7cc
	if (cr0.eq) goto loc_823BD7CC;
	// lwz r10,12304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// lwz r9,12592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823bd764
	if (cr6.eq) goto loc_823BD764;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bd7cc
	if (!cr6.eq) goto loc_823BD7CC;
loc_823BD764:
	// lwz r10,12308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r9,12596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823bd77c
	if (cr6.eq) goto loc_823BD77C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bd7cc
	if (!cr6.eq) goto loc_823BD7CC;
loc_823BD77C:
	// lwz r10,12312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r9,12600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823bd794
	if (cr6.eq) goto loc_823BD794;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bd7cc
	if (!cr6.eq) goto loc_823BD7CC;
loc_823BD794:
	// lwz r10,12316(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r9,12604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823bd7ac
	if (cr6.eq) goto loc_823BD7AC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bd7cc
	if (!cr6.eq) goto loc_823BD7CC;
loc_823BD7AC:
	// lwz r10,12320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r9,12608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823bd7c4
	if (cr6.eq) goto loc_823BD7C4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823bd7cc
	if (!cr6.eq) goto loc_823BD7CC;
loc_823BD7C4:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x823bd7d0
	goto loc_823BD7D0;
loc_823BD7CC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823BD7D0:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_823BD7D4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// bne 0x823bd814
	if (!cr0.eq) goto loc_823BD814;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// rlwinm r8,r23,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 16) & 0x3FFF0000;
	// ori r10,r10,8320
	ctx.r10.u64 = ctx.r10.u64 | 8320;
	// clrlwi r7,r24,18
	ctx.r7.u64 = r24.u32 & 0x3FFF;
	// rlwinm r6,r21,16,2,15
	ctx.r6.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 16) & 0x3FFF0000;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// or r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 | ctx.r7.u64;
	// clrlwi r8,r22,18
	ctx.r8.u64 = r22.u32 & 0x3FFF;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// b 0x823bd9cc
	goto loc_823BD9CC;
loc_823BD814:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r26,0
	r26.s64 = 0;
	// ori r25,r10,24832
	r25.u64 = ctx.r10.u64 | 24832;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lwz r10,12612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// ori r30,r9,24576
	r30.u64 = ctx.r9.u64 | 24576;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x823bd954
	if (!cr6.gt) goto loc_823BD954;
	// li r29,0
	r29.s64 = 0;
	// addi r28,r31,12620
	r28.s64 = r31.s64 + 12620;
	// addi r27,r31,12860
	r27.s64 = r31.s64 + 12860;
loc_823BD84C:
	// lwz r10,-4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -4);
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lwz r6,-4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + -4);
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpw cr6,r24,r10
	cr6.compare<int32_t>(r24.s32, ctx.r10.s32, xer);
	// bgt cr6,0x823bd868
	if (cr6.gt) goto loc_823BD868;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
loc_823BD868:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpw cr6,r23,r8
	cr6.compare<int32_t>(r23.s32, ctx.r8.s32, xer);
	// ble cr6,0x823bd878
	if (!cr6.gt) goto loc_823BD878;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
loc_823BD878:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmpw cr6,r22,r9
	cr6.compare<int32_t>(r22.s32, ctx.r9.s32, xer);
	// bge cr6,0x823bd888
	if (!cr6.lt) goto loc_823BD888;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
loc_823BD888:
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmpw cr6,r21,r10
	cr6.compare<int32_t>(r21.s32, ctx.r10.s32, xer);
	// bge cr6,0x823bd898
	if (!cr6.lt) goto loc_823BD898;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_823BD898:
	// cmpw cr6,r7,r9
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, xer);
	// bge cr6,0x823bd8a8
	if (!cr6.lt) goto loc_823BD8A8;
	// cmpw cr6,r8,r10
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, xer);
	// blt cr6,0x823bd8b8
	if (cr6.lt) goto loc_823BD8B8;
loc_823BD8A8:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
loc_823BD8B8:
	// li r3,3
	ctx.r3.s64 = 3;
	// clrlwi r7,r7,18
	ctx.r7.u64 = ctx.r7.u32 & 0x3FFF;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r8,r8,16,2,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3FFF0000;
	// lis r20,-16381
	r20.s64 = -1073545216;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// ori r20,r20,11521
	r20.u64 = r20.u64 | 11521;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// lis r19,4
	r19.s64 = 262144;
	// neg r6,r6
	ctx.r6.s64 = -ctx.r6.s64;
	// ori r19,r19,128
	r19.u64 = r19.u64 | 128;
	// neg r5,r5
	ctx.r5.s64 = -ctx.r5.s64;
	// clrlwi r6,r6,17
	ctx.r6.u64 = ctx.r6.u32 & 0x7FFF;
	// rlwinm r5,r5,16,1,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0x7FFF0000;
	// rlwinm r10,r10,16,2,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3FFF0000;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
	// clrlwi r9,r9,18
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFF;
	// slw r7,r3,r29
	ctx.r7.u64 = r29.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r29.u8 & 0x3F));
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r20.u32);
	r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r19.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
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
	// ble cr6,0x823bd938
	if (!cr6.gt) goto loc_823BD938;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823BD938:
	// lwz r10,12612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x823bd84c
	if (cr6.lt) goto loc_823BD84C;
loc_823BD954:
	// lbz r10,10815(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823bd9b4
	if (cr0.eq) goto loc_823BD9B4;
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823bd9b4
	if (cr0.eq) goto loc_823BD9B4;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r8,-16382
	ctx.r8.s64 = -1073610752;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// ori r8,r8,11521
	ctx.r8.u64 = ctx.r8.u64 | 11521;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// ori r7,r7,129
	ctx.r7.u64 = ctx.r7.u64 | 129;
	// clrlwi r6,r24,18
	ctx.r6.u64 = r24.u32 & 0x3FFF;
	// rlwinm r10,r23,16,2,15
	ctx.r10.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 16) & 0x3FFF0000;
	// rlwinm r5,r21,16,2,15
	ctx.r5.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 16) & 0x3FFF0000;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// clrlwi r6,r22,18
	ctx.r6.u64 = r22.u32 & 0x3FFF;
	// or r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 | ctx.r6.u64;
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
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
loc_823BD9B4:
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
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
loc_823BD9CC:
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823BD9D8"))) PPC_WEAK_FUNC(sub_823BD9D8);
PPC_FUNC_IMPL(__imp__sub_823BD9D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BD9F4"))) PPC_WEAK_FUNC(sub_823BD9F4);
PPC_FUNC_IMPL(__imp__sub_823BD9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BD9F8"))) PPC_WEAK_FUNC(sub_823BD9F8);
PPC_FUNC_IMPL(__imp__sub_823BD9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDA04"))) PPC_WEAK_FUNC(sub_823BDA04);
PPC_FUNC_IMPL(__imp__sub_823BDA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDA08"))) PPC_WEAK_FUNC(sub_823BDA08);
PPC_FUNC_IMPL(__imp__sub_823BDA08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,3,21,28
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x7F8) | (r11.u64 & 0xFFFFFFFFFFFFF807);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDA24"))) PPC_WEAK_FUNC(sub_823BDA24);
PPC_FUNC_IMPL(__imp__sub_823BDA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDA28"))) PPC_WEAK_FUNC(sub_823BDA28);
PPC_FUNC_IMPL(__imp__sub_823BDA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,29,24,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDA34"))) PPC_WEAK_FUNC(sub_823BDA34);
PPC_FUNC_IMPL(__imp__sub_823BDA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDA38"))) PPC_WEAK_FUNC(sub_823BDA38);
PPC_FUNC_IMPL(__imp__sub_823BDA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10428(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r11,r4,3,28,28
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,4
	r11.u64 = r11.u64 | 262144;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDA5C"))) PPC_WEAK_FUNC(sub_823BDA5C);
PPC_FUNC_IMPL(__imp__sub_823BDA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDA60"))) PPC_WEAK_FUNC(sub_823BDA60);
PPC_FUNC_IMPL(__imp__sub_823BDA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10428(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDA6C"))) PPC_WEAK_FUNC(sub_823BDA6C);
PPC_FUNC_IMPL(__imp__sub_823BDA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDA70"))) PPC_WEAK_FUNC(sub_823BDA70);
PPC_FUNC_IMPL(__imp__sub_823BDA70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwimi r11,r4,31,0,0
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 31) & 0x80000000) | (r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,11716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11716, r11.u32);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,11712(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// bne 0x823bdaa8
	if (!cr0.eq) goto loc_823BDAA8;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_823BDAA8:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x823bdab8
	if (!cr6.eq) goto loc_823BDAB8;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_823BDAB8:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDAF0"))) PPC_WEAK_FUNC(sub_823BDAF0);
PPC_FUNC_IMPL(__imp__sub_823BDAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwinm r3,r11,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDAFC"))) PPC_WEAK_FUNC(sub_823BDAFC);
PPC_FUNC_IMPL(__imp__sub_823BDAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDB00"))) PPC_WEAK_FUNC(sub_823BDB00);
PPC_FUNC_IMPL(__imp__sub_823BDB00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,11712(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// bne 0x823bdb44
	if (!cr0.eq) goto loc_823BDB44;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_823BDB44:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDB7C"))) PPC_WEAK_FUNC(sub_823BDB7C);
PPC_FUNC_IMPL(__imp__sub_823BDB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDB80"))) PPC_WEAK_FUNC(sub_823BDB80);
PPC_FUNC_IMPL(__imp__sub_823BDB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11712(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwinm r3,r11,27,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDB8C"))) PPC_WEAK_FUNC(sub_823BDB8C);
PPC_FUNC_IMPL(__imp__sub_823BDB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDB90"))) PPC_WEAK_FUNC(sub_823BDB90);
PPC_FUNC_IMPL(__imp__sub_823BDB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,0,27,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1F) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFE0);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,11712(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// bne 0x823bdbd4
	if (!cr0.eq) goto loc_823BDBD4;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_823BDBD4:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDC0C"))) PPC_WEAK_FUNC(sub_823BDC0C);
PPC_FUNC_IMPL(__imp__sub_823BDC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDC10"))) PPC_WEAK_FUNC(sub_823BDC10);
PPC_FUNC_IMPL(__imp__sub_823BDC10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11712(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDC1C"))) PPC_WEAK_FUNC(sub_823BDC1C);
PPC_FUNC_IMPL(__imp__sub_823BDC1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDC20"))) PPC_WEAK_FUNC(sub_823BDC20);
PPC_FUNC_IMPL(__imp__sub_823BDC20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,8,19,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x1F00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE0FF);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r11,11712(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// bne 0x823bdc64
	if (!cr0.eq) goto loc_823BDC64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r10,r11,4112
	ctx.r10.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,12,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r10,r10,0,12,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r10,r10,0,4,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_823BDC64:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDC9C"))) PPC_WEAK_FUNC(sub_823BDC9C);
PPC_FUNC_IMPL(__imp__sub_823BDC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDCA0"))) PPC_WEAK_FUNC(sub_823BDCA0);
PPC_FUNC_IMPL(__imp__sub_823BDCA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11712(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDCAC"))) PPC_WEAK_FUNC(sub_823BDCAC);
PPC_FUNC_IMPL(__imp__sub_823BDCAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDCB0"))) PPC_WEAK_FUNC(sub_823BDCB0);
PPC_FUNC_IMPL(__imp__sub_823BDCB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,21,8,10
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0xE00000) | (ctx.r10.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDD0C"))) PPC_WEAK_FUNC(sub_823BDD0C);
PPC_FUNC_IMPL(__imp__sub_823BDD0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDD10"))) PPC_WEAK_FUNC(sub_823BDD10);
PPC_FUNC_IMPL(__imp__sub_823BDD10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11712(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwinm r3,r11,11,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDD1C"))) PPC_WEAK_FUNC(sub_823BDD1C);
PPC_FUNC_IMPL(__imp__sub_823BDD1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDD20"))) PPC_WEAK_FUNC(sub_823BDD20);
PPC_FUNC_IMPL(__imp__sub_823BDD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,16,11,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0x1F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFE0FFFF);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDD7C"))) PPC_WEAK_FUNC(sub_823BDD7C);
PPC_FUNC_IMPL(__imp__sub_823BDD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDD80"))) PPC_WEAK_FUNC(sub_823BDD80);
PPC_FUNC_IMPL(__imp__sub_823BDD80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,11712(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 11712);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDD8C"))) PPC_WEAK_FUNC(sub_823BDD8C);
PPC_FUNC_IMPL(__imp__sub_823BDD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDD90"))) PPC_WEAK_FUNC(sub_823BDD90);
PPC_FUNC_IMPL(__imp__sub_823BDD90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// lwz r10,11712(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// rlwimi r10,r4,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r10,11712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11712, ctx.r10.u32);
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDDEC"))) PPC_WEAK_FUNC(sub_823BDDEC);
PPC_FUNC_IMPL(__imp__sub_823BDDEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDDF0"))) PPC_WEAK_FUNC(sub_823BDDF0);
PPC_FUNC_IMPL(__imp__sub_823BDDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,11712(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 11712);
	// clrlwi r3,r11,27
	ctx.r3.u64 = r11.u32 & 0x1F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDDFC"))) PPC_WEAK_FUNC(sub_823BDDFC);
PPC_FUNC_IMPL(__imp__sub_823BDDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDE00"))) PPC_WEAK_FUNC(sub_823BDE00);
PPC_FUNC_IMPL(__imp__sub_823BDE00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// rlwimi r11,r4,30,1,1
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 30) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// stw r11,11716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11716, r11.u32);
	// lwz r11,11712(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11712);
	// bne cr6,0x823bde3c
	if (!cr6.eq) goto loc_823BDE3C;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// andi. r9,r11,4112
	ctx.r9.u64 = r11.u64 & 4112;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFF0000;
	// rlwinm r9,r9,0,12,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFEFFFFF;
	// rlwinm r9,r9,0,4,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
loc_823BDE3C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823bde4c
	if (!cr6.eq) goto loc_823BDE4C;
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
loc_823BDE4C:
	// stw r11,10424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10424, r11.u32);
	// stw r11,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, r11.u32);
	// stw r11,10460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10460, r11.u32);
	// stw r11,10464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10464, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDE84"))) PPC_WEAK_FUNC(sub_823BDE84);
PPC_FUNC_IMPL(__imp__sub_823BDE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDE88"))) PPC_WEAK_FUNC(sub_823BDE88);
PPC_FUNC_IMPL(__imp__sub_823BDE88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwinm r3,r11,2,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDE94"))) PPC_WEAK_FUNC(sub_823BDE94);
PPC_FUNC_IMPL(__imp__sub_823BDE94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDE98"))) PPC_WEAK_FUNC(sub_823BDE98);
PPC_FUNC_IMPL(__imp__sub_823BDE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// clrldi r11,r4,32
	r11.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,5048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5048);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,10372(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10372, temp.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDECC"))) PPC_WEAK_FUNC(sub_823BDECC);
PPC_FUNC_IMPL(__imp__sub_823BDECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDED0"))) PPC_WEAK_FUNC(sub_823BDED0);
PPC_FUNC_IMPL(__imp__sub_823BDED0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,10372(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10372);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f0,-30144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30144);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	f0.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDEFC"))) PPC_WEAK_FUNC(sub_823BDEFC);
PPC_FUNC_IMPL(__imp__sub_823BDEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDF00"))) PPC_WEAK_FUNC(sub_823BDF00);
PPC_FUNC_IMPL(__imp__sub_823BDF00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10428(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r4,r11,0,0,28
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF8) | (ctx.r4.u64 & 0xFFFFFFFF00000007);
	// stw r4,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDF1C"))) PPC_WEAK_FUNC(sub_823BDF1C);
PPC_FUNC_IMPL(__imp__sub_823BDF1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDF20"))) PPC_WEAK_FUNC(sub_823BDF20);
PPC_FUNC_IMPL(__imp__sub_823BDF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10428(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDF2C"))) PPC_WEAK_FUNC(sub_823BDF2C);
PPC_FUNC_IMPL(__imp__sub_823BDF2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDF30"))) PPC_WEAK_FUNC(sub_823BDF30);
PPC_FUNC_IMPL(__imp__sub_823BDF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// rlwinm r10,r4,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF;
	// rlwinm r11,r4,16,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFF;
	// rlwinm r8,r4,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// clrldi r9,r4,56
	ctx.r9.u64 = ctx.r4.u64 & 0xFF;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// li r12,15
	r12.s64 = 15;
	// std r10,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r10.u64);
	// std r11,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// rldicr r12,r12,33,30
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFE00000000;
	// std r8,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r8.u64);
	// lfd f13,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f0,-32(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f11,-8(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f10,f0
	ctx.f10.f64 = double(float(f0.f64));
	// lfs f0,5048(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5048);
	f0.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,10340(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10340, temp.u32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// stfs f10,10336(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10336, temp.u32);
	// fmuls f13,f12,f0
	ctx.f13.f64 = double(float(ctx.f12.f64 * f0.f64));
	// stfs f13,10344(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10344, temp.u32);
	// fmuls f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 * f0.f64));
	// stfs f0,10348(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10348, temp.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BDFCC"))) PPC_WEAK_FUNC(sub_823BDFCC);
PPC_FUNC_IMPL(__imp__sub_823BDFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BDFD0"))) PPC_WEAK_FUNC(sub_823BDFD0);
PPC_FUNC_IMPL(__imp__sub_823BDFD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,10336(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10336);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// lfs f11,10348(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10348);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,10340(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10340);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,10344(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10344);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,-30144(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30144);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f10,f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f9,f0,f13
	f0.f64 = double(float(ctx.f9.f64 * f0.f64 + ctx.f13.f64));
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// fctidz f12,f10
	ctx.f12.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
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
	// rlwimi r11,r10,8,0,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r3,r10,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE050"))) PPC_WEAK_FUNC(sub_823BE050);
PPC_FUNC_IMPL(__imp__sub_823BE050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10552(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10552);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,10,21,21
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10552, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE074"))) PPC_WEAK_FUNC(sub_823BE074);
PPC_FUNC_IMPL(__imp__sub_823BE074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE078"))) PPC_WEAK_FUNC(sub_823BE078);
PPC_FUNC_IMPL(__imp__sub_823BE078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10552(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10552);
	// rlwinm r3,r11,22,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE084"))) PPC_WEAK_FUNC(sub_823BE084);
PPC_FUNC_IMPL(__imp__sub_823BE084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE088"))) PPC_WEAK_FUNC(sub_823BE088);
PPC_FUNC_IMPL(__imp__sub_823BE088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,52,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-27448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27448);
	f0.f64 = double(temp.f32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10478(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10478, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE0C8"))) PPC_WEAK_FUNC(sub_823BE0C8);
PPC_FUNC_IMPL(__imp__sub_823BE0C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lhz r11,10478(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10478);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-20332(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20332);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE0F8"))) PPC_WEAK_FUNC(sub_823BE0F8);
PPC_FUNC_IMPL(__imp__sub_823BE0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12320);
	// stw r4,11740(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11740, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823be10c
	if (!cr6.eq) goto loc_823BE10C;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823BE10C:
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,1,30,30
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 1) & 0x2) | (r11.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE130"))) PPC_WEAK_FUNC(sub_823BE130);
PPC_FUNC_IMPL(__imp__sub_823BE130) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11740(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11740);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE138"))) PPC_WEAK_FUNC(sub_823BE138);
PPC_FUNC_IMPL(__imp__sub_823BE138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,2,29,29
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE154"))) PPC_WEAK_FUNC(sub_823BE154);
PPC_FUNC_IMPL(__imp__sub_823BE154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE158"))) PPC_WEAK_FUNC(sub_823BE158);
PPC_FUNC_IMPL(__imp__sub_823BE158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE164"))) PPC_WEAK_FUNC(sub_823BE164);
PPC_FUNC_IMPL(__imp__sub_823BE164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE168"))) PPC_WEAK_FUNC(sub_823BE168);
PPC_FUNC_IMPL(__imp__sub_823BE168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,4,25,27
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x70) | (r11.u64 & 0xFFFFFFFFFFFFFF8F);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE18C"))) PPC_WEAK_FUNC(sub_823BE18C);
PPC_FUNC_IMPL(__imp__sub_823BE18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE190"))) PPC_WEAK_FUNC(sub_823BE190);
PPC_FUNC_IMPL(__imp__sub_823BE190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE19C"))) PPC_WEAK_FUNC(sub_823BE19C);
PPC_FUNC_IMPL(__imp__sub_823BE19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE1A0"))) PPC_WEAK_FUNC(sub_823BE1A0);
PPC_FUNC_IMPL(__imp__sub_823BE1A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12320);
	// stw r4,11744(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11744, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823be1b4
	if (!cr6.eq) goto loc_823BE1B4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823BE1B4:
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,0,31,31
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x1) | (r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE1D8"))) PPC_WEAK_FUNC(sub_823BE1D8);
PPC_FUNC_IMPL(__imp__sub_823BE1D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11744(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11744);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE1E0"))) PPC_WEAK_FUNC(sub_823BE1E0);
PPC_FUNC_IMPL(__imp__sub_823BE1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,7,24,24
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 7) & 0x80) | (r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE204"))) PPC_WEAK_FUNC(sub_823BE204);
PPC_FUNC_IMPL(__imp__sub_823BE204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE208"))) PPC_WEAK_FUNC(sub_823BE208);
PPC_FUNC_IMPL(__imp__sub_823BE208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE214"))) PPC_WEAK_FUNC(sub_823BE214);
PPC_FUNC_IMPL(__imp__sub_823BE214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE218"))) PPC_WEAK_FUNC(sub_823BE218);
PPC_FUNC_IMPL(__imp__sub_823BE218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,8,21,23
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x700) | (r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE234"))) PPC_WEAK_FUNC(sub_823BE234);
PPC_FUNC_IMPL(__imp__sub_823BE234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE238"))) PPC_WEAK_FUNC(sub_823BE238);
PPC_FUNC_IMPL(__imp__sub_823BE238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE244"))) PPC_WEAK_FUNC(sub_823BE244);
PPC_FUNC_IMPL(__imp__sub_823BE244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE248"))) PPC_WEAK_FUNC(sub_823BE248);
PPC_FUNC_IMPL(__imp__sub_823BE248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,11,18,20
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 11) & 0x3800) | (r11.u64 & 0xFFFFFFFFFFFFC7FF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE26C"))) PPC_WEAK_FUNC(sub_823BE26C);
PPC_FUNC_IMPL(__imp__sub_823BE26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE270"))) PPC_WEAK_FUNC(sub_823BE270);
PPC_FUNC_IMPL(__imp__sub_823BE270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,21,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE27C"))) PPC_WEAK_FUNC(sub_823BE27C);
PPC_FUNC_IMPL(__imp__sub_823BE27C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE280"))) PPC_WEAK_FUNC(sub_823BE280);
PPC_FUNC_IMPL(__imp__sub_823BE280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,17,12,14
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE2A4"))) PPC_WEAK_FUNC(sub_823BE2A4);
PPC_FUNC_IMPL(__imp__sub_823BE2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE2A8"))) PPC_WEAK_FUNC(sub_823BE2A8);
PPC_FUNC_IMPL(__imp__sub_823BE2A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE2B4"))) PPC_WEAK_FUNC(sub_823BE2B4);
PPC_FUNC_IMPL(__imp__sub_823BE2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE2B8"))) PPC_WEAK_FUNC(sub_823BE2B8);
PPC_FUNC_IMPL(__imp__sub_823BE2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,14,15,17
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 14) & 0x1C000) | (r11.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE2D4"))) PPC_WEAK_FUNC(sub_823BE2D4);
PPC_FUNC_IMPL(__imp__sub_823BE2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE2D8"))) PPC_WEAK_FUNC(sub_823BE2D8);
PPC_FUNC_IMPL(__imp__sub_823BE2D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,18,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE2E4"))) PPC_WEAK_FUNC(sub_823BE2E4);
PPC_FUNC_IMPL(__imp__sub_823BE2E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE2E8"))) PPC_WEAK_FUNC(sub_823BE2E8);
PPC_FUNC_IMPL(__imp__sub_823BE2E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,20,9,11
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE304"))) PPC_WEAK_FUNC(sub_823BE304);
PPC_FUNC_IMPL(__imp__sub_823BE304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE308"))) PPC_WEAK_FUNC(sub_823BE308);
PPC_FUNC_IMPL(__imp__sub_823BE308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE314"))) PPC_WEAK_FUNC(sub_823BE314);
PPC_FUNC_IMPL(__imp__sub_823BE314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE318"))) PPC_WEAK_FUNC(sub_823BE318);
PPC_FUNC_IMPL(__imp__sub_823BE318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,23,6,8
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3800000) | (r11.u64 & 0xFFFFFFFFFC7FFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE33C"))) PPC_WEAK_FUNC(sub_823BE33C);
PPC_FUNC_IMPL(__imp__sub_823BE33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE340"))) PPC_WEAK_FUNC(sub_823BE340);
PPC_FUNC_IMPL(__imp__sub_823BE340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,9,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE34C"))) PPC_WEAK_FUNC(sub_823BE34C);
PPC_FUNC_IMPL(__imp__sub_823BE34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE350"))) PPC_WEAK_FUNC(sub_823BE350);
PPC_FUNC_IMPL(__imp__sub_823BE350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,29,0,2
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 29) & 0xE0000000) | (r11.u64 & 0xFFFFFFFF1FFFFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE374"))) PPC_WEAK_FUNC(sub_823BE374);
PPC_FUNC_IMPL(__imp__sub_823BE374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE378"))) PPC_WEAK_FUNC(sub_823BE378);
PPC_FUNC_IMPL(__imp__sub_823BE378) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,3,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE384"))) PPC_WEAK_FUNC(sub_823BE384);
PPC_FUNC_IMPL(__imp__sub_823BE384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE388"))) PPC_WEAK_FUNC(sub_823BE388);
PPC_FUNC_IMPL(__imp__sub_823BE388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwimi r11,r4,26,3,5
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 26) & 0x1C000000) | (r11.u64 & 0xFFFFFFFFE3FFFFFF);
	// stw r11,10420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10420, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE3A4"))) PPC_WEAK_FUNC(sub_823BE3A4);
PPC_FUNC_IMPL(__imp__sub_823BE3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE3A8"))) PPC_WEAK_FUNC(sub_823BE3A8);
PPC_FUNC_IMPL(__imp__sub_823BE3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10420);
	// rlwinm r3,r11,6,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE3B4"))) PPC_WEAK_FUNC(sub_823BE3B4);
PPC_FUNC_IMPL(__imp__sub_823BE3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE3B8"))) PPC_WEAK_FUNC(sub_823BE3B8);
PPC_FUNC_IMPL(__imp__sub_823BE3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10371(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10371, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE3CC"))) PPC_WEAK_FUNC(sub_823BE3CC);
PPC_FUNC_IMPL(__imp__sub_823BE3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE3D0"))) PPC_WEAK_FUNC(sub_823BE3D0);
PPC_FUNC_IMPL(__imp__sub_823BE3D0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10371(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10371);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE3D8"))) PPC_WEAK_FUNC(sub_823BE3D8);
PPC_FUNC_IMPL(__imp__sub_823BE3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10370(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10370, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE3EC"))) PPC_WEAK_FUNC(sub_823BE3EC);
PPC_FUNC_IMPL(__imp__sub_823BE3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE3F0"))) PPC_WEAK_FUNC(sub_823BE3F0);
PPC_FUNC_IMPL(__imp__sub_823BE3F0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10370(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10370);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE3F8"))) PPC_WEAK_FUNC(sub_823BE3F8);
PPC_FUNC_IMPL(__imp__sub_823BE3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10369(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10369, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE40C"))) PPC_WEAK_FUNC(sub_823BE40C);
PPC_FUNC_IMPL(__imp__sub_823BE40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE410"))) PPC_WEAK_FUNC(sub_823BE410);
PPC_FUNC_IMPL(__imp__sub_823BE410) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10369(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10369);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE418"))) PPC_WEAK_FUNC(sub_823BE418);
PPC_FUNC_IMPL(__imp__sub_823BE418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10367(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10367, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE42C"))) PPC_WEAK_FUNC(sub_823BE42C);
PPC_FUNC_IMPL(__imp__sub_823BE42C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE430"))) PPC_WEAK_FUNC(sub_823BE430);
PPC_FUNC_IMPL(__imp__sub_823BE430) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10367(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10367);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE438"))) PPC_WEAK_FUNC(sub_823BE438);
PPC_FUNC_IMPL(__imp__sub_823BE438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10366(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10366, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE44C"))) PPC_WEAK_FUNC(sub_823BE44C);
PPC_FUNC_IMPL(__imp__sub_823BE44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE450"))) PPC_WEAK_FUNC(sub_823BE450);
PPC_FUNC_IMPL(__imp__sub_823BE450) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10366(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10366);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE458"))) PPC_WEAK_FUNC(sub_823BE458);
PPC_FUNC_IMPL(__imp__sub_823BE458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10365(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10365, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8192
	r11.u64 = r11.u64 | 536870912;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE46C"))) PPC_WEAK_FUNC(sub_823BE46C);
PPC_FUNC_IMPL(__imp__sub_823BE46C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE470"))) PPC_WEAK_FUNC(sub_823BE470);
PPC_FUNC_IMPL(__imp__sub_823BE470) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10365(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10365);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE478"))) PPC_WEAK_FUNC(sub_823BE478);
PPC_FUNC_IMPL(__imp__sub_823BE478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	// subfic r11,r4,0
	xer.ca = ctx.r4.u32 <= 0;
	r11.s64 = 0 - ctx.r4.s64;
	// li r12,1
	r12.s64 = 1;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// stw r11,10292(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10292, r11.u32);
	// lwz r11,10436(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// rlwinm r11,r11,0,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFC0;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE4B8"))) PPC_WEAK_FUNC(sub_823BE4B8);
PPC_FUNC_IMPL(__imp__sub_823BE4B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10436(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE4C4"))) PPC_WEAK_FUNC(sub_823BE4C4);
PPC_FUNC_IMPL(__imp__sub_823BE4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE4C8"))) PPC_WEAK_FUNC(sub_823BE4C8);
PPC_FUNC_IMPL(__imp__sub_823BE4C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11720(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11720);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE4D0"))) PPC_WEAK_FUNC(sub_823BE4D0);
PPC_FUNC_IMPL(__imp__sub_823BE4D0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f0,-21452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21452);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// stfs f0,10712(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10712, temp.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bne cr6,0x823be50c
	if (!cr6.eq) goto loc_823BE50C;
	// lfs f12,10708(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10708);
	ctx.f12.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f12,f13
	cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// beq cr6,0x823be510
	if (cr6.eq) goto loc_823BE510;
loc_823BE50C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823BE510:
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// rlwimi r11,r10,11,20,20
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, r11.u32);
	// bne cr6,0x823be534
	if (!cr6.eq) goto loc_823BE534;
	// lfs f0,10716(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10716);
	f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x823be538
	if (cr6.eq) goto loc_823BE538;
loc_823BE534:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823BE538:
	// rlwimi r11,r10,12,19,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,45,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 45) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,43,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 43) & 0xFFFFFFFFFFFFFFFF;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE574"))) PPC_WEAK_FUNC(sub_823BE574);
PPC_FUNC_IMPL(__imp__sub_823BE574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE578"))) PPC_WEAK_FUNC(sub_823BE578);
PPC_FUNC_IMPL(__imp__sub_823BE578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,10704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-8088(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8088);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE594"))) PPC_WEAK_FUNC(sub_823BE594);
PPC_FUNC_IMPL(__imp__sub_823BE594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE598"))) PPC_WEAK_FUNC(sub_823BE598);
PPC_FUNC_IMPL(__imp__sub_823BE598) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,10704(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// lfs f13,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,10708(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10708, temp.u32);
	// stfs f13,10716(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10716, temp.u32);
	// bne cr6,0x823be5c8
	if (!cr6.eq) goto loc_823BE5C8;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x823be5cc
	if (cr6.eq) goto loc_823BE5CC;
loc_823BE5C8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823BE5CC:
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// lfs f12,10712(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10712);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// rlwimi r11,r10,11,20,20
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (r11.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, r11.u32);
	// bne cr6,0x823be5f0
	if (!cr6.eq) goto loc_823BE5F0;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x823be5f4
	if (cr6.eq) goto loc_823BE5F4;
loc_823BE5F0:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823BE5F4:
	// rlwimi r11,r10,12,19,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x1000) | (r11.u64 & 0xFFFFFFFFFFFFEFFF);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,42,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE630"))) PPC_WEAK_FUNC(sub_823BE630);
PPC_FUNC_IMPL(__imp__sub_823BE630) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10708(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10708);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE640"))) PPC_WEAK_FUNC(sub_823BE640);
PPC_FUNC_IMPL(__imp__sub_823BE640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,15,16,16
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 15) & 0x8000) | (r11.u64 & 0xFFFFFFFFFFFF7FFF);
	// stw r11,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE65C"))) PPC_WEAK_FUNC(sub_823BE65C);
PPC_FUNC_IMPL(__imp__sub_823BE65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE660"))) PPC_WEAK_FUNC(sub_823BE660);
PPC_FUNC_IMPL(__imp__sub_823BE660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,17,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE66C"))) PPC_WEAK_FUNC(sub_823BE66C);
PPC_FUNC_IMPL(__imp__sub_823BE66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE670"))) PPC_WEAK_FUNC(sub_823BE670);
PPC_FUNC_IMPL(__imp__sub_823BE670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// clrlwi r11,r4,16
	r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,10624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10624, r11.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE688"))) PPC_WEAK_FUNC(sub_823BE688);
PPC_FUNC_IMPL(__imp__sub_823BE688) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10624(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10624);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE690"))) PPC_WEAK_FUNC(sub_823BE690);
PPC_FUNC_IMPL(__imp__sub_823BE690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12304);
	// stw r4,11724(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11724, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823be6a4
	if (!cr6.eq) goto loc_823BE6A4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823BE6A4:
	// lwz r11,10332(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r4,r11,0,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE6C8"))) PPC_WEAK_FUNC(sub_823BE6C8);
PPC_FUNC_IMPL(__imp__sub_823BE6C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11724(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11724);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE6D0"))) PPC_WEAK_FUNC(sub_823BE6D0);
PPC_FUNC_IMPL(__imp__sub_823BE6D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12308(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12308);
	// stw r4,11728(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11728, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823be6e4
	if (!cr6.eq) goto loc_823BE6E4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823BE6E4:
	// lwz r11,10332(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,4,24,27
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (r11.u64 & 0xFFFFFFFFFFFFFF0F);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE708"))) PPC_WEAK_FUNC(sub_823BE708);
PPC_FUNC_IMPL(__imp__sub_823BE708) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11728(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11728);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE710"))) PPC_WEAK_FUNC(sub_823BE710);
PPC_FUNC_IMPL(__imp__sub_823BE710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12312(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12312);
	// stw r4,11732(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11732, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823be724
	if (!cr6.eq) goto loc_823BE724;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823BE724:
	// lwz r11,10332(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,8,20,23
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (r11.u64 & 0xFFFFFFFFFFFFF0FF);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE748"))) PPC_WEAK_FUNC(sub_823BE748);
PPC_FUNC_IMPL(__imp__sub_823BE748) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11732(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11732);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE750"))) PPC_WEAK_FUNC(sub_823BE750);
PPC_FUNC_IMPL(__imp__sub_823BE750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12316(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12316);
	// stw r4,11736(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11736, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823be764
	if (!cr6.eq) goto loc_823BE764;
	// li r4,0
	ctx.r4.s64 = 0;
loc_823BE764:
	// lwz r11,10332(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10332);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r11,r4,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,10332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10332, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE788"))) PPC_WEAK_FUNC(sub_823BE788);
PPC_FUNC_IMPL(__imp__sub_823BE788) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11736(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11736);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE790"))) PPC_WEAK_FUNC(sub_823BE790);
PPC_FUNC_IMPL(__imp__sub_823BE790) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11748(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11748, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE798"))) PPC_WEAK_FUNC(sub_823BE798);
PPC_FUNC_IMPL(__imp__sub_823BE798) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11748(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11748);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE7A0"))) PPC_WEAK_FUNC(sub_823BE7A0);
PPC_FUNC_IMPL(__imp__sub_823BE7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,54,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,-27448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27448);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,11756(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11756, temp.u32);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,10470(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10470, r11.u16);
	// sth r11,10468(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10468, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

