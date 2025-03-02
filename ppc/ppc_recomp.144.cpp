#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82487B70"))) PPC_WEAK_FUNC(sub_82487B70);
PPC_FUNC_IMPL(__imp__sub_82487B70) {
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
	// mflr r12
	// bl 0x8239bcd4
	// clrlwi r11,r3,16
	r11.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r9,r3,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82487b90
	if (!cr6.eq) goto loc_82487B90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82487cdc
	goto loc_82487CDC;
loc_82487B90:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82487cd4
	if (cr6.eq) goto loc_82487CD4;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r19,r10,65521
	r19.u64 = ctx.r10.u64 | 65521;
loc_82487BA0:
	// cmplwi cr6,r5,5552
	cr6.compare<uint32_t>(ctx.r5.u32, 5552, xer);
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// blt cr6,0x82487bb0
	if (cr6.lt) goto loc_82487BB0;
	// li r20,5552
	r20.s64 = 5552;
loc_82487BB0:
	// subf r5,r20,r5
	ctx.r5.s64 = ctx.r5.s64 - r20.s64;
	// cmpwi cr6,r20,16
	cr6.compare<int32_t>(r20.s32, 16, xer);
	// blt cr6,0x82487c94
	if (cr6.lt) goto loc_82487C94;
	// rlwinm r10,r20,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r8,r10,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r20,r8,r20
	r20.s64 = r20.s64 - ctx.r8.s64;
loc_82487BC8:
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r21,1(r4)
	r21.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// lbz r22,2(r4)
	r22.u64 = PPC_LOAD_U8(ctx.r4.u32 + 2);
	// lbz r23,3(r4)
	r23.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lbz r24,4(r4)
	r24.u64 = PPC_LOAD_U8(ctx.r4.u32 + 4);
	// add r11,r21,r11
	r11.u64 = r21.u64 + r11.u64;
	// lbz r25,5(r4)
	r25.u64 = PPC_LOAD_U8(ctx.r4.u32 + 5);
	// lbz r26,6(r4)
	r26.u64 = PPC_LOAD_U8(ctx.r4.u32 + 6);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lbz r27,7(r4)
	r27.u64 = PPC_LOAD_U8(ctx.r4.u32 + 7);
	// add r11,r22,r11
	r11.u64 = r22.u64 + r11.u64;
	// lbz r28,8(r4)
	r28.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// lbz r29,9(r4)
	r29.u64 = PPC_LOAD_U8(ctx.r4.u32 + 9);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lbz r30,10(r4)
	r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 10);
	// add r11,r23,r11
	r11.u64 = r23.u64 + r11.u64;
	// lbz r31,11(r4)
	r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 11);
	// lbz r3,12(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 12);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lbz r6,13(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 13);
	// add r11,r24,r11
	r11.u64 = r24.u64 + r11.u64;
	// lbz r7,14(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 14);
	// lbz r8,15(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 15);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r25,r11
	r11.u64 = r25.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r27,r11
	r11.u64 = r27.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r29,r11
	r11.u64 = r29.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// bne 0x82487bc8
	if (!cr0.eq) goto loc_82487BC8;
loc_82487C94:
	// cmpwi cr6,r20,0
	cr6.compare<int32_t>(r20.s32, 0, xer);
	// beq cr6,0x82487cb4
	if (cr6.eq) goto loc_82487CB4;
loc_82487C9C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r20,r20,-1
	xer.ca = r20.u32 > 0;
	r20.s64 = r20.s64 + -1;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// bne 0x82487c9c
	if (!cr0.eq) goto loc_82487C9C;
loc_82487CB4:
	// divwu r10,r11,r19
	ctx.r10.u32 = r11.u32 / r19.u32;
	// divwu r8,r9,r19
	ctx.r8.u32 = ctx.r9.u32 / r19.u32;
	// mullw r10,r10,r19
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r19.s32);
	// mullw r8,r8,r19
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r19.s32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x82487ba0
	if (!cr6.eq) goto loc_82487BA0;
loc_82487CD4:
	// rlwinm r10,r9,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 | r11.u64;
loc_82487CDC:
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_82487CE0"))) PPC_WEAK_FUNC(sub_82487CE0);
PPC_FUNC_IMPL(__imp__sub_82487CE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r10,r5,725
	ctx.r10.s64 = ctx.r5.s64 + 725;
	// rlwinm r11,r5,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r10,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82487db8
	if (cr6.gt) goto loc_82487DB8;
	// rlwinm r31,r6,2,0,29
	r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
loc_82487D08:
	// bge cr6,0x82487d5c
	if (!cr6.lt) goto loc_82487D5C;
	// addi r10,r11,726
	ctx.r10.s64 = r11.s64 + 726;
	// addi r9,r11,725
	ctx.r9.s64 = r11.s64 + 725;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// lhzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r4.u32);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82487d58
	if (cr6.lt) goto loc_82487D58;
	// bne cr6,0x82487d5c
	if (!cr6.eq) goto loc_82487D5C;
	// add r10,r7,r3
	ctx.r10.u64 = ctx.r7.u64 + ctx.r3.u64;
	// add r9,r8,r3
	ctx.r9.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r10,5200(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 5200);
	// lbz r9,5200(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5200);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82487d5c
	if (cr6.gt) goto loc_82487D5C;
loc_82487D58:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82487D5C:
	// addi r10,r11,725
	ctx.r10.s64 = r11.s64 + 725;
	// lhzx r9,r31,r4
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + ctx.r4.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x82487db8
	if (cr6.lt) goto loc_82487DB8;
	// bne cr6,0x82487d98
	if (!cr6.eq) goto loc_82487D98;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r8,r6,r3
	ctx.r8.u64 = ctx.r6.u64 + ctx.r3.u64;
	// lbz r9,5200(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5200);
	// lbz r8,5200(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 5200);
	// cmplw cr6,r8,r9
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, xer);
	// ble cr6,0x82487db8
	if (!cr6.gt) goto loc_82487DB8;
loc_82487D98:
	// addi r9,r5,725
	ctx.r9.s64 = ctx.r5.s64 + 725;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82487d08
	if (!cr6.gt) goto loc_82487D08;
loc_82487DB8:
	// addi r11,r5,725
	r11.s64 = ctx.r5.s64 + 725;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r6,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r6.u32);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82487DCC"))) PPC_WEAK_FUNC(sub_82487DCC);
