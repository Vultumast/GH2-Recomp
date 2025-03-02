#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826B1DB8"))) PPC_WEAK_FUNC(sub_826B1DB8);
PPC_FUNC_IMPL(__imp__sub_826B1DB8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r11,r11,-25940
	r11.s64 = r11.s64 + -25940;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// bl 0x826b47a0
	sub_826B47A0(ctx, base);
	// lwz r11,64(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 64);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b1dfc
	if (cr6.eq) goto loc_826B1DFC;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B1DFC:
	// lwz r11,304(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 304);
	// li r22,0
	r22.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b1e5c
	if (cr6.eq) goto loc_826B1E5C;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13160
	ctx.r3.s64 = r11.s64 + -13160;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826e524c
	__imp__KeSetEvent(ctx, base);
	// addi r31,r23,308
	r31.s64 = r23.s64 + 308;
	// li r30,6
	r30.s64 = 6;
	// li r29,-1
	r29.s64 = -1;
loc_826B1E2C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b1e4c
	if (cr6.eq) goto loc_826B1E4C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
	// stw r22,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r22.u32);
loc_826B1E4C:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826b1e2c
	if (!cr6.eq) goto loc_826B1E2C;
loc_826B1E5C:
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
	// beq cr6,0x826b1e94
	if (cr6.eq) goto loc_826B1E94;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e527c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// mr r11,r22
	r11.u64 = r22.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826B1E94:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b1ec8
	if (cr6.eq) goto loc_826B1EC8;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x826b1ee4
	if (cr6.eq) goto loc_826B1EE4;
loc_826B1EC8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826b1ee8
	goto loc_826B1EE8;
loc_826B1EE4:
	// lbz r27,12(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826B1EE8:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// addi r21,r23,80
	r21.s64 = r23.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x826aefd0
	sub_826AEFD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826b1fd0
	if (cr6.eq) goto loc_826B1FD0;
loc_826B1F10:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b1f54
	if (cr6.eq) goto loc_826B1F54;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x826b1f54
	if (!cr6.eq) goto loc_826B1F54;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b1f54
	if (!cr6.eq) goto loc_826B1F54;
	// mr r11,r22
	r11.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r27
	r30.u64 = r27.u64;
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
loc_826B1F54:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b1f8c
	if (cr6.eq) goto loc_826B1F8C;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x826b1fa8
	if (cr6.eq) goto loc_826B1FA8;
loc_826B1F8C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826b1fac
	goto loc_826B1FAC;
loc_826B1FA8:
	// lbz r27,12(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826B1FAC:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x826aefd0
	sub_826AEFD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x826b1f10
	if (!cr6.eq) goto loc_826B1F10;
loc_826B1FD0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b2010
	if (cr6.eq) goto loc_826B2010;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x826b2010
	if (!cr6.eq) goto loc_826B2010;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b2010
	if (!cr6.eq) goto loc_826B2010;
	// mr r11,r22
	r11.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B2010:
	// lbz r11,128(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 128);
	// mr r24,r22
	r24.u64 = r22.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b21a4
	if (cr6.eq) goto loc_826B21A4;
	// mr r25,r22
	r25.u64 = r22.u64;
loc_826B2024:
	// lwz r11,124(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 124);
	// add r26,r25,r11
	r26.u64 = r25.u64 + r11.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b2050
	if (cr6.eq) goto loc_826B2050;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x826b206c
	if (cr6.eq) goto loc_826B206C;
loc_826B2050:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826b2070
	goto loc_826B2070;
loc_826B206C:
	// lbz r27,12(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826B2070:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x826aefd0
	sub_826AEFD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826b2150
	if (cr6.eq) goto loc_826B2150;
loc_826B2094:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b20d4
	if (cr6.eq) goto loc_826B20D4;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x826b20d4
	if (!cr6.eq) goto loc_826B20D4;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b20d4
	if (!cr6.eq) goto loc_826B20D4;
	// mr r11,r22
	r11.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B20D4:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b210c
	if (cr6.eq) goto loc_826B210C;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x826b2128
	if (cr6.eq) goto loc_826B2128;
loc_826B210C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r29,r30
	r29.u64 = r30.u64;
	// stw r29,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r29.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826b212c
	goto loc_826B212C;
loc_826B2128:
	// lbz r27,12(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826B212C:
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// bl 0x826aefd0
	sub_826AEFD0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x826b2094
	if (!cr6.eq) goto loc_826B2094;
loc_826B2150:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b2190
	if (cr6.eq) goto loc_826B2190;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bne cr6,0x826b2190
	if (!cr6.eq) goto loc_826B2190;
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b2190
	if (!cr6.eq) goto loc_826B2190;
	// mr r11,r22
	r11.u64 = r22.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B2190:
	// lbz r11,128(r23)
	r11.u64 = PPC_LOAD_U8(r23.u32 + 128);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r25,r25,44
	r25.s64 = r25.s64 + 44;
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x826b2024
	if (cr6.lt) goto loc_826B2024;
loc_826B21A4:
	// lwz r3,64(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 64);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b21c4
	if (cr6.eq) goto loc_826B21C4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r22,64(r23)
	PPC_STORE_U32(r23.u32 + 64, r22.u32);
loc_826B21C4:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r11,r22
	r11.u64 = r22.u64;
	// stw r11,-13144(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13144, r11.u32);
	// lwz r3,60(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 60);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b21e4
	if (cr6.eq) goto loc_826B21E4;
	// bl 0x826af688
	sub_826AF688(ctx, base);
	// stw r22,60(r23)
	PPC_STORE_U32(r23.u32 + 60, r22.u32);
loc_826B21E4:
	// addi r31,r23,12
	r31.s64 = r23.s64 + 12;
	// li r29,6
	r29.s64 = 6;
loc_826B21EC:
	// li r30,2
	r30.s64 = 2;
loc_826B21F0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b2204
	if (cr6.eq) goto loc_826B2204;
	// bl 0x826af688
	sub_826AF688(ctx, base);
	// stw r22,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r22.u32);
loc_826B2204:
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826b21f0
	if (!cr6.eq) goto loc_826B21F0;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x826b21ec
	if (!cr6.eq) goto loc_826B21EC;
	// addi r3,r21,24
	ctx.r3.s64 = r21.s64 + 24;
	// bl 0x826b1d30
	sub_826B1D30(ctx, base);
	// addi r3,r21,12
	ctx.r3.s64 = r21.s64 + 12;
	// bl 0x826b1d30
	sub_826B1D30(ctx, base);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x826b1ca8
	sub_826B1CA8(ctx, base);
	// addi r3,r23,68
	ctx.r3.s64 = r23.s64 + 68;
	// bl 0x826b1d30
	sub_826B1D30(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lwz r3,8(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// addi r11,r11,-25960
	r11.s64 = r11.s64 + -25960;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// beq cr6,0x826b226c
	if (cr6.eq) goto loc_826B226C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r22,8(r23)
	PPC_STORE_U32(r23.u32 + 8, r22.u32);
loc_826B226C:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-26680
	r11.s64 = r11.s64 + -26680;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_826B2280"))) PPC_WEAK_FUNC(sub_826B2280);
PPC_FUNC_IMPL(__imp__sub_826B2280) {
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
	// lbz r11,268(r13)
	r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// addi r11,r11,83
	r11.s64 = r11.s64 + 83;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-13144(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -13144);
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r28,r11,-13176
	r28.s64 = r11.s64 + -13176;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r27,r11,-13196
	r27.s64 = r11.s64 + -13196;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,-13160
	r29.s64 = r11.s64 + -13160;
loc_826B22C0:
	// li r7,0
	ctx.r7.s64 = 0;
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
	// lwz r3,-13144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -13144);
	// lwz r11,300(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r31,r11,27,31,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826b2314
	if (cr6.eq) goto loc_826B2314;
	// lwz r11,304(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x826b2324
	if (cr6.eq) goto loc_826B2324;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826e542c
	__imp__KeReleaseSemaphore(ctx, base);
	// b 0x826b2324
	goto loc_826B2324;
loc_826B2314:
	// bl 0x826b1a88
	sub_826B1A88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-13144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -13144);
	// bl 0x826b1b70
	sub_826B1B70(ctx, base);
loc_826B2324:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826e524c
	__imp__KeSetEvent(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826b22c0
	if (cr6.eq) goto loc_826B22C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B2348"))) PPC_WEAK_FUNC(sub_826B2348);
PPC_FUNC_IMPL(__imp__sub_826B2348) {
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
	// lbz r11,268(r13)
	r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// lis r31,-32126
	r31.s64 = -2105409536;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r11,r11,83
	r11.s64 = r11.s64 + 83;
	// addi r30,r10,-13196
	r30.s64 = ctx.r10.s64 + -13196;
	// lwz r10,256(r13)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,-13144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -13144);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r10.u32);
	// bl 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,-13144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -13144);
	// lwz r11,300(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b23d8
	if (cr6.eq) goto loc_826B23D8;
loc_826B23A8:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826b1b70
	sub_826B1B70(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e523c
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,-13144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + -13144);
	// lwz r11,300(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b23a8
	if (!cr6.eq) goto loc_826B23A8;
loc_826B23D8:
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_826B23F4"))) PPC_WEAK_FUNC(sub_826B23F4);
PPC_FUNC_IMPL(__imp__sub_826B23F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B23F8"))) PPC_WEAK_FUNC(sub_826B23F8);
PPC_FUNC_IMPL(__imp__sub_826B23F8) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// bl 0x8227f8a8
	sub_8227F8A8(ctx, base);
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r29,r11,10592
	r29.s64 = r11.s64 + 10592;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,256(r13)
	r11.u64 = PPC_LOAD_U32(ctx.r13.u32 + 256);
	// stw r11,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r11.u32);
	// beq cr6,0x826b24ac
	if (cr6.eq) goto loc_826B24AC;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-13160
	ctx.r3.s64 = r11.s64 + -13160;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826e524c
	__imp__KeSetEvent(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// addi r11,r11,-13176
	r11.s64 = r11.s64 + -13176;
	// addi r10,r10,-13212
	ctx.r10.s64 = ctx.r10.s64 + -13212;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826e545c
	__imp__KeWaitForMultipleObjects(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x826b24c0
	if (!cr6.eq) goto loc_826B24C0;
	// li r28,1
	r28.s64 = 1;
	// b 0x826b24c0
	goto loc_826B24C0;
loc_826B24AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b1a88
	sub_826B1A88(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b1b70
	sub_826B1B70(ctx, base);
loc_826B24C0:
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b24f4
	if (!cr6.eq) goto loc_826B24F4;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b24f4
	if (cr6.lt) goto loc_826B24F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826b47f8
	sub_826B47F8(ctx, base);
loc_826B24F4:
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// bl 0x826b4830
	sub_826B4830(ctx, base);
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B2510"))) PPC_WEAK_FUNC(sub_826B2510);
PPC_FUNC_IMPL(__imp__sub_826B2510) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-25960
	r11.s64 = r11.s64 + -25960;
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r4,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r4.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// beq cr6,0x826b2558
	if (cr6.eq) goto loc_826B2558;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B2558:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r10,r10,-25940
	ctx.r10.s64 = ctx.r10.s64 + -25940;
	// addi r8,r31,68
	ctx.r8.s64 = r31.s64 + 68;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// addi r9,r11,24
	ctx.r9.s64 = r11.s64 + 24;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// addi r10,r11,12
	ctx.r10.s64 = r11.s64 + 12;
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// lis r7,16256
	ctx.r7.s64 = 1065353216;
	// stw r6,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r8.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r5.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r6,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r6.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r9,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r9.u32);
	// stw r10,36(r11)
	PPC_STORE_U32(r11.u32 + 36, ctx.r10.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(r11.u32 + 40, ctx.r9.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// stw r7,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r7.u32);
	// stw r7,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r7.u32);
	// stw r31,-13144(r11)
	PPC_STORE_U32(r11.u32 + -13144, r31.u32);
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

__attribute__((alias("__imp__sub_826B25E0"))) PPC_WEAK_FUNC(sub_826B25E0);
PPC_FUNC_IMPL(__imp__sub_826B25E0) {
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
	// bl 0x826b1db8
	sub_826B1DB8(ctx, base);
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

__attribute__((alias("__imp__sub_826B2610"))) PPC_WEAK_FUNC(sub_826B2610);
PPC_FUNC_IMPL(__imp__sub_826B2610) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// bl 0x826b4740
	sub_826B4740(ctx, base);
	// lbz r11,1(r24)
	r11.u64 = PPC_LOAD_U8(r24.u32 + 1);
	// li r26,0
	r26.s64 = 0;
	// mr r31,r11
	r31.u64 = r11.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stb r11,128(r30)
	PPC_STORE_U8(r30.u32 + 128, r11.u8);
	// beq cr6,0x826b271c
	if (cr6.eq) goto loc_826B271C;
	// lis r11,1489
	r11.s64 = 97583104;
	// ori r11,r11,29789
	r11.u64 = r11.u64 | 29789;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x826b2664
	if (cr6.gt) goto loc_826B2664;
	// mulli r11,r31,44
	r11.s64 = r31.s64 * 44;
	// li r10,-5
	ctx.r10.s64 = -5;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x826b2668
	if (!cr6.gt) goto loc_826B2668;
loc_826B2664:
	// li r4,-1
	ctx.r4.s64 = -1;
loc_826B2668:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b26fc
	if (cr6.eq) goto loc_826B26FC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// addi r7,r31,-1
	ctx.r7.s64 = r31.s64 + -1;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt cr6,0x826b26f4
	if (cr6.lt) goto loc_826B26F4;
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r6,24
	ctx.r6.s64 = 24;
loc_826B26A8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
	// addi r9,r11,-4
	ctx.r9.s64 = r11.s64 + -4;
	// stw r5,-8(r11)
	PPC_STORE_U32(r11.u32 + -8, ctx.r5.u32);
	// addi r8,r11,8
	ctx.r8.s64 = r11.s64 + 8;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// stw r3,-12(r11)
	PPC_STORE_U32(r11.u32 + -12, ctx.r3.u32);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r9.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r6.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// stw r8,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r8.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r8.u32);
	// addi r11,r11,44
	r11.s64 = r11.s64 + 44;
	// bge cr6,0x826b26a8
	if (!cr6.lt) goto loc_826B26A8;
loc_826B26F4:
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// b 0x826b2700
	goto loc_826B2700;
loc_826B26FC:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_826B2700:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r11.u32);
	// bne cr6,0x826b271c
	if (!cr6.eq) goto loc_826B271C;
loc_826B270C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd38
	return;
loc_826B271C:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b2730
	if (!cr6.eq) goto loc_826B2730;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-26148
	r11.s64 = r11.s64 + -26148;
loc_826B2730:
	// addi r5,r30,60
	ctx.r5.s64 = r30.s64 + 60;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x826b3100
	sub_826B3100(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x826b29a4
	if (cr6.lt) goto loc_826B29A4;
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// li r27,1
	r27.s64 = 1;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r9,-13196
	ctx.r3.s64 = ctx.r9.s64 + -13196;
	// addi r11,r11,-13160
	r11.s64 = r11.s64 + -13160;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r10,r10,-13176
	ctx.r10.s64 = ctx.r10.s64 + -13176;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// mr r11,r27
	r11.u64 = r27.u64;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, r11.u8);
	// mr r11,r26
	r11.u64 = r26.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r11.u32);
	// bl 0x826e547c
	__imp__KeInitializeSemaphore(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r10,-13228
	ctx.r3.s64 = ctx.r10.s64 + -13228;
	// addi r11,r11,-13212
	r11.s64 = r11.s64 + -13212;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lis r9,-32149
	ctx.r9.s64 = -2106916864;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// addi r11,r9,5488
	r11.s64 = ctx.r9.s64 + 5488;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lis r11,32128
	r11.s64 = 2105540608;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bl 0x826e527c
	__imp__ExRegisterTitleTerminateNotification(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r26,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r26.u32);
	// lbz r3,2(r24)
	ctx.r3.u64 = PPC_LOAD_U8(r24.u32 + 2);
	// bl 0x826b0f98
	sub_826B0F98(ctx, base);
	// mr r31,r26
	r31.u64 = r26.u64;
	// addi r29,r30,308
	r29.s64 = r30.s64 + 308;
	// lis r28,-32256
	r28.s64 = -2113929216;
loc_826B281C:
	// addi r11,r1,98
	r11.s64 = ctx.r1.s64 + 98;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r26.u32);
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// clrlwi r10,r11,30
	ctx.r10.u64 = r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b28b0
	if (cr6.eq) goto loc_826B28B0;
	// lis r10,-32149
	ctx.r10.s64 = -2106916864;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// addi r7,r10,9032
	ctx.r7.s64 = ctx.r10.s64 + 9032;
	// bne cr6,0x826b284c
	if (!cr6.eq) goto loc_826B284C;
	// lis r11,-32149
	r11.s64 = -2106916864;
	// addi r7,r11,8832
	ctx.r7.s64 = r11.s64 + 8832;
loc_826B284C:
	// slw r11,r27,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r27.u32 << (r31.u8 & 0x3F));
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// bl 0x826e4f1c
	__imp__ExCreateThread(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b270c
	if (cr6.lt) goto loc_826B270C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,1836(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 1836);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x826e4e6c
	__imp__ObReferenceObjectByHandle(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e4e5c
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e546c
	__imp__KeResumeThread(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826e4e4c
	__imp__ObDereferenceObject(ctx, base);
	// lwz r11,304(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 304);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,304(r30)
	PPC_STORE_U32(r30.u32 + 304, r11.u32);
loc_826B28B0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// blt cr6,0x826b281c
	if (cr6.lt) goto loc_826B281C;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// lbz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U8(r24.u32 + 0);
	// cmplwi cr6,r10,6
	cr6.compare<uint32_t>(ctx.r10.u32, 6, xer);
	// std r26,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r26.u64);
	// std r26,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r26.u64);
	// stw r26,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r26.u32);
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, r26.u8);
	// stb r26,116(r1)
	PPC_STORE_U8(ctx.r1.u32 + 116, r26.u8);
	// bgt cr6,0x826b28f0
	if (cr6.gt) goto loc_826B28F0;
	// li r10,6
	ctx.r10.s64 = 6;
loc_826B28F0:
	// lis r11,0
	r11.s64 = 0;
	// stb r10,117(r1)
	PPC_STORE_U8(ctx.r1.u32 + 117, ctx.r10.u8);
	// mr r28,r26
	r28.u64 = r26.u64;
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// li r29,3
	r29.s64 = 3;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
loc_826B2908:
	// addi r11,r1,98
	r11.s64 = ctx.r1.s64 + 98;
	// lbzx r11,r28,r11
	r11.u64 = PPC_LOAD_U8(r28.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b294c
	if (cr6.eq) goto loc_826B294C;
	// mr r31,r26
	r31.u64 = r26.u64;
loc_826B291C:
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x826b294c
	if (cr6.lt) goto loc_826B294C;
	// add r11,r29,r31
	r11.u64 = r29.u64 + r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// bl 0x826afa20
	sub_826AFA20(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// blt cr6,0x826b291c
	if (cr6.lt) goto loc_826B291C;
loc_826B294C:
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r29,15
	cr6.compare<uint32_t>(r29.u32, 15, xer);
	// blt cr6,0x826b2908
	if (cr6.lt) goto loc_826B2908;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// blt cr6,0x826b29a4
	if (cr6.lt) goto loc_826B29A4;
	// addi r31,r30,64
	r31.s64 = r30.s64 + 64;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826bbe40
	sub_826BBE40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b29a8
	if (cr6.lt) goto loc_826B29A8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r10,-32148
	ctx.r10.s64 = -2106851328;
	// addi r4,r10,-18128
	ctx.r4.s64 = ctx.r10.s64 + -18128;
	// lwz r3,68(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd38
	return;
loc_826B29A4:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_826B29A8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_826B29B0"))) PPC_WEAK_FUNC(sub_826B29B0);
PPC_FUNC_IMPL(__imp__sub_826B29B0) {
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
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826b1708
	sub_826B1708(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b29e4
	if (cr6.lt) goto loc_826B29E4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,372
	ctx.r4.s64 = r11.s64 + 372;
	// b 0x826b29e8
	goto loc_826B29E8;
loc_826B29E4:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826B29E8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b2a84
	if (cr6.lt) goto loc_826B2A84;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// bl 0x826bc410
	sub_826BC410(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x826b2a84
	if (cr6.lt) goto loc_826B2A84;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r4,372
	ctx.r4.s64 = 372;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b2a44
	if (cr6.eq) goto loc_826B2A44;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x826b2510
	sub_826B2510(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826b2a50
	if (!cr6.eq) goto loc_826B2A50;
loc_826B2A44:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x826b2a84
	goto loc_826B2A84;
loc_826B2A50:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b2610
	sub_826B2610(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x826b2a70
	if (cr6.lt) goto loc_826B2A70;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x826b2a84
	goto loc_826B2A84;
loc_826B2A70:
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
loc_826B2A84:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b2aa0
	if (cr6.eq) goto loc_826B2AA0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B2AA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B2AAC"))) PPC_WEAK_FUNC(sub_826B2AAC);
PPC_FUNC_IMPL(__imp__sub_826B2AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B2AB0"))) PPC_WEAK_FUNC(sub_826B2AB0);
PPC_FUNC_IMPL(__imp__sub_826B2AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x826b2ac0
	if (!cr6.eq) goto loc_826B2AC0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2AC0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826B2AD0"))) PPC_WEAK_FUNC(sub_826B2AD0);
PPC_FUNC_IMPL(__imp__sub_826B2AD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// bne cr6,0x826b2ae0
	if (!cr6.eq) goto loc_826B2AE0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B2AE0:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826B2AF0"))) PPC_WEAK_FUNC(sub_826B2AF0);
PPC_FUNC_IMPL(__imp__sub_826B2AF0) {
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
	// bne 0x826b2b30
	if (!cr0.eq) goto loc_826B2B30;
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
loc_826B2B30:
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

__attribute__((alias("__imp__sub_826B2B44"))) PPC_WEAK_FUNC(sub_826B2B44);
PPC_FUNC_IMPL(__imp__sub_826B2B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B2B48"))) PPC_WEAK_FUNC(sub_826B2B48);
PPC_FUNC_IMPL(__imp__sub_826B2B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,127
	cr6.compare<uint32_t>(ctx.r10.u32, 127, xer);
	// bgt cr6,0x826b2b70
	if (cr6.gt) goto loc_826B2B70;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x826b2ba4
	if (!cr6.lt) goto loc_826B2BA4;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x826b2b84
	goto loc_826B2B84;
loc_826B2B70:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x826b2ba4
	if (!cr6.lt) goto loc_826B2BA4;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
loc_826B2B84:
	// rlwinm r11,r10,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b2ba4
	if (cr6.eq) goto loc_826B2BA4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b2ba8
	if (!cr6.eq) goto loc_826B2BA8;
loc_826B2BA4:
	// li r11,0
	r11.s64 = 0;
loc_826B2BA8:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b2bbc
	if (!cr6.eq) goto loc_826B2BBC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
loc_826B2BBC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826B2BCC"))) PPC_WEAK_FUNC(sub_826B2BCC);
PPC_FUNC_IMPL(__imp__sub_826B2BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B2BD0"))) PPC_WEAK_FUNC(sub_826B2BD0);
PPC_FUNC_IMPL(__imp__sub_826B2BD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,127
	cr6.compare<uint32_t>(r11.u32, 127, xer);
	// bgt cr6,0x826b2bfc
	if (cr6.gt) goto loc_826B2BFC;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826b2c30
	if (!cr6.lt) goto loc_826B2C30;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x826b2c10
	goto loc_826B2C10;
loc_826B2BFC:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x826b2c30
	if (!cr6.lt) goto loc_826B2C30;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
loc_826B2C10:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b2c30
	if (cr6.eq) goto loc_826B2C30;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b2c34
	if (!cr6.eq) goto loc_826B2C34;
loc_826B2C30:
	// li r11,0
	r11.s64 = 0;
loc_826B2C34:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b2c48
	if (!cr6.eq) goto loc_826B2C48;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
loc_826B2C48:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826B2C58"))) PPC_WEAK_FUNC(sub_826B2C58);
PPC_FUNC_IMPL(__imp__sub_826B2C58) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// mr r11,r25
	r11.u64 = r25.u64;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b2d24
	if (cr6.eq) goto loc_826B2D24;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
loc_826B2C88:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bne cr6,0x826b2c98
	if (!cr6.eq) goto loc_826B2C98;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_826B2C98:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x826b2d24
	if (!cr6.lt) goto loc_826B2D24;
loc_826B2CB0:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b2cc8
	if (!cr6.eq) goto loc_826B2CC8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b2ce8
	if (cr6.eq) goto loc_826B2CE8;
loc_826B2CC8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b2cb0
	if (cr6.lt) goto loc_826B2CB0;
	// b 0x826b2d24
	goto loc_826B2D24;
loc_826B2CE8:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// subf r9,r7,r11
	ctx.r9.s64 = r11.s64 - ctx.r7.s64;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r9,r9,3
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 3;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stw r7,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r7.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b2c88
	if (cr6.lt) goto loc_826B2C88;
loc_826B2D24:
	// lbz r11,0(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 0);
	// subf r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826b2d40
	if (!cr6.eq) goto loc_826B2D40;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
loc_826B2D40:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// ble cr6,0x826b2d60
	if (!cr6.gt) goto loc_826B2D60;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
loc_826B2D60:
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r28,r10,-13140
	r28.s64 = ctx.r10.s64 + -13140;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826b4130
	sub_826B4130(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x826b2d9c
	if (!cr6.eq) goto loc_826B2D9C;
	// lis r25,-32761
	r25.s64 = -2147024896;
	// ori r25,r25,14
	r25.u64 = r25.u64 | 14;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
loc_826B2D9C:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b2dd8
	if (cr6.eq) goto loc_826B2DD8;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826b2dd8
	if (cr6.eq) goto loc_826B2DD8;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
	// stw r25,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r25.u32);
loc_826B2DD8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// add r10,r11,r30
	ctx.r10.u64 = r11.u64 + r30.u64;
	// mr r11,r25
	r11.u64 = r25.u64;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// beq cr6,0x826b2e50
	if (cr6.eq) goto loc_826B2E50;
	// rlwinm r10,r26,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r26,r10
	ctx.r10.u64 = r26.u64 + ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_826B2E00:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - r30.s64;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + r29.u64;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// srawi r7,r7,3
	xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addi r7,r7,128
	ctx.r7.s64 = ctx.r7.s64 + 128;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// stw r6,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r6.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// blt cr6,0x826b2e00
	if (cr6.lt) goto loc_826B2E00;
loc_826B2E50:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826B2E5C"))) PPC_WEAK_FUNC(sub_826B2E5C);
PPC_FUNC_IMPL(__imp__sub_826B2E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B2E60"))) PPC_WEAK_FUNC(sub_826B2E60);
PPC_FUNC_IMPL(__imp__sub_826B2E60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b2ed0
	if (cr6.eq) goto loc_826B2ED0;
loc_826B2E74:
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lbzx r11,r9,r11
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// addi r11,r11,-128
	r11.s64 = r11.s64 + -128;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x826b2ec0
	if (!cr6.lt) goto loc_826B2EC0;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b2ec0
	if (cr6.eq) goto loc_826B2EC0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b2ec0
	if (cr6.eq) goto loc_826B2EC0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b2ec0
	if (cr6.eq) goto loc_826B2EC0;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
loc_826B2EC0:
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// blt cr6,0x826b2e74
	if (cr6.lt) goto loc_826B2E74;
loc_826B2ED0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B2ED8"))) PPC_WEAK_FUNC(sub_826B2ED8);
PPC_FUNC_IMPL(__imp__sub_826B2ED8) {
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
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b2f30
	if (cr6.eq) goto loc_826B2F30;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
loc_826B2F0C:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x826b2f20
	if (!cr6.gt) goto loc_826B2F20;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_826B2F20:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x826b2f0c
	if (!cr6.eq) goto loc_826B2F0C;
loc_826B2F30:
	// rlwinm r3,r9,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B2F38"))) PPC_WEAK_FUNC(sub_826B2F38);
PPC_FUNC_IMPL(__imp__sub_826B2F38) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-25920
	r11.s64 = r11.s64 + -25920;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b2fa4
	if (cr6.eq) goto loc_826B2FA4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_826B2F80:
	// lbz r11,0(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x826b2f94
	if (!cr6.gt) goto loc_826B2F94;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
loc_826B2F94:
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b2f80
	if (!cr6.eq) goto loc_826B2F80;
loc_826B2FA4:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x826b2fcc
	if (cr6.eq) goto loc_826B2FCC;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r4,r9,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
loc_826B2FCC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b3034
	if (cr6.eq) goto loc_826B3034;
	// li r11,0
	r11.s64 = 0;
loc_826B2FE4:
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rotlwi r10,r8,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 3);
	// stwx r6,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.r6.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// blt cr6,0x826b2fe4
	if (cr6.lt) goto loc_826B2FE4;
loc_826B3034:
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

__attribute__((alias("__imp__sub_826B3050"))) PPC_WEAK_FUNC(sub_826B3050);
PPC_FUNC_IMPL(__imp__sub_826B3050) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-25920
	r11.s64 = r11.s64 + -25920;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq cr6,0x826b3098
	if (cr6.eq) goto loc_826B3098;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r5,24962
	ctx.r5.s64 = 1635909632;
	// addi r3,r11,-13140
	ctx.r3.s64 = r11.s64 + -13140;
	// ori r5,r5,4
	ctx.r5.u64 = ctx.r5.u64 | 4;
	// bl 0x826b4140
	sub_826B4140(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_826B3098:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_826B30BC"))) PPC_WEAK_FUNC(sub_826B30BC);
PPC_FUNC_IMPL(__imp__sub_826B30BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B30C0"))) PPC_WEAK_FUNC(sub_826B30C0);
PPC_FUNC_IMPL(__imp__sub_826B30C0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826b2ed8
	sub_826B2ED8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,24
	r11.s64 = r11.s64 + 24;
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

__attribute__((alias("__imp__sub_826B30FC"))) PPC_WEAK_FUNC(sub_826B30FC);
PPC_FUNC_IMPL(__imp__sub_826B30FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3100"))) PPC_WEAK_FUNC(sub_826B3100);
PPC_FUNC_IMPL(__imp__sub_826B3100) {
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
	// li r4,24
	ctx.r4.s64 = 24;
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
	// beq cr6,0x826b3164
	if (cr6.eq) goto loc_826B3164;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826b2f38
	sub_826B2F38(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b3164
	if (cr6.eq) goto loc_826B3164;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826B3164:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826B3174"))) PPC_WEAK_FUNC(sub_826B3174);
PPC_FUNC_IMPL(__imp__sub_826B3174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3178"))) PPC_WEAK_FUNC(sub_826B3178);
PPC_FUNC_IMPL(__imp__sub_826B3178) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x826b31c0
	if (!cr6.eq) goto loc_826B31C0;
	// lbz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x826b31b8
	if (cr6.eq) goto loc_826B31B8;
	// li r11,0
	r11.s64 = 0;
loc_826B3198:
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// lbz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x826b3198
	if (cr6.lt) goto loc_826B3198;
loc_826B31B8:
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// b 0x826b31c8
	goto loc_826B31C8;
loc_826B31C0:
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, r11.u8);
loc_826B31C8:
	// lis r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B31E0"))) PPC_WEAK_FUNC(sub_826B31E0);
PPC_FUNC_IMPL(__imp__sub_826B31E0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 112);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b3248
	if (cr6.lt) goto loc_826B3248;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b3178
	sub_826B3178(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bc500
	sub_826BC500(ctx, base);
loc_826B3248:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B3250"))) PPC_WEAK_FUNC(sub_826B3250);
PPC_FUNC_IMPL(__imp__sub_826B3250) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b32a0
	if (cr6.lt) goto loc_826B32A0;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b32a0
	if (cr6.eq) goto loc_826B32A0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,32(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B32A0:
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

__attribute__((alias("__imp__sub_826B32B4"))) PPC_WEAK_FUNC(sub_826B32B4);
PPC_FUNC_IMPL(__imp__sub_826B32B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B32B8"))) PPC_WEAK_FUNC(sub_826B32B8);
PPC_FUNC_IMPL(__imp__sub_826B32B8) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b32f8
	if (cr6.eq) goto loc_826B32F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b330c
	if (cr6.eq) goto loc_826B330C;
loc_826B32F8:
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
loc_826B330C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,76(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x826b3348
	if (cr6.lt) goto loc_826B3348;
	// lbz r11,61(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 61);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stb r11,0(r27)
	PPC_STORE_U8(r27.u32 + 0, r11.u8);
loc_826B3348:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b3390
	if (cr6.eq) goto loc_826B3390;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826b3390
	if (!cr6.eq) goto loc_826B3390;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b3390
	if (!cr6.eq) goto loc_826B3390;
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
loc_826B3390:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B339C"))) PPC_WEAK_FUNC(sub_826B339C);
PPC_FUNC_IMPL(__imp__sub_826B339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B33A0"))) PPC_WEAK_FUNC(sub_826B33A0);
PPC_FUNC_IMPL(__imp__sub_826B33A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,268(r13)
	r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// rotlwi r10,r11,3
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 3);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,-13144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B33BC"))) PPC_WEAK_FUNC(sub_826B33BC);
PPC_FUNC_IMPL(__imp__sub_826B33BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B33C0"))) PPC_WEAK_FUNC(sub_826B33C0);
PPC_FUNC_IMPL(__imp__sub_826B33C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lbz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 144);
	// lwz r11,-13144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// lwz r11,140(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b3410
	if (cr6.eq) goto loc_826B3410;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b34a8
	if (cr6.lt) goto loc_826B34A8;
loc_826B3410:
	// addi r29,r31,76
	r29.s64 = r31.s64 + 76;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x826bd3a0
	sub_826BD3A0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b34a8
	if (cr6.lt) goto loc_826B34A8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bca40
	sub_826BCA40(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b34a8
	if (cr6.lt) goto loc_826B34A8;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826b34a4
	if (cr6.lt) goto loc_826B34A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826b47f8
	sub_826B47F8(ctx, base);
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b34a4
	if (!cr6.eq) goto loc_826B34A4;
	// lbz r11,61(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 61);
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b34a4
	if (!cr6.eq) goto loc_826B34A4;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd6d8
	sub_826BD6D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
loc_826B34A4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_826B34A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826B34B0"))) PPC_WEAK_FUNC(sub_826B34B0);
PPC_FUNC_IMPL(__imp__sub_826B34B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lbz r11,144(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 144);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x826b34d4
	if (!cr6.lt) goto loc_826B34D4;
	// addi r11,r11,33
	r11.s64 = r11.s64 + 33;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,-13144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// b 0x826b34dc
	goto loc_826B34DC;
loc_826B34D4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
loc_826B34DC:
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// lfs f13,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,88(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826B34FC"))) PPC_WEAK_FUNC(sub_826B34FC);
PPC_FUNC_IMPL(__imp__sub_826B34FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3500"))) PPC_WEAK_FUNC(sub_826B3500);
PPC_FUNC_IMPL(__imp__sub_826B3500) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826B351C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826b351c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B351C;
	// bl 0x826b3178
	sub_826B3178(ctx, base);
	// lwz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r11,0
	r11.s64 = 0;
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r9,-13144(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13144);
	// addi r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 + 12;
loc_826B3544:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x826b35b8
	if (!cr6.eq) goto loc_826B35B8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// blt cr6,0x826b3544
	if (cr6.lt) goto loc_826B3544;
	// li r11,0
	r11.s64 = 0;
loc_826B3564:
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,76(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lwz r11,88(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lbz r11,57(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 57);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b3588
	if (!cr6.eq) goto loc_826B3588;
	// li r11,1
	r11.s64 = 1;
loc_826B3588:
	// stb r11,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, r11.u8);
	// lbz r11,58(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 58);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b359c
	if (!cr6.eq) goto loc_826B359C;
	// li r11,6
	r11.s64 = 6;
loc_826B359C:
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, r11.u8);
	// lwz r11,72(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_826B35B8:
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// b 0x826b3564
	goto loc_826B3564;
}

__attribute__((alias("__imp__sub_826B35C8"))) PPC_WEAK_FUNC(sub_826B35C8);
PPC_FUNC_IMPL(__imp__sub_826B35C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,-13144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// lwz r30,60(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x826b3500
	sub_826B3500(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826bc550
	sub_826BC550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b3698
	if (cr6.lt) goto loc_826B3698;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826B3614:
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x826b3614
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B3614;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r10,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lbz r11,59(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 59);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,192(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stb r11,196(r1)
	PPC_STORE_U8(ctx.r1.u32 + 196, r11.u8);
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// stb r11,197(r1)
	PPC_STORE_U8(ctx.r1.u32 + 197, r11.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r11.u32);
	// bl 0x826b2ab0
	sub_826B2AB0(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// blt cr6,0x826b369c
	if (cr6.lt) goto loc_826B369C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd4c
	return;
loc_826B3698:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B369C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826B36A4"))) PPC_WEAK_FUNC(sub_826B36A4);
PPC_FUNC_IMPL(__imp__sub_826B36A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B36A8"))) PPC_WEAK_FUNC(sub_826B36A8);
PPC_FUNC_IMPL(__imp__sub_826B36A8) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r11,r11,-25880
	r11.s64 = r11.s64 + -25880;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b36f8
	if (cr6.lt) goto loc_826B36F8;
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b36f8
	if (cr6.eq) goto loc_826B36F8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B36F8:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r28,-13144(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + -13144);
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
	// beq cr6,0x826b372c
	if (cr6.eq) goto loc_826B372C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x826b3744
	if (cr6.eq) goto loc_826B3744;
loc_826B372C:
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
loc_826B3744:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x826b3784
	if (cr6.eq) goto loc_826B3784;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
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
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B3784:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b37c4
	if (cr6.eq) goto loc_826B37C4;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b37c4
	if (!cr6.eq) goto loc_826B37C4;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b37c4
	if (!cr6.eq) goto loc_826B37C4;
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
loc_826B37C4:
	// lwz r3,76(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b37e8
	if (cr6.eq) goto loc_826B37E8;
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
	// stw r11,76(r27)
	PPC_STORE_U32(r27.u32 + 76, r11.u32);
loc_826B37E8:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826bc8d8
	sub_826BC8D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B37F8"))) PPC_WEAK_FUNC(sub_826B37F8);
PPC_FUNC_IMPL(__imp__sub_826B37F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3808"))) PPC_WEAK_FUNC(sub_826B3808);
PPC_FUNC_IMPL(__imp__sub_826B3808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,12(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3818"))) PPC_WEAK_FUNC(sub_826B3818);
PPC_FUNC_IMPL(__imp__sub_826B3818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,52
	r11.s64 = ctx.r3.s64 + 52;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B3834"))) PPC_WEAK_FUNC(sub_826B3834);
PPC_FUNC_IMPL(__imp__sub_826B3834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3838"))) PPC_WEAK_FUNC(sub_826B3838);
PPC_FUNC_IMPL(__imp__sub_826B3838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r3,r30,84
	ctx.r3.s64 = r30.s64 + 84;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,144(r30)
	PPC_STORE_U8(r30.u32 + 144, r11.u8);
	// bl 0x826b3500
	sub_826B3500(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bc608
	sub_826BC608(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b38fc
	if (cr6.lt) goto loc_826B38FC;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,10
	ctx.r9.s64 = 10;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826B3898:
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x826b3898
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B3898;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// li r5,56
	ctx.r5.s64 = 56;
	// stb r10,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r10.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lbz r11,59(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 59);
	// li r6,255
	ctx.r6.s64 = 255;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lfs f0,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f0.f64 = double(temp.f32);
	// addi r4,r30,76
	ctx.r4.s64 = r30.s64 + 76;
	// stfs f0,176(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,180(r1)
	PPC_STORE_U8(ctx.r1.u32 + 180, r11.u8);
	// lbz r11,64(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 64);
	// stb r11,181(r1)
	PPC_STORE_U8(ctx.r1.u32 + 181, r11.u8);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, r11.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, r11.u32);
	// bl 0x826bd090
	sub_826BD090(ctx, base);
loc_826B38FC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_826B3914"))) PPC_WEAK_FUNC(sub_826B3914);
PPC_FUNC_IMPL(__imp__sub_826B3914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3918"))) PPC_WEAK_FUNC(sub_826B3918);
PPC_FUNC_IMPL(__imp__sub_826B3918) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
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
	// beq cr6,0x826b3954
	if (cr6.eq) goto loc_826B3954;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b3974
	if (cr6.eq) goto loc_826B3974;
loc_826B3954:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stb r30,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r30.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826b3978
	goto loc_826B3978;
loc_826B3974:
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826B3978:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r9,61(r27)
	ctx.r9.u64 = PPC_LOAD_U8(r27.u32 + 61);
	// rlwinm r9,r9,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826b39dc
	if (!cr6.eq) goto loc_826B39DC;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// beq cr6,0x826b39cc
	if (cr6.eq) goto loc_826B39CC;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b39cc
	if (!cr6.eq) goto loc_826B39CC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b39cc
	if (!cr6.eq) goto loc_826B39CC;
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
loc_826B39CC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16388
	ctx.r3.u64 = ctx.r3.u64 | 16388;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826B39DC:
	// lis r30,-32126
	r30.s64 = -2105409536;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,-13144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -13144);
	// bl 0x826b1430
	sub_826B1430(ctx, base);
	// lwz r28,-13144(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + -13144);
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
	// beq cr6,0x826b3a14
	if (cr6.eq) goto loc_826B3A14;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x826b3a2c
	if (cr6.eq) goto loc_826B3A2C;
loc_826B3A14:
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
loc_826B3A2C:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,76(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x826b3a6c
	if (cr6.eq) goto loc_826B3A6C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
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
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B3A6C:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b3aac
	if (cr6.eq) goto loc_826B3AAC;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b3aac
	if (!cr6.eq) goto loc_826B3AAC;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b3aac
	if (!cr6.eq) goto loc_826B3AAC;
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
loc_826B3AAC:
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
	// beq cr6,0x826b3ad0
	if (cr6.eq) goto loc_826B3AD0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b3ae4
	if (cr6.eq) goto loc_826B3AE4;
loc_826B3AD0:
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
loc_826B3AE4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r11,61(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 61);
	// andi. r11,r11,191
	r11.u64 = r11.u64 & 191;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,61(r27)
	PPC_STORE_U8(r27.u32 + 61, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b3b44
	if (cr6.eq) goto loc_826B3B44;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b3b44
	if (!cr6.eq) goto loc_826B3B44;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b3b44
	if (!cr6.eq) goto loc_826B3B44;
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
loc_826B3B44:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b3b88
	if (cr6.eq) goto loc_826B3B88;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b3b88
	if (!cr6.eq) goto loc_826B3B88;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b3b88
	if (!cr6.eq) goto loc_826B3B88;
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
loc_826B3B88:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B3B94"))) PPC_WEAK_FUNC(sub_826B3B94);
PPC_FUNC_IMPL(__imp__sub_826B3B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3B98"))) PPC_WEAK_FUNC(sub_826B3B98);
PPC_FUNC_IMPL(__imp__sub_826B3B98) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826bc4c0
	sub_826BC4C0(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r11,-25880
	r11.s64 = r11.s64 + -25880;
	// lfs f0,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// stfs f0,140(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 140, temp.u32);
	// lwz r11,-13144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// addi r29,r11,80
	r29.s64 = r11.s64 + 80;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r28,r13
	r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b3bfc
	if (cr6.eq) goto loc_826B3BFC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b3c10
	if (cr6.eq) goto loc_826B3C10;
loc_826B3BFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B3C10:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b3c80
	if (cr6.eq) goto loc_826B3C80;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b3c80
	if (!cr6.eq) goto loc_826B3C80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b3c80
	if (!cr6.eq) goto loc_826B3C80;
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
loc_826B3C80:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B3C8C"))) PPC_WEAK_FUNC(sub_826B3C8C);
PPC_FUNC_IMPL(__imp__sub_826B3C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3C90"))) PPC_WEAK_FUNC(sub_826B3C90);
PPC_FUNC_IMPL(__imp__sub_826B3C90) {
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
	// bl 0x826b36a8
	sub_826B36A8(ctx, base);
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

__attribute__((alias("__imp__sub_826B3CC0"))) PPC_WEAK_FUNC(sub_826B3CC0);
PPC_FUNC_IMPL(__imp__sub_826B3CC0) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
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
	// beq cr6,0x826b3d00
	if (cr6.eq) goto loc_826B3D00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b3d14
	if (cr6.eq) goto loc_826B3D14;
loc_826B3D00:
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
loc_826B3D14:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r10,61(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 61);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826b3d38
	if (cr6.eq) goto loc_826B3D38;
	// lis r26,-32768
	r26.s64 = -2147483648;
	// ori r26,r26,65535
	r26.u64 = r26.u64 | 65535;
	// b 0x826b3e90
	goto loc_826B3E90;
loc_826B3D38:
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b3e90
	if (!cr6.eq) goto loc_826B3E90;
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
	// beq cr6,0x826b3d68
	if (cr6.eq) goto loc_826B3D68;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b3d7c
	if (cr6.eq) goto loc_826B3D7C;
loc_826B3D68:
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
loc_826B3D7C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lbz r11,61(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 61);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stb r11,61(r27)
	PPC_STORE_U8(r27.u32 + 61, r11.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b3dd8
	if (cr6.eq) goto loc_826B3DD8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b3dd8
	if (!cr6.eq) goto loc_826B3DD8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b3dd8
	if (!cr6.eq) goto loc_826B3DD8;
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
loc_826B3DD8:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r29,-13144(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + -13144);
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
	// beq cr6,0x826b3e04
	if (cr6.eq) goto loc_826B3E04;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b3e18
	if (cr6.eq) goto loc_826B3E18;
loc_826B3E04:
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
loc_826B3E18:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r29,68
	ctx.r10.s64 = r29.s64 + 68;
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b3e90
	if (cr6.eq) goto loc_826B3E90;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b3e90
	if (!cr6.eq) goto loc_826B3E90;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b3e90
	if (!cr6.eq) goto loc_826B3E90;
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
loc_826B3E90:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b3ed4
	if (cr6.eq) goto loc_826B3ED4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b3ed4
	if (!cr6.eq) goto loc_826B3ED4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b3ed4
	if (!cr6.eq) goto loc_826B3ED4;
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
loc_826B3ED4:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826B3EE0"))) PPC_WEAK_FUNC(sub_826B3EE0);
PPC_FUNC_IMPL(__imp__sub_826B3EE0) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x826b3918
	sub_826B3918(ctx, base);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16388
	r11.u64 = r11.u64 | 16388;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x826b3f84
	if (!cr6.eq) goto loc_826B3F84;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b3f78
	if (cr6.eq) goto loc_826B3F78;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b3f84
	if (cr6.lt) goto loc_826B3F84;
	// clrlwi r29,r31,24
	r29.u64 = r31.u32 & 0xFF;
	// clrlwi r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b3f78
	if (!cr6.eq) goto loc_826B3F78;
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b3f84
	if (cr6.lt) goto loc_826B3F84;
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b3f78
	if (!cr6.eq) goto loc_826B3F78;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// ori r31,r11,1
	r31.u64 = r11.u64 | 1;
loc_826B3F78:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bd6d8
	sub_826BD6D8(ctx, base);
loc_826B3F84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826B3F8C"))) PPC_WEAK_FUNC(sub_826B3F8C);
PPC_FUNC_IMPL(__imp__sub_826B3F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B3F90"))) PPC_WEAK_FUNC(sub_826B3F90);
PPC_FUNC_IMPL(__imp__sub_826B3F90) {
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
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826b35c8
	sub_826B35C8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b3fc4
	if (cr6.lt) goto loc_826B3FC4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,148
	ctx.r4.s64 = r11.s64 + 148;
	// b 0x826b3fc8
	goto loc_826B3FC8;
loc_826B3FC4:
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_826B3FC8:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b4068
	if (cr6.lt) goto loc_826B4068;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bl 0x826bc410
	sub_826BC410(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x826b4068
	if (cr6.lt) goto loc_826B4068;
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r4,148
	ctx.r4.s64 = 148;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b4028
	if (cr6.eq) goto loc_826B4028;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// bl 0x826b3b98
	sub_826B3B98(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826b4034
	if (!cr6.eq) goto loc_826B4034;
loc_826B4028:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x826b4068
	goto loc_826B4068;
loc_826B4034:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826b3838
	sub_826B3838(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x826b4054
	if (cr6.lt) goto loc_826B4054;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// b 0x826b4068
	goto loc_826B4068;
loc_826B4054:
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
loc_826B4068:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b4084
	if (cr6.eq) goto loc_826B4084;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B4084:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B4090"))) PPC_WEAK_FUNC(sub_826B4090);
PPC_FUNC_IMPL(__imp__sub_826B4090) {
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
	// clrlwi r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b40c8
	if (cr6.eq) goto loc_826B40C8;
	// bl 0x826b3cc0
	sub_826B3CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826B40C8:
	// bl 0x826b3918
	sub_826B3918(ctx, base);
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16388
	r11.u64 = r11.u64 | 16388;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// beq cr6,0x826b40e4
	if (cr6.eq) goto loc_826B40E4;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b411c
	if (cr6.lt) goto loc_826B411C;
loc_826B40E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b411c
	if (cr6.lt) goto loc_826B411C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826bd4c0
	sub_826BD4C0(ctx, base);
loc_826B411C:
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

__attribute__((alias("__imp__sub_826B4130"))) PPC_WEAK_FUNC(sub_826B4130);
PPC_FUNC_IMPL(__imp__sub_826B4130) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82121108
	sub_82121108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B413C"))) PPC_WEAK_FUNC(sub_826B413C);
PPC_FUNC_IMPL(__imp__sub_826B413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4140"))) PPC_WEAK_FUNC(sub_826B4140);
PPC_FUNC_IMPL(__imp__sub_826B4140) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82120e68
	sub_82120E68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B414C"))) PPC_WEAK_FUNC(sub_826B414C);
PPC_FUNC_IMPL(__imp__sub_826B414C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4150"))) PPC_WEAK_FUNC(sub_826B4150);
PPC_FUNC_IMPL(__imp__sub_826B4150) {
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
	// bl 0x826bcdf8
	sub_826BCDF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826b41a4
	if (cr6.lt) goto loc_826B41A4;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,-8
	ctx.r3.s64 = r11.s64 + -8;
	// bne cr6,0x826b418c
	if (!cr6.eq) goto loc_826B418C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_826B418C:
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// bl 0x826af888
	sub_826AF888(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826b47f8
	sub_826B47F8(ctx, base);
loc_826B41A4:
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

__attribute__((alias("__imp__sub_826B41C0"))) PPC_WEAK_FUNC(sub_826B41C0);
PPC_FUNC_IMPL(__imp__sub_826B41C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_826B41D0:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x826b41d0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B41D0;
	// lis r11,0
	r11.s64 = 0;
	// stb r9,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r9.u8);
	// lbz r10,1(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lbz r11,8(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b421c
	if (!cr6.eq) goto loc_826B421C;
	// li r11,1
	r11.s64 = 1;
loc_826B421C:
	// stb r11,24(r4)
	PPC_STORE_U8(ctx.r4.u32 + 24, r11.u8);
	// lbz r11,9(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 9);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b4230
	if (!cr6.eq) goto loc_826B4230;
	// li r11,6
	r11.s64 = 6;
loc_826B4230:
	// stb r11,25(r4)
	PPC_STORE_U8(ctx.r4.u32 + 25, r11.u8);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4240"))) PPC_WEAK_FUNC(sub_826B4240);
PPC_FUNC_IMPL(__imp__sub_826B4240) {
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
	// lbz r11,1(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, r11.u8);
	// li r11,0
	r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r11.u8);
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,48000
	r11.u64 = r11.u64 | 48000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x826bc500
	sub_826BC500(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826b4298
	if (cr6.lt) goto loc_826B4298;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// bl 0x826af9b0
	sub_826AF9B0(ctx, base);
loc_826B4298:
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

__attribute__((alias("__imp__sub_826B42B4"))) PPC_WEAK_FUNC(sub_826B42B4);
PPC_FUNC_IMPL(__imp__sub_826B42B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B42B8"))) PPC_WEAK_FUNC(sub_826B42B8);
PPC_FUNC_IMPL(__imp__sub_826B42B8) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-25784
	r11.s64 = r11.s64 + -25784;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x826bd6d8
	sub_826BD6D8(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lbz r9,76(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 76);
	// lwz r11,-13144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// mulli r11,r9,44
	r11.s64 = ctx.r9.s64 * 44;
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b4320
	if (cr6.eq) goto loc_826B4320;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r8
	cr6.compare<uint32_t>(r29.u32, ctx.r8.u32, xer);
	// beq cr6,0x826b4338
	if (cr6.eq) goto loc_826B4338;
loc_826B4320:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B4338:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x826b4378
	if (cr6.eq) goto loc_826B4378;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
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
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B4378:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b43b8
	if (cr6.eq) goto loc_826B43B8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b43b8
	if (!cr6.eq) goto loc_826B43B8;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b43b8
	if (!cr6.eq) goto loc_826B43B8;
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
loc_826B43B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bc8d8
	sub_826BC8D8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B43C8"))) PPC_WEAK_FUNC(sub_826B43C8);
PPC_FUNC_IMPL(__imp__sub_826B43C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,61(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 61);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B43D8"))) PPC_WEAK_FUNC(sub_826B43D8);
PPC_FUNC_IMPL(__imp__sub_826B43D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B43E0"))) PPC_WEAK_FUNC(sub_826B43E0);
PPC_FUNC_IMPL(__imp__sub_826B43E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x826bc978
	sub_826BC978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B43E4"))) PPC_WEAK_FUNC(sub_826B43E4);
PPC_FUNC_IMPL(__imp__sub_826B43E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B43E8"))) PPC_WEAK_FUNC(sub_826B43E8);
PPC_FUNC_IMPL(__imp__sub_826B43E8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x826b41c0
	sub_826B41C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826bc608
	sub_826BC608(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// blt cr6,0x826b4434
	if (cr6.lt) goto loc_826B4434;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826af9b0
	sub_826AF9B0(ctx, base);
loc_826B4434:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_826B4450"))) PPC_WEAK_FUNC(sub_826B4450);
PPC_FUNC_IMPL(__imp__sub_826B4450) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x826bc4c0
	sub_826BC4C0(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-25784
	r11.s64 = r11.s64 + -25784;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lbz r11,10(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// mulli r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 * 44;
	// stb r11,76(r30)
	PPC_STORE_U8(r30.u32 + 76, r11.u8);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,-13144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13144);
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// add r29,r10,r11
	r29.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r28,r13
	r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b44c8
	if (cr6.eq) goto loc_826B44C8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b44dc
	if (cr6.eq) goto loc_826B44DC;
loc_826B44C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B44DC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b454c
	if (cr6.eq) goto loc_826B454C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b454c
	if (!cr6.eq) goto loc_826B454C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b454c
	if (!cr6.eq) goto loc_826B454C;
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
loc_826B454C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B4558"))) PPC_WEAK_FUNC(sub_826B4558);
PPC_FUNC_IMPL(__imp__sub_826B4558) {
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
	// bl 0x826b42b8
	sub_826B42B8(ctx, base);
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

__attribute__((alias("__imp__sub_826B4588"))) PPC_WEAK_FUNC(sub_826B4588);
PPC_FUNC_IMPL(__imp__sub_826B4588) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r4.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x826b41c0
	sub_826B41C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826bc550
	sub_826BC550(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b45c8
	if (cr6.lt) goto loc_826B45C8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,80
	r11.s64 = r11.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_826B45C8:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b466c
	if (cr6.lt) goto loc_826B466C;
	// lis r3,24962
	ctx.r3.s64 = 1635909632;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// ori r3,r3,6
	ctx.r3.u64 = ctx.r3.u64 | 6;
	// bl 0x826bc410
	sub_826BC410(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826b466c
	if (cr6.lt) goto loc_826B466C;
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// li r4,80
	ctx.r4.s64 = 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b462c
	if (cr6.eq) goto loc_826B462C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r5,204(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x826b4450
	sub_826B4450(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x826b4638
	if (!cr6.eq) goto loc_826B4638;
loc_826B462C:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x826b466c
	goto loc_826B466C;
loc_826B4638:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b43e8
	sub_826B43E8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826b4658
	if (cr6.lt) goto loc_826B4658;
	// stw r31,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r31.u32);
	// b 0x826b466c
	goto loc_826B466C;
loc_826B4658:
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
loc_826B466C:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b4688
	if (cr6.eq) goto loc_826B4688;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B4688:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B4694"))) PPC_WEAK_FUNC(sub_826B4694);
PPC_FUNC_IMPL(__imp__sub_826B4694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4698"))) PPC_WEAK_FUNC(sub_826B4698);
PPC_FUNC_IMPL(__imp__sub_826B4698) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x826b4720
	if (cr6.eq) goto loc_826B4720;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// beq cr6,0x826b4718
	if (cr6.eq) goto loc_826B4718;
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// bne cr6,0x826b4734
	if (!cr6.eq) goto loc_826B4734;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// li r31,0
	r31.s64 = 0;
	// addi r29,r11,-13108
	r29.s64 = r11.s64 + -13108;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_826B46CC:
	// addi r11,r29,28
	r11.s64 = r29.s64 + 28;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b46fc
	if (cr6.eq) goto loc_826B46FC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// oris r3,r31,4
	ctx.r3.u64 = r31.u64 | 262144;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x826a8a08
	sub_826A8A08(ctx, base);
loc_826B46FC:
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// addi r11,r29,28
	r11.s64 = r29.s64 + 28;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x826b46cc
	if (cr6.lt) goto loc_826B46CC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
loc_826B4718:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x826b4724
	goto loc_826B4724;
loc_826B4720:
	// li r10,0
	ctx.r10.s64 = 0;
loc_826B4724:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13108
	r11.s64 = r11.s64 + -13108;
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stbx r10,r11,r4
	PPC_STORE_U8(r11.u32 + ctx.r4.u32, ctx.r10.u8);
loc_826B4734:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826B473C"))) PPC_WEAK_FUNC(sub_826B473C);
PPC_FUNC_IMPL(__imp__sub_826B473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4740"))) PPC_WEAK_FUNC(sub_826B4740);
PPC_FUNC_IMPL(__imp__sub_826B4740) {
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
	// lis r11,-32149
	r11.s64 = -2106916864;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,18072
	r11.s64 = r11.s64 + 18072;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b4788
	if (cr6.eq) goto loc_826B4788;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,47
	ctx.r3.s64 = 47;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B4788:
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

__attribute__((alias("__imp__sub_826B479C"))) PPC_WEAK_FUNC(sub_826B479C);
PPC_FUNC_IMPL(__imp__sub_826B479C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B47A0"))) PPC_WEAK_FUNC(sub_826B47A0);
PPC_FUNC_IMPL(__imp__sub_826B47A0) {
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
	// li r11,4
	r11.s64 = 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b47e4
	if (cr6.eq) goto loc_826B47E4;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,47
	ctx.r3.s64 = 47;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B47E4:
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

__attribute__((alias("__imp__sub_826B47F8"))) PPC_WEAK_FUNC(sub_826B47F8);
PPC_FUNC_IMPL(__imp__sub_826B47F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-13136
	r11.s64 = r11.s64 + -13136;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_826B4808:
	// mfmsr r7
	// mtmsrd r13,1
	// lwarx r9,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r9.u64 = __builtin_bswap32(reserved.u32);
	// add r8,r4,r9
	ctx.r8.u64 = ctx.r4.u64 + ctx.r9.u64;
	// stwcx. r8,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r8.s32));
	cr0.so = xer.so;
	// mtmsrd r7,1
	// bne 0x826b4808
	if (!cr0.eq) goto loc_826B4808;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B482C"))) PPC_WEAK_FUNC(sub_826B482C);
PPC_FUNC_IMPL(__imp__sub_826B482C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4830"))) PPC_WEAK_FUNC(sub_826B4830);
PPC_FUNC_IMPL(__imp__sub_826B4830) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// addi r10,r10,-13136
	ctx.r10.s64 = ctx.r10.s64 + -13136;
loc_826B4840:
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// stwx r7,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r11,28
	cr6.compare<int32_t>(r11.s32, 28, xer);
	// blt cr6,0x826b4840
	if (cr6.lt) goto loc_826B4840;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4864"))) PPC_WEAK_FUNC(sub_826B4864);
PPC_FUNC_IMPL(__imp__sub_826B4864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4868"))) PPC_WEAK_FUNC(sub_826B4868);
PPC_FUNC_IMPL(__imp__sub_826B4868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r8,6
	ctx.r8.s64 = 6;
	// lfs f12,-25672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25672);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f11,-25664(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25664);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stfs f12,52(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f11,72(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lfs f0,-25668(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r11,8
	r11.s64 = 8;
	// lfs f13,-25660(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25660);
	ctx.f13.f64 = double(temp.f32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stfs f0,56(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stfs f0,60(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stfs f0,64(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, r11.u32);
	// stfs f13,76(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stfs f13,80(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// stw r9,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r9.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B48E8"))) PPC_WEAK_FUNC(sub_826B48E8);
PPC_FUNC_IMPL(__imp__sub_826B48E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8239d5e0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,8(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fadds f29,f0,f13
	f29.f64 = double(float(f0.f64 + ctx.f13.f64));
	// lfs f26,-25668(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25668);
	f26.f64 = double(temp.f32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-25664(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25664);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f29,f26
	cr6.compare(f29.f64, f26.f64);
	// bge cr6,0x826b4930
	if (!cr6.lt) goto loc_826B4930;
	// fdivs f28,f13,f29
	f28.f64 = double(float(ctx.f13.f64 / f29.f64));
	// b 0x826b4934
	goto loc_826B4934;
loc_826B4930:
	// fmr f28,f0
	ctx.fpscr.disableFlushMode();
	f28.f64 = f0.f64;
loc_826B4934:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// fsubs f12,f0,f28
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f0.f64 - f28.f64));
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,-22440(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22440);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * f29.f64));
	// lfd f31,32128(r11)
	f31.u64 = PPC_LOAD_U64(r11.u32 + 32128);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fdiv f13,f0,f13
	ctx.f13.f64 = f0.f64 / ctx.f13.f64;
	// lfs f0,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	f0.f64 = double(temp.f32);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * f0.f64));
	// frsp f27,f13
	f27.f64 = double(float(ctx.f13.f64));
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// lfd f30,-28592(r11)
	f30.u64 = PPC_LOAD_U64(r11.u32 + -28592);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmuls f13,f28,f29
	ctx.f13.f64 = double(float(f28.f64 * f29.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// lfs f0,3008(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3008);
	f0.f64 = double(temp.f32);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// stfs f1,24(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-30048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -30048);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// frsp f0,f1
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,24(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 24, temp.u32);
	// bge cr6,0x826b4a30
	if (!cr6.lt) goto loc_826B4A30;
	// fmr f1,f27
	ctx.f1.f64 = f27.f64;
	// bl 0x8239de90
	sub_8239DE90(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fmuls f11,f31,f31
	ctx.f11.f64 = double(float(f31.f64 * f31.f64));
	// lfd f12,264(r11)
	ctx.f12.u64 = PPC_LOAD_U64(r11.u32 + 264);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(f0.f64 * f0.f64));
	// lfd f13,-31360(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fmuls f8,f0,f31
	ctx.f8.f64 = double(float(f0.f64 * f31.f64));
	// fsub f0,f13,f0
	f0.f64 = ctx.f13.f64 - f0.f64;
	// fsub f10,f13,f31
	ctx.f10.f64 = ctx.f13.f64 - f31.f64;
	// fsub f9,f13,f9
	ctx.f9.f64 = ctx.f13.f64 - ctx.f9.f64;
	// fsub f13,f13,f8
	ctx.f13.f64 = ctx.f13.f64 - ctx.f8.f64;
	// fmul f0,f0,f31
	f0.f64 = f0.f64 * f31.f64;
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmul f11,f9,f11
	ctx.f11.f64 = ctx.f9.f64 * ctx.f11.f64;
	// fmsub f0,f0,f12,f11
	f0.f64 = f0.f64 * ctx.f12.f64 - ctx.f11.f64;
	// fsqrt f0,f0
	f0.f64 = sqrt(f0.f64);
	// fsub f0,f13,f0
	f0.f64 = ctx.f13.f64 - f0.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f0,f0,f10
	f0.f64 = double(float(f0.f64 / ctx.f10.f64));
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// b 0x826b4a34
	goto loc_826B4A34;
loc_826B4A30:
	// stfs f26,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
loc_826B4A34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x8239d62c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4A50"))) PPC_WEAK_FUNC(sub_826B4A50);
PPC_FUNC_IMPL(__imp__sub_826B4A50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r10,2048
	ctx.r10.s64 = 2048;
loc_826B4A58:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne cr6,0x826b4a58
	if (!cr6.eq) goto loc_826B4A58;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4AB4"))) PPC_WEAK_FUNC(sub_826B4AB4);
PPC_FUNC_IMPL(__imp__sub_826B4AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4AB8"))) PPC_WEAK_FUNC(sub_826B4AB8);
PPC_FUNC_IMPL(__imp__sub_826B4AB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r10,64
	ctx.r10.s64 = 64;
loc_826B4AC0:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne cr6,0x826b4ac0
	if (!cr6.eq) goto loc_826B4AC0;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4B1C"))) PPC_WEAK_FUNC(sub_826B4B1C);
PPC_FUNC_IMPL(__imp__sub_826B4B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4B20"))) PPC_WEAK_FUNC(sub_826B4B20);
PPC_FUNC_IMPL(__imp__sub_826B4B20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r10,16
	ctx.r10.s64 = 16;
loc_826B4B28:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne cr6,0x826b4b28
	if (!cr6.eq) goto loc_826B4B28;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4B84"))) PPC_WEAK_FUNC(sub_826B4B84);
PPC_FUNC_IMPL(__imp__sub_826B4B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4B88"))) PPC_WEAK_FUNC(sub_826B4B88);
PPC_FUNC_IMPL(__imp__sub_826B4B88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r10,256
	ctx.r10.s64 = 256;
loc_826B4B90:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne cr6,0x826b4b90
	if (!cr6.eq) goto loc_826B4B90;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4BEC"))) PPC_WEAK_FUNC(sub_826B4BEC);
PPC_FUNC_IMPL(__imp__sub_826B4BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4BF0"))) PPC_WEAK_FUNC(sub_826B4BF0);
PPC_FUNC_IMPL(__imp__sub_826B4BF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r10,32
	ctx.r10.s64 = 32;
loc_826B4BF8:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne cr6,0x826b4bf8
	if (!cr6.eq) goto loc_826B4BF8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4C54"))) PPC_WEAK_FUNC(sub_826B4C54);
PPC_FUNC_IMPL(__imp__sub_826B4C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4C58"))) PPC_WEAK_FUNC(sub_826B4C58);
PPC_FUNC_IMPL(__imp__sub_826B4C58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r10,128
	ctx.r10.s64 = 128;
loc_826B4C60:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne cr6,0x826b4c60
	if (!cr6.eq) goto loc_826B4C60;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4CBC"))) PPC_WEAK_FUNC(sub_826B4CBC);
PPC_FUNC_IMPL(__imp__sub_826B4CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4CC0"))) PPC_WEAK_FUNC(sub_826B4CC0);
PPC_FUNC_IMPL(__imp__sub_826B4CC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// li r10,512
	ctx.r10.s64 = 512;
loc_826B4CC8:
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stfs f0,-4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + -4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// bne cr6,0x826b4cc8
	if (!cr6.eq) goto loc_826B4CC8;
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4D24"))) PPC_WEAK_FUNC(sub_826B4D24);
PPC_FUNC_IMPL(__imp__sub_826B4D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4D28"))) PPC_WEAK_FUNC(sub_826B4D28);
PPC_FUNC_IMPL(__imp__sub_826B4D28) {
	PPC_FUNC_PROLOGUE();
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4D30"))) PPC_WEAK_FUNC(sub_826B4D30);
PPC_FUNC_IMPL(__imp__sub_826B4D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-26880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,92(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B4D44"))) PPC_WEAK_FUNC(sub_826B4D44);
PPC_FUNC_IMPL(__imp__sub_826B4D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B4D48"))) PPC_WEAK_FUNC(sub_826B4D48);
PPC_FUNC_IMPL(__imp__sub_826B4D48) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5b0
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r5,84
	ctx.r5.s64 = 84;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lfs f0,2868(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	f0.f64 = double(temp.f32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x826b4d90
	if (!cr6.eq) goto loc_826B4D90;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826b4dc0
	goto loc_826B4DC0;
loc_826B4D90:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826B4DC0:
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,4095
	cr6.compare<uint32_t>(ctx.r3.u32, 4095, xer);
	// ble cr6,0x826b4dd0
	if (!cr6.gt) goto loc_826B4DD0;
	// li r3,4095
	ctx.r3.s64 = 4095;
loc_826B4DD0:
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,40712
	r11.u64 = r11.u64 | 40712;
	// lis r9,3
	ctx.r9.s64 = 196608;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r10,r10,61380
	ctx.r10.u64 = ctx.r10.u64 | 61380;
	// ori r9,r9,41056
	ctx.r9.u64 = ctx.r9.u64 | 41056;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// ori r8,r8,20736
	ctx.r8.u64 = ctx.r8.u64 | 20736;
	// stwx r3,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// stwx r3,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r3.u32);
	// lfs f10,8744(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8744);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stwx r3,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, ctx.r3.u32);
	// lfs f0,80(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 80);
	f0.f64 = double(temp.f32);
	// addi r30,r11,-25648
	r30.s64 = r11.s64 + -25648;
	// fcmpu cr6,f0,f10
	cr6.compare(f0.f64, ctx.f10.f64);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f13,-25664(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25664);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// blt cr6,0x826b4e38
	if (cr6.lt) goto loc_826B4E38;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,-26880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// b 0x826b4e54
	goto loc_826B4E54;
loc_826B4E38:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,8748(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8748);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmadds f12,f0,f12,f11
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfs f0,-26880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * f0.f64));
loc_826B4E54:
	// lfs f12,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64));
	// lfs f0,-22340(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22340);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f25,f12,f0
	f25.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f0,9196(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9196);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f25,f0
	cr6.compare(f25.f64, f0.f64);
	// bge cr6,0x826b4e7c
	if (!cr6.lt) goto loc_826B4E7C;
	// fmr f25,f0
	f25.f64 = f0.f64;
loc_826B4E7C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f12,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f30,f25,f12
	f30.f64 = double(float(f25.f64 * ctx.f12.f64));
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x826b4e98
	if (!cr6.lt) goto loc_826B4E98;
	// fmr f30,f0
	f30.f64 = f0.f64;
	// b 0x826b4ea4
	goto loc_826B4EA4;
loc_826B4E98:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f30.f64, ctx.f13.f64);
	// ble cr6,0x826b4ea4
	if (!cr6.gt) goto loc_826B4EA4;
	// fmr f30,f13
	f30.f64 = ctx.f13.f64;
loc_826B4EA4:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f0,76(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 76);
	f0.f64 = double(temp.f32);
	// lfs f12,-5848(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5848);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// blt cr6,0x826b4ed8
	if (cr6.lt) goto loc_826B4ED8;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f29,f13
	f29.f64 = ctx.f13.f64;
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
	// fmr f27,f13
	f27.f64 = ctx.f13.f64;
	// lfs f0,9200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9200);
	f0.f64 = double(temp.f32);
	// fmuls f31,f12,f0
	f31.f64 = double(float(ctx.f12.f64 * f0.f64));
	// b 0x826b4f44
	goto loc_826B4F44;
loc_826B4ED8:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f10.f64);
	// blt cr6,0x826b4f04
	if (cr6.lt) goto loc_826B4F04;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// fsubs f12,f0,f10
	ctx.f12.f64 = double(float(f0.f64 - ctx.f10.f64));
	// fmr f28,f13
	f28.f64 = ctx.f13.f64;
	// fmr f27,f13
	f27.f64 = ctx.f13.f64;
	// lfs f31,-25668(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25668);
	f31.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,9200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9200);
	f0.f64 = double(temp.f32);
	// fmuls f29,f12,f0
	f29.f64 = double(float(ctx.f12.f64 * f0.f64));
	// b 0x826b4f44
	goto loc_826B4F44;
loc_826B4F04:
	// lis r11,-32252
	r11.s64 = -2113667072;
	// lfs f12,-14988(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -14988);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// lfs f31,-25668(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25668);
	f31.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f29,f31
	f29.f64 = f31.f64;
	// blt cr6,0x826b4f38
	if (cr6.lt) goto loc_826B4F38;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(f0.f64 - ctx.f12.f64));
	// lfs f0,9200(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9200);
	f0.f64 = double(temp.f32);
	// fmr f27,f13
	f27.f64 = ctx.f13.f64;
	// fmuls f28,f12,f0
	f28.f64 = double(float(ctx.f12.f64 * f0.f64));
	// b 0x826b4f44
	goto loc_826B4F44;
loc_826B4F38:
	// lfs f13,9200(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 9200);
	ctx.f13.f64 = double(temp.f32);
	// fmr f28,f31
	f28.f64 = f31.f64;
	// fmuls f27,f0,f13
	f27.f64 = double(float(f0.f64 * ctx.f13.f64));
loc_826B4F44:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-22344(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22344);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r28,88(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r10,r10,240
	ctx.r10.u64 = ctx.r10.u64 | 240;
	// ori r9,r9,252
	ctx.r9.u64 = ctx.r9.u64 | 252;
	// lfs f0,-22348(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22348);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// stwx r3,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r11,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r11.u32);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r11,r11,2868
	r11.u64 = r11.u64 | 2868;
	// addi r8,r3,-1
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// ori r10,r10,2880
	ctx.r10.u64 = ctx.r10.u64 | 2880;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// stwx r8,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r8.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r11,r11,0,28,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFC0F;
	// addi r11,r11,1020
	r11.s64 = r11.s64 + 1020;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r27,88(r1)
	r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ori r10,r10,14224
	ctx.r10.u64 = ctx.r10.u64 | 14224;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stwx r11,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r11.u32);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r10,r10,18360
	ctx.r10.u64 = ctx.r10.u64 | 18360;
	// ori r9,r9,18372
	ctx.r9.u64 = ctx.r9.u64 | 18372;
	// lfs f0,-22352(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22352);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// stwx r3,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, ctx.r3.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r11,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r11.u32);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r10,r10,20988
	ctx.r10.u64 = ctx.r10.u64 | 20988;
	// ori r9,r9,21000
	ctx.r9.u64 = ctx.r9.u64 | 21000;
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stwx r11,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r11.u32);
	// stwx r8,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// fmuls f26,f31,f30
	ctx.fpscr.disableFlushMode();
	f26.f64 = double(float(f31.f64 * f30.f64));
	// lis r11,2
	r11.s64 = 131072;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// ori r11,r11,32344
	r11.u64 = r11.u64 | 32344;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-22356(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22356);
	f0.f64 = double(temp.f32);
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b50c0
	if (!cr6.eq) goto loc_826B50C0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B50C0:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r15,r31,3
	r15.s64 = r31.s64 + 196608;
	// addis r14,r31,3
	r14.s64 = r31.s64 + 196608;
	// addi r15,r15,-29064
	r15.s64 = r15.s64 + -29064;
	// addi r14,r14,-26992
	r14.s64 = r14.s64 + -26992;
	// lfs f0,-22360(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22360);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// stw r3,0(r15)
	PPC_STORE_U32(r15.u32 + 0, ctx.r3.u32);
	// stw r15,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r15.u32);
	// stw r14,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r14.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// fmuls f13,f31,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f31.f64 * f25.f64));
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r3,0(r14)
	PPC_STORE_U32(r14.u32 + 0, ctx.r3.u32);
	// lfs f0,-22364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22364);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b5130
	if (!cr6.eq) goto loc_826B5130;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B5130:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r16,r31,3
	r16.s64 = r31.s64 + 196608;
	// addi r16,r16,-24836
	r16.s64 = r16.s64 + -24836;
	// lfs f0,-22368(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22368);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// stw r3,0(r16)
	PPC_STORE_U32(r16.u32 + 0, ctx.r3.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b5168
	if (!cr6.eq) goto loc_826B5168;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B5168:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r18,r31,3
	r18.s64 = r31.s64 + 196608;
	// addis r17,r31,3
	r17.s64 = r31.s64 + 196608;
	// addi r18,r18,-8396
	r18.s64 = r18.s64 + -8396;
	// addi r17,r17,-6324
	r17.s64 = r17.s64 + -6324;
	// lfs f0,-22372(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22372);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// stw r3,0(r18)
	PPC_STORE_U32(r18.u32 + 0, ctx.r3.u32);
	// stw r18,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r18.u32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r17.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// fmuls f13,f29,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f29.f64 * f25.f64));
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r3,0(r17)
	PPC_STORE_U32(r17.u32 + 0, ctx.r3.u32);
	// lfs f0,-22376(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22376);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b51d8
	if (!cr6.eq) goto loc_826B51D8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B51D8:
	// fmuls f28,f28,f30
	ctx.fpscr.disableFlushMode();
	f28.f64 = double(float(f28.f64 * f30.f64));
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r19,r31,3
	r19.s64 = r31.s64 + 196608;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r19,r19,-4168
	r19.s64 = r19.s64 + -4168;
	// lfs f0,-22380(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22380);
	f0.f64 = double(temp.f32);
	// stw r3,0(r19)
	PPC_STORE_U32(r19.u32 + 0, ctx.r3.u32);
	// fmuls f0,f28,f0
	f0.f64 = double(float(f28.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b5214
	if (!cr6.eq) goto loc_826B5214;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B5214:
	// fmuls f31,f29,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f29.f64 * f30.f64));
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r20,r31,3
	r20.s64 = r31.s64 + 196608;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r20,r20,12272
	r20.s64 = r20.s64 + 12272;
	// lfs f0,-22384(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22384);
	f0.f64 = double(temp.f32);
	// stw r3,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r3.u32);
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b5250
	if (!cr6.eq) goto loc_826B5250;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B5250:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r22,r31,3
	r22.s64 = r31.s64 + 196608;
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// addi r22,r22,20488
	r22.s64 = r22.s64 + 20488;
	// addis r21,r31,3
	r21.s64 = r31.s64 + 196608;
	// lfs f0,-22388(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22388);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f30,f0
	f0.f64 = double(float(f30.f64 * f0.f64));
	// addi r21,r21,28708
	r21.s64 = r21.s64 + 28708;
	// stw r10,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r10.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r3,0(r21)
	PPC_STORE_U32(r21.u32 + 0, ctx.r3.u32);
	// lfs f0,-22392(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22392);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b52b8
	if (!cr6.eq) goto loc_826B52B8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B52B8:
	// fmuls f13,f27,f25
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f27.f64 * f25.f64));
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r23,r31,4
	r23.s64 = r31.s64 + 262144;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r23,r23,-28612
	r23.s64 = r23.s64 + -28612;
	// lfs f0,-22396(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22396);
	f0.f64 = double(temp.f32);
	// stw r3,0(r23)
	PPC_STORE_U32(r23.u32 + 0, ctx.r3.u32);
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r23.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b52f8
	if (!cr6.eq) goto loc_826B52F8;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B52F8:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r24,r31,4
	r24.s64 = r31.s64 + 262144;
	// addi r24,r24,-24492
	r24.s64 = r24.s64 + -24492;
	// lfs f0,-22400(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22400);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f28,f0
	f0.f64 = double(float(f28.f64 * f0.f64));
	// stw r3,0(r24)
	PPC_STORE_U32(r24.u32 + 0, ctx.r3.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b5330
	if (!cr6.eq) goto loc_826B5330;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B5330:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r25,r31,4
	r25.s64 = r31.s64 + 262144;
	// addi r25,r25,-8048
	r25.s64 = r25.s64 + -8048;
	// lfs f0,-22404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22404);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b5368
	if (!cr6.eq) goto loc_826B5368;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B5368:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r26,r31,4
	r26.s64 = r31.s64 + 262144;
	// addi r26,r26,168
	r26.s64 = r26.s64 + 168;
	// lfs f0,-22408(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22408);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// stw r3,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r3.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b53a0
	if (!cr6.eq) goto loc_826B53A0;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B53A0:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addis r28,r31,4
	r28.s64 = r31.s64 + 262144;
	// addis r27,r31,4
	r27.s64 = r31.s64 + 262144;
	// addi r28,r28,8388
	r28.s64 = r28.s64 + 8388;
	// addi r27,r27,16604
	r27.s64 = r27.s64 + 16604;
	// lfs f0,-22412(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22412);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f26,f0
	f0.f64 = double(float(f26.f64 * f0.f64));
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r27.u32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stw r3,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r3.u32);
	// lfs f0,-22416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22416);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// fmuls f0,f25,f0
	f0.f64 = double(float(f25.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x826bdc20
	sub_826BDC20(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b5408
	if (!cr6.eq) goto loc_826B5408;
	// li r3,1
	ctx.r3.s64 = 1;
loc_826B5408:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// ori r25,r10,20724
	r25.u64 = ctx.r10.u64 | 20724;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// lwz r28,0(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lfd f30,32128(r9)
	f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32128);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r6,0(r14)
	ctx.r6.u64 = PPC_LOAD_U32(r14.u32 + 0);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r8,0(r15)
	ctx.r8.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stwx r3,r31,r25
	PPC_STORE_U32(r31.u32 + r25.u32, ctx.r3.u32);
	// lfs f13,72(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r4
	r11.u64 = r11.u64 + ctx.r4.u64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 / f0.f64));
	// fdiv f0,f13,f0
	f0.f64 = ctx.f13.f64 / f0.f64;
	// lfd f13,-22424(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -22424);
	// fdiv f2,f13,f0
	ctx.f2.f64 = ctx.f13.f64 / f0.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// addi r7,r30,888
	ctx.r7.s64 = r30.s64 + 888;
	// addi r6,r30,192
	ctx.r6.s64 = r30.s64 + 192;
	// addi r28,r30,376
	r28.s64 = r30.s64 + 376;
	// lfd f13,-28592(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r8.u32 + -28592);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fmul f13,f1,f13
	ctx.f13.f64 = ctx.f1.f64 * ctx.f13.f64;
	// lfs f0,-22432(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22432);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r30,504
	ctx.r5.s64 = r30.s64 + 504;
	// addi r4,r30,632
	ctx.r4.s64 = r30.s64 + 632;
	// lfsx f28,r11,r7
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	f28.f64 = double(temp.f32);
	// addi r3,r30,760
	ctx.r3.s64 = r30.s64 + 760;
	// lfsx f9,r11,r6
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfsx f8,r11,r28
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	ctx.f8.f64 = double(temp.f32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfsx f25,r10,r5
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	f25.f64 = double(temp.f32);
	// fsqrts f11,f13
	ctx.f11.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f13,5736(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfsx f24,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	f24.f64 = double(temp.f32);
	// lfsx f23,r10,r3
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	f23.f64 = double(temp.f32);
	// lfs f13,-27636(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27636);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f22,f28,f13
	f22.f64 = double(float(f28.f64 * ctx.f13.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r23,r30,632
	r23.s64 = r30.s64 + 632;
	// lwz r26,24(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lfs f12,-11844(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11844);
	ctx.f12.f64 = double(temp.f32);
	// addi r24,r30,504
	r24.s64 = r30.s64 + 504;
	// addi r22,r30,760
	r22.s64 = r30.s64 + 760;
	// fnmsubs f12,f11,f0,f12
	ctx.f12.f64 = double(float(-(ctx.f11.f64 * f0.f64 - ctx.f12.f64)));
	// addi r15,r30,3144
	r15.s64 = r30.s64 + 3144;
	// lwz r25,28(r29)
	r25.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r8,32(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r14,r30,3144
	r14.s64 = r30.s64 + 3144;
	// lfsx f19,r10,r23
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	f19.f64 = double(temp.f32);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lfsx f20,r9,r24
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r24.u32);
	f20.f64 = double(temp.f32);
	// lfsx f18,r9,r22
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r22.u32);
	f18.f64 = double(temp.f32);
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,40(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// addi r3,r30,376
	ctx.r3.s64 = r30.s64 + 376;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lfsx f0,r10,r15
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r15.u32);
	f0.f64 = double(temp.f32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r30,888
	r28.s64 = r30.s64 + 888;
	// lwz r6,44(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lfsx f31,r9,r14
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r14.u32);
	f31.f64 = double(temp.f32);
	// rlwinm r8,r7,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// fmuls f21,f9,f12
	f21.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// addi r27,r30,192
	r27.s64 = r30.s64 + 192;
	// lfsx f9,r11,r3
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// fmuls f26,f9,f12
	f26.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// fmuls f29,f8,f12
	f29.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// add r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lfsx f27,r11,r28
	temp.u32 = PPC_LOAD_U32(r11.u32 + r28.u32);
	f27.f64 = double(temp.f32);
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lfsx f9,r11,r27
	temp.u32 = PPC_LOAD_U32(r11.u32 + r27.u32);
	ctx.f9.f64 = double(temp.f32);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// fneg f7,f10
	ctx.f7.u64 = ctx.f10.u64 ^ 0x8000000000000000;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f16,f9,f12
	f16.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// addi r21,r30,1016
	r21.s64 = r30.s64 + 1016;
	// fmuls f15,f27,f13
	f15.f64 = double(float(f27.f64 * ctx.f13.f64));
	// addi r20,r30,316
	r20.s64 = r30.s64 + 316;
	// addi r19,r30,1536
	r19.s64 = r30.s64 + 1536;
	// addi r18,r30,2056
	r18.s64 = r30.s64 + 2056;
	// fmuls f14,f26,f13
	f14.f64 = double(float(f26.f64 * ctx.f13.f64));
	// addi r17,r30,2600
	r17.s64 = r30.s64 + 2600;
	// fmuls f17,f29,f13
	f17.f64 = double(float(f29.f64 * ctx.f13.f64));
	// addi r16,r30,132
	r16.s64 = r30.s64 + 132;
	// lfsx f6,r11,r21
	temp.u32 = PPC_LOAD_U32(r11.u32 + r21.u32);
	ctx.f6.f64 = double(temp.f32);
	// lfsx f5,r10,r20
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r20.u32);
	ctx.f5.f64 = double(temp.f32);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lfsx f4,r11,r19
	temp.u32 = PPC_LOAD_U32(r11.u32 + r19.u32);
	ctx.f4.f64 = double(temp.f32);
	// lfsx f3,r9,r18
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r18.u32);
	ctx.f3.f64 = double(temp.f32);
	// lfsx f2,r9,r17
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r17.u32);
	ctx.f2.f64 = double(temp.f32);
	// lfsx f1,r10,r16
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + r16.u32);
	ctx.f1.f64 = double(temp.f32);
	// bne cr6,0x826b5648
	if (!cr6.eq) goto loc_826B5648;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x826b567c
	goto loc_826B567C;
loc_826B5648:
	// clrldi r11,r5,32
	r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f13.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_826B567C:
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b56a0
	if (!cr6.eq) goto loc_826B56A0;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_826B56A0:
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// addi r11,r11,136
	r11.s64 = r11.s64 + 136;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b56c8
	if (!cr6.eq) goto loc_826B56C8;
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_826B56C8:
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r5,2
	ctx.r5.s64 = 131072;
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// ori r6,r6,244
	ctx.r6.u64 = ctx.r6.u64 | 244;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// ori r5,r5,256
	ctx.r5.u64 = ctx.r5.u64 | 256;
	// lfs f8,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lis r4,2
	ctx.r4.s64 = 131072;
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// ori r4,r4,268
	ctx.r4.u64 = ctx.r4.u64 | 268;
	// stfsx f12,r31,r6
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + ctx.r6.u32, temp.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfsx f9,r31,r5
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + ctx.r5.u32, temp.u32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// ori r26,r6,14228
	r26.u64 = ctx.r6.u64 | 14228;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfsx f25,r31,r4
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// lis r28,2
	r28.s64 = 131072;
	// ori r5,r6,14240
	ctx.r5.u64 = ctx.r6.u64 | 14240;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// lis r27,2
	r27.s64 = 131072;
	// ori r4,r6,232
	ctx.r4.u64 = ctx.r6.u64 | 232;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addis r10,r31,2
	ctx.r10.s64 = r31.s64 + 131072;
	// ori r25,r6,236
	r25.u64 = ctx.r6.u64 | 236;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addi r11,r11,2332
	r11.s64 = r11.s64 + 2332;
	// ori r24,r6,18364
	r24.u64 = ctx.r6.u64 | 18364;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// addis r9,r31,2
	ctx.r9.s64 = r31.s64 + 131072;
	// ori r23,r6,18376
	r23.u64 = ctx.r6.u64 | 18376;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// ori r3,r3,2872
	ctx.r3.u64 = ctx.r3.u64 | 2872;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// ori r22,r6,18388
	r22.u64 = ctx.r6.u64 | 18388;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r28,r28,2884
	r28.u64 = r28.u64 | 2884;
	// ori r21,r6,20992
	r21.u64 = ctx.r6.u64 | 20992;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfsx f12,r31,r3
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + ctx.r3.u32, temp.u32);
	// ori r27,r27,2896
	r27.u64 = r27.u64 | 2896;
	// ori r20,r6,21004
	r20.u64 = ctx.r6.u64 | 21004;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stfsx f8,r31,r28
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + r28.u32, temp.u32);
	// addi r10,r10,11104
	ctx.r10.s64 = ctx.r10.s64 + 11104;
	// addis r8,r31,2
	ctx.r8.s64 = r31.s64 + 131072;
	// addi r9,r9,12152
	ctx.r9.s64 = ctx.r9.s64 + 12152;
	// stfsx f22,r31,r27
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r31.u32 + r27.u32, temp.u32);
	// ori r19,r6,21016
	r19.u64 = ctx.r6.u64 | 21016;
	// addis r7,r31,2
	ctx.r7.s64 = r31.s64 + 131072;
	// addi r8,r8,20452
	ctx.r8.s64 = ctx.r8.s64 + 20452;
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// addis r6,r31,2
	ctx.r6.s64 = r31.s64 + 131072;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r7,r7,29224
	ctx.r7.s64 = ctx.r7.s64 + 29224;
	// stfs f0,8(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// addi r6,r6,30272
	ctx.r6.s64 = ctx.r6.s64 + 30272;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfsx f12,r31,r24
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + r24.u32, temp.u32);
	// lis r11,2
	r11.s64 = 131072;
	// stfsx f21,r31,r26
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r31.u32 + r26.u32, temp.u32);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stfsx f29,r31,r5
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + ctx.r5.u32, temp.u32);
	// ori r11,r11,32348
	r11.u64 = r11.u64 | 32348;
	// stfsx f24,r31,r4
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// ori r10,r10,32360
	ctx.r10.u64 = ctx.r10.u64 | 32360;
	// stfsx f23,r31,r25
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r31.u32 + r25.u32, temp.u32);
	// stfsx f9,r31,r23
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + r23.u32, temp.u32);
	// stfsx f20,r31,r22
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(r31.u32 + r22.u32, temp.u32);
	// stfs f0,8(r8)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 8, temp.u32);
	// stfs f13,4(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// stfsx f12,r31,r21
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + r21.u32, temp.u32);
	// fneg f12,f31
	ctx.f12.u64 = f31.u64 ^ 0x8000000000000000;
	// stfsx f8,r31,r20
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + r20.u32, temp.u32);
	// stfsx f15,r31,r19
	temp.f32 = float(f15.f64);
	PPC_STORE_U32(r31.u32 + r19.u32, temp.u32);
	// stfs f0,8(r7)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 8, temp.u32);
	// stfs f13,4(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// stfs f0,8(r6)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// stfs f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// stfsx f16,r31,r11
	temp.f32 = float(f16.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// lis r11,2
	r11.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stfsx f26,r31,r10
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// ori r5,r11,40648
	ctx.r5.u64 = r11.u64 | 40648;
	// ori r9,r9,18352
	ctx.r9.u64 = ctx.r9.u64 | 18352;
	// lis r11,2
	r11.s64 = 131072;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// ori r10,r11,40652
	ctx.r10.u64 = r11.u64 | 40652;
	// ori r8,r8,18356
	ctx.r8.u64 = ctx.r8.u64 | 18356;
	// lis r11,2
	r11.s64 = 131072;
	// stfsx f19,r31,r9
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, temp.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// ori r9,r11,40680
	ctx.r9.u64 = r11.u64 | 40680;
	// lis r11,2
	r11.s64 = 131072;
	// stfsx f18,r31,r8
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// ori r8,r11,40684
	ctx.r8.u64 = r11.u64 | 40684;
	// lis r11,2
	r11.s64 = 131072;
	// ori r7,r7,40620
	ctx.r7.u64 = ctx.r7.u64 | 40620;
	// ori r4,r11,57120
	ctx.r4.u64 = r11.u64 | 57120;
	// lis r11,2
	r11.s64 = 131072;
	// ori r6,r6,40644
	ctx.r6.u64 = ctx.r6.u64 | 40644;
	// ori r3,r11,61288
	ctx.r3.u64 = r11.u64 | 61288;
	// lis r11,2
	r11.s64 = 131072;
	// ori r28,r11,61312
	r28.u64 = r11.u64 | 61312;
	// lis r11,2
	r11.s64 = 131072;
	// ori r27,r11,61316
	r27.u64 = r11.u64 | 61316;
	// lis r11,2
	r11.s64 = 131072;
	// ori r26,r11,61320
	r26.u64 = r11.u64 | 61320;
	// lis r11,2
	r11.s64 = 131072;
	// ori r25,r11,61348
	r25.u64 = r11.u64 | 61348;
	// lis r11,2
	r11.s64 = 131072;
	// ori r24,r11,61352
	r24.u64 = r11.u64 | 61352;
	// lis r11,3
	r11.s64 = 196608;
	// ori r23,r11,12252
	r23.u64 = r11.u64 | 12252;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stfsx f1,r31,r8
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// lis r8,4
	ctx.r8.s64 = 262144;
	// stfsx f3,r31,r10
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// lis r10,3
	ctx.r10.s64 = 196608;
	// stfsx f2,r31,r9
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, temp.u32);
	// lis r9,4
	ctx.r9.s64 = 262144;
	// stfsx f6,r31,r7
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + ctx.r7.u32, temp.u32);
	// ori r10,r10,57468
	ctx.r10.u64 = ctx.r10.u64 | 57468;
	// stfsx f5,r31,r6
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + ctx.r6.u32, temp.u32);
	// ori r9,r9,37148
	ctx.r9.u64 = ctx.r9.u64 | 37148;
	// stfsx f4,r31,r5
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + ctx.r5.u32, temp.u32);
	// ori r8,r8,37152
	ctx.r8.u64 = ctx.r8.u64 | 37152;
	// stfsx f11,r31,r4
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + ctx.r4.u32, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stfsx f1,r31,r24
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + r24.u32, temp.u32);
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// stfsx f6,r31,r3
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(r31.u32 + ctx.r3.u32, temp.u32);
	// stfsx f5,r31,r28
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(r31.u32 + r28.u32, temp.u32);
	// stfsx f4,r31,r27
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(r31.u32 + r27.u32, temp.u32);
	// stfsx f3,r31,r26
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(r31.u32 + r26.u32, temp.u32);
	// stfsx f2,r31,r25
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r31.u32 + r25.u32, temp.u32);
	// stfsx f11,r31,r23
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + r23.u32, temp.u32);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lis r11,3
	r11.s64 = 196608;
	// stfsx f10,r31,r10
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// ori r11,r11,57472
	r11.u64 = r11.u64 | 57472;
	// stfsx f10,r31,r11
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stfs f31,8(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfsx f7,r31,r9
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, temp.u32);
	// stfsx f7,r31,r8
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, temp.u32);
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfs f0,68(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 68);
	f0.f64 = double(temp.f32);
	// lfd f29,-26600(r11)
	f29.u64 = PPC_LOAD_U64(r11.u32 + -26600);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis r11,2
	r11.s64 = 131072;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ori r11,r11,40716
	r11.u64 = r11.u64 | 40716;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f28
	f0.f64 = double(float(f0.f64 * f28.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// lfs f0,68(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 68);
	f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis r11,2
	r11.s64 = 131072;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ori r11,r11,61384
	r11.u64 = r11.u64 | 61384;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f27
	f0.f64 = double(float(f0.f64 * f27.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// lfs f0,68(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 68);
	f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis r11,3
	r11.s64 = 196608;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ori r11,r11,41060
	r11.u64 = r11.u64 | 41060;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f17
	f0.f64 = double(float(f0.f64 * f17.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// lfs f0,68(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 68);
	f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
	// lis r11,4
	r11.s64 = 262144;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// ori r11,r11,20740
	r11.u64 = r11.u64 | 20740;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f14
	f0.f64 = double(float(f0.f64 * f14.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + r11.u32, temp.u32);
	// lfs f0,64(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 64);
	f0.f64 = double(temp.f32);
	// fmul f2,f0,f29
	ctx.f2.f64 = f0.f64 * f29.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lfs f0,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// addis r10,r31,5
	ctx.r10.s64 = r31.s64 + 327680;
	// addi r11,r11,-28368
	r11.s64 = r11.s64 + -28368;
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,96(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// addis r9,r31,5
	ctx.r9.s64 = r31.s64 + 327680;
	// addi r10,r10,-26296
	ctx.r10.s64 = ctx.r10.s64 + -26296;
	// addi r9,r9,-24224
	ctx.r9.s64 = ctx.r9.s64 + -24224;
	// addis r30,r31,2
	r30.s64 = r31.s64 + 131072;
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// addi r30,r30,168
	r30.s64 = r30.s64 + 168;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// addi r11,r11,-22152
	r11.s64 = r11.s64 + -22152;
	// stfs f0,8(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lfs f0,52(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 52);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// bl 0x826b48e8
	sub_826B48E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// bl 0x826b48e8
	sub_826B48E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x826b48e8
	sub_826B48E8(ctx, base);
	// lfs f0,52(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 52);
	f0.f64 = double(temp.f32);
	// addis r30,r31,2
	r30.s64 = r31.s64 + 131072;
	// addi r30,r30,200
	r30.s64 = r30.s64 + 200;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// bl 0x826b48e8
	sub_826B48E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,56(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 56);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// bl 0x826b48e8
	sub_826B48E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,60(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 60);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 12, temp.u32);
	// bl 0x826b48e8
	sub_826B48E8(ctx, base);
	// lwz r11,48(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 48);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b5adc
	if (!cr6.eq) goto loc_826B5ADC;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x826b5b10
	goto loc_826B5B10;
loc_826B5ADC:
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	f0.f64 = double(temp.f32);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, r11.u64);
	// lfd f13,120(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_826B5B10:
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// addi r11,r11,-20080
	r11.s64 = r11.s64 + -20080;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b5b38
	if (!cr6.eq) goto loc_826B5B38;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_826B5B38:
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// addi r11,r11,-19024
	r11.s64 = r11.s64 + -19024;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b5b60
	if (!cr6.eq) goto loc_826B5B60;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
loc_826B5B60:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// addi r12,r1,-152
	r12.s64 = ctx.r1.s64 + -152;
	// bl 0x8239d5fc
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_826B5B70"))) PPC_WEAK_FUNC(sub_826B5B70);
PPC_FUNC_IMPL(__imp__sub_826B5B70) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f0{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8239d5bc
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r25,-32242
	r25.s64 = -2113011712;
	// lis r30,-32242
	r30.s64 = -2113011712;
	// li r10,5
	ctx.r10.s64 = 5;
	// lfs f12,-25672(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25672);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r7,6
	ctx.r7.s64 = 6;
	// addi r9,r11,-26604
	ctx.r9.s64 = r11.s64 + -26604;
	// lfs f9,-25664(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + -25664);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-25668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r8,4
	ctx.r8.s64 = 4;
	// fmr f10,f9
	ctx.f10.f64 = ctx.f9.f64;
	// lis r24,-32242
	r24.s64 = -2113011712;
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// lfs f13,-25660(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25660);
	ctx.f13.f64 = double(temp.f32);
	// li r11,8
	r11.s64 = 8;
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lfs f11,-25656(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25656);
	ctx.f11.f64 = double(temp.f32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// lfd f29,-31368(r9)
	f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + -31368);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// stw r7,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r7.u32);
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// stfs f9,76(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lfd f28,32128(r9)
	f28.u64 = PPC_LOAD_U64(ctx.r9.u32 + 32128);
	// stw r8,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r8.u32);
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// stfs f13,84(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 84, temp.u32);
	// stw r8,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r8.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// stfs f11,88(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stfs f10,92(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 92, temp.u32);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// addi r11,r31,104
	r11.s64 = r31.s64 + 104;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// li r29,0
	r29.s64 = 0;
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// li r28,40
	r28.s64 = 40;
	// lfs f0,-25668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// lfs f13,-25656(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25656);
	ctx.f13.f64 = double(temp.f32);
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// bl 0x826b4a50
	sub_826B4A50(ctx, base);
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// lfs f13,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25656(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25656);
	f0.f64 = double(temp.f32);
	// addi r11,r11,136
	r11.s64 = r11.s64 + 136;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// bl 0x826b4a50
	sub_826B4A50(ctx, base);
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// addis r3,r31,2
	ctx.r3.s64 = r31.s64 + 131072;
	// lfs f0,-25668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// lis r26,-32256
	r26.s64 = -2113929216;
	// addi r3,r3,168
	ctx.r3.s64 = ctx.r3.s64 + 168;
	// lfs f12,5736(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 5736);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// bl 0x826b48e8
	sub_826B48E8(ctx, base);
	// addis r3,r31,2
	ctx.r3.s64 = r31.s64 + 131072;
	// lfs f13,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,5736(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 5736);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// lfs f0,-25668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,4(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// bl 0x826b48e8
	sub_826B48E8(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// addi r28,r11,-25648
	r28.s64 = r11.s64 + -25648;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// lis r11,2
	r11.s64 = 131072;
	// ori r9,r9,236
	ctx.r9.u64 = ctx.r9.u64 | 236;
	// ori r10,r11,232
	ctx.r10.u64 = r11.u64 | 232;
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// li r20,509
	r20.s64 = 509;
	// lfs f26,44(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 44);
	f26.f64 = double(temp.f32);
	// addi r11,r11,240
	r11.s64 = r11.s64 + 240;
	// lfs f25,48(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 48);
	f25.f64 = double(temp.f32);
	// li r21,508
	r21.s64 = 508;
	// stfsx f25,r31,r9
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, temp.u32);
	// li r27,1
	r27.s64 = 1;
	// stfsx f26,r31,r10
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// lfs f30,0(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f30.f64 = double(temp.f32);
	// lfs f24,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	f24.f64 = double(temp.f32);
	// lfs f23,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	f23.f64 = double(temp.f32);
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r21,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r21.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stw r27,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r27.u32);
	// stfs f24,16(r11)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f23,28(r11)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,83
	ctx.r10.s64 = 83;
	// lfs f21,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	f21.f64 = double(temp.f32);
	// lfs f22,-22328(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22328);
	f22.f64 = double(temp.f32);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// addi r11,r11,2332
	r11.s64 = r11.s64 + 2332;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f22,4(r11)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f21,8(r11)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4b20
	sub_826B4B20(ctx, base);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// lfs f20,20(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 20);
	f20.f64 = double(temp.f32);
	// li r9,2039
	ctx.r9.s64 = 2039;
	// addi r11,r11,2868
	r11.s64 = r11.s64 + 2868;
	// li r8,2038
	ctx.r8.s64 = 2038;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// li r22,600
	r22.s64 = 600;
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// stfs f20,16(r11)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// lfs f19,3008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 3008);
	f19.f64 = double(temp.f32);
	// stfs f19,28(r11)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stw r22,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r22.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// bl 0x826b4b88
	sub_826B4B88(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r10,211
	ctx.r10.s64 = 211;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// lfs f27,5736(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 5736);
	f27.f64 = double(temp.f32);
	// lfs f31,6732(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 6732);
	f31.f64 = double(temp.f32);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// addi r11,r11,11104
	r11.s64 = r11.s64 + 11104;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4bf0
	sub_826B4BF0(ctx, base);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,311
	ctx.r10.s64 = 311;
	// addi r11,r11,12152
	r11.s64 = r11.s64 + 12152;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r23,1020
	r23.s64 = 1020;
	// lfs f18,36(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 36);
	f18.f64 = double(temp.f32);
	// addi r11,r11,14224
	r11.s64 = r11.s64 + 14224;
	// lfs f17,40(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 40);
	f17.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// stfs f18,4(r11)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// stfs f17,16(r11)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4c58
	sub_826B4C58(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// lfs f13,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// ori r10,r11,18352
	ctx.r10.u64 = r11.u64 | 18352;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// ori r9,r9,18356
	ctx.r9.u64 = ctx.r9.u64 | 18356;
	// addi r11,r11,18360
	r11.s64 = r11.s64 + 18360;
	// stfsx f26,r31,r10
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, temp.u32);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// stfsx f25,r31,r9
	temp.f32 = float(f25.f64);
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r20,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r20.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stw r21,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r21.u32);
	// stfs f24,16(r11)
	temp.f32 = float(f24.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stw r27,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r27.u32);
	// stfs f12,20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f23,28(r11)
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f0,32(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,97
	ctx.r10.s64 = 97;
	// addi r11,r11,20452
	r11.s64 = r11.s64 + 20452;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f22,4(r11)
	temp.f32 = float(f22.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f21,8(r11)
	temp.f32 = float(f21.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4b20
	sub_826B4B20(ctx, base);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,1297
	ctx.r10.s64 = 1297;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// addi r11,r11,20988
	r11.s64 = r11.s64 + 20988;
	// li r9,1296
	ctx.r9.s64 = 1296;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// stfs f20,16(r11)
	temp.f32 = float(f20.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stw r22,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r22.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f19,28(r11)
	temp.f32 = float(f19.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 32, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4b88
	sub_826B4B88(ctx, base);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,223
	ctx.r10.s64 = 223;
	// addi r11,r11,29224
	r11.s64 = r11.s64 + 29224;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4bf0
	sub_826B4BF0(ctx, base);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,293
	ctx.r10.s64 = 293;
	// addi r11,r11,30272
	r11.s64 = r11.s64 + 30272;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r11,r31,2
	r11.s64 = r31.s64 + 131072;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// addi r11,r11,32344
	r11.s64 = r11.s64 + 32344;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stfs f18,4(r11)
	temp.f32 = float(f18.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r23,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r23.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stw r27,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r27.u32);
	// stfs f17,16(r11)
	temp.f32 = float(f17.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4c58
	sub_826B4C58(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,76(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 76);
	f0.f64 = double(temp.f32);
	// li r10,409
	ctx.r10.s64 = 409;
	// lfs f13,-25668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,-22332(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22332);
	f30.f64 = double(temp.f32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,-29064
	r11.s64 = r11.s64 + -29064;
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// li r10,257
	ctx.r10.s64 = 257;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// addi r11,r11,-26992
	r11.s64 = r11.s64 + -26992;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r9,r31,3
	ctx.r9.s64 = r31.s64 + 196608;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// lfs f13,52(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,-24920
	ctx.r9.s64 = ctx.r9.s64 + -24920;
	// lfs f12,56(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 56);
	ctx.f12.f64 = double(temp.f32);
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// lfs f11,60(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r11,-24896
	r11.s64 = r11.s64 + -24896;
	// lfs f10,64(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,-24864
	ctx.r10.s64 = ctx.r10.s64 + -24864;
	// lfs f9,68(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 68);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,72(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 72);
	ctx.f8.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// stfs f13,4(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r27.u32);
	// stfs f0,8(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stfs f0,12(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// stfs f0,16(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// stfs f0,20(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f9,8(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// li r10,3432
	ctx.r10.s64 = 3432;
	// lfs f0,84(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 84);
	f0.f64 = double(temp.f32);
	// addi r11,r11,-24836
	r11.s64 = r11.s64 + -24836;
	// lfs f12,-25664(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + -25664);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,-25668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f13,16(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4cc0
	sub_826B4CC0(ctx, base);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// fmr f13,f20
	ctx.f13.f64 = f20.f64;
	// addi r11,r11,-8420
	r11.s64 = r11.s64 + -8420;
	// addi r10,r10,-8396
	ctx.r10.s64 = ctx.r10.s64 + -8396;
	// li r9,383
	ctx.r9.s64 = 383;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lfs f12,76(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 76);
	ctx.f12.f64 = double(temp.f32);
	// stfs f30,4(r10)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f12,8(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,233
	ctx.r10.s64 = 233;
	// fmr f13,f27
	ctx.f13.f64 = f27.f64;
	// addi r11,r11,-6324
	r11.s64 = r11.s64 + -6324;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// lfs f13,52(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 52);
	ctx.f13.f64 = double(temp.f32);
	// fmr f12,f0
	ctx.f12.f64 = f0.f64;
	// addi r10,r10,-4252
	ctx.r10.s64 = ctx.r10.s64 + -4252;
	// lfs f11,64(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 64);
	ctx.f11.f64 = double(temp.f32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// lfs f10,68(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 68);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,72(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 72);
	ctx.f9.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = f29.f64;
	// addi r11,r11,-4228
	r11.s64 = r11.s64 + -4228;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// stfs f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// stfs f0,8(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f12,16(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// addis r10,r31,3
	ctx.r10.s64 = r31.s64 + 196608;
	// lfs f13,56(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// addi r10,r10,-4196
	ctx.r10.s64 = ctx.r10.s64 + -4196;
	// lfs f12,60(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stfs f12,8(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f11,12(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 28, temp.u32);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r27.u32);
	// stfs f0,4(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f9,12(r10)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stfs f0,16(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stfs f0,20(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// stfs f0,24(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// li r10,3820
	ctx.r10.s64 = 3820;
	// lfs f12,84(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,-4168
	r11.s64 = r11.s64 + -4168;
	// lfs f0,-25668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// lfs f13,-25664(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + -25664);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// bl 0x826b4cc0
	sub_826B4CC0(ctx, base);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// fmr f13,f20
	ctx.f13.f64 = f20.f64;
	// addi r11,r11,12248
	r11.s64 = r11.s64 + 12248;
	// lfs f27,76(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 76);
	f27.f64 = double(temp.f32);
	// li r10,1511
	ctx.r10.s64 = 1511;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// addi r11,r11,12272
	r11.s64 = r11.s64 + 12272;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4b88
	sub_826B4B88(ctx, base);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,1061
	ctx.r10.s64 = 1061;
	// addi r11,r11,20488
	r11.s64 = r11.s64 + 20488;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// stfs f27,4(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4b88
	sub_826B4B88(ctx, base);
	// addis r11,r31,3
	r11.s64 = r31.s64 + 196608;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,853
	ctx.r10.s64 = 853;
	// addi r11,r11,28708
	r11.s64 = r11.s64 + 28708;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4b88
	sub_826B4B88(ctx, base);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,541
	ctx.r10.s64 = 541;
	// lfs f13,5736(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-28612
	r11.s64 = r11.s64 + -28612;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4c58
	sub_826B4C58(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// lfs f0,84(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 84);
	f0.f64 = double(temp.f32);
	// li r10,1510
	ctx.r10.s64 = 1510;
	// addi r11,r11,-24492
	r11.s64 = r11.s64 + -24492;
	// lfs f13,-25664(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + -25664);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64));
	// lfs f0,-25668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = f0.f64;
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fmr f10,f0
	ctx.f10.f64 = f0.f64;
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// bl 0x826b4cc0
	sub_826B4CC0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r9,1657
	ctx.r9.s64 = 1657;
	// addi r11,r11,-8076
	r11.s64 = r11.s64 + -8076;
	// lfs f13,9196(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 9196);
	ctx.f13.f64 = double(temp.f32);
	// addis r10,r31,4
	ctx.r10.s64 = r31.s64 + 262144;
	// addi r10,r10,-8048
	ctx.r10.s64 = ctx.r10.s64 + -8048;
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stfs f30,4(r10)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f27,8(r10)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4b88
	sub_826B4B88(ctx, base);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,1103
	ctx.r10.s64 = 1103;
	// addi r11,r11,168
	r11.s64 = r11.s64 + 168;
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// stfs f27,4(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f30,12(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4b88
	sub_826B4B88(ctx, base);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,887
	ctx.r10.s64 = 887;
	// addi r11,r11,8388
	r11.s64 = r11.s64 + 8388;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f30,4(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f27,8(r11)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4b88
	sub_826B4B88(ctx, base);
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,491
	ctx.r10.s64 = 491;
	// lfs f13,5736(r26)
	temp.u32 = PPC_LOAD_U32(r26.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,16604
	r11.s64 = r11.s64 + 16604;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4c58
	sub_826B4C58(ctx, base);
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f28
	ctx.f1.f64 = f28.f64;
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// addis r11,r31,4
	r11.s64 = r31.s64 + 262144;
	// li r10,1438
	ctx.r10.s64 = 1438;
	// lfs f12,84(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,20724
	r11.s64 = r11.s64 + 20724;
	// lfs f13,-25664(r25)
	temp.u32 = PPC_LOAD_U32(r25.u32 + -25664);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-25668(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f0,8(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4cc0
	sub_826B4CC0(ctx, base);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// addis r10,r31,5
	ctx.r10.s64 = r31.s64 + 327680;
	// lfs f13,120(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-28396
	r11.s64 = r11.s64 + -28396;
	// lfs f30,124(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 124);
	f30.f64 = double(temp.f32);
	// addi r10,r10,-28368
	ctx.r10.s64 = ctx.r10.s64 + -28368;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r8,131
	ctx.r8.s64 = 131;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r27,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r27.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 24, temp.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lfs f31,-22336(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22336);
	f31.f64 = double(temp.f32);
	// stfs f31,4(r10)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfs f30,8(r10)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f0,12(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,113
	ctx.r10.s64 = 113;
	// addi r11,r11,-26296
	r11.s64 = r11.s64 + -26296;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f30,8(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,107
	ctx.r10.s64 = 107;
	// addi r11,r11,-24224
	r11.s64 = r11.s64 + -24224;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f30,8(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r10,127
	ctx.r10.s64 = 127;
	// addi r11,r11,-22152
	r11.s64 = r11.s64 + -22152;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stfs f31,4(r11)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stfs f30,8(r11)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 12, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// bl 0x826b4ab8
	sub_826B4AB8(ctx, base);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// lfs f0,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	f0.f64 = double(temp.f32);
	// li r28,20
	r28.s64 = 20;
	// lfs f13,-25656(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25656);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-20080
	r11.s64 = r11.s64 + -20080;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stfs f0,4(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// bl 0x826b4bf0
	sub_826B4BF0(ctx, base);
	// addis r11,r31,5
	r11.s64 = r31.s64 + 327680;
	// lfs f13,-25668(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -25668);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-19024
	r11.s64 = r11.s64 + -19024;
	// lfs f0,-25656(r24)
	temp.u32 = PPC_LOAD_U32(r24.u32 + -25656);
	f0.f64 = double(temp.f32);
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r28,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r28.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r28.u32);
	// stfs f0,4(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// bl 0x826b4bf0
	sub_826B4BF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// addi r12,r1,-104
	r12.s64 = ctx.r1.s64 + -104;
	// bl 0x8239d608
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_826B673C"))) PPC_WEAK_FUNC(sub_826B673C);
PPC_FUNC_IMPL(__imp__sub_826B673C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6740"))) PPC_WEAK_FUNC(sub_826B6740);
PPC_FUNC_IMPL(__imp__sub_826B6740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// li r8,6
	ctx.r8.s64 = 6;
	// lwz r11,-25676(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25676);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lwz r10,-25684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -25684);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// lwz r11,-25684(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25684);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lwz r10,-25680(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -25680);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// lwz r11,-25680(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25680);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-25652(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25652);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f31,-26880(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26880);
	f31.f64 = double(temp.f32);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r9,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r9.u32);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// stw r8,44(r31)
	PPC_STORE_U32(r31.u32 + 44, ctx.r8.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// li r11,8
	r11.s64 = 8;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// blt cr6,0x826b689c
	if (cr6.lt) goto loc_826B689C;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lfs f1,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239ed68
	sub_8239ED68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfd f0,-22320(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -22320);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-8
	cr6.compare<int32_t>(r11.s32, -8, xer);
	// bge cr6,0x826b6864
	if (!cr6.lt) goto loc_826B6864;
	// li r11,-8
	r11.s64 = -8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x826b68f8
	goto loc_826B68F8;
loc_826B6864:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x826b6884
	if (!cr6.lt) goto loc_826B6884;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x826b68f8
	goto loc_826B68F8;
loc_826B6884:
	// li r11,8
	r11.s64 = 8;
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x826b68f8
	goto loc_826B68F8;
loc_826B689C:
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239ed68
	sub_8239ED68(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32244
	r11.s64 = -2113142784;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfd f0,28584(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + 28584);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-8
	cr6.compare<int32_t>(r11.s32, -8, xer);
	// bge cr6,0x826b68dc
	if (!cr6.lt) goto loc_826B68DC;
	// li r11,-8
	r11.s64 = -8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x826b68f0
	goto loc_826B68F0;
loc_826B68DC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x826b68ec
	if (!cr6.lt) goto loc_826B68EC;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x826b68f0
	goto loc_826B68F0;
loc_826B68EC:
	// li r11,8
	r11.s64 = 8;
loc_826B68F0:
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
loc_826B68F8:
	// stfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 72, temp.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,64(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 64, temp.u32);
	// lwz r10,-25692(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -25692);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f12,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x826b6950
	if (cr6.lt) goto loc_826B6950;
	// fsubs f0,f13,f30
	f0.f64 = double(float(ctx.f13.f64 - f30.f64));
loc_826B6950:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bgt cr6,0x826b695c
	if (cr6.gt) goto loc_826B695C;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_826B695C:
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(r31.u32, f0.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// stfs f0,68(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 68, temp.u32);
	// lwz r11,-25688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -25688);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	f0.f64 = double(float(f0.f64 * ctx.f12.f64));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x826b69b0
	if (cr6.lt) goto loc_826B69B0;
	// fsubs f0,f13,f30
	f0.f64 = double(float(ctx.f13.f64 - f30.f64));
loc_826B69B0:
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// fctidz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f13,36(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f0,-22324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22324);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// lfs f0,40(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 76, temp.u32);
	// lfs f0,44(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
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

__attribute__((alias("__imp__sub_826B6A14"))) PPC_WEAK_FUNC(sub_826B6A14);
PPC_FUNC_IMPL(__imp__sub_826B6A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6A18"))) PPC_WEAK_FUNC(sub_826B6A18);
PPC_FUNC_IMPL(__imp__sub_826B6A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r19{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,12
	cr6.compare<uint32_t>(ctx.r4.u32, 12, xer);
	// bgt cr6,0x826b6b24
	if (cr6.gt) goto loc_826B6B24;
	// lis r12,-32149
	r12.s64 = -2106916864;
	// addi r12,r12,27216
	r12.s64 = r12.s64 + 27216;
	// rlwinm r0,r4,2,0,29
	r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r0,r12,r0
	r0.u64 = PPC_LOAD_U32(r12.u32 + r0.u32);
	// mtctr r0
	ctr.u64 = r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_826B6A84;
	case 1:
		goto loc_826B6A98;
	case 2:
		goto loc_826B6AA4;
	case 3:
		goto loc_826B6AB0;
	case 4:
		goto loc_826B6ABC;
	case 5:
		goto loc_826B6AC8;
	case 6:
		goto loc_826B6AD4;
	case 7:
		goto loc_826B6AE0;
	case 8:
		goto loc_826B6AEC;
	case 9:
		goto loc_826B6AF8;
	case 10:
		goto loc_826B6B04;
	case 11:
		goto loc_826B6B10;
	case 12:
		goto loc_826B6B1C;
	default:
		__builtin_unreachable();
	}
	// lwz r19,27268(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27268);
	// lwz r19,27288(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27288);
	// lwz r19,27300(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27300);
	// lwz r19,27312(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27312);
	// lwz r19,27324(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27324);
	// lwz r19,27336(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27336);
	// lwz r19,27348(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27348);
	// lwz r19,27360(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27360);
	// lwz r19,27372(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27372);
	// lwz r19,27384(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27384);
	// lwz r19,27396(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27396);
	// lwz r19,27408(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27408);
	// lwz r19,27420(r11)
	r19.u64 = PPC_LOAD_U32(r11.u32 + 27420);
loc_826B6A84:
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6A98:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6AA4:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6AB0:
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 8);
	f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6ABC:
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6AC8:
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6AD4:
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6AE0:
	// lfs f0,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24);
	f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6AEC:
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6AF8:
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6B04:
	// lfs f0,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 36);
	f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6B10:
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// b 0x826b6b24
	goto loc_826B6B24;
loc_826B6B1C:
	// lfs f0,44(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 44);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
loc_826B6B24:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x826b4868
	sub_826B4868(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// lfs f1,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826b6740
	sub_826B6740(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// bl 0x826b4d48
	sub_826B4D48(ctx, base);
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

__attribute__((alias("__imp__sub_826B6B70"))) PPC_WEAK_FUNC(sub_826B6B70);
PPC_FUNC_IMPL(__imp__sub_826B6B70) {
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
	// li r30,0
	r30.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq cr6,0x826b6bac
	if (cr6.eq) goto loc_826B6BAC;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,52
	ctx.r3.s64 = r31.s64 + 52;
	// addi r11,r11,-22312
	r11.s64 = r11.s64 + -22312;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826b5b70
	sub_826B5B70(ctx, base);
loc_826B6BAC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r10,r11,-26632
	ctx.r10.s64 = r11.s64 + -26632;
	// li r11,-10000
	r11.s64 = -10000;
	// lfs f13,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lfs f12,2552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stwx r10,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + r31.u32, ctx.r10.u32);
	// stfs f13,12(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// stfs f12,16(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lfs f11,5736(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5736);
	ctx.f11.f64 = double(temp.f32);
	// lis r9,-32253
	ctx.r9.s64 = -2113732608;
	// stfs f11,20(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r11.u32);
	// lfs f10,-22848(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -22848);
	ctx.f10.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stfs f10,28(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(r31.u32 + 28, temp.u32);
	// lfs f9,9200(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 9200);
	ctx.f9.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stfs f9,36(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(r31.u32 + 36, temp.u32);
	// lfs f0,17320(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17320);
	f0.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f0,40(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 40, temp.u32);
	// stfs f0,44(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 44, temp.u32);
	// lfs f8,716(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 716);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,48(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
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

__attribute__((alias("__imp__sub_826B6C48"))) PPC_WEAK_FUNC(sub_826B6C48);
PPC_FUNC_IMPL(__imp__sub_826B6C48) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22296
	r11.s64 = r11.s64 + -22296;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826bde18
	sub_826BDE18(ctx, base);
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

__attribute__((alias("__imp__sub_826B6C88"))) PPC_WEAK_FUNC(sub_826B6C88);
PPC_FUNC_IMPL(__imp__sub_826B6C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-22296
	ctx.r10.s64 = ctx.r10.s64 + -22296;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x826bdd20
	sub_826BDD20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B6CA0"))) PPC_WEAK_FUNC(sub_826B6CA0);
PPC_FUNC_IMPL(__imp__sub_826B6CA0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,32
	ctx.r9.s64 = 32;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// stfs f0,96(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stb r9,156(r31)
	PPC_STORE_U8(r31.u32 + 156, ctx.r9.u8);
	// sth r10,92(r31)
	PPC_STORE_U16(r31.u32 + 92, ctx.r10.u16);
	// sth r10,94(r31)
	PPC_STORE_U16(r31.u32 + 94, ctx.r10.u16);
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
	// bl 0x826bdd58
	sub_826BDD58(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826B6D08"))) PPC_WEAK_FUNC(sub_826B6D08);
PPC_FUNC_IMPL(__imp__sub_826B6D08) {
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
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b6d48
	if (cr6.eq) goto loc_826B6D48;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_826B6D48:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,16388
	ctx.r5.u64 = ctx.r5.u64 | 16388;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b6d48
	if (!cr6.eq) goto loc_826B6D48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r11.u32);
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

__attribute__((alias("__imp__sub_826B6DAC"))) PPC_WEAK_FUNC(sub_826B6DAC);
PPC_FUNC_IMPL(__imp__sub_826B6DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6DB0"))) PPC_WEAK_FUNC(sub_826B6DB0);
PPC_FUNC_IMPL(__imp__sub_826B6DB0) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-22296
	r11.s64 = r11.s64 + -22296;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x826bdd20
	sub_826BDD20(ctx, base);
	// clrlwi r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b6e00
	if (cr6.eq) goto loc_826B6E00;
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
loc_826B6E00:
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

__attribute__((alias("__imp__sub_826B6E1C"))) PPC_WEAK_FUNC(sub_826B6E1C);
PPC_FUNC_IMPL(__imp__sub_826B6E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B6E20"))) PPC_WEAK_FUNC(sub_826B6E20);
PPC_FUNC_IMPL(__imp__sub_826B6E20) {
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
	// clrlwi r28,r5,24
	r28.u64 = ctx.r5.u32 & 0xFF;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// rlwinm r11,r28,0,27,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x10;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// bne cr6,0x826b6fcc
	if (!cr6.eq) goto loc_826B6FCC;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b6e60
	if (!cr6.eq) goto loc_826B6E60;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,32(r29)
	PPC_STORE_U32(r29.u32 + 32, r11.u32);
loc_826B6E60:
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b6f1c
	if (cr6.eq) goto loc_826B6F1C;
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// blt cr6,0x826b6ec8
	if (cr6.lt) goto loc_826B6EC8;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b6ec8
	if (cr6.eq) goto loc_826B6EC8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b6ec8
	if (!cr6.eq) goto loc_826B6EC8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b6ec8
	if (!cr6.eq) goto loc_826B6EC8;
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
loc_826B6EC8:
	// lwz r10,24(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x826b6f20
	if (!cr6.gt) goto loc_826B6F20;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b6f20
	if (cr6.eq) goto loc_826B6F20;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b6f20
	if (!cr6.eq) goto loc_826B6F20;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b6f20
	if (!cr6.eq) goto loc_826B6F20;
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
loc_826B6F1C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B6F20:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x826b6f78
	if (cr6.lt) goto loc_826B6F78;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b6f78
	if (cr6.eq) goto loc_826B6F78;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b6f78
	if (!cr6.eq) goto loc_826B6F78;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b6f78
	if (!cr6.eq) goto loc_826B6F78;
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
loc_826B6F78:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// ble cr6,0x826b6fd0
	if (!cr6.gt) goto loc_826B6FD0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b6fd0
	if (cr6.eq) goto loc_826B6FD0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b6fd0
	if (!cr6.eq) goto loc_826B6FD0;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b6fd0
	if (!cr6.eq) goto loc_826B6FD0;
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
loc_826B6FCC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B6FD0:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b7098
	if (cr6.eq) goto loc_826B7098;
	// rlwinm r10,r28,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b7098
	if (!cr6.eq) goto loc_826B7098;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bgt cr6,0x826b7040
	if (cr6.gt) goto loc_826B7040;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b7040
	if (cr6.eq) goto loc_826B7040;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b7040
	if (!cr6.eq) goto loc_826B7040;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b7040
	if (!cr6.eq) goto loc_826B7040;
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
loc_826B7040:
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x826b7098
	if (cr6.lt) goto loc_826B7098;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b7098
	if (cr6.eq) goto loc_826B7098;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b7098
	if (!cr6.eq) goto loc_826B7098;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b7098
	if (!cr6.eq) goto loc_826B7098;
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
loc_826B7098:
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b710c
	if (cr6.eq) goto loc_826B710C;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x826b70b8
	if (cr6.eq) goto loc_826B70B8;
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// b 0x826b70bc
	goto loc_826B70BC;
loc_826B70B8:
	// lwz r9,28(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 28);
loc_826B70BC:
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bgt cr6,0x826b710c
	if (cr6.gt) goto loc_826B710C;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b710c
	if (cr6.eq) goto loc_826B710C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b710c
	if (!cr6.eq) goto loc_826B710C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b710c
	if (!cr6.eq) goto loc_826B710C;
	// li r11,0
	r11.s64 = 0;
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
loc_826B710C:
	// clrlwi r11,r28,31
	r11.u64 = r28.u32 & 0x1;
	// li r4,24
	ctx.r4.s64 = 24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// bne cr6,0x826b7130
	if (!cr6.eq) goto loc_826B7130;
	// li r5,0
	ctx.r5.s64 = 0;
loc_826B7130:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r27,16
	r11.s64 = r27.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b7158
	if (cr6.eq) goto loc_826B7158;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b7174
	if (!cr6.eq) goto loc_826B7174;
loc_826B7158:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B7174:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B7180"))) PPC_WEAK_FUNC(sub_826B7180);
PPC_FUNC_IMPL(__imp__sub_826B7180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lbz r11,156(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 156);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b71fc
	if (!cr6.eq) goto loc_826B71FC;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b71cc
	if (cr6.eq) goto loc_826B71CC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b71fc
	if (!cr6.eq) goto loc_826B71FC;
loc_826B71CC:
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r30,157(r31)
	PPC_STORE_U8(r31.u32 + 157, r30.u8);
	// lfs f1,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,80(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x826b7204
	goto loc_826B7204;
loc_826B71FC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_826B7204:
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

__attribute__((alias("__imp__sub_826B721C"))) PPC_WEAK_FUNC(sub_826B721C);
PPC_FUNC_IMPL(__imp__sub_826B721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7220"))) PPC_WEAK_FUNC(sub_826B7220);
PPC_FUNC_IMPL(__imp__sub_826B7220) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
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
	// beq cr6,0x826b7264
	if (cr6.eq) goto loc_826B7264;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r6
	cr6.compare<uint32_t>(r30.u32, ctx.r6.u32, xer);
	// beq cr6,0x826b7284
	if (cr6.eq) goto loc_826B7284;
loc_826B7264:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stb r7,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r7.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826b7288
	goto loc_826B7288;
loc_826B7284:
	// lbz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826B7288:
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,12
	ctx.r9.s64 = r11.s64 + 12;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x826b7380
	if (cr6.eq) goto loc_826B7380;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r30,r9,r8
	r30.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b7380
	if (cr6.eq) goto loc_826B7380;
	// add r10,r9,r30
	ctx.r10.u64 = ctx.r9.u64 + r30.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b72e0
	if (cr6.eq) goto loc_826B72E0;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
loc_826B72E0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r30)
	PPC_STORE_U32(r30.u32 + 112, ctx.r10.u32);
	// bne 0x826b7324
	if (!cr0.eq) goto loc_826B7324;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r30)
	PPC_STORE_U32(r30.u32 + 112, ctx.r10.u32);
loc_826B7324:
	// li r27,0
	r27.s64 = 0;
	// rlwinm r10,r25,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stb r27,117(r30)
	PPC_STORE_U8(r30.u32 + 117, r27.u8);
	// stb r27,118(r30)
	PPC_STORE_U8(r30.u32 + 118, r27.u8);
	// stb r27,119(r30)
	PPC_STORE_U8(r30.u32 + 119, r27.u8);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lhz r10,92(r28)
	ctx.r10.u64 = PPC_LOAD_U16(r28.u32 + 92);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// twllei r10,0
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// beq cr6,0x826b7428
	if (cr6.eq) goto loc_826B7428;
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
	// addi r4,r26,12
	ctx.r4.s64 = r26.s64 + 12;
	// stw r27,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r27.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// b 0x826b7468
	goto loc_826B7468;
loc_826B7380:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// li r27,0
	r27.s64 = 0;
	// beq cr6,0x826b73d4
	if (cr6.eq) goto loc_826B73D4;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x826b73d4
	if (!cr6.eq) goto loc_826B73D4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bne cr6,0x826b73d4
	if (!cr6.eq) goto loc_826B73D4;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
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
	// lbz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B73D4:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b7418
	if (cr6.eq) goto loc_826B7418;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x826b7418
	if (!cr6.eq) goto loc_826B7418;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b7418
	if (!cr6.eq) goto loc_826B7418;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
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
loc_826B7418:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
loc_826B7428:
	// lhz r11,92(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 92);
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b7460
	if (cr6.eq) goto loc_826B7460;
	// lhz r9,92(r28)
	ctx.r9.u64 = PPC_LOAD_U16(r28.u32 + 92);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x826b7464
	goto loc_826B7464;
loc_826B7460:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_826B7464:
	// stw r11,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r11.u32);
loc_826B7468:
	// stw r27,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r27.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stw r27,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r27.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r11,84(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 84);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r11.u32);
	// bl 0x826b6e20
	sub_826B6E20(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b74d8
	if (cr6.eq) goto loc_826B74D8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b74d8
	if (!cr6.eq) goto loc_826B74D8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b74d8
	if (!cr6.eq) goto loc_826B74D8;
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
loc_826B74D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826B74E4"))) PPC_WEAK_FUNC(sub_826B74E4);
PPC_FUNC_IMPL(__imp__sub_826B74E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B74E8"))) PPC_WEAK_FUNC(sub_826B74E8);
PPC_FUNC_IMPL(__imp__sub_826B74E8) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b752c
	if (cr6.eq) goto loc_826B752C;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r6
	cr6.compare<uint32_t>(r29.u32, ctx.r6.u32, xer);
	// beq cr6,0x826b754c
	if (cr6.eq) goto loc_826B754C;
loc_826B752C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r6,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r6.u32);
	// stb r7,12(r31)
	PPC_STORE_U8(r31.u32 + 12, ctx.r7.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826b7550
	goto loc_826B7550;
loc_826B754C:
	// lbz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826B7550:
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,12
	ctx.r9.s64 = r11.s64 + 12;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// beq cr6,0x826b76b0
	if (cr6.eq) goto loc_826B76B0;
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826b76b0
	if (cr6.eq) goto loc_826B76B0;
	// add r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b75a8
	if (cr6.eq) goto loc_826B75A8;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r10,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r10.u32);
loc_826B75A8:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addic. r10,r10,1
	xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
	// bne 0x826b75ec
	if (!cr0.eq) goto loc_826B75EC;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
loc_826B75EC:
	// li r28,0
	r28.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stb r28,117(r4)
	PPC_STORE_U8(ctx.r4.u32 + 117, r28.u8);
	// stb r28,118(r4)
	PPC_STORE_U8(ctx.r4.u32 + 118, r28.u8);
	// stb r28,119(r4)
	PPC_STORE_U8(ctx.r4.u32 + 119, r28.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lhz r11,92(r27)
	r11.u64 = PPC_LOAD_U16(r27.u32 + 92);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, r11.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, r11.u32);
	// bl 0x826b6e20
	sub_826B6E20(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b76a4
	if (cr6.eq) goto loc_826B76A4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b76a4
	if (!cr6.eq) goto loc_826B76A4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b76a4
	if (!cr6.eq) goto loc_826B76A4;
	// mr r11,r28
	r11.u64 = r28.u64;
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
loc_826B76A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_826B76B0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// li r28,0
	r28.s64 = 0;
	// beq cr6,0x826b7704
	if (cr6.eq) goto loc_826B7704;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x826b7704
	if (!cr6.eq) goto loc_826B7704;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// bne cr6,0x826b7704
	if (!cr6.eq) goto loc_826B7704;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
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
	// lbz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B7704:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b7748
	if (cr6.eq) goto loc_826B7748;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x826b7748
	if (!cr6.eq) goto loc_826B7748;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b7748
	if (!cr6.eq) goto loc_826B7748;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
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
loc_826B7748:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826B7758"))) PPC_WEAK_FUNC(sub_826B7758);
PPC_FUNC_IMPL(__imp__sub_826B7758) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r31,r11,-13256
	r31.s64 = r11.s64 + -13256;
	// mr r28,r13
	r28.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b7798
	if (cr6.eq) goto loc_826B7798;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, xer);
	// beq cr6,0x826b77b4
	if (cr6.eq) goto loc_826B77B4;
loc_826B7798:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r8.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r27.u8);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// b 0x826b77b8
	goto loc_826B77B8;
loc_826B77B4:
	// lbz r27,12(r31)
	r27.u64 = PPC_LOAD_U8(r31.u32 + 12);
loc_826B77B8:
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// bne cr6,0x826b783c
	if (!cr6.eq) goto loc_826B783C;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b77e4
	if (cr6.eq) goto loc_826B77E4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r29,r11,r10
	r29.s64 = ctx.r10.s64 - r11.s64;
	// b 0x826b77e8
	goto loc_826B77E8;
loc_826B77E4:
	// li r29,0
	r29.s64 = 0;
loc_826B77E8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x826b783c
	if (!cr6.eq) goto loc_826B783C;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b7830
	if (cr6.eq) goto loc_826B7830;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b7830
	if (!cr6.eq) goto loc_826B7830;
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b7830
	if (!cr6.eq) goto loc_826B7830;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B7830:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826B783C:
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x826b7870
	if (cr6.eq) goto loc_826B7870;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
loc_826B7870:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,104
	ctx.r3.s64 = r30.s64 + 104;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,116(r29)
	PPC_STORE_U8(r29.u32 + 116, r11.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b7910
	if (cr6.eq) goto loc_826B7910;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b7910
	if (!cr6.eq) goto loc_826B7910;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b7910
	if (!cr6.eq) goto loc_826B7910;
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
loc_826B7910:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B791C"))) PPC_WEAK_FUNC(sub_826B791C);
PPC_FUNC_IMPL(__imp__sub_826B791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7920"))) PPC_WEAK_FUNC(sub_826B7920);
PPC_FUNC_IMPL(__imp__sub_826B7920) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,11,0,20
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// rlwinm r8,r6,23,9,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 23) & 0x7FFFFF;
	// li r11,0
	r11.s64 = 0;
loc_826B7938:
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bge cr6,0x826b7978
	if (!cr6.lt) goto loc_826B7978;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r9,6,26,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + r11.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x826b7980
	if (cr6.lt) goto loc_826B7980;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// rlwinm r7,r9,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// ble cr6,0x826b7938
	if (!cr6.gt) goto loc_826B7938;
loc_826B7978:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826B7980:
	// rlwinm r9,r9,21,17,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x7FFF;
	// cmplw cr6,r8,r11
	cr6.compare<uint32_t>(ctx.r8.u32, r11.u32, xer);
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// beq cr6,0x826b79b8
	if (cr6.eq) goto loc_826B79B8;
	// subf r11,r11,r8
	r11.s64 = ctx.r8.s64 - r11.s64;
loc_826B7994:
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// slw r8,r8,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r8,r8,15,17,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 15) & 0x7FFF;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne cr6,0x826b7994
	if (!cr6.eq) goto loc_826B7994;
loc_826B79B8:
	// add r3,r9,r5
	ctx.r3.u64 = ctx.r9.u64 + ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B79C0"))) PPC_WEAK_FUNC(sub_826B79C0);
PPC_FUNC_IMPL(__imp__sub_826B79C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r11,r5,11,0,20
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 11) & 0xFFFFF800;
	// add r6,r3,r4
	ctx.r6.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r8,r5,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r9,r11,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0xFFFFF800;
	// add r11,r9,r10
	r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bge cr6,0x826b7a24
	if (!cr6.lt) goto loc_826B7A24;
loc_826B79F4:
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x826b79f4
	if (cr6.lt) goto loc_826B79F4;
loc_826B7A24:
	// rlwinm r11,r7,0,0,5
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFC000000;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b7a38
	if (!cr6.eq) goto loc_826B7A38;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_826B7A38:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r11,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// rlwinm r11,r11,21,17,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x7FFF;
	// cmplwi cr6,r9,1
	cr6.compare<uint32_t>(ctx.r9.u32, 1, xer);
	// addi r11,r11,32
	r11.s64 = r11.s64 + 32;
	// ble cr6,0x826b7a78
	if (!cr6.gt) goto loc_826B7A78;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_826B7A54:
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r6,r11,29
	ctx.r6.u64 = r11.u32 & 0x7;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// slw r7,r7,r6
	ctx.r7.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r7,r7,15,17,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 15) & 0x7FFF;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// bne cr6,0x826b7a54
	if (!cr6.eq) goto loc_826B7A54;
loc_826B7A78:
	// add r3,r11,r8
	ctx.r3.u64 = r11.u64 + ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7A80"))) PPC_WEAK_FUNC(sub_826B7A80);
PPC_FUNC_IMPL(__imp__sub_826B7A80) {
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
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// addi r11,r11,-22064
	r11.s64 = r11.s64 + -22064;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// addi r10,r10,-22104
	ctx.r10.s64 = ctx.r10.s64 + -22104;
	// addi r9,r9,-22200
	ctx.r9.s64 = ctx.r9.s64 + -22200;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// beq cr6,0x826b7ad8
	if (cr6.eq) goto loc_826B7AD8;
	// bl 0x826b0038
	sub_826B0038(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r11.u32);
loc_826B7AD8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826af018
	sub_826AF018(ctx, base);
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

__attribute__((alias("__imp__sub_826B7AF8"))) PPC_WEAK_FUNC(sub_826B7AF8);
PPC_FUNC_IMPL(__imp__sub_826B7AF8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lbz r11,292(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 292);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826b7b2c
	if (!cr6.eq) goto loc_826B7B2C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x826b7b70
	goto loc_826B7B70;
loc_826B7B2C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,292(r31)
	PPC_STORE_U8(r31.u32 + 292, r11.u8);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// ble cr6,0x826b7b60
	if (!cr6.gt) goto loc_826B7B60;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x826b7b60
	if (cr6.eq) goto loc_826B7B60;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,88
	ctx.r5.s64 = 88;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
loc_826B7B60:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// ori r5,r11,48
	ctx.r5.u64 = r11.u64 | 48;
	// bl 0x826b7220
	sub_826B7220(ctx, base);
loc_826B7B70:
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

__attribute__((alias("__imp__sub_826B7B88"))) PPC_WEAK_FUNC(sub_826B7B88);
PPC_FUNC_IMPL(__imp__sub_826B7B88) {
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
	// lbz r11,292(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 292);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x826b7bb8
	if (!cr6.eq) goto loc_826B7BB8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_826B7BB8:
	// li r11,2
	r11.s64 = 2;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stb r11,292(r3)
	PPC_STORE_U8(ctx.r3.u32 + 292, r11.u8);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// ble cr6,0x826b7c04
	if (!cr6.gt) goto loc_826B7C04;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x826b7c04
	if (cr6.eq) goto loc_826B7C04;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r9,8
	ctx.r9.s64 = 8;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826B7BE8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826b7be8
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B7BE8;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_826B7C04:
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b7c28
	if (cr6.eq) goto loc_826B7C28;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x826b7c1c
	if (!cr6.eq) goto loc_826B7C1C;
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_826B7C1C:
	// stw r11,272(r3)
	PPC_STORE_U32(ctx.r3.u32 + 272, r11.u32);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, r11.u32);
loc_826B7C28:
	// clrlwi r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// ori r5,r11,16
	ctx.r5.u64 = r11.u64 | 16;
	// bl 0x826b74e8
	sub_826B74E8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7C48"))) PPC_WEAK_FUNC(sub_826B7C48);
PPC_FUNC_IMPL(__imp__sub_826B7C48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7b88
	sub_826B7B88(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7C50"))) PPC_WEAK_FUNC(sub_826B7C50);
PPC_FUNC_IMPL(__imp__sub_826B7C50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826b7ee0
	sub_826B7EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7C58"))) PPC_WEAK_FUNC(sub_826B7C58);
PPC_FUNC_IMPL(__imp__sub_826B7C58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7af8
	sub_826B7AF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7C60"))) PPC_WEAK_FUNC(sub_826B7C60);
PPC_FUNC_IMPL(__imp__sub_826B7C60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7ee0
	sub_826B7EE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7C68"))) PPC_WEAK_FUNC(sub_826B7C68);
PPC_FUNC_IMPL(__imp__sub_826B7C68) {
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
	// bne 0x826b7ca0
	if (!cr0.eq) goto loc_826B7CA0;
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
loc_826B7CA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7CB0"))) PPC_WEAK_FUNC(sub_826B7CB0);
PPC_FUNC_IMPL(__imp__sub_826B7CB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,172(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 172);
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7CC0"))) PPC_WEAK_FUNC(sub_826B7CC0);
PPC_FUNC_IMPL(__imp__sub_826B7CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7CD0"))) PPC_WEAK_FUNC(sub_826B7CD0);
PPC_FUNC_IMPL(__imp__sub_826B7CD0) {
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
	// lfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
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

__attribute__((alias("__imp__sub_826B7D18"))) PPC_WEAK_FUNC(sub_826B7D18);
PPC_FUNC_IMPL(__imp__sub_826B7D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	f0.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f0,0(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7D28"))) PPC_WEAK_FUNC(sub_826B7D28);
PPC_FUNC_IMPL(__imp__sub_826B7D28) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b7d68
	if (cr6.lt) goto loc_826B7D68;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826B7D68:
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

__attribute__((alias("__imp__sub_826B7D7C"))) PPC_WEAK_FUNC(sub_826B7D7C);
PPC_FUNC_IMPL(__imp__sub_826B7D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7D80"))) PPC_WEAK_FUNC(sub_826B7D80);
PPC_FUNC_IMPL(__imp__sub_826B7D80) {
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
	// lbz r11,198(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 198);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// beq cr6,0x826b7dbc
	if (cr6.eq) goto loc_826B7DBC;
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r31,255
	cr6.compare<uint32_t>(r31.u32, 255, xer);
	// stw r11,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, r11.u32);
	// li r11,255
	r11.s64 = 255;
	// bgt cr6,0x826b7db8
	if (cr6.gt) goto loc_826B7DB8;
	// clrlwi r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
loc_826B7DB8:
	// stb r11,198(r3)
	PPC_STORE_U8(ctx.r3.u32 + 198, r11.u8);
loc_826B7DBC:
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b7de4
	if (cr6.lt) goto loc_826B7DE4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
loc_826B7DE4:
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

__attribute__((alias("__imp__sub_826B7DF8"))) PPC_WEAK_FUNC(sub_826B7DF8);
PPC_FUNC_IMPL(__imp__sub_826B7DF8) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b7e38
	if (cr6.lt) goto loc_826B7E38;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826B7E38:
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

__attribute__((alias("__imp__sub_826B7E4C"))) PPC_WEAK_FUNC(sub_826B7E4C);
PPC_FUNC_IMPL(__imp__sub_826B7E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7E50"))) PPC_WEAK_FUNC(sub_826B7E50);
PPC_FUNC_IMPL(__imp__sub_826B7E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7E60"))) PPC_WEAK_FUNC(sub_826B7E60);
PPC_FUNC_IMPL(__imp__sub_826B7E60) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b7e98
	if (cr6.eq) goto loc_826B7E98;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_826B7E98:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x826b7eac
	if (cr6.eq) goto loc_826B7EAC;
	// lbz r11,157(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 157);
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
loc_826B7EAC:
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

__attribute__((alias("__imp__sub_826B7EC4"))) PPC_WEAK_FUNC(sub_826B7EC4);
PPC_FUNC_IMPL(__imp__sub_826B7EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7EC8"))) PPC_WEAK_FUNC(sub_826B7EC8);
PPC_FUNC_IMPL(__imp__sub_826B7EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,-4
	r11.s64 = ctx.r3.s64 + -4;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B7ED4"))) PPC_WEAK_FUNC(sub_826B7ED4);
PPC_FUNC_IMPL(__imp__sub_826B7ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7ED8"))) PPC_WEAK_FUNC(sub_826B7ED8);
PPC_FUNC_IMPL(__imp__sub_826B7ED8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x826aebd0
	sub_826AEBD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B7EE0"))) PPC_WEAK_FUNC(sub_826B7EE0);
PPC_FUNC_IMPL(__imp__sub_826B7EE0) {
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
	// bl 0x826b7a80
	sub_826B7A80(ctx, base);
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

__attribute__((alias("__imp__sub_826B7F10"))) PPC_WEAK_FUNC(sub_826B7F10);
PPC_FUNC_IMPL(__imp__sub_826B7F10) {
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
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x826b7180
	sub_826B7180(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826b7f40
	if (cr6.lt) goto loc_826B7F40;
	// li r11,1
	r11.s64 = 1;
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(r31.u32 + 110, r11.u16);
loc_826B7F40:
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

__attribute__((alias("__imp__sub_826B7F54"))) PPC_WEAK_FUNC(sub_826B7F54);
PPC_FUNC_IMPL(__imp__sub_826B7F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B7F58"))) PPC_WEAK_FUNC(sub_826B7F58);
PPC_FUNC_IMPL(__imp__sub_826B7F58) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
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
	// beq cr6,0x826b7f9c
	if (cr6.eq) goto loc_826B7F9C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b7fb0
	if (cr6.eq) goto loc_826B7FB0;
loc_826B7F9C:
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
loc_826B7FB0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stfs f31,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 112, temp.u32);
	// lbz r11,56(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b7ff4
	if (cr6.eq) goto loc_826B7FF4;
	// li r11,0
	r11.s64 = 0;
loc_826B7FCC:
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = r11.s64 * 88;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 112);
	f0.f64 = double(temp.f32);
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// stfs f0,40(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lbz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b7fcc
	if (cr6.lt) goto loc_826B7FCC;
loc_826B7FF4:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b803c
	if (cr6.eq) goto loc_826B803C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826b803c
	if (!cr6.eq) goto loc_826B803C;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b803c
	if (!cr6.eq) goto loc_826B803C;
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
loc_826B803C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B804C"))) PPC_WEAK_FUNC(sub_826B804C);
PPC_FUNC_IMPL(__imp__sub_826B804C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8050"))) PPC_WEAK_FUNC(sub_826B8050);
PPC_FUNC_IMPL(__imp__sub_826B8050) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-13256
	r30.s64 = r11.s64 + -13256;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b8094
	if (cr6.eq) goto loc_826B8094;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b80a8
	if (cr6.eq) goto loc_826B80A8;
loc_826B8094:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r28,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r28.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_826B80A8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f1,264(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 264);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,116(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8150
	if (cr6.eq) goto loc_826B8150;
	// li r11,0
	r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_826B80DC:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = r11.s64 * 88;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lwz r9,60(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lbzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + r31.u32);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r7,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r7.u8);
	// stb r8,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r8.u8);
	// stw r9,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r9.u32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b80dc
	if (cr6.lt) goto loc_826B80DC;
loc_826B8150:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b8198
	if (cr6.eq) goto loc_826B8198;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826b8198
	if (!cr6.eq) goto loc_826B8198;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bne cr6,0x826b8198
	if (!cr6.eq) goto loc_826B8198;
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
loc_826B8198:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B81A8"))) PPC_WEAK_FUNC(sub_826B81A8);
PPC_FUNC_IMPL(__imp__sub_826B81A8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r30,r11,-13256
	r30.s64 = r11.s64 + -13256;
	// mr r29,r13
	r29.u64 = ctx.r13.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b81ec
	if (cr6.eq) goto loc_826B81EC;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b8200
	if (cr6.eq) goto loc_826B8200;
loc_826B81EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stb r28,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r28.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_826B8200:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stfs f31,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 116, temp.u32);
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8294
	if (cr6.eq) goto loc_826B8294;
	// li r11,0
	r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_826B8220:
	// rlwinm r8,r11,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = r11.s64 * 88;
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + r31.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r6,r11,8
	ctx.r6.s64 = r11.s64 + 8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// lwz r9,60(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// rlwinm r8,r6,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r6,r10,16
	ctx.r6.s64 = ctx.r10.s64 + 16;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lwz r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lbzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + r31.u32);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stb r7,12(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12, ctx.r7.u8);
	// stb r8,13(r10)
	PPC_STORE_U8(ctx.r10.u32 + 13, ctx.r8.u8);
	// stw r9,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r9.u32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b8220
	if (cr6.lt) goto loc_826B8220;
loc_826B8294:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b82dc
	if (cr6.eq) goto loc_826B82DC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826b82dc
	if (!cr6.eq) goto loc_826B82DC;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bne cr6,0x826b82dc
	if (!cr6.eq) goto loc_826B82DC;
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
loc_826B82DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B82EC"))) PPC_WEAK_FUNC(sub_826B82EC);
PPC_FUNC_IMPL(__imp__sub_826B82EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B82F0"))) PPC_WEAK_FUNC(sub_826B82F0);
PPC_FUNC_IMPL(__imp__sub_826B82F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r3,56(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 56);
	// rotlwi r11,r3,1
	r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// rlwinm r12,r11,0,0,27
	r12.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x823a17a4
	sub_823A17A4(ctx, base);
	// lwz r11,0(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r25,1
	r25.s64 = 1;
	// stwux r11,r1,r12
	ea = ctx.r1.u32 + r12.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r1.u32 = ea;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// beq cr6,0x826b84b0
	if (cr6.eq) goto loc_826B84B0;
	// lis r11,1398
	r11.s64 = 91619328;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r24,r11,6641
	r24.u64 = r11.u64 | 6641;
	// lis r11,0
	r11.s64 = 0;
	// addi r10,r9,64
	ctx.r10.s64 = ctx.r9.s64 + 64;
	// addi r8,r4,4
	ctx.r8.s64 = ctx.r4.s64 + 4;
	// addi r29,r9,276
	r29.s64 = ctx.r9.s64 + 276;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ori r27,r11,48000
	r27.u64 = r11.u64 | 48000;
loc_826B835C:
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// li r26,3968
	r26.s64 = 3968;
	// lwz r11,204(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 204);
	// mullw r11,r11,r6
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// mulhwu r11,r11,r24
	r11.u64 = (uint64_t(r11.u32) * uint64_t(r24.u32)) >> 32;
	// rlwinm r11,r11,22,10,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x3FFFFF;
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// sth r6,0(r29)
	PPC_STORE_U16(r29.u32 + 0, ctx.r6.u16);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// beq cr6,0x826b8390
	if (cr6.eq) goto loc_826B8390;
	// li r26,1920
	r26.s64 = 1920;
loc_826B8390:
	// lbz r5,1(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x826b83a4
	if (!cr6.eq) goto loc_826B83A4;
	// li r11,8
	r11.s64 = 8;
	// b 0x826b8408
	goto loc_826B8408;
loc_826B83A4:
	// addi r11,r11,127
	r11.s64 = r11.s64 + 127;
	// rlwinm r11,r11,25,7,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r6,r11,-1
	ctx.r6.s64 = r11.s64 + -1;
	// rlwinm r28,r11,7,0,24
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// and r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & r11.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x826b83cc
	if (cr6.eq) goto loc_826B83CC;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// subfic r11,r11,32
	xer.ca = r11.u32 <= 32;
	r11.s64 = 32 - r11.s64;
	// slw r11,r25,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
loc_826B83CC:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x826b83dc
	if (!cr6.lt) goto loc_826B83DC;
	// li r11,2
	r11.s64 = 2;
	// b 0x826b83e8
	goto loc_826B83E8;
loc_826B83DC:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// ble cr6,0x826b83e8
	if (!cr6.gt) goto loc_826B83E8;
	// li r11,8
	r11.s64 = 8;
loc_826B83E8:
	// rlwinm r6,r11,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 7) & 0xFFFFFF80;
	// cmplwi cr6,r5,255
	cr6.compare<uint32_t>(ctx.r5.u32, 255, xer);
	// add r6,r6,r28
	ctx.r6.u64 = ctx.r6.u64 + r28.u64;
	// beq cr6,0x826b8400
	if (cr6.eq) goto loc_826B8400;
	// rlwinm r5,r5,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
loc_826B8400:
	// cmplw cr6,r6,r26
	cr6.compare<uint32_t>(ctx.r6.u32, r26.u32, xer);
	// ble cr6,0x826b840c
	if (!cr6.gt) goto loc_826B840C;
loc_826B8408:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
loc_826B840C:
	// lwz r5,-4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,2
	r29.s64 = r29.s64 + 2;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r5,-4(r8)
	PPC_STORE_U32(ctx.r8.u32 + -4, ctx.r5.u32);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r11,5(r8)
	PPC_STORE_U8(ctx.r8.u32 + 5, r11.u8);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stb r5,4(r8)
	PPC_STORE_U8(ctx.r8.u32 + 4, ctx.r5.u8);
	// addi r8,r8,12
	ctx.r8.s64 = ctx.r8.s64 + 12;
	// lwz r11,200(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// lbz r6,264(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 264);
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// stw r6,84(r11)
	PPC_STORE_U32(r11.u32 + 84, ctx.r6.u32);
	// lfs f0,116(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	f0.f64 = double(temp.f32);
	// lwz r6,-4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// lwz r11,200(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// std r6,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r6.u64);
	// addi r28,r11,16
	r28.s64 = r11.s64 + 16;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stb r25,12(r11)
	PPC_STORE_U8(r11.u32 + 12, r25.u8);
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// stb r5,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r5.u8);
	// stw r6,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r6.u32);
	// lfd f13,80(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r28
	PPC_STORE_U32(r28.u32, f0.u32);
	// lwz r11,200(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 200);
	// add r11,r7,r11
	r11.u64 = ctx.r7.u64 + r11.u64;
	// addi r7,r7,88
	ctx.r7.s64 = ctx.r7.s64 + 88;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stw r27,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r27.u32);
	// ori r6,r6,2
	ctx.r6.u64 = ctx.r6.u64 | 2;
	// stw r6,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r6.u32);
	// bne cr6,0x826b835c
	if (!cr6.eq) goto loc_826B835C;
loc_826B84B0:
	// lbz r11,264(r9)
	r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 264);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b84c8
	if (cr6.eq) goto loc_826B84C8;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
loc_826B84C8:
	// addi r6,r9,184
	ctx.r6.s64 = ctx.r9.s64 + 184;
	// bl 0x826afe08
	sub_826AFE08(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_826B84D8"))) PPC_WEAK_FUNC(sub_826B84D8);
PPC_FUNC_IMPL(__imp__sub_826B84D8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r31,r29,296
	r31.s64 = r29.s64 + 296;
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
	// beq cr6,0x826b8510
	if (cr6.eq) goto loc_826B8510;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826b8520
	if (cr6.eq) goto loc_826B8520;
loc_826B8510:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
loc_826B8520:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0100
	sub_826B0100(ctx, base);
	// li r28,0
	r28.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b8580
	if (cr6.eq) goto loc_826B8580;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0be8
	sub_826B0BE8(ctx, base);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0c68
	sub_826B0C68(ctx, base);
	// lbz r11,56(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8580
	if (cr6.eq) goto loc_826B8580;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_826B8560:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0650
	sub_826B0650(ctx, base);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// lbz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 56);
	// clrlwi r30,r11,24
	r30.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b8560
	if (cr6.lt) goto loc_826B8560;
loc_826B8580:
	// stb r28,292(r29)
	PPC_STORE_U8(r29.u32 + 292, r28.u8);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b85c8
	if (cr6.eq) goto loc_826B85C8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b85c8
	if (!cr6.eq) goto loc_826B85C8;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x826b85c8
	if (!cr0.eq) goto loc_826B85C8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B85C8:
	// addi r3,r29,16
	ctx.r3.s64 = r29.s64 + 16;
	// bl 0x826b6d08
	sub_826B6D08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B85D8"))) PPC_WEAK_FUNC(sub_826B85D8);
PPC_FUNC_IMPL(__imp__sub_826B85D8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r25
	r26.u64 = r25.u64;
	// addi r30,r29,296
	r30.s64 = r29.s64 + 296;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r13
	r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b861c
	if (cr6.eq) goto loc_826B861C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x826b862c
	if (cr6.eq) goto loc_826B862C;
loc_826B861C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r28.u8);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
loc_826B862C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0d30
	sub_826B0D30(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x826b8668
	if (!cr6.eq) goto loc_826B8668;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0be8
	sub_826B0BE8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x826b86d8
	if (cr6.lt) goto loc_826B86D8;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0c68
	sub_826B0C68(ctx, base);
loc_826B8668:
	// lbz r11,56(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b86c4
	if (cr6.eq) goto loc_826B86C4;
	// mr r31,r25
	r31.u64 = r25.u64;
loc_826B8678:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b0860
	sub_826B0860(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// blt cr6,0x826b86c4
	if (cr6.lt) goto loc_826B86C4;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// clrlwi r31,r10,24
	r31.u64 = ctx.r10.u32 & 0xFF;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// sth r9,4(r11)
	PPC_STORE_U16(r11.u32 + 4, ctx.r9.u16);
	// lbz r11,56(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 56);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x826b8678
	if (cr6.lt) goto loc_826B8678;
loc_826B86C4:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x826b86d8
	if (!cr6.eq) goto loc_826B86D8;
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0e70
	sub_826B0E70(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
loc_826B86D8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b871c
	if (cr6.eq) goto loc_826B871C;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b871c
	if (!cr6.eq) goto loc_826B871C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bne 0x826b871c
	if (!cr0.eq) goto loc_826B871C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lbz r31,12(r30)
	r31.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// stw r25,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r25.u32);
	// stb r25,12(r30)
	PPC_STORE_U8(r30.u32 + 12, r25.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B871C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826B8728"))) PPC_WEAK_FUNC(sub_826B8728);
PPC_FUNC_IMPL(__imp__sub_826B8728) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lbz r11,292(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 292);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826b8758
	if (!cr6.eq) goto loc_826B8758;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826B8758:
	// addi r31,r29,296
	r31.s64 = r29.s64 + 296;
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
	// beq cr6,0x826b8780
	if (cr6.eq) goto loc_826B8780;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826b8790
	if (cr6.eq) goto loc_826B8790;
loc_826B8780:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_826B8790:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r3,r29,120
	ctx.r3.s64 = r29.s64 + 120;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b87f4
	if (cr6.eq) goto loc_826B87F4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b87f4
	if (!cr6.eq) goto loc_826B87F4;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x826b87f4
	if (!cr0.eq) goto loc_826B87F4;
	// li r11,0
	r11.s64 = 0;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B87F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B8800"))) PPC_WEAK_FUNC(sub_826B8800);
PPC_FUNC_IMPL(__imp__sub_826B8800) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b81a8
	sub_826B81A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8808"))) PPC_WEAK_FUNC(sub_826B8808);
PPC_FUNC_IMPL(__imp__sub_826B8808) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7d28
	sub_826B7D28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8810"))) PPC_WEAK_FUNC(sub_826B8810);
PPC_FUNC_IMPL(__imp__sub_826B8810) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7cd0
	sub_826B7CD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8818"))) PPC_WEAK_FUNC(sub_826B8818);
PPC_FUNC_IMPL(__imp__sub_826B8818) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7f10
	sub_826B7F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8820"))) PPC_WEAK_FUNC(sub_826B8820);
PPC_FUNC_IMPL(__imp__sub_826B8820) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7df8
	sub_826B7DF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8828"))) PPC_WEAK_FUNC(sub_826B8828);
PPC_FUNC_IMPL(__imp__sub_826B8828) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7d18
	sub_826B7D18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8830"))) PPC_WEAK_FUNC(sub_826B8830);
PPC_FUNC_IMPL(__imp__sub_826B8830) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7f58
	sub_826B7F58(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8838"))) PPC_WEAK_FUNC(sub_826B8838);
PPC_FUNC_IMPL(__imp__sub_826B8838) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826b7ed8
	sub_826B7ED8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8840"))) PPC_WEAK_FUNC(sub_826B8840);
PPC_FUNC_IMPL(__imp__sub_826B8840) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b84d8
	sub_826B84D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8848"))) PPC_WEAK_FUNC(sub_826B8848);
PPC_FUNC_IMPL(__imp__sub_826B8848) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7e60
	sub_826B7E60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8850"))) PPC_WEAK_FUNC(sub_826B8850);
PPC_FUNC_IMPL(__imp__sub_826B8850) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7d80
	sub_826B7D80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8858"))) PPC_WEAK_FUNC(sub_826B8858);
PPC_FUNC_IMPL(__imp__sub_826B8858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826b7c68
	sub_826B7C68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8860"))) PPC_WEAK_FUNC(sub_826B8860);
PPC_FUNC_IMPL(__imp__sub_826B8860) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b8050
	sub_826B8050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B8868"))) PPC_WEAK_FUNC(sub_826B8868);
PPC_FUNC_IMPL(__imp__sub_826B8868) {
	PPC_FUNC_PROLOGUE();
	// b 0x826b84d8
	sub_826B84D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B886C"))) PPC_WEAK_FUNC(sub_826B886C);
PPC_FUNC_IMPL(__imp__sub_826B886C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8870"))) PPC_WEAK_FUNC(sub_826B8870);
PPC_FUNC_IMPL(__imp__sub_826B8870) {
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
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x826b88ac
	if (cr6.eq) goto loc_826B88AC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x826b88c4
	if (cr6.eq) goto loc_826B88C4;
loc_826B88AC:
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B88C4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x826b8910
	if (cr6.eq) goto loc_826B8910;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b8910
	if (cr6.eq) goto loc_826B8910;
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B8910:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b8950
	if (cr6.eq) goto loc_826B8950;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x826b8950
	if (!cr6.eq) goto loc_826B8950;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b8950
	if (!cr6.eq) goto loc_826B8950;
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
loc_826B8950:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826B895C"))) PPC_WEAK_FUNC(sub_826B895C);
PPC_FUNC_IMPL(__imp__sub_826B895C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B8960"))) PPC_WEAK_FUNC(sub_826B8960);
PPC_FUNC_IMPL(__imp__sub_826B8960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 68);
	// lbz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// mulli r11,r10,120
	r11.s64 = ctx.r10.s64 * 120;
	// mulli r10,r9,88
	ctx.r10.s64 = ctx.r9.s64 * 88;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,312
	r11.s64 = r11.s64 + 312;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826B8988"))) PPC_WEAK_FUNC(sub_826B8988);
PPC_FUNC_IMPL(__imp__sub_826B8988) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r18,0
	r18.s64 = 0;
	// li r25,1
	r25.s64 = 1;
	// mr r24,r18
	r24.u64 = r18.u64;
	// lbz r11,56(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b89f4
	if (cr6.eq) goto loc_826B89F4;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_826B89B4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b0248
	sub_826B0248(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b8a58
	if (cr6.eq) goto loc_826B8A58;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b0298
	sub_826B0298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b89e0
	if (!cr6.eq) goto loc_826B89E0;
	// mr r25,r18
	r25.u64 = r18.u64;
loc_826B89E0:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b89b4
	if (cr6.lt) goto loc_826B89B4;
loc_826B89F4:
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r20,r11,-13256
	r20.s64 = r11.s64 + -13256;
	// mr r31,r13
	r31.u64 = ctx.r13.u64;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b8a20
	if (cr6.eq) goto loc_826B8A20;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b8a34
	if (cr6.eq) goto loc_826B8A34;
loc_826B8A20:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r31,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r31.u32);
	// stb r30,12(r20)
	PPC_STORE_U8(r20.u32 + 12, r30.u8);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
loc_826B8A34:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r17,r28,20
	r17.s64 = r28.s64 + 20;
	// stw r11,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r11.u32);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(r17.u32, r11.u32, xer);
	// beq cr6,0x826b8a64
	if (cr6.eq) goto loc_826B8A64;
	// lwz r10,8(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// subf r30,r10,r11
	r30.s64 = r11.s64 - ctx.r10.s64;
	// b 0x826b8a68
	goto loc_826B8A68;
loc_826B8A58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd18
	return;
loc_826B8A64:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_826B8A68:
	// mr r27,r30
	r27.u64 = r30.u64;
	// li r16,4
	r16.s64 = 4;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826b8de0
	if (cr6.eq) goto loc_826B8DE0;
	// lwz r11,272(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 272);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8b78
	if (cr6.eq) goto loc_826B8B78;
	// lwz r10,168(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// lwz r9,268(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 268);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x826b8b78
	if (cr6.lt) goto loc_826B8B78;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x826b8aa4
	if (!cr6.eq) goto loc_826B8AA4;
	// li r11,-1
	r11.s64 = -1;
	// b 0x826b8aac
	goto loc_826B8AAC;
loc_826B8AA4:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,272(r28)
	PPC_STORE_U32(r28.u32 + 272, r11.u32);
loc_826B8AAC:
	// stw r11,272(r28)
	PPC_STORE_U32(r28.u32 + 272, r11.u32);
	// addi r31,r28,296
	r31.s64 = r28.s64 + 296;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,268(r28)
	PPC_STORE_U32(r28.u32 + 268, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b8b0c
	if (cr6.eq) goto loc_826B8B0C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b8b0c
	if (!cr6.eq) goto loc_826B8B0C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x826b8b0c
	if (!cr0.eq) goto loc_826B8B0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r29,12(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// stw r18,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r18.u32);
	// stb r18,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r18.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B8B0C:
	// lwz r11,180(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 180);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8b38
	if (cr6.eq) goto loc_826B8B38;
	// lwz r10,12(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r18.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B8B38:
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
	// beq cr6,0x826b8b5c
	if (cr6.eq) goto loc_826B8B5C;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826b8b6c
	if (cr6.eq) goto loc_826B8B6C;
loc_826B8B5C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
loc_826B8B6C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_826B8B78:
	// lwz r11,288(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 288);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b8bc8
	if (cr6.eq) goto loc_826B8BC8;
	// lbz r11,198(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 198);
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// stw r18,288(r28)
	PPC_STORE_U32(r28.u32 + 288, r18.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,272(r28)
	PPC_STORE_U32(r28.u32 + 272, r11.u32);
	// beq cr6,0x826b8bc8
	if (cr6.eq) goto loc_826B8BC8;
	// addi r30,r28,188
	r30.s64 = r28.s64 + 188;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_826B8BA4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b0788
	sub_826B0788(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b8ba4
	if (cr6.lt) goto loc_826B8BA4;
loc_826B8BC8:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// beq cr6,0x826b8de0
	if (cr6.eq) goto loc_826B8DE0;
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// cmplw cr6,r17,r10
	cr6.compare<uint32_t>(r17.u32, ctx.r10.u32, xer);
	// subf r26,r11,r10
	r26.s64 = ctx.r10.s64 - r11.s64;
	// bne cr6,0x826b8bec
	if (!cr6.eq) goto loc_826B8BEC;
	// mr r26,r18
	r26.u64 = r18.u64;
loc_826B8BEC:
	// lbz r11,116(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8c6c
	if (cr6.eq) goto loc_826B8C6C;
	// lbz r11,56(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// mr r30,r18
	r30.u64 = r18.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8c58
	if (cr6.eq) goto loc_826B8C58;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_826B8C0C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b01e8
	sub_826B01E8(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b8c3c
	if (cr6.eq) goto loc_826B8C3C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b0718
	sub_826B0718(ctx, base);
	// rlwinm r11,r3,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8c54
	if (cr6.eq) goto loc_826B8C54;
loc_826B8C3C:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b8c0c
	if (cr6.lt) goto loc_826B8C0C;
	// b 0x826b8c58
	goto loc_826B8C58;
loc_826B8C54:
	// li r30,1
	r30.s64 = 1;
loc_826B8C58:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b8c70
	if (!cr6.eq) goto loc_826B8C70;
	// stb r16,116(r27)
	PPC_STORE_U8(r27.u32 + 116, r16.u8);
	// b 0x826b8c70
	goto loc_826B8C70;
loc_826B8C6C:
	// li r24,1
	r24.s64 = 1;
loc_826B8C70:
	// lbz r11,116(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 116);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x826b8dd4
	if (!cr6.eq) goto loc_826B8DD4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x826b8ca0
	if (!cr6.eq) goto loc_826B8CA0;
	// lbz r11,172(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b8ca0
	if (cr6.eq) goto loc_826B8CA0;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8dd4
	if (cr6.eq) goto loc_826B8DD4;
loc_826B8CA0:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b8cf0
	if (cr6.eq) goto loc_826B8CF0;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b8cf0
	if (!cr6.eq) goto loc_826B8CF0;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r11.u32);
	// bne cr6,0x826b8cf0
	if (!cr6.eq) goto loc_826B8CF0;
	// mr r11,r18
	r11.u64 = r18.u64;
	// lbz r31,12(r20)
	r31.u64 = PPC_LOAD_U8(r20.u32 + 12);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stb r11,12(r20)
	PPC_STORE_U8(r20.u32 + 12, r11.u8);
	// stw r11,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B8CF0:
	// addi r31,r28,296
	r31.s64 = r28.s64 + 296;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b8d38
	if (cr6.eq) goto loc_826B8D38;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b8d38
	if (!cr6.eq) goto loc_826B8D38;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x826b8d38
	if (!cr0.eq) goto loc_826B8D38;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// stw r18,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r18.u32);
	// stb r18,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r18.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B8D38:
	// addi r3,r28,16
	ctx.r3.s64 = r28.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
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
	// beq cr6,0x826b8d78
	if (cr6.eq) goto loc_826B8D78;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826b8d88
	if (cr6.eq) goto loc_826B8D88;
loc_826B8D78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stb r29,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r29.u8);
loc_826B8D88:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r13
	r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b8db8
	if (cr6.eq) goto loc_826B8DB8;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b8dcc
	if (cr6.eq) goto loc_826B8DCC;
loc_826B8DB8:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r31,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r31.u32);
	// stb r30,12(r20)
	PPC_STORE_U8(r20.u32 + 12, r30.u8);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
loc_826B8DCC:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r11.u32);
loc_826B8DD4:
	// mr r27,r26
	r27.u64 = r26.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x826b8bc8
	if (!cr6.eq) goto loc_826B8BC8;
loc_826B8DE0:
	// lbz r11,292(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 292);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826b8dfc
	if (!cr6.eq) goto loc_826B8DFC;
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b8dfc
	if (!cr6.eq) goto loc_826B8DFC;
	// mr r24,r18
	r24.u64 = r18.u64;
loc_826B8DFC:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b8e4c
	if (cr6.eq) goto loc_826B8E4C;
	// lwz r10,8(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826b8e4c
	if (!cr6.eq) goto loc_826B8E4C;
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r11.u32);
	// bne cr6,0x826b8e4c
	if (!cr6.eq) goto loc_826B8E4C;
	// mr r11,r18
	r11.u64 = r18.u64;
	// lbz r31,12(r20)
	r31.u64 = PPC_LOAD_U8(r20.u32 + 12);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stb r11,12(r20)
	PPC_STORE_U8(r20.u32 + 12, r11.u8);
	// stw r11,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B8E4C:
	// clrlwi r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9164
	if (cr6.eq) goto loc_826B9164;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r13
	r31.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b8e7c
	if (cr6.eq) goto loc_826B8E7C;
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// beq cr6,0x826b8e94
	if (cr6.eq) goto loc_826B8E94;
loc_826B8E7C:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// stw r9,8(r20)
	PPC_STORE_U32(r20.u32 + 8, ctx.r9.u32);
	// stb r30,12(r20)
	PPC_STORE_U8(r20.u32 + 12, r30.u8);
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
loc_826B8E94:
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// stw r10,4(r20)
	PPC_STORE_U32(r20.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 0);
	// cmplw cr6,r17,r11
	cr6.compare<uint32_t>(r17.u32, r11.u32, xer);
	// beq cr6,0x826b8eb4
	if (cr6.eq) goto loc_826B8EB4;
	// lwz r8,8(r17)
	ctx.r8.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// subf r26,r8,r11
	r26.s64 = r11.s64 - ctx.r8.s64;
	// b 0x826b8eb8
	goto loc_826B8EB8;
loc_826B8EB4:
	// mr r26,r18
	r26.u64 = r18.u64;
loc_826B8EB8:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826b9120
	if (cr6.eq) goto loc_826B9120;
	// li r19,3
	r19.s64 = 3;
loc_826B8EC4:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x826b9118
	if (cr6.eq) goto loc_826B9118;
	// lwz r11,8(r17)
	r11.u64 = PPC_LOAD_U32(r17.u32 + 8);
	// lwzx r10,r11,r26
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplw cr6,r17,r10
	cr6.compare<uint32_t>(r17.u32, ctx.r10.u32, xer);
	// subf r21,r11,r10
	r21.s64 = ctx.r10.s64 - r11.s64;
	// bne cr6,0x826b8ee8
	if (!cr6.eq) goto loc_826B8EE8;
	// mr r21,r18
	r21.u64 = r18.u64;
loc_826B8EE8:
	// lbz r11,116(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b910c
	if (!cr6.eq) goto loc_826B910C;
	// lbz r11,56(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// li r22,1
	r22.s64 = 1;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b90fc
	if (cr6.eq) goto loc_826B90FC;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_826B8F08:
	// lbz r11,292(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 292);
	// mr r30,r18
	r30.u64 = r18.u64;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826b8f20
	if (!cr6.eq) goto loc_826B8F20;
	// li r30,1
	r30.s64 = 1;
	// b 0x826b8f38
	goto loc_826B8F38;
loc_826B8F20:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x826b8f38
	if (cr6.eq) goto loc_826B8F38;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b0298
	sub_826B0298(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826B8F38:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,12(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r5,8(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b0110
	sub_826B0110(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x826b8f98
	if (cr6.eq) goto loc_826B8F98;
	// lbz r11,292(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 292);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826b8f80
	if (!cr6.eq) goto loc_826B8F80;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,28(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// lwz r4,12(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// bl 0x826b7920
	sub_826B7920(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// rlwinm r6,r6,25,30,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x3;
	// b 0x826b8f8c
	goto loc_826B8F8C;
loc_826B8F80:
	// rlwinm r11,r31,14,0,17
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 14) & 0xFFFFC000;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// addi r5,r11,32
	ctx.r5.s64 = r11.s64 + 32;
loc_826B8F8C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b08d0
	sub_826B08D0(ctx, base);
loc_826B8F98:
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b909c
	if (cr6.eq) goto loc_826B909C;
	// addi r25,r28,188
	r25.s64 = r28.s64 + 188;
	// stw r18,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r18.u32);
	// stw r18,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r18.u32);
	// stw r18,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r18.u32);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lbz r10,292(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 292);
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// stb r11,198(r28)
	PPC_STORE_U8(r28.u32 + 198, r11.u8);
	// bne cr6,0x826b9054
	if (!cr6.eq) goto loc_826B9054;
	// lwz r11,24(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r30,12(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// lwz r29,8(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// addi r24,r11,-128
	r24.s64 = r11.s64 + -128;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826b7920
	sub_826B7920(ctx, base);
	// lwz r6,20(r26)
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// rlwinm r27,r6,25,30,31
	r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x3;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bne cr6,0x826b9034
	if (!cr6.eq) goto loc_826B9034;
	// cmplwi cr6,r6,512
	cr6.compare<uint32_t>(ctx.r6.u32, 512, xer);
	// blt cr6,0x826b9024
	if (cr6.lt) goto loc_826B9024;
	// addi r6,r6,-512
	ctx.r6.s64 = ctx.r6.s64 + -512;
	// bl 0x826b7920
	sub_826B7920(ctx, base);
	// mr r27,r16
	r27.u64 = r16.u64;
	// b 0x826b9038
	goto loc_826B9038;
loc_826B9024:
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x826b7920
	sub_826B7920(ctx, base);
	// mr r27,r18
	r27.u64 = r18.u64;
	// b 0x826b9038
	goto loc_826B9038;
loc_826B9034:
	// bl 0x826b7920
	sub_826B7920(ctx, base);
loc_826B9038:
	// rlwinm r11,r24,25,30,31
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 25) & 0x3;
	// stw r3,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r3.u32);
	// stw r23,192(r28)
	PPC_STORE_U32(r28.u32 + 192, r23.u32);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// stb r27,197(r28)
	PPC_STORE_U8(r28.u32 + 197, r27.u8);
	// stb r11,196(r28)
	PPC_STORE_U8(r28.u32 + 196, r11.u8);
	// b 0x826b90b8
	goto loc_826B90B8;
loc_826B9054:
	// rlwinm r11,r31,1,0,30
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// add r11,r31,r11
	r11.u64 = r31.u64 + r11.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// stw r9,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r9.u32);
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// stw r9,192(r28)
	PPC_STORE_U32(r28.u32 + 192, ctx.r9.u32);
	// lbzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + r26.u32);
	// stb r10,196(r28)
	PPC_STORE_U8(r28.u32 + 196, ctx.r10.u8);
	// lbz r11,49(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 49);
	// stb r11,197(r28)
	PPC_STORE_U8(r28.u32 + 197, r11.u8);
	// b 0x826b90b8
	goto loc_826B90B8;
loc_826B909C:
	// lbz r11,292(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 292);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826b90c4
	if (!cr6.eq) goto loc_826B90C4;
	// addi r5,r28,188
	ctx.r5.s64 = r28.s64 + 188;
	// stw r18,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r18.u32);
	// stw r18,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r18.u32);
	// stw r18,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r18.u32);
loc_826B90B8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b0788
	sub_826B0788(ctx, base);
loc_826B90C4:
	// lbz r11,292(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 292);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x826b90e4
	if (cr6.eq) goto loc_826B90E4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b0248
	sub_826B0248(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b90e8
	if (!cr6.eq) goto loc_826B90E8;
loc_826B90E4:
	// mr r22,r18
	r22.u64 = r18.u64;
loc_826B90E8:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b8f08
	if (cr6.lt) goto loc_826B8F08;
loc_826B90FC:
	// clrlwi r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	// stb r19,116(r26)
	PPC_STORE_U8(r26.u32 + 116, r19.u8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9118
	if (cr6.eq) goto loc_826B9118;
loc_826B910C:
	// mr r26,r21
	r26.u64 = r21.u64;
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// bne cr6,0x826b8ec4
	if (!cr6.eq) goto loc_826B8EC4;
loc_826B9118:
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(r20.u32 + 8);
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 4);
loc_826B9120:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826b9164
	if (cr6.eq) goto loc_826B9164;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b9164
	if (!cr6.eq) goto loc_826B9164;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r20)
	PPC_STORE_U32(r20.u32 + 4, r11.u32);
	// bne cr6,0x826b9164
	if (!cr6.eq) goto loc_826B9164;
	// mr r11,r18
	r11.u64 = r18.u64;
	// lbz r31,12(r20)
	r31.u64 = PPC_LOAD_U8(r20.u32 + 12);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// stb r11,12(r20)
	PPC_STORE_U8(r20.u32 + 12, r11.u8);
	// stw r11,8(r20)
	PPC_STORE_U32(r20.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B9164:
	// lwz r11,120(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b91c0
	if (cr6.eq) goto loc_826B91C0;
	// lbz r11,56(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b91bc
	if (cr6.eq) goto loc_826B91BC;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_826B9180:
	// rlwinm r11,r31,3,0,28
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// addi r10,r31,15
	ctx.r10.s64 = r31.s64 + 15;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lhz r11,124(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 124);
	// lwzx r5,r10,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// rlwinm r6,r11,25,7,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// bl 0x826b08d0
	sub_826B08D0(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b9180
	if (cr6.lt) goto loc_826B9180;
loc_826B91BC:
	// stw r18,120(r28)
	PPC_STORE_U32(r28.u32 + 120, r18.u32);
loc_826B91C0:
	// lbz r11,56(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9210
	if (cr6.eq) goto loc_826B9210;
	// mr r31,r18
	r31.u64 = r18.u64;
loc_826B91D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b0298
	sub_826B0298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826b91fc
	if (!cr6.eq) goto loc_826B91FC;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 184);
	// bl 0x826b0718
	sub_826B0718(ctx, base);
	// rlwinm r11,r3,0,28,28
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b8a58
	if (cr6.eq) goto loc_826B8A58;
loc_826B91FC:
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U8(r28.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b91d0
	if (cr6.lt) goto loc_826B91D0;
loc_826B9210:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_826B921C"))) PPC_WEAK_FUNC(sub_826B921C);
PPC_FUNC_IMPL(__imp__sub_826B921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9220"))) PPC_WEAK_FUNC(sub_826B9220);
PPC_FUNC_IMPL(__imp__sub_826B9220) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r23,1
	r23.s64 = 1;
	// li r24,0
	r24.s64 = 0;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lbz r11,56(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b927c
	if (cr6.eq) goto loc_826B927C;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_826B924C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// bl 0x826b0298
	sub_826B0298(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826b9278
	if (cr6.eq) goto loc_826B9278;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b924c
	if (cr6.lt) goto loc_826B924C;
	// b 0x826b927c
	goto loc_826B927C;
loc_826B9278:
	// mr r29,r24
	r29.u64 = r24.u64;
loc_826B927C:
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
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b92a8
	if (cr6.eq) goto loc_826B92A8;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x826b92bc
	if (cr6.eq) goto loc_826B92BC;
loc_826B92A8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r31,8(r26)
	PPC_STORE_U32(r26.u32 + 8, r31.u32);
	// stb r30,12(r26)
	PPC_STORE_U8(r26.u32 + 12, r30.u8);
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_826B92BC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r27,20
	r11.s64 = r27.s64 + 20;
	// stw r10,4(r26)
	PPC_STORE_U32(r26.u32 + 4, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// beq cr6,0x826b9454
	if (cr6.eq) goto loc_826B9454;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r28,r11,r9
	r28.s64 = ctx.r9.s64 - r11.s64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826b9454
	if (cr6.eq) goto loc_826B9454;
	// lbz r11,116(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9454
	if (cr6.eq) goto loc_826B9454;
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9454
	if (cr6.eq) goto loc_826B9454;
	// lbz r11,118(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 118);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b935c
	if (cr6.eq) goto loc_826B935C;
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9454
	if (cr6.eq) goto loc_826B9454;
	// lbz r11,119(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 119);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826b9454
	if (!cr6.eq) goto loc_826B9454;
	// lbz r11,56(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9354
	if (cr6.eq) goto loc_826B9354;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_826B9330:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x826b05c8
	sub_826B05C8(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b9330
	if (cr6.lt) goto loc_826B9330;
loc_826B9354:
	// stb r23,119(r28)
	PPC_STORE_U8(r28.u32 + 119, r23.u8);
	// b 0x826b9450
	goto loc_826B9450;
loc_826B935C:
	// lwz r11,16(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 16);
	// mr r30,r23
	r30.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b93b0
	if (cr6.eq) goto loc_826B93B0;
	// lbz r11,56(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b93b0
	if (cr6.eq) goto loc_826B93B0;
	// mr r31,r24
	r31.u64 = r24.u64;
loc_826B937C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// bl 0x826b0800
	sub_826B0800(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b93a8
	if (!cr6.eq) goto loc_826B93A8;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b937c
	if (cr6.lt) goto loc_826B937C;
	// b 0x826b93ac
	goto loc_826B93AC;
loc_826B93A8:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_826B93AC:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_826B93B0:
	// clrlwi r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9454
	if (cr6.eq) goto loc_826B9454;
	// lbz r11,56(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b944c
	if (cr6.eq) goto loc_826B944C;
	// mr r31,r24
	r31.u64 = r24.u64;
	// li r25,3
	r25.s64 = 3;
loc_826B93D0:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lwz r10,32(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// lwz r30,12(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r29,8(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r24.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r24,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r24.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r24.u32);
	// stb r23,90(r1)
	PPC_STORE_U8(ctx.r1.u32 + 90, r23.u8);
	// bl 0x826b7920
	sub_826B7920(ctx, base);
	// rlwinm r11,r6,25,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 25) & 0x3;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, r11.u8);
	// bl 0x826b79c0
	sub_826B79C0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,184(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 184);
	// stb r25,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, r25.u8);
	// bl 0x826b0788
	sub_826B0788(ctx, base);
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
	// lbz r10,56(r27)
	ctx.r10.u64 = PPC_LOAD_U8(r27.u32 + 56);
	// clrlwi r31,r11,24
	r31.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r31,r10
	cr6.compare<uint32_t>(r31.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b93d0
	if (cr6.lt) goto loc_826B93D0;
loc_826B944C:
	// stb r23,118(r28)
	PPC_STORE_U8(r28.u32 + 118, r23.u8);
loc_826B9450:
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
loc_826B9454:
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b949c
	if (cr6.eq) goto loc_826B949C;
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b949c
	if (!cr6.eq) goto loc_826B949C;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r26)
	PPC_STORE_U32(r26.u32 + 4, r11.u32);
	// bne cr6,0x826b949c
	if (!cr6.eq) goto loc_826B949C;
	// mr r11,r24
	r11.u64 = r24.u64;
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
loc_826B949C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_826B94A4"))) PPC_WEAK_FUNC(sub_826B94A4);
PPC_FUNC_IMPL(__imp__sub_826B94A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B94A8"))) PPC_WEAK_FUNC(sub_826B94A8);
PPC_FUNC_IMPL(__imp__sub_826B94A8) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// lbz r11,264(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 264);
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9568
	if (cr6.eq) goto loc_826B9568;
	// addi r31,r29,296
	r31.s64 = r29.s64 + 296;
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
	// beq cr6,0x826b94f4
	if (cr6.eq) goto loc_826B94F4;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826b9504
	if (cr6.eq) goto loc_826B9504;
loc_826B94F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_826B9504:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0b18
	sub_826B0B18(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b9560
	if (cr6.eq) goto loc_826B9560;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b9560
	if (!cr6.eq) goto loc_826B9560;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x826b9560
	if (!cr0.eq) goto loc_826B9560;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// stb r27,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r27.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B9560:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x826b9650
	if (cr6.lt) goto loc_826B9650;
loc_826B9568:
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
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
	// beq cr6,0x826b9598
	if (cr6.eq) goto loc_826B9598;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b95ac
	if (cr6.eq) goto loc_826B95AC;
loc_826B9598:
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
loc_826B95AC:
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
	// bne cr6,0x826b95d0
	if (!cr6.eq) goto loc_826B95D0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x826b95e4
	goto loc_826B95E4;
loc_826B95D0:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b95fc
	if (cr6.eq) goto loc_826B95FC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
loc_826B95E4:
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
loc_826B95FC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b9644
	if (cr6.eq) goto loc_826B9644;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b9644
	if (!cr6.eq) goto loc_826B9644;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b9644
	if (!cr6.eq) goto loc_826B9644;
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
loc_826B9644:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_826B9650:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826B965C"))) PPC_WEAK_FUNC(sub_826B965C);
PPC_FUNC_IMPL(__imp__sub_826B965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9660"))) PPC_WEAK_FUNC(sub_826B9660);
PPC_FUNC_IMPL(__imp__sub_826B9660) {
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
	// clrlwi r27,r4,31
	r27.u64 = ctx.r4.u32 & 0x1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x826b9720
	if (cr6.eq) goto loc_826B9720;
	// lbz r11,264(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 264);
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9720
	if (cr6.eq) goto loc_826B9720;
	// addi r31,r29,296
	r31.s64 = r29.s64 + 296;
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
	// beq cr6,0x826b96b8
	if (cr6.eq) goto loc_826B96B8;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826b96c8
	if (cr6.eq) goto loc_826B96C8;
loc_826B96B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r28,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r28.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_826B96C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,184(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// bl 0x826b0088
	sub_826B0088(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b9720
	if (cr6.eq) goto loc_826B9720;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b9720
	if (!cr6.eq) goto loc_826B9720;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne 0x826b9720
	if (!cr0.eq) goto loc_826B9720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r30,12(r31)
	r30.u64 = PPC_LOAD_U8(r31.u32 + 12);
	// stw r26,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r26.u32);
	// stb r26,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r26.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B9720:
	// addi r30,r29,16
	r30.s64 = r29.s64 + 16;
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
	// beq cr6,0x826b9750
	if (cr6.eq) goto loc_826B9750;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b9764
	if (cr6.eq) goto loc_826B9764;
loc_826B9750:
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
loc_826B9764:
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
	// beq cr6,0x826b97e8
	if (cr6.eq) goto loc_826B97E8;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x826b97c8
	if (!cr6.eq) goto loc_826B97C8;
	// andi. r9,r10,18
	ctx.r9.u64 = ctx.r10.u64 & 18;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826b97c8
	if (!cr6.eq) goto loc_826B97C8;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826b97e8
	if (!cr6.eq) goto loc_826B97E8;
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
	// b 0x826b97e4
	goto loc_826B97E4;
loc_826B97C8:
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
loc_826B97E4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826B97E8:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826b9830
	if (cr6.eq) goto loc_826B9830;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b9830
	if (!cr6.eq) goto loc_826B9830;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826b9830
	if (!cr6.eq) goto loc_826B9830;
	// mr r11,r26
	r11.u64 = r26.u64;
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
loc_826B9830:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826B983C"))) PPC_WEAK_FUNC(sub_826B983C);
PPC_FUNC_IMPL(__imp__sub_826B983C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826B9840"))) PPC_WEAK_FUNC(sub_826B9840);
PPC_FUNC_IMPL(__imp__sub_826B9840) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b94a8
	sub_826B94A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9848"))) PPC_WEAK_FUNC(sub_826B9848);
PPC_FUNC_IMPL(__imp__sub_826B9848) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b8868
	sub_826B8868(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9850"))) PPC_WEAK_FUNC(sub_826B9850);
PPC_FUNC_IMPL(__imp__sub_826B9850) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b8870
	sub_826B8870(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9858"))) PPC_WEAK_FUNC(sub_826B9858);
PPC_FUNC_IMPL(__imp__sub_826B9858) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b9660
	sub_826B9660(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826B9860"))) PPC_WEAK_FUNC(sub_826B9860);
PPC_FUNC_IMPL(__imp__sub_826B9860) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r29,r31,4
	r29.s64 = r31.s64 + 4;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826aed18
	sub_826AED18(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,-22064
	r11.s64 = r11.s64 + -22064;
	// addi r10,r10,-22104
	ctx.r10.s64 = ctx.r10.s64 + -22104;
	// addi r9,r9,-22200
	ctx.r9.s64 = ctx.r9.s64 + -22200;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r30,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r30.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// lbz r11,69(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 69);
	// stw r30,268(r31)
	PPC_STORE_U32(r31.u32 + 268, r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(r31.u32 + 288, r30.u32);
	// stb r30,292(r31)
	PPC_STORE_U8(r31.u32 + 292, r30.u8);
	// stb r11,264(r31)
	PPC_STORE_U8(r31.u32 + 264, r11.u8);
	// stw r30,300(r31)
	PPC_STORE_U32(r31.u32 + 300, r30.u32);
	// stw r30,304(r31)
	PPC_STORE_U32(r31.u32 + 304, r30.u32);
	// stb r30,308(r31)
	PPC_STORE_U8(r31.u32 + 308, r30.u8);
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// bl 0x826aeab0
	sub_826AEAB0(ctx, base);
	// lis r11,744
	r11.s64 = 48758784;
	// lbz r29,56(r31)
	r29.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// ori r11,r11,47662
	r11.u64 = r11.u64 | 47662;
	// mulli r4,r29,88
	ctx.r4.s64 = r29.s64 * 88;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x826b9904
	if (!cr6.gt) goto loc_826B9904;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_826B9904:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826b9960
	if (cr6.eq) goto loc_826B9960;
	// addi r28,r29,-1
	r28.s64 = r29.s64 + -1;
	// mr r29,r26
	r29.u64 = r26.u64;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// blt cr6,0x826b9958
	if (cr6.lt) goto loc_826B9958;
loc_826B9934:
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// stw r30,76(r29)
	PPC_STORE_U32(r29.u32 + 76, r30.u32);
	// addi r29,r29,88
	r29.s64 = r29.s64 + 88;
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bge cr6,0x826b9934
	if (!cr6.lt) goto loc_826B9934;
loc_826B9958:
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x826b9964
	goto loc_826B9964;
loc_826B9960:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_826B9964:
	// addi r10,r27,64
	ctx.r10.s64 = r27.s64 + 64;
	// stw r11,200(r31)
	PPC_STORE_U32(r31.u32 + 200, r11.u32);
	// vspltisw v13,15
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0xF)));
	// addi r9,r31,204
	ctx.r9.s64 = r31.s64 + 204;
	// vspltisw v12,4
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x4)));
	// li r5,56
	ctx.r5.s64 = 56;
	// vspltisw v11,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x1)));
	// addi r3,r31,208
	ctx.r3.s64 = r31.s64 + 208;
	// addi r4,r31,52
	ctx.r4.s64 = r31.s64 + 52;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vexptefp v0,v0
	ctx.fpscr.enableFlushMode();
	ctx.v0.f32[0] = exp2f(ctx.v0.f32[0]);
	ctx.v0.f32[1] = exp2f(ctx.v0.f32[1]);
	ctx.v0.f32[2] = exp2f(ctx.v0.f32[2]);
	ctx.v0.f32[3] = exp2f(ctx.v0.f32[3]);
	// vctsxs v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.s32, _mm_vctsxs(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_set1_ps(16))));
	// vadduws v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_adds_epu32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vsraw v0,v0,v12
	ctx.v0.s32[0] = ctx.v0.s32[0] >> (ctx.v12.u8[0] & 0x1F);
	ctx.v0.s32[1] = ctx.v0.s32[1] >> (ctx.v12.u8[4] & 0x1F);
	ctx.v0.s32[2] = ctx.v0.s32[2] >> (ctx.v12.u8[8] & 0x1F);
	ctx.v0.s32[3] = ctx.v0.s32[3] >> (ctx.v12.u8[12] & 0x1F);
	// vmaxsw v0,v0,v11
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvewx v0,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,188(r31)
	PPC_STORE_U32(r31.u32 + 188, r30.u32);
	// stw r30,192(r31)
	PPC_STORE_U32(r31.u32 + 192, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// sth r11,110(r31)
	PPC_STORE_U16(r31.u32 + 110, r11.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826B99D0"))) PPC_WEAK_FUNC(sub_826B99D0);
PPC_FUNC_IMPL(__imp__sub_826B99D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// addi r24,r31,296
	r24.s64 = r31.s64 + 296;
	// mr r26,r23
	r26.u64 = r23.u64;
	// mr r22,r23
	r22.u64 = r23.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b9a1c
	if (cr6.eq) goto loc_826B9A1C;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826b9a2c
	if (cr6.eq) goto loc_826B9A2C;
loc_826B9A1C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stb r29,12(r24)
	PPC_STORE_U8(r24.u32 + 12, r29.u8);
	// stw r30,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r30.u32);
loc_826B9A2C:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x826b0100
	sub_826B0100(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826ba408
	if (cr6.eq) goto loc_826BA408;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x826b0be8
	sub_826B0BE8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bge cr6,0x826b9ab0
	if (!cr6.lt) goto loc_826B9AB0;
loc_826B9A5C:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b9aa0
	if (cr6.eq) goto loc_826B9AA0;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826b9aa0
	if (!cr6.eq) goto loc_826B9AA0;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// bne 0x826b9aa0
	if (!cr0.eq) goto loc_826B9AA0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lbz r31,12(r24)
	r31.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// stw r23,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r23.u32);
	// stb r23,12(r24)
	PPC_STORE_U8(r24.u32 + 12, r23.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B9AA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
loc_826B9AB0:
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r25,r11,-13256
	r25.s64 = r11.s64 + -13256;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b9adc
	if (cr6.eq) goto loc_826B9ADC;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b9af0
	if (cr6.eq) goto loc_826B9AF0;
loc_826B9ADC:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(r25.u32 + 12, r29.u8);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
loc_826B9AF0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// bl 0x826af6d0
	sub_826AF6D0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// blt cr6,0x826b9b6c
	if (cr6.lt) goto loc_826B9B6C;
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9b4c
	if (cr6.eq) goto loc_826B9B4C;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_826B9B28:
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r7,r11,8
	ctx.r7.s64 = r11.s64 + 8;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// rlwinm r9,r7,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + r31.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// blt cr6,0x826b9b28
	if (cr6.lt) goto loc_826B9B28;
loc_826B9B4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r10,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r10.u8);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826af9b0
	sub_826AF9B0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x826b9e2c
	if (!cr6.lt) goto loc_826B9E2C;
loc_826B9B6C:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b9bb8
	if (cr6.eq) goto loc_826B9BB8;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826b9bb8
	if (!cr6.eq) goto loc_826B9BB8;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// bne cr6,0x826b9bb8
	if (!cr6.eq) goto loc_826B9BB8;
	// mr r11,r23
	r11.u64 = r23.u64;
	// lbz r30,12(r25)
	r30.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(r25.u32 + 12, r11.u8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826B9BB8:
	// mr r30,r29
	r30.u64 = r29.u64;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x826b9a5c
	if (!cr6.eq) goto loc_826B9A5C;
loc_826B9BC4:
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x826b0c68
	sub_826B0C68(ctx, base);
	// lbz r11,292(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 292);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x826b9be0
	if (!cr6.eq) goto loc_826B9BE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b9220
	sub_826B9220(ctx, base);
loc_826B9BE0:
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9d68
	if (cr6.eq) goto loc_826B9D68;
	// mr r27,r23
	r27.u64 = r23.u64;
loc_826B9BF0:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x826b02f0
	sub_826B02F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826b9ca0
	if (cr6.eq) goto loc_826B9CA0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826b0520
	sub_826B0520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x826b9ca0
	if (cr6.eq) goto loc_826B9CA0;
	// mulli r30,r27,88
	r30.s64 = r27.s64 * 88;
loc_826B9C28:
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// beq cr6,0x826b9c48
	if (cr6.eq) goto loc_826B9C48;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_826B9C48:
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x826bec48
	sub_826BEC48(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r29,r5,r29
	r29.u64 = ctx.r5.u64 + r29.u64;
	// bl 0x826b0368
	sub_826B0368(ctx, base);
	// lwz r11,200(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// subf. r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826b9ca0
	if (cr0.eq) goto loc_826B9CA0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826b0520
	sub_826B0520(ctx, base);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x826b9c28
	if (!cr6.eq) goto loc_826B9C28;
loc_826B9CA0:
	// addi r11,r27,138
	r11.s64 = r27.s64 + 138;
	// subf r10,r29,r28
	ctx.r10.s64 = r28.s64 - r29.s64;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r11,r31
	r11.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bgt cr6,0x826b9cbc
	if (cr6.gt) goto loc_826B9CBC;
	// li r22,1
	r22.s64 = 1;
loc_826B9CBC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x826b47f8
	sub_826B47F8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x826b47f8
	sub_826B47F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x826b0840
	sub_826B0840(ctx, base);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// mulli r11,r27,88
	r11.s64 = r27.s64 * 88;
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lbz r29,13(r30)
	r29.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826b9d40
	if (cr6.eq) goto loc_826B9D40;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826b9d3c
	if (cr6.eq) goto loc_826B9D3C;
	// rlwinm r26,r10,2,0,29
	r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_826B9D18:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// addi r28,r28,1024
	r28.s64 = r28.s64 + 1024;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x826b9d18
	if (!cr6.eq) goto loc_826B9D18;
loc_826B9D3C:
	// li r26,1
	r26.s64 = 1;
loc_826B9D40:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// bne cr6,0x826b9d54
	if (!cr6.eq) goto loc_826B9D54;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x826b47f8
	sub_826B47F8(ctx, base);
loc_826B9D54:
	// addi r11,r27,1
	r11.s64 = r27.s64 + 1;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b9bf0
	if (cr6.lt) goto loc_826B9BF0;
loc_826B9D68:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826b8988
	sub_826B8988(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826b9d98
	if (cr6.eq) goto loc_826B9D98;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826b9dac
	if (cr6.eq) goto loc_826B9DAC;
loc_826B9D98:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(r25.u32 + 12, r29.u8);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
loc_826B9DAC:
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r7.u32);
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9df0
	if (cr6.eq) goto loc_826B9DF0;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_826B9DC4:
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = r11.s64 * 88;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// lfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b9dc4
	if (cr6.lt) goto loc_826B9DC4;
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 4);
loc_826B9DF0:
	// clrlwi r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba190
	if (cr6.eq) goto loc_826BA190;
	// lbz r11,172(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826ba160
	if (!cr6.eq) goto loc_826BA160;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
	// addi r9,r31,20
	ctx.r9.s64 = r31.s64 + 20;
loc_826B9E18:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ba0e4
	if (cr6.eq) goto loc_826BA0E4;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x826ba0e8
	goto loc_826BA0E8;
loc_826B9E2C:
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9e8c
	if (cr6.eq) goto loc_826B9E8C;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r23
	r11.u64 = r23.u64;
	// li r6,256
	ctx.r6.s64 = 256;
loc_826B9E44:
	// lwz r7,200(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// mulli r10,r11,88
	ctx.r10.s64 = r11.s64 * 88;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// stw r8,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r8.u32);
	// stw r6,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r6.u32);
	// stw r23,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r23.u32);
	// lbzx r10,r7,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + r31.u32);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rotlwi r10,r10,10
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 10);
	// lbz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// blt cr6,0x826b9e44
	if (cr6.lt) goto loc_826B9E44;
loc_826B9E8C:
	// lbz r11,172(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ba01c
	if (cr6.eq) goto loc_826BA01C;
	// rlwinm r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826ba01c
	if (!cr6.eq) goto loc_826BA01C;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// beq cr6,0x826b9f4c
	if (cr6.eq) goto loc_826B9F4C;
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9f30
	if (cr6.eq) goto loc_826B9F30;
	// mr r8,r23
	ctx.r8.u64 = r23.u64;
loc_826B9ECC:
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// mulli r11,r8,88
	r11.s64 = ctx.r8.s64 * 88;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,112(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 112);
	f0.f64 = double(temp.f32);
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f0,40(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,40(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	f0.f64 = double(temp.f32);
	// stfs f0,36(r10)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,52
	ctx.r10.s64 = r11.s64 + 52;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
loc_826B9F08:
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x826b9f08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_826B9F08;
	// addi r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 1;
	// stfs f31,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r11.u32 + 48, temp.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b9ecc
	if (cr6.lt) goto loc_826B9ECC;
loc_826B9F30:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826B9F4C:
	// lbz r11,172(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// rlwinm r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9fcc
	if (cr6.eq) goto loc_826B9FCC;
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// addi r11,r31,16
	r11.s64 = r31.s64 + 16;
	// lfs f13,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// lhz r10,158(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 158);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// sth r10,158(r11)
	PPC_STORE_U16(r11.u32 + 158, ctx.r10.u16);
	// beq cr6,0x826b9f94
	if (cr6.eq) goto loc_826B9F94;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-22300(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22300);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x826b9f98
	goto loc_826B9F98;
loc_826B9F94:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_826B9F98:
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826b9fcc
	if (cr6.eq) goto loc_826B9FCC;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_826B9FA8:
	// lwz r9,200(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// mulli r10,r11,88
	ctx.r10.s64 = r11.s64 * 88;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// stfs f0,40(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826b9fa8
	if (cr6.lt) goto loc_826B9FA8;
loc_826B9FCC:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826b9bc4
	if (cr6.eq) goto loc_826B9BC4;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826b9bc4
	if (!cr6.eq) goto loc_826B9BC4;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// bne cr6,0x826b9bc4
	if (!cr6.eq) goto loc_826B9BC4;
	// mr r11,r23
	r11.u64 = r23.u64;
	// lbz r30,12(r25)
	r30.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(r25.u32 + 12, r11.u8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
	// b 0x826b9bc4
	goto loc_826B9BC4;
loc_826BA01C:
	// lbz r11,56(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba090
	if (cr6.eq) goto loc_826BA090;
	// mr r26,r23
	r26.u64 = r23.u64;
loc_826BA02C:
	// lwz r10,200(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 200);
	// mulli r11,r26,88
	r11.s64 = r26.s64 * 88;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lbz r30,13(r28)
	r30.u64 = PPC_LOAD_U8(r28.u32 + 13);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba07c
	if (cr6.eq) goto loc_826BA07C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826ba07c
	if (cr6.eq) goto loc_826BA07C;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_826BA058:
	// lwz r11,20(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r29,r29,1024
	r29.s64 = r29.s64 + 1024;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x826ba058
	if (!cr6.eq) goto loc_826BA058;
loc_826BA07C:
	// addi r11,r26,1
	r11.s64 = r26.s64 + 1;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// clrlwi r26,r11,24
	r26.u64 = r11.u32 & 0xFF;
	// cmplw cr6,r26,r10
	cr6.compare<uint32_t>(r26.u32, ctx.r10.u32, xer);
	// blt cr6,0x826ba02c
	if (cr6.lt) goto loc_826BA02C;
loc_826BA090:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r9,r13
	ctx.r9.u64 = ctx.r13.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826ba0dc
	if (cr6.eq) goto loc_826BA0DC;
	// lwz r11,8(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bne cr6,0x826ba0dc
	if (!cr6.eq) goto loc_826BA0DC;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// bne cr6,0x826ba0dc
	if (!cr6.eq) goto loc_826BA0DC;
	// mr r11,r23
	r11.u64 = r23.u64;
	// lbz r31,12(r25)
	r31.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(r25.u32 + 12, r11.u8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826BA0DC:
	// li r30,1
	r30.s64 = 1;
	// b 0x826b9a5c
	goto loc_826B9A5C;
loc_826BA0E4:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_826BA0E8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x826ba100
	if (cr6.eq) goto loc_826BA100;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x826ba104
	goto loc_826BA104;
loc_826BA100:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_826BA104:
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba134
	if (cr6.eq) goto loc_826BA134;
	// lbz r11,116(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 116);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// b 0x826b9e18
	goto loc_826B9E18;
loc_826BA134:
	// clrlwi r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826ba190
	if (!cr6.eq) goto loc_826BA190;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x826ba18c
	goto loc_826BA18C;
loc_826BA160:
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x826ba190
	if (!cr6.eq) goto loc_826BA190;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826ba190
	if (!cr6.eq) goto loc_826BA190;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826BA18C:
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 4);
loc_826BA190:
	// lbz r11,172(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ba1d4
	if (cr6.eq) goto loc_826BA1D4;
	// lhz r10,174(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 174);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ba1b8
	if (cr6.eq) goto loc_826BA1B8;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba1d4
	if (cr6.eq) goto loc_826BA1D4;
loc_826BA1B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r7,4(r25)
	ctx.r7.u64 = PPC_LOAD_U32(r25.u32 + 4);
loc_826BA1D4:
	// lbz r11,172(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 172);
	// clrlwi r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826ba1f0
	if (cr6.eq) goto loc_826BA1F0;
	// rlwinm r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba390
	if (cr6.eq) goto loc_826BA390;
loc_826BA1F0:
	// addi r27,r31,20
	r27.s64 = r31.s64 + 20;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x826ba20c
	if (cr6.eq) goto loc_826BA20C;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x826ba210
	goto loc_826BA210;
loc_826BA20C:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_826BA210:
	// mr r28,r11
	r28.u64 = r11.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba390
	if (cr6.eq) goto loc_826BA390;
loc_826BA21C:
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826ba234
	if (cr6.eq) goto loc_826BA234;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// b 0x826ba238
	goto loc_826BA238;
loc_826BA234:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_826BA238:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// beq cr6,0x826ba250
	if (cr6.eq) goto loc_826BA250;
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// subf r28,r10,r11
	r28.s64 = r11.s64 - ctx.r10.s64;
	// b 0x826ba254
	goto loc_826BA254;
loc_826BA250:
	// mr r28,r23
	r28.u64 = r23.u64;
loc_826BA254:
	// lbz r11,116(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 116);
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x826ba388
	if (!cr6.eq) goto loc_826BA388;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826ba2a8
	if (cr6.eq) goto loc_826BA2A8;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826ba2a8
	if (!cr6.eq) goto loc_826BA2A8;
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// bne cr6,0x826ba2a8
	if (!cr6.eq) goto loc_826BA2A8;
	// mr r11,r23
	r11.u64 = r23.u64;
	// lbz r30,12(r25)
	r30.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(r25.u32 + 12, r11.u8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826BA2A8:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ba2ec
	if (cr6.eq) goto loc_826BA2EC;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826ba2ec
	if (!cr6.eq) goto loc_826BA2EC;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// bne 0x826ba2ec
	if (!cr0.eq) goto loc_826BA2EC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lbz r30,12(r24)
	r30.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// stw r23,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r23.u32);
	// stb r23,12(r24)
	PPC_STORE_U8(r24.u32 + 12, r23.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826BA2EC:
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ba32c
	if (cr6.eq) goto loc_826BA32C;
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x826ba33c
	if (cr6.eq) goto loc_826BA33C;
loc_826BA32C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r30.u32);
	// stb r29,12(r24)
	PPC_STORE_U8(r24.u32 + 12, r29.u8);
loc_826BA33C:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// bl 0x826e53ac
	__imp__KeRaiseIrqlToDpcLevel(ctx, base);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r13
	r30.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ba36c
	if (cr6.eq) goto loc_826BA36C;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826ba380
	if (cr6.eq) goto loc_826BA380;
loc_826BA36C:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826e519c
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// stw r30,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r30.u32);
	// stb r29,12(r25)
	PPC_STORE_U8(r25.u32 + 12, r29.u8);
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
loc_826BA380:
	// addi r7,r11,1
	ctx.r7.s64 = r11.s64 + 1;
	// stw r7,4(r25)
	PPC_STORE_U32(r25.u32 + 4, ctx.r7.u32);
loc_826BA388:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x826ba21c
	if (!cr6.eq) goto loc_826BA21C;
loc_826BA390:
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mr r11,r13
	r11.u64 = ctx.r13.u64;
	// beq cr6,0x826ba3d8
	if (cr6.eq) goto loc_826BA3D8;
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826ba3d8
	if (!cr6.eq) goto loc_826BA3D8;
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// bne cr6,0x826ba3d8
	if (!cr6.eq) goto loc_826BA3D8;
	// mr r11,r23
	r11.u64 = r23.u64;
	// lbz r30,12(r25)
	r30.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r11,12(r25)
	PPC_STORE_U8(r25.u32 + 12, r11.u8);
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826BA3D8:
	// clrlwi r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba408
	if (cr6.eq) goto loc_826BA408;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x826b0100
	sub_826B0100(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x826ba408
	if (cr6.eq) goto loc_826BA408;
	// lwz r3,184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// bl 0x826b0e70
	sub_826B0E70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826b9a5c
	if (cr6.lt) goto loc_826B9A5C;
loc_826BA408:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ba44c
	if (cr6.eq) goto loc_826BA44C;
	// lwz r9,8(r24)
	ctx.r9.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826ba44c
	if (!cr6.eq) goto loc_826BA44C;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r11.u32);
	// bne 0x826ba44c
	if (!cr0.eq) goto loc_826BA44C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lbz r31,12(r24)
	r31.u64 = PPC_LOAD_U8(r24.u32 + 12);
	// stw r23,8(r24)
	PPC_STORE_U32(r24.u32 + 8, r23.u32);
	// stb r23,12(r24)
	PPC_STORE_U8(r24.u32 + 12, r23.u8);
	// bl 0x826e518c
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826e53bc
	__imp__KfLowerIrql(ctx, base);
loc_826BA44C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_826BA45C"))) PPC_WEAK_FUNC(sub_826BA45C);
PPC_FUNC_IMPL(__imp__sub_826BA45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA460"))) PPC_WEAK_FUNC(sub_826BA460);
PPC_FUNC_IMPL(__imp__sub_826BA460) {
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
	// li r4,312
	ctx.r4.s64 = 312;
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
	// beq cr6,0x826ba4b0
	if (cr6.eq) goto loc_826BA4B0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826b9860
	sub_826B9860(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x826ba4c0
	if (!cr6.eq) goto loc_826BA4C0;
loc_826BA4B0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826BA4C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x826ba4ec
	if (cr6.lt) goto loc_826BA4EC;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_826BA4EC:
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
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826BA50C"))) PPC_WEAK_FUNC(sub_826BA50C);
PPC_FUNC_IMPL(__imp__sub_826BA50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA510"))) PPC_WEAK_FUNC(sub_826BA510);
PPC_FUNC_IMPL(__imp__sub_826BA510) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ba790
	sub_826BA790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA518"))) PPC_WEAK_FUNC(sub_826BA518);
PPC_FUNC_IMPL(__imp__sub_826BA518) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba790
	sub_826BA790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA520"))) PPC_WEAK_FUNC(sub_826BA520);
PPC_FUNC_IMPL(__imp__sub_826BA520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA534"))) PPC_WEAK_FUNC(sub_826BA534);
PPC_FUNC_IMPL(__imp__sub_826BA534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA538"))) PPC_WEAK_FUNC(sub_826BA538);
PPC_FUNC_IMPL(__imp__sub_826BA538) {
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
	// bne 0x826ba570
	if (!cr0.eq) goto loc_826BA570;
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
loc_826BA570:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA580"))) PPC_WEAK_FUNC(sub_826BA580);
PPC_FUNC_IMPL(__imp__sub_826BA580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,4
	r11.s64 = 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, r11.u8);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lhz r11,-22304(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + -22304);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA59C"))) PPC_WEAK_FUNC(sub_826BA59C);
PPC_FUNC_IMPL(__imp__sub_826BA59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA5A0"))) PPC_WEAK_FUNC(sub_826BA5A0);
PPC_FUNC_IMPL(__imp__sub_826BA5A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x826b7220
	sub_826B7220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA5A8"))) PPC_WEAK_FUNC(sub_826BA5A8);
PPC_FUNC_IMPL(__imp__sub_826BA5A8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x826b74e8
	sub_826B74E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA5B0"))) PPC_WEAK_FUNC(sub_826BA5B0);
PPC_FUNC_IMPL(__imp__sub_826BA5B0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// b 0x826b6d08
	sub_826B6D08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA5B8"))) PPC_WEAK_FUNC(sub_826BA5B8);
PPC_FUNC_IMPL(__imp__sub_826BA5B8) {
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
	// lfs f1,116(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
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

__attribute__((alias("__imp__sub_826BA600"))) PPC_WEAK_FUNC(sub_826BA600);
PPC_FUNC_IMPL(__imp__sub_826BA600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r10,108(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 108);
	// lwz r11,120(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 120);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BA61C"))) PPC_WEAK_FUNC(sub_826BA61C);
PPC_FUNC_IMPL(__imp__sub_826BA61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA620"))) PPC_WEAK_FUNC(sub_826BA620);
PPC_FUNC_IMPL(__imp__sub_826BA620) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ba660
	if (cr6.lt) goto loc_826BA660;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826BA660:
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

__attribute__((alias("__imp__sub_826BA674"))) PPC_WEAK_FUNC(sub_826BA674);
PPC_FUNC_IMPL(__imp__sub_826BA674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA678"))) PPC_WEAK_FUNC(sub_826BA678);
PPC_FUNC_IMPL(__imp__sub_826BA678) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ba6b4
	if (cr6.lt) goto loc_826BA6B4;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
loc_826BA6B4:
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

__attribute__((alias("__imp__sub_826BA6C8"))) PPC_WEAK_FUNC(sub_826BA6C8);
PPC_FUNC_IMPL(__imp__sub_826BA6C8) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ba708
	if (cr6.lt) goto loc_826BA708;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826BA708:
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

__attribute__((alias("__imp__sub_826BA71C"))) PPC_WEAK_FUNC(sub_826BA71C);
PPC_FUNC_IMPL(__imp__sub_826BA71C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA720"))) PPC_WEAK_FUNC(sub_826BA720);
PPC_FUNC_IMPL(__imp__sub_826BA720) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r3,16
	r31.s64 = ctx.r3.s64 + 16;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826ba758
	if (cr6.eq) goto loc_826BA758;
	// addi r4,r31,36
	ctx.r4.s64 = r31.s64 + 36;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_826BA758:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x826ba76c
	if (cr6.eq) goto loc_826BA76C;
	// lbz r11,157(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 157);
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
loc_826BA76C:
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

__attribute__((alias("__imp__sub_826BA784"))) PPC_WEAK_FUNC(sub_826BA784);
PPC_FUNC_IMPL(__imp__sub_826BA784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BA788"))) PPC_WEAK_FUNC(sub_826BA788);
PPC_FUNC_IMPL(__imp__sub_826BA788) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x826aeae0
	sub_826AEAE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BA790"))) PPC_WEAK_FUNC(sub_826BA790);
PPC_FUNC_IMPL(__imp__sub_826BA790) {
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
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// addi r11,r11,-21800
	r11.s64 = r11.s64 + -21800;
	// addi r10,r10,-21840
	ctx.r10.s64 = ctx.r10.s64 + -21840;
	// addi r9,r9,-21936
	ctx.r9.s64 = ctx.r9.s64 + -21936;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// bl 0x826af018
	sub_826AF018(ctx, base);
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

__attribute__((alias("__imp__sub_826BA7E8"))) PPC_WEAK_FUNC(sub_826BA7E8);
PPC_FUNC_IMPL(__imp__sub_826BA7E8) {
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
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// bl 0x826b7180
	sub_826B7180(ctx, base);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x826ba834
	if (cr6.lt) goto loc_826BA834;
	// lbz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 196);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lbz r8,197(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 197);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-21680
	r11.s64 = r11.s64 + -21680;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// sth r10,110(r31)
	PPC_STORE_U16(r31.u32 + 110, ctx.r10.u16);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
loc_826BA834:
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

__attribute__((alias("__imp__sub_826BA848"))) PPC_WEAK_FUNC(sub_826BA848);
PPC_FUNC_IMPL(__imp__sub_826BA848) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
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
	// beq cr6,0x826ba88c
	if (cr6.eq) goto loc_826BA88C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// beq cr6,0x826ba8a0
	if (cr6.eq) goto loc_826BA8A0;
loc_826BA88C:
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
loc_826BA8A0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stfs f31,112(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 112, temp.u32);
	// stfs f31,224(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 224, temp.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826ba8f8
	if (cr6.eq) goto loc_826BA8F8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826ba8f8
	if (!cr6.eq) goto loc_826BA8F8;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826ba8f8
	if (!cr6.eq) goto loc_826BA8F8;
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
loc_826BA8F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826BA908"))) PPC_WEAK_FUNC(sub_826BA908);
PPC_FUNC_IMPL(__imp__sub_826BA908) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
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
	// beq cr6,0x826ba94c
	if (cr6.eq) goto loc_826BA94C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826ba960
	if (cr6.eq) goto loc_826BA960;
loc_826BA94C:
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
loc_826BA960:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfd f1,264(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 264);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// addi r11,r30,184
	r11.s64 = r30.s64 + 184;
	// stfs f0,116(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// lbz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// mr r8,r13
	ctx.r8.u64 = ctx.r13.u64;
	// lbz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 52);
	// addi r6,r11,16
	ctx.r6.s64 = r11.s64 + 16;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stb r9,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r9.u8);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r7,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r7.u8);
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r6
	PPC_STORE_U32(ctx.r6.u32, f0.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826baa0c
	if (cr6.eq) goto loc_826BAA0C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x826baa0c
	if (!cr6.eq) goto loc_826BAA0C;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826baa0c
	if (!cr6.eq) goto loc_826BAA0C;
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
loc_826BAA0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826BAA1C"))) PPC_WEAK_FUNC(sub_826BAA1C);
PPC_FUNC_IMPL(__imp__sub_826BAA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BAA20"))) PPC_WEAK_FUNC(sub_826BAA20);
PPC_FUNC_IMPL(__imp__sub_826BAA20) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
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
	// beq cr6,0x826baa64
	if (cr6.eq) goto loc_826BAA64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826baa78
	if (cr6.eq) goto loc_826BAA78;
loc_826BAA64:
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
loc_826BAA78:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r8,r13
	ctx.r8.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r11,r30,184
	r11.s64 = r30.s64 + 184;
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// stfs f31,116(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 116, temp.u32);
	// lbz r7,52(r30)
	ctx.r7.u64 = PPC_LOAD_U8(r30.u32 + 52);
	// lbz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U8(r30.u32 + 56);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stb r7,12(r11)
	PPC_STORE_U8(r11.u32 + 12, ctx.r7.u8);
	// addi r7,r11,16
	ctx.r7.s64 = r11.s64 + 16;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stb r9,13(r11)
	PPC_STORE_U8(r11.u32 + 13, ctx.r9.u8);
	// stw r10,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r10.u32);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, f0.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826bab10
	if (cr6.eq) goto loc_826BAB10;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r8,r10
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, xer);
	// bne cr6,0x826bab10
	if (!cr6.eq) goto loc_826BAB10;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826bab10
	if (!cr6.eq) goto loc_826BAB10;
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
loc_826BAB10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826BAB20"))) PPC_WEAK_FUNC(sub_826BAB20);
PPC_FUNC_IMPL(__imp__sub_826BAB20) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ba520
	sub_826BA520(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB28"))) PPC_WEAK_FUNC(sub_826BAB28);
PPC_FUNC_IMPL(__imp__sub_826BAB28) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba5b0
	sub_826BA5B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB30"))) PPC_WEAK_FUNC(sub_826BAB30);
PPC_FUNC_IMPL(__imp__sub_826BAB30) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba6c8
	sub_826BA6C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB38"))) PPC_WEAK_FUNC(sub_826BAB38);
PPC_FUNC_IMPL(__imp__sub_826BAB38) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826baa20
	sub_826BAA20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB40"))) PPC_WEAK_FUNC(sub_826BAB40);
PPC_FUNC_IMPL(__imp__sub_826BAB40) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ba580
	sub_826BA580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB48"))) PPC_WEAK_FUNC(sub_826BAB48);
PPC_FUNC_IMPL(__imp__sub_826BAB48) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba5a0
	sub_826BA5A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB50"))) PPC_WEAK_FUNC(sub_826BAB50);
PPC_FUNC_IMPL(__imp__sub_826BAB50) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba848
	sub_826BA848(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB58"))) PPC_WEAK_FUNC(sub_826BAB58);
PPC_FUNC_IMPL(__imp__sub_826BAB58) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7cb0
	sub_826B7CB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB60"))) PPC_WEAK_FUNC(sub_826BAB60);
PPC_FUNC_IMPL(__imp__sub_826BAB60) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba7e8
	sub_826BA7E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB68"))) PPC_WEAK_FUNC(sub_826BAB68);
PPC_FUNC_IMPL(__imp__sub_826BAB68) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba908
	sub_826BA908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB70"))) PPC_WEAK_FUNC(sub_826BAB70);
PPC_FUNC_IMPL(__imp__sub_826BAB70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba678
	sub_826BA678(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB78"))) PPC_WEAK_FUNC(sub_826BAB78);
PPC_FUNC_IMPL(__imp__sub_826BAB78) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ba538
	sub_826BA538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB80"))) PPC_WEAK_FUNC(sub_826BAB80);
PPC_FUNC_IMPL(__imp__sub_826BAB80) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826b7cc0
	sub_826B7CC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB88"))) PPC_WEAK_FUNC(sub_826BAB88);
PPC_FUNC_IMPL(__imp__sub_826BAB88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba720
	sub_826BA720(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB90"))) PPC_WEAK_FUNC(sub_826BAB90);
PPC_FUNC_IMPL(__imp__sub_826BAB90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x826ba788
	sub_826BA788(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAB98"))) PPC_WEAK_FUNC(sub_826BAB98);
PPC_FUNC_IMPL(__imp__sub_826BAB98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba5a8
	sub_826BA5A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BABA0"))) PPC_WEAK_FUNC(sub_826BABA0);
PPC_FUNC_IMPL(__imp__sub_826BABA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba5b8
	sub_826BA5B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BABA8"))) PPC_WEAK_FUNC(sub_826BABA8);
PPC_FUNC_IMPL(__imp__sub_826BABA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826ba620
	sub_826BA620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BABB0"))) PPC_WEAK_FUNC(sub_826BABB0);
PPC_FUNC_IMPL(__imp__sub_826BABB0) {
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
	// beq cr6,0x826babf0
	if (cr6.eq) goto loc_826BABF0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826bac04
	if (cr6.eq) goto loc_826BAC04;
loc_826BABF0:
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
loc_826BAC04:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lhz r9,108(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 108);
	// stw r8,272(r30)
	PPC_STORE_U32(r30.u32 + 272, ctx.r8.u32);
	// divwu r11,r11,r9
	r11.u32 = r11.u32 / ctx.r9.u32;
	// twllei r9,0
	// stw r11,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826bac70
	if (cr6.eq) goto loc_826BAC70;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826bac70
	if (!cr6.eq) goto loc_826BAC70;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826bac70
	if (!cr6.eq) goto loc_826BAC70;
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
loc_826BAC70:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826BAC7C"))) PPC_WEAK_FUNC(sub_826BAC7C);
PPC_FUNC_IMPL(__imp__sub_826BAC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BAC80"))) PPC_WEAK_FUNC(sub_826BAC80);
PPC_FUNC_IMPL(__imp__sub_826BAC80) {
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
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x826bacbc
	if (cr6.eq) goto loc_826BACBC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826bacd0
	if (cr6.eq) goto loc_826BACD0;
loc_826BACBC:
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
loc_826BACD0:
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
	// bne cr6,0x826bacf4
	if (!cr6.eq) goto loc_826BACF4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x826bad08
	goto loc_826BAD08;
loc_826BACF4:
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826bad20
	if (cr6.eq) goto loc_826BAD20;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
loc_826BAD08:
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
loc_826BAD20:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826bad64
	if (cr6.eq) goto loc_826BAD64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826bad64
	if (!cr6.eq) goto loc_826BAD64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826bad64
	if (!cr6.eq) goto loc_826BAD64;
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
loc_826BAD64:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826BAD70"))) PPC_WEAK_FUNC(sub_826BAD70);
PPC_FUNC_IMPL(__imp__sub_826BAD70) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r30,r3,16
	r30.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x826badb0
	if (cr6.eq) goto loc_826BADB0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826badc4
	if (cr6.eq) goto loc_826BADC4;
loc_826BADB0:
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
loc_826BADC4:
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
	// beq cr6,0x826bae4c
	if (cr6.eq) goto loc_826BAE4C;
	// clrlwi r9,r27,31
	ctx.r9.u64 = r27.u32 & 0x1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826bae2c
	if (!cr6.eq) goto loc_826BAE2C;
	// andi. r9,r10,18
	ctx.r9.u64 = ctx.r10.u64 & 18;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x826bae2c
	if (!cr6.eq) goto loc_826BAE2C;
	// rlwinm r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x826bae4c
	if (!cr6.eq) goto loc_826BAE4C;
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
	// b 0x826bae48
	goto loc_826BAE48;
loc_826BAE2C:
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
loc_826BAE48:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826BAE4C:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826bae90
	if (cr6.eq) goto loc_826BAE90;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x826bae90
	if (!cr6.eq) goto loc_826BAE90;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826bae90
	if (!cr6.eq) goto loc_826BAE90;
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
loc_826BAE90:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826BAE9C"))) PPC_WEAK_FUNC(sub_826BAE9C);
PPC_FUNC_IMPL(__imp__sub_826BAE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BAEA0"))) PPC_WEAK_FUNC(sub_826BAEA0);
PPC_FUNC_IMPL(__imp__sub_826BAEA0) {
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
	// addi r29,r3,16
	r29.s64 = ctx.r3.s64 + 16;
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
	// beq cr6,0x826baedc
	if (cr6.eq) goto loc_826BAEDC;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r8
	cr6.compare<uint32_t>(r30.u32, ctx.r8.u32, xer);
	// beq cr6,0x826baef4
	if (cr6.eq) goto loc_826BAEF4;
loc_826BAEDC:
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826BAEF4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r29,4
	ctx.r10.s64 = r29.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// beq cr6,0x826baf40
	if (cr6.eq) goto loc_826BAF40;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x826baf40
	if (cr6.eq) goto loc_826BAF40;
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_826BAF40:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// mr r10,r13
	ctx.r10.u64 = ctx.r13.u64;
	// beq cr6,0x826baf80
	if (cr6.eq) goto loc_826BAF80;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bne cr6,0x826baf80
	if (!cr6.eq) goto loc_826BAF80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bne cr6,0x826baf80
	if (!cr6.eq) goto loc_826BAF80;
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
loc_826BAF80:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826BAF8C"))) PPC_WEAK_FUNC(sub_826BAF8C);
PPC_FUNC_IMPL(__imp__sub_826BAF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826BAF90"))) PPC_WEAK_FUNC(sub_826BAF90);
PPC_FUNC_IMPL(__imp__sub_826BAF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,68(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 68);
	// li r3,0
	ctx.r3.s64 = 0;
	// mulli r11,r11,120
	r11.s64 = r11.s64 * 120;
	// addi r11,r11,276
	r11.s64 = r11.s64 + 276;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826BAFA8"))) PPC_WEAK_FUNC(sub_826BAFA8);
PPC_FUNC_IMPL(__imp__sub_826BAFA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826bac80
	sub_826BAC80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAFB0"))) PPC_WEAK_FUNC(sub_826BAFB0);
PPC_FUNC_IMPL(__imp__sub_826BAFB0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826baea0
	sub_826BAEA0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAFB8"))) PPC_WEAK_FUNC(sub_826BAFB8);
PPC_FUNC_IMPL(__imp__sub_826BAFB8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x826bad70
	sub_826BAD70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826BAFC0"))) PPC_WEAK_FUNC(sub_826BAFC0);
PPC_FUNC_IMPL(__imp__sub_826BAFC0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r31,4
	r28.s64 = r31.s64 + 4;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826aed18
	sub_826AED18(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-21800
	r11.s64 = r11.s64 + -21800;
	// addi r10,r10,-21840
	ctx.r10.s64 = ctx.r10.s64 + -21840;
	// addi r9,r9,-21936
	ctx.r9.s64 = ctx.r9.s64 + -21936;
	// addi r30,r31,184
	r30.s64 = r31.s64 + 184;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r11.u32);
	// bl 0x826aeab0
	sub_826AEAB0(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lfs f0,116(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 116);
	f0.f64 = double(temp.f32);
	// lbz r8,69(r29)
	ctx.r8.u64 = PPC_LOAD_U8(r29.u32 + 69);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lbz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// ori r7,r9,48000
	ctx.r7.u64 = ctx.r9.u64 | 48000;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r8,268(r31)
	PPC_STORE_U32(r31.u32 + 268, ctx.r8.u32);
	// addi r8,r30,16
	ctx.r8.s64 = r30.s64 + 16;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// addi r9,r9,-21680
	ctx.r9.s64 = ctx.r9.s64 + -21680;
	// stb r6,12(r30)
	PPC_STORE_U8(r30.u32 + 12, ctx.r6.u8);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stb r10,13(r30)
	PPC_STORE_U8(r30.u32 + 13, ctx.r10.u8);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// stw r7,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r7.u32);
	// lbz r11,12(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 12);
	// lbz r10,13(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 13);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// sth r5,110(r31)
	PPC_STORE_U16(r31.u32 + 110, ctx.r5.u16);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// sth r11,108(r31)
	PPC_STORE_U16(r31.u32 + 108, r11.u16);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

