#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82193C8C"))) PPC_WEAK_FUNC(sub_82193C8C);
PPC_FUNC_IMPL(__imp__sub_82193C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193C90"))) PPC_WEAK_FUNC(sub_82193C90);
PPC_FUNC_IMPL(__imp__sub_82193C90) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82193cd0
	if (cr6.eq) goto loc_82193CD0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82193cc0
	if (cr0.eq) goto loc_82193CC0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_82193CC0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82193ce4
	goto loc_82193CE4;
loc_82193CD0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82193898
	sub_82193898(ctx, base);
loc_82193CE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82193CF4"))) PPC_WEAK_FUNC(sub_82193CF4);
PPC_FUNC_IMPL(__imp__sub_82193CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193CF8"))) PPC_WEAK_FUNC(sub_82193CF8);
PPC_FUNC_IMPL(__imp__sub_82193CF8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi. r30,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r30.s64 = r11.s32 >> 6;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82193d40
	if (!cr0.gt) goto loc_82193D40;
	// subf r27,r29,r5
	r27.s64 = ctx.r5.s64 - r29.s64;
loc_82193D24:
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,64
	r31.s64 = r31.s64 + 64;
	// bgt 0x82193d24
	if (cr0.gt) goto loc_82193D24;
loc_82193D40:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82193D50"))) PPC_WEAK_FUNC(sub_82193D50);
PPC_FUNC_IMPL(__imp__sub_82193D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23088(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23088);
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r21,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r21.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82150630
	sub_82150630(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82175998
	sub_82175998(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r25,r26
	r25.u64 = r26.u64;
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r26,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r26.u32);
	// stw r26,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r26.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r25,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r25.u32);
	// xori r23,r11,1
	r23.u64 = r11.u64 ^ 1;
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82193e78
	if (!cr0.gt) goto loc_82193E78;
loc_82193E00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82193e00
	if (cr6.lt) goto loc_82193E00;
	// lwz r25,104(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r27,88(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82193E78:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821930c0
	sub_821930C0(ctx, base);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x82193ef0
	if (!cr6.gt) goto loc_82193EF0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82193ef0
	if (cr0.eq) goto loc_82193EF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82193200
	sub_82193200(ctx, base);
	// b 0x82193ee4
	goto loc_82193EE4;
loc_82193EC8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82193280
	sub_82193280(ctx, base);
loc_82193EE4:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82193ec8
	if (!cr6.eq) goto loc_82193EC8;
loc_82193EF0:
	// stw r26,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r26.u32);
	// stw r26,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r26.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82193f20
	if (cr6.eq) goto loc_82193F20;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82193F20:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82193f40
	if (cr6.eq) goto loc_82193F40;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82193F40:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82193D58"))) PPC_WEAK_FUNC(sub_82193D58);
PPC_FUNC_IMPL(__imp__sub_82193D58) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// addi r31,r1,-256
	r31.s64 = ctx.r1.s64 + -256;
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r21,276(r31)
	PPC_STORE_U32(r31.u32 + 276, r21.u32);
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x82150630
	sub_82150630(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82175998
	sub_82175998(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// mr r25,r26
	r25.u64 = r26.u64;
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r26,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r26.u32);
	// stw r26,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r26.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r25,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r25.u32);
	// xori r23,r11,1
	r23.u64 = r11.u64 ^ 1;
	// mr r27,r26
	r27.u64 = r26.u64;
	// stw r26,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r26.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// stw r27,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r27.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,24
	ctx.r3.s64 = r11.s64 + 24;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r26
	r28.u64 = r26.u64;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82193e78
	if (!cr0.gt) goto loc_82193E78;
loc_82193E00:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// add r3,r27,r11
	ctx.r3.u64 = r27.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + 80, temp.u32);
	// bl 0x82193c90
	sub_82193C90(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// lha r11,8(r29)
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x82193e00
	if (cr6.lt) goto loc_82193E00;
	// lwz r25,104(r31)
	r25.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lwz r27,88(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82193E78:
	// mr r7,r23
	ctx.r7.u64 = r23.u64;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x821930c0
	sub_821930C0(ctx, base);
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// ble cr6,0x82193ef0
	if (!cr6.gt) goto loc_82193EF0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r11,40
	ctx.r3.s64 = r11.s64 + 40;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82193ef0
	if (cr0.eq) goto loc_82193EF0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82193200
	sub_82193200(ctx, base);
	// b 0x82193ee4
	goto loc_82193EE4;
loc_82193EC8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82193280
	sub_82193280(ctx, base);
loc_82193EE4:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82193ec8
	if (!cr6.eq) goto loc_82193EC8;
loc_82193EF0:
	// stw r26,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r26.u32);
	// stw r26,4(r21)
	PPC_STORE_U32(r21.u32 + 4, r26.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82193f20
	if (cr6.eq) goto loc_82193F20;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82193F20:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82193f40
	if (cr6.eq) goto loc_82193F40;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82193F40:
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// addi r1,r31,256
	ctx.r1.s64 = r31.s64 + 256;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82193F4C"))) PPC_WEAK_FUNC(sub_82193F4C);
PPC_FUNC_IMPL(__imp__sub_82193F4C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x8269a918
	sub_8269A918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82193F74"))) PPC_WEAK_FUNC(sub_82193F74);
PPC_FUNC_IMPL(__imp__sub_82193F74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8269a918
	sub_8269A918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82193F9C"))) PPC_WEAK_FUNC(sub_82193F9C);
PPC_FUNC_IMPL(__imp__sub_82193F9C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-256
	r31.s64 = r12.s64 + -256;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82193fcc
	if (cr0.eq) goto loc_82193FCC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// bl 0x82120868
	sub_82120868(ctx, base);
loc_82193FCC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82193FDC"))) PPC_WEAK_FUNC(sub_82193FDC);
PPC_FUNC_IMPL(__imp__sub_82193FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82193FE0"))) PPC_WEAK_FUNC(sub_82193FE0);
PPC_FUNC_IMPL(__imp__sub_82193FE0) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23196
	ctx.r4.s64 = r11.s64 + 23196;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15224
	ctx.r4.s64 = r11.s64 + 15224;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23184
	ctx.r4.s64 = r11.s64 + 23184;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15312
	ctx.r4.s64 = r11.s64 + 15312;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,23168
	ctx.r4.s64 = r11.s64 + 23168;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15704
	ctx.r4.s64 = r11.s64 + 15704;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219405C"))) PPC_WEAK_FUNC(sub_8219405C);
PPC_FUNC_IMPL(__imp__sub_8219405C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194060"))) PPC_WEAK_FUNC(sub_82194060);
PPC_FUNC_IMPL(__imp__sub_82194060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82194070
	goto loc_82194070;
loc_8219406C:
	// addi r11,r11,-64
	r11.s64 = r11.s64 + -64;
loc_82194070:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8219406c
	if (!cr0.eq) goto loc_8219406C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_821940A4"))) PPC_WEAK_FUNC(sub_821940A4);
PPC_FUNC_IMPL(__imp__sub_821940A4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821940A8"))) PPC_WEAK_FUNC(sub_821940A8);
PPC_FUNC_IMPL(__imp__sub_821940A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23268(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23268);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r28.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82194104
	if (cr6.lt) goto loc_82194104;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82194104:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// bl 0x82192c90
	sub_82192C90(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82193b28
	sub_82193B28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bne cr6,0x82194168
	if (!cr6.eq) goto loc_82194168;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82194160
	if (cr6.eq) goto loc_82194160;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82194160:
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// b 0x82194184
	goto loc_82194184;
loc_82194168:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82193a98
	sub_82193A98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82194184:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821941a8
	if (!cr0.eq) goto loc_821941A8;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82193b28
	sub_82193B28(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821941A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r31,84
	ctx.r8.s64 = r31.s64 + 84;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x821941f0
	goto loc_821941F0;
loc_821941D0:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-64
	r11.s64 = r11.s64 + -64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_821941F0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821941d0
	if (!cr0.eq) goto loc_821941D0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r24,6,0,25
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_821940B0"))) PPC_WEAK_FUNC(sub_821940B0);
PPC_FUNC_IMPL(__imp__sub_821940B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r28,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r28.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r31,228
	ctx.r10.s64 = r31.s64 + 228;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82194104
	if (cr6.lt) goto loc_82194104;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82194104:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// bl 0x82192c90
	sub_82192C90(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// stw r26,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r26.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82193b28
	sub_82193B28(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmplwi cr6,r28,1
	cr6.compare<uint32_t>(r28.u32, 1, xer);
	// bne cr6,0x82194168
	if (!cr6.eq) goto loc_82194168;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82194160
	if (cr6.eq) goto loc_82194160;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82194160:
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
	// b 0x82194184
	goto loc_82194184;
loc_82194168:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82193a98
	sub_82193A98(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82194184:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821941a8
	if (!cr0.eq) goto loc_821941A8;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82193b28
	sub_82193B28(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821941A8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r8,r31,84
	ctx.r8.s64 = r31.s64 + 84;
	// subf r9,r10,r11
	ctx.r9.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r9,r31,88
	ctx.r9.s64 = r31.s64 + 88;
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// rlwinm r11,r7,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// b 0x821941f0
	goto loc_821941F0;
loc_821941D0:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,-64
	r11.s64 = r11.s64 + -64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_821941F0:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821941d0
	if (!cr0.eq) goto loc_821941D0;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r24,6,0,25
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 6) & 0xFFFFFFC0;
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82194230"))) PPC_WEAK_FUNC(sub_82194230);
PPC_FUNC_IMPL(__imp__sub_82194230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23268(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23268);
	// addi r31,r12,-176
	r31.s64 = r12.s64 + -176;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194238"))) PPC_WEAK_FUNC(sub_82194238);
PPC_FUNC_IMPL(__imp__sub_82194238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82194268"))) PPC_WEAK_FUNC(sub_82194268);
PPC_FUNC_IMPL(__imp__sub_82194268) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x82194320
	if (!cr6.lt) goto loc_82194320;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x821942b4
	if (!cr6.gt) goto loc_821942B4;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_821942B4:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r27,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r27.s64 = r11.s32 >> 2;
	// beq cr6,0x821942f4
	if (cr6.eq) goto loc_821942F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82193ae8
	sub_82193AE8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x82194304
	goto loc_82194304;
loc_821942F4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82192c28
	sub_82192C28(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82194304:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82194320:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82194328"))) PPC_WEAK_FUNC(sub_82194328);
PPC_FUNC_IMPL(__imp__sub_82194328) {
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
	// lwz r16,23352(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23352);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x821527b8
	sub_821527B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821943d0
	if (cr6.eq) goto loc_821943D0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r10,-21088
	r27.s64 = ctx.r10.s64 + -21088;
loc_82194370:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x821943bc
	if (!cr0.eq) goto loc_821943BC;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + r11.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
loc_821943BC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82152838
	sub_82152838(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82194370
	if (!cr6.eq) goto loc_82194370;
loc_821943D0:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// b 0x821943e0
	goto loc_821943E0;
loc_821943DC:
	// addi r11,r11,-64
	r11.s64 = r11.s64 + -64;
loc_821943E0:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821943dc
	if (!cr0.eq) goto loc_821943DC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82194414
	if (cr6.eq) goto loc_82194414;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82194414:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82194330"))) PPC_WEAK_FUNC(sub_82194330);
PPC_FUNC_IMPL(__imp__sub_82194330) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x821527b8
	sub_821527B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821943d0
	if (cr6.eq) goto loc_821943D0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r29,0
	r29.s64 = 0;
	// addi r27,r10,-21088
	r27.s64 = ctx.r10.s64 + -21088;
loc_82194370:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x821943bc
	if (!cr0.eq) goto loc_821943BC;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// addi r3,r10,28
	ctx.r3.s64 = ctx.r10.s64 + 28;
	// add r4,r29,r11
	ctx.r4.u64 = r29.u64 + r11.u64;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
	// addi r29,r29,64
	r29.s64 = r29.s64 + 64;
loc_821943BC:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82152838
	sub_82152838(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82194370
	if (!cr6.eq) goto loc_82194370;
loc_821943D0:
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// b 0x821943e0
	goto loc_821943E0;
loc_821943DC:
	// addi r11,r11,-64
	r11.s64 = r11.s64 + -64;
loc_821943E0:
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x821943dc
	if (!cr0.eq) goto loc_821943DC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82194414
	if (cr6.eq) goto loc_82194414;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,6
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3F) != 0);
	r11.s64 = r11.s32 >> 6;
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82194414:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8219441C"))) PPC_WEAK_FUNC(sub_8219441C);
PPC_FUNC_IMPL(__imp__sub_8219441C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82194060
	sub_82194060(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194448"))) PPC_WEAK_FUNC(sub_82194448);
PPC_FUNC_IMPL(__imp__sub_82194448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23432(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23432);
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r28,r30,128
	r28.s64 = r30.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x821a60e0
	sub_821A60E0(ctx, base);
	// addi r29,r30,352
	r29.s64 = r30.s64 + 352;
	// li r26,0
	r26.s64 = 0;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r26,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r26.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lfs f13,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r4,r11,22880
	ctx.r4.s64 = r11.s64 + 22880;
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,132
	ctx.r3.s64 = r11.s64 + 132;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82167d30
	sub_82167D30(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82194268
	sub_82194268(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// b 0x82194548
	goto loc_82194548;
loc_82194520:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82192dd8
	sub_82192DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82193c28
	sub_82193C28(ctx, base);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	r11.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
loc_82194548:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82194520
	if (!cr0.eq) goto loc_82194520;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-9628
	ctx.r4.s64 = r11.s64 + -9628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8215dba8
	sub_8215DBA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-9672
	ctx.r4.s64 = r11.s64 + -9672;
	// stw r10,344(r30)
	PPC_STORE_U32(r30.u32 + 344, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8215dba8
	sub_8215DBA8(ctx, base);
	// stw r3,348(r30)
	PPC_STORE_U32(r30.u32 + 348, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82194450"))) PPC_WEAK_FUNC(sub_82194450);
PPC_FUNC_IMPL(__imp__sub_82194450) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// addi r28,r30,128
	r28.s64 = r30.s64 + 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x821a60e0
	sub_821A60E0(ctx, base);
	// addi r29,r30,352
	r29.s64 = r30.s64 + 352;
	// li r26,0
	r26.s64 = 0;
	// stw r26,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r26.u32);
	// stw r26,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r26.u32);
	// stw r26,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r26.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lfs f13,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,0(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// stfs f0,8(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// addi r4,r11,22880
	ctx.r4.s64 = r11.s64 + 22880;
	// stfs f0,16(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 16, temp.u32);
	// stfs f13,20(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 20, temp.u32);
	// stfs f0,24(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 24, temp.u32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// stfs f0,36(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 36, temp.u32);
	// stfs f13,40(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 40, temp.u32);
	// stfs f0,56(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// stfs f0,52(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// stfs f0,48(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// lwz r11,132(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,132
	ctx.r3.s64 = r11.s64 + 132;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82167d30
	sub_82167D30(ctx, base);
	// li r4,30
	ctx.r4.s64 = 30;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82194268
	sub_82194268(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// b 0x82194548
	goto loc_82194548;
loc_82194520:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// bl 0x82192dd8
	sub_82192DD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82193c28
	sub_82193C28(ctx, base);
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// rlwinm r11,r26,2,0,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r25
	r11.u64 = PPC_LOAD_U32(r11.u32 + r25.u32);
loc_82194548:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82194520
	if (!cr0.eq) goto loc_82194520;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-9628
	ctx.r4.s64 = r11.s64 + -9628;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8215dba8
	sub_8215DBA8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-9672
	ctx.r4.s64 = r11.s64 + -9672;
	// stw r10,344(r30)
	PPC_STORE_U32(r30.u32 + 344, ctx.r10.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8215dba8
	sub_8215DBA8(ctx, base);
	// stw r3,348(r30)
	PPC_STORE_U32(r30.u32 + 348, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821945A8"))) PPC_WEAK_FUNC(sub_821945A8);
PPC_FUNC_IMPL(__imp__sub_821945A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,128
	ctx.r3.s64 = r11.s64 + 128;
	// bl 0x821887c0
	sub_821887C0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821945D4"))) PPC_WEAK_FUNC(sub_821945D4);
PPC_FUNC_IMPL(__imp__sub_821945D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r3,r11,352
	ctx.r3.s64 = r11.s64 + 352;
	// bl 0x8269a918
	sub_8269A918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194600"))) PPC_WEAK_FUNC(sub_82194600);
PPC_FUNC_IMPL(__imp__sub_82194600) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r26{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,23568(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23568);
	// mflr r12
	// bl 0x8239bcf0
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d5e8
	// addi r31,r1,-640
	r31.s64 = ctx.r1.s64 + -640;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,23548
	r11.s64 = r11.s64 + 23548;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r10,23532
	ctx.r10.s64 = ctx.r10.s64 + 23532;
	// addi r9,r9,23520
	ctx.r9.s64 = ctx.r9.s64 + 23520;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r8,r8,23504
	ctx.r8.s64 = ctx.r8.s64 + 23504;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x8219bcf8
	sub_8219BCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82194450
	sub_82194450(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821946a4
	if (cr0.eq) goto loc_821946A4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82192ad8
	sub_82192AD8(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82129420
	sub_82129420(ctx, base);
loc_821946A4:
	// lfs f31,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	f31.f64 = double(temp.f32);
	// lfs f0,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82194770
	if (!cr6.lt) goto loc_82194770;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f30,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lfs f29,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f29.f64 = double(temp.f32);
loc_821946C4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82192ad8
	sub_82192AD8(ctx, base);
	// li r28,0
	r28.s64 = 0;
loc_821946D8:
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82193068
	sub_82193068(ctx, base);
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x82194754
	if (!cr6.lt) goto loc_82194754;
	// li r30,0
	r30.s64 = 0;
loc_821946F8:
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82193068
	sub_82193068(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// stfs f30,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8226ac18
	sub_8226AC18(ctx, base);
	// lfs f13,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,160(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,168(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f11
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82194748
	if (!cr6.lt) goto loc_82194748;
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
loc_82194748:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// blt cr6,0x821946f8
	if (cr6.lt) goto loc_821946F8;
loc_82194754:
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x821946d8
	if (cr6.lt) goto loc_821946D8;
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f28.f64));
	// lfs f0,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x821946c4
	if (cr6.lt) goto loc_821946C4;
loc_82194770:
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82189880
	sub_82189880(ctx, base);
	// addi r1,r31,640
	ctx.r1.s64 = r31.s64 + 640;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d634
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82194608"))) PPC_WEAK_FUNC(sub_82194608);
PPC_FUNC_IMPL(__imp__sub_82194608) {
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
	PPCRegister f0{};
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
	// bl 0x8239d5e8
	// addi r31,r1,-640
	r31.s64 = ctx.r1.s64 + -640;
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,23548
	r11.s64 = r11.s64 + 23548;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r10,r10,23532
	ctx.r10.s64 = ctx.r10.s64 + 23532;
	// addi r9,r9,23520
	ctx.r9.s64 = ctx.r9.s64 + 23520;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r8,r8,23504
	ctx.r8.s64 = ctx.r8.s64 + 23504;
	// li r11,0
	r11.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// stw r9,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r9.u32);
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x8219bcf8
	sub_8219BCF8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82194450
	sub_82194450(ctx, base);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821946a4
	if (cr0.eq) goto loc_821946A4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lfs f1,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82192ad8
	sub_82192AD8(ctx, base);
	// addi r4,r31,176
	ctx.r4.s64 = r31.s64 + 176;
	// addi r3,r31,240
	ctx.r3.s64 = r31.s64 + 240;
	// bl 0x82129420
	sub_82129420(ctx, base);
loc_821946A4:
	// lfs f31,24(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 24);
	f31.f64 = double(temp.f32);
	// lfs f0,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82194770
	if (!cr6.lt) goto loc_82194770;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f30,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lfs f29,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f29.f64 = double(temp.f32);
loc_821946C4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82192ad8
	sub_82192AD8(ctx, base);
	// li r28,0
	r28.s64 = 0;
loc_821946D8:
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82193068
	sub_82193068(ctx, base);
	// lfs f0,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bge cr6,0x82194754
	if (!cr6.lt) goto loc_82194754;
	// li r30,0
	r30.s64 = 0;
loc_821946F8:
	// addi r5,r31,112
	ctx.r5.s64 = r31.s64 + 112;
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82193068
	sub_82193068(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// stfs f30,168(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 168, temp.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8226ac18
	sub_8226AC18(ctx, base);
	// lfs f13,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f13,f13
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lfs f0,160(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f0.f64 = double(temp.f32);
	// lfs f13,168(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f0,f0,f11
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f11.f64));
	// fmadds f0,f13,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// fcmpu cr6,f12,f0
	cr6.compare(ctx.f12.f64, f0.f64);
	// bge cr6,0x82194748
	if (!cr6.lt) goto loc_82194748;
	// stfs f0,0(r27)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
loc_82194748:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// blt cr6,0x821946f8
	if (cr6.lt) goto loc_821946F8;
loc_82194754:
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x821946d8
	if (cr6.lt) goto loc_821946D8;
	// fadds f31,f31,f28
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f28.f64));
	// lfs f0,28(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x821946c4
	if (cr6.lt) goto loc_821946C4;
loc_82194770:
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82189880
	sub_82189880(ctx, base);
	// addi r1,r31,640
	ctx.r1.s64 = r31.s64 + 640;
	// addi r12,r1,-56
	r12.s64 = ctx.r1.s64 + -56;
	// bl 0x8239d634
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82194788"))) PPC_WEAK_FUNC(sub_82194788);
PPC_FUNC_IMPL(__imp__sub_82194788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-640
	r31.s64 = r12.s64 + -640;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,176
	ctx.r3.s64 = r31.s64 + 176;
	// bl 0x82189880
	sub_82189880(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821947B0"))) PPC_WEAK_FUNC(sub_821947B0);
PPC_FUNC_IMPL(__imp__sub_821947B0) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x821947f4
	if (cr6.eq) goto loc_821947F4;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x821947e4
	if (cr0.eq) goto loc_821947E4;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_821947E4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x82194810
	goto loc_82194810;
loc_821947F4:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821940b0
	sub_821940B0(ctx, base);
loc_82194810:
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

__attribute__((alias("__imp__sub_82194824"))) PPC_WEAK_FUNC(sub_82194824);
PPC_FUNC_IMPL(__imp__sub_82194824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194828"))) PPC_WEAK_FUNC(sub_82194828);
PPC_FUNC_IMPL(__imp__sub_82194828) {
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
	// lwz r16,23640(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23640);
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
	// li r11,0
	r11.s64 = 0;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// stw r4,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r4.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x821527b8
	sub_821527B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821948cc
	if (cr6.eq) goto loc_821948CC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r10,-21088
	r28.s64 = ctx.r10.s64 + -21088;
loc_82194884:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x821948b8
	if (!cr0.eq) goto loc_821948B8;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,28
	ctx.r4.s64 = r11.s64 + 28;
	// bl 0x821947b0
	sub_821947B0(ctx, base);
loc_821948B8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82152838
	sub_82152838(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82194884
	if (!cr6.eq) goto loc_82194884;
loc_821948CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82194830"))) PPC_WEAK_FUNC(sub_82194830);
PPC_FUNC_IMPL(__imp__sub_82194830) {
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
	// li r11,0
	r11.s64 = 0;
	// addi r30,r29,4
	r30.s64 = r29.s64 + 4;
	// stw r4,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r4.u32);
	// stw r29,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r29.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x821527b8
	sub_821527B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821948cc
	if (cr6.eq) goto loc_821948CC;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r10,-21088
	r28.s64 = ctx.r10.s64 + -21088;
loc_82194884:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r5,5
	ctx.r5.s64 = 5;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x821948b8
	if (!cr0.eq) goto loc_821948B8;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,28
	ctx.r4.s64 = r11.s64 + 28;
	// bl 0x821947b0
	sub_821947B0(ctx, base);
loc_821948B8:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82152838
	sub_82152838(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82194884
	if (!cr6.eq) goto loc_82194884;
loc_821948CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821948D8"))) PPC_WEAK_FUNC(sub_821948D8);
PPC_FUNC_IMPL(__imp__sub_821948D8) {
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
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82194060
	sub_82194060(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194904"))) PPC_WEAK_FUNC(sub_82194904);
PPC_FUNC_IMPL(__imp__sub_82194904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194908"))) PPC_WEAK_FUNC(sub_82194908);
PPC_FUNC_IMPL(__imp__sub_82194908) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82194944
	if (cr6.eq) goto loc_82194944;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82193cf8
	sub_82193CF8(ctx, base);
loc_82194944:
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8239e180
	sub_8239E180(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// lfs f13,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// ble cr6,0x82194974
	if (!cr6.gt) goto loc_82194974;
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// b 0x82194978
	goto loc_82194978;
loc_82194974:
	// fsubs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 - ctx.f13.f64));
loc_82194978:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// clrlwi r28,r11,31
	r28.u64 = r11.u32 & 0x1;
	// mr r30,r28
	r30.u64 = r28.u64;
	// bl 0x8239e180
	sub_8239E180(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64));
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x821949f0
	if (!cr6.lt) goto loc_821949F0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
loc_821949AC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82192ad8
	sub_82192AD8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82193068
	sub_82193068(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821947b0
	sub_821947B0(ctx, base);
	// fadds f31,f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f31.f64 + f30.f64));
	// addi r11,r30,-1
	r11.s64 = r30.s64 + -1;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 28);
	f0.f64 = double(temp.f32);
	// clrlwi r30,r11,31
	r30.u64 = r11.u32 & 0x1;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x821949ac
	if (cr6.lt) goto loc_821949AC;
loc_821949F0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82194A04"))) PPC_WEAK_FUNC(sub_82194A04);
PPC_FUNC_IMPL(__imp__sub_82194A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194A08"))) PPC_WEAK_FUNC(sub_82194A08);
PPC_FUNC_IMPL(__imp__sub_82194A08) {
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
	// lwz r16,23712(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23712);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,10076(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,10072
	r30.s64 = ctx.r9.s64 + 10072;
	// bne 0x82194a54
	if (!cr0.eq) goto loc_82194A54;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10076, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,23688
	ctx.r4.s64 = r11.s64 + 23688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82194A54:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82194A10"))) PPC_WEAK_FUNC(sub_82194A10);
PPC_FUNC_IMPL(__imp__sub_82194A10) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,10076(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10076);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// addi r30,r9,10072
	r30.s64 = ctx.r9.s64 + 10072;
	// bne 0x82194a54
	if (!cr0.eq) goto loc_82194A54;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10076(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10076, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r4,r11,23688
	ctx.r4.s64 = r11.s64 + 23688;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_82194A54:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82194A68"))) PPC_WEAK_FUNC(sub_82194A68);
PPC_FUNC_IMPL(__imp__sub_82194A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10076
	r11.s64 = r11.s64 + 10076;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10076
	ctx.r10.s64 = ctx.r10.s64 + 10076;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194A90"))) PPC_WEAK_FUNC(sub_82194A90);
PPC_FUNC_IMPL(__imp__sub_82194A90) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r27,r28,36
	r27.s64 = r28.s64 + 36;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,224(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 224);
	f0.f64 = double(temp.f32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x82194bc8
	if (!cr6.gt) goto loc_82194BC8;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f11,56(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// lfs f10,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// stfs f0,8(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f10,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	ctx.f10.f64 = double(temp.f32);
	// lfs f6,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f9,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f10,f0
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64));
	// lfs f5,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f8,0(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f12,220(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 220);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f6,f13,f10
	ctx.f10.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f10.f64));
	// fmuls f6,f9,f13
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fmadds f10,f11,f5,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f5.f64 + ctx.f10.f64));
	// fmadds f11,f11,f8,f6
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f6.f64));
	// fmadds f0,f7,f0,f11
	f0.f64 = double(float(ctx.f7.f64 * f0.f64 + ctx.f11.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bgt cr6,0x82194b60
	if (cr6.gt) goto loc_82194B60;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82194b5c
	if (!cr6.lt) goto loc_82194B5C;
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// b 0x82194b60
	goto loc_82194B60;
loc_82194B5C:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = f0.f64;
loc_82194B60:
	// lfs f13,224(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f10,f13
	cr6.compare(ctx.f10.f64, ctx.f13.f64);
	// bgt cr6,0x82194b84
	if (cr6.gt) goto loc_82194B84;
	// fcmpu cr6,f10,f11
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x82194b80
	if (!cr6.lt) goto loc_82194B80;
	// fmr f13,f11
	ctx.f13.f64 = ctx.f11.f64;
	// b 0x82194b84
	goto loc_82194B84;
loc_82194B80:
	// fmr f13,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f10.f64;
loc_82194B84:
	// fsubs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// fmuls f12,f7,f0
	ctx.f12.f64 = double(float(ctx.f7.f64 * f0.f64));
	// stfs f12,8(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// fmuls f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 * f0.f64));
	// stfs f11,4(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f10,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f10,f13,f0
	f0.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + f0.f64));
	// stfs f0,0(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f11
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f11.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,24(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 24);
	f0.f64 = double(temp.f32);
	// fmadds f0,f0,f13,f12
	f0.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// b 0x82194c48
	goto loc_82194C48;
loc_82194BC8:
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f11,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// lfs f0,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	f0.f64 = double(float(ctx.f12.f64 - f0.f64));
	// stfs f13,0(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f11,220(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fmr f12,f13
	ctx.f12.f64 = ctx.f13.f64;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f13,f12,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fcmpu cr6,f13,f11
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82194c1c
	if (cr6.gt) goto loc_82194C1C;
	// stfs f31,8(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
	// stfs f31,4(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// stfs f31,0(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// b 0x82194c4c
	goto loc_82194C4C;
loc_82194C1C:
	// fsqrts f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// lfs f11,220(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 220);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 / ctx.f13.f64));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// fmuls f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 0, temp.u32);
	// fmuls f0,f13,f31
	f0.f64 = double(float(ctx.f13.f64 * f31.f64));
loc_82194C48:
	// stfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 8, temp.u32);
loc_82194C4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82194C58"))) PPC_WEAK_FUNC(sub_82194C58);
PPC_FUNC_IMPL(__imp__sub_82194C58) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r3,r31,36
	ctx.r3.s64 = r31.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// bl 0x822699e8
	sub_822699E8(ctx, base);
	// fsubs f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - f31.f64));
	// bl 0x82161c70
	sub_82161C70(ctx, base);
	// lfs f0,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 228);
	f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82194cac
	if (cr6.gt) goto loc_82194CAC;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82194ca8
	if (!cr6.lt) goto loc_82194CA8;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
	// b 0x82194cac
	goto loc_82194CAC;
loc_82194CA8:
	// fmr f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f1.f64;
loc_82194CAC:
	// fsubs f1,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 - f0.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194CC8"))) PPC_WEAK_FUNC(sub_82194CC8);
PPC_FUNC_IMPL(__imp__sub_82194CC8) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r11,-1439(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1439);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82194d08
	if (cr0.eq) goto loc_82194D08;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,8376
	ctx.r3.s64 = r11.s64 + 8376;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82194d10
	goto loc_82194D10;
loc_82194D08:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82194D10:
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
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

__attribute__((alias("__imp__sub_82194D2C"))) PPC_WEAK_FUNC(sub_82194D2C);
PPC_FUNC_IMPL(__imp__sub_82194D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194D30"))) PPC_WEAK_FUNC(sub_82194D30);
PPC_FUNC_IMPL(__imp__sub_82194D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,23768(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23768);
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,16424
	r11.s64 = r11.s64 + 16424;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// beq 0x82194d94
	if (cr0.eq) goto loc_82194D94;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82194D94:
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

__attribute__((alias("__imp__sub_82194D38"))) PPC_WEAK_FUNC(sub_82194D38);
PPC_FUNC_IMPL(__imp__sub_82194D38) {
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,16424
	r11.s64 = r11.s64 + 16424;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// beq 0x82194d94
	if (cr0.eq) goto loc_82194D94;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_82194D94:
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

__attribute__((alias("__imp__sub_82194DB0"))) PPC_WEAK_FUNC(sub_82194DB0);
PPC_FUNC_IMPL(__imp__sub_82194DB0) {
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
	// bl 0x82126688
	sub_82126688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194DD8"))) PPC_WEAK_FUNC(sub_82194DD8);
PPC_FUNC_IMPL(__imp__sub_82194DD8) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r11,-1439(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1439);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82194e18
	if (cr0.eq) goto loc_82194E18;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,8432
	ctx.r3.s64 = r11.s64 + 8432;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82194e20
	goto loc_82194E20;
loc_82194E18:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82194E20:
	// mulli r3,r31,12
	ctx.r3.s64 = r31.s64 * 12;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
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

__attribute__((alias("__imp__sub_82194E3C"))) PPC_WEAK_FUNC(sub_82194E3C);
PPC_FUNC_IMPL(__imp__sub_82194E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194E40"))) PPC_WEAK_FUNC(sub_82194E40);
PPC_FUNC_IMPL(__imp__sub_82194E40) {
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
	// b 0x82194e7c
	goto loc_82194E7C;
loc_82194E60:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_82194E7C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82194e60
	if (!cr6.eq) goto loc_82194E60;
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

__attribute__((alias("__imp__sub_82194E9C"))) PPC_WEAK_FUNC(sub_82194E9C);
PPC_FUNC_IMPL(__imp__sub_82194E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194EA0"))) PPC_WEAK_FUNC(sub_82194EA0);
PPC_FUNC_IMPL(__imp__sub_82194EA0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r24,12
	r24.s64 = 12;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// lwz r10,236(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r24
	r11.s32 = r11.s32 / r24.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82194fb0
	if (cr0.eq) goto loc_82194FB0;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r26,0
	r26.s64 = 0;
	// addi r28,r11,10056
	r28.s64 = r11.s64 + 10056;
	// lis r27,-32136
	r27.s64 = -2106064896;
loc_82194EE4:
	// lwz r11,236(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// lwz r10,10036(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 10036);
	// add r11,r26,r11
	r11.u64 = r26.u64 + r11.u64;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82194f90
	if (cr6.eq) goto loc_82194F90;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r3,r30,36
	ctx.r3.s64 = r30.s64 + 36;
	// stw r11,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r11.u32);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r29,36
	ctx.r3.s64 = r29.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f13,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,48(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	f0.f64 = double(temp.f32);
	// lwz r10,-8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -8);
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// lfs f12,52(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// and. r10,r11,r10
	ctx.r10.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fsqrts f0,f0
	f0.f64 = double(float(sqrt(f0.f64)));
	// beq 0x82194f78
	if (cr0.eq) goto loc_82194F78;
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// lfs f13,-12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x82194f90
	if (!cr6.lt) goto loc_82194F90;
	// stfs f0,-12(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + -12, temp.u32);
	// b 0x82194f90
	goto loc_82194F90;
loc_82194F78:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82194f90
	if (!cr0.eq) goto loc_82194F90;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fadds f1,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f0.f64 + f31.f64));
	// bl 0x82194ea0
	sub_82194EA0(ctx, base);
loc_82194F90:
	// lwz r11,240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// lwz r10,236(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// addi r26,r26,12
	r26.s64 = r26.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r24
	r11.s32 = r11.s32 / r24.s32;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// blt cr6,0x82194ee4
	if (cr6.lt) goto loc_82194EE4;
loc_82194FB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82194FBC"))) PPC_WEAK_FUNC(sub_82194FBC);
PPC_FUNC_IMPL(__imp__sub_82194FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194FC0"))) PPC_WEAK_FUNC(sub_82194FC0);
PPC_FUNC_IMPL(__imp__sub_82194FC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r11,10040(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 10040);
	// stw r9,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r9.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// stb r11,10040(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10040, r11.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82194FEC"))) PPC_WEAK_FUNC(sub_82194FEC);
PPC_FUNC_IMPL(__imp__sub_82194FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82194FF0"))) PPC_WEAK_FUNC(sub_82194FF0);
PPC_FUNC_IMPL(__imp__sub_82194FF0) {
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
	// lwz r16,23840(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23840);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-216
	ctx.r4.s64 = r29.s64 + -216;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82195070
	if (cr6.eq) goto loc_82195070;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82195108
	if (cr0.eq) goto loc_82195108;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82195068:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82195108
	goto loc_82195108;
loc_82195070:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-36
	ctx.r4.s64 = r29.s64 + -36;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821950b0
	if (cr6.eq) goto loc_821950B0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82195108
	if (cr0.eq) goto loc_82195108;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82195068
	goto loc_82195068;
loc_821950B0:
	// lwz r11,-252(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -252);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-252
	ctx.r4.s64 = r11.s64 + -252;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821950fc
	if (cr6.eq) goto loc_821950FC;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82195108
	if (cr0.eq) goto loc_82195108;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82195068
	goto loc_82195068;
loc_821950FC:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82195108:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82194FF8"))) PPC_WEAK_FUNC(sub_82194FF8);
PPC_FUNC_IMPL(__imp__sub_82194FF8) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// addi r4,r11,8
	ctx.r4.s64 = r11.s64 + 8;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-216
	ctx.r4.s64 = r29.s64 + -216;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821b3888
	sub_821B3888(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x82195070
	if (cr6.eq) goto loc_82195070;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82195108
	if (cr0.eq) goto loc_82195108;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
loc_82195068:
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82195108
	goto loc_82195108;
loc_82195070:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r29,-36
	ctx.r4.s64 = r29.s64 + -36;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b1158
	sub_821B1158(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821950b0
	if (cr6.eq) goto loc_821950B0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82195108
	if (cr0.eq) goto loc_82195108;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// b 0x82195068
	goto loc_82195068;
loc_821950B0:
	// lwz r11,-252(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -252);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r4,r11,-252
	ctx.r4.s64 = r11.s64 + -252;
	// bl 0x82316428
	sub_82316428(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// beq cr6,0x821950fc
	if (cr6.eq) goto loc_821950FC;
	// addi r4,r31,104
	ctx.r4.s64 = r31.s64 + 104;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823179e8
	sub_823179E8(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82195108
	if (cr0.eq) goto loc_82195108;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// b 0x82195068
	goto loc_82195068;
loc_821950FC:
	// li r11,6
	r11.s64 = 6;
	// stw r27,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r27.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
loc_82195108:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82195114"))) PPC_WEAK_FUNC(sub_82195114);
PPC_FUNC_IMPL(__imp__sub_82195114) {
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
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219513C"))) PPC_WEAK_FUNC(sub_8219513C);
PPC_FUNC_IMPL(__imp__sub_8219513C) {
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
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82195164"))) PPC_WEAK_FUNC(sub_82195164);
PPC_FUNC_IMPL(__imp__sub_82195164) {
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
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219518C"))) PPC_WEAK_FUNC(sub_8219518C);
PPC_FUNC_IMPL(__imp__sub_8219518C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195190"))) PPC_WEAK_FUNC(sub_82195190);
PPC_FUNC_IMPL(__imp__sub_82195190) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82194cc8
	sub_82194CC8(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821951c0
	if (cr0.eq) goto loc_821951C0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_821951C0:
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

__attribute__((alias("__imp__sub_821951D4"))) PPC_WEAK_FUNC(sub_821951D4);
PPC_FUNC_IMPL(__imp__sub_821951D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821951D8"))) PPC_WEAK_FUNC(sub_821951D8);
PPC_FUNC_IMPL(__imp__sub_821951D8) {
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
	// bl 0x82188950
	sub_82188950(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82195208
	if (cr0.eq) goto loc_82195208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82195208:
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

__attribute__((alias("__imp__sub_82195224"))) PPC_WEAK_FUNC(sub_82195224);
PPC_FUNC_IMPL(__imp__sub_82195224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195228"))) PPC_WEAK_FUNC(sub_82195228);
PPC_FUNC_IMPL(__imp__sub_82195228) {
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
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8219525c
	if (cr0.eq) goto loc_8219525C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x82195264
	goto loc_82195264;
loc_8219525C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r4,r11,9120
	ctx.r4.s64 = r11.s64 + 9120;
loc_82195264:
	// bl 0x823594a8
	sub_823594A8(ctx, base);
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

__attribute__((alias("__imp__sub_82195280"))) PPC_WEAK_FUNC(sub_82195280);
PPC_FUNC_IMPL(__imp__sub_82195280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x823595e0
	sub_823595E0(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821952f0
	if (cr0.eq) goto loc_821952F0;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x821952f0
	if (cr0.eq) goto loc_821952F0;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,5144
	r31.s64 = r11.s64 + 5144;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// bl 0x8231fac8
	sub_8231FAC8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x821952f4
	goto loc_821952F4;
loc_821952F0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_821952F4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82150070
	sub_82150070(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82195308"))) PPC_WEAK_FUNC(sub_82195308);
PPC_FUNC_IMPL(__imp__sub_82195308) {
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
	// lwz r16,23960(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 23960);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x82195378
	if (!cr6.eq) goto loc_82195378;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8219534c
	if (cr0.eq) goto loc_8219534C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8219534C:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821953b0
	if (cr0.eq) goto loc_821953B0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821953b0
	goto loc_821953B0;
loc_82195378:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,5144
	r30.s64 = r11.s64 + 5144;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82150070
	sub_82150070(ctx, base);
loc_821953B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82195310"))) PPC_WEAK_FUNC(sub_82195310);
PPC_FUNC_IMPL(__imp__sub_82195310) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x82195378
	if (!cr6.eq) goto loc_82195378;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8219534c
	if (cr0.eq) goto loc_8219534C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8219534C:
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// li r11,4
	r11.s64 = 4;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821953b0
	if (cr0.eq) goto loc_821953B0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x821953b0
	goto loc_821953B0;
loc_82195378:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,5144
	r30.s64 = r11.s64 + 5144;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r29,r11,920
	r29.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82150070
	sub_82150070(ctx, base);
loc_821953B0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821953BC"))) PPC_WEAK_FUNC(sub_821953BC);
PPC_FUNC_IMPL(__imp__sub_821953BC) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821953E4"))) PPC_WEAK_FUNC(sub_821953E4);
PPC_FUNC_IMPL(__imp__sub_821953E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821953E8"))) PPC_WEAK_FUNC(sub_821953E8);
PPC_FUNC_IMPL(__imp__sub_821953E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r16,24032(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24032);
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
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8219542c
	if (cr6.eq) goto loc_8219542C;
	// bl 0x82194d38
	sub_82194D38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8219542C:
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

__attribute__((alias("__imp__sub_821953F0"))) PPC_WEAK_FUNC(sub_821953F0);
PPC_FUNC_IMPL(__imp__sub_821953F0) {
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
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8219542c
	if (cr6.eq) goto loc_8219542C;
	// bl 0x82194d38
	sub_82194D38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_8219542C:
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

__attribute__((alias("__imp__sub_82195444"))) PPC_WEAK_FUNC(sub_82195444);
PPC_FUNC_IMPL(__imp__sub_82195444) {
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

__attribute__((alias("__imp__sub_82195470"))) PPC_WEAK_FUNC(sub_82195470);
PPC_FUNC_IMPL(__imp__sub_82195470) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// lwz r16,24088(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24088);
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
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821954b4
	if (cr6.eq) goto loc_821954B4;
	// bl 0x82194d38
	sub_82194D38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_821954B4:
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

__attribute__((alias("__imp__sub_82195478"))) PPC_WEAK_FUNC(sub_82195478);
PPC_FUNC_IMPL(__imp__sub_82195478) {
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
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821954b4
	if (cr6.eq) goto loc_821954B4;
	// bl 0x82194d38
	sub_82194D38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_821954B4:
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

__attribute__((alias("__imp__sub_821954CC"))) PPC_WEAK_FUNC(sub_821954CC);
PPC_FUNC_IMPL(__imp__sub_821954CC) {
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

__attribute__((alias("__imp__sub_821954F8"))) PPC_WEAK_FUNC(sub_821954F8);
PPC_FUNC_IMPL(__imp__sub_821954F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r10,r11,10064
	ctx.r10.s64 = r11.s64 + 10064;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8219551c
	goto loc_8219551C;
loc_82195508:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r9,216(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 216);
	// and. r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 & ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8219553c
	if (!cr0.eq) goto loc_8219553C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8219551C:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82195508
	if (!cr0.eq) goto loc_82195508;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8219553C:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82195544"))) PPC_WEAK_FUNC(sub_82195544);
PPC_FUNC_IMPL(__imp__sub_82195544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195548"))) PPC_WEAK_FUNC(sub_82195548);
PPC_FUNC_IMPL(__imp__sub_82195548) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,10064
	r30.s64 = r11.s64 + 10064;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r27,0
	r27.s64 = 0;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lfs f31,-20976(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20976);
	f31.f64 = double(temp.f32);
	// b 0x821955ec
	goto loc_821955EC;
loc_8219557C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// and. r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & r28.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821955e8
	if (cr0.eq) goto loc_821955E8;
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// lfs f13,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,56(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f10.f64));
	// lfs f11,48(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// fsubs f0,f0,f11
	f0.f64 = double(float(f0.f64 - ctx.f11.f64));
	// lfs f12,4(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,52(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f13,f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// fmadds f0,f0,f0,f13
	f0.f64 = double(float(f0.f64 * f0.f64 + ctx.f13.f64));
	// fmadds f0,f12,f12,f0
	f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bge cr6,0x821955d8
	if (!cr6.lt) goto loc_821955D8;
	// fmr f31,f0
	f31.f64 = f0.f64;
	// li r11,1
	r11.s64 = 1;
	// b 0x821955dc
	goto loc_821955DC;
loc_821955D8:
	// li r11,0
	r11.s64 = 0;
loc_821955DC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821955e8
	if (cr0.eq) goto loc_821955E8;
	// lwz r27,8(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_821955E8:
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
loc_821955EC:
	// subf r11,r31,r30
	r11.s64 = r30.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8219557c
	if (!cr0.eq) goto loc_8219557C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82195614"))) PPC_WEAK_FUNC(sub_82195614);
PPC_FUNC_IMPL(__imp__sub_82195614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195618"))) PPC_WEAK_FUNC(sub_82195618);
PPC_FUNC_IMPL(__imp__sub_82195618) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r29,r11,10064
	r29.s64 = r11.s64 + 10064;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// addi r31,r11,10056
	r31.s64 = r11.s64 + 10056;
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stfs f1,-12(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r31.u32 + -12, temp.u32);
	// stw r4,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, ctx.r4.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821956bc
	if (cr0.eq) goto loc_821956BC;
	// lis r27,-32136
	r27.s64 = -2106064896;
loc_82195674:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,216(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// and. r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8219569c
	if (cr0.eq) goto loc_8219569C;
	// lwz r11,10036(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 10036);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,10036(r27)
	PPC_STORE_U32(r27.u32 + 10036, r11.u32);
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, r11.u32);
	// bl 0x82194ea0
	sub_82194EA0(ctx, base);
loc_8219569C:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r30,r29
	r11.s64 = r29.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82195674
	if (!cr0.eq) goto loc_82195674;
	// lfs f1,-12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + -12);
	ctx.f1.f64 = double(temp.f32);
loc_821956BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_821956C8"))) PPC_WEAK_FUNC(sub_821956C8);
PPC_FUNC_IMPL(__imp__sub_821956C8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// bl 0x821954f8
	sub_821954F8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82195704
	if (!cr0.eq) goto loc_82195704;
	// li r11,0
	r11.s64 = 0;
	// b 0x82195714
	goto loc_82195714;
loc_82195704:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82195714:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82195738"))) PPC_WEAK_FUNC(sub_82195738);
PPC_FUNC_IMPL(__imp__sub_82195738) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82150450
	sub_82150450(ctx, base);
	// bl 0x821af988
	sub_821AF988(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x82195548
	sub_82195548(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82195794
	if (!cr0.eq) goto loc_82195794;
	// li r11,0
	r11.s64 = 0;
	// b 0x821957a4
	goto loc_821957A4;
loc_82195794:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821957A4:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821957BC"))) PPC_WEAK_FUNC(sub_821957BC);
PPC_FUNC_IMPL(__imp__sub_821957BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821957C0"))) PPC_WEAK_FUNC(sub_821957C0);
PPC_FUNC_IMPL(__imp__sub_821957C0) {
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
	// li r30,0
	r30.s64 = 0;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// bl 0x821506e8
	sub_821506E8(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r5,r11,10064
	ctx.r5.s64 = r11.s64 + 10064;
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x8219580c
	goto loc_8219580C;
loc_821957FC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r10,r3
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r3.u32, xer);
	// beq cr6,0x82195828
	if (cr6.eq) goto loc_82195828;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8219580C:
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x821957fc
	if (!cr0.eq) goto loc_821957FC;
	// b 0x82195840
	goto loc_82195840;
loc_82195828:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
loc_82195840:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_82195864"))) PPC_WEAK_FUNC(sub_82195864);
PPC_FUNC_IMPL(__imp__sub_82195864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195868"))) PPC_WEAK_FUNC(sub_82195868);
PPC_FUNC_IMPL(__imp__sub_82195868) {
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
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// lwz r31,0(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x82355020
	sub_82355020(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_821958BC"))) PPC_WEAK_FUNC(sub_821958BC);
PPC_FUNC_IMPL(__imp__sub_821958BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821958C0"))) PPC_WEAK_FUNC(sub_821958C0);
PPC_FUNC_IMPL(__imp__sub_821958C0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82195190
	sub_82195190(ctx, base);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_82195924"))) PPC_WEAK_FUNC(sub_82195924);
PPC_FUNC_IMPL(__imp__sub_82195924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195928"))) PPC_WEAK_FUNC(sub_82195928);
PPC_FUNC_IMPL(__imp__sub_82195928) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82195958
	goto loc_82195958;
loc_82195948:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82195958:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82195948
	if (!cr6.eq) goto loc_82195948;
	// stw r30,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r30.u32);
	// stw r30,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_82195980"))) PPC_WEAK_FUNC(sub_82195980);
PPC_FUNC_IMPL(__imp__sub_82195980) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,24144(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24144);
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82194d38
	sub_82194D38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82188950
	sub_82188950(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82195988"))) PPC_WEAK_FUNC(sub_82195988);
PPC_FUNC_IMPL(__imp__sub_82195988) {
	PPC_FUNC_PROLOGUE();
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
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82194d38
	sub_82194D38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82188950
	sub_82188950(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821959E0"))) PPC_WEAK_FUNC(sub_821959E0);
PPC_FUNC_IMPL(__imp__sub_821959E0) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82188a40
	sub_82188A40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82195A08"))) PPC_WEAK_FUNC(sub_82195A08);
PPC_FUNC_IMPL(__imp__sub_82195A08) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82195a54
	goto loc_82195A54;
loc_82195A48:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82195228
	sub_82195228(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_82195A54:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82195a48
	if (!cr6.eq) goto loc_82195A48;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82195A6C"))) PPC_WEAK_FUNC(sub_82195A6C);
PPC_FUNC_IMPL(__imp__sub_82195A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195A70"))) PPC_WEAK_FUNC(sub_82195A70);
PPC_FUNC_IMPL(__imp__sub_82195A70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,24260(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24260);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
loc_82195AA4:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82195acc
	if (cr6.eq) goto loc_82195ACC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82195478
	sub_82195478(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// b 0x82195aa4
	goto loc_82195AA4;
loc_82195ACC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82195A78"))) PPC_WEAK_FUNC(sub_82195A78);
PPC_FUNC_IMPL(__imp__sub_82195A78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
loc_82195AA4:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82195acc
	if (cr6.eq) goto loc_82195ACC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82195478
	sub_82195478(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// b 0x82195aa4
	goto loc_82195AA4;
loc_82195ACC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82195AD8"))) PPC_WEAK_FUNC(sub_82195AD8);
PPC_FUNC_IMPL(__imp__sub_82195AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24260(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24260);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195AE0"))) PPC_WEAK_FUNC(sub_82195AE0);
PPC_FUNC_IMPL(__imp__sub_82195AE0) {
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
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82195B10"))) PPC_WEAK_FUNC(sub_82195B10);
PPC_FUNC_IMPL(__imp__sub_82195B10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,24364(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24364);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_82195B44:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82195b6c
	if (cr6.eq) goto loc_82195B6C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82195478
	sub_82195478(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// b 0x82195b44
	goto loc_82195B44;
loc_82195B6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82195B18"))) PPC_WEAK_FUNC(sub_82195B18);
PPC_FUNC_IMPL(__imp__sub_82195B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r3,148(r31)
	PPC_STORE_U32(r31.u32 + 148, ctx.r3.u32);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
loc_82195B44:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82195b6c
	if (cr6.eq) goto loc_82195B6C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82195478
	sub_82195478(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// b 0x82195b44
	goto loc_82195B44;
loc_82195B6C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82195B78"))) PPC_WEAK_FUNC(sub_82195B78);
PPC_FUNC_IMPL(__imp__sub_82195B78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24364(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24364);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195B80"))) PPC_WEAK_FUNC(sub_82195B80);
PPC_FUNC_IMPL(__imp__sub_82195B80) {
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
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82195BB0"))) PPC_WEAK_FUNC(sub_82195BB0);
PPC_FUNC_IMPL(__imp__sub_82195BB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// lwz r16,24468(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24468);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
loc_82195BE4:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82195c0c
	if (cr6.eq) goto loc_82195C0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82195478
	sub_82195478(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// b 0x82195be4
	goto loc_82195BE4;
loc_82195C0C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82195BB8"))) PPC_WEAK_FUNC(sub_82195BB8);
PPC_FUNC_IMPL(__imp__sub_82195BB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r5,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r5.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
loc_82195BE4:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x82195c0c
	if (cr6.eq) goto loc_82195C0C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82195478
	sub_82195478(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// b 0x82195be4
	goto loc_82195BE4;
loc_82195C0C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82195C18"))) PPC_WEAK_FUNC(sub_82195C18);
PPC_FUNC_IMPL(__imp__sub_82195C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24468(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24468);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195C20"))) PPC_WEAK_FUNC(sub_82195C20);
PPC_FUNC_IMPL(__imp__sub_82195C20) {
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
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82195C50"))) PPC_WEAK_FUNC(sub_82195C50);
PPC_FUNC_IMPL(__imp__sub_82195C50) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	r11.s64 = 3;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = r11.s64 + -252;
	// bl 0x82314ff8
	sub_82314FF8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-216
	ctx.r3.s64 = r30.s64 + -216;
	// bl 0x821b2a18
	sub_821B2A18(ctx, base);
	// addi r29,r30,-36
	r29.s64 = r30.s64 + -36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821afb80
	sub_821AFB80(ctx, base);
	// lwz r11,-40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -40);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82195a08
	sub_82195A08(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 0);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -32);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,-28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + -28);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82359440
	sub_82359440(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82195D24"))) PPC_WEAK_FUNC(sub_82195D24);
PPC_FUNC_IMPL(__imp__sub_82195D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195D28"))) PPC_WEAK_FUNC(sub_82195D28);
PPC_FUNC_IMPL(__imp__sub_82195D28) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r11,r30,12
	r11.s64 = r30.s64 + 12;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82195d78
	if (cr6.eq) goto loc_82195D78;
	// li r9,12
	ctx.r9.s64 = 12;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// divw. r31,r11,r9
	r31.s32 = r11.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// ble 0x82195d78
	if (!cr0.gt) goto loc_82195D78;
loc_82195D60:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// bgt 0x82195d60
	if (cr0.gt) goto loc_82195D60;
loc_82195D78:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-12
	ctx.r3.s64 = r11.s64 + -12;
	// stw r3,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
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

__attribute__((alias("__imp__sub_82195DA4"))) PPC_WEAK_FUNC(sub_82195DA4);
PPC_FUNC_IMPL(__imp__sub_82195DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195DA8"))) PPC_WEAK_FUNC(sub_82195DA8);
PPC_FUNC_IMPL(__imp__sub_82195DA8) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,12
	r11.s64 = 12;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r27
	r31.u64 = r27.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw. r30,r10,r11
	r30.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82195df4
	if (!cr0.gt) goto loc_82195DF4;
	// addi r29,r5,8
	r29.s64 = ctx.r5.s64 + 8;
loc_82195DD8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// bgt 0x82195dd8
	if (cr0.gt) goto loc_82195DD8;
loc_82195DF4:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82195E14"))) PPC_WEAK_FUNC(sub_82195E14);
PPC_FUNC_IMPL(__imp__sub_82195E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195E18"))) PPC_WEAK_FUNC(sub_82195E18);
PPC_FUNC_IMPL(__imp__sub_82195E18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24528(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24528);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x82195e5c
	if (cr6.lt) goto loc_82195E5C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82195e60
	if (cr6.lt) goto loc_82195E60;
loc_82195E5C:
	// li r11,0
	r11.s64 = 0;
loc_82195E60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82195eb0
	if (cr0.eq) goto loc_82195EB0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82194d38
	sub_82194D38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82195e20
	sub_82195E20(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82188950
	sub_82188950(ctx, base);
	// b 0x82195f9c
	goto loc_82195F9C;
loc_82195EB0:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r25,12
	r25.s64 = 12;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// divw r26,r11,r25
	r26.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// ble cr6,0x82195f48
	if (!cr6.gt) goto loc_82195F48;
	// mulli r26,r27,12
	r26.s64 = r27.s64 * 12;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82195bb8
	sub_82195BB8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// divw. r29,r11,r25
	r29.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82195f1c
	if (!cr0.gt) goto loc_82195F1C;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
loc_82195F00:
	// addi r27,r27,-12
	r27.s64 = r27.s64 + -12;
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x82195f00
	if (cr0.gt) goto loc_82195F00;
loc_82195F1C:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x82195f9c
	if (cr6.eq) goto loc_82195F9C;
loc_82195F2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82195f2c
	if (!cr6.eq) goto loc_82195F2C;
	// b 0x82195f9c
	goto loc_82195F9C;
loc_82195F48:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r4,r26,r27
	ctx.r4.s64 = r27.s64 - r26.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82195b18
	sub_82195B18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// bl 0x82195bb8
	sub_82195BB8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r26,12
	r11.s64 = r26.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x82195f94
	goto loc_82195F94;
loc_82195F84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
loc_82195F94:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82195f84
	if (!cr6.eq) goto loc_82195F84;
loc_82195F9C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82195E20"))) PPC_WEAK_FUNC(sub_82195E20);
PPC_FUNC_IMPL(__imp__sub_82195E20) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x82195e5c
	if (cr6.lt) goto loc_82195E5C;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82195e60
	if (cr6.lt) goto loc_82195E60;
loc_82195E5C:
	// li r11,0
	r11.s64 = 0;
loc_82195E60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82195eb0
	if (cr0.eq) goto loc_82195EB0;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82194d38
	sub_82194D38(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x82195e20
	sub_82195E20(ctx, base);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82188950
	sub_82188950(ctx, base);
	// b 0x82195f9c
	goto loc_82195F9C;
loc_82195EB0:
	// lwz r30,4(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r25,12
	r25.s64 = 12;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// divw r26,r11,r25
	r26.s32 = r11.s32 / r25.s32;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// ble cr6,0x82195f48
	if (!cr6.gt) goto loc_82195F48;
	// mulli r26,r27,12
	r26.s64 = r27.s64 * 12;
	// subf r27,r26,r30
	r27.s64 = r30.s64 - r26.s64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82195bb8
	sub_82195BB8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// divw. r29,r11,r25
	r29.s32 = r11.s32 / r25.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82195f1c
	if (!cr0.gt) goto loc_82195F1C;
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
loc_82195F00:
	// addi r27,r27,-12
	r27.s64 = r27.s64 + -12;
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x82195f00
	if (cr0.gt) goto loc_82195F00;
loc_82195F1C:
	// add r29,r26,r28
	r29.u64 = r26.u64 + r28.u64;
	// mr r30,r28
	r30.u64 = r28.u64;
	// cmplw cr6,r28,r29
	cr6.compare<uint32_t>(r28.u32, r29.u32, xer);
	// beq cr6,0x82195f9c
	if (cr6.eq) goto loc_82195F9C;
loc_82195F2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x82195f2c
	if (!cr6.eq) goto loc_82195F2C;
	// b 0x82195f9c
	goto loc_82195F9C;
loc_82195F48:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// subf r4,r26,r27
	ctx.r4.s64 = r27.s64 - r26.s64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82195b18
	sub_82195B18(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r5,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r5.u32);
	// bl 0x82195bb8
	sub_82195BB8(ctx, base);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r26,12
	r11.s64 = r26.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// b 0x82195f94
	goto loc_82195F94;
loc_82195F84:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
loc_82195F94:
	// cmplw cr6,r28,r30
	cr6.compare<uint32_t>(r28.u32, r30.u32, xer);
	// bne cr6,0x82195f84
	if (!cr6.eq) goto loc_82195F84;
loc_82195F9C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82195FA4"))) PPC_WEAK_FUNC(sub_82195FA4);
PPC_FUNC_IMPL(__imp__sub_82195FA4) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82188a40
	sub_82188A40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82195FCC"))) PPC_WEAK_FUNC(sub_82195FCC);
PPC_FUNC_IMPL(__imp__sub_82195FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82195FD0"))) PPC_WEAK_FUNC(sub_82195FD0);
PPC_FUNC_IMPL(__imp__sub_82195FD0) {
	PPC_FUNC_PROLOGUE();
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x8218a070
	sub_8218A070(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82196010"))) PPC_WEAK_FUNC(sub_82196010);
PPC_FUNC_IMPL(__imp__sub_82196010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
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
	// lwz r16,24660(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24660);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82194dd8
	sub_82194DD8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82195a78
	sub_82195A78(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82196018"))) PPC_WEAK_FUNC(sub_82196018);
PPC_FUNC_IMPL(__imp__sub_82196018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r0{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r4,156(r31)
	PPC_STORE_U32(r31.u32 + 156, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// bl 0x82194dd8
	sub_82194DD8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82195a78
	sub_82195A78(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82196074"))) PPC_WEAK_FUNC(sub_82196074);
PPC_FUNC_IMPL(__imp__sub_82196074) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,24660(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24660);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
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
	// b 0x821960f0
	goto loc_821960F0;
loc_821960C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-12
	ctx.r3.s64 = r11.s64 + -12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_821960F0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821960c8
	if (!cr0.eq) goto loc_821960C8;
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

__attribute__((alias("__imp__sub_8219607C"))) PPC_WEAK_FUNC(sub_8219607C);
PPC_FUNC_IMPL(__imp__sub_8219607C) {
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_821960A8"))) PPC_WEAK_FUNC(sub_821960A8);
PPC_FUNC_IMPL(__imp__sub_821960A8) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x821960f0
	goto loc_821960F0;
loc_821960C8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-12
	ctx.r3.s64 = r11.s64 + -12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_821960F0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821960c8
	if (!cr0.eq) goto loc_821960C8;
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

__attribute__((alias("__imp__sub_82196128"))) PPC_WEAK_FUNC(sub_82196128);
PPC_FUNC_IMPL(__imp__sub_82196128) {
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
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,10064
	ctx.r10.s64 = r11.s64 + 10064;
	// lwz r27,0(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r11,r27
	r11.u64 = r27.u64;
	// b 0x82196154
	goto loc_82196154;
loc_8219614C:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82196154:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x8219614c
	if (!cr0.eq) goto loc_8219614C;
	// addic. r26,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	r26.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ble 0x82196208
	if (!cr0.gt) goto loc_82196208;
loc_82196174:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r30,r27
	r30.u64 = r27.u64;
	// bl 0x8226dcb8
	sub_8226DCB8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82196198
	if (!cr0.gt) goto loc_82196198;
loc_8219618C:
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x8219618c
	if (cr0.gt) goto loc_8219618C;
loc_82196198:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r11,8(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// li r31,0
	r31.s64 = 0;
	// stw r9,8(r27)
	PPC_STORE_U32(r27.u32 + 8, ctx.r9.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// lwz r30,8(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// lwz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divw. r29,r11,r10
	r29.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x821961fc
	if (!cr0.gt) goto loc_821961FC;
	// li r28,0
	r28.s64 = 0;
loc_821961CC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8226dcb8
	sub_8226DCB8(ctx, base);
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x82195988
	sub_82195988(ctx, base);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmpw cr6,r31,r29
	cr6.compare<int32_t>(r31.s32, r29.s32, xer);
	// blt cr6,0x821961cc
	if (cr6.lt) goto loc_821961CC;
loc_821961FC:
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// bgt 0x82196174
	if (cr0.gt) goto loc_82196174;
loc_82196208:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82196210"))) PPC_WEAK_FUNC(sub_82196210);
PPC_FUNC_IMPL(__imp__sub_82196210) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82196258
	if (cr6.eq) goto loc_82196258;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82196250
	if (cr0.eq) goto loc_82196250;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x82196254
	goto loc_82196254;
loc_82196250:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82196254:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82196258:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82196264"))) PPC_WEAK_FUNC(sub_82196264);
PPC_FUNC_IMPL(__imp__sub_82196264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196268"))) PPC_WEAK_FUNC(sub_82196268);
PPC_FUNC_IMPL(__imp__sub_82196268) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r3,r31,-36
	ctx.r3.s64 = r31.s64 + -36;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// bl 0x821b0888
	sub_821B0888(ctx, base);
	// addi r31,r31,-20
	r31.s64 = r31.s64 + -20;
	// li r23,12
	r23.s64 = 12;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw. r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82196354
	if (cr0.eq) goto loc_82196354;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r11,920
	r26.s64 = r11.s64 + 920;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r25,r11,5144
	r25.s64 = r11.s64 + 5144;
loc_821962BC:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821962e0
	if (cr0.eq) goto loc_821962E0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_821962E0:
	// cmplw cr6,r11,r24
	cr6.compare<uint32_t>(r11.u32, r24.u32, xer);
	// bne cr6,0x8219630c
	if (!cr6.eq) goto loc_8219630C;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r30,r29
	ctx.r3.u64 = r30.u64 + r29.u64;
	// bl 0x82150070
	sub_82150070(ctx, base);
loc_8219630C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82196334
	if (!cr6.eq) goto loc_82196334;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82195d28
	sub_82195D28(ctx, base);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
loc_82196334:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r23
	r11.s32 = r11.s32 / r23.s32;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x821962bc
	if (cr6.lt) goto loc_821962BC;
loc_82196354:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_8219635C"))) PPC_WEAK_FUNC(sub_8219635C);
PPC_FUNC_IMPL(__imp__sub_8219635C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196360"))) PPC_WEAK_FUNC(sub_82196360);
PPC_FUNC_IMPL(__imp__sub_82196360) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x821960a8
	sub_821960A8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,12
	r11.s64 = 12;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
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

__attribute__((alias("__imp__sub_821963C4"))) PPC_WEAK_FUNC(sub_821963C4);
PPC_FUNC_IMPL(__imp__sub_821963C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821963C8"))) PPC_WEAK_FUNC(sub_821963C8);
PPC_FUNC_IMPL(__imp__sub_821963C8) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x821960a8
	sub_821960A8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,12
	r11.s64 = 12;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
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

__attribute__((alias("__imp__sub_8219642C"))) PPC_WEAK_FUNC(sub_8219642C);
PPC_FUNC_IMPL(__imp__sub_8219642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196430"))) PPC_WEAK_FUNC(sub_82196430);
PPC_FUNC_IMPL(__imp__sub_82196430) {
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
	// lis r23,-32136
	r23.s64 = -2106064896;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r11,10060(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 10060);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8219645c
	if (!cr6.eq) goto loc_8219645C;
loc_82196454:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82196508
	goto loc_82196508;
loc_8219645C:
	// lis r28,-32136
	r28.s64 = -2106064896;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r27,0
	r27.s64 = 0;
	// lwz r11,10036(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 10036);
	// stw r11,232(r31)
	PPC_STORE_U32(r31.u32 + 232, r11.u32);
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// lwz r9,236(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// divw. r26,r11,r10
	r26.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ble 0x82196504
	if (!cr0.gt) goto loc_82196504;
	// li r29,0
	r29.s64 = 0;
	// lis r24,-32136
	r24.s64 = -2106064896;
loc_8219648C:
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r10,10036(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 10036);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r30,8(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x821964f4
	if (cr6.eq) goto loc_821964F4;
	// lwz r11,10060(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 10060);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x821964c8
	if (cr6.eq) goto loc_821964C8;
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// lwz r10,10052(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 10052);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821964f4
	if (!cr0.eq) goto loc_821964F4;
loc_821964C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x8218b3a0
	sub_8218B3A0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82196430
	sub_82196430(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82196454
	if (!cr0.eq) goto loc_82196454;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_821964F4:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmpw cr6,r27,r26
	cr6.compare<int32_t>(r27.s32, r26.s32, xer);
	// blt cr6,0x8219648c
	if (cr6.lt) goto loc_8219648C;
loc_82196504:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82196508:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82196510"))) PPC_WEAK_FUNC(sub_82196510);
PPC_FUNC_IMPL(__imp__sub_82196510) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,24720(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24720);
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x821960a8
	sub_821960A8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8219657c
	if (cr0.eq) goto loc_8219657C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8219657C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_82196518"))) PPC_WEAK_FUNC(sub_82196518);
PPC_FUNC_IMPL(__imp__sub_82196518) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// bl 0x821960a8
	sub_821960A8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8219657c
	if (cr0.eq) goto loc_8219657C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,12
	ctx.r10.s64 = 12;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_8219657C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
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

__attribute__((alias("__imp__sub_82196594"))) PPC_WEAK_FUNC(sub_82196594);
PPC_FUNC_IMPL(__imp__sub_82196594) {
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
	// bl 0x8213a768
	sub_8213A768(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821965BC"))) PPC_WEAK_FUNC(sub_821965BC);
PPC_FUNC_IMPL(__imp__sub_821965BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821965C0"))) PPC_WEAK_FUNC(sub_821965C0);
PPC_FUNC_IMPL(__imp__sub_821965C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x82196678
	if (!cr6.lt) goto loc_82196678;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8219660c
	if (!cr6.gt) goto loc_8219660C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_8219660C:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r27,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r27.s64 = r11.s32 >> 2;
	// beq cr6,0x8219664c
	if (cr6.eq) goto loc_8219664C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82195fd0
	sub_82195FD0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x8219665c
	goto loc_8219665C;
loc_8219664C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8218a070
	sub_8218A070(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_8219665C:
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_82196678:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82196680"))) PPC_WEAK_FUNC(sub_82196680);
PPC_FUNC_IMPL(__imp__sub_82196680) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// beq cr6,0x821967b8
	if (cr6.eq) goto loc_821967B8;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r30,12
	r30.s64 = 12;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r25,r9,r30
	r25.s32 = ctx.r9.s32 / r30.s32;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// ble cr6,0x821966f0
	if (!cr6.gt) goto loc_821966F0;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82196018
	sub_82196018(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82196360
	sub_82196360(ctx, base);
	// mulli r11,r25,12
	r11.s64 = r25.s64 * 12;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x821967a8
	goto loc_821967A8;
loc_821966F0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// divw r10,r10,r30
	ctx.r10.s32 = ctx.r10.s32 / r30.s32;
	// cmplw cr6,r10,r25
	cr6.compare<uint32_t>(ctx.r10.u32, r25.u32, xer);
	// blt cr6,0x82196748
	if (cr6.lt) goto loc_82196748;
	// mr r29,r11
	r29.u64 = r11.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw. r30,r11,r30
	r30.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82196734
	if (!cr0.gt) goto loc_82196734;
	// addi r28,r5,8
	r28.s64 = ctx.r5.s64 + 8;
loc_82196718:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// bgt 0x82196718
	if (cr0.gt) goto loc_82196718;
loc_82196734:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// b 0x821967a8
	goto loc_821967A8;
loc_82196748:
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// mr r28,r11
	r28.u64 = r11.u64;
	// subf r11,r5,r10
	r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// divw. r29,r11,r30
	r29.s32 = r11.s32 / r30.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// ble 0x82196780
	if (!cr0.gt) goto loc_82196780;
	// addi r26,r5,8
	r26.s64 = ctx.r5.s64 + 8;
loc_82196764:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r26,r26,12
	r26.s64 = r26.s64 + 12;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// bgt 0x82196764
	if (cr0.gt) goto loc_82196764;
loc_82196780:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// divw r11,r11,r30
	r11.s32 = r11.s32 / r30.s32;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82195a78
	sub_82195A78(ctx, base);
loc_821967A8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r25,12
	r11.s64 = r25.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_821967B8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_821967C4"))) PPC_WEAK_FUNC(sub_821967C4);
PPC_FUNC_IMPL(__imp__sub_821967C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821967C8"))) PPC_WEAK_FUNC(sub_821967C8);
PPC_FUNC_IMPL(__imp__sub_821967C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,24828(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24828);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82196828
	if (cr6.lt) goto loc_82196828;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82196828:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x82194dd8
	sub_82194DD8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82195bb8
	sub_82195BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x82196890
	if (!cr6.eq) goto loc_82196890;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821953f0
	sub_821953F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// b 0x821968a8
	goto loc_821968A8;
loc_82196890:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82195b18
	sub_82195B18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821968A8:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821968d0
	if (!cr0.eq) goto loc_821968D0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82195bb8
	sub_82195BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821968D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821963c8
	sub_821963C8(ctx, base);
	// mulli r11,r24,12
	r11.s64 = r24.s64 * 12;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821967D0"))) PPC_WEAK_FUNC(sub_821967D0);
PPC_FUNC_IMPL(__imp__sub_821967D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bce0
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r27,244(r31)
	PPC_STORE_U32(r31.u32 + 244, r27.u32);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r10,r31,244
	ctx.r10.s64 = r31.s64 + 244;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// blt cr6,0x82196828
	if (cr6.lt) goto loc_82196828;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82196828:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r24,r10,r11
	r24.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r24,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r24.u32);
	// bl 0x82194dd8
	sub_82194DD8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82195bb8
	sub_82195BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x82196890
	if (!cr6.eq) goto loc_82196890;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x821953f0
	sub_821953F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// b 0x821968a8
	goto loc_821968A8;
loc_82196890:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82195b18
	sub_82195B18(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821968A8:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x821968d0
	if (!cr0.eq) goto loc_821968D0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82195bb8
	sub_82195BB8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_821968D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821963c8
	sub_821963C8(ctx, base);
	// mulli r11,r24,12
	r11.s64 = r24.s64 * 12;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_821968F4"))) PPC_WEAK_FUNC(sub_821968F4);
PPC_FUNC_IMPL(__imp__sub_821968F4) {
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
	// lwz r16,24828(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24828);
	// addi r31,r12,-192
	r31.s64 = r12.s64 + -192;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_821968FC"))) PPC_WEAK_FUNC(sub_821968FC);
PPC_FUNC_IMPL(__imp__sub_821968FC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
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
	// lwz r30,88(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82194e40
	sub_82194E40(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,12
	ctx.r3.s64 = r11.s64 * 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82196940"))) PPC_WEAK_FUNC(sub_82196940);
PPC_FUNC_IMPL(__imp__sub_82196940) {
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
	// lis r9,-32136
	ctx.r9.s64 = -2106064896;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// addi r29,r9,10052
	r29.s64 = ctx.r9.s64 + 10052;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,-4(r29)
	PPC_STORE_U32(r29.u32 + -4, r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// bl 0x82196210
	sub_82196210(ctx, base);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,10064
	r30.s64 = r11.s64 + 10064;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82196998
	goto loc_82196998;
loc_82196990:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82196998:
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82196990
	if (!cr0.eq) goto loc_82196990;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821965c0
	sub_821965C0(ctx, base);
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82196a58
	if (cr0.eq) goto loc_82196A58;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lis r25,-32136
	r25.s64 = -2106064896;
loc_821969DC:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r9,-4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// stw r11,10060(r25)
	PPC_STORE_U32(r25.u32 + 10060, r11.u32);
	// lwz r10,216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 216);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82196a1c
	if (cr0.eq) goto loc_82196A1C;
	// cmplw cr6,r11,r26
	cr6.compare<uint32_t>(r11.u32, r26.u32, xer);
	// beq cr6,0x82196a1c
	if (cr6.eq) goto loc_82196A1C;
	// lwz r11,10036(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 10036);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,10036(r27)
	PPC_STORE_U32(r27.u32 + 10036, r11.u32);
	// bl 0x82196430
	sub_82196430(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82196a3c
	if (!cr0.eq) goto loc_82196A3C;
loc_82196A1C:
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r28,r30
	r11.s64 = r30.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x821969dc
	if (!cr0.eq) goto loc_821969DC;
	// b 0x82196a58
	goto loc_82196A58;
loc_82196A3C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r30.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82370dc0
	sub_82370DC0(ctx, base);
loc_82196A58:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82196A60"))) PPC_WEAK_FUNC(sub_82196A60);
PPC_FUNC_IMPL(__imp__sub_82196A60) {
	PPC_FUNC_PROLOGUE();
	// b 0x82196518
	sub_82196518(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82196A64"))) PPC_WEAK_FUNC(sub_82196A64);
PPC_FUNC_IMPL(__imp__sub_82196A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196A68"))) PPC_WEAK_FUNC(sub_82196A68);
PPC_FUNC_IMPL(__imp__sub_82196A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,25040(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 25040);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,24988
	r11.s64 = r11.s64 + 24988;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r30,-220
	r29.s64 = r30.s64 + -220;
	// addi r10,r10,24980
	ctx.r10.s64 = ctx.r10.s64 + 24980;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-256(r30)
	PPC_STORE_U32(r30.u32 + -256, r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// addi r9,r9,24916
	ctx.r9.s64 = ctx.r9.s64 + 24916;
	// addi r8,r8,24908
	ctx.r8.s64 = ctx.r8.s64 + 24908;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-252(r11)
	PPC_STORE_U32(r11.u32 + -252, ctx.r9.u32);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-252(r11)
	PPC_STORE_U32(r11.u32 + -252, ctx.r8.u32);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-252
	ctx.r10.s64 = r11.s64 + -252;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r10.u32);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-296
	ctx.r10.s64 = r11.s64 + -296;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r10.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r4,r11,10064
	ctx.r4.s64 = r11.s64 + 10064;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82196b60
	if (cr0.eq) goto loc_82196B60;
	// addi r10,r30,-256
	ctx.r10.s64 = r30.s64 + -256;
loc_82196B24:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82196b50
	if (cr6.eq) goto loc_82196B50;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82196b24
	if (!cr0.eq) goto loc_82196B24;
	// b 0x82196b60
	goto loc_82196B60;
loc_82196B50:
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82195868
	sub_82195868(ctx, base);
loc_82196B60:
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// bl 0x82196518
	sub_82196518(ctx, base);
	// addic. r11,r30,-256
	xer.ca = r30.u32 > 255;
	r11.s64 = r30.s64 + -256;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82196b74
	if (!cr0.eq) goto loc_82196B74;
	// li r29,0
	r29.s64 = 0;
loc_82196B74:
	// addi r3,r29,184
	ctx.r3.s64 = r29.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82196A70"))) PPC_WEAK_FUNC(sub_82196A70);
PPC_FUNC_IMPL(__imp__sub_82196A70) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,24988
	r11.s64 = r11.s64 + 24988;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r29,r30,-220
	r29.s64 = r30.s64 + -220;
	// addi r10,r10,24980
	ctx.r10.s64 = ctx.r10.s64 + 24980;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,-256(r30)
	PPC_STORE_U32(r30.u32 + -256, r11.u32);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// addi r9,r9,24916
	ctx.r9.s64 = ctx.r9.s64 + 24916;
	// addi r8,r8,24908
	ctx.r8.s64 = ctx.r8.s64 + 24908;
	// stw r10,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-252(r11)
	PPC_STORE_U32(r11.u32 + -252, ctx.r9.u32);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r8,-252(r11)
	PPC_STORE_U32(r11.u32 + -252, ctx.r8.u32);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-252
	ctx.r10.s64 = r11.s64 + -252;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r10.u32);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-296
	ctx.r10.s64 = r11.s64 + -296;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-256(r11)
	PPC_STORE_U32(r11.u32 + -256, ctx.r10.u32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r4,r11,10064
	ctx.r4.s64 = r11.s64 + 10064;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82196b60
	if (cr0.eq) goto loc_82196B60;
	// addi r10,r30,-256
	ctx.r10.s64 = r30.s64 + -256;
loc_82196B24:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x82196b50
	if (cr6.eq) goto loc_82196B50;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r9,r11,r4
	ctx.r9.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x82196b24
	if (!cr0.eq) goto loc_82196B24;
	// b 0x82196b60
	goto loc_82196B60;
loc_82196B50:
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82195868
	sub_82195868(ctx, base);
loc_82196B60:
	// addi r3,r30,-20
	ctx.r3.s64 = r30.s64 + -20;
	// bl 0x82196518
	sub_82196518(ctx, base);
	// addic. r11,r30,-256
	xer.ca = r30.u32 > 255;
	r11.s64 = r30.s64 + -256;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82196b74
	if (!cr0.eq) goto loc_82196B74;
	// li r29,0
	r29.s64 = 0;
loc_82196B74:
	// addi r3,r29,184
	ctx.r3.s64 = r29.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82196B84"))) PPC_WEAK_FUNC(sub_82196B84);
PPC_FUNC_IMPL(__imp__sub_82196B84) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addic. r11,r11,-256
	xer.ca = r11.u32 > 255;
	r11.s64 = r11.s64 + -256;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82196bb4
	if (cr0.eq) goto loc_82196BB4;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,-256
	r11.s64 = r11.s64 + -256;
	// addi r11,r11,36
	r11.s64 = r11.s64 + 36;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// b 0x82196bbc
	goto loc_82196BBC;
loc_82196BB4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_82196BBC:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82196BD8"))) PPC_WEAK_FUNC(sub_82196BD8);
PPC_FUNC_IMPL(__imp__sub_82196BD8) {
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
	// addi r11,r11,-256
	r11.s64 = r11.s64 + -256;
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
	// bl 0x82196a60
	sub_82196A60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82196C08"))) PPC_WEAK_FUNC(sub_82196C08);
PPC_FUNC_IMPL(__imp__sub_82196C08) {
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
	// bl 0x82194a10
	sub_82194A10(ctx, base);
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

__attribute__((alias("__imp__sub_82196C38"))) PPC_WEAK_FUNC(sub_82196C38);
PPC_FUNC_IMPL(__imp__sub_82196C38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x8224f2c0
	sub_8224F2C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82196C44"))) PPC_WEAK_FUNC(sub_82196C44);
PPC_FUNC_IMPL(__imp__sub_82196C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196C48"))) PPC_WEAK_FUNC(sub_82196C48);
PPC_FUNC_IMPL(__imp__sub_82196C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82196c08
	sub_82196C08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82196C54"))) PPC_WEAK_FUNC(sub_82196C54);
PPC_FUNC_IMPL(__imp__sub_82196C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196C58"))) PPC_WEAK_FUNC(sub_82196C58);
PPC_FUNC_IMPL(__imp__sub_82196C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82197180
	sub_82197180(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82196C64"))) PPC_WEAK_FUNC(sub_82196C64);
PPC_FUNC_IMPL(__imp__sub_82196C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196C68"))) PPC_WEAK_FUNC(sub_82196C68);
PPC_FUNC_IMPL(__imp__sub_82196C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,25120(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 25120);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,10084(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82196cec
	if (!cr0.eq) goto loc_82196CEC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10084, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82194a10
	sub_82194A10(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// stw r3,10080(r27)
	PPC_STORE_U32(r27.u32 + 10080, ctx.r3.u32);
	// b 0x82196cf0
	goto loc_82196CF0;
loc_82196CEC:
	// lwz r3,10080(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 10080);
loc_82196CF0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82196d2c
	if (cr0.eq) goto loc_82196D2C;
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = r11.s64 + -252;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82196da8
	goto loc_82196DA8;
loc_82196D2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82196d8c
	if (!cr0.eq) goto loc_82196D8C;
	// addic. r11,r30,-256
	xer.ca = r30.u32 > 255;
	r11.s64 = r30.s64 + -256;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82196d50
	if (!cr0.eq) goto loc_82196D50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82196d60
	goto loc_82196D60;
loc_82196D50:
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = r11.s64 + -252;
loc_82196D60:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-252
	ctx.r4.s64 = r11.s64 + -252;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82196D8C:
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = r11.s64 + -252;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82196DA8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82196C70"))) PPC_WEAK_FUNC(sub_82196C70);
PPC_FUNC_IMPL(__imp__sub_82196C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r27,-32136
	r27.s64 = -2106064896;
	// lwz r11,10084(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10084);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82196cec
	if (!cr0.eq) goto loc_82196CEC;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10084(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10084, r11.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,2988
	ctx.r4.s64 = r11.s64 + 2988;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82194a10
	sub_82194A10(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,2964
	ctx.r4.s64 = r11.s64 + 2964;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d80
	sub_82270D80(ctx, base);
	// stw r3,10080(r27)
	PPC_STORE_U32(r27.u32 + 10080, ctx.r3.u32);
	// b 0x82196cf0
	goto loc_82196CF0;
loc_82196CEC:
	// lwz r3,10080(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 10080);
loc_82196CF0:
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r11,18972(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// subf r11,r26,r11
	r11.s64 = r11.s64 - r26.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82196d2c
	if (cr0.eq) goto loc_82196D2C;
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = r11.s64 + -252;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// b 0x82196da8
	goto loc_82196DA8;
loc_82196D2C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne 0x82196d8c
	if (!cr0.eq) goto loc_82196D8C;
	// addic. r11,r30,-256
	xer.ca = r30.u32 > 255;
	r11.s64 = r30.s64 + -256;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82196d50
	if (!cr0.eq) goto loc_82196D50;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82196d60
	goto loc_82196D60;
loc_82196D50:
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = r11.s64 + -252;
loc_82196D60:
	// bl 0x8231c9e0
	sub_8231C9E0(ctx, base);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r4,r11,-252
	ctx.r4.s64 = r11.s64 + -252;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
loc_82196D8C:
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = r11.s64 + -252;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_82196DA8:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82196DB4"))) PPC_WEAK_FUNC(sub_82196DB4);
PPC_FUNC_IMPL(__imp__sub_82196DB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10084
	r11.s64 = r11.s64 + 10084;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10084
	ctx.r10.s64 = ctx.r10.s64 + 10084;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82196DDC"))) PPC_WEAK_FUNC(sub_82196DDC);
PPC_FUNC_IMPL(__imp__sub_82196DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196DE0"))) PPC_WEAK_FUNC(sub_82196DE0);
PPC_FUNC_IMPL(__imp__sub_82196DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82196c70
	sub_82196C70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82196DEC"))) PPC_WEAK_FUNC(sub_82196DEC);
PPC_FUNC_IMPL(__imp__sub_82196DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196DF0"))) PPC_WEAK_FUNC(sub_82196DF0);
PPC_FUNC_IMPL(__imp__sub_82196DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// b 0x82194ff8
	sub_82194FF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82196DFC"))) PPC_WEAK_FUNC(sub_82196DFC);
PPC_FUNC_IMPL(__imp__sub_82196DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196E00"))) PPC_WEAK_FUNC(sub_82196E00);
PPC_FUNC_IMPL(__imp__sub_82196E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82195c50
	sub_82195C50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82196E0C"))) PPC_WEAK_FUNC(sub_82196E0C);
PPC_FUNC_IMPL(__imp__sub_82196E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196E10"))) PPC_WEAK_FUNC(sub_82196E10);
PPC_FUNC_IMPL(__imp__sub_82196E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82196268
	sub_82196268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82196E1C"))) PPC_WEAK_FUNC(sub_82196E1C);
PPC_FUNC_IMPL(__imp__sub_82196E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82196E20"))) PPC_WEAK_FUNC(sub_82196E20);
PPC_FUNC_IMPL(__imp__sub_82196E20) {
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
	// lwz r16,25240(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 25240);
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82196eac
	if (cr6.eq) goto loc_82196EAC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,25204
	r11.s64 = r11.s64 + 25204;
	// addi r10,r10,25192
	ctx.r10.s64 = ctx.r10.s64 + 25192;
	// addi r9,r9,25184
	ctx.r9.s64 = ctx.r9.s64 + 25184;
	// addi r3,r30,256
	ctx.r3.s64 = r30.s64 + 256;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,304(r30)
	PPC_STORE_U32(r30.u32 + 304, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,300
	r11.s64 = r30.s64 + 300;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
	// stw r8,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// addi r9,r9,5196
	ctx.r9.s64 = ctx.r9.s64 + 5196;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_82196EAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r28,r30,36
	r28.s64 = r30.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,24988
	r11.s64 = r11.s64 + 24988;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,-1472(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1472);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r8,24908
	ctx.r8.s64 = ctx.r8.s64 + 24908;
	// addi r10,r10,24980
	ctx.r10.s64 = ctx.r10.s64 + 24980;
	// lfs f0,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r30,236
	r11.s64 = r30.s64 + 236;
	// addi r9,r9,24916
	ctx.r9.s64 = ctx.r9.s64 + 24916;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-252
	ctx.r9.s64 = ctx.r10.s64 + -252;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-296
	ctx.r9.s64 = ctx.r10.s64 + -296;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// stfs f13,220(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 220, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f0,224(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 224, temp.u32);
	// stfs f0,228(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// stw r29,216(r30)
	PPC_STORE_U32(r30.u32 + 216, r29.u32);
	// stw r29,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r29.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x8226dd10
	sub_8226DD10(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lfs f0,5736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// addi r4,r11,10064
	ctx.r4.s64 = r11.s64 + 10064;
	// bge cr6,0x82196fac
	if (!cr6.lt) goto loc_82196FAC;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// b 0x82196fc0
	goto loc_82196FC0;
loc_82196FAC:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_82196FC0:
	// bl 0x821958c0
	sub_821958C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82196E28"))) PPC_WEAK_FUNC(sub_82196E28);
PPC_FUNC_IMPL(__imp__sub_82196E28) {
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// stw r30,164(r31)
	PPC_STORE_U32(r31.u32 + 164, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x82196eac
	if (cr6.eq) goto loc_82196EAC;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r11,25204
	r11.s64 = r11.s64 + 25204;
	// addi r10,r10,25192
	ctx.r10.s64 = ctx.r10.s64 + 25192;
	// addi r9,r9,25184
	ctx.r9.s64 = ctx.r9.s64 + 25184;
	// addi r3,r30,256
	ctx.r3.s64 = r30.s64 + 256;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,40(r30)
	PPC_STORE_U32(r30.u32 + 40, ctx.r10.u32);
	// stw r9,304(r30)
	PPC_STORE_U32(r30.u32 + 304, ctx.r9.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,300
	r11.s64 = r30.s64 + 300;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
	// stw r8,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r8.u32);
	// addi r9,r9,5196
	ctx.r9.s64 = ctx.r9.s64 + 5196;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
loc_82196EAC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b2dd0
	sub_821B2DD0(ctx, base);
	// addi r28,r30,36
	r28.s64 = r30.s64 + 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r11,r11,24988
	r11.s64 = r11.s64 + 24988;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lfs f13,-1472(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1472);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r8,r8,24908
	ctx.r8.s64 = ctx.r8.s64 + 24908;
	// addi r10,r10,24980
	ctx.r10.s64 = ctx.r10.s64 + 24980;
	// lfs f0,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r11,r30,236
	r11.s64 = r30.s64 + 236;
	// addi r9,r9,24916
	ctx.r9.s64 = ctx.r9.s64 + 24916;
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-252
	ctx.r9.s64 = ctx.r10.s64 + -252;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r10,-296
	ctx.r9.s64 = ctx.r10.s64 + -296;
	// stwx r9,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + r30.u32, ctx.r9.u32);
	// stfs f13,220(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 220, temp.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stfs f0,224(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 224, temp.u32);
	// stfs f0,228(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// stw r29,216(r30)
	PPC_STORE_U32(r30.u32 + 216, r29.u32);
	// stw r29,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r29.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// bl 0x8226dd10
	sub_8226DD10(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lfs f0,5736(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// addi r4,r11,10064
	ctx.r4.s64 = r11.s64 + 10064;
	// bge cr6,0x82196fac
	if (!cr6.lt) goto loc_82196FAC;
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// stw r4,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r4.u32);
	// b 0x82196fc0
	goto loc_82196FC0;
loc_82196FAC:
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
loc_82196FC0:
	// bl 0x821958c0
	sub_821958C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82196FD0"))) PPC_WEAK_FUNC(sub_82196FD0);
PPC_FUNC_IMPL(__imp__sub_82196FD0) {
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
	// beq 0x82197004
	if (cr0.eq) goto loc_82197004;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// addi r3,r11,256
	ctx.r3.s64 = r11.s64 + 256;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82197004:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82197014"))) PPC_WEAK_FUNC(sub_82197014);
PPC_FUNC_IMPL(__imp__sub_82197014) {
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
	// addi r3,r11,220
	ctx.r3.s64 = r11.s64 + 220;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82197040"))) PPC_WEAK_FUNC(sub_82197040);
PPC_FUNC_IMPL(__imp__sub_82197040) {
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
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
	// bl 0x82196a60
	sub_82196A60(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219706C"))) PPC_WEAK_FUNC(sub_8219706C);
PPC_FUNC_IMPL(__imp__sub_8219706C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197070"))) PPC_WEAK_FUNC(sub_82197070);
PPC_FUNC_IMPL(__imp__sub_82197070) {
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x821970c4
	if (cr6.eq) goto loc_821970C4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x821970b0
	if (cr6.lt) goto loc_821970B0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82195e20
	sub_82195E20(ctx, base);
	// b 0x821970c4
	goto loc_821970C4;
loc_821970B0:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x821967d0
	sub_821967D0(ctx, base);
loc_821970C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821970D4"))) PPC_WEAK_FUNC(sub_821970D4);
PPC_FUNC_IMPL(__imp__sub_821970D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821970D8"))) PPC_WEAK_FUNC(sub_821970D8);
PPC_FUNC_IMPL(__imp__sub_821970D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,25312(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 25312);
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82194a10
	sub_82194A10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82197128
	if (cr0.eq) goto loc_82197128;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82196e28
	sub_82196E28(ctx, base);
	// b 0x8219712c
	goto loc_8219712C;
loc_82197128:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219712C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82197144
	if (cr6.eq) goto loc_82197144;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82197144:
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

__attribute__((alias("__imp__sub_821970E0"))) PPC_WEAK_FUNC(sub_821970E0);
PPC_FUNC_IMPL(__imp__sub_821970E0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82194a10
	sub_82194A10(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,308
	ctx.r3.s64 = 308;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82197128
	if (cr0.eq) goto loc_82197128;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82196e28
	sub_82196E28(ctx, base);
	// b 0x8219712c
	goto loc_8219712C;
loc_82197128:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8219712C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82197144
	if (cr6.eq) goto loc_82197144;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_82197144:
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

__attribute__((alias("__imp__sub_82197158"))) PPC_WEAK_FUNC(sub_82197158);
PPC_FUNC_IMPL(__imp__sub_82197158) {
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
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82197180"))) PPC_WEAK_FUNC(sub_82197180);
PPC_FUNC_IMPL(__imp__sub_82197180) {
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
	// addi r30,r3,-256
	r30.s64 = ctx.r3.s64 + -256;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,256
	r31.s64 = r30.s64 + 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82196a70
	sub_82196A70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821971b8
	if (cr0.eq) goto loc_821971B8;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_821971B8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821971C4"))) PPC_WEAK_FUNC(sub_821971C4);
PPC_FUNC_IMPL(__imp__sub_821971C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821971C8"))) PPC_WEAK_FUNC(sub_821971C8);
PPC_FUNC_IMPL(__imp__sub_821971C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,25392(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 25392);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bne cr6,0x82197248
	if (!cr6.eq) goto loc_82197248;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82197240
	if (cr0.eq) goto loc_82197240;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82197240:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8219733c
	goto loc_8219733C;
loc_82197248:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r28,1
	ctx.r6.s64 = r28.s64 + 1;
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// blt cr6,0x82197328
	if (cr6.lt) goto loc_82197328;
	// andi. r11,r27,19
	r11.u64 = r27.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82197328
	if (!cr0.eq) goto loc_82197328;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(r27.s32, 8, xer);
	// bne cr6,0x821972a0
	if (!cr6.eq) goto loc_821972A0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82195d28
	sub_82195D28(ctx, base);
	// b 0x82197240
	goto loc_82197240;
loc_821972A0:
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// bne cr6,0x82197320
	if (!cr6.eq) goto loc_82197320;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,5144
	r30.s64 = r11.s64 + 5144;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r27,r11,920
	r27.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82197070
	sub_82197070(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82188950
	sub_82188950(ctx, base);
	// b 0x82197240
	goto loc_82197240;
loc_82197320:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8219733c
	goto loc_8219733C;
loc_82197328:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82195310
	sub_82195310(ctx, base);
loc_8219733C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_821971D0"))) PPC_WEAK_FUNC(sub_821971D0);
PPC_FUNC_IMPL(__imp__sub_821971D0) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lha r11,8(r30)
	r11.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bne cr6,0x82197248
	if (!cr6.eq) goto loc_82197248;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// stw r8,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r8.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82197240
	if (cr0.eq) goto loc_82197240;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82197240:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8219733c
	goto loc_8219733C;
loc_82197248:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r28,3,0,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r28,1
	ctx.r6.s64 = r28.s64 + 1;
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add r28,r10,r11
	r28.u64 = ctx.r10.u64 + r11.u64;
	// lha r9,8(r30)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(r30.u32 + 8));
	// cmpw cr6,r6,r9
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, xer);
	// blt cr6,0x82197328
	if (cr6.lt) goto loc_82197328;
	// andi. r11,r27,19
	r11.u64 = r27.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82197328
	if (!cr0.eq) goto loc_82197328;
	// cmpwi cr6,r27,8
	cr6.compare<int32_t>(r27.s32, 8, xer);
	// bne cr6,0x821972a0
	if (!cr6.eq) goto loc_821972A0;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82195d28
	sub_82195D28(ctx, base);
	// b 0x82197240
	goto loc_82197240;
loc_821972A0:
	// cmpwi cr6,r27,4
	cr6.compare<int32_t>(r27.s32, 4, xer);
	// bne cr6,0x82197320
	if (!cr6.eq) goto loc_82197320;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stw r11,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,5144
	r30.s64 = r11.s64 + 5144;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r27,r11,920
	r27.s64 = r11.s64 + 920;
	// bl 0x82318130
	sub_82318130(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82150070
	sub_82150070(ctx, base);
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82197070
	sub_82197070(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82188950
	sub_82188950(ctx, base);
	// b 0x82197240
	goto loc_82197240;
loc_82197320:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8219733c
	goto loc_8219733C;
loc_82197328:
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82195310
	sub_82195310(ctx, base);
loc_8219733C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82197344"))) PPC_WEAK_FUNC(sub_82197344);
PPC_FUNC_IMPL(__imp__sub_82197344) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219736C"))) PPC_WEAK_FUNC(sub_8219736C);
PPC_FUNC_IMPL(__imp__sub_8219736C) {
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
	// bl 0x82126688
	sub_82126688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82197394"))) PPC_WEAK_FUNC(sub_82197394);
PPC_FUNC_IMPL(__imp__sub_82197394) {
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
	// bl 0x82188a40
	sub_82188A40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821973BC"))) PPC_WEAK_FUNC(sub_821973BC);
PPC_FUNC_IMPL(__imp__sub_821973BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821973C0"))) PPC_WEAK_FUNC(sub_821973C0);
PPC_FUNC_IMPL(__imp__sub_821973C0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82194a10
	sub_82194A10(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,28896
	ctx.r4.s64 = r11.s64 + 28896;
	// bl 0x82317958
	sub_82317958(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25532
	ctx.r4.s64 = r11.s64 + 25532;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,22216
	ctx.r4.s64 = r11.s64 + 22216;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25512
	ctx.r4.s64 = r11.s64 + 25512;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,22328
	ctx.r4.s64 = r11.s64 + 22328;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25488
	ctx.r4.s64 = r11.s64 + 25488;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,20416
	ctx.r4.s64 = r11.s64 + 20416;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,25472
	ctx.r4.s64 = r11.s64 + 25472;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32231
	r11.s64 = -2112290816;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,22464
	ctx.r4.s64 = r11.s64 + 22464;
	// bl 0x8232d1d0
	sub_8232D1D0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82197474"))) PPC_WEAK_FUNC(sub_82197474);
PPC_FUNC_IMPL(__imp__sub_82197474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197478"))) PPC_WEAK_FUNC(sub_82197478);
PPC_FUNC_IMPL(__imp__sub_82197478) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,25656(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 25656);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10108
	r29.s64 = ctx.r10.s64 + 10108;
	// bne 0x821974e4
	if (!cr0.eq) goto loc_821974E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18512
	ctx.r4.s64 = r11.s64 + 18512;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_821974E4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82197518
	if (cr0.eq) goto loc_82197518;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r25,-40
	ctx.r3.s64 = r25.s64 + -40;
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x82197784
	goto loc_82197784;
loc_82197518:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10104
	r29.s64 = ctx.r10.s64 + 10104;
	// bne 0x82197544
	if (!cr0.eq) goto loc_82197544;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-1448
	ctx.r4.s64 = r11.s64 + -1448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_82197544:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82197578
	if (cr0.eq) goto loc_82197578;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r25,-36
	ctx.r3.s64 = r25.s64 + -36;
loc_82197570:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82197784
	goto loc_82197784;
loc_82197578:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10100
	r29.s64 = ctx.r10.s64 + 10100;
	// bne 0x821975a4
	if (!cr0.eq) goto loc_821975A4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25584
	ctx.r4.s64 = r11.s64 + 25584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_821975A4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821975d4
	if (cr0.eq) goto loc_821975D4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r25,-32
	ctx.r3.s64 = r25.s64 + -32;
	// b 0x82197570
	goto loc_82197570;
loc_821975D4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10096
	r29.s64 = ctx.r10.s64 + 10096;
	// bne 0x82197600
	if (!cr0.eq) goto loc_82197600;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25572
	ctx.r4.s64 = r11.s64 + 25572;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_82197600:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82197684
	if (cr0.eq) goto loc_82197684;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82197640
	if (!cr6.eq) goto loc_82197640;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,-28(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + -28, temp.u32);
	// b 0x8219767c
	goto loc_8219767C;
loc_82197640:
	// li r11,1
	r11.s64 = 1;
	// lfs f13,-28(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-12484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12484);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8219767c
	if (cr0.eq) goto loc_8219767C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8219767C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82197784
	goto loc_82197784;
loc_82197684:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10092
	r29.s64 = ctx.r10.s64 + 10092;
	// bne 0x821976b0
	if (!cr0.eq) goto loc_821976B0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25560
	ctx.r4.s64 = r11.s64 + 25560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_821976B0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821976e4
	if (cr0.eq) goto loc_821976E4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// bl 0x821971d0
	sub_821971D0(ctx, base);
	// b 0x82197784
	goto loc_82197784;
loc_821976E4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10088
	r29.s64 = ctx.r10.s64 + 10088;
	// bne 0x8219770c
	if (!cr0.eq) goto loc_8219770C;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25548
	ctx.r4.s64 = r11.s64 + 25548;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8219770C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82197744
	if (cr0.eq) goto loc_82197744;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r3,r11,10040
	ctx.r3.s64 = r11.s64 + 10040;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x82197784
	goto loc_82197784;
loc_82197744:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r25,-216
	ctx.r3.s64 = r25.s64 + -216;
	// bl 0x821b3420
	sub_821B3420(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8219767c
	if (!cr0.eq) goto loc_8219767C;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r25,-36
	ctx.r3.s64 = r25.s64 + -36;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82197784:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82197480"))) PPC_WEAK_FUNC(sub_82197480);
PPC_FUNC_IMPL(__imp__sub_82197480) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lis r30,-32136
	r30.s64 = -2106064896;
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10108
	r29.s64 = ctx.r10.s64 + 10108;
	// bne 0x821974e4
	if (!cr0.eq) goto loc_821974E4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,18512
	ctx.r4.s64 = r11.s64 + 18512;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_821974E4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82197518
	if (cr0.eq) goto loc_82197518;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r25,-40
	ctx.r3.s64 = r25.s64 + -40;
	// bl 0x82126dc0
	sub_82126DC0(ctx, base);
	// b 0x82197784
	goto loc_82197784;
loc_82197518:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10104
	r29.s64 = ctx.r10.s64 + 10104;
	// bne 0x82197544
	if (!cr0.eq) goto loc_82197544;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,-1448
	ctx.r4.s64 = r11.s64 + -1448;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_82197544:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82197578
	if (cr0.eq) goto loc_82197578;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r25,-36
	ctx.r3.s64 = r25.s64 + -36;
loc_82197570:
	// bl 0x8212dd50
	sub_8212DD50(ctx, base);
	// b 0x82197784
	goto loc_82197784;
loc_82197578:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10100
	r29.s64 = ctx.r10.s64 + 10100;
	// bne 0x821975a4
	if (!cr0.eq) goto loc_821975A4;
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25584
	ctx.r4.s64 = r11.s64 + 25584;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_821975A4:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821975d4
	if (cr0.eq) goto loc_821975D4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r25,-32
	ctx.r3.s64 = r25.s64 + -32;
	// b 0x82197570
	goto loc_82197570;
loc_821975D4:
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10096
	r29.s64 = ctx.r10.s64 + 10096;
	// bne 0x82197600
	if (!cr0.eq) goto loc_82197600;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25572
	ctx.r4.s64 = r11.s64 + 25572;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_82197600:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82197684
	if (cr0.eq) goto loc_82197684;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x82197640
	if (!cr6.eq) goto loc_82197640;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-25404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,-28(r25)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r25.u32 + -28, temp.u32);
	// b 0x8219767c
	goto loc_8219767C;
loc_82197640:
	// li r11,1
	r11.s64 = 1;
	// lfs f13,-28(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + -28);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-12484(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12484);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,88(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 88, temp.u32);
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82317df8
	sub_82317DF8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8219767c
	if (cr0.eq) goto loc_8219767C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8219767C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82197784
	goto loc_82197784;
loc_82197684:
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10092
	r29.s64 = ctx.r10.s64 + 10092;
	// bne 0x821976b0
	if (!cr0.eq) goto loc_821976B0;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25560
	ctx.r4.s64 = r11.s64 + 25560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,10112(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10112);
loc_821976B0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,80(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821976e4
	if (cr0.eq) goto loc_821976E4;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r25,-20
	ctx.r3.s64 = r25.s64 + -20;
	// bl 0x821971d0
	sub_821971D0(ctx, base);
	// b 0x82197784
	goto loc_82197784;
loc_821976E4:
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r29,r10,10088
	r29.s64 = ctx.r10.s64 + 10088;
	// bne 0x8219770c
	if (!cr0.eq) goto loc_8219770C;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,10112(r30)
	PPC_STORE_U32(r30.u32 + 10112, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r4,r11,25548
	ctx.r4.s64 = r11.s64 + 25548;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_8219770C:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82197744
	if (cr0.eq) goto loc_82197744;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// addi r3,r11,10040
	ctx.r3.s64 = r11.s64 + 10040;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8212de00
	sub_8212DE00(ctx, base);
	// b 0x82197784
	goto loc_82197784;
loc_82197744:
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r25,-216
	ctx.r3.s64 = r25.s64 + -216;
	// bl 0x821b3420
	sub_821B3420(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8219767c
	if (!cr0.eq) goto loc_8219767C;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r25,-36
	ctx.r3.s64 = r25.s64 + -36;
	// bl 0x821aec48
	sub_821AEC48(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
loc_82197784:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_8219778C"))) PPC_WEAK_FUNC(sub_8219778C);
PPC_FUNC_IMPL(__imp__sub_8219778C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10112
	r11.s64 = r11.s64 + 10112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10112
	ctx.r10.s64 = ctx.r10.s64 + 10112;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821977B4"))) PPC_WEAK_FUNC(sub_821977B4);
PPC_FUNC_IMPL(__imp__sub_821977B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10112
	r11.s64 = r11.s64 + 10112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10112
	ctx.r10.s64 = ctx.r10.s64 + 10112;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821977DC"))) PPC_WEAK_FUNC(sub_821977DC);
PPC_FUNC_IMPL(__imp__sub_821977DC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10112
	r11.s64 = r11.s64 + 10112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10112
	ctx.r10.s64 = ctx.r10.s64 + 10112;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82197804"))) PPC_WEAK_FUNC(sub_82197804);
PPC_FUNC_IMPL(__imp__sub_82197804) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10112
	r11.s64 = r11.s64 + 10112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,29,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10112
	ctx.r10.s64 = ctx.r10.s64 + 10112;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219782C"))) PPC_WEAK_FUNC(sub_8219782C);
PPC_FUNC_IMPL(__imp__sub_8219782C) {
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
	// bl 0x82120868
	sub_82120868(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82197854"))) PPC_WEAK_FUNC(sub_82197854);
PPC_FUNC_IMPL(__imp__sub_82197854) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10112
	r11.s64 = r11.s64 + 10112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,28,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10112
	ctx.r10.s64 = ctx.r10.s64 + 10112;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219787C"))) PPC_WEAK_FUNC(sub_8219787C);
PPC_FUNC_IMPL(__imp__sub_8219787C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32136
	r11.s64 = -2106064896;
	// addi r11,r11,10112
	r11.s64 = r11.s64 + 10112;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// lis r10,-32136
	ctx.r10.s64 = -2106064896;
	// addi r10,r10,10112
	ctx.r10.s64 = ctx.r10.s64 + 10112;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821978A4"))) PPC_WEAK_FUNC(sub_821978A4);
PPC_FUNC_IMPL(__imp__sub_821978A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821978A8"))) PPC_WEAK_FUNC(sub_821978A8);
PPC_FUNC_IMPL(__imp__sub_821978A8) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,12
	ctx.r8.s64 = 12;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r7,r7,r8
	ctx.r7.s32 = ctx.r7.s32 / ctx.r8.s32;
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bge cr6,0x821978f8
	if (!cr6.lt) goto loc_821978F8;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x8219790c
	if (cr6.eq) goto loc_8219790C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x82195da8
	sub_82195DA8(ctx, base);
	// b 0x8219790c
	goto loc_8219790C;
loc_821978F8:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x82197070
	sub_82197070(ctx, base);
loc_8219790C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219791C"))) PPC_WEAK_FUNC(sub_8219791C);
PPC_FUNC_IMPL(__imp__sub_8219791C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197920"))) PPC_WEAK_FUNC(sub_82197920);
PPC_FUNC_IMPL(__imp__sub_82197920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82197480
	sub_82197480(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8219792C"))) PPC_WEAK_FUNC(sub_8219792C);
PPC_FUNC_IMPL(__imp__sub_8219792C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197930"))) PPC_WEAK_FUNC(sub_82197930);
PPC_FUNC_IMPL(__imp__sub_82197930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,25832(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 25832);
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
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x821978a8
	sub_821978A8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82188950
	sub_82188950(ctx, base);
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

__attribute__((alias("__imp__sub_82197938"))) PPC_WEAK_FUNC(sub_82197938);
PPC_FUNC_IMPL(__imp__sub_82197938) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// addi r11,r11,23940
	r11.s64 = r11.s64 + 23940;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// bl 0x821978a8
	sub_821978A8(ctx, base);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82188950
	sub_82188950(ctx, base);
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

__attribute__((alias("__imp__sub_8219798C"))) PPC_WEAK_FUNC(sub_8219798C);
PPC_FUNC_IMPL(__imp__sub_8219798C) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82126688
	sub_82126688(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821979B4"))) PPC_WEAK_FUNC(sub_821979B4);
PPC_FUNC_IMPL(__imp__sub_821979B4) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82188a40
	sub_82188A40(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821979DC"))) PPC_WEAK_FUNC(sub_821979DC);
PPC_FUNC_IMPL(__imp__sub_821979DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821979E0"))) PPC_WEAK_FUNC(sub_821979E0);
PPC_FUNC_IMPL(__imp__sub_821979E0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82197938
	sub_82197938(ctx, base);
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x82197a20
	goto loc_82197A20;
loc_82197A14:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82195280
	sub_82195280(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
loc_82197A20:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x82197a14
	if (!cr6.eq) goto loc_82197A14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82197A38"))) PPC_WEAK_FUNC(sub_82197A38);
PPC_FUNC_IMPL(__imp__sub_82197A38) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// lwz r11,-252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -252);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = r11.s64 + -252;
	// bl 0x82315350
	sub_82315350(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,-216
	ctx.r3.s64 = r30.s64 + -216;
	// bl 0x821b36c0
	sub_821B36C0(ctx, base);
	// addi r29,r30,-36
	r29.s64 = r30.s64 + -36;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821b0a28
	sub_821B0A28(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-40
	ctx.r4.s64 = r30.s64 + -40;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r30,-20
	ctx.r4.s64 = r30.s64 + -20;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821979e0
	sub_821979E0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x82197acc
	if (!cr6.gt) goto loc_82197ACC;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x82197ad8
	goto loc_82197AD8;
loc_82197ACC:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-1472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1472);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
loc_82197AD8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// ble cr6,0x82197b08
	if (!cr6.gt) goto loc_82197B08;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-32
	ctx.r4.s64 = r30.s64 + -32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r30,-28
	ctx.r4.s64 = r30.s64 + -28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// b 0x82197b18
	goto loc_82197B18;
loc_82197B08:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,-28(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -28, temp.u32);
	// stfs f0,-32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + -32, temp.u32);
loc_82197B18:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82197B20"))) PPC_WEAK_FUNC(sub_82197B20);
PPC_FUNC_IMPL(__imp__sub_82197B20) {
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
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x82197b68
	if (cr6.eq) goto loc_82197B68;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divw r4,r11,r9
	ctx.r4.s32 = r11.s32 / ctx.r9.s32;
	// bl 0x82197938
	sub_82197938(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82196680
	sub_82196680(ctx, base);
loc_82197B68:
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

__attribute__((alias("__imp__sub_82197B80"))) PPC_WEAK_FUNC(sub_82197B80);
PPC_FUNC_IMPL(__imp__sub_82197B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82197a38
	sub_82197A38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82197B8C"))) PPC_WEAK_FUNC(sub_82197B8C);
PPC_FUNC_IMPL(__imp__sub_82197B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197B90"))) PPC_WEAK_FUNC(sub_82197B90);
PPC_FUNC_IMPL(__imp__sub_82197B90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,-252(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -252);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,-252
	ctx.r3.s64 = r11.s64 + -252;
	// bl 0x82315258
	sub_82315258(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,-216
	ctx.r3.s64 = r31.s64 + -216;
	// bl 0x821b2938
	sub_821B2938(ctx, base);
	// addi r28,r31,-36
	r28.s64 = r31.s64 + -36;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821b0908
	sub_821B0908(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,5144
	ctx.r6.s64 = r11.s64 + 5144;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82197c34
	if (cr0.eq) goto loc_82197C34;
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// addi r4,r30,236
	ctx.r4.s64 = r30.s64 + 236;
	// addi r3,r31,-20
	ctx.r3.s64 = r31.s64 + -20;
	// stw r11,-40(r31)
	PPC_STORE_U32(r31.u32 + -40, r11.u32);
	// bl 0x82197b20
	sub_82197B20(ctx, base);
	// lfs f0,220(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 220);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// lfs f0,224(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 224);
	f0.f64 = double(temp.f32);
	// stfs f0,-32(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -32, temp.u32);
	// lfs f0,228(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 228);
	f0.f64 = double(temp.f32);
	// stfs f0,-28(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + -28, temp.u32);
loc_82197C34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82197C3C"))) PPC_WEAK_FUNC(sub_82197C3C);
PPC_FUNC_IMPL(__imp__sub_82197C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197C40"))) PPC_WEAK_FUNC(sub_82197C40);
PPC_FUNC_IMPL(__imp__sub_82197C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82197b90
	sub_82197B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82197C4C"))) PPC_WEAK_FUNC(sub_82197C4C);
PPC_FUNC_IMPL(__imp__sub_82197C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197C50"))) PPC_WEAK_FUNC(sub_82197C50);
PPC_FUNC_IMPL(__imp__sub_82197C50) {
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
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r11,-1439(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + -1439);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82197c90
	if (cr0.eq) goto loc_82197C90;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r3,r11,8516
	ctx.r3.s64 = r11.s64 + 8516;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82197c98
	goto loc_82197C98;
loc_82197C90:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82197C98:
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82354ff8
	sub_82354FF8(ctx, base);
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

__attribute__((alias("__imp__sub_82197CB4"))) PPC_WEAK_FUNC(sub_82197CB4);
PPC_FUNC_IMPL(__imp__sub_82197CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197CB8"))) PPC_WEAK_FUNC(sub_82197CB8);
PPC_FUNC_IMPL(__imp__sub_82197CB8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r3,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r3.u32);
	// lfs f13,12(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82197de0
	if (cr6.lt) goto loc_82197DE0;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// srawi. r6,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r6.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x82197d28
	if (cr0.eq) goto loc_82197D28;
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82197CF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x82197d28
	if (!cr6.gt) goto loc_82197D28;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// blt cr6,0x82197cf8
	if (cr6.lt) goto loc_82197CF8;
loc_82197D28:
	// addic. r11,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	r11.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82197d74
	if (cr0.lt) goto loc_82197D74;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	f0.f64 = double(temp.f32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82197D3C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lfs f12,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// bge cr6,0x82197d68
	if (!cr6.lt) goto loc_82197D68;
	// lwz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r31,16(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// and. r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 & r31.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82197d68
	if (cr0.eq) goto loc_82197D68;
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82197de0
	if (!cr6.gt) goto loc_82197DE0;
loc_82197D68:
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82197d3c
	if (!cr0.lt) goto loc_82197D3C;
loc_82197D74:
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r6
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r6.u32, xer);
	// bge cr6,0x82197de4
	if (!cr6.lt) goto loc_82197DE4;
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	f0.f64 = double(temp.f32);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
loc_82197D8C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f12,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x82197de4
	if (!cr6.gt) goto loc_82197DE4;
	// lfs f12,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x82197db8
	if (cr6.gt) goto loc_82197DB8;
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r6,16(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// and. r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82197ddc
	if (!cr0.eq) goto loc_82197DDC;
loc_82197DB8:
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x82197d8c
	if (cr6.lt) goto loc_82197D8C;
	// b 0x82197de4
	goto loc_82197DE4;
loc_82197DDC:
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
loc_82197DE0:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82197DE4:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82197DEC"))) PPC_WEAK_FUNC(sub_82197DEC);
PPC_FUNC_IMPL(__imp__sub_82197DEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197DF0"))) PPC_WEAK_FUNC(sub_82197DF0);
PPC_FUNC_IMPL(__imp__sub_82197DF0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// b 0x82197e30
	goto loc_82197E30;
loc_82197E0C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82197e2c
	if (cr0.eq) goto loc_82197E2C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82197E2C:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82197E30:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82197e0c
	if (!cr6.eq) goto loc_82197E0C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82197E44"))) PPC_WEAK_FUNC(sub_82197E44);
PPC_FUNC_IMPL(__imp__sub_82197E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197E48"))) PPC_WEAK_FUNC(sub_82197E48);
PPC_FUNC_IMPL(__imp__sub_82197E48) {
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
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// beq cr6,0x82197e84
	if (cr6.eq) goto loc_82197E84;
	// subf. r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82197e84
	if (cr0.eq) goto loc_82197E84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_82197E84:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
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

__attribute__((alias("__imp__sub_82197EAC"))) PPC_WEAK_FUNC(sub_82197EAC);
PPC_FUNC_IMPL(__imp__sub_82197EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197EB0"))) PPC_WEAK_FUNC(sub_82197EB0);
PPC_FUNC_IMPL(__imp__sub_82197EB0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r28.u32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// addi r10,r1,228
	ctx.r10.s64 = ctx.r1.s64 + 228;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x82197ef8
	if (cr6.lt) goto loc_82197EF8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82197EF8:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r27,r31,8
	r27.s64 = r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r25,r10,r11
	r25.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82197c50
	sub_82197C50(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82197f30
	if (cr0.eq) goto loc_82197F30;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82197F30:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82197f50
	if (cr6.eq) goto loc_82197F50;
loc_82197F3C:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bne 0x82197f3c
	if (!cr0.eq) goto loc_82197F3C;
loc_82197F50:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82197f78
	if (!cr0.eq) goto loc_82197F78;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82197f78
	if (cr0.eq) goto loc_82197F78;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82197F78:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82197FAC"))) PPC_WEAK_FUNC(sub_82197FAC);
PPC_FUNC_IMPL(__imp__sub_82197FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82197FB0"))) PPC_WEAK_FUNC(sub_82197FB0);
PPC_FUNC_IMPL(__imp__sub_82197FB0) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x821980b4
	if (cr0.eq) goto loc_821980B4;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r30,0
	r30.s64 = 0;
	// lfs f30,-20976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -20976);
	f30.f64 = double(temp.f32);
loc_82197FF0:
	// lwzx r31,r30,r11
	r31.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bgt cr6,0x821980b4
	if (cr6.gt) goto loc_821980B4;
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8219802c
	if (!cr0.eq) goto loc_8219802C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f30,12(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// stb r11,20(r31)
	PPC_STORE_U8(r31.u32 + 20, r11.u8);
loc_8219802C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82198094
	if (!cr6.gt) goto loc_82198094;
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
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82197e48
	sub_82197E48(ctx, base);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
loc_82198094:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82197ff0
	if (cr6.lt) goto loc_82197FF0;
loc_821980B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_821980C4"))) PPC_WEAK_FUNC(sub_821980C4);
PPC_FUNC_IMPL(__imp__sub_821980C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_821980C8"))) PPC_WEAK_FUNC(sub_821980C8);
PPC_FUNC_IMPL(__imp__sub_821980C8) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82198108
	if (cr6.eq) goto loc_82198108;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x821980f8
	if (cr0.eq) goto loc_821980F8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_821980F8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8219811c
	goto loc_8219811C;
loc_82198108:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82197eb0
	sub_82197EB0(ctx, base);
loc_8219811C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8219812C"))) PPC_WEAK_FUNC(sub_8219812C);
PPC_FUNC_IMPL(__imp__sub_8219812C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82198130"))) PPC_WEAK_FUNC(sub_82198130);
PPC_FUNC_IMPL(__imp__sub_82198130) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82198178
	if (cr6.eq) goto loc_82198178;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82198170
	if (cr0.eq) goto loc_82198170;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x82198174
	goto loc_82198174;
loc_82198170:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82198174:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82198178:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82198184"))) PPC_WEAK_FUNC(sub_82198184);
PPC_FUNC_IMPL(__imp__sub_82198184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82198188"))) PPC_WEAK_FUNC(sub_82198188);
PPC_FUNC_IMPL(__imp__sub_82198188) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x82198228
	if (!cr6.gt) goto loc_82198228;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lfs f13,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82198228
	if (!cr6.lt) goto loc_82198228;
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82198228
	if (cr0.eq) goto loc_82198228;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82198218
	if (cr0.eq) goto loc_82198218;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82198218:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r26,1
	r26.s64 = 1;
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, r29.u32);
loc_82198228:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r27
	r28.u64 = r27.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// bge cr6,0x821982d8
	if (!cr6.lt) goto loc_821982D8;
	// rlwinm r30,r27,2,0,29
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_82198248:
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x821982d8
	if (!cr6.gt) goto loc_821982D8;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821982b8
	if (cr6.eq) goto loc_821982B8;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x821982b8
	if (cr6.eq) goto loc_821982B8;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82198290
	if (cr0.eq) goto loc_82198290;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82198290:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bne 0x821982a8
	if (!cr0.eq) goto loc_821982A8;
	// li r26,1
	r26.s64 = 1;
	// stwx r29,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, r29.u32);
	// b 0x821982b8
	goto loc_821982B8;
loc_821982A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r30,r11
	ctx.r4.u64 = r30.u64 + r11.u64;
	// bl 0x82197e48
	sub_82197E48(ctx, base);
loc_821982B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// blt cr6,0x82198248
	if (cr6.lt) goto loc_82198248;
loc_821982D8:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8219833c
	if (!cr0.eq) goto loc_8219833C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r30,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r30.s64 = r11.s32 >> 2;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x821980c8
	sub_821980C8(ctx, base);
	// cmpw cr6,r30,r27
	cr6.compare<int32_t>(r30.s32, r27.s32, xer);
	// ble cr6,0x82198330
	if (!cr6.gt) goto loc_82198330;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r27,r30
	r11.s64 = r30.s64 - r27.s64;
loc_82198314:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// lwz r8,-4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// bne 0x82198314
	if (!cr0.eq) goto loc_82198314;
loc_82198330:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, r29.u32);
loc_8219833C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82198344"))) PPC_WEAK_FUNC(sub_82198344);
PPC_FUNC_IMPL(__imp__sub_82198344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82198348"))) PPC_WEAK_FUNC(sub_82198348);
PPC_FUNC_IMPL(__imp__sub_82198348) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82197cb8
	sub_82197CB8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// bne cr6,0x821983c0
	if (!cr6.eq) goto loc_821983C0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82198390
	if (cr6.eq) goto loc_82198390;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82198390:
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x821983b8
	if (cr0.eq) goto loc_821983B8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x821983b8
	if (cr6.eq) goto loc_821983B8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_821983B8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x821983d0
	goto loc_821983D0;
loc_821983C0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82198188
	sub_82198188(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_821983D0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_821983D8"))) PPC_WEAK_FUNC(sub_821983D8);
PPC_FUNC_IMPL(__imp__sub_821983D8) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x82197df0
	sub_82197DF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82198130
	sub_82198130(ctx, base);
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

__attribute__((alias("__imp__sub_8219842C"))) PPC_WEAK_FUNC(sub_8219842C);
PPC_FUNC_IMPL(__imp__sub_8219842C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82198430"))) PPC_WEAK_FUNC(sub_82198430);
PPC_FUNC_IMPL(__imp__sub_82198430) {
	PPC_FUNC_PROLOGUE();
	// b 0x821983d8
	sub_821983D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82198434"))) PPC_WEAK_FUNC(sub_82198434);
PPC_FUNC_IMPL(__imp__sub_82198434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82198438"))) PPC_WEAK_FUNC(sub_82198438);
PPC_FUNC_IMPL(__imp__sub_82198438) {
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
	// lwz r16,25896(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 25896);
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
	// li r11,0
	r11.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x821983d8
	sub_821983D8(ctx, base);
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

__attribute__((alias("__imp__sub_82198440"))) PPC_WEAK_FUNC(sub_82198440);
PPC_FUNC_IMPL(__imp__sub_82198440) {
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
	// li r11,0
	r11.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x821983d8
	sub_821983D8(ctx, base);
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

__attribute__((alias("__imp__sub_82198490"))) PPC_WEAK_FUNC(sub_82198490);
PPC_FUNC_IMPL(__imp__sub_82198490) {
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
	// bl 0x8269a918
	sub_8269A918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_821984B8"))) PPC_WEAK_FUNC(sub_821984B8);
PPC_FUNC_IMPL(__imp__sub_821984B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,25952(r1)
	r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 25952);
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
	// bl 0x821983d8
	sub_821983D8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82198504
	if (cr0.eq) goto loc_82198504;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82198504:
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

__attribute__((alias("__imp__sub_821984C0"))) PPC_WEAK_FUNC(sub_821984C0);
PPC_FUNC_IMPL(__imp__sub_821984C0) {
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
	// bl 0x821983d8
	sub_821983D8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82198504
	if (cr0.eq) goto loc_82198504;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82198504:
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

__attribute__((alias("__imp__sub_8219851C"))) PPC_WEAK_FUNC(sub_8219851C);
PPC_FUNC_IMPL(__imp__sub_8219851C) {
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
	// bl 0x8269a918
	sub_8269A918(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82198544"))) PPC_WEAK_FUNC(sub_82198544);
PPC_FUNC_IMPL(__imp__sub_82198544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82198548"))) PPC_WEAK_FUNC(sub_82198548);
PPC_FUNC_IMPL(__imp__sub_82198548) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x821e7b68
	sub_821E7B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82198550"))) PPC_WEAK_FUNC(sub_82198550);
PPC_FUNC_IMPL(__imp__sub_82198550) {
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
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82198590
	if (cr0.eq) goto loc_82198590;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82316378
	sub_82316378(ctx, base);
loc_82198590:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x821985cc
	if (!cr6.eq) goto loc_821985CC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x821985bc
	if (cr0.eq) goto loc_821985BC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x821985c0
	goto loc_821985C0;
loc_821985BC:
	// li r11,0
	r11.s64 = 0;
loc_821985C0:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x8219861c
	goto loc_8219861C;
loc_821985CC:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bne cr6,0x82198600
	if (!cr6.eq) goto loc_82198600;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8219861c
	goto loc_8219861C;
loc_82198600:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
loc_8219861C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
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

__attribute__((alias("__imp__sub_82198640"))) PPC_WEAK_FUNC(sub_82198640);
PPC_FUNC_IMPL(__imp__sub_82198640) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8219867c
	if (cr0.eq) goto loc_8219867C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82317480
	sub_82317480(ctx, base);
loc_8219867C:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x821986b4
	if (!cr6.eq) goto loc_821986B4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x821986a8
	if (cr6.eq) goto loc_821986A8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// b 0x821986ac
	goto loc_821986AC;
loc_821986A8:
	// stw r31,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r31.u32);
loc_821986AC:
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// b 0x821986f0
	goto loc_821986F0;
loc_821986B4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x821986dc
	if (!cr6.eq) goto loc_821986DC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// b 0x821986f0
	goto loc_821986F0;
loc_821986DC:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r31,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r31.u32);
loc_821986F0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82198704"))) PPC_WEAK_FUNC(sub_82198704);
PPC_FUNC_IMPL(__imp__sub_82198704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82198708"))) PPC_WEAK_FUNC(sub_82198708);
PPC_FUNC_IMPL(__imp__sub_82198708) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8214d368
	sub_8214D368(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r11,4704
	r31.s64 = r11.s64 + 4704;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// addi r30,r11,920
	r30.s64 = r11.s64 + 920;
	// bl 0x823173f0
	sub_823173F0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
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