PPC_FUNC_IMPL(__imp__sub_82487DCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82487DD0"))) PPC_WEAK_FUNC(sub_82487DD0);
PPC_FUNC_IMPL(__imp__sub_82487DD0) {
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
	// mflr r12
	// bl 0x8239bce4
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// addi r10,r3,2868
	ctx.r10.s64 = ctx.r3.s64 + 2868;
	// lwz r25,0(r4)
	r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r28,0
	r28.s64 = 0;
	// lwz r23,4(r4)
	r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r26,4(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r27,16(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_82487E08:
	// sth r8,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r8.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82487e08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_82487E08;
	// lwz r11,5196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,725
	r11.s64 = r11.s64 + 725;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// sth r10,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r10.u16);
	// lwz r11,5196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,573
	cr6.compare<int32_t>(r11.s32, 573, xer);
	// bge cr6,0x82488010
	if (!cr6.lt) goto loc_82488010;
	// addi r10,r11,725
	ctx.r10.s64 = r11.s64 + 725;
	// subfic r29,r11,573
	xer.ca = r11.u32 <= 573;
	r29.s64 = 573 - r11.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r29,r11
	r24.u64 = r29.u64 + r11.u64;
	// add r31,r10,r3
	r31.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82487E58:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r5,r25
	ctx.r7.u64 = ctx.r5.u64 + r25.u64;
	// lhz r11,2(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// ble cr6,0x82487e88
	if (!cr6.gt) goto loc_82487E88;
	// mr r11,r27
	r11.u64 = r27.u64;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82487E88:
	// cmpw cr6,r10,r23
	cr6.compare<int32_t>(ctx.r10.s32, r23.s32, xer);
	// sth r11,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, r11.u16);
	// bgt cr6,0x82487f00
	if (cr6.gt) goto loc_82487F00;
	// addi r8,r11,1434
	ctx.r8.s64 = r11.s64 + 1434;
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// lhzx r6,r8,r3
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// sthx r6,r8,r3
	PPC_STORE_U16(ctx.r8.u32 + ctx.r3.u32, ctx.r6.u16);
	// blt cr6,0x82487ec0
	if (cr6.lt) goto loc_82487EC0;
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - r30.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
loc_82487EC0:
	// lhz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + r11.u64;
	// lwz r8,5792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mullw r10,r7,r11
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, ctx.r10.u32);
	// beq cr6,0x82487f00
	if (cr6.eq) goto loc_82487F00;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// lwz r10,5796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5796);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, r11.u32);
loc_82487F00:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x82487e58
	if (!cr0.eq) goto loc_82487E58;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// beq cr6,0x82488010
	if (cr6.eq) goto loc_82488010;
	// addi r11,r27,1434
	r11.s64 = r27.s64 + 1434;
	// addi r6,r27,-1
	ctx.r6.s64 = r27.s64 + -1;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r3
	ctx.r7.u64 = r11.u64 + ctx.r3.u64;
	// lis r11,0
	r11.s64 = 0;
	// ori r9,r11,65535
	ctx.r9.u64 = r11.u64 | 65535;
loc_82487F2C:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// addi r10,r11,1434
	ctx.r10.s64 = r11.s64 + 1434;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// b 0x82487f48
	goto loc_82487F48;
loc_82487F40:
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82487F48:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq 0x82487f40
	if (cr0.eq) goto loc_82487F40;
	// addi r10,r11,1434
	ctx.r10.s64 = r11.s64 + 1434;
	// addi r11,r11,1435
	r11.s64 = r11.s64 + 1435;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addic. r28,r28,-2
	xer.ca = r28.u32 > 1;
	r28.s64 = r28.s64 + -2;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// lhzx r5,r10,r3
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// lhzx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + ctx.r3.u32);
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// sthx r5,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, ctx.r5.u16);
	// sthx r8,r11,r3
	PPC_STORE_U16(r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// lhz r11,0(r7)
	r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, r11.u16);
	// bgt 0x82487f2c
	if (cr0.gt) goto loc_82487F2C;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// beq cr6,0x82488010
	if (cr6.eq) goto loc_82488010;
loc_82487F9C:
	// lhz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82488004
	if (cr0.eq) goto loc_82488004;
	// addi r11,r24,725
	r11.s64 = r24.s64 + 725;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r3
	ctx.r6.u64 = r11.u64 + ctx.r3.u64;
loc_82487FB4:
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// addi r24,r24,-1
	r24.s64 = r24.s64 + -1;
	// lwz r11,0(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpw cr6,r11,r23
	cr6.compare<int32_t>(r11.s32, r23.s32, xer);
	// bgt cr6,0x82487ffc
	if (cr6.gt) goto loc_82487FFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x82487ff8
	if (cr6.eq) goto loc_82487FF8;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// lwz r8,5792(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, ctx.r10.u32);
	// sth r9,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r9.u16);
loc_82487FF8:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
loc_82487FFC:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// bne cr6,0x82487fb4
	if (!cr6.eq) goto loc_82487FB4;
loc_82488004:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
	// bne 0x82487f9c
	if (!cr0.eq) goto loc_82487F9C;
loc_82488010:
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82488014"))) PPC_WEAK_FUNC(sub_82488014);
PPC_FUNC_IMPL(__imp__sub_82488014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488018"))) PPC_WEAK_FUNC(sub_82488018);
PPC_FUNC_IMPL(__imp__sub_82488018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lhz r7,2(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,7
	r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82488040
	if (!cr0.eq) goto loc_82488040;
	// li r11,138
	r11.s64 = 138;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82488040:
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r31,-1
	r31.s64 = -1;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// sth r31,6(r10)
	PPC_STORE_U16(ctx.r10.u32 + 6, r31.u16);
	// blt cr6,0x82488134
	if (cr6.lt) goto loc_82488134;
	// addi r4,r4,6
	ctx.r4.s64 = ctx.r4.s64 + 6;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
loc_82488060:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lhz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// bge cr6,0x8248807c
	if (!cr6.lt) goto loc_8248807C;
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// beq cr6,0x82488128
	if (cr6.eq) goto loc_82488128;
loc_8248807C:
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// bge cr6,0x8248809c
	if (!cr6.lt) goto loc_8248809C;
	// addi r11,r10,669
	r11.s64 = ctx.r10.s64 + 669;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthx r9,r11,r3
	PPC_STORE_U16(r11.u32 + ctx.r3.u32, ctx.r9.u16);
	// b 0x824880f4
	goto loc_824880F4;
loc_8248809C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x824880d0
	if (cr6.eq) goto loc_824880D0;
	// cmpw cr6,r10,r6
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, xer);
	// beq cr6,0x824880c0
	if (cr6.eq) goto loc_824880C0;
	// addi r11,r10,669
	r11.s64 = ctx.r10.s64 + 669;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + ctx.r3.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthx r9,r11,r3
	PPC_STORE_U16(r11.u32 + ctx.r3.u32, ctx.r9.u16);
loc_824880C0:
	// lhz r11,2740(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2740);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,2740(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2740, r11.u16);
	// b 0x824880f4
	goto loc_824880F4;
loc_824880D0:
	// cmpwi cr6,r8,10
	cr6.compare<int32_t>(ctx.r8.s32, 10, xer);
	// bgt cr6,0x824880e8
	if (cr6.gt) goto loc_824880E8;
	// lhz r11,2744(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2744);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,2744(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2744, r11.u16);
	// b 0x824880f4
	goto loc_824880F4;
loc_824880E8:
	// lhz r11,2748(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2748);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,2748(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2748, r11.u16);
loc_824880F4:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne cr6,0x8248810c
	if (!cr6.eq) goto loc_8248810C;
	// li r11,138
	r11.s64 = 138;
	// b 0x82488118
	goto loc_82488118;
loc_8248810C:
	// cmpw cr6,r10,r7
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, xer);
	// bne cr6,0x82488120
	if (!cr6.eq) goto loc_82488120;
	// li r11,6
	r11.s64 = 6;
loc_82488118:
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82488128
	goto loc_82488128;
loc_82488120:
	// li r11,7
	r11.s64 = 7;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82488128:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82488060
	if (!cr0.eq) goto loc_82488060;
loc_82488134:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248813C"))) PPC_WEAK_FUNC(sub_8248813C);
PPC_FUNC_IMPL(__imp__sub_8248813C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488140"))) PPC_WEAK_FUNC(sub_82488140);
PPC_FUNC_IMPL(__imp__sub_82488140) {
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
	// mflr r12
	// bl 0x8239bcf0
	// lhz r31,2(r4)
	r31.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r11,7
	r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi r31,0
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x8248816c
	if (!cr0.eq) goto loc_8248816C;
	// li r11,138
	r11.s64 = 138;
	// li r10,3
	ctx.r10.s64 = 3;
loc_8248816C:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// blt cr6,0x82488690
	if (cr6.lt) goto loc_82488690;
	// lis r8,0
	ctx.r8.s64 = 0;
	// addi r30,r4,6
	r30.s64 = ctx.r4.s64 + 6;
	// addi r29,r5,1
	r29.s64 = ctx.r5.s64 + 1;
	// ori r4,r8,65533
	ctx.r4.u64 = ctx.r8.u64 | 65533;
loc_82488184:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lhz r31,0(r30)
	r31.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// bge cr6,0x824881a0
	if (!cr6.lt) goto loc_824881A0;
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// beq cr6,0x82488684
	if (cr6.eq) goto loc_82488684;
loc_824881A0:
	// cmpw cr6,r6,r10
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r10.s32, xer);
	// bge cr6,0x82488258
	if (!cr6.lt) goto loc_82488258;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r5,669
	ctx.r10.s64 = ctx.r5.s64 + 669;
	// add r7,r11,r3
	ctx.r7.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_824881B8:
	// lhz r9,2678(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2678);
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r11,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r11.s64 = 16 - ctx.r9.s64;
	// lhz r28,5808(r3)
	r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// lhzx r11,r8,r3
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r3.u32);
	// ble cr6,0x82488238
	if (!cr6.gt) goto loc_82488238;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r27,20(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r26,r11
	r26.u64 = r11.u64;
	// or r11,r10,r28
	r11.u64 = ctx.r10.u64 | r28.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r27
	PPC_STORE_U8(ctx.r10.u32 + r27.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r28,r11
	PPC_STORE_U8(r28.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r26,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 >> (r11.u8 & 0x3F));
	// b 0x82488248
	goto loc_82488248;
loc_82488238:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r28
	r11.u64 = r11.u64 | r28.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_82488248:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x824881b8
	if (!cr0.eq) goto loc_824881B8;
	// b 0x82488650
	goto loc_82488650;
loc_82488258:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x8248842c
	if (cr6.eq) goto loc_8248842C;
	// cmpw cr6,r5,r9
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, xer);
	// beq cr6,0x82488314
	if (cr6.eq) goto loc_82488314;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lhz r9,2678(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2678);
	// subfic r11,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r11.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// addi r11,r5,669
	r11.s64 = ctx.r5.s64 + 669;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r11,r11,r3
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r3.u32);
	// ble cr6,0x824882f8
	if (!cr6.gt) goto loc_824882F8;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// mr r27,r11
	r27.u64 = r11.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r10,r8
	r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r28,8(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r28,r7
	PPC_STORE_U8(r28.u32 + ctx.r7.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r27,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r27.u32 >> (r11.u8 & 0x3F));
	// b 0x8248830c
	goto loc_8248830C;
loc_824882F8:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_8248830C:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_82488314:
	// lhz r9,2742(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2742);
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r11,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r11.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// lhz r11,2740(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2740);
	// ble cr6,0x82488394
	if (!cr6.gt) goto loc_82488394;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// mr r28,r11
	r28.u64 = r11.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r10,r8
	r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r28,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 >> (r11.u8 & 0x3F));
	// b 0x824883a8
	goto loc_824883A8;
loc_82488394:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_824883A8:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// cmpwi cr6,r10,14
	cr6.compare<int32_t>(ctx.r10.s32, 14, xer);
	// ble cr6,0x82488420
	if (!cr6.gt) goto loc_82488420;
	// addi r11,r6,-3
	r11.s64 = ctx.r6.s64 + -3;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-14
	ctx.r10.s64 = r11.s64 + -14;
loc_8248840C:
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// srw r11,r7,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// b 0x8248864c
	goto loc_8248864C;
loc_82488420:
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
loc_82488424:
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// b 0x8248863c
	goto loc_8248863C;
loc_8248842C:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r6,10
	cr6.compare<int32_t>(ctx.r6.s32, 10, xer);
	// bgt cr6,0x82488538
	if (cr6.gt) goto loc_82488538;
	// lhz r9,2746(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2746);
	// subfic r11,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r11.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// lhz r11,2744(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2744);
	// ble cr6,0x824884b4
	if (!cr6.gt) goto loc_824884B4;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// mr r28,r11
	r28.u64 = r11.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r10,r8
	r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r28,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 >> (r11.u8 & 0x3F));
	// b 0x824884c8
	goto loc_824884C8;
loc_824884B4:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_824884C8:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// ble cr6,0x82488530
	if (!cr6.gt) goto loc_82488530;
	// addi r11,r6,-3
	r11.s64 = ctx.r6.s64 + -3;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-13
	ctx.r10.s64 = r11.s64 + -13;
	// b 0x8248840c
	goto loc_8248840C;
loc_82488530:
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// b 0x82488424
	goto loc_82488424;
loc_82488538:
	// lhz r9,2750(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2750);
	// subfic r11,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r11.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// lhz r11,2748(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 2748);
	// ble cr6,0x824885b4
	if (!cr6.gt) goto loc_824885B4;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// mr r28,r11
	r28.u64 = r11.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r10,r8
	r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r28,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r28.u32 >> (r11.u8 & 0x3F));
	// b 0x824885c8
	goto loc_824885C8;
loc_824885B4:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_824885C8:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// ble cr6,0x82488630
	if (!cr6.gt) goto loc_82488630;
	// addi r11,r6,-11
	r11.s64 = ctx.r6.s64 + -11;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-9
	ctx.r10.s64 = r11.s64 + -9;
	// b 0x8248840c
	goto loc_8248840C;
loc_82488630:
	// addis r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 65536;
	// addi r9,r10,7
	ctx.r9.s64 = ctx.r10.s64 + 7;
	// addi r8,r8,-11
	ctx.r8.s64 = ctx.r8.s64 + -11;
loc_8248863C:
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_8248864C:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
loc_82488650:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x82488668
	if (!cr6.eq) goto loc_82488668;
	// li r11,138
	r11.s64 = 138;
	// b 0x82488674
	goto loc_82488674;
loc_82488668:
	// cmpw cr6,r5,r31
	cr6.compare<int32_t>(ctx.r5.s32, r31.s32, xer);
	// bne cr6,0x8248867c
	if (!cr6.eq) goto loc_8248867C;
	// li r11,6
	r11.s64 = 6;
loc_82488674:
	// li r10,3
	ctx.r10.s64 = 3;
	// b 0x82488684
	goto loc_82488684;
loc_8248867C:
	// li r11,7
	r11.s64 = 7;
	// li r10,4
	ctx.r10.s64 = 4;
loc_82488684:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82488184
	if (!cr0.eq) goto loc_82488184;
loc_82488690:
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82488694"))) PPC_WEAK_FUNC(sub_82488694);
PPC_FUNC_IMPL(__imp__sub_82488694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488698"))) PPC_WEAK_FUNC(sub_82488698);
PPC_FUNC_IMPL(__imp__sub_82488698) {
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
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// ble cr6,0x8248871c
	if (!cr6.gt) goto loc_8248871C;
	// addi r11,r4,-257
	r11.s64 = ctx.r4.s64 + -257;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-11
	ctx.r10.s64 = r11.s64 + -11;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r7,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// b 0x82488738
	goto loc_82488738;
loc_8248871C:
	// addis r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 65536;
	// addi r11,r10,5
	r11.s64 = ctx.r10.s64 + 5;
	// addi r9,r9,-257
	ctx.r9.s64 = ctx.r9.s64 + -257;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// slw r11,r9,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
loc_82488738:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// cmpwi cr6,r10,11
	cr6.compare<int32_t>(ctx.r10.s32, 11, xer);
	// ble cr6,0x824887b0
	if (!cr6.gt) goto loc_824887B0;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-11
	ctx.r10.s64 = r11.s64 + -11;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r7,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// b 0x824887cc
	goto loc_824887CC;
loc_824887B0:
	// addis r8,r31,1
	ctx.r8.s64 = r31.s64 + 65536;
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// addi r9,r10,5
	ctx.r9.s64 = ctx.r10.s64 + 5;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_824887CC:
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// cmpwi cr6,r10,12
	cr6.compare<int32_t>(ctx.r10.s32, 12, xer);
	// ble cr6,0x82488844
	if (!cr6.gt) goto loc_82488844;
	// addi r11,r6,-4
	r11.s64 = ctx.r6.s64 + -4;
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-12
	ctx.r10.s64 = r11.s64 + -12;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r7,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// b 0x82488860
	goto loc_82488860;
loc_82488844:
	// addis r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 65536;
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// addi r8,r8,-4
	ctx.r8.s64 = ctx.r8.s64 + -4;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_82488860:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82488918
	if (!cr6.gt) goto loc_82488918;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r8,r11,-3956
	ctx.r8.s64 = r11.s64 + -3956;
loc_82488878:
	// lbzx r11,r9,r8
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lhz r7,5808(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lhz r11,2678(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2678);
	// ble cr6,0x824888f8
	if (!cr6.gt) goto loc_824888F8;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r11
	r29.u64 = r11.u64;
	// lwz r30,8(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r10,r7
	r11.u64 = ctx.r10.u64 | ctx.r7.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r5,r30
	PPC_STORE_U8(ctx.r5.u32 + r30.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r7
	PPC_STORE_U8(r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-13
	ctx.r10.s64 = r11.s64 + -13;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r29,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r29.u32 >> (r11.u8 & 0x3F));
	// b 0x82488908
	goto loc_82488908;
loc_824888F8:
	// addi r5,r10,3
	ctx.r5.s64 = ctx.r10.s64 + 3;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// stw r5,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r5.u32);
loc_82488908:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// cmpw cr6,r9,r6
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, xer);
	// blt cr6,0x82488878
	if (cr6.lt) goto loc_82488878;
loc_82488918:
	// addi r5,r4,-1
	ctx.r5.s64 = ctx.r4.s64 + -1;
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// bl 0x82488140
	sub_82488140(ctx, base);
	// addi r5,r31,-1
	ctx.r5.s64 = r31.s64 + -1;
	// addi r4,r3,2432
	ctx.r4.s64 = ctx.r3.s64 + 2432;
	// bl 0x82488140
	sub_82488140(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82488938"))) PPC_WEAK_FUNC(sub_82488938);
PPC_FUNC_IMPL(__imp__sub_82488938) {
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
	// mflr r12
	// bl 0x8239bce4
	// lwz r11,5784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82488ce8
	if (cr6.eq) goto loc_82488CE8;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r27,0
	r27.s64 = 0;
	// addi r28,r11,-2464
	r28.s64 = r11.s64 + -2464;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r31,r11,-4072
	r31.s64 = r11.s64 + -4072;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,-1952
	r30.s64 = r11.s64 + -1952;
loc_8248896C:
	// lwz r11,5788(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5788);
	// lwz r10,5776(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5776);
	// lhzx r6,r27,r11
	ctx.r6.u64 = PPC_LOAD_U16(r27.u32 + r11.u32);
	// addi r27,r27,2
	r27.s64 = r27.s64 + 2;
	// lbzx r7,r29,r10
	ctx.r7.u64 = PPC_LOAD_U8(r29.u32 + ctx.r10.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x82488a20
	if (!cr0.eq) goto loc_82488A20;
	// rlwinm r11,r7,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// subfic r8,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r10,r8
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, xer);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82488a0c
	if (!cr6.gt) goto loc_82488A0C;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// or r11,r10,r8
	r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// srw r11,r6,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// b 0x82488cb8
	goto loc_82488CB8;
loc_82488A0C:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
	// b 0x82488cc0
	goto loc_82488CC0;
loc_82488A20:
	// lbzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + r30.u32);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// rotlwi r8,r10,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// addi r10,r10,257
	ctx.r10.s64 = ctx.r10.s64 + 257;
	// add r9,r8,r4
	ctx.r9.u64 = ctx.r8.u64 + ctx.r4.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r9,1030(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 1030);
	// lhzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r4.u32);
	// subfic r26,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// lhz r26,5808(r3)
	r26.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82488ab4
	if (!cr6.gt) goto loc_82488AB4;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r25,20(r3)
	r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r24,8(r3)
	r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// or r11,r11,r26
	r11.u64 = r11.u64 | r26.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r24,r25
	PPC_STORE_U8(r24.u32 + r25.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r26,8(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r26
	PPC_STORE_U8(r11.u32 + r26.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r23,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r23.u32 >> (r11.u8 & 0x3F));
	// b 0x82488ac4
	goto loc_82488AC4;
loc_82488AB4:
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r26
	r11.u64 = r11.u64 | r26.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_82488AC4:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// lwzx r9,r8,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82488b70
	if (cr0.eq) goto loc_82488B70;
	// addi r10,r31,2376
	ctx.r10.s64 = r31.s64 + 2376;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r26,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r26.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// ble cr6,0x82488b5c
	if (!cr6.gt) goto loc_82488B5C;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r7
	PPC_STORE_U8(r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r11.u8 & 0x3F));
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// b 0x82488b70
	goto loc_82488B70;
loc_82488B5C:
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_82488B70:
	// addi r7,r6,-1
	ctx.r7.s64 = ctx.r6.s64 + -1;
	// cmplwi cr6,r7,256
	cr6.compare<uint32_t>(ctx.r7.u32, 256, xer);
	// bge cr6,0x82488b84
	if (!cr6.lt) goto loc_82488B84;
	// lbzx r11,r7,r28
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + r28.u32);
	// b 0x82488b90
	goto loc_82488B90;
loc_82488B84:
	// rlwinm r11,r7,25,7,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r28,256
	ctx.r10.s64 = r28.s64 + 256;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
loc_82488B90:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// rlwinm r8,r10,2,22,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// add r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subfic r6,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// lhz r6,5808(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// ble cr6,0x82488c1c
	if (!cr6.gt) goto loc_82488C1C;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r26,20(r3)
	r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r26
	PPC_STORE_U8(ctx.r10.u32 + r26.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r6
	PPC_STORE_U8(r11.u32 + ctx.r6.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r25,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 >> (r11.u8 & 0x3F));
	// b 0x82488c2c
	goto loc_82488C2C;
loc_82488C1C:
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r6
	r11.u64 = r11.u64 | ctx.r6.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_82488C2C:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// addi r11,r31,136
	r11.s64 = r31.s64 + 136;
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82488cdc
	if (cr0.eq) goto loc_82488CDC;
	// addi r10,r31,2496
	ctx.r10.s64 = r31.s64 + 2496;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r6,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	ctx.r6.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// ble cr6,0x82488cc8
	if (!cr6.gt) goto loc_82488CC8;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r7,r10
	PPC_STORE_U8(ctx.r7.u32 + ctx.r10.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r7
	PPC_STORE_U8(r11.u32 + ctx.r7.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// srw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r11.u8 & 0x3F));
loc_82488CB8:
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
loc_82488CC0:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// b 0x82488cdc
	goto loc_82488CDC;
loc_82488CC8:
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// sth r10,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, ctx.r10.u16);
loc_82488CDC:
	// lwz r11,5784(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5784);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8248896c
	if (cr6.lt) goto loc_8248896C;
loc_82488CE8:
	// lhz r9,1026(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// subfic r11,r9,16
	xer.ca = ctx.r9.u32 <= 16;
	r11.s64 = 16 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// lhz r11,1024(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1024);
	// ble cr6,0x82488d68
	if (!cr6.gt) goto loc_82488D68;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r8,5808(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r10,r8
	r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// add r10,r11,r9
	ctx.r10.u64 = r11.u64 + ctx.r9.u64;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r6,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// b 0x82488d7c
	goto loc_82488D7C;
loc_82488D68:
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_82488D7C:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// lhz r11,1026(r4)
	r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 1026);
	// stw r11,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, r11.u32);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82488D8C"))) PPC_WEAK_FUNC(sub_82488D8C);
PPC_FUNC_IMPL(__imp__sub_82488D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82488D90"))) PPC_WEAK_FUNC(sub_82488D90);
PPC_FUNC_IMPL(__imp__sub_82488D90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x82488dcc
	if (!cr6.gt) goto loc_82488DCC;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// b 0x82488de4
	goto loc_82488DE4;
loc_82488DCC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82488df0
	if (!cr6.gt) goto loc_82488DF0;
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r11.u8);
loc_82488DE4:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
loc_82488DF0:
	// li r11,0
	r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// stw r10,5804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5804, ctx.r10.u32);
	// beq cr6,0x82488e70
	if (cr6.eq) goto loc_82488E70;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// not r11,r5
	r11.u64 = ~ctx.r5.u64;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r5,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
	// rlwinm r31,r11,24,24,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// stbx r5,r7,r8
	PPC_STORE_U8(ctx.r7.u32 + ctx.r8.u32, ctx.r5.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r9,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r9.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r6,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r6.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r31,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, r31.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
loc_82488E70:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82488ea0
	if (cr6.eq) goto loc_82488EA0;
loc_82488E78:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// bne 0x82488e78
	if (!cr0.eq) goto loc_82488E78;
loc_82488EA0:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82488EA8"))) PPC_WEAK_FUNC(sub_82488EA8);
PPC_FUNC_IMPL(__imp__sub_82488EA8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// li r24,0
	r24.s64 = 0;
	// li r9,573
	ctx.r9.s64 = 573;
	// li r25,-1
	r25.s64 = -1;
	// mr r11,r24
	r11.u64 = r24.u64;
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r30,0(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r24,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, r24.u32);
	// cmpwi r27,0
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r9,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, ctx.r9.u32);
	// ble 0x82488f34
	if (!cr0.gt) goto loc_82488F34;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_82488EEC:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82488f20
	if (cr0.eq) goto loc_82488F20;
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// add r8,r11,r3
	ctx.r8.u64 = r11.u64 + ctx.r3.u64;
	// mr r25,r11
	r25.u64 = r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r10,725
	ctx.r6.s64 = ctx.r10.s64 + 725;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// stwx r11,r6,r3
	PPC_STORE_U32(ctx.r6.u32 + ctx.r3.u32, r11.u32);
	// stb r24,5200(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5200, r24.u8);
	// b 0x82488f24
	goto loc_82488F24;
loc_82488F20:
	// sth r24,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, r24.u16);
loc_82488F24:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// blt cr6,0x82488eec
	if (cr6.lt) goto loc_82488EEC;
loc_82488F34:
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82488fb8
	if (!cr6.lt) goto loc_82488FB8;
	// addi r8,r3,5200
	ctx.r8.s64 = ctx.r3.s64 + 5200;
loc_82488F44:
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bge cr6,0x82488f58
	if (!cr6.lt) goto loc_82488F58;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// mr r11,r25
	r11.u64 = r25.u64;
	// b 0x82488f5c
	goto loc_82488F5C;
loc_82488F58:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_82488F5C:
	// lwz r10,5192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// addi r5,r10,725
	ctx.r5.s64 = ctx.r10.s64 + 725;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, ctx.r10.u32);
	// stwx r11,r5,r3
	PPC_STORE_U32(ctx.r5.u32 + ctx.r3.u32, r11.u32);
	// sthx r6,r9,r30
	PPC_STORE_U16(ctx.r9.u32 + r30.u32, ctx.r6.u16);
	// stbx r24,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, r24.u8);
	// lwz r11,5792(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, r11.u32);
	// beq cr6,0x82488fac
	if (cr6.eq) goto loc_82488FAC;
	// add r11,r9,r7
	r11.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwz r10,5796(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5796);
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// stw r11,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, r11.u32);
loc_82488FAC:
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// blt cr6,0x82488f44
	if (cr6.lt) goto loc_82488F44;
loc_82488FB8:
	// stw r25,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r25.u32);
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r31,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r31.s64 = temp.s64;
	// b 0x82488fdc
	goto loc_82488FDC;
loc_82488FCC:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82487ce0
	sub_82487CE0(ctx, base);
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
loc_82488FDC:
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bge cr6,0x82488fcc
	if (!cr6.lt) goto loc_82488FCC;
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r3,5200
	r29.s64 = ctx.r3.s64 + 5200;
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
loc_82488FF0:
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r31,2904(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// addi r10,r11,725
	ctx.r10.s64 = r11.s64 + 725;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// stw r11,5192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5192, r11.u32);
	// stw r10,2904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2904, ctx.r10.u32);
	// bl 0x82487ce0
	sub_82487CE0(ctx, base);
	// lwz r10,5196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,2904(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,725
	ctx.r7.s64 = ctx.r10.s64 + 725;
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + r30.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, ctx.r10.u32);
	// add r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 + r30.u64;
	// stwx r31,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, r31.u32);
	// lwz r10,5196(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r7,r10,725
	ctx.r7.s64 = ctx.r10.s64 + 725;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, ctx.r10.u32);
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, r11.u32);
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// sth r10,0(r28)
	PPC_STORE_U16(r28.u32 + 0, ctx.r10.u16);
	// lbzx r11,r29,r11
	r11.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// lbzx r10,r29,r31
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + r31.u32);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x8248908c
	if (cr6.lt) goto loc_8248908C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8248908C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r7,r27,16
	ctx.r7.u64 = r27.u32 & 0xFFFF;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stbx r11,r29,r27
	PPC_STORE_U8(r29.u32 + r27.u32, r11.u8);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// sth r7,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r7.u16);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// sth r7,2(r9)
	PPC_STORE_U16(ctx.r9.u32 + 2, ctx.r7.u16);
	// stw r10,2904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2904, ctx.r10.u32);
	// bl 0x82487ce0
	sub_82487CE0(ctx, base);
	// lwz r11,5192(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5192);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bge cr6,0x82488ff0
	if (!cr6.lt) goto loc_82488FF0;
	// lwz r11,5196(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5196);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r10,2904(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2904);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r11,725
	ctx.r9.s64 = r11.s64 + 725;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,5196(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5196, r11.u32);
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// bl 0x82487dd0
	sub_82487DD0(ctx, base);
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r10,r3,2868
	ctx.r10.s64 = ctx.r3.s64 + 2868;
	// li r11,15
	r11.s64 = 15;
loc_824890FC:
	// lhz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// bne 0x824890fc
	if (!cr0.eq) goto loc_824890FC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x82489180
	if (cr6.lt) goto loc_82489180;
	// addi r6,r25,1
	ctx.r6.s64 = r25.s64 + 1;
loc_82489130:
	// lhz r8,2(r30)
	ctx.r8.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82489174
	if (cr0.eq) goto loc_82489174;
	// rlwinm r10,r8,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// lhzx r11,r10,r9
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// addi r5,r11,1
	ctx.r5.s64 = r11.s64 + 1;
	// sthx r5,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u16);
loc_82489154:
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// bgt 0x82489154
	if (cr0.gt) goto loc_82489154;
	// rlwinm r11,r7,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// sth r11,0(r30)
	PPC_STORE_U16(r30.u32 + 0, r11.u16);
loc_82489174:
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82489130
	if (!cr0.eq) goto loc_82489130;
loc_82489180:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82489188"))) PPC_WEAK_FUNC(sub_82489188);
PPC_FUNC_IMPL(__imp__sub_82489188) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// ble cr6,0x824891f8
	if (!cr6.gt) goto loc_824891F8;
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// slw r11,r6,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-13
	ctx.r10.s64 = r11.s64 + -13;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r11.u8 & 0x3F));
	// b 0x8248920c
	goto loc_8248920C;
loc_824891F8:
	// slw r10,r6,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (r11.u8 & 0x3F));
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// stw r11,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r11.u32);
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_8248920C:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// li r6,1
	ctx.r6.s64 = 1;
	// b 0x82488d90
	sub_82488D90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82489218"))) PPC_WEAK_FUNC(sub_82489218);
PPC_FUNC_IMPL(__imp__sub_82489218) {
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
	// lwz r11,124(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// li r27,0
	r27.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r28,r11,-3956
	r28.s64 = r11.s64 + -3956;
	// ble cr6,0x82489358
	if (!cr6.gt) goto loc_82489358;
	// lbz r11,28(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x824892c8
	if (!cr6.eq) goto loc_824892C8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// li r11,7
	r11.s64 = 7;
loc_82489268:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne 0x82489268
	if (!cr0.eq) goto loc_82489268;
	// addi r10,r3,168
	ctx.r10.s64 = ctx.r3.s64 + 168;
	// li r11,121
	r11.s64 = 121;
loc_82489284:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// bne 0x82489284
	if (!cr0.eq) goto loc_82489284;
	// addi r10,r3,652
	ctx.r10.s64 = ctx.r3.s64 + 652;
	// li r11,128
	r11.s64 = 128;
loc_824892A0:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne 0x824892a0
	if (!cr0.eq) goto loc_824892A0;
	// rlwinm r11,r7,30,2,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// subfc r11,r9,r11
	xer.ca = r11.u32 >= ctx.r9.u32;
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r11,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, r11.u8);
loc_824892C8:
	// addi r4,r3,2832
	ctx.r4.s64 = ctx.r3.s64 + 2832;
	// bl 0x82488ea8
	sub_82488EA8(ctx, base);
	// addi r4,r3,2844
	ctx.r4.s64 = ctx.r3.s64 + 2844;
	// bl 0x82488ea8
	sub_82488EA8(ctx, base);
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
	// lwz r5,2836(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2836);
	// bl 0x82488018
	sub_82488018(ctx, base);
	// addi r4,r3,2432
	ctx.r4.s64 = ctx.r3.s64 + 2432;
	// lwz r5,2848(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2848);
	// bl 0x82488018
	sub_82488018(ctx, base);
	// addi r4,r3,2856
	ctx.r4.s64 = ctx.r3.s64 + 2856;
	// bl 0x82488ea8
	sub_82488EA8(ctx, base);
	// li r11,18
	r11.s64 = 18;
loc_824892FC:
	// lbzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + r28.u32);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lhz r10,2678(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2678);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82489320
	if (!cr0.eq) goto loc_82489320;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x824892fc
	if (!cr6.lt) goto loc_824892FC;
loc_82489320:
	// mulli r10,r11,3
	ctx.r10.s64 = r11.s64 * 3;
	// lwz r9,5796(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5796);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// addi r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 + 10;
	// lwz r11,5792(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5792);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// rlwinm r9,r9,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,17
	r11.s64 = r11.s64 + 17;
	// addi r10,r11,10
	ctx.r10.s64 = r11.s64 + 10;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, r11.u32);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82489360
	if (cr6.gt) goto loc_82489360;
	// b 0x8248935c
	goto loc_8248935C;
loc_82489358:
	// addi r9,r31,5
	ctx.r9.s64 = r31.s64 + 5;
loc_8248935C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82489360:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82489388
	if (cr6.gt) goto loc_82489388;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82489388
	if (cr6.eq) goto loc_82489388;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82489188
	sub_82489188(ctx, base);
	// b 0x824894d4
	goto loc_824894D4;
loc_82489388:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// lwz r10,5812(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// bne cr6,0x82489428
	if (!cr6.eq) goto loc_82489428;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// addi r11,r29,2
	r11.s64 = r29.s64 + 2;
	// ble cr6,0x82489404
	if (!cr6.gt) goto loc_82489404;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-13
	ctx.r10.s64 = r11.s64 + -13;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r7,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// b 0x82489418
	goto loc_82489418;
loc_82489404:
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_82489418:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// addi r5,r28,1372
	ctx.r5.s64 = r28.s64 + 1372;
	// addi r4,r28,220
	ctx.r4.s64 = r28.s64 + 220;
	// b 0x824894d0
	goto loc_824894D0;
loc_82489428:
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// addi r11,r29,4
	r11.s64 = r29.s64 + 4;
	// ble cr6,0x82489498
	if (!cr6.gt) goto loc_82489498;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// clrlwi r6,r11,16
	ctx.r6.u64 = r11.u32 & 0xFFFF;
	// lwz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// stbx r11,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lbz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r10,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + r11.u32, ctx.r10.u8);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// addi r10,r11,-13
	ctx.r10.s64 = r11.s64 + -13;
	// subfic r11,r11,16
	xer.ca = r11.u32 <= 16;
	r11.s64 = 16 - r11.s64;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// stw r10,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r10.u32);
	// srw r11,r6,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// b 0x824894ac
	goto loc_824894AC;
loc_82489498:
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lhz r10,5808(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r9,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, ctx.r9.u32);
loc_824894AC:
	// sth r11,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r11.u16);
	// addi r6,r8,1
	ctx.r6.s64 = ctx.r8.s64 + 1;
	// lwz r10,2848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2848);
	// lwz r11,2836(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2836);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82488698
	sub_82488698(ctx, base);
	// addi r5,r3,2432
	ctx.r5.s64 = ctx.r3.s64 + 2432;
	// addi r4,r3,140
	ctx.r4.s64 = ctx.r3.s64 + 140;
loc_824894D0:
	// bl 0x82488938
	sub_82488938(ctx, base);
loc_824894D4:
	// addi r10,r3,140
	ctx.r10.s64 = ctx.r3.s64 + 140;
	// li r11,286
	r11.s64 = 286;
loc_824894DC:
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x824894dc
	if (!cr0.eq) goto loc_824894DC;
	// addi r10,r3,2432
	ctx.r10.s64 = ctx.r3.s64 + 2432;
	// li r11,30
	r11.s64 = 30;
loc_824894F4:
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x824894f4
	if (!cr0.eq) goto loc_824894F4;
	// addi r10,r3,2676
	ctx.r10.s64 = ctx.r3.s64 + 2676;
	// li r11,19
	r11.s64 = 19;
loc_8248950C:
	// sth r27,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r27.u16);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x8248950c
	if (!cr0.eq) goto loc_8248950C;
	// li r11,1
	r11.s64 = 1;
	// stw r27,5796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5796, r27.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r27,5792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5792, r27.u32);
	// stw r27,5800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5800, r27.u32);
	// stw r27,5784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5784, r27.u32);
	// sth r11,1164(r3)
	PPC_STORE_U16(ctx.r3.u32 + 1164, r11.u16);
	// beq cr6,0x824895a0
	if (cr6.eq) goto loc_824895A0;
	// lwz r11,5812(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5812);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x82489574
	if (!cr6.gt) goto loc_82489574;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stbx r11,r9,r10
	PPC_STORE_U8(ctx.r9.u32 + ctx.r10.u32, r11.u8);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r9,5808(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5808);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + r11.u32, ctx.r9.u8);
	// b 0x8248958c
	goto loc_8248958C;
loc_82489574:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82489598
	if (!cr6.gt) goto loc_82489598;
	// lhz r11,5808(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 5808);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, r11.u8);
loc_8248958C:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
loc_82489598:
	// sth r27,5808(r3)
	PPC_STORE_U16(ctx.r3.u32 + 5808, r27.u16);
	// stw r27,5812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5812, r27.u32);
loc_824895A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_824895A8"))) PPC_WEAK_FUNC(sub_824895A8);
PPC_FUNC_IMPL(__imp__sub_824895A8) {
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// mr r19,r6
	r19.u64 = ctx.r6.u64;
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// rlwinm r30,r11,1,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// clrlwi r27,r10,26
	r27.u64 = ctx.r10.u32 & 0x3F;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r11,r11,-20568
	r11.s64 = r11.s64 + -20568;
	// rlwinm r8,r27,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,92
	ctx.r4.s64 = ctx.r1.s64 + 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r25,r8,r11
	r25.u64 = PPC_LOAD_U8(ctx.r8.u32 + r11.u32);
	// rlwinm r26,r10,23,30,31
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// rlwinm r24,r9,1,31,31
	r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// bl 0x823bb788
	sub_823BB788(ctx, base);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r10,r29,r9
	ctx.r10.s64 = ctx.r9.s64 - r29.s64;
	// subf r11,r29,r8
	r11.s64 = ctx.r8.s64 - r29.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r7,r11
	ctx.r7.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r10,r30
	r11.s64 = r30.s64 - ctx.r10.s64;
	// subf r10,r7,r30
	ctx.r10.s64 = r30.s64 - ctx.r7.s64;
	// addi r7,r11,32
	ctx.r7.s64 = r11.s64 + 32;
	// addi r6,r10,32
	ctx.r6.s64 = ctx.r10.s64 + 32;
	// bne cr6,0x824896c8
	if (!cr6.eq) goto loc_824896C8;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// slw r11,r10,r7
	r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// slw r7,r10,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// ble cr6,0x82489678
	if (!cr6.gt) goto loc_82489678;
	// cmplwi cr6,r7,16
	cr6.compare<uint32_t>(ctx.r7.u32, 16, xer);
	// bgt cr6,0x8248968c
	if (cr6.gt) goto loc_8248968C;
loc_82489678:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8248968c
	if (cr0.eq) goto loc_8248968C;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// b 0x8248969c
	goto loc_8248969C;
loc_8248968C:
	// li r23,0
	r23.s64 = 0;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
loc_8248969C:
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r11,r11,15,18,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x3FE0;
	// b 0x824897c0
	goto loc_824897C0;
loc_824896C8:
	// subf r10,r29,r9
	ctx.r10.s64 = ctx.r9.s64 - r29.s64;
	// subf r11,r29,r8
	r11.s64 = ctx.r8.s64 - r29.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r10,r30
	r11.s64 = r30.s64 - ctx.r10.s64;
	// subf r10,r9,r30
	ctx.r10.s64 = r30.s64 - ctx.r9.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x824896fc
	if (cr6.lt) goto loc_824896FC;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_824896FC:
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x82489708
	if (cr0.gt) goto loc_82489708;
	// li r11,0
	r11.s64 = 0;
loc_82489708:
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8248974c
	if (cr6.lt) goto loc_8248974C;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm. r9,r9,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8248974c
	if (cr0.eq) goto loc_8248974C;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82489728:
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// bne cr6,0x82489754
	if (!cr6.eq) goto loc_82489754;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r11,r29,r11
	r11.s64 = r11.s64 - r29.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// addi r9,r11,32
	ctx.r9.s64 = r11.s64 + 32;
	// b 0x82489758
	goto loc_82489758;
loc_8248974C:
	// li r23,0
	r23.s64 = 0;
	// b 0x82489728
	goto loc_82489728;
loc_82489754:
	// li r9,0
	ctx.r9.s64 = 0;
loc_82489758:
	// subf. r11,r28,r7
	r11.s64 = ctx.r7.s64 - r28.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// blt 0x82489768
	if (cr0.lt) goto loc_82489768;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_82489768:
	// subf. r11,r28,r6
	r11.s64 = ctx.r6.s64 - r28.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// blt 0x82489778
	if (cr0.lt) goto loc_82489778;
	// mr r31,r11
	r31.u64 = r11.u64;
loc_82489778:
	// subf. r11,r28,r9
	r11.s64 = ctx.r9.s64 - r28.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82489784
	if (!cr0.lt) goto loc_82489784;
	// li r11,0
	r11.s64 = 0;
loc_82489784:
	// slw r30,r10,r30
	r30.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// slw r31,r10,r31
	r31.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// mr r9,r24
	ctx.r9.u64 = r24.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_824897C0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x824897cc
	if (cr6.eq) goto loc_824897CC;
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_824897CC:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x824897dc
	if (cr6.eq) goto loc_824897DC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
loc_824897DC:
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x824897e8
	if (cr6.eq) goto loc_824897E8;
	// stw r24,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r24.u32);
loc_824897E8:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x824897f4
	if (cr6.eq) goto loc_824897F4;
	// stw r23,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r23.u32);
loc_824897F4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_824897FC"))) PPC_WEAK_FUNC(sub_824897FC);
PPC_FUNC_IMPL(__imp__sub_824897FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489800"))) PPC_WEAK_FUNC(sub_82489800);
PPC_FUNC_IMPL(__imp__sub_82489800) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r27,r30
	r27.u64 = r30.u64;
	// mr r29,r26
	r29.u64 = r26.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x823c35b8
	sub_823C35B8(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82489a00
	if (cr6.eq) goto loc_82489A00;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82489960
	if (cr6.eq) goto loc_82489960;
	// cmpwi cr6,r3,16
	cr6.compare<int32_t>(ctx.r3.s32, 16, xer);
	// beq cr6,0x8248992c
	if (cr6.eq) goto loc_8248992C;
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// beq cr6,0x82489904
	if (cr6.eq) goto loc_82489904;
	// cmpwi cr6,r3,18
	cr6.compare<int32_t>(ctx.r3.s32, 18, xer);
	// beq cr6,0x824898c4
	if (cr6.eq) goto loc_824898C4;
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// beq cr6,0x824898a0
	if (cr6.eq) goto loc_824898A0;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bne cr6,0x82489c0c
	if (!cr6.eq) goto loc_82489C0C;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823bd150
	sub_823BD150(ctx, base);
	// lwz r10,328(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r9,304(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// li r11,1
	r11.s64 = 1;
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// b 0x82489a38
	goto loc_82489A38;
loc_824898A0:
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823bd150
	sub_823BD150(ctx, base);
	// lwz r11,296(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r8,272(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// lwz r7,288(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// b 0x82489a20
	goto loc_82489A20;
loc_824898C4:
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823bd150
	sub_823BD150(ctx, base);
	// lwz r11,200(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// lwz r10,204(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lwz r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// rlwinm r11,r11,6,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// stw r8,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x82489a38
	goto loc_82489A38;
loc_82489904:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823bd230
	sub_823BD230(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
	// b 0x82489a28
	goto loc_82489A28;
loc_8248992C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823bd538
	sub_823BD538(ctx, base);
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r8,144(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
	// b 0x824899a0
	goto loc_824899A0;
loc_82489960:
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823bd480
	sub_823BD480(ctx, base);
	// lwz r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// li r11,1
	r11.s64 = 1;
	// lwz r8,236(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r7,208(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x824899b0
	if (cr0.eq) goto loc_824899B0;
loc_824899A0:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r27,24(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// rlwinm r29,r11,4,28,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// b 0x82489a38
	goto loc_82489A38;
loc_824899B0:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// addi r10,r10,992
	ctx.r10.s64 = ctx.r10.s64 + 992;
	// lbzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r8.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// clrlwi r9,r9,18
	ctx.r9.u64 = ctx.r9.u32 & 0x3FFF;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// stw r28,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r28.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// b 0x82489c0c
	goto loc_82489C0C;
loc_82489A00:
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823bd150
	sub_823BD150(ctx, base);
	// lwz r11,264(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r7,256(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
loc_82489A20:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r7.u32);
loc_82489A28:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r8.u32);
loc_82489A38:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// clrlwi r3,r11,26
	ctx.r3.u64 = r11.u32 & 0x3F;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,992
	r11.s64 = r11.s64 + 992;
	// lbzx r11,r3,r11
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + r11.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r28.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x824895a8
	sub_824895A8(ctx, base);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82489af8
	if (!cr6.eq) goto loc_82489AF8;
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// rlwinm r10,r11,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,512
	cr6.compare<uint32_t>(ctx.r10.u32, 512, xer);
	// bne cr6,0x82489af8
	if (!cr6.eq) goto loc_82489AF8;
	// lwz r10,28(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 28);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82489af8
	if (!cr0.eq) goto loc_82489AF8;
	// lwz r10,32(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82489af8
	if (!cr0.eq) goto loc_82489AF8;
	// rlwinm. r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82489af8
	if (!cr0.eq) goto loc_82489AF8;
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82489af8
	if (!cr0.eq) goto loc_82489AF8;
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82489af8
	if (!cr0.eq) goto loc_82489AF8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823bb788
	sub_823BB788(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r10,r11,r10
	ctx.r10.u64 = r11.u64 & ~ctx.r10.u64;
	// b 0x82489afc
	goto loc_82489AFC;
loc_82489AF8:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82489AFC:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r29,96(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bne cr6,0x82489b3c
	if (!cr6.eq) goto loc_82489B3C;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// bgt cr6,0x82489b3c
	if (cr6.gt) goto loc_82489B3C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823c35b8
	sub_823C35B8(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x82489b5c
	if (cr6.eq) goto loc_82489B5C;
loc_82489B3C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823c35b8
	sub_823C35B8(ctx, base);
	// cmpwi cr6,r3,17
	cr6.compare<int32_t>(ctx.r3.s32, 17, xer);
	// beq cr6,0x82489b5c
	if (cr6.eq) goto loc_82489B5C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82489B5C:
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// rlwinm r11,r11,13,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0xFFFFE000;
	// srawi r11,r11,26
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFFF) != 0);
	r11.s64 = r11.s32 >> 26;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq cr6,0x82489b80
	if (cr6.eq) goto loc_82489B80;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_82489B80:
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82489b98
	if (cr6.eq) goto loc_82489B98;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_82489B98:
	// lwz r11,40(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82489bb0
	if (cr0.eq) goto loc_82489BB0;
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
loc_82489BB0:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// twllei r30,0
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// twllei r11,0
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r6,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r6.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r8,r8,r30
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(r30.s32);
	// divwu r11,r9,r11
	r11.u32 = ctx.r9.u32 / r11.u32;
	// mullw r7,r7,r30
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(r30.s32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// divwu r10,r10,r30
	ctx.r10.u32 = ctx.r10.u32 / r30.u32;
	// rlwinm r9,r8,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r9.u32);
loc_82489C0C:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82489C14"))) PPC_WEAK_FUNC(sub_82489C14);
PPC_FUNC_IMPL(__imp__sub_82489C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489C18"))) PPC_WEAK_FUNC(sub_82489C18);
PPC_FUNC_IMPL(__imp__sub_82489C18) {
	PPC_FUNC_PROLOGUE();
	// b 0x82489800
	sub_82489800(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82489C1C"))) PPC_WEAK_FUNC(sub_82489C1C);
PPC_FUNC_IMPL(__imp__sub_82489C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489C20"))) PPC_WEAK_FUNC(sub_82489C20);
PPC_FUNC_IMPL(__imp__sub_82489C20) {
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
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// rlwinm r11,r11,27,5,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// subf r7,r10,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r10.s64;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r6,r9
	ctx.r6.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf r9,r7,r11
	ctx.r9.s64 = r11.s64 - ctx.r7.s64;
	// subf r7,r6,r11
	ctx.r7.s64 = r11.s64 - ctx.r6.s64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x82489c80
	if (cr6.lt) goto loc_82489C80;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82489C80:
	// addic. r9,r9,-4
	xer.ca = ctx.r9.u32 > 3;
	ctx.r9.s64 = ctx.r9.s64 + -4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// bgt 0x82489c94
	if (cr0.gt) goto loc_82489C94;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
loc_82489C94:
	// cmplw cr6,r23,r25
	cr6.compare<uint32_t>(r23.u32, r25.u32, xer);
	// bge cr6,0x82489cb0
	if (!cr6.lt) goto loc_82489CB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r6.u32);
	// stw r6,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r6.u32);
	// stw r6,8(r24)
	PPC_STORE_U32(r24.u32 + 8, ctx.r6.u32);
	// b 0x82489dc8
	goto loc_82489DC8;
loc_82489CB0:
	// subf r7,r10,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r10.s64;
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r5,r9
	ctx.r5.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf r9,r7,r11
	ctx.r9.s64 = r11.s64 - ctx.r7.s64;
	// subf r7,r5,r11
	ctx.r7.s64 = r11.s64 - ctx.r5.s64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// ble cr6,0x82489cf8
	if (!cr6.gt) goto loc_82489CF8;
	// subf r10,r10,r27
	ctx.r10.s64 = r27.s64 - ctx.r10.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// b 0x82489cfc
	goto loc_82489CFC;
loc_82489CF8:
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_82489CFC:
	// li r10,1
	ctx.r10.s64 = 1;
	// subf r9,r25,r9
	ctx.r9.s64 = ctx.r9.s64 - r25.s64;
	// subf r7,r25,r7
	ctx.r7.s64 = ctx.r7.s64 - r25.s64;
	// subf. r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// slw r29,r10,r9
	r29.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// slw r28,r10,r7
	r28.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r7.u8 & 0x3F));
	// ble 0x82489d1c
	if (!cr0.gt) goto loc_82489D1C;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_82489D1C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// rlwinm r3,r26,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// addi r11,r11,-20568
	r11.s64 = r11.s64 + -20568;
	// slw r30,r10,r6
	r30.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r30.u32);
	// lbzx r31,r3,r11
	r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + r11.u32);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// mullw r11,r11,r31
	r11.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mullw r8,r7,r11
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(r11.s32);
	// bgt cr6,0x82489d84
	if (cr6.gt) goto loc_82489D84;
	// addi r11,r8,4095
	r11.s64 = ctx.r8.s64 + 4095;
	// rlwinm r8,r11,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
loc_82489D84:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,116
	r11.s64 = ctx.r1.s64 + 116;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// subf r3,r25,r23
	ctx.r3.s64 = r23.s64 - r25.s64;
	// bl 0x823bbea0
	sub_823BBEA0(ctx, base);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r10,4(r24)
	PPC_STORE_U32(r24.u32 + 4, ctx.r10.u32);
	// stw r9,8(r24)
	PPC_STORE_U32(r24.u32 + 8, ctx.r9.u32);
loc_82489DC8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82489DD0"))) PPC_WEAK_FUNC(sub_82489DD0);
PPC_FUNC_IMPL(__imp__sub_82489DD0) {
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
	// mflr r12
	// bl 0x8239bcd0
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r19,12(r4)
	r19.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r11,r3,31
	r11.s64 = ctx.r3.s64 + 31;
	// subfic r8,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r10.s64;
	// li r25,-1
	r25.s64 = -1;
	// li r18,0
	r18.s64 = 0;
	// rlwinm r23,r11,27,5,31
	r23.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// cmplw cr6,r9,r19
	cr6.compare<uint32_t>(ctx.r9.u32, r19.u32, xer);
	// addi r22,r8,3
	r22.s64 = ctx.r8.s64 + 3;
	// addi r24,r8,7
	r24.s64 = ctx.r8.s64 + 7;
	// bge cr6,0x82489ed0
	if (!cr6.lt) goto loc_82489ED0;
	// lwz r20,0(r4)
	r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r21,8(r4)
	r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82489E10:
	// rlwinm r11,r9,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	// rlwinm r4,r9,27,5,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// rlwinm r5,r9,4,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x10;
	// mullw r30,r4,r23
	r30.s64 = int64_t(ctx.r4.s32) * int64_t(r23.s32);
	// rlwinm r29,r9,2,27,28
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x18;
	// rlwinm r28,r9,7,20,20
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x800;
	// rlwinm r4,r9,30,30,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x2;
	// slw r11,r11,r22
	r11.u64 = r22.u8 & 0x20 ? 0 : (r11.u32 << (r22.u8 & 0x3F));
	// cmplw cr6,r10,r21
	cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, xer);
	// add r27,r11,r5
	r27.u64 = r11.u64 + ctx.r5.u64;
	// bge cr6,0x82489ec4
	if (!cr6.lt) goto loc_82489EC4;
	// rlwinm r26,r4,3,0,28
	r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
loc_82489E44:
	// rlwinm r11,r10,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r5,r10,29
	ctx.r5.u64 = ctx.r10.u32 & 0x7;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// rlwinm r11,r10,0,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// rlwinm r4,r11,3,24,25
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xC0;
	// slw r3,r3,r24
	ctx.r3.u64 = r24.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r24.u8 & 0x3F));
	// slw r11,r5,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r31,r11,1,0,26
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFE0;
	// clrlwi r5,r11,28
	ctx.r5.u64 = r11.u32 & 0xF;
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// rlwinm r3,r11,1,0,21
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFC00;
	// rlwinm r31,r11,0,23,25
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1C0;
	// clrlwi r5,r11,26
	ctx.r5.u64 = r11.u32 & 0x3F;
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// srw r11,r11,r8
	r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bge cr6,0x82489eac
	if (!cr6.lt) goto loc_82489EAC;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_82489EAC:
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(r11.u32, r18.u32, xer);
	// ble cr6,0x82489eb8
	if (!cr6.gt) goto loc_82489EB8;
	// mr r18,r11
	r18.u64 = r11.u64;
loc_82489EB8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r21
	cr6.compare<uint32_t>(ctx.r10.u32, r21.u32, xer);
	// blt cr6,0x82489e44
	if (cr6.lt) goto loc_82489E44;
loc_82489EC4:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r19
	cr6.compare<uint32_t>(ctx.r9.u32, r19.u32, xer);
	// blt cr6,0x82489e10
	if (cr6.lt) goto loc_82489E10;
loc_82489ED0:
	// stw r25,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r25.u32);
	// stw r18,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r18.u32);
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_82489EDC"))) PPC_WEAK_FUNC(sub_82489EDC);
PPC_FUNC_IMPL(__imp__sub_82489EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82489EE0"))) PPC_WEAK_FUNC(sub_82489EE0);
PPC_FUNC_IMPL(__imp__sub_82489EE0) {
	PPC_FUNC_PROLOGUE();
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
	// mflr r12
	// bl 0x8239bcc0
	// cntlzw r10,r6
	ctx.r10.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r8,60(r1)
	PPC_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// lwz r19,16(r5)
	r19.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r11,r4,31
	r11.s64 = ctx.r4.s64 + 31;
	// subfic r29,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	r29.s64 = 31 - ctx.r10.s64;
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// addi r9,r3,31
	ctx.r9.s64 = ctx.r3.s64 + 31;
	// li r21,-1
	r21.s64 = -1;
	// rlwinm r7,r11,28,4,30
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFE;
	// rlwinm r14,r9,27,5,31
	r14.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x7FFFFFF;
	// stw r10,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, ctx.r10.u32);
	// cmplw cr6,r19,r8
	cr6.compare<uint32_t>(r19.u32, ctx.r8.u32, xer);
	// bge cr6,0x8248a04c
	if (!cr6.lt) goto loc_8248A04C;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
loc_82489F28:
	// clrlwi r9,r19,30
	ctx.r9.u64 = r19.u32 & 0x3;
	// lwz r31,4(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// addi r11,r29,6
	r11.s64 = r29.s64 + 6;
	// rlwinm r20,r19,30,2,31
	r20.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// mullw r16,r20,r7
	r16.s64 = int64_t(r20.s32) * int64_t(ctx.r7.s32);
	// slw r17,r9,r11
	r17.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// bge cr6,0x8248a040
	if (!cr6.lt) goto loc_8248A040;
	// lwz r15,0(r5)
	r15.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r18,8(r5)
	r18.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
loc_82489F50:
	// rlwinm r11,r31,29,3,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// add r11,r11,r20
	r11.u64 = r11.u64 + r20.u64;
	// add r6,r9,r16
	ctx.r6.u64 = ctx.r9.u64 + r16.u64;
	// clrldi r11,r11,63
	r11.u64 = r11.u64 & 0x1;
	// mr r10,r15
	ctx.r10.u64 = r15.u64;
	// rlwinm r9,r31,4,27,27
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0x10;
	// mullw r28,r6,r14
	r28.s64 = int64_t(ctx.r6.s32) * int64_t(r14.s32);
	// rlwinm r27,r31,2,27,28
	r27.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0x18;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
	// cmplw cr6,r10,r18
	cr6.compare<uint32_t>(ctx.r10.u32, r18.u32, xer);
	// rldicr r26,r11,11,52
	r26.u64 = __builtin_rotateleft64(r11.u64, 11) & 0xFFFFFFFFFFFFF800;
	// rldicr r25,r11,1,62
	r25.u64 = __builtin_rotateleft64(r11.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// bge cr6,0x8248a030
	if (!cr6.lt) goto loc_8248A030;
	// addi r11,r29,8
	r11.s64 = r29.s64 + 8;
	// clrldi r23,r9,32
	r23.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r24,r11,32
	r24.u64 = r11.u64 & 0xFFFFFFFF;
	// clrldi r22,r29,32
	r22.u64 = r29.u64 & 0xFFFFFFFF;
	// clrldi r30,r10,32
	r30.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_82489F9C:
	// rlwinm r11,r10,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r10,29
	ctx.r9.u64 = ctx.r10.u32 & 0x7;
	// add r6,r11,r28
	ctx.r6.u64 = r11.u64 + r28.u64;
	// rldicl r11,r30,61,3
	r11.u64 = __builtin_rotateleft64(r30.u64, 61) & 0x1FFFFFFFFFFFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// rlwinm r6,r11,6,24,25
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xC0;
	// slw r11,r9,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// rlwinm r3,r11,1,0,26
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFE0;
	// clrldi r9,r11,60
	ctx.r9.u64 = r11.u64 & 0xF;
	// sld r4,r4,r24
	ctx.r4.u64 = r24.u8 & 0x40 ? 0 : (ctx.r4.u64 << (r24.u8 & 0x7F));
	// clrldi r11,r3,32
	r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// rldicr r4,r11,1,53
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 1) & 0xFFFFFFFFFFFFFC00;
	// rlwinm r3,r11,0,23,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1C0;
	// clrldi r9,r11,58
	ctx.r9.u64 = r11.u64 & 0x3F;
	// add r11,r4,r3
	r11.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rldicr r11,r11,2,61
	r11.u64 = __builtin_rotateleft64(r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// srd r11,r11,r22
	r11.u64 = r22.u8 & 0x40 ? 0 : (r11.u64 >> (r22.u8 & 0x7F));
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r11,r21
	cr6.compare<uint32_t>(r11.u32, r21.u32, xer);
	// bge cr6,0x8248a010
	if (!cr6.lt) goto loc_8248A010;
	// mr r21,r11
	r21.u64 = r11.u64;
loc_8248A010:
	// lwz r9,-160(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x8248a020
	if (!cr6.gt) goto loc_8248A020;
	// stw r11,-160(r1)
	PPC_STORE_U32(ctx.r1.u32 + -160, r11.u32);
loc_8248A020:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r10,r18
	cr6.compare<uint32_t>(ctx.r10.u32, r18.u32, xer);
	// blt cr6,0x82489f9c
	if (cr6.lt) goto loc_82489F9C;
loc_8248A030:
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x82489f50
	if (cr6.lt) goto loc_82489F50;
loc_8248A040:
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// cmplw cr6,r19,r8
	cr6.compare<uint32_t>(r19.u32, ctx.r8.u32, xer);
	// blt cr6,0x82489f28
	if (cr6.lt) goto loc_82489F28;
loc_8248A04C:
	// lwz r11,52(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r10,60(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 60);
	// stw r21,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r21.u32);
	// lwz r11,-160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -160);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8248A064"))) PPC_WEAK_FUNC(sub_8248A064);
PPC_FUNC_IMPL(__imp__sub_8248A064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248A068"))) PPC_WEAK_FUNC(sub_8248A068);
PPC_FUNC_IMPL(__imp__sub_8248A068) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8248a0a0
	if (cr6.eq) goto loc_8248A0A0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_8248A0A0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8248a0b0
	if (cr6.eq) goto loc_8248A0B0;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8248A0B0:
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

__attribute__((alias("__imp__sub_8248A0C8"))) PPC_WEAK_FUNC(sub_8248A0C8);
PPC_FUNC_IMPL(__imp__sub_8248A0C8) {
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
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stw r6,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r6.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r7,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r7.u32);
	// stw r8,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r8.u32);
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r24,532(r1)
	PPC_STORE_U32(ctx.r1.u32 + 532, r24.u32);
	// beq cr6,0x8248a104
	if (cr6.eq) goto loc_8248A104;
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_8248A104:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8248a118
	if (cr6.eq) goto loc_8248A118;
	// lwz r11,48(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_8248A118:
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x8248a130
	if (cr6.eq) goto loc_8248A130;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// b 0x8248a134
	goto loc_8248A134;
loc_8248A130:
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r20.u32);
loc_8248A134:
	// lwz r11,604(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248a14c
	if (cr6.eq) goto loc_8248A14C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// b 0x8248a150
	goto loc_8248A150;
loc_8248A14C:
	// stw r20,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r20.u32);
loc_8248A150:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// li r16,1
	r16.s64 = 1;
	// lwz r10,48(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// rlwinm r11,r11,26,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// addi r18,r11,1
	r18.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,1536
	cr6.compare<uint32_t>(ctx.r10.u32, 1536, xer);
	// stw r18,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r18.u32);
	// beq cr6,0x8248a188
	if (cr6.eq) goto loc_8248A188;
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8248a188
	if (!cr0.eq) goto loc_8248A188;
	// stw r16,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r16.u32);
	// b 0x8248a198
	goto loc_8248A198;
loc_8248A188:
	// lwz r11,36(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// rlwinm r11,r11,6,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, r11.u32);
loc_8248A198:
	// addi r31,r24,28
	r31.s64 = r24.s64 + 28;
	// addi r6,r1,228
	ctx.r6.s64 = ctx.r1.s64 + 228;
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823bb820
	sub_823BB820(ctx, base);
	// lwz r11,48(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 48);
	// lwz r10,32(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// rlwinm r21,r11,23,30,31
	r21.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x3;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r17,r10,26
	r17.u64 = ctx.r10.u32 & 0x3F;
	// lwz r30,40(r24)
	r30.u64 = PPC_LOAD_U32(r24.u32 + 40);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r17
	ctx.r3.u64 = r17.u64;
	// rlwinm r14,r31,1,31,31
	r14.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0x1;
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r21.u32);
	// rlwinm r23,r30,1,31,31
	r23.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0x1;
	// rlwinm r29,r11,21,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r28,152(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r10,r17,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r17.u32 | (r17.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r27,148(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addi r11,r11,-20568
	r11.s64 = r11.s64 + -20568;
	// rlwinm r22,r23,1,0,30
	r22.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbzx r19,r10,r11
	r19.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// lwz r11,164(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mullw r11,r19,r11
	r11.s64 = int64_t(r19.s32) * int64_t(r11.s32);
	// stw r19,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, r19.u32);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// subf r11,r22,r28
	r11.s64 = r28.s64 - r22.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r23
	r11.s64 = r23.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// slw r11,r16,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r16.u32 << (r11.u8 & 0x3F));
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// ble cr6,0x8248a264
	if (!cr6.gt) goto loc_8248A264;
	// subf r11,r22,r27
	r11.s64 = r27.s64 - r22.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r11,r23
	r11.s64 = r23.s64 - r11.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// slw r11,r16,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r16.u32 << (r11.u8 & 0x3F));
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bgt cr6,0x8248a270
	if (cr6.gt) goto loc_8248A270;
loc_8248A264:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r16,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r16.u32);
	// bne cr6,0x8248a274
	if (!cr6.eq) goto loc_8248A274;
loc_8248A270:
	// stw r20,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r20.u32);
loc_8248A274:
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,336(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, r11.u32);
	// lwz r11,352(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r11.u32);
	// beq cr6,0x8248a340
	if (cr6.eq) goto loc_8248A340;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8248a340
	if (cr6.eq) goto loc_8248A340;
	// rlwinm r10,r30,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0xFFFFE000;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// rlwinm r11,r31,10,23,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 10) & 0x1FF;
	// srawi r8,r10,26
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3FFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 26;
	// mullw r11,r11,r19
	r11.s64 = int64_t(r11.s32) * int64_t(r19.s32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// rlwinm r11,r11,2,3,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1FFFFFFC;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bl 0x823bbb30
	sub_823BBB30(ctx, base);
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// rlwinm. r11,r11,0,26,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3C;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8248a328
	if (cr0.eq) goto loc_8248A328;
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8248a328
	if (!cr6.eq) goto loc_8248A328;
	// stw r20,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r20.u32);
	// b 0x8248a330
	goto loc_8248A330;
loc_8248A328:
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_8248A330:
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r27,148(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,152(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_8248A340:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8248a3d4
	if (cr6.eq) goto loc_8248A3D4;
	// subf r10,r22,r28
	ctx.r10.s64 = r28.s64 - r22.s64;
	// subf r11,r22,r27
	r11.s64 = r27.s64 - r22.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r10,r23
	r11.s64 = r23.s64 - ctx.r10.s64;
	// subf r10,r9,r23
	ctx.r10.s64 = r23.s64 - ctx.r9.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8248a37c
	if (cr6.lt) goto loc_8248A37C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8248A37C:
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bgt 0x8248a388
	if (cr0.gt) goto loc_8248A388;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8248A388:
	// cmplw cr6,r11,r18
	cr6.compare<uint32_t>(r11.u32, r18.u32, xer);
	// bge cr6,0x8248a3d4
	if (!cr6.lt) goto loc_8248A3D4;
	// subf r10,r22,r28
	ctx.r10.s64 = r28.s64 - r22.s64;
	// subf r11,r22,r27
	r11.s64 = r27.s64 - r22.s64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subf r11,r10,r23
	r11.s64 = r23.s64 - ctx.r10.s64;
	// subf r10,r9,r23
	ctx.r10.s64 = r23.s64 - ctx.r9.s64;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x8248a3c4
	if (cr6.lt) goto loc_8248A3C4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8248A3C4:
	// addic. r11,r11,-4
	xer.ca = r11.u32 > 3;
	r11.s64 = r11.s64 + -4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r18,r11
	r18.u64 = r11.u64;
	// bgt 0x8248a3d4
	if (cr0.gt) goto loc_8248A3D4;
	// mr r18,r20
	r18.u64 = r20.u64;
loc_8248A3D4:
	// addi r9,r1,212
	ctx.r9.s64 = ctx.r1.s64 + 212;
	// addi r11,r1,556
	r11.s64 = ctx.r1.s64 + 556;
	// addi r10,r1,564
	ctx.r10.s64 = ctx.r1.s64 + 564;
	// addi r19,r1,572
	r19.s64 = ctx.r1.s64 + 572;
	// stw r9,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r9.u32);
	// mr r9,r20
	ctx.r9.u64 = r20.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
loc_8248A3F0:
	// lwz r16,0(r11)
	r16.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r16,0
	cr0.compare<uint32_t>(r16.u32, 0, xer);
	// beq 0x8248a9bc
	if (cr0.eq) goto loc_8248A9BC;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, r11.u32);
	// beq 0x8248a9bc
	if (cr0.eq) goto loc_8248A9BC;
	// mr r15,r20
	r15.u64 = r20.u64;
	// mr r21,r20
	r21.u64 = r20.u64;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8248a43c
	if (cr6.eq) goto loc_8248A43C;
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8248a9a0
	if (!cr6.eq) goto loc_8248A9A0;
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// ble cr6,0x8248a9a0
	if (!cr6.gt) goto loc_8248A9A0;
	// lwz r24,532(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8248A43C:
	// lwz r11,44(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 44);
	// rlwinm r11,r11,30,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0xF;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// mr r24,r11
	r24.u64 = r11.u64;
	// bgt cr6,0x8248a454
	if (cr6.gt) goto loc_8248A454;
	// lwz r24,136(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_8248A454:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8248a46c
	if (cr6.eq) goto loc_8248A46C;
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8248a614
	if (!cr6.eq) goto loc_8248A614;
loc_8248A46C:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// li r25,1
	r25.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248a480
	if (cr6.eq) goto loc_8248A480;
	// mr r25,r18
	r25.u64 = r18.u64;
loc_8248A480:
	// cmplw cr6,r24,r25
	cr6.compare<uint32_t>(r24.u32, r25.u32, xer);
	// bge cr6,0x8248a614
	if (!cr6.lt) goto loc_8248A614;
loc_8248A488:
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248a600
	if (cr6.eq) goto loc_8248A600;
	// rlwinm r11,r20,3,0,28
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r30,0(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// add r27,r11,r16
	r27.u64 = r11.u64 + r16.u64;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// not r29,r11
	r29.u64 = ~r11.u64;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// not r28,r11
	r28.u64 = ~r11.u64;
loc_8248A4B4:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,188
	r11.s64 = ctx.r1.s64 + 188;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823bc5c0
	sub_823BC5C0(ctx, base);
	// lwz r31,188(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// beq cr6,0x8248a54c
	if (cr6.eq) goto loc_8248A54C;
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,184(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// twllei r10,0
	// divwu r3,r11,r10
	ctx.r3.u32 = r11.u32 / ctx.r10.u32;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// divwu r4,r11,r10
	ctx.r4.u32 = r11.u32 / ctx.r10.u32;
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// twllei r10,0
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8248a534
	if (cr6.eq) goto loc_8248A534;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// bl 0x8248b538
	sub_8248B538(ctx, base);
	// b 0x8248a540
	goto loc_8248A540;
loc_8248A534:
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x8248bee0
	sub_8248BEE0(ctx, base);
loc_8248A540:
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r11,r3,1
	r11.s64 = ctx.r3.s64 + 1;
	// b 0x8248a5a0
	goto loc_8248A5A0;
loc_8248A54C:
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x8248a578
	if (cr6.eq) goto loc_8248A578;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r11,r11,r10
	r11.u64 = r11.u64 & ~ctx.r10.u64;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// b 0x8248a5a0
	goto loc_8248A5A0;
loc_8248A578:
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r11,r10,r11
	r11.u64 = ctx.r10.u64 & ~r11.u64;
	// lwz r10,200(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_8248A5A0:
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// and r10,r29,r31
	ctx.r10.u64 = r29.u64 & r31.u64;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// cmplw cr6,r21,r10
	cr6.compare<uint32_t>(r21.u32, ctx.r10.u32, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	// bge cr6,0x8248a5ec
	if (!cr6.lt) goto loc_8248A5EC;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8248a5e8
	if (cr6.eq) goto loc_8248A5E8;
	// lwz r9,168(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r20,r9
	cr6.compare<uint32_t>(r20.u32, ctx.r9.u32, xer);
	// bge cr6,0x8248a5e0
	if (!cr6.lt) goto loc_8248A5E0;
	// stw r15,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r15.u32);
	// stw r21,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r21.u32);
loc_8248A5E0:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
loc_8248A5E8:
	// mr r15,r10
	r15.u64 = ctx.r10.u64;
loc_8248A5EC:
	// mr r21,r11
	r21.u64 = r11.u64;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x8248a4b4
	if (cr6.lt) goto loc_8248A4B4;
loc_8248A600:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r25
	cr6.compare<uint32_t>(r24.u32, r25.u32, xer);
	// blt cr6,0x8248a488
	if (cr6.lt) goto loc_8248A488;
	// lwz r27,148(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,152(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_8248A614:
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8248a62c
	if (cr6.eq) goto loc_8248A62C;
	// lwz r11,156(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8248a974
	if (cr6.eq) goto loc_8248A974;
loc_8248A62C:
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bge cr6,0x8248a974
	if (!cr6.lt) goto loc_8248A974;
	// subf r9,r22,r28
	ctx.r9.s64 = r28.s64 - r22.s64;
	// lwz r8,160(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// subf r10,r22,r27
	ctx.r10.s64 = r27.s64 - r22.s64;
	// lwz r6,248(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r31,r9
	r31.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subf r11,r18,r23
	r11.s64 = r23.s64 - r18.s64;
	// cntlzw r30,r10
	r30.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// li r26,1
	r26.s64 = 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// mr r9,r14
	ctx.r9.u64 = r14.u64;
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r26.u32);
	// addi r4,r1,172
	ctx.r4.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// li r25,-1
	r25.s64 = -1;
	// li r27,0
	r27.s64 = 0;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r10.u8 & 0x3F));
	// slw r11,r26,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r26.u32 << (r11.u8 & 0x3F));
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, r11.u32);
	// bl 0x823bba10
	sub_823BBA10(ctx, base);
	// lwz r10,164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lwz r11,180(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// twllei r10,0
	// divwu r29,r11,r10
	r29.u32 = r11.u32 / ctx.r10.u32;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,172(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// twllei r10,0
	// divwu r28,r11,r10
	r28.u32 = r11.u32 / ctx.r10.u32;
loc_8248A6C4:
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// subf r11,r22,r3
	r11.s64 = ctx.r3.s64 - r22.s64;
	// srw r11,r11,r24
	r11.u64 = r24.u8 & 0x20 ? 0 : (r11.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x8248a6dc
	if (cr6.gt) goto loc_8248A6DC;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8248A6DC:
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// add r10,r11,r22
	ctx.r10.u64 = r11.u64 + r22.u64;
	// subf r9,r22,r4
	ctx.r9.s64 = ctx.r4.s64 - r22.s64;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// srw r11,r9,r24
	r11.u64 = r24.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x8248a6fc
	if (cr6.gt) goto loc_8248A6FC;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8248A6FC:
	// add r9,r11,r22
	ctx.r9.u64 = r11.u64 + r22.u64;
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// bne cr6,0x8248a734
	if (!cr6.eq) goto loc_8248A734;
	// subf r11,r22,r5
	r11.s64 = ctx.r5.s64 - r22.s64;
	// srw r11,r11,r24
	r11.u64 = r24.u8 & 0x20 ? 0 : (r11.u32 >> (r24.u8 & 0x3F));
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x8248a728
	if (cr6.gt) goto loc_8248A728;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8248A728:
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// b 0x8248a738
	goto loc_8248A738;
loc_8248A734:
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r26.u32);
loc_8248A738:
	// lwz r31,164(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// mr r8,r14
	ctx.r8.u64 = r14.u64;
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r7,r17
	ctx.r7.u64 = r17.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// addi r30,r10,-1
	r30.s64 = ctx.r10.s64 + -1;
	// twllei r31,0
	// divwu r31,r30,r31
	r31.u32 = r30.u32 / r31.u32;
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// twllei r30,0
	// divwu r30,r11,r30
	r30.u32 = r11.u32 / r30.u32;
	// bl 0x82489c20
	sub_82489C20(ctx, base);
	// cmplwi cr6,r14,0
	cr6.compare<uint32_t>(r14.u32, 0, xer);
	// beq cr6,0x8248a814
	if (cr6.eq) goto loc_8248A814;
	// lwz r11,160(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r10,220(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// beq cr6,0x8248a7cc
	if (cr6.eq) goto loc_8248A7CC;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r11.u32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r7,r1,196
	ctx.r7.s64 = ctx.r1.s64 + 196;
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stw r10,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r10.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r11.u32);
	// add r11,r10,r30
	r11.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r11.u32);
	// bl 0x82489dd0
	sub_82489DD0(ctx, base);
	// b 0x8248a864
	goto loc_8248A864;
loc_8248A7CC:
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, r11.u32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r10.u32);
	// addi r8,r1,196
	ctx.r8.s64 = ctx.r1.s64 + 196;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// lwz r6,140(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, r11.u32);
	// add r11,r10,r30
	r11.u64 = ctx.r10.u64 + r30.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r11,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r11.u32);
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, r11.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, r11.u32);
	// bl 0x82489ee0
	sub_82489EE0(ctx, base);
	// b 0x8248a864
	goto loc_8248A864;
loc_8248A814:
	// lwz r11,224(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// lwz r11,220(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + r11.u64;
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(r28.s32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mullw r9,r8,r29
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(r29.s32);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// lwz r11,216(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(r29.s32);
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
loc_8248A864:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bge cr6,0x8248a874
	if (!cr6.lt) goto loc_8248A874;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_8248A874:
	// lwz r11,196(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// ble cr6,0x8248a884
	if (!cr6.gt) goto loc_8248A884;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_8248A884:
	// lwz r11,204(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x8248a6c4
	if (cr6.lt) goto loc_8248A6C4;
	// lwz r24,176(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x8248a974
	if (cr6.eq) goto loc_8248A974;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm r11,r20,3,0,28
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r31,0(r19)
	r31.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r9,r27,1
	ctx.r9.s64 = r27.s64 + 1;
	// mullw r29,r25,r10
	r29.s64 = int64_t(r25.s32) * int64_t(ctx.r10.s32);
	// add r25,r11,r16
	r25.u64 = r11.u64 + r16.u64;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// mullw r30,r9,r10
	r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// not r28,r11
	r28.u64 = ~r11.u64;
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// not r27,r11
	r27.u64 = ~r11.u64;
loc_8248A8D0:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,188
	r11.s64 = ctx.r1.s64 + 188;
	// addi r10,r1,184
	ctx.r10.s64 = ctx.r1.s64 + 184;
	// addi r9,r1,232
	ctx.r9.s64 = ctx.r1.s64 + 232;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r8,r1,244
	ctx.r8.s64 = ctx.r1.s64 + 244;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r6,r1,200
	ctx.r6.s64 = ctx.r1.s64 + 200;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x823bc5c0
	sub_823BC5C0(ctx, base);
	// lwz r10,232(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r11,188(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// and r9,r11,r28
	ctx.r9.u64 = r11.u64 & r28.u64;
	// add r11,r31,r10
	r11.u64 = r31.u64 + ctx.r10.u64;
	// cmplw cr6,r21,r9
	cr6.compare<uint32_t>(r21.u32, ctx.r9.u32, xer);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r27
	r11.u64 = r11.u64 & r27.u64;
	// bge cr6,0x8248a964
	if (!cr6.lt) goto loc_8248A964;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8248a960
	if (cr6.eq) goto loc_8248A960;
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r20,r10
	cr6.compare<uint32_t>(r20.u32, ctx.r10.u32, xer);
	// bge cr6,0x8248a958
	if (!cr6.lt) goto loc_8248A958;
	// stw r15,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r15.u32);
	// stw r21,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r21.u32);
loc_8248A958:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r25,r25,8
	r25.s64 = r25.s64 + 8;
loc_8248A960:
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
loc_8248A964:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// mr r21,r11
	r21.u64 = r11.u64;
	// cmplw cr6,r26,r24
	cr6.compare<uint32_t>(r26.u32, r24.u32, xer);
	// blt cr6,0x8248a8d0
	if (cr6.lt) goto loc_8248A8D0;
loc_8248A974:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x8248a9a0
	if (cr6.eq) goto loc_8248A9A0;
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// bge cr6,0x8248a99c
	if (!cr6.lt) goto loc_8248A99C;
	// rlwinm r11,r20,3,0,28
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r16
	r11.u64 = r11.u64 + r16.u64;
	// stw r15,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r15.u32);
	// stw r21,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r21.u32);
loc_8248A99C:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
loc_8248A9A0:
	// lwz r11,236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lwz r24,532(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// li r20,0
	r20.s64 = 0;
	// lwz r27,148(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r28,152(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
loc_8248A9BC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r11,r1,596
	r11.s64 = ctx.r1.s64 + 596;
	// addi r10,r1,604
	ctx.r10.s64 = ctx.r1.s64 + 604;
	// addi r19,r1,612
	r19.s64 = ctx.r1.s64 + 612;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// blt cr6,0x8248a3f0
	if (cr6.lt) goto loc_8248A3F0;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8248A9E8"))) PPC_WEAK_FUNC(sub_8248A9E8);
PPC_FUNC_IMPL(__imp__sub_8248A9E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// rlwinm r10,r4,2,27,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r8,r4,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r5,31
	ctx.r10.s64 = ctx.r5.s64 + 31;
	// rlwinm r9,r3,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r10,r10,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// cntlzw r11,r6
	r11.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r4,1,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFF0;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r4,4,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x100;
	// rlwinm r8,r10,3,24,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xC0;
	// rlwinm r30,r4,0,28,28
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x8;
	// rlwinm r31,r4,3,28,28
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8;
	// addi r4,r11,3
	ctx.r4.s64 = r11.s64 + 3;
	// slw r10,r7,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (r11.u8 & 0x3F));
	// addi r7,r11,7
	ctx.r7.s64 = r11.s64 + 7;
	// slw r5,r6,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r7.u8 & 0x3F));
	// slw r6,r30,r4
	ctx.r6.u64 = ctx.r4.u8 & 0x20 ? 0 : (r30.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r4,r10,0,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// add r10,r31,r4
	ctx.r10.u64 = r31.u64 + ctx.r4.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r6,r10,0,0,22
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// rlwinm r7,r10,0,23,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C0;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srw r3,r10,r11
	ctx.r3.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (r11.u8 & 0x3F));
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248AA98"))) PPC_WEAK_FUNC(sub_8248AA98);
PPC_FUNC_IMPL(__imp__sub_8248AA98) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// clrlwi. r9,r11,30
	ctx.r9.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// b 0x8248aad0
	goto loc_8248AAD0;
loc_8248AAB0:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x8248aae0
	if (cr6.lt) goto loc_8248AAE0;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi. r8,r11,30
	ctx.r8.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
loc_8248AAD0:
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, r11.u32);
	// stw r10,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// bne 0x8248aab0
	if (!cr0.eq) goto loc_8248AAB0;
loc_8248AAE0:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8248ab18
	if (cr0.eq) goto loc_8248AB18;
loc_8248AAE8:
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// blt cr6,0x8248ab18
	if (cr6.lt) goto loc_8248AB18;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, r11.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r10,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// clrlwi. r8,r11,29
	ctx.r8.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8248aae8
	if (!cr0.eq) goto loc_8248AAE8;
loc_8248AB18:
	// clrlwi. r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8248ab94
	if (cr0.eq) goto loc_8248AB94;
loc_8248AB20:
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// blt cr6,0x8248ab94
	if (cr6.lt) goto loc_8248AB94;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, r11.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r10,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// clrlwi. r8,r11,28
	ctx.r8.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8248ab20
	if (!cr0.eq) goto loc_8248AB20;
	// b 0x8248ab94
	goto loc_8248AB94;
loc_8248AB54:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// blt cr6,0x8248acc4
	if (cr6.lt) goto loc_8248ACC4;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	r11.s64 = 16;
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lwz r11,-240(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// lwz r11,-236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// addi r5,r8,-16
	ctx.r5.s64 = ctx.r8.s64 + -16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r10,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, r11.u32);
loc_8248AB94:
	// addi r9,r10,15
	ctx.r9.s64 = ctx.r10.s64 + 15;
	// clrlwi r9,r9,25
	ctx.r9.u64 = ctx.r9.u32 & 0x7F;
	// cmplwi cr6,r9,16
	cr6.compare<uint32_t>(ctx.r9.u32, 16, xer);
	// bge cr6,0x8248ab54
	if (!cr6.lt) goto loc_8248AB54;
	// b 0x8248acc4
	goto loc_8248ACC4;
loc_8248ABA8:
	// li r11,15
	r11.s64 = 15;
	// dcbzl r11,r10
	memset(base + ((r11.u32 + ctx.r10.u32) & ~127), 0, 128);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stw r11,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, r11.u32);
	// lwz r11,-236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
loc_8248ABC0:
	// li r6,16
	ctx.r6.s64 = 16;
	// lvlx v0,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,-224
	r29.s64 = ctx.r1.s64 + -224;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r8,r11,32
	ctx.r8.s64 = r11.s64 + 32;
	// lvrx v13,r11,r6
	temp.u32 = r11.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r4,16
	ctx.r4.s64 = 16;
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// addi r7,r11,48
	ctx.r7.s64 = r11.s64 + 48;
	// li r3,16
	ctx.r3.s64 = 16;
	// li r11,16
	r11.s64 = 16;
	// li r31,16
	r31.s64 = 16;
	// stvx v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvrx v13,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r30,16
	r30.s64 = 16;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvx v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// lvrx v13,r8,r4
	temp.u32 = ctx.r8.u32 + ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvx v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v13,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvx v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx v12,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// addi r9,r1,-224
	ctx.r9.s64 = ctx.r1.s64 + -224;
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx v0,0,r11
	ea = r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r6
	ea = r11.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r9,r1,-192
	ctx.r9.s64 = ctx.r1.s64 + -192;
	// addi r11,r10,32
	r11.s64 = ctx.r10.s64 + 32;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx v0,0,r11
	ea = r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r31
	ea = r11.u32 + r31.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r9,r1,-176
	ctx.r9.s64 = ctx.r1.s64 + -176;
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// lvx128 v0,r0,r9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvlx v0,0,r11
	ea = r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r30
	ea = r11.u32 + r30.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lwz r11,-232(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// lwz r8,36(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// lwz r11,-236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// addi r5,r8,-64
	ctx.r5.s64 = ctx.r8.s64 + -64;
	// stw r10,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// cmplwi cr6,r9,2
	cr6.compare<uint32_t>(ctx.r9.u32, 2, xer);
	// stw r9,-232(r1)
	PPC_STORE_U32(ctx.r1.u32 + -232, ctx.r9.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, r11.u32);
	// blt cr6,0x8248abc0
	if (cr6.lt) goto loc_8248ABC0;
loc_8248ACC4:
	// cmplwi cr6,r5,143
	cr6.compare<uint32_t>(ctx.r5.u32, 143, xer);
	// bge cr6,0x8248aba8
	if (!cr6.lt) goto loc_8248ABA8;
	// b 0x8248ad08
	goto loc_8248AD08;
loc_8248ACD0:
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,16
	r11.s64 = 16;
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// stvrx v0,r10,r11
	ea = ctx.r10.u32 + r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lwz r11,36(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r10,-240(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// addi r5,r11,-16
	ctx.r5.s64 = r11.s64 + -16;
	// lwz r11,-236(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r10,-240(r1)
	PPC_STORE_U32(ctx.r1.u32 + -240, ctx.r10.u32);
	// stw r11,-236(r1)
	PPC_STORE_U32(ctx.r1.u32 + -236, r11.u32);
loc_8248AD08:
	// cmplwi cr6,r5,16
	cr6.compare<uint32_t>(ctx.r5.u32, 16, xer);
	// bge cr6,0x8248acd0
	if (!cr6.lt) goto loc_8248ACD0;
	// clrlwi. r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8248ad3c
	if (cr0.eq) goto loc_8248AD3C;
loc_8248AD18:
	// cmplwi cr6,r5,8
	cr6.compare<uint32_t>(ctx.r5.u32, 8, xer);
	// blt cr6,0x8248ad3c
	if (cr6.lt) goto loc_8248AD3C;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// addi r5,r5,-8
	ctx.r5.s64 = ctx.r5.s64 + -8;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// clrlwi. r8,r11,28
	ctx.r8.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8248ad18
	if (!cr0.eq) goto loc_8248AD18;
loc_8248AD3C:
	// clrlwi. r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8248ad68
	if (cr0.eq) goto loc_8248AD68;
loc_8248AD44:
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// blt cr6,0x8248ad68
	if (cr6.lt) goto loc_8248AD68;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// clrlwi. r8,r11,29
	ctx.r8.u64 = r11.u32 & 0x7;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8248ad44
	if (!cr0.eq) goto loc_8248AD44;
loc_8248AD68:
	// clrlwi. r9,r11,30
	ctx.r9.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8248ad94
	if (cr0.eq) goto loc_8248AD94;
loc_8248AD70:
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x8248ad94
	if (cr6.lt) goto loc_8248AD94;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// clrlwi. r8,r11,30
	ctx.r8.u64 = r11.u32 & 0x3;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x8248ad70
	if (!cr0.eq) goto loc_8248AD70;
loc_8248AD94:
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8248AD98"))) PPC_WEAK_FUNC(sub_8248AD98);
PPC_FUNC_IMPL(__imp__sub_8248AD98) {
	PPC_FUNC_PROLOGUE();
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
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r8,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r8.u32);
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// stw r28,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r28.u32);
	// li r14,0
	r14.s64 = 0;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x8248ade0
	if (!cr6.eq) goto loc_8248ADE0;
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r14.u32);
	// addi r21,r1,112
	r21.s64 = ctx.r1.s64 + 112;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
loc_8248ADE0:
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r9,12(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 12);
	// subf r17,r10,r11
	r17.s64 = r11.s64 - ctx.r10.s64;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// subf r26,r11,r9
	r26.s64 = ctx.r9.s64 - r11.s64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r26.u32);
	// bne cr6,0x8248ae14
	if (!cr6.eq) goto loc_8248AE14;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// addi r20,r1,104
	r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r14.u32);
loc_8248AE14:
	// addi r11,r4,31
	r11.s64 = ctx.r4.s64 + 31;
	// cmplw cr6,r28,r18
	cr6.compare<uint32_t>(r28.u32, r18.u32, xer);
	// rlwinm r27,r11,0,0,26
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x8248ae5c
	if (!cr6.eq) goto loc_8248AE5C;
	// addi r11,r5,31
	r11.s64 = ctx.r5.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// mullw r11,r11,r31
	r11.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x8248aa98
	sub_8248AA98(ctx, base);
	// b 0x8248ae60
	goto loc_8248AE60;
loc_8248AE5C:
	// mr r19,r28
	r19.u64 = r28.u64;
loc_8248AE60:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r31,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r9,r11,r17
	ctx.r9.u64 = r11.u64 + r17.u64;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r30,r29,6
	r30.s64 = r29.s64 + 6;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// subf r15,r11,r8
	r15.s64 = ctx.r8.s64 - r11.s64;
	// subf r16,r11,r10
	r16.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r15,r17
	cr6.compare<uint32_t>(r15.u32, r17.u32, xer);
	// mr r11,r17
	r11.u64 = r17.u64;
	// bgt cr6,0x8248aec0
	if (cr6.gt) goto loc_8248AEC0;
	// mr r11,r15
	r11.u64 = r15.u64;
loc_8248AEC0:
	// slw r11,r11,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 << (r29.u8 & 0x3F));
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x8248b14c
	if (cr6.eq) goto loc_8248B14C;
	// rlwinm r11,r27,27,5,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_8248AED8:
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// add r9,r14,r9
	ctx.r9.u64 = r14.u64 + ctx.r9.u64;
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// add r11,r14,r11
	r11.u64 = r14.u64 + r11.u64;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mullw r28,r9,r7
	r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r27,r11,2,27,28
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x18;
	// slw r7,r8,r29
	ctx.r7.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r29.u8 & 0x3F));
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r24,r11,28,31,31
	r24.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// rlwinm r26,r11,4,27,27
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x10;
	// rlwinm r11,r10,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r25,r6,r4
	r25.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// slw r23,r9,r30
	r23.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r22,r9,1,0,30
	r22.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r25
	ctx.r9.u64 = r11.u64 + r25.u64;
	// add r7,r7,r28
	ctx.r7.u64 = ctx.r7.u64 + r28.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r4,r7,r19
	ctx.r4.u64 = ctx.r7.u64 + r19.u64;
	// add r10,r10,r22
	ctx.r10.u64 = ctx.r10.u64 + r22.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// slw r11,r8,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r30.u8 & 0x3F));
	// rlwinm r11,r11,26,6,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r7,r11,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r8,r9,3
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// clrlwi r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// srawi r6,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r31,r15
	r31.u64 = r15.u64;
	// cmpw cr6,r15,r16
	cr6.compare<int32_t>(r15.s32, r16.s32, xer);
	// bge cr6,0x8248b084
	if (!cr6.lt) goto loc_8248B084;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	r17.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 << (r29.u8 & 0x3F));
loc_8248AFC8:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// slw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r29.u8 & 0x3F));
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + r19.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r11,r11,1,29,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x8;
	// slw r8,r10,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// srawi r6,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
	// cmpw cr6,r31,r16
	cr6.compare<int32_t>(r31.s32, r16.s32, xer);
	// blt cr6,0x8248afc8
	if (cr6.lt) goto loc_8248AFC8;
	// lwz r17,92(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8248B084:
	// cmplw cr6,r31,r17
	cr6.compare<uint32_t>(r31.u32, r17.u32, xer);
	// bge cr6,0x8248b138
	if (!cr6.lt) goto loc_8248B138;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// subf r9,r31,r17
	ctx.r9.s64 = r17.s64 - r31.s64;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// slw r5,r9,r29
	ctx.r5.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// slw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r29.u8 & 0x3F));
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + r27.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + r28.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + r19.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + r25.u64;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// rlwinm r11,r11,1,29,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	r11.u64 = r11.u64 + r24.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x8;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// srawi r6,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = r11.u64 + r18.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8248B138:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmplw cr6,r14,r11
	cr6.compare<uint32_t>(r14.u32, r11.u32, xer);
	// blt cr6,0x8248aed8
	if (cr6.lt) goto loc_8248AED8;
	// lwz r28,340(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_8248B14C:
	// cmplw cr6,r28,r18
	cr6.compare<uint32_t>(r28.u32, r18.u32, xer);
	// bne cr6,0x8248b160
	if (!cr6.eq) goto loc_8248B160;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_8248B160:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8248B168"))) PPC_WEAK_FUNC(sub_8248B168);
PPC_FUNC_IMPL(__imp__sub_8248B168) {
	PPC_FUNC_PROLOGUE();
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
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r4,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r4.u32);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// stw r27,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, r27.u32);
	// li r14,0
	r14.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x8248b1b0
	if (!cr6.eq) goto loc_8248B1B0;
	// stw r14,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r14.u32);
	// addi r28,r1,112
	r28.s64 = ctx.r1.s64 + 112;
	// stw r14,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r14.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
loc_8248B1B0:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// subf r17,r10,r11
	r17.s64 = r11.s64 - ctx.r10.s64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r25,r11,r9
	r25.s64 = ctx.r9.s64 - r11.s64;
	// stw r17,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r17.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r25.u32);
	// bne cr6,0x8248b1e4
	if (!cr6.eq) goto loc_8248B1E4;
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// addi r20,r1,104
	r20.s64 = ctx.r1.s64 + 104;
	// stw r14,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r14.u32);
loc_8248B1E4:
	// addi r11,r7,31
	r11.s64 = ctx.r7.s64 + 31;
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// rlwinm r26,r11,0,0,26
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x8248b22c
	if (!cr6.eq) goto loc_8248B22C;
	// addi r11,r8,31
	r11.s64 = ctx.r8.s64 + 31;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// mullw r11,r11,r26
	r11.s64 = int64_t(r11.s32) * int64_t(r26.s32);
	// mullw r11,r11,r31
	r11.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// bl 0x8248aa98
	sub_8248AA98(ctx, base);
	// b 0x8248b230
	goto loc_8248B230;
loc_8248B22C:
	// mr r19,r27
	r19.u64 = r27.u64;
loc_8248B230:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r6,r31,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// srw r9,r6,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r10.u8 & 0x3F));
	// add r29,r9,r10
	r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r9,r11,r17
	ctx.r9.u64 = r11.u64 + r17.u64;
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// addi r30,r29,6
	r30.s64 = r29.s64 + 6;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// subf r15,r11,r8
	r15.s64 = ctx.r8.s64 - r11.s64;
	// subf r16,r11,r10
	r16.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r15,r17
	cr6.compare<uint32_t>(r15.u32, r17.u32, xer);
	// mr r11,r17
	r11.u64 = r17.u64;
	// bgt cr6,0x8248b290
	if (cr6.gt) goto loc_8248B290;
	// mr r11,r15
	r11.u64 = r15.u64;
loc_8248B290:
	// slw r11,r11,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 << (r29.u8 & 0x3F));
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// beq cr6,0x8248b51c
	if (cr6.eq) goto loc_8248B51C;
	// rlwinm r11,r26,27,5,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_8248B2A8:
	// lwz r9,4(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r8,0(r20)
	ctx.r8.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// add r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 + r14.u64;
	// lwz r7,316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// add r11,r14,r11
	r11.u64 = r14.u64 + r11.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mullw r27,r9,r7
	r27.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r26,r11,2,27,28
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x18;
	// slw r7,r8,r29
	ctx.r7.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r29.u8 & 0x3F));
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// rlwinm r23,r11,28,31,31
	r23.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// rlwinm r25,r11,4,27,27
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0x10;
	// rlwinm r11,r10,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r24,r6,r4
	r24.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 + r26.u64;
	// slw r22,r9,r30
	r22.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r21,r9,1,0,30
	r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r24
	ctx.r9.u64 = r11.u64 + r24.u64;
	// add r7,r7,r27
	ctx.r7.u64 = ctx.r7.u64 + r27.u64;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// add r3,r7,r18
	ctx.r3.u64 = ctx.r7.u64 + r18.u64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + r21.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + r23.u64;
	// slw r11,r8,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r30.u8 & 0x3F));
	// rlwinm r11,r11,26,6,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x3FFFFFF;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r7,r11,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r8,r9,3
	ctx.r8.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// clrlwi r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	// add r11,r8,r7
	r11.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// srawi r6,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = r11.u64 + r19.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r31,r15
	r31.u64 = r15.u64;
	// cmpw cr6,r15,r16
	cr6.compare<int32_t>(r15.s32, r16.s32, xer);
	// bge cr6,0x8248b454
	if (!cr6.lt) goto loc_8248B454;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// slw r17,r11,r29
	r17.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 << (r29.u8 & 0x3F));
loc_8248B398:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// slw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r29.u8 & 0x3F));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + r18.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// rlwinm r11,r11,1,29,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x8;
	// slw r8,r10,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// srawi r6,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = r11.u64 + r19.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
	// cmpw cr6,r31,r16
	cr6.compare<int32_t>(r31.s32, r16.s32, xer);
	// blt cr6,0x8248b398
	if (cr6.lt) goto loc_8248B398;
	// lwz r17,92(r1)
	r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8248B454:
	// cmplw cr6,r31,r17
	cr6.compare<uint32_t>(r31.u32, r17.u32, xer);
	// bge cr6,0x8248b508
	if (!cr6.lt) goto loc_8248B508;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// subf r9,r31,r17
	ctx.r9.s64 = r17.s64 - r31.s64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// slw r5,r9,r29
	ctx.r5.u64 = r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r29.u8 & 0x3F));
	// clrlwi r9,r11,29
	ctx.r9.u64 = r11.u32 & 0x7;
	// slw r10,r10,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r29.u8 & 0x3F));
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + r26.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// add r3,r10,r18
	ctx.r3.u64 = ctx.r10.u64 + r18.u64;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r11,r11,29,3,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + r24.u64;
	// add r11,r11,r21
	r11.u64 = r11.u64 + r21.u64;
	// rlwinm r11,r11,1,29,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x6;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// rlwinm r7,r11,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x8;
	// slw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r30.u8 & 0x3F));
	// slw r8,r10,r30
	ctx.r8.u64 = r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r30.u8 & 0x3F));
	// rlwinm r10,r9,26,6,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// clrlwi r9,r8,3
	ctx.r9.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r8,r11,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r10,0,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r11,r11,r22
	r11.u64 = r11.u64 + r22.u64;
	// add r11,r11,r25
	r11.u64 = r11.u64 + r25.u64;
	// srawi r6,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	ctx.r6.s64 = r11.s32 >> 6;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// clrlwi r10,r11,26
	ctx.r10.u64 = r11.u32 & 0x3F;
	// clrlwi r11,r6,29
	r11.u64 = ctx.r6.u32 & 0x7;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = r11.u64 + r19.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8248B508:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r14,r14,1
	r14.s64 = r14.s64 + 1;
	// cmplw cr6,r14,r11
	cr6.compare<uint32_t>(r14.u32, r11.u32, xer);
	// blt cr6,0x8248b2a8
	if (cr6.lt) goto loc_8248B2A8;
	// lwz r27,332(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
loc_8248B51C:
	// cmplw cr6,r27,r18
	cr6.compare<uint32_t>(r27.u32, r18.u32, xer);
	// bne cr6,0x8248b530
	if (!cr6.eq) goto loc_8248B530;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_8248B530:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8248B538"))) PPC_WEAK_FUNC(sub_8248B538);
PPC_FUNC_IMPL(__imp__sub_8248B538) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// cntlzw r11,r27
	r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// subfic r9,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r9.s64 = 31 - r11.s64;
	// li r11,2
	r11.s64 = 2;
	// subfic r5,r9,7
	xer.ca = ctx.r9.u32 <= 7;
	ctx.r5.s64 = 7 - ctx.r9.s64;
	// addi r4,r29,-1
	ctx.r4.s64 = r29.s64 + -1;
	// li r10,8
	ctx.r10.s64 = 8;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// addi r31,r30,-1
	r31.s64 = r30.s64 + -1;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm r20,r31,0,0,26
	r20.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r24,0
	r24.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// slw r11,r7,r5
	r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r28,r4,r11
	r28.u64 = ctx.r4.u64 & ~r11.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// lwzx r31,r11,r6
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// lwzx r25,r11,r3
	r25.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// add r11,r31,r30
	r11.u64 = r31.u64 + r30.u64;
	// twllei r31,0
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// divwu r11,r11,r31
	r11.u32 = r11.u32 / r31.u32;
	// mullw r22,r11,r31
	r22.s64 = int64_t(r11.s32) * int64_t(r31.s32);
	// bge cr6,0x8248b63c
	if (!cr6.lt) goto loc_8248B63C;
	// add r11,r28,r25
	r11.u64 = r28.u64 + r25.u64;
	// addi r23,r11,-1
	r23.s64 = r11.s64 + -1;
loc_8248B5F0:
	// mr r26,r20
	r26.u64 = r20.u64;
	// cmplw cr6,r20,r30
	cr6.compare<uint32_t>(r20.u32, r30.u32, xer);
	// bge cr6,0x8248b62c
	if (!cr6.lt) goto loc_8248B62C;
	// addi r21,r31,-1
	r21.s64 = r31.s64 + -1;
loc_8248B600:
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// add r3,r21,r26
	ctx.r3.u64 = r21.u64 + r26.u64;
	// bl 0x8248a9e8
	sub_8248A9E8(ctx, base);
	// cmplw cr6,r24,r3
	cr6.compare<uint32_t>(r24.u32, ctx.r3.u32, xer);
	// bgt cr6,0x8248b620
	if (cr6.gt) goto loc_8248B620;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
loc_8248B620:
	// add r26,r26,r31
	r26.u64 = r26.u64 + r31.u64;
	// cmplw cr6,r26,r30
	cr6.compare<uint32_t>(r26.u32, r30.u32, xer);
	// blt cr6,0x8248b600
	if (cr6.lt) goto loc_8248B600;
loc_8248B62C:
	// add r28,r28,r25
	r28.u64 = r28.u64 + r25.u64;
	// add r23,r23,r25
	r23.u64 = r23.u64 + r25.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// blt cr6,0x8248b5f0
	if (cr6.lt) goto loc_8248B5F0;
loc_8248B63C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8248B648"))) PPC_WEAK_FUNC(sub_8248B648);
PPC_FUNC_IMPL(__imp__sub_8248B648) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// bl 0x8248a068
	sub_8248A068(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r9,r4
	ctx.r9.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r10,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r10.s64 = 31 - r11.s64;
	// subfic r6,r9,31
	xer.ca = ctx.r9.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r9.s64;
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// add r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r9,r9,992
	ctx.r9.s64 = ctx.r9.s64 + 992;
	// rlwinm r11,r22,0,30,30
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x2;
	// lbzx r8,r26,r9
	ctx.r8.u64 = PPC_LOAD_U8(r26.u32 + ctx.r9.u32);
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r19,r8,29,3,31
	r19.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x8248b730
	if (cr6.eq) goto loc_8248B730;
	// subf r8,r11,r29
	ctx.r8.s64 = r29.s64 - r11.s64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// slw r8,r3,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// sraw r8,r8,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r8.s64 = ctx.r8.s32 >> temp.u32;
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// bgt cr6,0x8248b6f4
	if (cr6.gt) goto loc_8248B6F4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8248B6F4:
	// subf r8,r11,r30
	ctx.r8.s64 = r30.s64 - r11.s64;
	// addi r28,r8,-1
	r28.s64 = ctx.r8.s64 + -1;
	// add r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 + ctx.r7.u64;
	// cntlzw r5,r28
	ctx.r5.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// srw r23,r8,r10
	r23.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// sraw r9,r9,r31
	temp.u32 = r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bgt cr6,0x8248b728
	if (cr6.gt) goto loc_8248B728;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8248B728:
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x8248b740
	goto loc_8248B740;
loc_8248B730:
	// add r8,r7,r29
	ctx.r8.u64 = ctx.r7.u64 + r29.u64;
	// add r9,r4,r30
	ctx.r9.u64 = ctx.r4.u64 + r30.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// srw r23,r8,r10
	r23.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
loc_8248B740:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// srw r24,r9,r6
	r24.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r6.u8 & 0x3F));
	// lwz r9,332(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8248b7ac
	if (cr6.eq) goto loc_8248B7AC;
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// sraw r7,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r7.s64 = ctx.r5.s32 >> temp.u32;
	// srw r11,r11,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// srw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// sraw r11,r9,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	r11.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// b 0x8248b804
	goto loc_8248B804;
loc_8248B7AC:
	// subf r9,r11,r29
	ctx.r9.s64 = r29.s64 - r11.s64;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// srw r9,r9,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r31.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x8248b7c8
	if (cr6.gt) goto loc_8248B7C8;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8248B7C8:
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// subf r8,r11,r30
	ctx.r8.s64 = r30.s64 - r11.s64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// srw r9,r8,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r31.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// srw r8,r7,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bgt cr6,0x8248b7f0
	if (cr6.gt) goto loc_8248B7F0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8248B7F0:
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srw r11,r11,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r6.u8 & 0x3F));
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
loc_8248B804:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8248b828
	if (cr6.eq) goto loc_8248B828;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r25,r1,88
	r25.s64 = ctx.r1.s64 + 88;
	// sraw r28,r11,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r11.s32 < 0) & (((r11.s32 >> temp.u32) << temp.u32) != r11.s32);
	r28.s64 = r11.s32 >> temp.u32;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// sraw r27,r9,r6
	temp.u32 = ctx.r6.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	r27.s64 = ctx.r9.s32 >> temp.u32;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
loc_8248B828:
	// clrlwi. r11,r22,31
	r11.u64 = r22.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8248b874
	if (!cr0.eq) goto loc_8248B874;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r22,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 31) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82489c20
	sub_82489C20(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// subf r21,r3,r21
	r21.s64 = r21.s64 - ctx.r3.s64;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// addi r25,r1,88
	r25.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_8248B874:
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8248ad98
	sub_8248AD98(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8248B8A0"))) PPC_WEAK_FUNC(sub_8248B8A0);
PPC_FUNC_IMPL(__imp__sub_8248B8A0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bccc
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r18,r9
	r18.u64 = ctx.r9.u64;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// bl 0x8248a068
	sub_8248A068(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32251
	ctx.r9.s64 = -2113601536;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// cntlzw r11,r7
	r11.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r9,r9,992
	ctx.r9.s64 = ctx.r9.s64 + 992;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// subfic r8,r10,31
	xer.ca = ctx.r10.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r10.s64;
	// rlwinm r10,r21,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0x2;
	// add r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 + r11.u64;
	// lbzx r6,r24,r9
	ctx.r6.u64 = PPC_LOAD_U8(r24.u32 + ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// slw r6,r6,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r17,r6,29,3,31
	r17.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x8248b988
	if (cr6.eq) goto loc_8248B988;
	// subf r6,r10,r25
	ctx.r6.s64 = r25.s64 - ctx.r10.s64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// subf r6,r6,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r6.s64;
	// addi r6,r6,32
	ctx.r6.s64 = ctx.r6.s64 + 32;
	// slw r6,r3,r6
	ctx.r6.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r6.u8 & 0x3F));
	// sraw r6,r6,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r6.s64 = ctx.r6.s32 >> temp.u32;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// bgt cr6,0x8248b94c
	if (cr6.gt) goto loc_8248B94C;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8248B94C:
	// subf r6,r10,r26
	ctx.r6.s64 = r26.s64 - ctx.r10.s64;
	// addi r31,r6,-1
	r31.s64 = ctx.r6.s64 + -1;
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// cntlzw r5,r31
	ctx.r5.u64 = r31.u32 == 0 ? 32 : __builtin_clz(r31.u32);
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// srw r22,r6,r11
	r22.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
	// slw r9,r3,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// sraw r9,r9,r30
	temp.u32 = r30.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// bgt cr6,0x8248b980
	if (cr6.gt) goto loc_8248B980;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8248B980:
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// b 0x8248b998
	goto loc_8248B998;
loc_8248B988:
	// add r6,r7,r25
	ctx.r6.u64 = ctx.r7.u64 + r25.u64;
	// add r9,r4,r26
	ctx.r9.u64 = ctx.r4.u64 + r26.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// srw r22,r6,r11
	r22.u64 = r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r11.u8 & 0x3F));
loc_8248B998:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// srw r23,r9,r8
	r23.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// beq cr6,0x8248b9c4
	if (cr6.eq) goto loc_8248B9C4;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lwz r6,4(r20)
	ctx.r6.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r20,r1,88
	r20.s64 = ctx.r1.s64 + 88;
	// sraw r9,r9,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r9.s64 = ctx.r9.s32 >> temp.u32;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// sraw r9,r6,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r9.s64 = ctx.r6.s32 >> temp.u32;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
loc_8248B9C4:
	// lwz r9,348(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8248ba10
	if (cr6.eq) goto loc_8248BA10;
	// lwz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r6,8(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r10,12(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// sraw r28,r5,r11
	temp.u32 = r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	r28.s64 = ctx.r5.s32 >> temp.u32;
	// srw r29,r7,r11
	r29.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// srw r31,r10,r8
	r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// sraw r27,r9,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	r27.s64 = ctx.r9.s32 >> temp.u32;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// b 0x8248ba6c
	goto loc_8248BA6C;
loc_8248BA10:
	// subf r9,r10,r25
	ctx.r9.s64 = r25.s64 - ctx.r10.s64;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r28.u32);
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r27.u32);
	// srw r9,r9,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (r30.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// bgt cr6,0x8248ba34
	if (cr6.gt) goto loc_8248BA34;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8248BA34:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r10,r26
	ctx.r6.s64 = r26.s64 - ctx.r10.s64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// srw r9,r6,r30
	ctx.r9.u64 = r30.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (r30.u8 & 0x3F));
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// srw r29,r7,r11
	r29.u64 = r11.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (r11.u8 & 0x3F));
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// bgt cr6,0x8248ba5c
	if (cr6.gt) goto loc_8248BA5C;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_8248BA5C:
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srw r31,r11,r8
	r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (r11.u32 >> (ctx.r8.u8 & 0x3F));
loc_8248BA6C:
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r31.u32);
	// clrlwi. r11,r21,31
	r11.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8248bad0
	if (!cr0.eq) goto loc_8248BAD0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r21,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 31) & 0x1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82489c20
	sub_82489C20(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r6,r3,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r3.s64;
	// add r10,r11,r27
	ctx.r10.u64 = r11.u64 + r27.u64;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// b 0x8248bad4
	goto loc_8248BAD4;
loc_8248BAD0:
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
loc_8248BAD4:
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8248b168
	sub_8248B168(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_8248BAFC"))) PPC_WEAK_FUNC(sub_8248BAFC);
PPC_FUNC_IMPL(__imp__sub_8248BAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BB00"))) PPC_WEAK_FUNC(sub_8248BB00);
PPC_FUNC_IMPL(__imp__sub_8248BB00) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// clrlwi r3,r29,26
	ctx.r3.u64 = r29.u32 & 0x3F;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// bl 0x823bb8f0
	sub_823BB8F0(ctx, base);
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// beq cr6,0x8248bb90
	if (cr6.eq) goto loc_8248BB90;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8248bbac
	if (!cr6.eq) goto loc_8248BBAC;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bne cr6,0x8248bb70
	if (!cr6.eq) goto loc_8248BB70;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// bne cr6,0x8248bbac
	if (!cr6.eq) goto loc_8248BBAC;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// bne cr6,0x8248bbac
	if (!cr6.eq) goto loc_8248BBAC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x8248bb90
	if (cr6.eq) goto loc_8248BB90;
loc_8248BB70:
	// cmplwi cr6,r28,3
	cr6.compare<uint32_t>(r28.u32, 3, xer);
	// bne cr6,0x8248bbac
	if (!cr6.eq) goto loc_8248BBAC;
	// cmplwi cr6,r27,3
	cr6.compare<uint32_t>(r27.u32, 3, xer);
	// bne cr6,0x8248bbac
	if (!cr6.eq) goto loc_8248BBAC;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(r26.u32, 3, xer);
	// bne cr6,0x8248bbac
	if (!cr6.eq) goto loc_8248BBAC;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// beq cr6,0x8248bbac
	if (cr6.eq) goto loc_8248BBAC;
loc_8248BB90:
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8248bbac
	if (!cr6.eq) goto loc_8248BBAC;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,380(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// twllei r10,0
	// divwu r10,r11,r10
	ctx.r10.u32 = r11.u32 / ctx.r10.u32;
	// b 0x8248bbb0
	goto loc_8248BBB0;
loc_8248BBAC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8248BBB0:
	// addi r11,r1,144
	r11.s64 = ctx.r1.s64 + 144;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r9,6
	ctx.r9.s64 = 6;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_8248BBC0:
	// std r8,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r8.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x8248bbc0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8248BBC0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// lwz r10,356(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r25.u32);
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x823bcbd8
	sub_823BCBD8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lwz r8,176(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,364(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// rlwimi r8,r9,0,0,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFF000) | (ctx.r8.u64 & 0xFFFFFFFF00000FFF);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, r11.u32);
	// lis r11,-1
	r11.s64 = -65536;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// stw r8,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r8.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, r11.u32);
	// rlwinm. r7,r31,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8248bc58
	if (cr0.eq) goto loc_8248BC58;
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_8248BC58:
	// rlwinm. r11,r31,0,22,22
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8248bc68
	if (cr0.eq) goto loc_8248BC68;
	// oris r11,r10,64
	r11.u64 = ctx.r10.u64 | 4194304;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, r11.u32);
loc_8248BC68:
	// lwz r30,132(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8248bcac
	if (cr6.eq) goto loc_8248BCAC;
	// lwz r11,372(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r10,192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8248bc9c
	if (!cr6.eq) goto loc_8248BC9C;
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r11,r11,4095
	r11.s64 = r11.s64 + 4095;
	// rlwinm r31,r11,0,0,19
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// add r11,r31,r9
	r11.u64 = r31.u64 + ctx.r9.u64;
	// rlwimi r11,r10,0,20,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (r11.u64 & 0xFFFFFFFFFFFFF000);
	// b 0x8248bcb8
	goto loc_8248BCB8;
loc_8248BC9C:
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
	// b 0x8248bcbc
	goto loc_8248BCBC;
loc_8248BCAC:
	// lwz r11,192(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r31,128(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
loc_8248BCB8:
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
loc_8248BCBC:
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248bccc
	if (cr6.eq) goto loc_8248BCCC;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
loc_8248BCCC:
	// lwz r11,412(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248bcdc
	if (cr6.eq) goto loc_8248BCDC;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
loc_8248BCDC:
	// lwz r3,396(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x8248bcf4
	if (cr6.eq) goto loc_8248BCF4;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8248BCF4:
	// add r3,r31,r30
	ctx.r3.u64 = r31.u64 + r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8248BD00"))) PPC_WEAK_FUNC(sub_8248BD00);
PPC_FUNC_IMPL(__imp__sub_8248BD00) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// li r30,3
	r30.s64 = 3;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r31.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// rlwinm r10,r9,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// lwz r8,268(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// lwz r7,260(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8248bb00
	sub_8248BB00(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_8248BD8C"))) PPC_WEAK_FUNC(sub_8248BD8C);
PPC_FUNC_IMPL(__imp__sub_8248BD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248BD90"))) PPC_WEAK_FUNC(sub_8248BD90);
PPC_FUNC_IMPL(__imp__sub_8248BD90) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwimi r10,r11,0,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r10.u32);
	// bl 0x823bd140
	sub_823BD140(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// ble cr6,0x8248bde0
	if (!cr6.gt) goto loc_8248BDE0;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// rlwimi r10,r11,0,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
loc_8248BDE0:
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

__attribute__((alias("__imp__sub_8248BDF8"))) PPC_WEAK_FUNC(sub_8248BDF8);
PPC_FUNC_IMPL(__imp__sub_8248BDF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x8239bcf4
	// addi r7,r7,31
	ctx.r7.s64 = ctx.r7.s64 + 31;
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// clrlwi r8,r3,29
	ctx.r8.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r9,r4,2,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r29,r7,28,4,30
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xFFFFFFE;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r27,r5,30
	r27.u64 = ctx.r5.u32 & 0x3;
	// addi r8,r6,31
	ctx.r8.s64 = ctx.r6.s64 + 31;
	// mullw r5,r29,r10
	ctx.r5.s64 = int64_t(r29.s32) * int64_t(ctx.r10.s32);
	// rlwinm r30,r4,28,4,31
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm r28,r8,27,5,31
	r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x7FFFFFF;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + r30.u64;
	// rlwinm r8,r4,4,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x10;
	// subfic r11,r11,31
	xer.ca = r11.u32 <= 31;
	r11.s64 = 31 - r11.s64;
	// rlwinm r31,r3,27,5,31
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// mullw r5,r5,r28
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(r28.s32);
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rlwinm r6,r4,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// rldicl r8,r3,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 3) & 0x7FFFFFFFF;
	// addi r3,r11,6
	ctx.r3.s64 = r11.s64 + 6;
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + r31.u64;
	// clrldi r4,r4,32
	ctx.r4.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// clrldi r31,r11,32
	r31.u64 = r11.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,63
	ctx.r10.u64 = ctx.r10.u64 & 0x1;
	// rldicr r8,r8,0,57
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 0) & 0xFFFFFFFFFFFFFFC0;
	// slw r6,r27,r3
	ctx.r6.u64 = ctx.r3.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r3.u8 & 0x3F));
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// sld r11,r5,r4
	r11.u64 = ctx.r4.u8 & 0x40 ? 0 : (ctx.r5.u64 << (ctx.r4.u8 & 0x7F));
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// rlwinm r6,r9,1,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFE0;
	// clrldi r9,r9,60
	ctx.r9.u64 = ctx.r9.u64 & 0xF;
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// rldicr r7,r10,8,55
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// mulli r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 * -128;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,0,24,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0;
	// rldicr r10,r11,0,54
	ctx.r10.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFFFFFFFFE00;
	// rlwinm r8,r11,0,23,25
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1C0;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// clrldi r10,r11,58
	ctx.r10.u64 = r11.u64 & 0x3F;
	// rldicr r11,r7,1,62
	r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// rldicr r11,r11,2,61
	r11.u64 = __builtin_rotateleft64(r11.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// srd r11,r11,r31
	r11.u64 = r31.u8 & 0x40 ? 0 : (r11.u64 >> (r31.u8 & 0x7F));
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8248BEE0"))) PPC_WEAK_FUNC(sub_8248BEE0);
PPC_FUNC_IMPL(__imp__sub_8248BEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// cntlzw r11,r25
	r11.u64 = r25.u32 == 0 ? 32 : __builtin_clz(r25.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// subfic r9,r11,31
	xer.ca = r11.u32 <= 31;
	ctx.r9.s64 = 31 - r11.s64;
	// li r11,2
	r11.s64 = 2;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r28,-1
	ctx.r5.s64 = r28.s64 + -1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// subfic r10,r9,7
	xer.ca = ctx.r9.u32 <= 7;
	ctx.r10.s64 = 7 - ctx.r9.s64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r11.u32);
	// addi r11,r26,-1
	r11.s64 = r26.s64 + -1;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// li r23,0
	r23.s64 = 0;
	// rlwinm r27,r11,0,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r11,1
	r11.s64 = 1;
	// addi r8,r29,-1
	ctx.r8.s64 = r29.s64 + -1;
	// rlwinm r17,r8,0,0,26
	r17.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r16,r5,r11
	r16.u64 = ctx.r5.u64 & ~r11.u64;
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r7
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// lwzx r30,r11,r6
	r30.u64 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	// add r10,r31,r29
	ctx.r10.u64 = r31.u64 + r29.u64;
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// divwu r10,r10,r31
	ctx.r10.u32 = ctx.r10.u32 / r31.u32;
	// divwu r11,r11,r30
	r11.u32 = r11.u32 / r30.u32;
	// twllei r31,0
	// twllei r30,0
	// mullw r20,r10,r31
	r20.s64 = int64_t(ctx.r10.s32) * int64_t(r31.s32);
	// mullw r19,r11,r30
	r19.s64 = int64_t(r11.s32) * int64_t(r30.s32);
	// b 0x8248c014
	goto loc_8248C014;
loc_8248BFAC:
	// mr r18,r16
	r18.u64 = r16.u64;
	// cmplw cr6,r16,r28
	cr6.compare<uint32_t>(r16.u32, r28.u32, xer);
	// bge cr6,0x8248c010
	if (!cr6.lt) goto loc_8248C010;
	// addi r15,r30,-1
	r15.s64 = r30.s64 + -1;
loc_8248BFBC:
	// mr r24,r17
	r24.u64 = r17.u64;
	// cmplw cr6,r17,r29
	cr6.compare<uint32_t>(r17.u32, r29.u32, xer);
	// bge cr6,0x8248c004
	if (!cr6.lt) goto loc_8248C004;
	// add r22,r15,r18
	r22.u64 = r15.u64 + r18.u64;
	// addi r21,r31,-1
	r21.s64 = r31.s64 + -1;
loc_8248BFD0:
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// add r3,r21,r24
	ctx.r3.u64 = r21.u64 + r24.u64;
	// bl 0x8248bdf8
	sub_8248BDF8(ctx, base);
	// cmplw cr6,r23,r3
	cr6.compare<uint32_t>(r23.u32, ctx.r3.u32, xer);
	// bgt cr6,0x8248bff8
	if (cr6.gt) goto loc_8248BFF8;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
loc_8248BFF8:
	// add r24,r24,r31
	r24.u64 = r24.u64 + r31.u64;
	// cmplw cr6,r24,r29
	cr6.compare<uint32_t>(r24.u32, r29.u32, xer);
	// blt cr6,0x8248bfd0
	if (cr6.lt) goto loc_8248BFD0;
loc_8248C004:
	// add r18,r18,r30
	r18.u64 = r18.u64 + r30.u64;
	// cmplw cr6,r18,r28
	cr6.compare<uint32_t>(r18.u32, r28.u32, xer);
	// blt cr6,0x8248bfbc
	if (cr6.lt) goto loc_8248BFBC;
loc_8248C010:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
loc_8248C014:
	// cmplw cr6,r27,r26
	cr6.compare<uint32_t>(r27.u32, r26.u32, xer);
	// blt cr6,0x8248bfac
	if (cr6.lt) goto loc_8248BFAC;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_8248C028"))) PPC_WEAK_FUNC(sub_8248C028);
PPC_FUNC_IMPL(__imp__sub_8248C028) {
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

__attribute__((alias("__imp__sub_8248C07C"))) PPC_WEAK_FUNC(sub_8248C07C);
PPC_FUNC_IMPL(__imp__sub_8248C07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C080"))) PPC_WEAK_FUNC(sub_8248C080);
PPC_FUNC_IMPL(__imp__sub_8248C080) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8248c0d4
	if (cr6.eq) goto loc_8248C0D4;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// ble cr6,0x8248c0d4
	if (!cr6.gt) goto loc_8248C0D4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r29,r11,2836
	r29.s64 = r11.s64 + 2836;
loc_8248C0B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248c0b8
	if (cr6.lt) goto loc_8248C0B8;
loc_8248C0D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8248C0DC"))) PPC_WEAK_FUNC(sub_8248C0DC);
PPC_FUNC_IMPL(__imp__sub_8248C0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C0E0"))) PPC_WEAK_FUNC(sub_8248C0E0);
PPC_FUNC_IMPL(__imp__sub_8248C0E0) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r11,7816
	ctx.r4.s64 = r11.s64 + 7816;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4068
	ctx.r4.s64 = r11.s64 + 4068;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// li r11,1
	r11.s64 = 1;
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

__attribute__((alias("__imp__sub_8248C150"))) PPC_WEAK_FUNC(sub_8248C150);
PPC_FUNC_IMPL(__imp__sub_8248C150) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,7816
	ctx.r4.s64 = r11.s64 + 7816;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4068
	ctx.r4.s64 = r11.s64 + 4068;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_8248C1AC"))) PPC_WEAK_FUNC(sub_8248C1AC);
PPC_FUNC_IMPL(__imp__sub_8248C1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C1B0"))) PPC_WEAK_FUNC(sub_8248C1B0);
PPC_FUNC_IMPL(__imp__sub_8248C1B0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq cr6,0x8248c1e0
	if (cr6.eq) goto loc_8248C1E0;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// add r6,r5,r7
	ctx.r6.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r4,r10,7836
	ctx.r4.s64 = ctx.r10.s64 + 7836;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// b 0x8248c230
	goto loc_8248C230;
loc_8248C1E0:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrldi r9,r7,63
	ctx.r9.u64 = ctx.r7.u64 & 0x1;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// lfs f0,24112(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24112);
	f0.f64 = double(temp.f32);
	// rlwinm r10,r7,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// clrldi r8,r10,32
	ctx.r8.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r4,r10,7848
	ctx.r4.s64 = ctx.r10.s64 + 7848;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x8248c028
	sub_8248C028(ctx, base);
loc_8248C230:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C240"))) PPC_WEAK_FUNC(sub_8248C240);
PPC_FUNC_IMPL(__imp__sub_8248C240) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// addi r4,r10,7916
	ctx.r4.s64 = ctx.r10.s64 + 7916;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248c31c
	if (cr6.eq) goto loc_8248C31C;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r29,r11,-16376
	r29.s64 = r11.s64 + -16376;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,7908
	r28.s64 = r11.s64 + 7908;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,7900
	r27.s64 = r11.s64 + 7900;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,7892
	r26.s64 = r11.s64 + 7892;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,7884
	r25.s64 = r11.s64 + 7884;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,7876
	r24.s64 = r11.s64 + 7876;
loc_8248C2A4:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// cmpwi cr6,r5,34
	cr6.compare<int32_t>(ctx.r5.s32, 34, xer);
	// beq cr6,0x8248c304
	if (cr6.eq) goto loc_8248C304;
	// cmpwi cr6,r5,38
	cr6.compare<int32_t>(ctx.r5.s32, 38, xer);
	// beq cr6,0x8248c2fc
	if (cr6.eq) goto loc_8248C2FC;
	// cmpwi cr6,r5,39
	cr6.compare<int32_t>(ctx.r5.s32, 39, xer);
	// beq cr6,0x8248c2f4
	if (cr6.eq) goto loc_8248C2F4;
	// cmpwi cr6,r5,60
	cr6.compare<int32_t>(ctx.r5.s32, 60, xer);
	// beq cr6,0x8248c2e8
	if (cr6.eq) goto loc_8248C2E8;
	// cmpwi cr6,r5,62
	cr6.compare<int32_t>(ctx.r5.s32, 62, xer);
	// beq cr6,0x8248c2e0
	if (cr6.eq) goto loc_8248C2E0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x8248c308
	goto loc_8248C308;
loc_8248C2E0:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// b 0x8248c2ec
	goto loc_8248C2EC;
loc_8248C2E8:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
loc_8248C2EC:
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// b 0x8248c30c
	goto loc_8248C30C;
loc_8248C2F4:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x8248c2ec
	goto loc_8248C2EC;
loc_8248C2FC:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// b 0x8248c2ec
	goto loc_8248C2EC;
loc_8248C304:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8248C308:
	// bl 0x8248c028
	sub_8248C028(ctx, base);
loc_8248C30C:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8248c2a4
	if (!cr6.eq) goto loc_8248C2A4;
loc_8248C31C:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,12480
	ctx.r4.s64 = r11.s64 + 12480;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8248C334"))) PPC_WEAK_FUNC(sub_8248C334);
PPC_FUNC_IMPL(__imp__sub_8248C334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C338"))) PPC_WEAK_FUNC(sub_8248C338);
PPC_FUNC_IMPL(__imp__sub_8248C338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_8248C33C:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8248c33c
	if (!cr6.eq) goto loc_8248C33C;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C368"))) PPC_WEAK_FUNC(sub_8248C368);
PPC_FUNC_IMPL(__imp__sub_8248C368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x8248c3a0
	goto loc_8248C3A0;
loc_8248C370:
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// beq cr6,0x8248c380
	if (cr6.eq) goto loc_8248C380;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// bne cr6,0x8248c388
	if (!cr6.eq) goto loc_8248C388;
loc_8248C380:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x8248c39c
	goto loc_8248C39C;
loc_8248C388:
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// bne cr6,0x8248c398
	if (!cr6.eq) goto loc_8248C398;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// b 0x8248c39c
	goto loc_8248C39C;
loc_8248C398:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_8248C39C:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_8248C3A0:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8248c370
	if (!cr0.eq) goto loc_8248C370;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C3BC"))) PPC_WEAK_FUNC(sub_8248C3BC);
PPC_FUNC_IMPL(__imp__sub_8248C3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C3C0"))) PPC_WEAK_FUNC(sub_8248C3C0);
PPC_FUNC_IMPL(__imp__sub_8248C3C0) {
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
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239f070
	sub_8239F070(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8248c400
	if (!cr0.lt) goto loc_8248C400;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8248c40c
	goto loc_8248C40C;
loc_8248C400:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_8248C40C:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C420"))) PPC_WEAK_FUNC(sub_8248C420);
PPC_FUNC_IMPL(__imp__sub_8248C420) {
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
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248c4cc
	if (cr6.lt) goto loc_8248C4CC;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - r11.s64;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8248C460:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8248c460
	if (!cr6.eq) goto loc_8248C460;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// bge cr6,0x8248c494
	if (!cr6.lt) goto loc_8248C494;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8248c4cc
	goto loc_8248C4CC;
loc_8248C494:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_8248C4A4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8248c4a4
	if (!cr6.eq) goto loc_8248C4A4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_8248C4CC:
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

__attribute__((alias("__imp__sub_8248C4E4"))) PPC_WEAK_FUNC(sub_8248C4E4);
PPC_FUNC_IMPL(__imp__sub_8248C4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C4E8"))) PPC_WEAK_FUNC(sub_8248C4E8);
PPC_FUNC_IMPL(__imp__sub_8248C4E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// blt cr6,0x8248c5e0
	if (cr6.lt) goto loc_8248C5E0;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8248c5e0
	if (cr6.eq) goto loc_8248C5E0;
	// li r8,38
	ctx.r8.s64 = 38;
	// li r5,116
	ctx.r5.s64 = 116;
	// li r9,59
	ctx.r9.s64 = 59;
loc_8248C524:
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r7,r6
	ctx.r7.s64 = ctx.r6.s8;
	// cmpwi cr6,r7,60
	cr6.compare<int32_t>(ctx.r7.s32, 60, xer);
	// bne cr6,0x8248c564
	if (!cr6.eq) goto loc_8248C564;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8248c5f4
	if (cr6.lt) goto loc_8248C5F4;
	// li r7,108
	ctx.r7.s64 = 108;
loc_8248C540:
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r5,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r5.u8);
loc_8248C558:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// b 0x8248c5cc
	goto loc_8248C5CC;
loc_8248C564:
	// cmpwi cr6,r7,62
	cr6.compare<int32_t>(ctx.r7.s32, 62, xer);
	// bne cr6,0x8248c57c
	if (!cr6.eq) goto loc_8248C57C;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8248c5f4
	if (cr6.lt) goto loc_8248C5F4;
	// li r7,103
	ctx.r7.s64 = 103;
	// b 0x8248c540
	goto loc_8248C540;
loc_8248C57C:
	// cmpwi cr6,r7,38
	cr6.compare<int32_t>(ctx.r7.s32, 38, xer);
	// bne cr6,0x8248c5bc
	if (!cr6.eq) goto loc_8248C5BC;
	// cmpwi cr6,r10,5
	cr6.compare<int32_t>(ctx.r10.s32, 5, xer);
	// blt cr6,0x8248c5f4
	if (cr6.lt) goto loc_8248C5F4;
	// stb r8,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r7,97
	ctx.r7.s64 = 97;
	// li r6,109
	ctx.r6.s64 = 109;
	// li r31,112
	r31.s64 = 112;
	// addi r10,r10,-5
	ctx.r10.s64 = ctx.r10.s64 + -5;
	// stb r7,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r31,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r31.u8);
	// b 0x8248c558
	goto loc_8248C558;
loc_8248C5BC:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// blt cr6,0x8248c5f4
	if (cr6.lt) goto loc_8248C5F4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stb r6,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r6.u8);
loc_8248C5CC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lbz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x8248c524
	if (!cr6.eq) goto loc_8248C524;
loc_8248C5E0:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
loc_8248C5EC:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_8248C5F4:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// b 0x8248c5ec
	goto loc_8248C5EC;
}

__attribute__((alias("__imp__sub_8248C604"))) PPC_WEAK_FUNC(sub_8248C604);
PPC_FUNC_IMPL(__imp__sub_8248C604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C608"))) PPC_WEAK_FUNC(sub_8248C608);
PPC_FUNC_IMPL(__imp__sub_8248C608) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248c66c
	if (cr6.lt) goto loc_8248C66C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - r11.s64;
	// bl 0x8239f070
	sub_8239F070(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x8248c660
	if (!cr0.lt) goto loc_8248C660;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// b 0x8248c66c
	goto loc_8248C66C;
loc_8248C660:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_8248C66C:
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

__attribute__((alias("__imp__sub_8248C680"))) PPC_WEAK_FUNC(sub_8248C680);
PPC_FUNC_IMPL(__imp__sub_8248C680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r10,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, ctx.r10.u32);
	// lwz r10,272(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// stw r4,272(r11)
	PPC_STORE_U32(r11.u32 + 272, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248C6A0"))) PPC_WEAK_FUNC(sub_8248C6A0);
PPC_FUNC_IMPL(__imp__sub_8248C6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8248C6B0"))) PPC_WEAK_FUNC(sub_8248C6B0);
PPC_FUNC_IMPL(__imp__sub_8248C6B0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248c734
	if (!cr6.gt) goto loc_8248C734;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248c6e0
	if (!cr6.lt) goto loc_8248C6E0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248C6E0:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248c704
	if (!cr0.eq) goto loc_8248C704;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248c734
	goto loc_8248C734;
loc_8248C704:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248c730
	if (cr0.eq) goto loc_8248C730;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248C730:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248C734:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248C73C"))) PPC_WEAK_FUNC(sub_8248C73C);
PPC_FUNC_IMPL(__imp__sub_8248C73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C740"))) PPC_WEAK_FUNC(sub_8248C740);
PPC_FUNC_IMPL(__imp__sub_8248C740) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248c7c4
	if (!cr6.gt) goto loc_8248C7C4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248c770
	if (!cr6.lt) goto loc_8248C770;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248C770:
	// mulli r4,r30,24
	ctx.r4.s64 = r30.s64 * 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248c794
	if (!cr0.eq) goto loc_8248C794;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248c7c4
	goto loc_8248C7C4;
loc_8248C794:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248c7c0
	if (cr0.eq) goto loc_8248C7C0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,24
	ctx.r5.s64 = r11.s64 * 24;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248C7C0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248C7C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248C7CC"))) PPC_WEAK_FUNC(sub_8248C7CC);
PPC_FUNC_IMPL(__imp__sub_8248C7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C7D0"))) PPC_WEAK_FUNC(sub_8248C7D0);
PPC_FUNC_IMPL(__imp__sub_8248C7D0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248c854
	if (!cr6.gt) goto loc_8248C854;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248c800
	if (!cr6.lt) goto loc_8248C800;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248C800:
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248c824
	if (!cr0.eq) goto loc_8248C824;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248c854
	goto loc_8248C854;
loc_8248C824:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248c850
	if (cr0.eq) goto loc_8248C850;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248C850:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248C854:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248C85C"))) PPC_WEAK_FUNC(sub_8248C85C);
PPC_FUNC_IMPL(__imp__sub_8248C85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C860"))) PPC_WEAK_FUNC(sub_8248C860);
PPC_FUNC_IMPL(__imp__sub_8248C860) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248c8e4
	if (!cr6.gt) goto loc_8248C8E4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248c890
	if (!cr6.lt) goto loc_8248C890;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248C890:
	// rlwinm r4,r30,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248c8b4
	if (!cr0.eq) goto loc_8248C8B4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248c8e4
	goto loc_8248C8E4;
loc_8248C8B4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248c8e0
	if (cr0.eq) goto loc_8248C8E0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248C8E0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248C8E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248C8EC"))) PPC_WEAK_FUNC(sub_8248C8EC);
PPC_FUNC_IMPL(__imp__sub_8248C8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C8F0"))) PPC_WEAK_FUNC(sub_8248C8F0);
PPC_FUNC_IMPL(__imp__sub_8248C8F0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248c974
	if (!cr6.gt) goto loc_8248C974;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248c920
	if (!cr6.lt) goto loc_8248C920;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248C920:
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248c944
	if (!cr0.eq) goto loc_8248C944;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248c974
	goto loc_8248C974;
loc_8248C944:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248c970
	if (cr0.eq) goto loc_8248C970;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248C970:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248C974:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248C97C"))) PPC_WEAK_FUNC(sub_8248C97C);
PPC_FUNC_IMPL(__imp__sub_8248C97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248C980"))) PPC_WEAK_FUNC(sub_8248C980);
PPC_FUNC_IMPL(__imp__sub_8248C980) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248ca04
	if (!cr6.gt) goto loc_8248CA04;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248c9b0
	if (!cr6.lt) goto loc_8248C9B0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248C9B0:
	// mulli r4,r30,12
	ctx.r4.s64 = r30.s64 * 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248c9d4
	if (!cr0.eq) goto loc_8248C9D4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248ca04
	goto loc_8248CA04;
loc_8248C9D4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248ca00
	if (cr0.eq) goto loc_8248CA00;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = r11.s64 * 12;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CA00:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CA04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CA0C"))) PPC_WEAK_FUNC(sub_8248CA0C);
PPC_FUNC_IMPL(__imp__sub_8248CA0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CA10"))) PPC_WEAK_FUNC(sub_8248CA10);
PPC_FUNC_IMPL(__imp__sub_8248CA10) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248ca94
	if (!cr6.gt) goto loc_8248CA94;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248ca40
	if (!cr6.lt) goto loc_8248CA40;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248CA40:
	// mulli r4,r30,20
	ctx.r4.s64 = r30.s64 * 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248ca64
	if (!cr0.eq) goto loc_8248CA64;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248ca94
	goto loc_8248CA94;
loc_8248CA64:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248ca90
	if (cr0.eq) goto loc_8248CA90;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,20
	ctx.r5.s64 = r11.s64 * 20;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CA90:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CA94:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CA9C"))) PPC_WEAK_FUNC(sub_8248CA9C);
PPC_FUNC_IMPL(__imp__sub_8248CA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CAA0"))) PPC_WEAK_FUNC(sub_8248CAA0);
PPC_FUNC_IMPL(__imp__sub_8248CAA0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248cb24
	if (!cr6.gt) goto loc_8248CB24;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248cad0
	if (!cr6.lt) goto loc_8248CAD0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248CAD0:
	// rlwinm r4,r30,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248caf4
	if (!cr0.eq) goto loc_8248CAF4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248cb24
	goto loc_8248CB24;
loc_8248CAF4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248cb20
	if (cr0.eq) goto loc_8248CB20;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CB20:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CB24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CB2C"))) PPC_WEAK_FUNC(sub_8248CB2C);
PPC_FUNC_IMPL(__imp__sub_8248CB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CB30"))) PPC_WEAK_FUNC(sub_8248CB30);
PPC_FUNC_IMPL(__imp__sub_8248CB30) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248cbb4
	if (!cr6.gt) goto loc_8248CBB4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248cb60
	if (!cr6.lt) goto loc_8248CB60;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248CB60:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248cb84
	if (!cr0.eq) goto loc_8248CB84;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248cbb4
	goto loc_8248CBB4;
loc_8248CB84:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248cbb0
	if (cr0.eq) goto loc_8248CBB0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CBB0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CBB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CBBC"))) PPC_WEAK_FUNC(sub_8248CBBC);
PPC_FUNC_IMPL(__imp__sub_8248CBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CBC0"))) PPC_WEAK_FUNC(sub_8248CBC0);
PPC_FUNC_IMPL(__imp__sub_8248CBC0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248cc44
	if (!cr6.gt) goto loc_8248CC44;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248cbf0
	if (!cr6.lt) goto loc_8248CBF0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248CBF0:
	// mulli r4,r30,20
	ctx.r4.s64 = r30.s64 * 20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248cc14
	if (!cr0.eq) goto loc_8248CC14;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248cc44
	goto loc_8248CC44;
loc_8248CC14:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248cc40
	if (cr0.eq) goto loc_8248CC40;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,20
	ctx.r5.s64 = r11.s64 * 20;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CC40:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CC44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CC4C"))) PPC_WEAK_FUNC(sub_8248CC4C);
PPC_FUNC_IMPL(__imp__sub_8248CC4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CC50"))) PPC_WEAK_FUNC(sub_8248CC50);
PPC_FUNC_IMPL(__imp__sub_8248CC50) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248ccd4
	if (!cr6.gt) goto loc_8248CCD4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248cc80
	if (!cr6.lt) goto loc_8248CC80;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248CC80:
	// mulli r4,r30,276
	ctx.r4.s64 = r30.s64 * 276;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248cca4
	if (!cr0.eq) goto loc_8248CCA4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248ccd4
	goto loc_8248CCD4;
loc_8248CCA4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248ccd0
	if (cr0.eq) goto loc_8248CCD0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,276
	ctx.r5.s64 = r11.s64 * 276;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CCD0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CCD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CCDC"))) PPC_WEAK_FUNC(sub_8248CCDC);
PPC_FUNC_IMPL(__imp__sub_8248CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CCE0"))) PPC_WEAK_FUNC(sub_8248CCE0);
PPC_FUNC_IMPL(__imp__sub_8248CCE0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248cd64
	if (!cr6.gt) goto loc_8248CD64;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248cd10
	if (!cr6.lt) goto loc_8248CD10;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248CD10:
	// mulli r4,r30,452
	ctx.r4.s64 = r30.s64 * 452;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248cd34
	if (!cr0.eq) goto loc_8248CD34;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248cd64
	goto loc_8248CD64;
loc_8248CD34:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248cd60
	if (cr0.eq) goto loc_8248CD60;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,452
	ctx.r5.s64 = r11.s64 * 452;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CD60:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CD64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CD6C"))) PPC_WEAK_FUNC(sub_8248CD6C);
PPC_FUNC_IMPL(__imp__sub_8248CD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CD70"))) PPC_WEAK_FUNC(sub_8248CD70);
PPC_FUNC_IMPL(__imp__sub_8248CD70) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248cdf4
	if (!cr6.gt) goto loc_8248CDF4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248cda0
	if (!cr6.lt) goto loc_8248CDA0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248CDA0:
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248cdc4
	if (!cr0.eq) goto loc_8248CDC4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248cdf4
	goto loc_8248CDF4;
loc_8248CDC4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248cdf0
	if (cr0.eq) goto loc_8248CDF0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CDF0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CDF4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CDFC"))) PPC_WEAK_FUNC(sub_8248CDFC);
PPC_FUNC_IMPL(__imp__sub_8248CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CE00"))) PPC_WEAK_FUNC(sub_8248CE00);
PPC_FUNC_IMPL(__imp__sub_8248CE00) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248ce80
	if (!cr6.gt) goto loc_8248CE80;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248ce30
	if (!cr6.lt) goto loc_8248CE30;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248CE30:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248ce54
	if (!cr0.eq) goto loc_8248CE54;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248ce80
	goto loc_8248CE80;
loc_8248CE54:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248ce7c
	if (cr0.eq) goto loc_8248CE7C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CE7C:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CE80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CE88"))) PPC_WEAK_FUNC(sub_8248CE88);
PPC_FUNC_IMPL(__imp__sub_8248CE88) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248cf0c
	if (!cr6.gt) goto loc_8248CF0C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248ceb8
	if (!cr6.lt) goto loc_8248CEB8;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248CEB8:
	// mulli r4,r30,40
	ctx.r4.s64 = r30.s64 * 40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248cedc
	if (!cr0.eq) goto loc_8248CEDC;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248cf0c
	goto loc_8248CF0C;
loc_8248CEDC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248cf08
	if (cr0.eq) goto loc_8248CF08;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,40
	ctx.r5.s64 = r11.s64 * 40;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248CF08:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248CF0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248CF14"))) PPC_WEAK_FUNC(sub_8248CF14);
PPC_FUNC_IMPL(__imp__sub_8248CF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CF18"))) PPC_WEAK_FUNC(sub_8248CF18);
PPC_FUNC_IMPL(__imp__sub_8248CF18) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,7952
	ctx.r4.s64 = r11.s64 + 7952;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4068
	ctx.r4.s64 = r11.s64 + 4068;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_8248CF64"))) PPC_WEAK_FUNC(sub_8248CF64);
PPC_FUNC_IMPL(__imp__sub_8248CF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248CF68"))) PPC_WEAK_FUNC(sub_8248CF68);
PPC_FUNC_IMPL(__imp__sub_8248CF68) {
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
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r4,r11,25856
	ctx.r4.s64 = r11.s64 + 25856;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4068
	ctx.r4.s64 = r11.s64 + 4068;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
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

__attribute__((alias("__imp__sub_8248CFC0"))) PPC_WEAK_FUNC(sub_8248CFC0);
PPC_FUNC_IMPL(__imp__sub_8248CFC0) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r5,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r5.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r9,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r9.u32);
loc_8248D004:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x8248d004
	if (!cr6.eq) goto loc_8248D004;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,116(r31)
	PPC_STORE_U32(r31.u32 + 116, ctx.r3.u32);
	// bne 0x8248d048
	if (!cr0.eq) goto loc_8248D048;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// b 0x8248d064
	goto loc_8248D064;
loc_8248D048:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8248D04C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r10,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r10.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// bne 0x8248d04c
	if (!cr0.eq) goto loc_8248D04C;
loc_8248D064:
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

__attribute__((alias("__imp__sub_8248D07C"))) PPC_WEAK_FUNC(sub_8248D07C);
PPC_FUNC_IMPL(__imp__sub_8248D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D080"))) PPC_WEAK_FUNC(sub_8248D080);
PPC_FUNC_IMPL(__imp__sub_8248D080) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248d0f0
	if (cr6.lt) goto loc_8248D0F0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// stw r3,388(r11)
	PPC_STORE_U32(r11.u32 + 388, ctx.r3.u32);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,388(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x8248d0d8
	if (!cr6.eq) goto loc_8248D0D8;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// b 0x8248d0f0
	goto loc_8248D0F0;
loc_8248D0D8:
	// stw r30,392(r11)
	PPC_STORE_U32(r11.u32 + 392, r30.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,388(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 388);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_8248D0F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8248D0F8"))) PPC_WEAK_FUNC(sub_8248D0F8);
PPC_FUNC_IMPL(__imp__sub_8248D0F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r20,r11,7960
	r20.s64 = r11.s64 + 7960;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// addi r21,r11,7948
	r21.s64 = r11.s64 + 7948;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248d254
	if (!cr6.lt) goto loc_8248D254;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r22,r11,25856
	r22.s64 = r11.s64 + 25856;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,7860
	r27.s64 = r11.s64 + 7860;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,7836
	r26.s64 = r11.s64 + 7836;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r25,r11,26140
	r25.s64 = r11.s64 + 26140;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r24,r11,-14912
	r24.s64 = r11.s64 + -14912;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,7956
	r23.s64 = r11.s64 + 7956;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r29,r11,15288
	r29.s64 = r11.s64 + 15288;
loc_8248D194:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r6,260(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r7,268(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,264(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248d234
	if (cr6.eq) goto loc_8248D234;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r4,272(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8248c150
	sub_8248C150(ctx, base);
	// b 0x8248d238
	goto loc_8248D238;
loc_8248D234:
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
loc_8248D238:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r30,r30,276
	r30.s64 = r30.s64 + 276;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248d194
	if (cr6.lt) goto loc_8248D194;
loc_8248D254:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8248D268"))) PPC_WEAK_FUNC(sub_8248D268);
PPC_FUNC_IMPL(__imp__sub_8248D268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r19,r11,8004
	r19.s64 = r11.s64 + 8004;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r21,r11,7948
	r21.s64 = r11.s64 + 7948;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248d3a4
	if (!cr6.lt) goto loc_8248D3A4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,7836
	r29.s64 = r11.s64 + 7836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,7988
	r27.s64 = r11.s64 + 7988;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,7980
	r26.s64 = r11.s64 + 7980;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r25,r11,12452
	r25.s64 = r11.s64 + 12452;
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r24,r11,15288
	r24.s64 = r11.s64 + 15288;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r23,r11,19116
	r23.s64 = r11.s64 + 19116;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,7968
	r22.s64 = r11.s64 + 7968;
loc_8248D300:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8248c1b0
	sub_8248C1B0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248d300
	if (cr6.lt) goto loc_8248D300;
loc_8248D3A4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8248D3B8"))) PPC_WEAK_FUNC(sub_8248D3B8);
PPC_FUNC_IMPL(__imp__sub_8248D3B8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r19,r5
	r19.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r15,r6
	r15.u64 = ctx.r6.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r14,r11,8084
	r14.s64 = r11.s64 + 8084;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// addi r16,r11,7948
	r16.s64 = r11.s64 + 7948;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// lwz r30,0(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248d564
	if (!cr6.lt) goto loc_8248D564;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,7836
	r29.s64 = r11.s64 + 7836;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r28,r11,19116
	r28.s64 = r11.s64 + 19116;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,8080
	r27.s64 = r11.s64 + 8080;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,8076
	r26.s64 = r11.s64 + 8076;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8068
	r25.s64 = r11.s64 + 8068;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,8052
	r24.s64 = r11.s64 + 8052;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8044
	r23.s64 = r11.s64 + 8044;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r18,r11,-24612
	r18.s64 = r11.s64 + -24612;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r17,r11,-24604
	r17.s64 = r11.s64 + -24604;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,8032
	r22.s64 = r11.s64 + 8032;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,8024
	r21.s64 = r11.s64 + 8024;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r20,r11,8016
	r20.s64 = r11.s64 + 8016;
loc_8248D478:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8248d4cc
	if (!cr0.eq) goto loc_8248D4CC;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
loc_8248D4CC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// rlwinm r10,r11,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwzx r6,r10,r24
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r24.u32);
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8248d518
	if (!cr0.eq) goto loc_8248D518;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
loc_8248D518:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r11,16,19,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x1FFF;
	// rlwinm r6,r11,3,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// bl 0x8248c1b0
	sub_8248C1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248d478
	if (cr6.lt) goto loc_8248D478;
loc_8248D564:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8248D578"))) PPC_WEAK_FUNC(sub_8248D578);
PPC_FUNC_IMPL(__imp__sub_8248D578) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r23,r11,8116
	r23.s64 = r11.s64 + 8116;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// addi r27,r11,7948
	r27.s64 = r11.s64 + 7948;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248d66c
	if (!cr6.lt) goto loc_8248D66C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,7836
	r28.s64 = r11.s64 + 7836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,8104
	r26.s64 = r11.s64 + 8104;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,7956
	r25.s64 = r11.s64 + 7956;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,7980
	r24.s64 = r11.s64 + 7980;
loc_8248D5F4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8248d650
	if (cr0.eq) goto loc_8248D650;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// srawi r6,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	ctx.r6.s64 = r11.s32 >> 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
loc_8248D650:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248d5f4
	if (cr6.lt) goto loc_8248D5F4;
loc_8248D66C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8248D680"))) PPC_WEAK_FUNC(sub_8248D680);
PPC_FUNC_IMPL(__imp__sub_8248D680) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r18,r11,8140
	r18.s64 = r11.s64 + 8140;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r19,r11,7948
	r19.s64 = r11.s64 + 7948;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248d7c0
	if (!cr6.lt) goto loc_8248D7C0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,7836
	r29.s64 = r11.s64 + 7836;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r27,r11,19116
	r27.s64 = r11.s64 + 19116;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,8132
	r26.s64 = r11.s64 + 8132;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8124
	r25.s64 = r11.s64 + 8124;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r22,r11,-24612
	r22.s64 = r11.s64 + -24612;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r21,r11,-24604
	r21.s64 = r11.s64 + -24604;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,7956
	r24.s64 = r11.s64 + 7956;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r23,r11,28520
	r23.s64 = r11.s64 + 28520;
loc_8248D720:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// rlwinm. r11,r11,0,14,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8248d760
	if (!cr0.eq) goto loc_8248D760;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_8248D760:
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r7,r11,13,19,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1FFF;
	// rlwinm r6,r11,14,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// bl 0x8248c1b0
	sub_8248C1B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248d720
	if (cr6.lt) goto loc_8248D720;
loc_8248D7C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8248D7D4"))) PPC_WEAK_FUNC(sub_8248D7D4);
PPC_FUNC_IMPL(__imp__sub_8248D7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D7D8"))) PPC_WEAK_FUNC(sub_8248D7D8);
PPC_FUNC_IMPL(__imp__sub_8248D7D8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r15,r11,8224
	r15.s64 = r11.s64 + 8224;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r17,r11,7948
	r17.s64 = r11.s64 + 7948;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r30,0(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248d990
	if (!cr6.lt) goto loc_8248D990;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,7836
	r28.s64 = r11.s64 + 7836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,8220
	r21.s64 = r11.s64 + 8220;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r19,r11,-24612
	r19.s64 = r11.s64 + -24612;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r18,r11,-24604
	r18.s64 = r11.s64 + -24604;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,8208
	r27.s64 = r11.s64 + 8208;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,8200
	r26.s64 = r11.s64 + 8200;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8188
	r25.s64 = r11.s64 + 8188;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,8180
	r29.s64 = r11.s64 + 8180;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,8168
	r24.s64 = r11.s64 + 8168;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8160
	r23.s64 = r11.s64 + 8160;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r22,r11,-17620
	r22.s64 = r11.s64 + -17620;
loc_8248D890:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// rlwinm r11,r11,12,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r6,r11,r16
	ctx.r6.u64 = r11.u64 + r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r6,r11,18,26,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// rlwinm r9,r11,27,29,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7;
	// rlwinm r8,r11,24,29,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x7;
	// stb r10,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r10.u8);
	// rlwinm r10,r11,30,29,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x7;
	// rlwinm r11,r11,21,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r29.u32);
	// lbzx r11,r11,r29
	r11.u64 = PPC_LOAD_U8(r11.u32 + r29.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbzx r10,r9,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r29.u32);
	// stb r11,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, r11.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// lbzx r10,r8,r29
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + r29.u32);
	// stb r10,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r10.u8);
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwinm r5,r11,9,24,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFF;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8248d960
	if (!cr0.eq) goto loc_8248D960;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_8248D960:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248d890
	if (cr6.lt) goto loc_8248D890;
loc_8248D990:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_8248D9A4"))) PPC_WEAK_FUNC(sub_8248D9A4);
PPC_FUNC_IMPL(__imp__sub_8248D9A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248D9A8"))) PPC_WEAK_FUNC(sub_8248D9A8);
PPC_FUNC_IMPL(__imp__sub_8248D9A8) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r15,r11,8272
	r15.s64 = r11.s64 + 8272;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// addi r16,r11,7948
	r16.s64 = r11.s64 + 7948;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// lwz r30,0(r21)
	r30.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248db38
	if (!cr6.lt) goto loc_8248DB38;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,7836
	r27.s64 = r11.s64 + 7836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,8264
	r29.s64 = r11.s64 + 8264;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8252
	r28.s64 = r11.s64 + 8252;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r20,r11,14828
	r20.s64 = r11.s64 + 14828;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r19,r11,21632
	r19.s64 = r11.s64 + 21632;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r18,r11,27864
	r18.s64 = r11.s64 + 27864;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r22,r11,9120
	r22.s64 = r11.s64 + 9120;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r17,r11,22000
	r17.s64 = r11.s64 + 22000;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,8208
	r26.s64 = r11.s64 + 8208;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8200
	r25.s64 = r11.s64 + 8200;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,8168
	r24.s64 = r11.s64 + 8168;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8236
	r23.s64 = r11.s64 + 8236;
loc_8248DA64:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// rlwinm r6,r11,12,28,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8248dac8
	if (!cr0.eq) goto loc_8248DAC8;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
loc_8248DAC8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// bne 0x8248dad8
	if (!cr0.eq) goto loc_8248DAD8;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
loc_8248DAD8:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// bne 0x8248dae8
	if (!cr0.eq) goto loc_8248DAE8;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_8248DAE8:
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// bne 0x8248daf8
	if (!cr0.eq) goto loc_8248DAF8;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
loc_8248DAF8:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248da64
	if (cr6.lt) goto loc_8248DA64;
loc_8248DB38:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r15
	ctx.r4.u64 = r15.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_8248DB4C"))) PPC_WEAK_FUNC(sub_8248DB4C);
PPC_FUNC_IMPL(__imp__sub_8248DB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248DB50"))) PPC_WEAK_FUNC(sub_8248DB50);
PPC_FUNC_IMPL(__imp__sub_8248DB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r19,r11,8392
	r19.s64 = r11.s64 + 8392;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r27,r11,7948
	r27.s64 = r11.s64 + 7948;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r30,0(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,7836
	r26.s64 = r11.s64 + 7836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r18,r11,8168
	r18.s64 = r11.s64 + 8168;
	// bge cr6,0x8248dcb4
	if (!cr6.lt) goto loc_8248DCB4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,7824
	r29.s64 = r11.s64 + 7824;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8384
	r25.s64 = r11.s64 + 8384;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,8376
	r24.s64 = r11.s64 + 8376;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8368
	r23.s64 = r11.s64 + 8368;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,8360
	r22.s64 = r11.s64 + 8360;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,8352
	r21.s64 = r11.s64 + 8352;
loc_8248DBF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lfs f1,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248dbf4
	if (cr6.lt) goto loc_8248DBF4;
loc_8248DCB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r23,r11,8340
	r23.s64 = r11.s64 + 8340;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r30,0(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248ddb0
	if (!cr6.lt) goto loc_8248DDB0;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,8336
	r29.s64 = r11.s64 + 8336;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8328
	r28.s64 = r11.s64 + 8328;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8320
	r25.s64 = r11.s64 + 8320;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,8316
	r24.s64 = r11.s64 + 8316;
loc_8248DD20:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,2(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lbz r11,3(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// extsb r6,r11
	ctx.r6.s64 = r11.s8;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248dd20
	if (cr6.lt) goto loc_8248DD20;
loc_8248DDB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r25,r11,8300
	r25.s64 = r11.s64 + 8300;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// lwz r30,0(r17)
	r30.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248de70
	if (!cr6.lt) goto loc_8248DE70;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,-22544
	r29.s64 = r11.s64 + -22544;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8292
	r28.s64 = r11.s64 + 8292;
loc_8248DE0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 4);
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248de0c
	if (cr6.lt) goto loc_8248DE0C;
loc_8248DE70:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd1c
	return;
}

__attribute__((alias("__imp__sub_8248DE84"))) PPC_WEAK_FUNC(sub_8248DE84);
PPC_FUNC_IMPL(__imp__sub_8248DE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248DE88"))) PPC_WEAK_FUNC(sub_8248DE88);
PPC_FUNC_IMPL(__imp__sub_8248DE88) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r27,r11,24272
	r27.s64 = r11.s64 + 24272;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,7948
	ctx.r4.s64 = r11.s64 + 7948;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8248dee8
	if (cr6.eq) goto loc_8248DEE8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,18664
	ctx.r4.s64 = r11.s64 + 18664;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
loc_8248DEE8:
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r4,r10,-19392
	ctx.r4.s64 = ctx.r10.s64 + -19392;
	// addi r11,r11,-4316
	r11.s64 = r11.s64 + -4316;
	// rotlwi r10,r9,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,7836
	r29.s64 = r11.s64 + 7836;
	// beq cr6,0x8248df80
	if (cr6.eq) goto loc_8248DF80;
	// lhz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-4392
	r11.s64 = r11.s64 + -4392;
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lhz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x8248df60
	if (cr6.eq) goto loc_8248DF60;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,30408
	ctx.r5.s64 = r11.s64 + 30408;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
loc_8248DF60:
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x8248df80
	if (cr6.eq) goto loc_8248DF80;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,8408
	ctx.r5.s64 = r11.s64 + 8408;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
loc_8248DF80:
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x8248dfa0
	if (cr6.eq) goto loc_8248DFA0;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r5,r11,21052
	ctx.r5.s64 = r11.s64 + 21052;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
loc_8248DFA0:
	// lhz r11,0(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// bne cr6,0x8248e004
	if (!cr6.eq) goto loc_8248E004;
	// lhz r29,10(r30)
	r29.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// add r30,r11,r28
	r30.u64 = r11.u64 + r28.u64;
	// beq cr6,0x8248dff4
	if (cr6.eq) goto loc_8248DFF4;
loc_8248DFC8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r7,r10,r28
	ctx.r7.u64 = ctx.r10.u64 + r28.u64;
	// add r6,r11,r28
	ctx.r6.u64 = r11.u64 + r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8248de88
	sub_8248DE88(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// bne 0x8248dfc8
	if (!cr0.eq) goto loc_8248DFC8;
loc_8248DFF4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// b 0x8248e008
	goto loc_8248E008;
loc_8248E004:
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
loc_8248E008:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8248E010"))) PPC_WEAK_FUNC(sub_8248E010);
PPC_FUNC_IMPL(__imp__sub_8248E010) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r28,r11,-32604
	r28.s64 = r11.s64 + -32604;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,7948
	ctx.r4.s64 = r11.s64 + 7948;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lhz r11,8(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8248e0bc
	if (cr0.eq) goto loc_8248E0BC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lhz r6,6(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// addi r11,r11,8432
	r11.s64 = r11.s64 + 8432;
	// addi r4,r10,8424
	ctx.r4.s64 = ctx.r10.s64 + 8424;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbzx r11,r9,r11
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = r11.s8;
	// bl 0x8239e3c0
	sub_8239E3C0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,20164
	ctx.r4.s64 = r11.s64 + 20164;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lhz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x8248e0bc
	if (cr6.eq) goto loc_8248E0BC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r5,r11,8416
	ctx.r5.s64 = r11.s64 + 8416;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,7836
	ctx.r4.s64 = r11.s64 + 7836;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
loc_8248E0BC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r7,r10,r29
	ctx.r7.u64 = ctx.r10.u64 + r29.u64;
	// add r6,r11,r29
	ctx.r6.u64 = r11.u64 + r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248de88
	sub_8248DE88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8248E0F8"))) PPC_WEAK_FUNC(sub_8248E0F8);
PPC_FUNC_IMPL(__imp__sub_8248E0F8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,128(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248e19c
	if (cr6.lt) goto loc_8248E19C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r31,388(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 388);
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r27,r11,8436
	r27.s64 = r11.s64 + 8436;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// addi r4,r11,7948
	ctx.r4.s64 = r11.s64 + 7948;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8248e190
	if (cr6.eq) goto loc_8248E190;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r29,0
	r29.s64 = 0;
	// add r28,r11,r31
	r28.u64 = r11.u64 + r31.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8248e190
	if (!cr6.gt) goto loc_8248E190;
loc_8248E168:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8248e010
	sub_8248E010(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,20
	r28.s64 = r28.s64 + 20;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x8248e168
	if (cr6.lt) goto loc_8248E168;
loc_8248E190:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
loc_8248E19C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8248E1A4"))) PPC_WEAK_FUNC(sub_8248E1A4);
PPC_FUNC_IMPL(__imp__sub_8248E1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248E1A8"))) PPC_WEAK_FUNC(sub_8248E1A8);
PPC_FUNC_IMPL(__imp__sub_8248E1A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248cfc0
	sub_8248CFC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248E1AC"))) PPC_WEAK_FUNC(sub_8248E1AC);
PPC_FUNC_IMPL(__imp__sub_8248E1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248E1B0"))) PPC_WEAK_FUNC(sub_8248E1B0);
PPC_FUNC_IMPL(__imp__sub_8248E1B0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248d080
	sub_8248D080(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8248E1B4"))) PPC_WEAK_FUNC(sub_8248E1B4);
PPC_FUNC_IMPL(__imp__sub_8248E1B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248E1B8"))) PPC_WEAK_FUNC(sub_8248E1B8);
PPC_FUNC_IMPL(__imp__sub_8248E1B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x8239bcfc
	// lis r11,20042
	r11.s64 = 1313472512;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,144(r3)
	PPC_STORE_U32(ctx.r3.u32 + 144, r11.u32);
	// bge cr6,0x8248e1e4
	if (!cr6.lt) goto loc_8248E1E4;
	// li r11,0
	r11.s64 = 0;
	// stw r11,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, r11.u32);
	// b 0x8248e460
	goto loc_8248E460;
loc_8248E1E4:
	// lwz r31,56(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lis r11,-19687
	r11.s64 = -1290207232;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// ori r11,r11,62707
	r11.u64 = r11.u64 | 62707;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// bge cr6,0x8248e288
	if (!cr6.lt) goto loc_8248E288;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mulli r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 * 40;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8248E220:
	// mr r8,r31
	ctx.r8.u64 = r31.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8248e250
	if (cr6.eq) goto loc_8248E250;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// b 0x8248e248
	goto loc_8248E248;
loc_8248E234:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrldi r6,r10,56
	ctx.r6.u64 = ctx.r10.u64 & 0xFF;
	// mulld r10,r7,r11
	ctx.r10.s64 = ctx.r7.s64 * r11.s64;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
loc_8248E248:
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8248e234
	if (!cr0.eq) goto loc_8248E234;
loc_8248E250:
	// addi r8,r31,32
	ctx.r8.s64 = r31.s64 + 32;
	// cmpwi cr6,r31,-32
	cr6.compare<int32_t>(r31.s32, -32, xer);
	// beq cr6,0x8248e27c
	if (cr6.eq) goto loc_8248E27C;
	// b 0x8248e270
	goto loc_8248E270;
loc_8248E260:
	// clrldi r6,r10,56
	ctx.r6.u64 = ctx.r10.u64 & 0xFF;
	// mulld r10,r7,r11
	ctx.r10.s64 = ctx.r7.s64 * r11.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_8248E270:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8248e260
	if (!cr0.eq) goto loc_8248E260;
loc_8248E27C:
	// addi r31,r31,40
	r31.s64 = r31.s64 + 40;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8248e220
	if (cr6.lt) goto loc_8248E220;
loc_8248E288:
	// lwz r31,32(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(r31.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8248e350
	if (!cr6.lt) goto loc_8248E350;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(r31.u32, 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r29,r10,r8
	r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r10,9120
	r30.s64 = ctx.r10.s64 + 9120;
loc_8248E2BC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8248e2d0
	if (!cr6.eq) goto loc_8248E2D0;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// b 0x8248e2d8
	goto loc_8248E2D8;
loc_8248E2D0:
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_8248E2D8:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8248e300
	if (cr6.eq) goto loc_8248E300;
	// b 0x8248e2f4
	goto loc_8248E2F4;
loc_8248E2E4:
	// clrldi r6,r10,56
	ctx.r6.u64 = ctx.r10.u64 & 0xFF;
	// mulld r10,r7,r11
	ctx.r10.s64 = ctx.r7.s64 * r11.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_8248E2F4:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8248e2e4
	if (!cr0.eq) goto loc_8248E2E4;
loc_8248E300:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// bne cr6,0x8248e314
	if (!cr6.eq) goto loc_8248E314;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// b 0x8248e31c
	goto loc_8248E31C;
loc_8248E314:
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_8248E31C:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x8248e344
	if (cr6.eq) goto loc_8248E344;
	// b 0x8248e338
	goto loc_8248E338;
loc_8248E328:
	// clrldi r6,r10,56
	ctx.r6.u64 = ctx.r10.u64 & 0xFF;
	// mulld r10,r7,r11
	ctx.r10.s64 = ctx.r7.s64 * r11.s64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
loc_8248E338:
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8248e328
	if (!cr0.eq) goto loc_8248E328;
loc_8248E344:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x8248e2bc
	if (cr6.lt) goto loc_8248E2BC;
loc_8248E350:
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mulli r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 * 276;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// bge cr6,0x8248e3d4
	if (!cr6.lt) goto loc_8248E3D4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rotlwi r8,r31,0
	ctx.r8.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mulli r10,r10,276
	ctx.r10.s64 = ctx.r10.s64 * 276;
	// add r30,r10,r8
	r30.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8248E37C:
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x8248e3c8
	if (cr0.eq) goto loc_8248E3C8;
	// b 0x8248e3bc
	goto loc_8248E3BC;
loc_8248E38C:
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x8248e3b8
	if (cr6.eq) goto loc_8248E3B8;
	// cmpwi cr6,r10,10
	cr6.compare<int32_t>(ctx.r10.s32, 10, xer);
	// beq cr6,0x8248e3b8
	if (cr6.eq) goto loc_8248E3B8;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// beq cr6,0x8248e3b8
	if (cr6.eq) goto loc_8248E3B8;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// beq cr6,0x8248e3b8
	if (cr6.eq) goto loc_8248E3B8;
	// clrldi r8,r8,56
	ctx.r8.u64 = ctx.r8.u64 & 0xFF;
	// mulld r10,r7,r11
	ctx.r10.s64 = ctx.r7.s64 * r11.s64;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8248E3B8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_8248E3BC:
	// lbz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// extsb. r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8248e38c
	if (!cr0.eq) goto loc_8248E38C;
loc_8248E3C8:
	// addi r31,r31,276
	r31.s64 = r31.s64 + 276;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// blt cr6,0x8248e37c
	if (cr6.lt) goto loc_8248E37C;
loc_8248E3D4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x8248e458
	if (cr6.eq) goto loc_8248E458;
	// b 0x8248e3f0
	goto loc_8248E3F0;
loc_8248E3E0:
	// clrldi r8,r10,56
	ctx.r8.u64 = ctx.r10.u64 & 0xFF;
	// mulld r10,r7,r11
	ctx.r10.s64 = ctx.r7.s64 * r11.s64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_8248E3F0:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8248e3e0
	if (!cr0.eq) goto loc_8248E3E0;
	// rlwinm r10,r5,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0xFF;
	// rlwinm r9,r5,16,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFF;
	// mulld r10,r10,r11
	ctx.r10.s64 = ctx.r10.s64 * r11.s64;
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lis r8,-27911
	ctx.r8.s64 = -1829175296;
	// lis r6,14763
	ctx.r6.s64 = 967507968;
	// ori r8,r8,11883
	ctx.r8.u64 = ctx.r8.u64 | 11883;
	// ori r6,r6,49284
	ctx.r6.u64 = ctx.r6.u64 | 49284;
	// mulld r11,r10,r11
	r11.s64 = ctx.r10.s64 * r11.s64;
	// rldimi r8,r6,32,0
	ctx.r8.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r8.u64 & 0xFFFFFFFF);
	// mulld r10,r9,r8
	ctx.r10.s64 = ctx.r9.s64 * ctx.r8.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lis r10,23608
	ctx.r10.s64 = 1547173888;
	// lis r8,-3780
	ctx.r8.s64 = -247726080;
	// rlwinm r9,r5,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFF;
	// ori r10,r10,2961
	ctx.r10.u64 = ctx.r10.u64 | 2961;
	// ori r8,r8,44983
	ctx.r8.u64 = ctx.r8.u64 | 44983;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rldimi r10,r8,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// mulld r10,r7,r10
	ctx.r10.s64 = ctx.r7.s64 * ctx.r10.s64;
	// add r7,r11,r10
	ctx.r7.u64 = r11.u64 + ctx.r10.u64;
loc_8248E458:
	// rldicl r11,r7,32,32
	r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF;
	// stw r7,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r7.u32);
loc_8248E460:
	// stw r11,148(r3)
	PPC_STORE_U32(ctx.r3.u32 + 148, r11.u32);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8248E468"))) PPC_WEAK_FUNC(sub_8248E468);
PPC_FUNC_IMPL(__imp__sub_8248E468) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r21,r11,8484
	r21.s64 = r11.s64 + 8484;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// addi r27,r11,7948
	r27.s64 = r11.s64 + 7948;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r5,116(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 116);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi r5,0
	cr0.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// addi r22,r11,18664
	r22.s64 = r11.s64 + 18664;
	// beq 0x8248e4c4
	if (cr0.eq) goto loc_8248E4C4;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
loc_8248E4C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r23,r11,17416
	r23.s64 = r11.s64 + 17416;
	// beq cr6,0x8248e5d0
	if (cr6.eq) goto loc_8248E5D0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r26,r11,8476
	r26.s64 = r11.s64 + 8476;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// addi r29,r28,32
	r29.s64 = r28.s64 + 32;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248e5c4
	if (!cr6.lt) goto loc_8248E5C4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r24,r11,9120
	r24.s64 = r11.s64 + 9120;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r25,r11,19412
	r25.s64 = r11.s64 + 19412;
loc_8248E538:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8248e564
	if (!cr6.eq) goto loc_8248E564;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x8248e56c
	goto loc_8248E56C;
loc_8248E564:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
loc_8248E56C:
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8248e58c
	if (!cr6.eq) goto loc_8248E58C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x8248e594
	goto loc_8248E594;
loc_8248E58C:
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
loc_8248E594:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248e538
	if (cr6.lt) goto loc_8248E538;
loc_8248E5C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
loc_8248E5D0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r26,r11,8464
	r26.s64 = r11.s64 + 8464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// addi r29,r28,56
	r29.s64 = r28.s64 + 56;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rotlwi r10,r30,0
	ctx.r10.u64 = __builtin_rotateleft32(r30.u32, 0);
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248e67c
	if (!cr6.lt) goto loc_8248E67C;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8452
	r28.s64 = r11.s64 + 8452;
loc_8248E620:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// addi r5,r30,32
	ctx.r5.s64 = r30.s64 + 32;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r30,r30,40
	r30.s64 = r30.s64 + 40;
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248e620
	if (cr6.lt) goto loc_8248E620;
loc_8248E67C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8248E69C"))) PPC_WEAK_FUNC(sub_8248E69C);
PPC_FUNC_IMPL(__imp__sub_8248E69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248E6A0"))) PPC_WEAK_FUNC(sub_8248E6A0);
PPC_FUNC_IMPL(__imp__sub_8248E6A0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r18,r11,8492
	r18.s64 = r11.s64 + 8492;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r18
	ctx.r5.u64 = r18.u64;
	// addi r22,r11,7948
	r22.s64 = r11.s64 + 7948;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e2d0
	sub_8240E2D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r29,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r26,r3
	r26.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bne 0x8248e71c
	if (!cr0.eq) goto loc_8248E71C;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,128(r21)
	PPC_STORE_U32(r21.u32 + 128, r11.u32);
	// b 0x8248e858
	goto loc_8248E858;
loc_8248E71C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240e640
	sub_8240E640(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r19,r26,8
	r19.s64 = r26.s64 + 8;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248e84c
	if (!cr6.lt) goto loc_8248E84C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r20,r11,9120
	r20.s64 = r11.s64 + 9120;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,7836
	r29.s64 = r11.s64 + 7836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,7980
	r25.s64 = r11.s64 + 7980;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,-22184
	r24.s64 = r11.s64 + -22184;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,7956
	r23.s64 = r11.s64 + 7956;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,-22196
	r28.s64 = r11.s64 + -22196;
loc_8248E778:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8248e830
	if (cr0.eq) goto loc_8248E830;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// srawi r6,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r6.s64 = r11.s32 >> 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8248e800
	if (!cr6.eq) goto loc_8248E800;
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// b 0x8248e808
	goto loc_8248E808;
loc_8248E800:
	// lwz r10,44(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 44);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + r11.u64;
loc_8248E808:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// bl 0x8248de88
	sub_8248DE88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
loc_8248E830:
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248e778
	if (cr6.lt) goto loc_8248E778;
loc_8248E84C:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_8248E858:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8248E86C"))) PPC_WEAK_FUNC(sub_8248E86C);
PPC_FUNC_IMPL(__imp__sub_8248E86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248E870"))) PPC_WEAK_FUNC(sub_8248E870);
PPC_FUNC_IMPL(__imp__sub_8248E870) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r19,r11,8524
	r19.s64 = r11.s64 + 8524;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// addi r24,r11,7948
	r24.s64 = r11.s64 + 7948;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r30,0(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x8248ea0c
	if (!cr6.lt) goto loc_8248EA0C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r20,r11,9120
	r20.s64 = r11.s64 + 9120;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,7836
	r28.s64 = r11.s64 + 7836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8512
	r23.s64 = r11.s64 + 8512;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,8504
	r22.s64 = r11.s64 + 8504;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r21,r11,18664
	r21.s64 = r11.s64 + 18664;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,7956
	r26.s64 = r11.s64 + 7956;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,-22184
	r25.s64 = r11.s64 + -22184;
loc_8248E908:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// divw r6,r11,r10
	ctx.r6.s32 = r11.s32 / ctx.r10.s32;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x8248e954
	if (!cr6.eq) goto loc_8248E954;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// b 0x8248e95c
	goto loc_8248E95C;
loc_8248E954:
	// lwz r10,44(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 44);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
loc_8248E95C:
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// b 0x8248e9dc
	goto loc_8248E9DC;
loc_8248E998:
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf18
	sub_8248CF18(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_8248E9DC:
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// blt cr6,0x8248e998
	if (cr6.lt) goto loc_8248E998;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248e908
	if (cr6.lt) goto loc_8248E908;
loc_8248EA0C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8248EA20"))) PPC_WEAK_FUNC(sub_8248EA20);
PPC_FUNC_IMPL(__imp__sub_8248EA20) {
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
	// ble cr6,0x8248ea54
	if (!cr6.gt) goto loc_8248EA54;
	// bl 0x8248c6b0
	sub_8248C6B0(ctx, base);
loc_8248EA54:
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

__attribute__((alias("__imp__sub_8248EA8C"))) PPC_WEAK_FUNC(sub_8248EA8C);
PPC_FUNC_IMPL(__imp__sub_8248EA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248EA90"))) PPC_WEAK_FUNC(sub_8248EA90);
PPC_FUNC_IMPL(__imp__sub_8248EA90) {
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
	// ble cr6,0x8248eac4
	if (!cr6.gt) goto loc_8248EAC4;
	// bl 0x8248c740
	sub_8248C740(ctx, base);
loc_8248EAC4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,24
	ctx.r5.s64 = 24;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
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

__attribute__((alias("__imp__sub_8248EB04"))) PPC_WEAK_FUNC(sub_8248EB04);
PPC_FUNC_IMPL(__imp__sub_8248EB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248EB08"))) PPC_WEAK_FUNC(sub_8248EB08);
PPC_FUNC_IMPL(__imp__sub_8248EB08) {
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
	// ble cr6,0x8248eb3c
	if (!cr6.gt) goto loc_8248EB3C;
	// bl 0x8248c7d0
	sub_8248C7D0(ctx, base);
loc_8248EB3C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8248EB90"))) PPC_WEAK_FUNC(sub_8248EB90);
PPC_FUNC_IMPL(__imp__sub_8248EB90) {
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
	// ble cr6,0x8248ebc4
	if (!cr6.gt) goto loc_8248EBC4;
	// bl 0x8248caa0
	sub_8248CAA0(ctx, base);
loc_8248EBC4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8248EC08"))) PPC_WEAK_FUNC(sub_8248EC08);
PPC_FUNC_IMPL(__imp__sub_8248EC08) {
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
	// ble cr6,0x8248ec3c
	if (!cr6.gt) goto loc_8248EC3C;
	// bl 0x8248cb30
	sub_8248CB30(ctx, base);
loc_8248EC3C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// stb r10,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// stb r10,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_8248EC90"))) PPC_WEAK_FUNC(sub_8248EC90);
PPC_FUNC_IMPL(__imp__sub_8248EC90) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x8248ecc4
	if (!cr6.gt) goto loc_8248ECC4;
	// bl 0x8248cbc0
	sub_8248CBC0(ctx, base);
loc_8248ECC4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,5
	r11.s64 = 5;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8248ECE0:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8248ece0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8248ECE0;
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

__attribute__((alias("__imp__sub_8248ED18"))) PPC_WEAK_FUNC(sub_8248ED18);
PPC_FUNC_IMPL(__imp__sub_8248ED18) {
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
	// ble cr6,0x8248ed4c
	if (!cr6.gt) goto loc_8248ED4C;
	// bl 0x8248cc50
	sub_8248CC50(ctx, base);
loc_8248ED4C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,276
	ctx.r5.s64 = 276;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
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

__attribute__((alias("__imp__sub_8248ED8C"))) PPC_WEAK_FUNC(sub_8248ED8C);
PPC_FUNC_IMPL(__imp__sub_8248ED8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248ED90"))) PPC_WEAK_FUNC(sub_8248ED90);
PPC_FUNC_IMPL(__imp__sub_8248ED90) {
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
	// ble cr6,0x8248edc4
	if (!cr6.gt) goto loc_8248EDC4;
	// bl 0x8248cd70
	sub_8248CD70(ctx, base);
loc_8248EDC4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8248EE08"))) PPC_WEAK_FUNC(sub_8248EE08);
PPC_FUNC_IMPL(__imp__sub_8248EE08) {
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
	// ble cr6,0x8248ee3c
	if (!cr6.gt) goto loc_8248EE3C;
	// bl 0x8248ce88
	sub_8248CE88(ctx, base);
loc_8248EE3C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r11,r11,40
	r11.s64 = r11.s64 * 40;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
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

__attribute__((alias("__imp__sub_8248EE7C"))) PPC_WEAK_FUNC(sub_8248EE7C);
PPC_FUNC_IMPL(__imp__sub_8248EE7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248EE80"))) PPC_WEAK_FUNC(sub_8248EE80);
PPC_FUNC_IMPL(__imp__sub_8248EE80) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,8536
	r11.s64 = r11.s64 + 8536;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// addi r28,r30,56
	r28.s64 = r30.s64 + 56;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// addi r27,r30,128
	r27.s64 = r30.s64 + 128;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r31.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r31.u32);
	// stw r31,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r31.u32);
	// stw r31,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r31.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r11,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r11.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// stw r31,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r31.u32);
	// stw r31,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r31.u32);
	// sth r31,140(r30)
	PPC_STORE_U16(r30.u32 + 140, r31.u16);
	// sth r31,142(r30)
	PPC_STORE_U16(r30.u32 + 142, r31.u16);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x8248ef24
	if (!cr6.lt) goto loc_8248EF24;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8248cd70
	sub_8248CD70(ctx, base);
loc_8248EF24:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x8248ef44
	if (!cr6.lt) goto loc_8248EF44;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248cce0
	sub_8248CCE0(ctx, base);
loc_8248EF44:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bge cr6,0x8248ef64
	if (!cr6.lt) goto loc_8248EF64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8248ce88
	sub_8248CE88(ctx, base);
loc_8248EF64:
	// stw r31,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r31.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r31,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r31.u32);
	// stw r31,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r31.u32);
	// stw r31,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8248EF80"))) PPC_WEAK_FUNC(sub_8248EF80);
PPC_FUNC_IMPL(__imp__sub_8248EF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,120(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,120(r11)
	PPC_STORE_U32(r11.u32 + 120, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248EF94"))) PPC_WEAK_FUNC(sub_8248EF94);
PPC_FUNC_IMPL(__imp__sub_8248EF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248EF98"))) PPC_WEAK_FUNC(sub_8248EF98);
PPC_FUNC_IMPL(__imp__sub_8248EF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// stw r4,272(r11)
	PPC_STORE_U32(r11.u32 + 272, ctx.r4.u32);
	// lhz r11,140(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 140);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,140(r3)
	PPC_STORE_U16(ctx.r3.u32 + 140, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248EFB0"))) PPC_WEAK_FUNC(sub_8248EFB0);
PPC_FUNC_IMPL(__imp__sub_8248EFB0) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248efe0
	if (cr0.eq) goto loc_8248EFE0;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248EFE0:
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

__attribute__((alias("__imp__sub_8248F000"))) PPC_WEAK_FUNC(sub_8248F000);
PPC_FUNC_IMPL(__imp__sub_8248F000) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f030
	if (cr0.eq) goto loc_8248F030;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F030:
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

__attribute__((alias("__imp__sub_8248F050"))) PPC_WEAK_FUNC(sub_8248F050);
PPC_FUNC_IMPL(__imp__sub_8248F050) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f080
	if (cr0.eq) goto loc_8248F080;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F080:
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

__attribute__((alias("__imp__sub_8248F0A0"))) PPC_WEAK_FUNC(sub_8248F0A0);
PPC_FUNC_IMPL(__imp__sub_8248F0A0) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f0d0
	if (cr0.eq) goto loc_8248F0D0;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F0D0:
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

__attribute__((alias("__imp__sub_8248F0F0"))) PPC_WEAK_FUNC(sub_8248F0F0);
PPC_FUNC_IMPL(__imp__sub_8248F0F0) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f120
	if (cr0.eq) goto loc_8248F120;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F120:
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

__attribute__((alias("__imp__sub_8248F140"))) PPC_WEAK_FUNC(sub_8248F140);
PPC_FUNC_IMPL(__imp__sub_8248F140) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f170
	if (cr0.eq) goto loc_8248F170;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F170:
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

__attribute__((alias("__imp__sub_8248F190"))) PPC_WEAK_FUNC(sub_8248F190);
PPC_FUNC_IMPL(__imp__sub_8248F190) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f1c0
	if (cr0.eq) goto loc_8248F1C0;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F1C0:
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

__attribute__((alias("__imp__sub_8248F1E0"))) PPC_WEAK_FUNC(sub_8248F1E0);
PPC_FUNC_IMPL(__imp__sub_8248F1E0) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f210
	if (cr0.eq) goto loc_8248F210;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F210:
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

__attribute__((alias("__imp__sub_8248F230"))) PPC_WEAK_FUNC(sub_8248F230);
PPC_FUNC_IMPL(__imp__sub_8248F230) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f260
	if (cr0.eq) goto loc_8248F260;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F260:
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

__attribute__((alias("__imp__sub_8248F280"))) PPC_WEAK_FUNC(sub_8248F280);
PPC_FUNC_IMPL(__imp__sub_8248F280) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f2b0
	if (cr0.eq) goto loc_8248F2B0;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F2B0:
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

__attribute__((alias("__imp__sub_8248F2D0"))) PPC_WEAK_FUNC(sub_8248F2D0);
PPC_FUNC_IMPL(__imp__sub_8248F2D0) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f300
	if (cr0.eq) goto loc_8248F300;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F300:
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

__attribute__((alias("__imp__sub_8248F320"))) PPC_WEAK_FUNC(sub_8248F320);
PPC_FUNC_IMPL(__imp__sub_8248F320) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f350
	if (cr0.eq) goto loc_8248F350;
	// bl 0x82498020
	sub_82498020(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
loc_8248F350:
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

__attribute__((alias("__imp__sub_8248F370"))) PPC_WEAK_FUNC(sub_8248F370);
PPC_FUNC_IMPL(__imp__sub_8248F370) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248f3f4
	if (!cr6.gt) goto loc_8248F3F4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248f3a0
	if (!cr6.lt) goto loc_8248F3A0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248F3A0:
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248f3c4
	if (!cr0.eq) goto loc_8248F3C4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248f3f4
	goto loc_8248F3F4;
loc_8248F3C4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f3f0
	if (cr0.eq) goto loc_8248F3F0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248F3F0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248F3F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248F3FC"))) PPC_WEAK_FUNC(sub_8248F3FC);
PPC_FUNC_IMPL(__imp__sub_8248F3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248F400"))) PPC_WEAK_FUNC(sub_8248F400);
PPC_FUNC_IMPL(__imp__sub_8248F400) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8248f484
	if (!cr6.gt) goto loc_8248F484;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x8248f430
	if (!cr6.lt) goto loc_8248F430;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_8248F430:
	// rlwinm r4,r30,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82498010
	sub_82498010(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x8248f454
	if (!cr0.eq) goto loc_8248F454;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x8248f484
	goto loc_8248F484;
loc_8248F454:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f480
	if (cr0.eq) goto loc_8248F480;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248F480:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_8248F484:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8248F48C"))) PPC_WEAK_FUNC(sub_8248F48C);
PPC_FUNC_IMPL(__imp__sub_8248F48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248F490"))) PPC_WEAK_FUNC(sub_8248F490);
PPC_FUNC_IMPL(__imp__sub_8248F490) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r11,8536
	r11.s64 = r11.s64 + 8536;
	// addi r26,r27,16
	r26.s64 = r27.s64 + 16;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// rotlwi r10,r28,0
	ctx.r10.u64 = __builtin_rotateleft32(r28.u32, 0);
	// mulli r11,r11,452
	r11.s64 = r11.s64 * 452;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x8248f58c
	if (!cr6.lt) goto loc_8248F58C;
	// addi r31,r28,380
	r31.s64 = r28.s64 + 380;
loc_8248F4D0:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// addi r3,r31,-104
	ctx.r3.s64 = r31.s64 + -104;
	// bl 0x8248f000
	sub_8248F000(ctx, base);
	// addi r3,r31,-92
	ctx.r3.s64 = r31.s64 + -92;
	// bl 0x8248f050
	sub_8248F050(ctx, base);
	// addi r3,r31,-80
	ctx.r3.s64 = r31.s64 + -80;
	// bl 0x8248f0a0
	sub_8248F0A0(ctx, base);
	// addi r3,r31,-68
	ctx.r3.s64 = r31.s64 + -68;
	// bl 0x8248f0f0
	sub_8248F0F0(ctx, base);
	// addi r3,r31,-56
	ctx.r3.s64 = r31.s64 + -56;
	// bl 0x8248f140
	sub_8248F140(ctx, base);
	// addi r3,r31,-44
	ctx.r3.s64 = r31.s64 + -44;
	// bl 0x8240e2e8
	sub_8240E2E8(ctx, base);
	// addi r3,r31,-28
	ctx.r3.s64 = r31.s64 + -28;
	// bl 0x8248f190
	sub_8248F190(ctx, base);
	// addi r3,r31,-16
	ctx.r3.s64 = r31.s64 + -16;
	// bl 0x8248f1e0
	sub_8248F1E0(ctx, base);
	// addi r29,r31,-4
	r29.s64 = r31.s64 + -4;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x8248f534
	goto loc_8248F534;
loc_8248F528:
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x8248efb0
	sub_8248EFB0(ctx, base);
	// addi r30,r30,20
	r30.s64 = r30.s64 + 20;
loc_8248F534:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mulli r11,r11,20
	r11.s64 = r11.s64 * 20;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8248f528
	if (cr6.lt) goto loc_8248F528;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248f230
	sub_8248F230(ctx, base);
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x8248f280
	sub_8248F280(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8248f2d0
	sub_8248F2D0(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// bl 0x8248f320
	sub_8248F320(ctx, base);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addi r28,r28,452
	r28.s64 = r28.s64 + 452;
	// mulli r11,r11,452
	r11.s64 = r11.s64 * 452;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r31,452
	r31.s64 = r31.s64 + 452;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x8248f4d0
	if (cr6.lt) goto loc_8248F4D0;
loc_8248F58C:
	// addi r30,r27,4
	r30.s64 = r27.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8248f5b8
	goto loc_8248F5B8;
loc_8248F59C:
	// lwz r3,272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8248f5b4
	if (cr0.eq) goto loc_8248F5B4;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// stw r29,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r29.u32);
loc_8248F5B4:
	// addi r31,r31,276
	r31.s64 = r31.s64 + 276;
loc_8248F5B8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8248f59c
	if (cr6.lt) goto loc_8248F59C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,116(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 116);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// addi r3,r27,56
	ctx.r3.s64 = r27.s64 + 56;
	// stw r29,116(r27)
	PPC_STORE_U32(r27.u32 + 116, r29.u32);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f5f4
	if (cr0.eq) goto loc_8248F5F4;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248F5F4:
	// addi r3,r27,44
	ctx.r3.s64 = r27.s64 + 44;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f608
	if (cr0.eq) goto loc_8248F608;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248F608:
	// addi r3,r27,32
	ctx.r3.s64 = r27.s64 + 32;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f61c
	if (cr0.eq) goto loc_8248F61C;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248F61C:
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f630
	if (cr0.eq) goto loc_8248F630;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248F630:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8248f644
	if (cr0.eq) goto loc_8248F644;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82498020
	sub_82498020(ctx, base);
loc_8248F644:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8248F64C"))) PPC_WEAK_FUNC(sub_8248F64C);
PPC_FUNC_IMPL(__imp__sub_8248F64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248F650"))) PPC_WEAK_FUNC(sub_8248F650);
PPC_FUNC_IMPL(__imp__sub_8248F650) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8248f680
	goto loc_8248F680;
loc_8248F65C:
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r10,0,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// lwzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// rlwimi r10,r8,2,24,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
loc_8248F680:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r8,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8248f65c
	if (cr6.lt) goto loc_8248F65C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248F69C"))) PPC_WEAK_FUNC(sub_8248F69C);
PPC_FUNC_IMPL(__imp__sub_8248F69C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248F6A0"))) PPC_WEAK_FUNC(sub_8248F6A0);
PPC_FUNC_IMPL(__imp__sub_8248F6A0) {
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
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// addic. r3,r11,-1
	xer.ca = r11.u32 > 0;
	ctx.r3.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,120(r31)
	PPC_STORE_U32(r31.u32 + 120, ctx.r3.u32);
	// bne 0x8248f6dc
	if (!cr0.eq) goto loc_8248F6DC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248f490
	sub_8248F490(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8248F6DC:
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

__attribute__((alias("__imp__sub_8248F6F0"))) PPC_WEAK_FUNC(sub_8248F6F0);
PPC_FUNC_IMPL(__imp__sub_8248F6F0) {
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
	// ble cr6,0x8248f724
	if (!cr6.gt) goto loc_8248F724;
	// bl 0x8248f370
	sub_8248F370(ctx, base);
loc_8248F724:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_8248F768"))) PPC_WEAK_FUNC(sub_8248F768);
PPC_FUNC_IMPL(__imp__sub_8248F768) {
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
	// ble cr6,0x8248f79c
	if (!cr6.gt) goto loc_8248F79C;
	// bl 0x8248f400
	sub_8248F400(ctx, base);
loc_8248F79C:
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

__attribute__((alias("__imp__sub_8248F7D4"))) PPC_WEAK_FUNC(sub_8248F7D4);
PPC_FUNC_IMPL(__imp__sub_8248F7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248F7D8"))) PPC_WEAK_FUNC(sub_8248F7D8);
PPC_FUNC_IMPL(__imp__sub_8248F7D8) {
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
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8248f824
	if (cr0.eq) goto loc_8248F824;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8564
	ctx.r4.s64 = r11.s64 + 8564;
	// bl 0x823a12f0
	sub_823A12F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8248f824
	if (cr0.eq) goto loc_8248F824;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8248f824
	if (cr6.eq) goto loc_8248F824;
	// rotlwi r4,r11,0
	ctx.r4.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r5,256(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 256);
	// b 0x8248f82c
	goto loc_8248F82C;
loc_8248F824:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_8248F82C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248e1b8
	sub_8248E1B8(ctx, base);
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

__attribute__((alias("__imp__sub_8248F848"))) PPC_WEAK_FUNC(sub_8248F848);
PPC_FUNC_IMPL(__imp__sub_8248F848) {
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
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8248f874
	if (!cr6.eq) goto loc_8248F874;
	// bl 0x8248f7d8
	sub_8248F7D8(ctx, base);
loc_8248F874:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,152(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8248f8a4
	if (cr6.eq) goto loc_8248F8A4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8248F8A4:
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

__attribute__((alias("__imp__sub_8248F8BC"))) PPC_WEAK_FUNC(sub_8248F8BC);
PPC_FUNC_IMPL(__imp__sub_8248F8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248F8C0"))) PPC_WEAK_FUNC(sub_8248F8C0);
PPC_FUNC_IMPL(__imp__sub_8248F8C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248f914
	if (cr6.lt) goto loc_8248F914;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8240f360
	sub_8240F360(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8240f360
	sub_8240F360(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,56
	ctx.r3.s64 = r31.s64 + 56;
	// bl 0x8248ee08
	sub_8248EE08(ctx, base);
loc_8248F914:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8248F91C"))) PPC_WEAK_FUNC(sub_8248F91C);
PPC_FUNC_IMPL(__imp__sub_8248F91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248F920"))) PPC_WEAK_FUNC(sub_8248F920);
PPC_FUNC_IMPL(__imp__sub_8248F920) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,128
	r29.s64 = r11.s64 + 128;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8248f974
	if (cr0.lt) goto loc_8248F974;
	// lwz r30,72(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x8248f974
	if (cr6.gt) goto loc_8248F974;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x8248f96c
	if (!cr6.gt) goto loc_8248F96C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c860
	sub_8248C860(ctx, base);
loc_8248F96C:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8248F974:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8248F97C"))) PPC_WEAK_FUNC(sub_8248F97C);
PPC_FUNC_IMPL(__imp__sub_8248F97C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248F980"))) PPC_WEAK_FUNC(sub_8248F980);
PPC_FUNC_IMPL(__imp__sub_8248F980) {
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
	// addi r11,r3,128
	r11.s64 = ctx.r3.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8248f9f0
	if (cr6.lt) goto loc_8248F9F0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r6,r5,12,14,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 12) & 0x3F000) | (ctx.r6.u64 & 0xFFFFFFFFFFFC0FFF);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// rlwinm r31,r4,20,0,11
	r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r7,r7,23,0,8
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0xFF800000;
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// clrlwi r10,r10,10
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFF;
	// or r11,r11,r31
	r11.u64 = r11.u64 | r31.u64;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwimi r11,r6,2,12,29
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 2) & 0xFFFFC) | (r11.u64 & 0xFFFFFFFFFFF00003);
	// rlwimi r10,r8,22,9,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 22) & 0x400000) | (ctx.r10.u64 & 0xFFFFFFFFFFBFFFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8248f6f0
	sub_8248F6F0(ctx, base);
loc_8248F9F0:
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

__attribute__((alias("__imp__sub_8248FA04"))) PPC_WEAK_FUNC(sub_8248FA04);
PPC_FUNC_IMPL(__imp__sub_8248FA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248FA08"))) PPC_WEAK_FUNC(sub_8248FA08);
PPC_FUNC_IMPL(__imp__sub_8248FA08) {
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
	// addi r11,r3,128
	r11.s64 = ctx.r3.s64 + 128;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x8248fa5c
	if (cr6.lt) goto loc_8248FA5C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwimi r4,r5,4,0,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0xFFFFFFF0) | (ctx.r4.u64 & 0xFFFFFFFF0000000F);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// rlwinm r11,r4,20,0,11
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r6,16,12,15
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xF0000) | (r11.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8248f768
	sub_8248F768(ctx, base);
loc_8248FA5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248FA6C"))) PPC_WEAK_FUNC(sub_8248FA6C);
PPC_FUNC_IMPL(__imp__sub_8248FA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248FA70"))) PPC_WEAK_FUNC(sub_8248FA70);
PPC_FUNC_IMPL(__imp__sub_8248FA70) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r11,128
	ctx.r5.s64 = r11.s64 + 128;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8248fb98
	if (cr0.lt) goto loc_8248FB98;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lhz r10,142(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 142);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mulli r11,r3,452
	r11.s64 = ctx.r3.s64 * 452;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8248fae0
	if (cr0.eq) goto loc_8248FAE0;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x8248facc
	if (cr6.lt) goto loc_8248FACC;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// mulli r10,r10,452
	ctx.r10.s64 = ctx.r10.s64 * 452;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8248fae4
	goto loc_8248FAE4;
loc_8248FACC:
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r3,r11,16389
	ctx.r3.u64 = r11.u64 | 16389;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// b 0x8248fb98
	goto loc_8248FB98;
loc_8248FAE0:
	// addi r11,r11,-452
	r11.s64 = r11.s64 + -452;
loc_8248FAE4:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// blt cr6,0x8248fb70
	if (cr6.lt) goto loc_8248FB70;
	// beq cr6,0x8248fb3c
	if (cr6.eq) goto loc_8248FB3C;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x8248fb10
	if (cr6.lt) goto loc_8248FB10;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r3,r11,8568
	ctx.r3.s64 = r11.s64 + 8568;
	// bl 0x8239f470
	sub_8239F470(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8248fb98
	goto loc_8248FB98;
loc_8248FB10:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r3,r11,408
	ctx.r3.s64 = r11.s64 + 408;
	// lwz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// stb r10,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r10.u8);
	// stb r9,82(r1)
	PPC_STORE_U8(ctx.r1.u32 + 82, ctx.r9.u8);
	// stb r8,83(r1)
	PPC_STORE_U8(ctx.r1.u32 + 83, ctx.r8.u8);
	// bl 0x8248ec08
	sub_8248EC08(ctx, base);
	// b 0x8248fb94
	goto loc_8248FB94;
loc_8248FB3C:
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	f0.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f0,100(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r3,r11,420
	ctx.r3.s64 = r11.s64 + 420;
	// lfs f0,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	f0.f64 = double(temp.f32);
	// stb r6,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r6.u8);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// lfs f0,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// bl 0x8248ec90
	sub_8248EC90(ctx, base);
	// b 0x8248fb94
	goto loc_8248FB94;
loc_8248FB70:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r3,r11,396
	ctx.r3.s64 = r11.s64 + 396;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// bl 0x8248eb90
	sub_8248EB90(ctx, base);
loc_8248FB94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8248FB98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8248FBA8"))) PPC_WEAK_FUNC(sub_8248FBA8);
PPC_FUNC_IMPL(__imp__sub_8248FBA8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r3,128
	ctx.r5.s64 = ctx.r3.s64 + 128;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248fc38
	if (cr6.lt) goto loc_8248FC38;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r28,0
	r28.s64 = 0;
	// rlwimi r9,r8,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r30,r29,4,0,27
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r8,r7,31,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x80000000;
	// std r28,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r28.u64);
	// rlwimi r10,r9,13,0,18
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0xFFFFE000) | (ctx.r10.u64 & 0xFFFFFFFF00001FFF);
	// std r28,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r28.u64);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r29.u32);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// oris r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 2147483648;
	// rlwinm r11,r11,0,16,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stwx r9,r31,r30
	PPC_STORE_U32(r31.u32 + r30.u32, ctx.r9.u32);
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x8248eb08
	sub_8248EB08(ctx, base);
loc_8248FC38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8248FC40"))) PPC_WEAK_FUNC(sub_8248FC40);
PPC_FUNC_IMPL(__imp__sub_8248FC40) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,128
	r29.s64 = r11.s64 + 128;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8248fc94
	if (cr0.lt) goto loc_8248FC94;
	// lwz r30,108(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 108);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x8248fc94
	if (cr6.gt) goto loc_8248FC94;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x8248fc8c
	if (!cr6.gt) goto loc_8248FC8C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248ca10
	sub_8248CA10(ctx, base);
loc_8248FC8C:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8248FC94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8248FC9C"))) PPC_WEAK_FUNC(sub_8248FC9C);
PPC_FUNC_IMPL(__imp__sub_8248FC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248FCA0"))) PPC_WEAK_FUNC(sub_8248FCA0);
PPC_FUNC_IMPL(__imp__sub_8248FCA0) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,128
	r29.s64 = r11.s64 + 128;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8248fcf4
	if (cr0.lt) goto loc_8248FCF4;
	// lwz r30,104(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 104);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x8248fcf4
	if (cr6.gt) goto loc_8248FCF4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x8248fcec
	if (!cr6.gt) goto loc_8248FCEC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c980
	sub_8248C980(ctx, base);
loc_8248FCEC:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8248FCF4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8248FCFC"))) PPC_WEAK_FUNC(sub_8248FCFC);
PPC_FUNC_IMPL(__imp__sub_8248FCFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248FD00"))) PPC_WEAK_FUNC(sub_8248FD00);
PPC_FUNC_IMPL(__imp__sub_8248FD00) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r26,r28,128
	r26.s64 = r28.s64 + 128;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248fda4
	if (cr6.lt) goto loc_8248FDA4;
	// lwz r29,104(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x8248fd70
	if (cr6.gt) goto loc_8248FD70;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// ble cr6,0x8248fd60
	if (!cr6.gt) goto loc_8248FD60;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248c980
	sub_8248C980(ctx, base);
loc_8248FD60:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248fda4
	if (cr6.lt) goto loc_8248FDA4;
loc_8248FD70:
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// rlwimi r30,r24,1,0,30
	r30.u64 = (__builtin_rotateleft32(r24.u32, 1) & 0xFFFFFFFE) | (r30.u64 & 0xFFFFFFFF00000001);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r30,18,0,13
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0xFFFC0000;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// clrlwi r9,r9,15
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// oris r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 131072;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_8248FDA4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8248FDAC"))) PPC_WEAK_FUNC(sub_8248FDAC);
PPC_FUNC_IMPL(__imp__sub_8248FDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248FDB0"))) PPC_WEAK_FUNC(sub_8248FDB0);
PPC_FUNC_IMPL(__imp__sub_8248FDB0) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r26,r28,128
	r26.s64 = r28.s64 + 128;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248fe50
	if (cr6.lt) goto loc_8248FE50;
	// lwz r29,104(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x8248fe20
	if (cr6.gt) goto loc_8248FE20;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// ble cr6,0x8248fe10
	if (!cr6.gt) goto loc_8248FE10;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248c980
	sub_8248C980(ctx, base);
loc_8248FE10:
	// stw r27,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r27.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248fe50
	if (cr6.lt) goto loc_8248FE50;
loc_8248FE20:
	// lwz r10,104(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 104);
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// rlwimi r30,r24,1,0,30
	r30.u64 = (__builtin_rotateleft32(r24.u32, 1) & 0xFFFFFFFE) | (r30.u64 & 0xFFFFFFFF00000001);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r10,r30,18,0,13
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 18) & 0xFFFC0000;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// clrlwi r9,r9,15
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFF;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_8248FE50:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8248FE58"))) PPC_WEAK_FUNC(sub_8248FE58);
PPC_FUNC_IMPL(__imp__sub_8248FE58) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r11,128
	r29.s64 = r11.s64 + 128;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x8248feac
	if (cr0.lt) goto loc_8248FEAC;
	// lwz r30,100(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x8248feac
	if (cr6.gt) goto loc_8248FEAC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x8248fea4
	if (!cr6.gt) goto loc_8248FEA4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c8f0
	sub_8248C8F0(ctx, base);
loc_8248FEA4:
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_8248FEAC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8248FEB4"))) PPC_WEAK_FUNC(sub_8248FEB4);
PPC_FUNC_IMPL(__imp__sub_8248FEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8248FEB8"))) PPC_WEAK_FUNC(sub_8248FEB8);
PPC_FUNC_IMPL(__imp__sub_8248FEB8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r27,r28,128
	r27.s64 = r28.s64 + 128;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248ff40
	if (cr6.lt) goto loc_8248FF40;
	// lwz r31,100(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 100);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bgt cr6,0x8248ff20
	if (cr6.gt) goto loc_8248FF20;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r30,r29,1
	r30.s64 = r29.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8248ff10
	if (!cr6.gt) goto loc_8248FF10;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c8f0
	sub_8248C8F0(ctx, base);
loc_8248FF10:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8248ff40
	if (cr6.lt) goto loc_8248FF40;
loc_8248FF20:
	// lwz r10,100(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 100);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r26,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r26.u32);
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_8248FF40:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8248FF48"))) PPC_WEAK_FUNC(sub_8248FF48);
PPC_FUNC_IMPL(__imp__sub_8248FF48) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm. r28,r11,27,31,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82490088
	if (cr0.eq) goto loc_82490088;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r11,9120
	r30.s64 = r11.s64 + 9120;
loc_8248FF74:
	// addi r31,r29,4
	r31.s64 = r29.s64 + 4;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// bge cr6,0x8248ffe4
	if (!cr6.lt) goto loc_8248FFE4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rotlwi r10,r8,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// mulli r11,r11,276
	r11.s64 = r11.s64 * 276;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
loc_8248FFA4:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_8248FFAC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x8248ffd0
	if (cr0.eq) goto loc_8248FFD0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x8248ffac
	if (cr6.eq) goto loc_8248FFAC;
loc_8248FFD0:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x824900c0
	if (cr0.eq) goto loc_824900C0;
	// addi r8,r8,276
	ctx.r8.s64 = ctx.r8.s64 + 276;
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// blt cr6,0x8248ffa4
	if (cr6.lt) goto loc_8248FFA4;
loc_8248FFE4:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, r11.u32);
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// stb r11,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, r11.u8);
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, r11.u32);
	// bne cr6,0x82490054
	if (!cr6.eq) goto loc_82490054;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,128
	ctx.r8.s64 = 128;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b5b78
	sub_823B5B78(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x82490054
	if (cr6.eq) goto loc_82490054;
	// addi r6,r1,344
	ctx.r6.s64 = ctx.r1.s64 + 344;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a8c18
	sub_826A8C18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
loc_82490054:
	// addi r30,r29,128
	r30.s64 = r29.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8248ed18
	sub_8248ED18(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x8249007c
	if (cr6.lt) goto loc_8249007C;
	// lwz r11,340(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
loc_8249007C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82490080:
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x8239bd44
	return;
loc_82490088:
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82490090:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82490090
	if (!cr6.eq) goto loc_82490090;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r11,260
	cr6.compare<uint32_t>(r11.u32, 260, xer);
	// blt cr6,0x8248ff74
	if (cr6.lt) goto loc_8248FF74;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82490080
	goto loc_82490080;
loc_824900C0:
	// lwz r11,260(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 260);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x82490080
	goto loc_82490080;
}

__attribute__((alias("__imp__sub_824900D0"))) PPC_WEAK_FUNC(sub_824900D0);
PPC_FUNC_IMPL(__imp__sub_824900D0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r28,r11,8704
	r28.s64 = r11.s64 + 8704;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r11,7948
	ctx.r4.s64 = r11.s64 + 7948;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// addi r18,r29,16
	r18.s64 = r29.s64 + 16;
	// lwz r31,0(r18)
	r31.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mulli r11,r11,452
	r11.s64 = r11.s64 * 452;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x824903f4
	if (!cr6.lt) goto loc_824903F4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,7836
	r28.s64 = r11.s64 + 7836;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r26,r11,8676
	r26.s64 = r11.s64 + 8676;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8668
	r25.s64 = r11.s64 + 8668;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r24,r11,8660
	r24.s64 = r11.s64 + 8660;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8648
	r23.s64 = r11.s64 + 8648;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,8632
	r22.s64 = r11.s64 + 8632;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,8612
	r21.s64 = r11.s64 + 8612;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r20,r11,28400
	r20.s64 = r11.s64 + 28400;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r19,r11,8600
	r19.s64 = r11.s64 + 8600;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r16,r11,-18912
	r16.s64 = r11.s64 + -18912;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r15,r11,8596
	r15.s64 = r11.s64 + 8596;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r14,r11,5980
	r14.s64 = r11.s64 + 5980;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,5768
	r11.s64 = r11.s64 + 5768;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r17,r11,28344
	r17.s64 = r11.s64 + 28344;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,8588
	r27.s64 = r11.s64 + 8588;
loc_824901B4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r5,15
	ctx.r5.s64 = 15;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,97
	ctx.r3.s64 = ctx.r1.s64 + 97;
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, r11.u8);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x824902d8
	if (cr6.eq) goto loc_824902D8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r17
	ctx.r4.u64 = r17.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lwz r11,256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 256);
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82490244
	if (cr6.eq) goto loc_82490244;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8249023c
	if (cr6.eq) goto loc_8249023C;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82490234
	if (cr6.eq) goto loc_82490234;
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// b 0x82490248
	goto loc_82490248;
loc_82490234:
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// b 0x82490248
	goto loc_82490248;
loc_8249023C:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82490248
	goto loc_82490248;
loc_82490244:
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
loc_82490248:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// lbz r8,259(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 259);
	// li r4,16
	ctx.r4.s64 = 16;
	// lbz r7,258(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 258);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823a1348
	sub_823A1348(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// lwz r11,436(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 436);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x824902a4
	if (cr6.eq) goto loc_824902A4;
	// lwz r10,44(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,432(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
loc_824902A4:
	// lwz r10,444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 444);
	// cmpwi cr6,r10,-1
	cr6.compare<int32_t>(ctx.r10.s32, -1, xer);
	// beq cr6,0x824902d8
	if (cr6.eq) goto loc_824902D8;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// add r5,r11,r10
	ctx.r5.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8248c240
	sub_8248C240(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r6,440(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 440);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
loc_824902D8:
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,448(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 448);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r7,268(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// lwz r6,264(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248e0f8
	sub_8248E0F8(ctx, base);
	// addi r5,r31,276
	ctx.r5.s64 = r31.s64 + 276;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248d268
	sub_8248D268(ctx, base);
	// addi r6,r31,336
	ctx.r6.s64 = r31.s64 + 336;
	// addi r5,r31,324
	ctx.r5.s64 = r31.s64 + 324;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248e6a0
	sub_8248E6A0(ctx, base);
	// addi r5,r31,288
	ctx.r5.s64 = r31.s64 + 288;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248d3b8
	sub_8248D3B8(ctx, base);
	// addi r5,r31,352
	ctx.r5.s64 = r31.s64 + 352;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248d578
	sub_8248D578(ctx, base);
	// addi r5,r31,376
	ctx.r5.s64 = r31.s64 + 376;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248e870
	sub_8248E870(ctx, base);
	// addi r5,r31,364
	ctx.r5.s64 = r31.s64 + 364;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248d680
	sub_8248D680(ctx, base);
	// addi r5,r31,300
	ctx.r5.s64 = r31.s64 + 300;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r6,272(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248d7d8
	sub_8248D7D8(ctx, base);
	// addi r5,r31,312
	ctx.r5.s64 = r31.s64 + 312;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248d9a8
	sub_8248D9A8(ctx, base);
	// addi r7,r31,420
	ctx.r7.s64 = r31.s64 + 420;
	// addi r6,r31,408
	ctx.r6.s64 = r31.s64 + 408;
	// addi r5,r31,396
	ctx.r5.s64 = r31.s64 + 396;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248db50
	sub_8248DB50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// lwz r11,4(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 4);
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// addi r31,r31,452
	r31.s64 = r31.s64 + 452;
	// mulli r11,r11,452
	r11.s64 = r11.s64 * 452;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x824901b4
	if (cr6.lt) goto loc_824901B4;
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_824903F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_82490408"))) PPC_WEAK_FUNC(sub_82490408);
PPC_FUNC_IMPL(__imp__sub_82490408) {
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
	// addi r26,r3,128
	r26.s64 = ctx.r3.s64 + 128;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r25,-1
	r25.s64 = -1;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x824904a4
	if (cr6.lt) goto loc_824904A4;
	// mr r11,r27
	r11.u64 = r27.u64;
	// lwz r29,48(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82490438:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82490438
	if (!cr6.eq) goto loc_82490438;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r31,r3,44
	r31.s64 = ctx.r3.s64 + 44;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r28,r11,0
	r28.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r28,r29
	r11.u64 = r28.u64 + r29.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x8249047c
	if (!cr6.gt) goto loc_8249047C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248ce00
	sub_8248CE00(ctx, base);
loc_8249047C:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x824904a4
	if (cr6.lt) goto loc_824904A4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r28,1
	ctx.r5.s64 = r28.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r25,r29
	r25.u64 = r29.u64;
loc_824904A4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_824904B0"))) PPC_WEAK_FUNC(sub_824904B0);
PPC_FUNC_IMPL(__imp__sub_824904B0) {
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
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// li r3,156
	ctx.r3.s64 = 156;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x824904d8
	if (cr0.eq) goto loc_824904D8;
	// bl 0x8248ee80
	sub_8248EE80(ctx, base);
	// b 0x824904dc
	goto loc_824904DC;
loc_824904D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_824904DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_824904EC"))) PPC_WEAK_FUNC(sub_824904EC);
PPC_FUNC_IMPL(__imp__sub_824904EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824904F0"))) PPC_WEAK_FUNC(sub_824904F0);
PPC_FUNC_IMPL(__imp__sub_824904F0) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248f848
	sub_8248F848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824904F4"))) PPC_WEAK_FUNC(sub_824904F4);
PPC_FUNC_IMPL(__imp__sub_824904F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824904F8"))) PPC_WEAK_FUNC(sub_824904F8);
PPC_FUNC_IMPL(__imp__sub_824904F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248f8c0
	sub_8248F8C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_824904FC"))) PPC_WEAK_FUNC(sub_824904FC);
PPC_FUNC_IMPL(__imp__sub_824904FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490500"))) PPC_WEAK_FUNC(sub_82490500);
PPC_FUNC_IMPL(__imp__sub_82490500) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248f920
	sub_8248F920(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490504"))) PPC_WEAK_FUNC(sub_82490504);
PPC_FUNC_IMPL(__imp__sub_82490504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490508"))) PPC_WEAK_FUNC(sub_82490508);
PPC_FUNC_IMPL(__imp__sub_82490508) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248fba8
	sub_8248FBA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249050C"))) PPC_WEAK_FUNC(sub_8249050C);
PPC_FUNC_IMPL(__imp__sub_8249050C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490510"))) PPC_WEAK_FUNC(sub_82490510);
PPC_FUNC_IMPL(__imp__sub_82490510) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248fc40
	sub_8248FC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490514"))) PPC_WEAK_FUNC(sub_82490514);
PPC_FUNC_IMPL(__imp__sub_82490514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490518"))) PPC_WEAK_FUNC(sub_82490518);
PPC_FUNC_IMPL(__imp__sub_82490518) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248fca0
	sub_8248FCA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249051C"))) PPC_WEAK_FUNC(sub_8249051C);
PPC_FUNC_IMPL(__imp__sub_8249051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490520"))) PPC_WEAK_FUNC(sub_82490520);
PPC_FUNC_IMPL(__imp__sub_82490520) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248fd00
	sub_8248FD00(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490524"))) PPC_WEAK_FUNC(sub_82490524);
PPC_FUNC_IMPL(__imp__sub_82490524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490528"))) PPC_WEAK_FUNC(sub_82490528);
PPC_FUNC_IMPL(__imp__sub_82490528) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248fdb0
	sub_8248FDB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249052C"))) PPC_WEAK_FUNC(sub_8249052C);
PPC_FUNC_IMPL(__imp__sub_8249052C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490530"))) PPC_WEAK_FUNC(sub_82490530);
PPC_FUNC_IMPL(__imp__sub_82490530) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248fe58
	sub_8248FE58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490534"))) PPC_WEAK_FUNC(sub_82490534);
PPC_FUNC_IMPL(__imp__sub_82490534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490538"))) PPC_WEAK_FUNC(sub_82490538);
PPC_FUNC_IMPL(__imp__sub_82490538) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248feb8
	sub_8248FEB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8249053C"))) PPC_WEAK_FUNC(sub_8249053C);
PPC_FUNC_IMPL(__imp__sub_8249053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490540"))) PPC_WEAK_FUNC(sub_82490540);
PPC_FUNC_IMPL(__imp__sub_82490540) {
	PPC_FUNC_PROLOGUE();
	// b 0x8248fa70
	sub_8248FA70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490544"))) PPC_WEAK_FUNC(sub_82490544);
PPC_FUNC_IMPL(__imp__sub_82490544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490548"))) PPC_WEAK_FUNC(sub_82490548);
PPC_FUNC_IMPL(__imp__sub_82490548) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addi r31,r11,1
	r31.s64 = r11.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// ble cr6,0x82490588
	if (!cr6.gt) goto loc_82490588;
	// addi r5,r29,128
	ctx.r5.s64 = r29.s64 + 128;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248cce0
	sub_8248CCE0(ctx, base);
loc_82490588:
	// addi r21,r29,128
	r21.s64 = r29.s64 + 128;
	// stw r31,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r31.u32);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x824905a4
	if (!cr6.lt) goto loc_824905A4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x824907bc
	goto loc_824907BC;
loc_824905A4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// mulli r11,r11,452
	r11.s64 = r11.s64 * 452;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r30,r11,-452
	r30.s64 = r11.s64 + -452;
	// addi r28,r30,276
	r28.s64 = r30.s64 + 276;
	// addi r27,r30,288
	r27.s64 = r30.s64 + 288;
	// addi r26,r30,324
	r26.s64 = r30.s64 + 324;
	// addi r25,r30,352
	r25.s64 = r30.s64 + 352;
	// addi r24,r30,364
	r24.s64 = r30.s64 + 364;
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// addi r23,r30,376
	r23.s64 = r30.s64 + 376;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// stw r31,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r31.u32);
	// stw r31,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r31.u32);
	// stw r31,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r31.u32);
	// stw r31,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r31.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r31.u32);
	// stw r31,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r31.u32);
	// stw r31,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r31.u32);
	// stw r31,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r31.u32);
	// stw r31,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r31.u32);
	// stw r31,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r31.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r31.u32);
	// stw r31,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r31.u32);
	// stw r31,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r31.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r31.u32);
	// stw r31,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r31.u32);
	// stw r31,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r31.u32);
	// beq cr6,0x82490638
	if (cr6.eq) goto loc_82490638;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240f360
	sub_8240F360(ctx, base);
	// b 0x8249063c
	goto loc_8249063C;
loc_82490638:
	// stb r31,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r31.u8);
loc_8249063C:
	// stw r20,256(r30)
	PPC_STORE_U32(r30.u32 + 256, r20.u32);
	// stw r31,388(r30)
	PPC_STORE_U32(r30.u32 + 388, r31.u32);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x82490664
	if (!cr6.lt) goto loc_82490664;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8248c740
	sub_8248C740(ctx, base);
loc_82490664:
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// stw r31,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x82490684
	if (!cr6.lt) goto loc_82490684;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8248c7d0
	sub_8248C7D0(ctx, base);
loc_82490684:
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r31,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x824906a4
	if (!cr6.lt) goto loc_824906A4;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8248c860
	sub_8248C860(ctx, base);
loc_824906A4:
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// stw r31,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x824906c4
	if (!cr6.lt) goto loc_824906C4;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8248c8f0
	sub_8248C8F0(ctx, base);
loc_824906C4:
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// stw r31,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x824906e4
	if (!cr6.lt) goto loc_824906E4;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x8248c980
	sub_8248C980(ctx, base);
loc_824906E4:
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// stw r31,4(r23)
	PPC_STORE_U32(r23.u32 + 4, r31.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bge cr6,0x82490704
	if (!cr6.lt) goto loc_82490704;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8248ca10
	sub_8248CA10(ctx, base);
loc_82490704:
	// li r11,-1
	r11.s64 = -1;
	// stw r31,448(r30)
	PPC_STORE_U32(r30.u32 + 448, r31.u32);
	// stw r11,444(r30)
	PPC_STORE_U32(r30.u32 + 444, r11.u32);
	// stw r11,436(r30)
	PPC_STORE_U32(r30.u32 + 436, r11.u32);
	// stw r11,440(r30)
	PPC_STORE_U32(r30.u32 + 440, r11.u32);
	// stw r11,432(r30)
	PPC_STORE_U32(r30.u32 + 432, r11.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82490740
	if (cr6.lt) goto loc_82490740;
	// stw r31,280(r30)
	PPC_STORE_U32(r30.u32 + 280, r31.u32);
	// stw r31,292(r30)
	PPC_STORE_U32(r30.u32 + 292, r31.u32);
	// stw r31,328(r30)
	PPC_STORE_U32(r30.u32 + 328, r31.u32);
	// stw r31,356(r30)
	PPC_STORE_U32(r30.u32 + 356, r31.u32);
	// stw r31,368(r30)
	PPC_STORE_U32(r30.u32 + 368, r31.u32);
	// stw r31,380(r30)
	PPC_STORE_U32(r30.u32 + 380, r31.u32);
loc_82490740:
	// addi r4,r30,260
	ctx.r4.s64 = r30.s64 + 260;
	// stw r11,272(r30)
	PPC_STORE_U32(r30.u32 + 272, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8248f848
	sub_8248F848(ctx, base);
	// addi r31,r30,336
	r31.s64 = r30.s64 + 336;
	// lis r4,19523
	ctx.r4.s64 = 1279459328;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r4,r4,17494
	ctx.r4.u64 = ctx.r4.u64 | 17494;
	// bl 0x8240e2b0
	sub_8240E2B0(ctx, base);
	// lwz r11,0(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x824907b8
	if (cr6.lt) goto loc_824907B8;
	// addi r11,r30,300
	r11.s64 = r30.s64 + 300;
	// stw r30,112(r29)
	PPC_STORE_U32(r29.u32 + 112, r30.u32);
	// addi r10,r30,312
	ctx.r10.s64 = r30.s64 + 312;
	// stw r28,28(r29)
	PPC_STORE_U32(r29.u32 + 28, r28.u32);
	// addi r9,r30,396
	ctx.r9.s64 = r30.s64 + 396;
	// stw r27,68(r29)
	PPC_STORE_U32(r29.u32 + 68, r27.u32);
	// addi r8,r30,408
	ctx.r8.s64 = r30.s64 + 408;
	// stw r26,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r26.u32);
	// addi r7,r30,420
	ctx.r7.s64 = r30.s64 + 420;
	// stw r31,96(r29)
	PPC_STORE_U32(r29.u32 + 96, r31.u32);
	// stw r25,100(r29)
	PPC_STORE_U32(r29.u32 + 100, r25.u32);
	// stw r24,104(r29)
	PPC_STORE_U32(r29.u32 + 104, r24.u32);
	// stw r23,108(r29)
	PPC_STORE_U32(r29.u32 + 108, r23.u32);
	// stw r11,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r11.u32);
	// stw r10,80(r29)
	PPC_STORE_U32(r29.u32 + 80, ctx.r10.u32);
	// stw r9,84(r29)
	PPC_STORE_U32(r29.u32 + 84, ctx.r9.u32);
	// stw r8,88(r29)
	PPC_STORE_U32(r29.u32 + 88, ctx.r8.u32);
	// stw r7,92(r29)
	PPC_STORE_U32(r29.u32 + 92, ctx.r7.u32);
loc_824907B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_824907BC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_824907C4"))) PPC_WEAK_FUNC(sub_824907C4);
PPC_FUNC_IMPL(__imp__sub_824907C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_824907C8"))) PPC_WEAK_FUNC(sub_824907C8);
PPC_FUNC_IMPL(__imp__sub_824907C8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lhz r11,140(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 140);
	// stw r28,136(r31)
	PPC_STORE_U32(r31.u32 + 136, r28.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82490844
	if (cr6.lt) goto loc_82490844;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82490548
	sub_82490548(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r30,r29,-452
	r30.s64 = r29.s64 + -452;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8240f360
	sub_8240F360(ctx, base);
	// lwz r11,256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,256(r29)
	PPC_STORE_U32(r29.u32 + 256, r11.u32);
	// lwz r11,444(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 444);
	// stw r11,444(r29)
	PPC_STORE_U32(r29.u32 + 444, r11.u32);
	// lwz r11,436(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 436);
	// stw r11,436(r29)
	PPC_STORE_U32(r29.u32 + 436, r11.u32);
	// lwz r11,440(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 440);
	// stw r11,440(r29)
	PPC_STORE_U32(r29.u32 + 440, r11.u32);
	// lwz r11,432(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 432);
	// stw r11,432(r29)
	PPC_STORE_U32(r29.u32 + 432, r11.u32);
	// lwz r5,392(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 392);
	// lwz r4,388(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// bl 0x8248d080
	sub_8248D080(ctx, base);
loc_82490844:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mulli r11,r11,452
	r11.s64 = r11.s64 * 452;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r28,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r28.u32);
	// lhz r11,142(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 142);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// sth r11,142(r31)
	PPC_STORE_U16(r31.u32 + 142, r11.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8249086C"))) PPC_WEAK_FUNC(sub_8249086C);
PPC_FUNC_IMPL(__imp__sub_8249086C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490870"))) PPC_WEAK_FUNC(sub_82490870);
PPC_FUNC_IMPL(__imp__sub_82490870) {
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
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x824908d8
	if (!cr6.eq) goto loc_824908D8;
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_824908A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x824908c4
	if (cr0.eq) goto loc_824908C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x824908a0
	if (cr6.eq) goto loc_824908A0;
loc_824908C4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x824908d8
	if (!cr0.eq) goto loc_824908D8;
	// lwz r11,256(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 256);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82490998
	if (cr6.eq) goto loc_82490998;
loc_824908D8:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82490918
	if (!cr6.eq) goto loc_82490918;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r4,r11,8564
	ctx.r4.s64 = r11.s64 + 8564;
	// bl 0x823a12f0
	sub_823A12F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x8249090c
	if (cr0.eq) goto loc_8249090C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82490914
	goto loc_82490914;
loc_8249090C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82490914:
	// bl 0x8248e1b8
	sub_8248E1B8(ctx, base);
loc_82490918:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82490974
	if (cr6.eq) goto loc_82490974;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmplwi cr6,r11,65534
	cr6.compare<uint32_t>(r11.u32, 65534, xer);
	// blt cr6,0x82490944
	if (cr6.lt) goto loc_82490944;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,16389
	ctx.r10.u64 = ctx.r10.u64 | 16389;
	// stw r10,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r10.u32);
loc_82490944:
	// lhz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 140);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82490958
	if (cr0.eq) goto loc_82490958;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x8249095c
	goto loc_8249095C;
loc_82490958:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_8249095C:
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// sth r9,146(r31)
	PPC_STORE_U16(r31.u32 + 146, ctx.r9.u16);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,144(r31)
	PPC_STORE_U32(r31.u32 + 144, r11.u32);
loc_82490974:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// sth r9,140(r31)
	PPC_STORE_U16(r31.u32 + 140, ctx.r9.u16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// sth r9,142(r31)
	PPC_STORE_U16(r31.u32 + 142, ctx.r9.u16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r9,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r9.u32);
	// bl 0x82490548
	sub_82490548(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82490998:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_824909A0"))) PPC_WEAK_FUNC(sub_824909A0);
PPC_FUNC_IMPL(__imp__sub_824909A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82490a18
	if (cr6.lt) goto loc_82490A18;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x8248ff48
	sub_8248FF48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// blt 0x82490a18
	if (cr0.lt) goto loc_82490A18;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r27.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r26.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// bl 0x8248ea90
	sub_8248EA90(ctx, base);
loc_82490A18:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82490A20"))) PPC_WEAK_FUNC(sub_82490A20);
PPC_FUNC_IMPL(__imp__sub_82490A20) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82490408
	sub_82490408(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82490a54
	if (cr6.eq) goto loc_82490A54;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x82490a5c
	goto loc_82490A5C;
loc_82490A54:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_82490A5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82490408
	sub_82490408(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = r31.s64 + 32;
	// bl 0x8248ed90
	sub_8248ED90(ctx, base);
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

__attribute__((alias("__imp__sub_82490A90"))) PPC_WEAK_FUNC(sub_82490A90);
PPC_FUNC_IMPL(__imp__sub_82490A90) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x8248ff48
	sub_8248FF48(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// blt 0x82490b2c
	if (cr0.lt) goto loc_82490B2C;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r28,r11,276
	r28.s64 = r11.s64 * 276;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// lwz r11,272(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82490b2c
	if (!cr6.eq) goto loc_82490B2C;
	// addi r29,r30,1
	r29.s64 = r30.s64 + 1;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82490b00
	if (!cr0.eq) goto loc_82490B00;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// b 0x82490b2c
	goto loc_82490B2C;
loc_82490B00:
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bgt cr6,0x82490b20
	if (cr6.gt) goto loc_82490B20;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8240f360
	sub_8240F360(ctx, base);
loc_82490B20:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r30,272(r11)
	PPC_STORE_U32(r11.u32 + 272, r30.u32);
loc_82490B2C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82490B38"))) PPC_WEAK_FUNC(sub_82490B38);
PPC_FUNC_IMPL(__imp__sub_82490B38) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r29,r30,128
	r29.s64 = r30.s64 + 128;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mr r23,r9
	r23.u64 = ctx.r9.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82490c04
	if (cr6.lt) goto loc_82490C04;
	// lwz r28,72(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82490bac
	if (cr6.gt) goto loc_82490BAC;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r27,r31,1
	r27.s64 = r31.s64 + 1;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// ble cr6,0x82490b9c
	if (!cr6.gt) goto loc_82490B9C;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8248c860
	sub_8248C860(ctx, base);
loc_82490B9C:
	// stw r27,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r27.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82490c04
	if (cr6.lt) goto loc_82490C04;
loc_82490BAC:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82490c04
	if (cr6.eq) goto loc_82490C04;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// stw r24,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r24.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r23.u32);
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x82490408
	sub_82490408(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwimi r3,r11,0,0,0
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x80000000) | (ctx.r3.u64 & 0xFFFFFFFF7FFFFFFF);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// bl 0x82431f58
	sub_82431F58(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_82490C04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82490C0C"))) PPC_WEAK_FUNC(sub_82490C0C);
PPC_FUNC_IMPL(__imp__sub_82490C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490C10"))) PPC_WEAK_FUNC(sub_82490C10);
PPC_FUNC_IMPL(__imp__sub_82490C10) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r26,r31,128
	r26.s64 = r31.s64 + 128;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82490cf0
	if (cr0.lt) goto loc_82490CF0;
	// lwz r30,108(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bgt cr6,0x82490c78
	if (cr6.gt) goto loc_82490C78;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r29,r27,1
	r29.s64 = r27.s64 + 1;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82490c68
	if (!cr6.gt) goto loc_82490C68;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248ca10
	sub_8248CA10(ctx, base);
loc_82490C68:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82490cf0
	if (cr0.lt) goto loc_82490CF0;
loc_82490C78:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mulli r11,r27,20
	r11.s64 = r27.s64 * 20;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82490408
	sub_82490408(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r30,44(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82490cec
	if (cr0.eq) goto loc_82490CEC;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_82490CB8:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8248ea20
	sub_8248EA20(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82490cec
	if (cr6.lt) goto loc_82490CEC;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82490cb8
	if (!cr0.eq) goto loc_82490CB8;
loc_82490CEC:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 0);
loc_82490CF0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82490CF8"))) PPC_WEAK_FUNC(sub_82490CF8);
PPC_FUNC_IMPL(__imp__sub_82490CF8) {
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
	// lwz r11,144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82490d1c
	if (!cr6.eq) goto loc_82490D1C;
	// bl 0x8248f7d8
	sub_8248F7D8(ctx, base);
loc_82490D1C:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,8740
	ctx.r4.s64 = r11.s64 + 8740;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,4068
	ctx.r4.s64 = r11.s64 + 4068;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x8248c080
	sub_8248C080(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,8728
	r29.s64 = r11.s64 + 8728;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r11,7948
	ctx.r4.s64 = r11.s64 + 7948;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r7,152(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// addi r4,r11,8676
	ctx.r4.s64 = r11.s64 + 8676;
	// lwz r6,148(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 148);
	// lwz r5,144(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r5,5426
	ctx.r5.s64 = 5426;
	// addi r4,r11,8712
	ctx.r4.s64 = r11.s64 + 8712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248c028
	sub_8248C028(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248cf68
	sub_8248CF68(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248d0f8
	sub_8248D0F8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8248e468
	sub_8248E468(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x824900d0
	sub_824900D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8248c0e0
	sub_8248C0E0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82490DD8"))) PPC_WEAK_FUNC(sub_82490DD8);
PPC_FUNC_IMPL(__imp__sub_82490DD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82490870
	sub_82490870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490DDC"))) PPC_WEAK_FUNC(sub_82490DDC);
PPC_FUNC_IMPL(__imp__sub_82490DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490DE0"))) PPC_WEAK_FUNC(sub_82490DE0);
PPC_FUNC_IMPL(__imp__sub_82490DE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x824909a0
	sub_824909A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490DE4"))) PPC_WEAK_FUNC(sub_82490DE4);
PPC_FUNC_IMPL(__imp__sub_82490DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490DE8"))) PPC_WEAK_FUNC(sub_82490DE8);
PPC_FUNC_IMPL(__imp__sub_82490DE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82490a90
	sub_82490A90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490DEC"))) PPC_WEAK_FUNC(sub_82490DEC);
PPC_FUNC_IMPL(__imp__sub_82490DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490DF0"))) PPC_WEAK_FUNC(sub_82490DF0);
PPC_FUNC_IMPL(__imp__sub_82490DF0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82490a20
	sub_82490A20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490DF4"))) PPC_WEAK_FUNC(sub_82490DF4);
PPC_FUNC_IMPL(__imp__sub_82490DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490DF8"))) PPC_WEAK_FUNC(sub_82490DF8);
PPC_FUNC_IMPL(__imp__sub_82490DF8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82490b38
	sub_82490B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490DFC"))) PPC_WEAK_FUNC(sub_82490DFC);
PPC_FUNC_IMPL(__imp__sub_82490DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490E00"))) PPC_WEAK_FUNC(sub_82490E00);
PPC_FUNC_IMPL(__imp__sub_82490E00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82490c10
	sub_82490C10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490E04"))) PPC_WEAK_FUNC(sub_82490E04);
PPC_FUNC_IMPL(__imp__sub_82490E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490E08"))) PPC_WEAK_FUNC(sub_82490E08);
PPC_FUNC_IMPL(__imp__sub_82490E08) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r11
	r30.u64 = r11.u64;
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// blt cr6,0x82490e84
	if (cr6.lt) goto loc_82490E84;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// beq cr6,0x82490e8c
	if (cr6.eq) goto loc_82490E8C;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// bne cr6,0x82490e8c
	if (!cr6.eq) goto loc_82490E8C;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r10,r10,7924
	ctx.r10.s64 = ctx.r10.s64 + 7924;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82490cf8
	sub_82490CF8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82490e80
	if (cr6.lt) goto loc_82490E80;
	// lwz r30,96(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82490E80:
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82490E84:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x82490e90
	goto loc_82490E90;
loc_82490E8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82490E90:
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

__attribute__((alias("__imp__sub_82490EA8"))) PPC_WEAK_FUNC(sub_82490EA8);
PPC_FUNC_IMPL(__imp__sub_82490EA8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82490f44
	if (cr6.lt) goto loc_82490F44;
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82490f4c
	if (cr6.eq) goto loc_82490F4C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82490ef4
	if (cr6.eq) goto loc_82490EF4;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// b 0x82490f40
	goto loc_82490F40;
loc_82490EF4:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r10,r11,7936
	ctx.r10.s64 = r11.s64 + 7936;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// bl 0x82490cf8
	sub_82490CF8(ctx, base);
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82490f40
	if (cr6.lt) goto loc_82490F40;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82490F40:
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
loc_82490F44:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// b 0x82490f50
	goto loc_82490F50;
loc_82490F4C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82490F50:
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

__attribute__((alias("__imp__sub_82490F68"))) PPC_WEAK_FUNC(sub_82490F68);
PPC_FUNC_IMPL(__imp__sub_82490F68) {
	PPC_FUNC_PROLOGUE();
	// b 0x82490e08
	sub_82490E08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490F6C"))) PPC_WEAK_FUNC(sub_82490F6C);
PPC_FUNC_IMPL(__imp__sub_82490F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490F70"))) PPC_WEAK_FUNC(sub_82490F70);
PPC_FUNC_IMPL(__imp__sub_82490F70) {
	PPC_FUNC_PROLOGUE();
	// b 0x82490ea8
	sub_82490EA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490F74"))) PPC_WEAK_FUNC(sub_82490F74);
PPC_FUNC_IMPL(__imp__sub_82490F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490F78"))) PPC_WEAK_FUNC(sub_82490F78);
PPC_FUNC_IMPL(__imp__sub_82490F78) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823abc70
	sub_823ABC70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82490F80"))) PPC_WEAK_FUNC(sub_82490F80);
PPC_FUNC_IMPL(__imp__sub_82490F80) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x8239cdf0
	sub_8239CDF0(ctx, base);
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

__attribute__((alias("__imp__sub_82490FA8"))) PPC_WEAK_FUNC(sub_82490FA8);
PPC_FUNC_IMPL(__imp__sub_82490FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82490FCC"))) PPC_WEAK_FUNC(sub_82490FCC);
PPC_FUNC_IMPL(__imp__sub_82490FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82490FD0"))) PPC_WEAK_FUNC(sub_82490FD0);
PPC_FUNC_IMPL(__imp__sub_82490FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82491020
	if (cr6.eq) goto loc_82491020;
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r10,r10,8952
	ctx.r10.s64 = ctx.r10.s64 + 8952;
loc_82490FE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82491008
	if (cr0.eq) goto loc_82491008;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82490fe4
	if (cr6.eq) goto loc_82490FE4;
loc_82491008:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82491020
	if (!cr0.eq) goto loc_82491020;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// blr 
	return;
loc_82491020:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82491028"))) PPC_WEAK_FUNC(sub_82491028);
PPC_FUNC_IMPL(__imp__sub_82491028) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,22
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82491030"))) PPC_WEAK_FUNC(sub_82491030);
PPC_FUNC_IMPL(__imp__sub_82491030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
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

__attribute__((alias("__imp__sub_82491044"))) PPC_WEAK_FUNC(sub_82491044);
PPC_FUNC_IMPL(__imp__sub_82491044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82491048"))) PPC_WEAK_FUNC(sub_82491048);
PPC_FUNC_IMPL(__imp__sub_82491048) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bl 0x8249c998
	sub_8249C998(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8249107c
	if (!cr0.eq) goto loc_8249107C;
	// bl 0x8249b5d8
	sub_8249B5D8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82491084
	goto loc_82491084;
loc_8249107C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82491084:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82491094"))) PPC_WEAK_FUNC(sub_82491094);
PPC_FUNC_IMPL(__imp__sub_82491094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

