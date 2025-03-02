#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82697158"))) PPC_WEAK_FUNC(sub_82697158);
PPC_FUNC_IMPL(__imp__sub_82697158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,31168(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31168);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,30852
	r11.s64 = r11.s64 + 30852;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82697198
	if (cr0.eq) goto loc_82697198;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82697030
	sub_82697030(ctx, base);
loc_82697198:
	// li r29,0
	r29.s64 = 0;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// beq 0x826971b4
	if (cr0.eq) goto loc_826971B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82697098
	sub_82697098(ctx, base);
loc_826971B4:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r29,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826971e8
	if (cr0.eq) goto loc_826971E8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826971E8:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269721c
	if (cr0.eq) goto loc_8269721C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8269721C:
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82697250
	if (cr0.eq) goto loc_82697250;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82697250:
	// lwz r28,80(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r29,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r29.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82697270
	if (cr0.eq) goto loc_82697270;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82699150
	sub_82699150(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82697270:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826972a0
	if (cr0.eq) goto loc_826972A0;
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
loc_826972A0:
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826972d4
	if (cr0.eq) goto loc_826972D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826972D4:
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// stw r29,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826972f8
	if (cr0.eq) goto loc_826972F8;
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
loc_826972F8:
	// addi r28,r30,112
	r28.s64 = r30.s64 + 112;
	// stw r29,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82697100
	sub_82697100(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r29,156(r30)
	PPC_STORE_U32(r30.u32 + 156, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r29.u32);
	// lwz r5,18972(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// bl 0x823257c0
	sub_823257C0(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82697348
	if (cr0.eq) goto loc_82697348;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82697348:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82697160"))) PPC_WEAK_FUNC(sub_82697160);
PPC_FUNC_IMPL(__imp__sub_82697160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,30852
	r11.s64 = r11.s64 + 30852;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82697198
	if (cr0.eq) goto loc_82697198;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82697030
	sub_82697030(ctx, base);
loc_82697198:
	// li r29,0
	r29.s64 = 0;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r29,88(r30)
	PPC_STORE_U32(r30.u32 + 88, r29.u32);
	// beq 0x826971b4
	if (cr0.eq) goto loc_826971B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82697098
	sub_82697098(ctx, base);
loc_826971B4:
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// stw r29,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826971e8
	if (cr0.eq) goto loc_826971E8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826971E8:
	// lwz r11,96(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r29,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269721c
	if (cr0.eq) goto loc_8269721C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8269721C:
	// lwz r11,104(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 104);
	// stw r29,96(r30)
	PPC_STORE_U32(r30.u32 + 96, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82697250
	if (cr0.eq) goto loc_82697250;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82697250:
	// lwz r28,80(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r29,104(r30)
	PPC_STORE_U32(r30.u32 + 104, r29.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x82697270
	if (cr0.eq) goto loc_82697270;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82699150
	sub_82699150(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82697270:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 144);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826972a0
	if (cr0.eq) goto loc_826972A0;
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
loc_826972A0:
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// stw r29,144(r30)
	PPC_STORE_U32(r30.u32 + 144, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826972d4
	if (cr0.eq) goto loc_826972D4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826972D4:
	// lwz r3,140(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 140);
	// stw r29,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826972f8
	if (cr0.eq) goto loc_826972F8;
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
loc_826972F8:
	// addi r28,r30,112
	r28.s64 = r30.s64 + 112;
	// stw r29,140(r30)
	PPC_STORE_U32(r30.u32 + 140, r29.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82697100
	sub_82697100(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// stw r29,156(r30)
	PPC_STORE_U32(r30.u32 + 156, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r29,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r29.u32);
	// lwz r5,18972(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9836(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9836);
	// bl 0x823257c0
	sub_823257C0(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82697348
	if (cr0.eq) goto loc_82697348;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82697348:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82697358"))) PPC_WEAK_FUNC(sub_82697358);
PPC_FUNC_IMPL(__imp__sub_82697358) {
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
	// bl 0x82317760
	sub_82317760(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82697380"))) PPC_WEAK_FUNC(sub_82697380);
PPC_FUNC_IMPL(__imp__sub_82697380) {
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
	// addi r3,r11,112
	ctx.r3.s64 = r11.s64 + 112;
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

__attribute__((alias("__imp__sub_826973AC"))) PPC_WEAK_FUNC(sub_826973AC);
PPC_FUNC_IMPL(__imp__sub_826973AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826973B0"))) PPC_WEAK_FUNC(sub_826973B0);
PPC_FUNC_IMPL(__imp__sub_826973B0) {
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
	// bl 0x82697160
	sub_82697160(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826973e0
	if (cr0.eq) goto loc_826973E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826973E0:
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

__attribute__((alias("__imp__sub_826973FC"))) PPC_WEAK_FUNC(sub_826973FC);
PPC_FUNC_IMPL(__imp__sub_826973FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697400"))) PPC_WEAK_FUNC(sub_82697400);
PPC_FUNC_IMPL(__imp__sub_82697400) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// b 0x8269b308
	sub_8269B308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82697408"))) PPC_WEAK_FUNC(sub_82697408);
PPC_FUNC_IMPL(__imp__sub_82697408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// b 0x8269b268
	sub_8269B268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82697410"))) PPC_WEAK_FUNC(sub_82697410);
PPC_FUNC_IMPL(__imp__sub_82697410) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// b 0x8269a860
	sub_8269A860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82697418"))) PPC_WEAK_FUNC(sub_82697418);
PPC_FUNC_IMPL(__imp__sub_82697418) {
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
	// beq 0x82697458
	if (cr0.eq) goto loc_82697458;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8544
	ctx.r3.s64 = r11.s64 + 8544;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82697460
	goto loc_82697460;
loc_82697458:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82697460:
	// rlwinm r3,r31,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
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

__attribute__((alias("__imp__sub_8269747C"))) PPC_WEAK_FUNC(sub_8269747C);
PPC_FUNC_IMPL(__imp__sub_8269747C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697480"))) PPC_WEAK_FUNC(sub_82697480);
PPC_FUNC_IMPL(__imp__sub_82697480) {
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
	// beq 0x826974c0
	if (cr0.eq) goto loc_826974C0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8604
	ctx.r3.s64 = r11.s64 + 8604;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826974c8
	goto loc_826974C8;
loc_826974C0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_826974C8:
	// mulli r3,r31,28
	ctx.r3.s64 = r31.s64 * 28;
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

__attribute__((alias("__imp__sub_826974E4"))) PPC_WEAK_FUNC(sub_826974E4);
PPC_FUNC_IMPL(__imp__sub_826974E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826974E8"))) PPC_WEAK_FUNC(sub_826974E8);
PPC_FUNC_IMPL(__imp__sub_826974E8) {
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
	// beq 0x82697528
	if (cr0.eq) goto loc_82697528;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8624
	ctx.r3.s64 = r11.s64 + 8624;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82697530
	goto loc_82697530;
loc_82697528:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82697530:
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

__attribute__((alias("__imp__sub_8269754C"))) PPC_WEAK_FUNC(sub_8269754C);
PPC_FUNC_IMPL(__imp__sub_8269754C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697550"))) PPC_WEAK_FUNC(sub_82697550);
PPC_FUNC_IMPL(__imp__sub_82697550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d5e8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// fmr f28,f4
	f28.f64 = ctx.f4.f64;
	// lwz r31,24(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// bge cr6,0x826975c0
	if (!cr6.lt) goto loc_826975C0;
	// mulli r29,r31,28
	r29.s64 = r31.s64 * 28;
loc_8269758C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lfs f5,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 236);
	ctx.f5.f64 = double(temp.f32);
	// fmr f4,f28
	ctx.f4.f64 = f28.f64;
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269b868
	sub_8269B868(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x8269758c
	if (cr6.lt) goto loc_8269758C;
loc_826975C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-32
	r12.s64 = ctx.r1.s64 + -32;
	// bl 0x8239d634
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826975D0"))) PPC_WEAK_FUNC(sub_826975D0);
PPC_FUNC_IMPL(__imp__sub_826975D0) {
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
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8269b940
	sub_8269B940(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

__attribute__((alias("__imp__sub_8269761C"))) PPC_WEAK_FUNC(sub_8269761C);
PPC_FUNC_IMPL(__imp__sub_8269761C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697620"))) PPC_WEAK_FUNC(sub_82697620);
PPC_FUNC_IMPL(__imp__sub_82697620) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r29,-32127
	r29.s64 = -2105475072;
	// lbz r11,233(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 233);
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
	// beq 0x82697678
	if (cr0.eq) goto loc_82697678;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8227e088
	sub_8227E088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822bb768
	sub_822BB768(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82697678
	if (cr0.eq) goto loc_82697678;
	// li r11,0
	r11.s64 = 0;
	// stb r11,233(r31)
	PPC_STORE_U8(r31.u32 + 233, r11.u8);
loc_82697678:
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8227e088
	sub_8227E088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9288(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + -9288);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822bb788
	sub_822BB788(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826976ac
	if (cr0.eq) goto loc_826976AC;
	// lbz r11,233(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 233);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x826976b0
	if (cr0.eq) goto loc_826976B0;
loc_826976AC:
	// li r11,0
	r11.s64 = 0;
loc_826976B0:
	// lbz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x826976c4
	if (cr0.eq) goto loc_826976C4;
	// li r6,2
	ctx.r6.s64 = 2;
	// b 0x826976d4
	goto loc_826976D4;
loc_826976C4:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r6,r11,1
	ctx.r6.u64 = r11.u64 ^ 1;
loc_826976D4:
	// addi r4,r31,32
	ctx.r4.s64 = r31.s64 + 32;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 220);
	// bl 0x8269bc30
	sub_8269BC30(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826976FC"))) PPC_WEAK_FUNC(sub_826976FC);
PPC_FUNC_IMPL(__imp__sub_826976FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697700"))) PPC_WEAK_FUNC(sub_82697700);
PPC_FUNC_IMPL(__imp__sub_82697700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mulli r11,r4,28
	r11.s64 = ctx.r4.s64 * 28;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8269b5f8
	sub_8269B5F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82697710"))) PPC_WEAK_FUNC(sub_82697710);
PPC_FUNC_IMPL(__imp__sub_82697710) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mulli r11,r29,28
	r11.s64 = r29.s64 * 28;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// li r11,1
	r11.s64 = 1;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82697750
	if (cr6.gt) goto loc_82697750;
	// li r11,0
	r11.s64 = 0;
loc_82697750:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826977a8
	if (cr0.eq) goto loc_826977A8;
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826977a8
	if (!cr0.eq) goto loc_826977A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269b6b8
	sub_8269B6B8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// fmuls f0,f1,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82697798
	if (!cr6.gt) goto loc_82697798;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 - ctx.f13.f64));
	// bl 0x8269b7e8
	sub_8269B7E8(ctx, base);
	// b 0x8269779c
	goto loc_8269779C;
loc_82697798:
	// bl 0x8269b798
	sub_8269B798(ctx, base);
loc_8269779C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// bl 0x8269a6f0
	sub_8269A6F0(ctx, base);
loc_826977A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826977B4"))) PPC_WEAK_FUNC(sub_826977B4);
PPC_FUNC_IMPL(__imp__sub_826977B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826977B8"))) PPC_WEAK_FUNC(sub_826977B8);
PPC_FUNC_IMPL(__imp__sub_826977B8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r4,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r4.u32);
	// li r25,1
	r25.s64 = 1;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// bge cr6,0x826977e4
	if (!cr6.lt) goto loc_826977E4;
	// addi r11,r1,172
	r11.s64 = ctx.r1.s64 + 172;
loc_826977E4:
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x826978a4
	if (!cr6.lt) goto loc_826978A4;
	// mulli r26,r30,28
	r26.s64 = r30.s64 * 28;
	// lis r27,-32127
	r27.s64 = -2105475072;
loc_826977FC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r29,r11,r26
	r29.u64 = r11.u64 + r26.u64;
	// bl 0x8227e088
	sub_8227E088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9288(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9288);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822bb788
	sub_822BB788(ctx, base);
	// clrlwi. r28,r3,24
	r28.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82697860
	if (cr0.eq) goto loc_82697860;
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8269783c
	if (!cr0.eq) goto loc_8269783C;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x82697840
	if (cr0.eq) goto loc_82697840;
loc_8269783C:
	// li r11,1
	r11.s64 = 1;
loc_82697840:
	// lbz r10,232(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82697860
	if (!cr0.eq) goto loc_82697860;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82697860
	if (!cr0.eq) goto loc_82697860;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269b5b8
	sub_8269B5B8(ctx, base);
loc_82697860:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8227e088
	sub_8227E088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9288(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9288);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822bb7a8
	sub_822BB7A8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826978a0
	if (!cr0.eq) goto loc_826978A0;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826978a0
	if (cr6.eq) goto loc_826978A0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r26,r26,28
	r26.s64 = r26.s64 + 28;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x826977fc
	if (cr6.lt) goto loc_826977FC;
	// b 0x826978a4
	goto loc_826978A4;
loc_826978A0:
	// li r25,0
	r25.s64 = 0;
loc_826978A4:
	// stb r25,233(r31)
	PPC_STORE_U8(r31.u32 + 233, r25.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826978B0"))) PPC_WEAK_FUNC(sub_826978B0);
PPC_FUNC_IMPL(__imp__sub_826978B0) {
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
	// bl 0x82697418
	sub_82697418(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826978e8
	if (cr0.eq) goto loc_826978E8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
loc_826978E8:
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

__attribute__((alias("__imp__sub_826978FC"))) PPC_WEAK_FUNC(sub_826978FC);
PPC_FUNC_IMPL(__imp__sub_826978FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697900"))) PPC_WEAK_FUNC(sub_82697900);
PPC_FUNC_IMPL(__imp__sub_82697900) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r30,r31,8
	r30.s64 = r31.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x826974e8
	sub_826974E8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82697958"))) PPC_WEAK_FUNC(sub_82697958);
PPC_FUNC_IMPL(__imp__sub_82697958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,-1
	cr6.compare<int32_t>(r30.s32, -1, xer);
	// beq cr6,0x826979a8
	if (cr6.eq) goto loc_826979A8;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// beq cr6,0x82697998
	if (cr6.eq) goto loc_82697998;
	// bl 0x82697710
	sub_82697710(ctx, base);
loc_82697998:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269b208
	sub_8269B208(ctx, base);
loc_826979A8:
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

__attribute__((alias("__imp__sub_826979C4"))) PPC_WEAK_FUNC(sub_826979C4);
PPC_FUNC_IMPL(__imp__sub_826979C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826979C8"))) PPC_WEAK_FUNC(sub_826979C8);
PPC_FUNC_IMPL(__imp__sub_826979C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// bl 0x821f3398
	sub_821F3398(ctx, base);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r3,244(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// bl 0x821f3398
	sub_821F3398(ctx, base);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// li r11,1
	r11.s64 = 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// lwz r10,244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82697a34
	if (cr0.eq) goto loc_82697A34;
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
loc_82697A34:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lwz r30,140(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lfs f30,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f30.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f31.f64 = double(temp.f32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f4,f30
	ctx.f4.f64 = f30.f64;
	// lfs f1,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x821e8db0
	sub_821E8DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8229eae0
	sub_8229EAE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_82697AA4"))) PPC_WEAK_FUNC(sub_82697AA4);
PPC_FUNC_IMPL(__imp__sub_82697AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697AA8"))) PPC_WEAK_FUNC(sub_82697AA8);
PPC_FUNC_IMPL(__imp__sub_82697AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r3,240(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// bl 0x821f3398
	sub_821F3398(ctx, base);
	// lwz r11,240(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r10.u8);
	// lwz r11,244(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 244);
	// stb r9,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r9.u8);
	// lwz r3,264(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 264);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82697b0c
	if (cr0.eq) goto loc_82697B0C;
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
loc_82697B0C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r30,104(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// lfs f30,160(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 160);
	f30.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f3,f30
	ctx.f3.f64 = f30.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// bl 0x821e8db0
	sub_821E8DB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,256
	ctx.r3.s64 = r31.s64 + 256;
	// bl 0x8229eae0
	sub_8229EAE0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_82697B78"))) PPC_WEAK_FUNC(sub_82697B78);
PPC_FUNC_IMPL(__imp__sub_82697B78) {
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
	// bl 0x826978b0
	sub_826978B0(ctx, base);
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

__attribute__((alias("__imp__sub_82697BDC"))) PPC_WEAK_FUNC(sub_82697BDC);
PPC_FUNC_IMPL(__imp__sub_82697BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697BE0"))) PPC_WEAK_FUNC(sub_82697BE0);
PPC_FUNC_IMPL(__imp__sub_82697BE0) {
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
	// li r3,16
	ctx.r3.s64 = 16;
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

__attribute__((alias("__imp__sub_82697C34"))) PPC_WEAK_FUNC(sub_82697C34);
PPC_FUNC_IMPL(__imp__sub_82697C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697C38"))) PPC_WEAK_FUNC(sub_82697C38);
PPC_FUNC_IMPL(__imp__sub_82697C38) {
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
	// b 0x82697c68
	goto loc_82697C68;
loc_82697C58:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82697C68:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82697c58
	if (!cr6.eq) goto loc_82697C58;
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

__attribute__((alias("__imp__sub_82697C90"))) PPC_WEAK_FUNC(sub_82697C90);
PPC_FUNC_IMPL(__imp__sub_82697C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// li r10,28
	ctx.r10.s64 = 28;
	// divw. r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	f0.f64 = double(temp.f32);
loc_82697CA4:
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// mulli r9,r10,28
	ctx.r9.s64 = ctx.r10.s64 * 28;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lfs f13,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82697cc4
	if (cr6.lt) goto loc_82697CC4;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82697CC4:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82697cd4
	if (cr0.eq) goto loc_82697CD4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82697ce0
	goto loc_82697CE0;
loc_82697CD4:
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r3,r9,28
	ctx.r3.s64 = ctx.r9.s64 + 28;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82697CE0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82697ca4
	if (cr6.gt) goto loc_82697CA4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82697CEC"))) PPC_WEAK_FUNC(sub_82697CEC);
PPC_FUNC_IMPL(__imp__sub_82697CEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697CF0"))) PPC_WEAK_FUNC(sub_82697CF0);
PPC_FUNC_IMPL(__imp__sub_82697CF0) {
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
	// bl 0x826974e8
	sub_826974E8(ctx, base);
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

__attribute__((alias("__imp__sub_82697D30"))) PPC_WEAK_FUNC(sub_82697D30);
PPC_FUNC_IMPL(__imp__sub_82697D30) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// lwz r30,24(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r25,r11,24
	r25.u64 = r11.u32 & 0xFF;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bge cr6,0x82697e2c
	if (!cr6.lt) goto loc_82697E2C;
	// mulli r28,r30,28
	r28.s64 = r30.s64 * 28;
	// lis r27,-32127
	r27.s64 = -2105475072;
loc_82697D70:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r29,r28,r11
	r29.u64 = r28.u64 + r11.u64;
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82697da4
	if (cr0.eq) goto loc_82697DA4;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 16);
	f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f13,12(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82697d9c
	if (cr6.gt) goto loc_82697D9C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82697D9C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82697e18
	if (cr0.eq) goto loc_82697E18;
loc_82697DA4:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82697e18
	if (!cr0.eq) goto loc_82697E18;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82697e18
	if (!cr0.eq) goto loc_82697E18;
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82697dc4
	if (cr0.eq) goto loc_82697DC4;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82697e10
	goto loc_82697E10;
loc_82697DC4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8227e088
	sub_8227E088(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9288(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + -9288);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x822bb788
	sub_822BB788(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82697dfc
	if (cr0.eq) goto loc_82697DFC;
	// lbz r11,25(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 25);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82697dfc
	if (!cr0.eq) goto loc_82697DFC;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x82697e00
	if (cr0.eq) goto loc_82697E00;
loc_82697DFC:
	// li r11,0
	r11.s64 = 0;
loc_82697E00:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r4,r11,1
	ctx.r4.u64 = r11.u64 ^ 1;
loc_82697E10:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269b5b8
	sub_8269B5B8(ctx, base);
loc_82697E18:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,28
	r28.s64 = r28.s64 + 28;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x82697d70
	if (cr6.lt) goto loc_82697D70;
loc_82697E2C:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// bl 0x8269a708
	sub_8269A708(ctx, base);
	// stb r26,232(r31)
	PPC_STORE_U8(r31.u32 + 232, r26.u8);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82697e4c
	if (cr0.eq) goto loc_82697E4C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826979c8
	sub_826979C8(ctx, base);
loc_82697E4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82697E54"))) PPC_WEAK_FUNC(sub_82697E54);
PPC_FUNC_IMPL(__imp__sub_82697E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82697E58"))) PPC_WEAK_FUNC(sub_82697E58);
PPC_FUNC_IMPL(__imp__sub_82697E58) {
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
	// lwz r16,31256(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31256);
	// mflr r12
	// bl 0x8239bce8
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82697f64
	if (cr0.eq) goto loc_82697F64;
	// lwz r28,240(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// addi r25,r28,48
	r25.s64 = r28.s64 + 48;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// lwz r27,244(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// addi r24,r27,48
	r24.s64 = r27.s64 + 48;
	// stw r27,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r27.u32);
	// stw r24,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r24.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r10,232(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r11,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r11.u32);
	// beq 0x82697ef8
	if (cr0.eq) goto loc_82697EF8;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x82697f10
	if (!cr6.lt) goto loc_82697F10;
	// mulli r26,r29,28
	r26.s64 = r29.s64 * 28;
loc_82697ED0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r26,r11
	ctx.r3.u64 = r26.u64 + r11.u64;
	// bl 0x8269b810
	sub_8269B810(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,28
	r26.s64 = r26.s64 + 28;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82697ed0
	if (cr6.lt) goto loc_82697ED0;
	// b 0x82697f10
	goto loc_82697F10;
loc_82697EF8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82697f10
	if (!cr6.eq) goto loc_82697F10;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8269b810
	sub_8269B810(ctx, base);
loc_82697F10:
	// lwz r11,248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821f39f0
	sub_821F39F0(ctx, base);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x821f39f0
	sub_821F39F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
	// b 0x82697f78
	goto loc_82697F78;
loc_82697F64:
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// li r11,0
	r11.s64 = 0;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
loc_82697F78:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82697E60"))) PPC_WEAK_FUNC(sub_82697E60);
PPC_FUNC_IMPL(__imp__sub_82697E60) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,264(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82697f64
	if (cr0.eq) goto loc_82697F64;
	// lwz r28,240(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// addi r25,r28,48
	r25.s64 = r28.s64 + 48;
	// stw r28,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r28.u32);
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// lwz r27,244(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// addi r24,r27,48
	r24.s64 = r27.s64 + 48;
	// stw r27,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r27.u32);
	// stw r24,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r24.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lbz r10,232(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 232);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// stw r11,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r11.u32);
	// beq 0x82697ef8
	if (cr0.eq) goto loc_82697EF8;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x82697f10
	if (!cr6.lt) goto loc_82697F10;
	// mulli r26,r29,28
	r26.s64 = r29.s64 * 28;
loc_82697ED0:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r26,r11
	ctx.r3.u64 = r26.u64 + r11.u64;
	// bl 0x8269b810
	sub_8269B810(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r26,r26,28
	r26.s64 = r26.s64 + 28;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82697ed0
	if (cr6.lt) goto loc_82697ED0;
	// b 0x82697f10
	goto loc_82697F10;
loc_82697EF8:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82697f10
	if (!cr6.eq) goto loc_82697F10;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x8269b810
	sub_8269B810(ctx, base);
loc_82697F10:
	// lwz r11,248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// addi r6,r31,84
	ctx.r6.s64 = r31.s64 + 84;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// stw r25,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r25.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x821f39f0
	sub_821F39F0(ctx, base);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x821f39f0
	sub_821F39F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
	// b 0x82697f78
	goto loc_82697F78;
loc_82697F64:
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// li r11,0
	r11.s64 = 0;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
loc_82697F78:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82697F80"))) PPC_WEAK_FUNC(sub_82697F80);
PPC_FUNC_IMPL(__imp__sub_82697F80) {
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
	// bl 0x821c4928
	sub_821C4928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82697FA8"))) PPC_WEAK_FUNC(sub_82697FA8);
PPC_FUNC_IMPL(__imp__sub_82697FA8) {
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
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x821c4928
	sub_821C4928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82697FD0"))) PPC_WEAK_FUNC(sub_82697FD0);
PPC_FUNC_IMPL(__imp__sub_82697FD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,31344(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31344);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r29,240(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// lbz r11,8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269806c
	if (cr0.eq) goto loc_8269806C;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// lwz r11,248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8269803c
	if (cr0.eq) goto loc_8269803C;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821f3828
	sub_821F3828(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
loc_8269803C:
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r11,248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
loc_8269806C:
	// lwz r29,244(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// lbz r11,8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826980e8
	if (cr0.eq) goto loc_826980E8;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826980b8
	if (cr0.eq) goto loc_826980B8;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821f3828
	sub_821F3828(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r11.u32);
loc_826980B8:
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
loc_826980E8:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82697FD8"))) PPC_WEAK_FUNC(sub_82697FD8);
PPC_FUNC_IMPL(__imp__sub_82697FD8) {
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
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r29,240(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// lbz r11,8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269806c
	if (cr0.eq) goto loc_8269806C;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// lwz r11,248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8269803c
	if (cr0.eq) goto loc_8269803C;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821f3828
	sub_821F3828(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
loc_8269803C:
	// lwz r10,240(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r11,248(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
loc_8269806C:
	// lwz r29,244(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// lbz r11,8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826980e8
	if (cr0.eq) goto loc_826980E8;
	// addi r4,r29,48
	ctx.r4.s64 = r29.s64 + 48;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r4,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r4.u32);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// subf r10,r11,r4
	ctx.r10.s64 = ctx.r4.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826980b8
	if (cr0.eq) goto loc_826980B8;
	// addi r6,r31,96
	ctx.r6.s64 = r31.s64 + 96;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x821f3828
	sub_821F3828(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r11.u32);
loc_826980B8:
	// lwz r10,244(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// addi r5,r11,8
	ctx.r5.s64 = r11.s64 + 8;
	// lwz r11,44(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r3,r11,64
	ctx.r3.s64 = r11.s64 + 64;
	// bl 0x8226a630
	sub_8226A630(ctx, base);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821f3168
	sub_821F3168(ctx, base);
loc_826980E8:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826980F0"))) PPC_WEAK_FUNC(sub_826980F0);
PPC_FUNC_IMPL(__imp__sub_826980F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821c4928
	sub_821C4928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698118"))) PPC_WEAK_FUNC(sub_82698118);
PPC_FUNC_IMPL(__imp__sub_82698118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x821c4928
	sub_821C4928(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698140"))) PPC_WEAK_FUNC(sub_82698140);
PPC_FUNC_IMPL(__imp__sub_82698140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r4,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r4.s64 = r11.s32 >> 2;
	// bl 0x82697900
	sub_82697900(ctx, base);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82122018
	sub_82122018(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
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

__attribute__((alias("__imp__sub_826981B4"))) PPC_WEAK_FUNC(sub_826981B4);
PPC_FUNC_IMPL(__imp__sub_826981B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826981B8"))) PPC_WEAK_FUNC(sub_826981B8);
PPC_FUNC_IMPL(__imp__sub_826981B8) {
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
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x826982a8
	if (cr6.eq) goto loc_826982A8;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r4.s64;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r29,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r29.s64 = ctx.r10.s32 >> 2;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x8269823c
	if (!cr6.gt) goto loc_8269823C;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82697cf0
	sub_82697CF0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
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
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82698298
	goto loc_82698298;
loc_8269823C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// blt cr6,0x82698260
	if (cr6.lt) goto loc_82698260;
	// subf. r5,r4,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82698298
	if (cr0.eq) goto loc_82698298;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// b 0x82698298
	goto loc_82698298;
loc_82698260:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// add. r5,r11,r4
	ctx.r5.u64 = r11.u64 + ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82698274
	if (cr0.eq) goto loc_82698274;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_82698274:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r11,r5
	r11.s64 = ctx.r5.s64 - r11.s64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
loc_82698298:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_826982A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826982B4"))) PPC_WEAK_FUNC(sub_826982B4);
PPC_FUNC_IMPL(__imp__sub_826982B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826982B8"))) PPC_WEAK_FUNC(sub_826982B8);
PPC_FUNC_IMPL(__imp__sub_826982B8) {
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
	// b 0x826982f0
	goto loc_826982F0;
loc_826982D8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r3,r11,-28
	ctx.r3.s64 = r11.s64 + -28;
	// bl 0x8269bd00
	sub_8269BD00(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-28
	r11.s64 = r11.s64 + -28;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826982F0:
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
	// bne 0x826982d8
	if (!cr0.eq) goto loc_826982D8;
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

__attribute__((alias("__imp__sub_82698328"))) PPC_WEAK_FUNC(sub_82698328);
PPC_FUNC_IMPL(__imp__sub_82698328) {
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
	// addi r31,r30,16
	r31.s64 = r30.s64 + 16;
	// b 0x82698394
	goto loc_82698394;
loc_82698348:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826983a8
	if (!cr0.eq) goto loc_826983A8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82697be0
	sub_82697BE0(ctx, base);
loc_82698394:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82698348
	if (cr0.eq) goto loc_82698348;
loc_826983A8:
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

__attribute__((alias("__imp__sub_826983C0"))) PPC_WEAK_FUNC(sub_826983C0);
PPC_FUNC_IMPL(__imp__sub_826983C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mulli r11,r30,28
	r11.s64 = r30.s64 * 28;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x8269b658
	sub_8269B658(ctx, base);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// bl 0x82697b78
	sub_82697B78(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// lbz r6,232(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 232);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269b058
	sub_8269B058(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82698434"))) PPC_WEAK_FUNC(sub_82698434);
PPC_FUNC_IMPL(__imp__sub_82698434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82698438"))) PPC_WEAK_FUNC(sub_82698438);
PPC_FUNC_IMPL(__imp__sub_82698438) {
	PPC_FUNC_PROLOGUE();
	// b 0x82697c38
	sub_82697C38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269843C"))) PPC_WEAK_FUNC(sub_8269843C);
PPC_FUNC_IMPL(__imp__sub_8269843C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82698440"))) PPC_WEAK_FUNC(sub_82698440);
PPC_FUNC_IMPL(__imp__sub_82698440) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82698478
	if (cr6.eq) goto loc_82698478;
loc_82698464:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269bd00
	sub_8269BD00(ctx, base);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82698464
	if (!cr6.eq) goto loc_82698464;
loc_82698478:
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

__attribute__((alias("__imp__sub_82698490"))) PPC_WEAK_FUNC(sub_82698490);
PPC_FUNC_IMPL(__imp__sub_82698490) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x82698140
	sub_82698140(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// lbz r10,25(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// rlwimi r11,r10,0,24,24
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x80) | (r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// rlwimi r10,r11,0,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// rlwimi r10,r11,0,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// rlwimi r10,r11,0,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// stb r10,25(r31)
	PPC_STORE_U8(r31.u32 + 25, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_82698538"))) PPC_WEAK_FUNC(sub_82698538);
PPC_FUNC_IMPL(__imp__sub_82698538) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x826981b8
	sub_826981B8(ctx, base);
	// lfs f0,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f0,12(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 12, temp.u32);
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 16, temp.u32);
	// lfs f0,20(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 20, temp.u32);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// stb r11,24(r31)
	PPC_STORE_U8(r31.u32 + 24, r11.u8);
	// lbz r10,25(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// rlwimi r11,r10,0,24,24
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x80) | (r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// rlwimi r10,r11,0,25,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x40) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFBF);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// rlwimi r10,r11,0,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// clrlwi r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r11,25(r31)
	PPC_STORE_U8(r31.u32 + 25, r11.u8);
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// rlwimi r10,r11,0,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// stb r10,25(r31)
	PPC_STORE_U8(r31.u32 + 25, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_826985E0"))) PPC_WEAK_FUNC(sub_826985E0);
PPC_FUNC_IMPL(__imp__sub_826985E0) {
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
	// lwz r16,31432(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31432);
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
	// beq cr6,0x82698610
	if (cr6.eq) goto loc_82698610;
	// bl 0x82698490
	sub_82698490(ctx, base);
loc_82698610:
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

__attribute__((alias("__imp__sub_826985E8"))) PPC_WEAK_FUNC(sub_826985E8);
PPC_FUNC_IMPL(__imp__sub_826985E8) {
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
	// beq cr6,0x82698610
	if (cr6.eq) goto loc_82698610;
	// bl 0x82698490
	sub_82698490(ctx, base);
loc_82698610:
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

__attribute__((alias("__imp__sub_82698624"))) PPC_WEAK_FUNC(sub_82698624);
PPC_FUNC_IMPL(__imp__sub_82698624) {
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

__attribute__((alias("__imp__sub_82698650"))) PPC_WEAK_FUNC(sub_82698650);
PPC_FUNC_IMPL(__imp__sub_82698650) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// bl 0x82698328
	sub_82698328(ctx, base);
	// addi r27,r30,16
	r27.s64 = r30.s64 + 16;
	// lfs f0,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 280);
	f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	f31.f64 = double(float(f0.f64 + f31.f64));
	// lwz r28,0(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// b 0x82698714
	goto loc_82698714;
loc_82698680:
	// addi r29,r28,8
	r29.s64 = r28.s64 + 8;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r31,r11,r10
	r31.u64 = r11.u64 + ctx.r10.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
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
	// beq 0x82698710
	if (cr0.eq) goto loc_82698710;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f13,12(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x826986cc
	if (cr6.gt) goto loc_826986CC;
	// li r11,0
	r11.s64 = 0;
loc_826986CC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82698710
	if (cr0.eq) goto loc_82698710;
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82698710
	if (!cr0.eq) goto loc_82698710;
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f31.f64);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ble cr6,0x826986f8
	if (!cr6.gt) goto loc_826986F8;
	// fsubs f1,f31,f13
	ctx.f1.f64 = double(float(f31.f64 - ctx.f13.f64));
	// bl 0x8269b7e8
	sub_8269B7E8(ctx, base);
	// b 0x82698710
	goto loc_82698710;
loc_826986F8:
	// bl 0x8269b798
	sub_8269B798(ctx, base);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// bl 0x8269a6f0
	sub_8269A6F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269b6b8
	sub_8269B6B8(ctx, base);
loc_82698710:
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
loc_82698714:
	// subf r11,r28,r27
	r11.s64 = r27.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82698680
	if (!cr0.eq) goto loc_82698680;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82698738"))) PPC_WEAK_FUNC(sub_82698738);
PPC_FUNC_IMPL(__imp__sub_82698738) {
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
	// lwz r16,31488(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31488);
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
	// beq cr6,0x82698768
	if (cr6.eq) goto loc_82698768;
	// bl 0x82698490
	sub_82698490(ctx, base);
loc_82698768:
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

__attribute__((alias("__imp__sub_82698740"))) PPC_WEAK_FUNC(sub_82698740);
PPC_FUNC_IMPL(__imp__sub_82698740) {
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
	// beq cr6,0x82698768
	if (cr6.eq) goto loc_82698768;
	// bl 0x82698490
	sub_82698490(ctx, base);
loc_82698768:
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

__attribute__((alias("__imp__sub_8269877C"))) PPC_WEAK_FUNC(sub_8269877C);
PPC_FUNC_IMPL(__imp__sub_8269877C) {
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

__attribute__((alias("__imp__sub_826987A8"))) PPC_WEAK_FUNC(sub_826987A8);
PPC_FUNC_IMPL(__imp__sub_826987A8) {
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
	// bl 0x826982b8
	sub_826982B8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,28
	r11.s64 = 28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
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

__attribute__((alias("__imp__sub_8269880C"))) PPC_WEAK_FUNC(sub_8269880C);
PPC_FUNC_IMPL(__imp__sub_8269880C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82698810"))) PPC_WEAK_FUNC(sub_82698810);
PPC_FUNC_IMPL(__imp__sub_82698810) {
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
	// bl 0x826982b8
	sub_826982B8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,28
	r11.s64 = 28;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// divw r11,r10,r11
	r11.s32 = ctx.r10.s32 / r11.s32;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
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

__attribute__((alias("__imp__sub_82698874"))) PPC_WEAK_FUNC(sub_82698874);
PPC_FUNC_IMPL(__imp__sub_82698874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82698878"))) PPC_WEAK_FUNC(sub_82698878);
PPC_FUNC_IMPL(__imp__sub_82698878) {
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
	// lwz r16,31588(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31588);
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
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_826988AC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826988d4
	if (cr6.eq) goto loc_826988D4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826985e8
	sub_826985E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x826988ac
	goto loc_826988AC;
loc_826988D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82698880"))) PPC_WEAK_FUNC(sub_82698880);
PPC_FUNC_IMPL(__imp__sub_82698880) {
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
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
loc_826988AC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826988d4
	if (cr6.eq) goto loc_826988D4;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826985e8
	sub_826985E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x826988ac
	goto loc_826988AC;
loc_826988D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826988E0"))) PPC_WEAK_FUNC(sub_826988E0);
PPC_FUNC_IMPL(__imp__sub_826988E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r12{};
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
	// lwz r16,31588(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31588);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82698440
	sub_82698440(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31692(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31692);
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
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_82698944:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8269896c
	if (cr6.eq) goto loc_8269896C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826985e8
	sub_826985E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x82698944
	goto loc_82698944;
loc_8269896C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826988E8"))) PPC_WEAK_FUNC(sub_826988E8);
PPC_FUNC_IMPL(__imp__sub_826988E8) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82698440
	sub_82698440(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82698918"))) PPC_WEAK_FUNC(sub_82698918);
PPC_FUNC_IMPL(__imp__sub_82698918) {
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
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_82698944:
	// cmplw cr6,r30,r28
	cr6.compare<uint32_t>(r30.u32, r28.u32, xer);
	// beq cr6,0x8269896c
	if (cr6.eq) goto loc_8269896C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826985e8
	sub_826985E8(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// addi r30,r30,28
	r30.s64 = r30.s64 + 28;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// b 0x82698944
	goto loc_82698944;
loc_8269896C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82698978"))) PPC_WEAK_FUNC(sub_82698978);
PPC_FUNC_IMPL(__imp__sub_82698978) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
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
	// lwz r16,31692(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31692);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82698440
	sub_82698440(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// bl 0x8239bcf4
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d5e8
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f31,228(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 276);
	f0.f64 = double(temp.f32);
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// li r29,28
	r29.s64 = 28;
	// fadds f28,f0,f29
	f28.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82698a10
	goto loc_82698A10;
loc_826989EC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// bge cr6,0x82698a2c
	if (!cr6.lt) goto loc_82698A2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826975d0
	sub_826975D0(ctx, base);
loc_82698A10:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826989ec
	if (cr6.lt) goto loc_826989EC;
loc_82698A2C:
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 272);
	f0.f64 = double(temp.f32);
	// fadds f30,f0,f29
	f30.f64 = double(float(f0.f64 + f29.f64));
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// blt cr6,0x82698a50
	if (cr6.lt) goto loc_82698A50;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82698A50:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82698a84
	goto loc_82698A84;
loc_82698A5C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x82698a9c
	if (!cr6.lt) goto loc_82698A9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82697620
	sub_82697620(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82698A84:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82698a5c
	if (cr6.lt) goto loc_82698A5C;
loc_82698A9C:
	// lbz r11,8(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 8);
	// lfs f12,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82698adc
	if (cr0.eq) goto loc_82698ADC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82698b08
	if (cr6.lt) goto loc_82698B08;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// b 0x82698b08
	goto loc_82698B08;
loc_82698ADC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82698b08
	if (cr6.gt) goto loc_82698B08;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82698B08:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r11,268(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 268);
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82698b54
	if (cr0.eq) goto loc_82698B54;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82698b54
	if (!cr6.eq) goto loc_82698B54;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 - f0.f64));
	// lfs f0,-1468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1468);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82698b54
	if (!cr6.gt) goto loc_82698B54;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,268(r31)
	PPC_STORE_U8(r31.u32 + 268, r11.u8);
	// bl 0x82697aa8
	sub_82697AA8(ctx, base);
loc_82698B54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82698650
	sub_82698650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f4,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82697550
	sub_82697550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82697e60
	sub_82697E60(ctx, base);
	// lbz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U8(r27.u32 + 8);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269a778
	sub_8269A778(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d634
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82698980"))) PPC_WEAK_FUNC(sub_82698980);
PPC_FUNC_IMPL(__imp__sub_82698980) {
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
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82698440
	sub_82698440(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_826989A8"))) PPC_WEAK_FUNC(sub_826989A8);
PPC_FUNC_IMPL(__imp__sub_826989A8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stfs f31,228(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 228, temp.u32);
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// fmuls f29,f1,f31
	ctx.fpscr.disableFlushMode();
	f29.f64 = double(float(ctx.f1.f64 * f31.f64));
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 276);
	f0.f64 = double(temp.f32);
	// addi r28,r31,24
	r28.s64 = r31.s64 + 24;
	// li r29,28
	r29.s64 = 28;
	// fadds f28,f0,f29
	f28.f64 = double(float(f0.f64 + f29.f64));
	// b 0x82698a10
	goto loc_82698A10;
loc_826989EC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f28
	cr6.compare(f0.f64, f28.f64);
	// bge cr6,0x82698a2c
	if (!cr6.lt) goto loc_82698A2C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826975d0
	sub_826975D0(ctx, base);
loc_82698A10:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x826989ec
	if (cr6.lt) goto loc_826989EC;
loc_82698A2C:
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lfs f0,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 272);
	f0.f64 = double(temp.f32);
	// fadds f30,f0,f29
	f30.f64 = double(float(f0.f64 + f29.f64));
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// blt cr6,0x82698a50
	if (cr6.lt) goto loc_82698A50;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82698A50:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x82698a84
	goto loc_82698A84;
loc_82698A5C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mulli r11,r11,28
	r11.s64 = r11.s64 * 28;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x82698a9c
	if (!cr6.lt) goto loc_82698A9C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82697620
	sub_82697620(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
loc_82698A84:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// divw r10,r10,r29
	ctx.r10.s32 = ctx.r10.s32 / r29.s32;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82698a5c
	if (cr6.lt) goto loc_82698A5C;
loc_82698A9C:
	// lbz r11,8(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 8);
	// lfs f12,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 236);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82698adc
	if (cr0.eq) goto loc_82698ADC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f13,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82698b08
	if (cr6.lt) goto loc_82698B08;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// b 0x82698b08
	goto loc_82698B08;
loc_82698ADC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,24112(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 24112);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x82698b08
	if (cr6.gt) goto loc_82698B08;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
loc_82698B08:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// lbz r11,268(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 268);
	// stfs f0,236(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 236, temp.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82698b54
	if (cr0.eq) goto loc_82698B54;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82698b54
	if (!cr6.eq) goto loc_82698B54;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 - f0.f64));
	// lfs f0,-1468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1468);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82698b54
	if (!cr6.gt) goto loc_82698B54;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,268(r31)
	PPC_STORE_U8(r31.u32 + 268, r11.u8);
	// bl 0x82697aa8
	sub_82697AA8(ctx, base);
loc_82698B54:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82698650
	sub_82698650(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f4,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f28
	ctx.f3.f64 = f28.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82697550
	sub_82697550(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82697e60
	sub_82697E60(ctx, base);
	// lbz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U8(r27.u32 + 8);
	// lwz r3,224(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269a778
	sub_8269A778(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	r12.s64 = ctx.r1.s64 + -48;
	// bl 0x8239d634
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82698BA4"))) PPC_WEAK_FUNC(sub_82698BA4);
PPC_FUNC_IMPL(__imp__sub_82698BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82698BA8"))) PPC_WEAK_FUNC(sub_82698BA8);
PPC_FUNC_IMPL(__imp__sub_82698BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,31752(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31752);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82698bf4
	if (!cr6.lt) goto loc_82698BF4;
loc_82698BDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826975d0
	sub_826975D0(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82698bdc
	if (cr6.lt) goto loc_82698BDC;
loc_82698BF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82698328
	sub_82698328(ctx, base);
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// bl 0x8269a7f8
	sub_8269A7F8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// lfs f0,276(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 276);
	f0.f64 = double(temp.f32);
	// fmadds f2,f1,f31,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * f31.f64 + f0.f64));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8269baa0
	sub_8269BAA0(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r28,0
	r28.s64 = 0;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x82697c90
	sub_82697C90(ctx, base);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r9,r29,r3
	ctx.r9.s64 = ctx.r3.s64 - r29.s64;
	// divw r29,r9,r10
	r29.s32 = ctx.r9.s32 / ctx.r10.s32;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x82698c90
	if (!cr6.lt) goto loc_82698C90;
	// mulli r26,r29,28
	r26.s64 = r29.s64 * 28;
loc_82698C70:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r3,r26,r11
	ctx.r3.u64 = r26.u64 + r11.u64;
	// bl 0x8269b598
	sub_8269B598(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,28
	r26.s64 = r26.s64 + 28;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82698c70
	if (cr6.lt) goto loc_82698C70;
loc_82698C90:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r28.u8);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stb r28,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r28.u8);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stb r28,233(r30)
	PPC_STORE_U8(r30.u32 + 233, r28.u8);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stb r28,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r28.u8);
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// bl 0x826989a8
	sub_826989A8(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8269bd00
	sub_8269BD00(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82698BB0"))) PPC_WEAK_FUNC(sub_82698BB0);
PPC_FUNC_IMPL(__imp__sub_82698BB0) {
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
	// addi r31,r1,-224
	r31.s64 = ctx.r1.s64 + -224;
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82698bf4
	if (!cr6.lt) goto loc_82698BF4;
loc_82698BDC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826975d0
	sub_826975D0(ctx, base);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x82698bdc
	if (cr6.lt) goto loc_82698BDC;
loc_82698BF4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82698328
	sub_82698328(ctx, base);
	// lwz r3,224(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// bl 0x8269a7f8
	sub_8269A7F8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// lfs f0,276(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 276);
	f0.f64 = double(temp.f32);
	// fmadds f2,f1,f31,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * f31.f64 + f0.f64));
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x8269baa0
	sub_8269BAA0(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r28,0
	r28.s64 = 0;
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r5,r31,128
	ctx.r5.s64 = r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r28,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r28.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x82697c90
	sub_82697C90(ctx, base);
	// li r10,28
	ctx.r10.s64 = 28;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r9,r29,r3
	ctx.r9.s64 = ctx.r3.s64 - r29.s64;
	// divw r29,r9,r10
	r29.s32 = ctx.r9.s32 / ctx.r10.s32;
	// mr r27,r29
	r27.u64 = r29.u64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bge cr6,0x82698c90
	if (!cr6.lt) goto loc_82698C90;
	// mulli r26,r29,28
	r26.s64 = r29.s64 * 28;
loc_82698C70:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r3,r26,r11
	ctx.r3.u64 = r26.u64 + r11.u64;
	// bl 0x8269b598
	sub_8269B598(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,28
	r26.s64 = r26.s64 + 28;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x82698c70
	if (cr6.lt) goto loc_82698C70;
loc_82698C90:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r28,96(r31)
	PPC_STORE_U8(r31.u32 + 96, r28.u8);
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// stb r28,97(r31)
	PPC_STORE_U8(r31.u32 + 97, r28.u8);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stb r28,233(r30)
	PPC_STORE_U8(r30.u32 + 233, r28.u8);
	// stfs f0,100(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 100, temp.u32);
	// stb r28,104(r31)
	PPC_STORE_U8(r31.u32 + 104, r28.u8);
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// bl 0x826989a8
	sub_826989A8(ctx, base);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8269bd00
	sub_8269BD00(ctx, base);
	// addi r1,r31,224
	ctx.r1.s64 = r31.s64 + 224;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82698CDC"))) PPC_WEAK_FUNC(sub_82698CDC);
PPC_FUNC_IMPL(__imp__sub_82698CDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-224
	r31.s64 = r12.s64 + -224;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x8269bd00
	sub_8269BD00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698D04"))) PPC_WEAK_FUNC(sub_82698D04);
PPC_FUNC_IMPL(__imp__sub_82698D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82698D08"))) PPC_WEAK_FUNC(sub_82698D08);
PPC_FUNC_IMPL(__imp__sub_82698D08) {
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
	// lwz r16,31824(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31824);
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
	// bl 0x826982b8
	sub_826982B8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82698d74
	if (cr0.eq) goto loc_82698D74;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,28
	ctx.r10.s64 = 28;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82698D74:
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

__attribute__((alias("__imp__sub_82698D10"))) PPC_WEAK_FUNC(sub_82698D10);
PPC_FUNC_IMPL(__imp__sub_82698D10) {
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
	// bl 0x826982b8
	sub_826982B8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82698d74
	if (cr0.eq) goto loc_82698D74;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,28
	ctx.r10.s64 = 28;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82698D74:
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

__attribute__((alias("__imp__sub_82698D8C"))) PPC_WEAK_FUNC(sub_82698D8C);
PPC_FUNC_IMPL(__imp__sub_82698D8C) {
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
	// bl 0x8228dc38
	sub_8228DC38(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82698DB4"))) PPC_WEAK_FUNC(sub_82698DB4);
PPC_FUNC_IMPL(__imp__sub_82698DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82698DB8"))) PPC_WEAK_FUNC(sub_82698DB8);
PPC_FUNC_IMPL(__imp__sub_82698DB8) {
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
	// lwz r16,31932(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31932);
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
	// bl 0x82697480
	sub_82697480(ctx, base);
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
	// bl 0x82698918
	sub_82698918(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82698DC0"))) PPC_WEAK_FUNC(sub_82698DC0);
PPC_FUNC_IMPL(__imp__sub_82698DC0) {
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
	// bl 0x82697480
	sub_82697480(ctx, base);
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
	// bl 0x82698918
	sub_82698918(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82698E1C"))) PPC_WEAK_FUNC(sub_82698E1C);
PPC_FUNC_IMPL(__imp__sub_82698E1C) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,31932(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 31932);
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
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r11,28
	r11.s64 = 28;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw. r30,r10,r11
	r30.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82698e98
	if (!cr0.gt) goto loc_82698E98;
	// subf r27,r29,r5
	r27.s64 = ctx.r5.s64 - r29.s64;
loc_82698E80:
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82698538
	sub_82698538(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// bgt 0x82698e80
	if (cr0.gt) goto loc_82698E80;
loc_82698E98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82698440
	sub_82698440(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82698E24"))) PPC_WEAK_FUNC(sub_82698E24);
PPC_FUNC_IMPL(__imp__sub_82698E24) {
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
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82698E50"))) PPC_WEAK_FUNC(sub_82698E50);
PPC_FUNC_IMPL(__imp__sub_82698E50) {
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
	// li r11,28
	r11.s64 = 28;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw. r30,r10,r11
	r30.s32 = ctx.r10.s32 / r11.s32;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// ble 0x82698e98
	if (!cr0.gt) goto loc_82698E98;
	// subf r27,r29,r5
	r27.s64 = ctx.r5.s64 - r29.s64;
loc_82698E80:
	// add r4,r27,r31
	ctx.r4.u64 = r27.u64 + r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82698538
	sub_82698538(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r31,r31,28
	r31.s64 = r31.s64 + 28;
	// bgt 0x82698e80
	if (cr0.gt) goto loc_82698E80;
loc_82698E98:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// bl 0x82698440
	sub_82698440(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r31,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82698EB4"))) PPC_WEAK_FUNC(sub_82698EB4);
PPC_FUNC_IMPL(__imp__sub_82698EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82698EB8"))) PPC_WEAK_FUNC(sub_82698EB8);
PPC_FUNC_IMPL(__imp__sub_82698EB8) {
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
	// lwz r16,32036(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 32036);
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
	// li r10,28
	ctx.r10.s64 = 28;
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
	// blt cr6,0x82698f18
	if (cr6.lt) goto loc_82698F18;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82698F18:
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
	// bl 0x82697480
	sub_82697480(ctx, base);
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
	// bl 0x82698918
	sub_82698918(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x82698f80
	if (!cr6.eq) goto loc_82698F80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82698740
	sub_82698740(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// b 0x82698f98
	goto loc_82698F98;
loc_82698F80:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82698880
	sub_82698880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82698F98:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82698fc0
	if (!cr0.eq) goto loc_82698FC0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82698918
	sub_82698918(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82698FC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82698810
	sub_82698810(ctx, base);
	// mulli r11,r24,28
	r11.s64 = r24.s64 * 28;
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

__attribute__((alias("__imp__sub_82698EC0"))) PPC_WEAK_FUNC(sub_82698EC0);
PPC_FUNC_IMPL(__imp__sub_82698EC0) {
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
	// li r10,28
	ctx.r10.s64 = 28;
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
	// blt cr6,0x82698f18
	if (cr6.lt) goto loc_82698F18;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_82698F18:
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
	// bl 0x82697480
	sub_82697480(ctx, base);
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
	// bl 0x82698918
	sub_82698918(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x82698f80
	if (!cr6.eq) goto loc_82698F80;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82698740
	sub_82698740(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,28
	r29.s64 = r29.s64 + 28;
	// b 0x82698f98
	goto loc_82698F98;
loc_82698F80:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82698880
	sub_82698880(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82698F98:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82698fc0
	if (!cr0.eq) goto loc_82698FC0;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82698918
	sub_82698918(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82698FC0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82698810
	sub_82698810(ctx, base);
	// mulli r11,r24,28
	r11.s64 = r24.s64 * 28;
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

__attribute__((alias("__imp__sub_82698FE4"))) PPC_WEAK_FUNC(sub_82698FE4);
PPC_FUNC_IMPL(__imp__sub_82698FE4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,32036(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 32036);
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82698440
	sub_82698440(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,28
	r11.s64 = 28;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / r11.s32;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bge cr6,0x826990d4
	if (!cr6.lt) goto loc_826990D4;
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// ori r10,r10,37449
	ctx.r10.u64 = ctx.r10.u64 | 37449;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x82699078
	if (!cr6.gt) goto loc_82699078;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_82699078:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw r27,r10,r11
	r27.s32 = ctx.r10.s32 / r11.s32;
	// beq cr6,0x826990a8
	if (cr6.eq) goto loc_826990A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82698dc0
	sub_82698DC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826987a8
	sub_826987A8(ctx, base);
	// b 0x826990b8
	goto loc_826990B8;
loc_826990A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82697480
	sub_82697480(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826990B8:
	// mulli r10,r27,28
	ctx.r10.s64 = r27.s64 * 28;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mulli r11,r29,28
	r11.s64 = r29.s64 * 28;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_826990D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82698FEC"))) PPC_WEAK_FUNC(sub_82698FEC);
PPC_FUNC_IMPL(__imp__sub_82698FEC) {
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
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82698440
	sub_82698440(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mulli r3,r11,28
	ctx.r3.s64 = r11.s64 * 28;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_82699028"))) PPC_WEAK_FUNC(sub_82699028);
PPC_FUNC_IMPL(__imp__sub_82699028) {
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
	// li r11,28
	r11.s64 = 28;
	// addi r28,r31,8
	r28.s64 = r31.s64 + 8;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r10,r5,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r5.s64;
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / r11.s32;
	// cmplw cr6,r10,r29
	cr6.compare<uint32_t>(ctx.r10.u32, r29.u32, xer);
	// bge cr6,0x826990d4
	if (!cr6.lt) goto loc_826990D4;
	// lis r10,2340
	ctx.r10.s64 = 153354240;
	// ori r10,r10,37449
	ctx.r10.u64 = ctx.r10.u64 | 37449;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x82699078
	if (!cr6.gt) goto loc_82699078;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_82699078:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r10,r5,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r5.s64;
	// divw r27,r10,r11
	r27.s32 = ctx.r10.s32 / r11.s32;
	// beq cr6,0x826990a8
	if (cr6.eq) goto loc_826990A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82698dc0
	sub_82698DC0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826987a8
	sub_826987A8(ctx, base);
	// b 0x826990b8
	goto loc_826990B8;
loc_826990A8:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82697480
	sub_82697480(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826990B8:
	// mulli r10,r27,28
	ctx.r10.s64 = r27.s64 * 28;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// mulli r11,r29,28
	r11.s64 = r29.s64 * 28;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_826990D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826990DC"))) PPC_WEAK_FUNC(sub_826990DC);
PPC_FUNC_IMPL(__imp__sub_826990DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826990E0"))) PPC_WEAK_FUNC(sub_826990E0);
PPC_FUNC_IMPL(__imp__sub_826990E0) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x82699118
	if (cr6.eq) goto loc_82699118;
	// bl 0x82698740
	sub_82698740(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,28
	r11.s64 = r11.s64 + 28;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x82699134
	goto loc_82699134;
loc_82699118:
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
	// bl 0x82698ec0
	sub_82698EC0(ctx, base);
loc_82699134:
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

__attribute__((alias("__imp__sub_82699148"))) PPC_WEAK_FUNC(sub_82699148);
PPC_FUNC_IMPL(__imp__sub_82699148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,32144(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 32144);
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
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82699188
	if (cr6.eq) goto loc_82699188;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82698e50
	sub_82698E50(ctx, base);
loc_82699188:
	// lwz r29,224(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x826991a4
	if (cr0.eq) goto loc_826991A4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269b3d8
	sub_8269B3D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826991A4:
	// li r29,0
	r29.s64 = 0;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r29.u32);
	// beq 0x826991dc
	if (cr0.eq) goto loc_826991DC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826991DC:
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// stw r29,220(r30)
	PPC_STORE_U32(r30.u32 + 220, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82699210
	if (cr0.eq) goto loc_82699210;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82699210:
	// lwz r11,244(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// stw r29,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82699244
	if (cr0.eq) goto loc_82699244;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82699244:
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// stw r29,244(r30)
	PPC_STORE_U32(r30.u32 + 244, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82699268
	if (cr0.eq) goto loc_82699268;
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
loc_82699268:
	// addi r3,r30,256
	ctx.r3.s64 = r30.s64 + 256;
	// bl 0x8229e968
	sub_8229E968(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x8269c1a0
	sub_8269C1A0(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82697c38
	sub_82697C38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82698d10
	sub_82698D10(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82699150"))) PPC_WEAK_FUNC(sub_82699150);
PPC_FUNC_IMPL(__imp__sub_82699150) {
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
	// addi r28,r30,4
	r28.s64 = r30.s64 + 4;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82699188
	if (cr6.eq) goto loc_82699188;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82698e50
	sub_82698E50(ctx, base);
loc_82699188:
	// lwz r29,224(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 224);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x826991a4
	if (cr0.eq) goto loc_826991A4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269b3d8
	sub_8269B3D8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826991A4:
	// li r29,0
	r29.s64 = 0;
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r29,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r29.u32);
	// beq 0x826991dc
	if (cr0.eq) goto loc_826991DC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826991DC:
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// stw r29,220(r30)
	PPC_STORE_U32(r30.u32 + 220, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82699210
	if (cr0.eq) goto loc_82699210;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82699210:
	// lwz r11,244(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// stw r29,240(r30)
	PPC_STORE_U32(r30.u32 + 240, r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82699244
	if (cr0.eq) goto loc_82699244;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82699244:
	// lwz r3,264(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 264);
	// stw r29,244(r30)
	PPC_STORE_U32(r30.u32 + 244, r29.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82699268
	if (cr0.eq) goto loc_82699268;
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
loc_82699268:
	// addi r3,r30,256
	ctx.r3.s64 = r30.s64 + 256;
	// bl 0x8229e968
	sub_8229E968(ctx, base);
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// bl 0x8269c1a0
	sub_8269C1A0(ctx, base);
	// addi r3,r30,16
	ctx.r3.s64 = r30.s64 + 16;
	// bl 0x82697c38
	sub_82697C38(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82698d10
	sub_82698D10(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82699290"))) PPC_WEAK_FUNC(sub_82699290);
PPC_FUNC_IMPL(__imp__sub_82699290) {
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
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82698d10
	sub_82698D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826992BC"))) PPC_WEAK_FUNC(sub_826992BC);
PPC_FUNC_IMPL(__imp__sub_826992BC) {
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
	// bl 0x82698438
	sub_82698438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826992E8"))) PPC_WEAK_FUNC(sub_826992E8);
PPC_FUNC_IMPL(__imp__sub_826992E8) {
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
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x8269c1a0
	sub_8269C1A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699314"))) PPC_WEAK_FUNC(sub_82699314);
PPC_FUNC_IMPL(__imp__sub_82699314) {
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
	// addi r3,r11,256
	ctx.r3.s64 = r11.s64 + 256;
	// bl 0x8229eec0
	sub_8229EEC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699340"))) PPC_WEAK_FUNC(sub_82699340);
PPC_FUNC_IMPL(__imp__sub_82699340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,32240(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 32240);
	// mflr r12
	// bl 0x8239bce0
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8227e088
	sub_8227E088(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// bl 0x822bb3c8
	sub_822BB3C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r22,r29,4
	r22.s64 = r29.s64 + 4;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// srawi r4,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r4.s64 = r11.s32 >> 4;
	// bl 0x82699028
	sub_82699028(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826994f0
	if (cr0.eq) goto loc_826994F0;
	// li r28,0
	r28.s64 = 0;
loc_826993C8:
	// add r25,r28,r11
	r25.u64 = r28.u64 + r11.u64;
	// lbz r10,13(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 13);
	// lfs f30,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f30.f64 = double(temp.f32);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826993e4
	if (cr0.eq) goto loc_826993E4;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x82699400
	goto loc_82699400;
loc_826993E4:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 8);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f31,f0,f30
	f31.f64 = double(float(f0.f64 + f30.f64));
loc_82699400:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// bgt cr6,0x826994f0
	if (cr6.gt) goto loc_826994F0;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r23,0
	r23.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82699e30
	sub_82699E30(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82699490
	if (cr0.eq) goto loc_82699490;
	// lwz r26,0(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r28,r26
	ctx.r3.u64 = r28.u64 + r26.u64;
	// bl 0x82334628
	sub_82334628(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82699490
	if (cr0.eq) goto loc_82699490;
	// lbz r10,13(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 13);
	// lbz r23,12(r25)
	r23.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82699488
	if (cr0.eq) goto loc_82699488;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// blt cr6,0x82699488
	if (cr6.lt) goto loc_82699488;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82192718
	sub_82192718(ctx, base);
	// add r11,r28,r27
	r11.u64 = r28.u64 + r27.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bl 0x82334628
	sub_82334628(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8269948c
	if (!cr0.eq) goto loc_8269948C;
loc_82699488:
	// li r11,0
	r11.s64 = 0;
loc_8269948C:
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
loc_82699490:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// clrlwi r4,r23,24
	ctx.r4.u64 = r23.u32 & 0xFF;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// bl 0x8269baa0
	sub_8269BAA0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826990e0
	sub_826990E0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8269bd00
	sub_8269BD00(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// blt cr6,0x826993c8
	if (cr6.lt) goto loc_826993C8;
loc_826994F0:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82699348"))) PPC_WEAK_FUNC(sub_82699348);
PPC_FUNC_IMPL(__imp__sub_82699348) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f29.u64);
	// stfd f30,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x8227e088
	sub_8227E088(ctx, base);
	// lis r28,-32127
	r28.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// bl 0x822bb3c8
	sub_822BB3C8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// bl 0x82391830
	sub_82391830(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r22,r29,4
	r22.s64 = r29.s64 + 4;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// srawi r4,r11,4
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xF) != 0);
	ctx.r4.s64 = r11.s32 >> 4;
	// bl 0x82699028
	sub_82699028(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r24,0
	r24.s64 = 0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi. r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826994f0
	if (cr0.eq) goto loc_826994F0;
	// li r28,0
	r28.s64 = 0;
loc_826993C8:
	// add r25,r28,r11
	r25.u64 = r28.u64 + r11.u64;
	// lbz r10,13(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 13);
	// lfs f30,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r25.u32 + 0);
	f30.f64 = double(temp.f32);
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826993e4
	if (cr0.eq) goto loc_826993E4;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x82699400
	goto loc_82699400;
loc_826993E4:
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(r25.u32 + 8);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,80(r31)
	PPC_STORE_U64(r31.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f31,f0,f30
	f31.f64 = double(float(f0.f64 + f30.f64));
loc_82699400:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// bgt cr6,0x826994f0
	if (cr6.gt) goto loc_826994F0;
	// add r11,r28,r11
	r11.u64 = r28.u64 + r11.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r23,0
	r23.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82699e30
	sub_82699E30(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82699490
	if (cr0.eq) goto loc_82699490;
	// lwz r26,0(r30)
	r26.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82192718
	sub_82192718(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// add r3,r28,r26
	ctx.r3.u64 = r28.u64 + r26.u64;
	// bl 0x82334628
	sub_82334628(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82699490
	if (cr0.eq) goto loc_82699490;
	// lbz r10,13(r25)
	ctx.r10.u64 = PPC_LOAD_U8(r25.u32 + 13);
	// lbz r23,12(r25)
	r23.u64 = PPC_LOAD_U8(r25.u32 + 12);
	// rlwinm. r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82699488
	if (cr0.eq) goto loc_82699488;
	// cmpwi cr6,r24,1
	cr6.compare<int32_t>(r24.s32, 1, xer);
	// blt cr6,0x82699488
	if (cr6.lt) goto loc_82699488;
	// lwz r27,0(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82192718
	sub_82192718(ctx, base);
	// add r11,r28,r27
	r11.u64 = r28.u64 + r27.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,-16
	ctx.r3.s64 = r11.s64 + -16;
	// bl 0x82334628
	sub_82334628(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8269948c
	if (!cr0.eq) goto loc_8269948C;
loc_82699488:
	// li r11,0
	r11.s64 = 0;
loc_8269948C:
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
loc_82699490:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x82699d50
	sub_82699D50(ctx, base);
	// clrlwi r4,r23,24
	ctx.r4.u64 = r23.u32 & 0xFF;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// bl 0x8269baa0
	sub_8269BAA0(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x826990e0
	sub_826990E0(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8269bd00
	sub_8269BD00(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r28,r28,16
	r28.s64 = r28.s64 + 16;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// srawi r10,r10,4
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r24,r10
	cr6.compare<uint32_t>(r24.u32, ctx.r10.u32, xer);
	// blt cr6,0x826993c8
	if (cr6.lt) goto loc_826993C8;
loc_826994F0:
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f29,-112(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f30,-104(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82699504"))) PPC_WEAK_FUNC(sub_82699504);
PPC_FUNC_IMPL(__imp__sub_82699504) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-240
	r31.s64 = r12.s64 + -240;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8269bd00
	sub_8269BD00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269952C"))) PPC_WEAK_FUNC(sub_8269952C);
PPC_FUNC_IMPL(__imp__sub_8269952C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699530"))) PPC_WEAK_FUNC(sub_82699530);
PPC_FUNC_IMPL(__imp__sub_82699530) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r16,32392(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 32392);
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// bl 0x8269c438
	sub_8269C438(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r30,256
	r28.s64 = r30.s64 + 256;
	// stw r3,212(r30)
	PPC_STORE_U32(r30.u32 + 212, ctx.r3.u32);
	// stb r29,232(r30)
	PPC_STORE_U8(r30.u32 + 232, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,233(r30)
	PPC_STORE_U8(r30.u32 + 233, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,216(r30)
	PPC_STORE_U32(r30.u32 + 216, r25.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r29,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r29.u32);
	// stfs f0,228(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// stfs f0,236(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 236, temp.u32);
	// stw r29,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r29.u32);
	// stw r29,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r29.u32);
	// bl 0x8229ea50
	sub_8229EA50(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-10924
	r11.s64 = r11.s64 + -10924;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,32336
	ctx.r4.s64 = r11.s64 + 32336;
	// stb r10,268(r30)
	PPC_STORE_U8(r30.u32 + 268, ctx.r10.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stfs f1,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
	// addi r4,r11,32324
	ctx.r4.s64 = r11.s64 + 32324;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stfs f1,276(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 276, temp.u32);
	// addi r4,r11,32304
	ctx.r4.s64 = r11.s64 + 32304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// stfs f1,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 280, temp.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826996e8
	if (cr0.eq) goto loc_826996E8;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8269ab80
	sub_8269AB80(ctx, base);
	// b 0x826996ec
	goto loc_826996EC;
loc_826996E8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_826996EC:
	// stw r3,224(r30)
	PPC_STORE_U32(r30.u32 + 224, ctx.r3.u32);
	// bl 0x822444a8
	sub_822444A8(ctx, base);
	// stw r3,240(r30)
	PPC_STORE_U32(r30.u32 + 240, ctx.r3.u32);
	// bl 0x822444a8
	sub_822444A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,244(r30)
	PPC_STORE_U32(r30.u32 + 244, ctx.r10.u32);
	// stb r29,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r29.u8);
	// lwz r11,244(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// stb r29,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r29.u8);
	// bl 0x82699348
	sub_82699348(ctx, base);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
	// bne 0x82699734
	if (!cr0.eq) goto loc_82699734;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82699744
	goto loc_82699744;
loc_82699734:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82699744:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x82699764
	if (!cr0.eq) goto loc_82699764;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82699764:
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82699788
	if (!cr0.eq) goto loc_82699788;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82699798
	goto loc_82699798;
loc_82699788:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82699798:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,244(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826997b8
	if (!cr0.eq) goto loc_826997B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x826997c8
	goto loc_826997C8;
loc_826997B8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_826997C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82699538"))) PPC_WEAK_FUNC(sub_82699538);
PPC_FUNC_IMPL(__imp__sub_82699538) {
	PPC_FUNC_PROLOGUE();
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// li r29,0
	r29.s64 = 0;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
	// addi r11,r30,16
	r11.s64 = r30.s64 + 16;
	// std r29,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r29.u64);
	// ld r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r11,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r11.u32);
	// stw r11,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r11.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// stw r29,24(r30)
	PPC_STORE_U32(r30.u32 + 24, r29.u32);
	// addi r3,r30,32
	ctx.r3.s64 = r30.s64 + 32;
	// stw r29,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r29.u32);
	// bl 0x8269c438
	sub_8269C438(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r28,r30,256
	r28.s64 = r30.s64 + 256;
	// stw r3,212(r30)
	PPC_STORE_U32(r30.u32 + 212, ctx.r3.u32);
	// stb r29,232(r30)
	PPC_STORE_U8(r30.u32 + 232, r29.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// stb r29,233(r30)
	PPC_STORE_U8(r30.u32 + 233, r29.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,216(r30)
	PPC_STORE_U32(r30.u32 + 216, r25.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stw r29,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r29.u32);
	// stfs f0,228(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 228, temp.u32);
	// stfs f0,236(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 236, temp.u32);
	// stw r29,248(r30)
	PPC_STORE_U32(r30.u32 + 248, r29.u32);
	// stw r29,252(r30)
	PPC_STORE_U32(r30.u32 + 252, r29.u32);
	// bl 0x8229ea50
	sub_8229EA50(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// addi r11,r11,-10924
	r11.s64 = r11.s64 + -10924;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,32336
	ctx.r4.s64 = r11.s64 + 32336;
	// stb r10,268(r30)
	PPC_STORE_U8(r30.u32 + 268, ctx.r10.u8);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stfs f1,272(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 272, temp.u32);
	// addi r4,r11,32324
	ctx.r4.s64 = r11.s64 + 32324;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// stfs f1,276(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 276, temp.u32);
	// addi r4,r11,32304
	ctx.r4.s64 = r11.s64 + 32304;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,212(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 212);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// li r3,52
	ctx.r3.s64 = 52;
	// stfs f1,280(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 280, temp.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826996e8
	if (cr0.eq) goto loc_826996E8;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8269ab80
	sub_8269AB80(ctx, base);
	// b 0x826996ec
	goto loc_826996EC;
loc_826996E8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_826996EC:
	// stw r3,224(r30)
	PPC_STORE_U32(r30.u32 + 224, ctx.r3.u32);
	// bl 0x822444a8
	sub_822444A8(ctx, base);
	// stw r3,240(r30)
	PPC_STORE_U32(r30.u32 + 240, ctx.r3.u32);
	// bl 0x822444a8
	sub_822444A8(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,244(r30)
	PPC_STORE_U32(r30.u32 + 244, ctx.r10.u32);
	// stb r29,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r29.u8);
	// lwz r11,244(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// stb r29,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r29.u8);
	// bl 0x82699348
	sub_82699348(ctx, base);
	// bl 0x82150688
	sub_82150688(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,220(r30)
	PPC_STORE_U32(r30.u32 + 220, ctx.r3.u32);
	// bne 0x82699734
	if (!cr0.eq) goto loc_82699734;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82699744
	goto loc_82699744;
loc_82699734:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82699744:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,216(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r4,r11,52
	ctx.r4.s64 = r11.s64 + 52;
	// bne 0x82699764
	if (!cr0.eq) goto loc_82699764;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_82699764:
	// lwz r11,220(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// lwz r11,240(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82699788
	if (!cr0.eq) goto loc_82699788;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x82699798
	goto loc_82699798;
loc_82699788:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82699798:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// lwz r11,244(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 244);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826997b8
	if (!cr0.eq) goto loc_826997B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// b 0x826997c8
	goto loc_826997C8;
loc_826997B8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_826997C8:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,216(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 216);
	// bl 0x821dc870
	sub_821DC870(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826997E0"))) PPC_WEAK_FUNC(sub_826997E0);
PPC_FUNC_IMPL(__imp__sub_826997E0) {
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
	// bl 0x82698d10
	sub_82698D10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269980C"))) PPC_WEAK_FUNC(sub_8269980C);
PPC_FUNC_IMPL(__imp__sub_8269980C) {
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
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82698438
	sub_82698438(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699838"))) PPC_WEAK_FUNC(sub_82699838);
PPC_FUNC_IMPL(__imp__sub_82699838) {
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
	// addi r3,r11,32
	ctx.r3.s64 = r11.s64 + 32;
	// bl 0x8269c1a0
	sub_8269C1A0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699864"))) PPC_WEAK_FUNC(sub_82699864);
PPC_FUNC_IMPL(__imp__sub_82699864) {
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
	// addi r3,r11,256
	ctx.r3.s64 = r11.s64 + 256;
	// bl 0x8229eec0
	sub_8229EEC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699890"))) PPC_WEAK_FUNC(sub_82699890);
PPC_FUNC_IMPL(__imp__sub_82699890) {
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
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_826998B8"))) PPC_WEAK_FUNC(sub_826998B8);
PPC_FUNC_IMPL(__imp__sub_826998B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826998CC"))) PPC_WEAK_FUNC(sub_826998CC);
PPC_FUNC_IMPL(__imp__sub_826998CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826998D0"))) PPC_WEAK_FUNC(sub_826998D0);
PPC_FUNC_IMPL(__imp__sub_826998D0) {
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
	// beq 0x82699910
	if (cr0.eq) goto loc_82699910;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8652
	ctx.r3.s64 = r11.s64 + 8652;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82699918
	goto loc_82699918;
loc_82699910:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82699918:
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

__attribute__((alias("__imp__sub_82699934"))) PPC_WEAK_FUNC(sub_82699934);
PPC_FUNC_IMPL(__imp__sub_82699934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699938"))) PPC_WEAK_FUNC(sub_82699938);
PPC_FUNC_IMPL(__imp__sub_82699938) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82699970
	if (cr6.eq) goto loc_82699970;
	// addi r3,r31,148
	ctx.r3.s64 = r31.s64 + 148;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// bl 0x821c55d0
	sub_821C55D0(ctx, base);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
loc_82699970:
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

__attribute__((alias("__imp__sub_82699984"))) PPC_WEAK_FUNC(sub_82699984);
PPC_FUNC_IMPL(__imp__sub_82699984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699988"))) PPC_WEAK_FUNC(sub_82699988);
PPC_FUNC_IMPL(__imp__sub_82699988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r9
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
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
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f4,f31
	ctx.f4.f64 = f31.f64;
	// bl 0x821e8db0
	sub_821E8DB0(ctx, base);
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

__attribute__((alias("__imp__sub_826999FC"))) PPC_WEAK_FUNC(sub_826999FC);
PPC_FUNC_IMPL(__imp__sub_826999FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699A00"))) PPC_WEAK_FUNC(sub_82699A00);
PPC_FUNC_IMPL(__imp__sub_82699A00) {
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
	// blt cr6,0x82699a48
	if (cr6.lt) goto loc_82699A48;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82699A48:
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
	// bl 0x826998d0
	sub_826998D0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82699a80
	if (cr0.eq) goto loc_82699A80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82699A80:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82699aa0
	if (cr6.eq) goto loc_82699AA0;
loc_82699A8C:
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
	// bne 0x82699a8c
	if (!cr0.eq) goto loc_82699A8C;
loc_82699AA0:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82699ac8
	if (!cr0.eq) goto loc_82699AC8;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82699ac8
	if (cr0.eq) goto loc_82699AC8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82699AC8:
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

__attribute__((alias("__imp__sub_82699AFC"))) PPC_WEAK_FUNC(sub_82699AFC);
PPC_FUNC_IMPL(__imp__sub_82699AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699B00"))) PPC_WEAK_FUNC(sub_82699B00);
PPC_FUNC_IMPL(__imp__sub_82699B00) {
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
	// beq cr6,0x82699b40
	if (cr6.eq) goto loc_82699B40;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82699b30
	if (cr0.eq) goto loc_82699B30;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82699B30:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82699b54
	goto loc_82699B54;
loc_82699B40:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82699a00
	sub_82699A00(ctx, base);
loc_82699B54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699B64"))) PPC_WEAK_FUNC(sub_82699B64);
PPC_FUNC_IMPL(__imp__sub_82699B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699B68"))) PPC_WEAK_FUNC(sub_82699B68);
PPC_FUNC_IMPL(__imp__sub_82699B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,32600(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 32600);
	// mflr r12
	// bl 0x8239bcf0
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// addi r4,r11,32564
	ctx.r4.s64 = r11.s64 + 32564;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,32544
	ctx.r4.s64 = r11.s64 + 32544;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8212a040
	sub_8212A040(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,32524
	ctx.r4.s64 = r11.s64 + 32524;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// li r28,2
	r28.s64 = 2;
	// addi r26,r11,32500
	r26.s64 = r11.s64 + 32500;
loc_82699C04:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x822ac138
	sub_822AC138(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82699b00
	sub_82699B00(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// ble cr6,0x82699c04
	if (!cr6.gt) goto loc_82699C04;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f2,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r4,r11,32480
	ctx.r4.s64 = r11.s64 + 32480;
	// bl 0x822caf40
	sub_822CAF40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x823e6130
	sub_823E6130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x821d5fe8
	sub_821D5FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82699938
	sub_82699938(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82699B70"))) PPC_WEAK_FUNC(sub_82699B70);
PPC_FUNC_IMPL(__imp__sub_82699B70) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// addi r29,r30,16
	r29.s64 = r30.s64 + 16;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// stw r30,196(r31)
	PPC_STORE_U32(r31.u32 + 196, r30.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r3,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r3.u32);
	// addi r4,r11,32564
	ctx.r4.s64 = r11.s64 + 32564;
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,32544
	ctx.r4.s64 = r11.s64 + 32544;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// bl 0x8212a040
	sub_8212A040(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,32524
	ctx.r4.s64 = r11.s64 + 32524;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// bl 0x82141298
	sub_82141298(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// li r28,2
	r28.s64 = 2;
	// addi r26,r11,32500
	r26.s64 = r11.s64 + 32500;
loc_82699C04:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8212dd00
	sub_8212DD00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823536e0
	sub_823536E0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// bl 0x822ac138
	sub_822AC138(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82699b00
	sub_82699B00(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// ble cr6,0x82699c04
	if (!cr6.gt) goto loc_82699C04;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lfs f2,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r4,r11,32480
	ctx.r4.s64 = r11.s64 + 32480;
	// bl 0x822caf40
	sub_822CAF40(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// bl 0x823e6130
	sub_823E6130(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x821d5fe8
	sub_821D5FE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bl 0x82699938
	sub_82699938(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82699CC0"))) PPC_WEAK_FUNC(sub_82699CC0);
PPC_FUNC_IMPL(__imp__sub_82699CC0) {
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
	// lwz r11,196(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 196);
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
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

__attribute__((alias("__imp__sub_82699CEC"))) PPC_WEAK_FUNC(sub_82699CEC);
PPC_FUNC_IMPL(__imp__sub_82699CEC) {
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
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699D14"))) PPC_WEAK_FUNC(sub_82699D14);
PPC_FUNC_IMPL(__imp__sub_82699D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699D18"))) PPC_WEAK_FUNC(sub_82699D18);
PPC_FUNC_IMPL(__imp__sub_82699D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// li r11,0
	r11.s64 = 0;
	// stfs f0,24(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, r11.u8);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699D50"))) PPC_WEAK_FUNC(sub_82699D50);
PPC_FUNC_IMPL(__imp__sub_82699D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32664(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32664);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699D64"))) PPC_WEAK_FUNC(sub_82699D64);
PPC_FUNC_IMPL(__imp__sub_82699D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699D68"))) PPC_WEAK_FUNC(sub_82699D68);
PPC_FUNC_IMPL(__imp__sub_82699D68) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699D70"))) PPC_WEAK_FUNC(sub_82699D70);
PPC_FUNC_IMPL(__imp__sub_82699D70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,32688(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + 32688);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// lwz r11,-13400(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13400);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82699de4
	if (!cr0.eq) goto loc_82699DE4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13400, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,32668
	ctx.r4.s64 = r11.s64 + 32668;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-13404(r29)
	PPC_STORE_U32(r29.u32 + -13404, ctx.r4.u32);
	// b 0x82699de8
	goto loc_82699DE8;
loc_82699DE4:
	// lwz r4,-13404(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -13404);
loc_82699DE8:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82699D78"))) PPC_WEAK_FUNC(sub_82699D78);
PPC_FUNC_IMPL(__imp__sub_82699D78) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// lwz r11,-13400(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13400);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82699de4
	if (!cr0.eq) goto loc_82699DE4;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -13400, r11.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,32668
	ctx.r4.s64 = r11.s64 + 32668;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r4,-13404(r29)
	PPC_STORE_U32(r29.u32 + -13404, ctx.r4.u32);
	// b 0x82699de8
	goto loc_82699DE8;
loc_82699DE4:
	// lwz r4,-13404(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + -13404);
loc_82699DE8:
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82699E04"))) PPC_WEAK_FUNC(sub_82699E04);
PPC_FUNC_IMPL(__imp__sub_82699E04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13400
	r11.s64 = r11.s64 + -13400;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13400
	ctx.r10.s64 = ctx.r10.s64 + -13400;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699E2C"))) PPC_WEAK_FUNC(sub_82699E2C);
PPC_FUNC_IMPL(__imp__sub_82699E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699E30"))) PPC_WEAK_FUNC(sub_82699E30);
PPC_FUNC_IMPL(__imp__sub_82699E30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// blt cr6,0x82699e4c
	if (cr6.lt) goto loc_82699E4C;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82699e50
	if (cr6.lt) goto loc_82699E50;
loc_82699E4C:
	// li r11,0
	r11.s64 = 0;
loc_82699E50:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699E58"))) PPC_WEAK_FUNC(sub_82699E58);
PPC_FUNC_IMPL(__imp__sub_82699E58) {
	PPC_FUNC_PROLOGUE();
	// stb r4,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699E60"))) PPC_WEAK_FUNC(sub_82699E60);
PPC_FUNC_IMPL(__imp__sub_82699E60) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699E68"))) PPC_WEAK_FUNC(sub_82699E68);
PPC_FUNC_IMPL(__imp__sub_82699E68) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699E74"))) PPC_WEAK_FUNC(sub_82699E74);
PPC_FUNC_IMPL(__imp__sub_82699E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699E78"))) PPC_WEAK_FUNC(sub_82699E78);
PPC_FUNC_IMPL(__imp__sub_82699E78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	// lbz r11,20(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82699e9c
	if (cr0.eq) goto loc_82699E9C;
	// subfic r11,r4,2
	xer.ca = ctx.r4.u32 <= 2;
	r11.s64 = 2 - ctx.r4.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// b 0x82699eb0
	goto loc_82699EB0;
loc_82699E9C:
	// addi r11,r4,-2
	r11.s64 = ctx.r4.s64 + -2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82699EB0:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82699EBC"))) PPC_WEAK_FUNC(sub_82699EBC);
PPC_FUNC_IMPL(__imp__sub_82699EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699EC0"))) PPC_WEAK_FUNC(sub_82699EC0);
PPC_FUNC_IMPL(__imp__sub_82699EC0) {
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
	// cmpwi cr6,r6,5
	cr6.compare<int32_t>(ctx.r6.s32, 5, xer);
	// bge cr6,0x82699ef4
	if (!cr6.lt) goto loc_82699EF4;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82699d78
	sub_82699D78(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82699efc
	goto loc_82699EFC;
loc_82699EF4:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r4,r11,32752
	ctx.r4.s64 = r11.s64 + 32752;
loc_82699EFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r11,9120
	ctx.r3.s64 = r11.s64 + 9120;
	// bl 0x821207d0
	sub_821207D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82141298
	sub_82141298(ctx, base);
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

__attribute__((alias("__imp__sub_82699F3C"))) PPC_WEAK_FUNC(sub_82699F3C);
PPC_FUNC_IMPL(__imp__sub_82699F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82699F40"))) PPC_WEAK_FUNC(sub_82699F40);
PPC_FUNC_IMPL(__imp__sub_82699F40) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lfs f0,-19528(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -19528);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2868(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2868);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// ble cr6,0x82699f80
	if (!cr6.gt) goto loc_82699F80;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	f0.f64 = double(temp.f32);
	// b 0x82699fb0
	goto loc_82699FB0;
loc_82699F80:
	// lis r11,-32243
	r11.s64 = -2113077248;
	// lfs f0,32760(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32760);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82699fac
	if (!cr6.gt) goto loc_82699FAC;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-1584(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1584);
	f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 + f0.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fmuls f0,f0,f30
	f0.f64 = double(float(f0.f64 * f30.f64));
	// b 0x82699fb0
	goto loc_82699FB0;
loc_82699FAC:
	// fmr f0,f31
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64;
loc_82699FB0:
	// lis r28,-32127
	r28.s64 = -2105475072;
	// fadds f1,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(f0.f64 + ctx.f1.f64));
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// bl 0x822bb450
	sub_822BB450(ctx, base);
	// fcmpu cr6,f1,f31
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, f31.f64);
	// ble cr6,0x82699fd0
	if (!cr6.gt) goto loc_82699FD0;
	// fctiwz f0,f1
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// b 0x82699fe0
	goto loc_82699FE0;
loc_82699FD0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fsubs f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 - f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
loc_82699FE0:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stfiwx f0,0,r11
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,240
	r11.s64 = 240;
	// divw r27,r10,r11
	r27.s32 = ctx.r10.s32 / r11.s32;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x8269a00c
	if (cr0.lt) goto loc_8269A00C;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// bge cr6,0x8269a00c
	if (!cr6.lt) goto loc_8269A00C;
	// stw r27,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r27.u32);
loc_8269A00C:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// blt cr6,0x8269a0ac
	if (cr6.lt) goto loc_8269A0AC;
loc_8269A014:
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// ble cr6,0x8269a0ac
	if (!cr6.gt) goto loc_8269A0AC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mulli r31,r11,240
	r31.s64 = r11.s64 * 240;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// bl 0x82278d30
	sub_82278D30(ctx, base);
	// cmpw cr6,r31,r3
	cr6.compare<int32_t>(r31.s32, ctx.r3.s32, xer);
	// bge cr6,0x8269a0ac
	if (!cr6.lt) goto loc_8269A0AC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,-9288(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x822bb3f0
	sub_822BB3F0(ctx, base);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8269a060
	if (cr6.eq) goto loc_8269A060;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8269a078
	goto loc_8269A078;
loc_8269A060:
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8269a074
	if (cr6.eq) goto loc_8269A074;
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// b 0x8269a078
	goto loc_8269A078;
loc_8269A074:
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
loc_8269A078:
	// extsw r11,r31
	r11.s64 = r31.s32;
	// lwz r3,-9288(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + -9288);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x822bb468
	sub_822BB468(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = f31.f64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmuls f1,f1,f30
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// bl 0x82367438
	sub_82367438(ctx, base);
	// b 0x8269a014
	goto loc_8269A014;
loc_8269A0AC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269A0BC"))) PPC_WEAK_FUNC(sub_8269A0BC);
PPC_FUNC_IMPL(__imp__sub_8269A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A0C0"))) PPC_WEAK_FUNC(sub_8269A0C0);
PPC_FUNC_IMPL(__imp__sub_8269A0C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
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
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// bl 0x823664d0
	sub_823664D0(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x823664d0
	sub_823664D0(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x823664d0
	sub_823664D0(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb450
	sub_822BB450(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// li r10,240
	ctx.r10.s64 = 240;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// divw. r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bge 0x8269a12c
	if (!cr0.lt) goto loc_8269A12C;
	// li r11,-1
	r11.s64 = -1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8269A12C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x82699f40
	sub_82699F40(ctx, base);
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

__attribute__((alias("__imp__sub_8269A150"))) PPC_WEAK_FUNC(sub_8269A150);
PPC_FUNC_IMPL(__imp__sub_8269A150) {
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
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,3428
	r31.s64 = r11.s64 + 3428;
	// lis r11,-32140
	r11.s64 = -2106327040;
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

__attribute__((alias("__imp__sub_8269A1A8"))) PPC_WEAK_FUNC(sub_8269A1A8);
PPC_FUNC_IMPL(__imp__sub_8269A1A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,32336
	ctx.r4.s64 = ctx.r10.s64 + 32336;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,27816
	ctx.r4.s64 = ctx.r10.s64 + 27816;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823632d8
	sub_823632D8(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-32740
	ctx.r4.s64 = r11.s64 + -32740;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// bl 0x8269a150
	sub_8269A150(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,-32756
	ctx.r4.s64 = r11.s64 + -32756;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// bl 0x8269a150
	sub_8269A150(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,32764
	ctx.r4.s64 = r11.s64 + 32764;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// bl 0x8269a150
	sub_8269A150(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269A290"))) PPC_WEAK_FUNC(sub_8269A290);
PPC_FUNC_IMPL(__imp__sub_8269A290) {
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
	// beq 0x8269a2d0
	if (cr0.eq) goto loc_8269A2D0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8692
	ctx.r3.s64 = r11.s64 + 8692;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8269a2d8
	goto loc_8269A2D8;
loc_8269A2D0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8269A2D8:
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

__attribute__((alias("__imp__sub_8269A2F4"))) PPC_WEAK_FUNC(sub_8269A2F4);
PPC_FUNC_IMPL(__imp__sub_8269A2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A2F8"))) PPC_WEAK_FUNC(sub_8269A2F8);
PPC_FUNC_IMPL(__imp__sub_8269A2F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,16(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lbz r11,1(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// bne 0x8269a354
	if (!cr0.eq) goto loc_8269A354;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269a330
	if (cr0.eq) goto loc_8269A330;
	// lbz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x8269a368
	if (!cr0.eq) goto loc_8269A368;
loc_8269A330:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8269a340
	if (cr6.eq) goto loc_8269A340;
	// li r11,2
	r11.s64 = 2;
	// b 0x8269a390
	goto loc_8269A390;
loc_8269A340:
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// b 0x8269a390
	goto loc_8269A390;
loc_8269A354:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269a370
	if (cr0.eq) goto loc_8269A370;
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8269a370
	if (cr0.eq) goto loc_8269A370;
loc_8269A368:
	// li r11,3
	r11.s64 = 3;
	// b 0x8269a390
	goto loc_8269A390;
loc_8269A370:
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8269a384
	if (cr0.eq) goto loc_8269A384;
	// li r11,1
	r11.s64 = 1;
	// b 0x8269a390
	goto loc_8269A390;
loc_8269A384:
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
loc_8269A390:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb450
	sub_822BB450(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lfs f2,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f2.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-4904(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4904);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
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

__attribute__((alias("__imp__sub_8269A3E8"))) PPC_WEAK_FUNC(sub_8269A3E8);
PPC_FUNC_IMPL(__imp__sub_8269A3E8) {
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
	// blt cr6,0x8269a430
	if (cr6.lt) goto loc_8269A430;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8269A430:
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
	// bl 0x8269a290
	sub_8269A290(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8269a468
	if (cr0.eq) goto loc_8269A468;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8269A468:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8269a488
	if (cr6.eq) goto loc_8269A488;
loc_8269A474:
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
	// bne 0x8269a474
	if (!cr0.eq) goto loc_8269A474;
loc_8269A488:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8269a4b0
	if (!cr0.eq) goto loc_8269A4B0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8269a4b0
	if (cr0.eq) goto loc_8269A4B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8269A4B0:
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

__attribute__((alias("__imp__sub_8269A4E4"))) PPC_WEAK_FUNC(sub_8269A4E4);
PPC_FUNC_IMPL(__imp__sub_8269A4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A4E8"))) PPC_WEAK_FUNC(sub_8269A4E8);
PPC_FUNC_IMPL(__imp__sub_8269A4E8) {
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
	// beq cr6,0x8269a528
	if (cr6.eq) goto loc_8269A528;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269a518
	if (cr0.eq) goto loc_8269A518;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8269A518:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8269a53c
	goto loc_8269A53C;
loc_8269A528:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8269a3e8
	sub_8269A3E8(ctx, base);
loc_8269A53C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A54C"))) PPC_WEAK_FUNC(sub_8269A54C);
PPC_FUNC_IMPL(__imp__sub_8269A54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A550"))) PPC_WEAK_FUNC(sub_8269A550);
PPC_FUNC_IMPL(__imp__sub_8269A550) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,-32608(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -32608);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r10,2816
	ctx.r4.s64 = ctx.r10.s64 + 2816;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stb r3,16(r30)
	PPC_STORE_U8(r30.u32 + 16, ctx.r3.u8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r11,r11,-32640
	r11.s64 = r11.s64 + -32640;
	// addi r10,r10,-32664
	ctx.r10.s64 = ctx.r10.s64 + -32664;
	// addi r9,r9,-32688
	ctx.r9.s64 = ctx.r9.s64 + -32688;
	// addi r8,r8,-32720
	ctx.r8.s64 = ctx.r8.s64 + -32720;
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r29,4
	r29.s64 = 4;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r8,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r8.u32);
loc_8269A5E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826909a8
	sub_826909A8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269a4e8
	sub_8269A4E8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x8269a5e4
	if (!cr0.eq) goto loc_8269A5E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269A558"))) PPC_WEAK_FUNC(sub_8269A558);
PPC_FUNC_IMPL(__imp__sub_8269A558) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r10,2816
	ctx.r4.s64 = ctx.r10.s64 + 2816;
	// lwz r11,-9608(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stb r3,16(r30)
	PPC_STORE_U8(r30.u32 + 16, ctx.r3.u8);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r11,r11,-32640
	r11.s64 = r11.s64 + -32640;
	// addi r10,r10,-32664
	ctx.r10.s64 = ctx.r10.s64 + -32664;
	// addi r9,r9,-32688
	ctx.r9.s64 = ctx.r9.s64 + -32688;
	// addi r8,r8,-32720
	ctx.r8.s64 = ctx.r8.s64 + -32720;
	// addi r28,r31,96
	r28.s64 = r31.s64 + 96;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// li r29,4
	r29.s64 = 4;
	// stw r10,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r10.u32);
	// stw r9,104(r31)
	PPC_STORE_U32(r31.u32 + 104, ctx.r9.u32);
	// stw r8,108(r31)
	PPC_STORE_U32(r31.u32 + 108, ctx.r8.u32);
loc_8269A5E4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826909a8
	sub_826909A8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269a4e8
	sub_8269A4E8(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x8269a5e4
	if (!cr0.eq) goto loc_8269A5E4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269A61C"))) PPC_WEAK_FUNC(sub_8269A61C);
PPC_FUNC_IMPL(__imp__sub_8269A61C) {
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
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 180);
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

__attribute__((alias("__imp__sub_8269A644"))) PPC_WEAK_FUNC(sub_8269A644);
PPC_FUNC_IMPL(__imp__sub_8269A644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A648"))) PPC_WEAK_FUNC(sub_8269A648);
PPC_FUNC_IMPL(__imp__sub_8269A648) {
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
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x8269a668
	goto loc_8269A668;
loc_8269A660:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x821dbc00
	sub_821DBC00(ctx, base);
loc_8269A668:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821c7410
	sub_821C7410(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8269a660
	if (!cr0.eq) goto loc_8269A660;
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

__attribute__((alias("__imp__sub_8269A68C"))) PPC_WEAK_FUNC(sub_8269A68C);
PPC_FUNC_IMPL(__imp__sub_8269A68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A690"))) PPC_WEAK_FUNC(sub_8269A690);
PPC_FUNC_IMPL(__imp__sub_8269A690) {
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
	// bl 0x8269a648
	sub_8269A648(ctx, base);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,1232
	ctx.r6.s64 = r11.s64 + 1232;
	// lis r11,-32140
	r11.s64 = -2106327040;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,920
	ctx.r5.s64 = r11.s64 + 920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239c7e0
	sub_8239C7E0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269a6dc
	if (cr0.eq) goto loc_8269A6DC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
loc_8269A6DC:
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

__attribute__((alias("__imp__sub_8269A6F0"))) PPC_WEAK_FUNC(sub_8269A6F0);
PPC_FUNC_IMPL(__imp__sub_8269A6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r4
	cr6.compare<int32_t>(r11.s32, ctx.r4.s32, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8269c6c0
	sub_8269C6C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A704"))) PPC_WEAK_FUNC(sub_8269A704);
PPC_FUNC_IMPL(__imp__sub_8269A704) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A708"))) PPC_WEAK_FUNC(sub_8269A708);
PPC_FUNC_IMPL(__imp__sub_8269A708) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// b 0x8269c648
	sub_8269C648(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A710"))) PPC_WEAK_FUNC(sub_8269A710);
PPC_FUNC_IMPL(__imp__sub_8269A710) {
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
	// beq 0x8269a750
	if (cr0.eq) goto loc_8269A750;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,8732
	ctx.r3.s64 = r11.s64 + 8732;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x8269a758
	goto loc_8269A758;
loc_8269A750:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_8269A758:
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

__attribute__((alias("__imp__sub_8269A774"))) PPC_WEAK_FUNC(sub_8269A774);
PPC_FUNC_IMPL(__imp__sub_8269A774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A778"))) PPC_WEAK_FUNC(sub_8269A778);
PPC_FUNC_IMPL(__imp__sub_8269A778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x8269a7ac
	goto loc_8269A7AC;
loc_8269A79C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269cd60
	sub_8269CD60(ctx, base);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_8269A7AC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x8269a79c
	if (!cr6.eq) goto loc_8269A79C;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8269c650
	sub_8269C650(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269d758
	sub_8269D758(ctx, base);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269d758
	sub_8269D758(ctx, base);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269d758
	sub_8269D758(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269A7F4"))) PPC_WEAK_FUNC(sub_8269A7F4);
PPC_FUNC_IMPL(__imp__sub_8269A7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A7F8"))) PPC_WEAK_FUNC(sub_8269A7F8);
PPC_FUNC_IMPL(__imp__sub_8269A7F8) {
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
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269a848
	goto loc_8269A848;
loc_8269A810:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269ce48
	sub_8269CE48(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8269d740
	sub_8269D740(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// bl 0x8269d740
	sub_8269D740(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// bl 0x8269d740
	sub_8269D740(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269A848:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269a810
	if (!cr6.eq) goto loc_8269A810;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269A85C"))) PPC_WEAK_FUNC(sub_8269A85C);
PPC_FUNC_IMPL(__imp__sub_8269A85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A860"))) PPC_WEAK_FUNC(sub_8269A860);
PPC_FUNC_IMPL(__imp__sub_8269A860) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269a88c
	goto loc_8269A88C;
loc_8269A87C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269cd28
	sub_8269CD28(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269A88C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269a87c
	if (!cr6.eq) goto loc_8269A87C;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stb r29,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r29.u8);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stb r29,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r29.u8);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stb r29,8(r11)
	PPC_STORE_U8(r11.u32 + 8, r29.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269A8B8"))) PPC_WEAK_FUNC(sub_8269A8B8);
PPC_FUNC_IMPL(__imp__sub_8269A8B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// subf r11,r3,r4
	r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blelr 
	if (!cr0.gt) return;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8269A8C8:
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// blt cr6,0x8269a8ec
	if (cr6.lt) goto loc_8269A8EC;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8269A8EC:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8269a904
	if (cr0.eq) goto loc_8269A904;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x8269a908
	goto loc_8269A908;
loc_8269A904:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8269A908:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8269a8c8
	if (cr6.gt) goto loc_8269A8C8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A914"))) PPC_WEAK_FUNC(sub_8269A914);
PPC_FUNC_IMPL(__imp__sub_8269A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A918"))) PPC_WEAK_FUNC(sub_8269A918);
PPC_FUNC_IMPL(__imp__sub_8269A918) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8269A938"))) PPC_WEAK_FUNC(sub_8269A938);
PPC_FUNC_IMPL(__imp__sub_8269A938) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269A93C"))) PPC_WEAK_FUNC(sub_8269A93C);
PPC_FUNC_IMPL(__imp__sub_8269A93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269A940"))) PPC_WEAK_FUNC(sub_8269A940);
PPC_FUNC_IMPL(__imp__sub_8269A940) {
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
	// blt cr6,0x8269a988
	if (cr6.lt) goto loc_8269A988;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8269A988:
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
	// bl 0x8269a710
	sub_8269A710(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8269a9c0
	if (cr0.eq) goto loc_8269A9C0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8269A9C0:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8269a9e0
	if (cr6.eq) goto loc_8269A9E0;
loc_8269A9CC:
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
	// bne 0x8269a9cc
	if (!cr0.eq) goto loc_8269A9CC;
loc_8269A9E0:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8269aa08
	if (!cr0.eq) goto loc_8269AA08;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8269aa08
	if (cr0.eq) goto loc_8269AA08;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8269AA08:
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

__attribute__((alias("__imp__sub_8269AA3C"))) PPC_WEAK_FUNC(sub_8269AA3C);
PPC_FUNC_IMPL(__imp__sub_8269AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269AA40"))) PPC_WEAK_FUNC(sub_8269AA40);
PPC_FUNC_IMPL(__imp__sub_8269AA40) {
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
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r31,4(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// bl 0x8269a8b8
	sub_8269A8B8(ctx, base);
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// beq cr6,0x8269aa9c
	if (cr6.eq) goto loc_8269AA9C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r30
	cr6.compare<int32_t>(r11.s32, r30.s32, xer);
	// beq cr6,0x8269aaa0
	if (cr6.eq) goto loc_8269AAA0;
loc_8269AA9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269AAA0:
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

__attribute__((alias("__imp__sub_8269AAB8"))) PPC_WEAK_FUNC(sub_8269AAB8);
PPC_FUNC_IMPL(__imp__sub_8269AAB8) {
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
	// beq cr6,0x8269aaf8
	if (cr6.eq) goto loc_8269AAF8;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269aae8
	if (cr0.eq) goto loc_8269AAE8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8269AAE8:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8269ab0c
	goto loc_8269AB0C;
loc_8269AAF8:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8269a940
	sub_8269A940(ctx, base);
loc_8269AB0C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AB1C"))) PPC_WEAK_FUNC(sub_8269AB1C);
PPC_FUNC_IMPL(__imp__sub_8269AB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269AB20"))) PPC_WEAK_FUNC(sub_8269AB20);
PPC_FUNC_IMPL(__imp__sub_8269AB20) {
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
	// beq cr6,0x8269ab68
	if (cr6.eq) goto loc_8269AB68;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8269ab60
	if (cr0.eq) goto loc_8269AB60;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8269ab64
	goto loc_8269AB64;
loc_8269AB60:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8269AB64:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8269AB68:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269AB74"))) PPC_WEAK_FUNC(sub_8269AB74);
PPC_FUNC_IMPL(__imp__sub_8269AB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269AB78"))) PPC_WEAK_FUNC(sub_8269AB78);
PPC_FUNC_IMPL(__imp__sub_8269AB78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-32464(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -32464);
	// mflr r12
	// bl 0x8239bce0
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r23.u32);
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
	// stw r26,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r26.u32);
	// stw r26,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r26.u32);
	// stw r26,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r26.u32);
	// std r26,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r26.u64);
	// ld r11,96(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
	// stw r29,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r29.u32);
	// stw r29,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,3460
	ctx.r4.s64 = r11.s64 + 3460;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt 0x8269ac38
	if (cr0.gt) goto loc_8269AC38;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269AC38:
	// li r3,24
	ctx.r3.s64 = 24;
	// clrlwi r25,r11,24
	r25.u64 = r11.u32 & 0xFF;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269ac64
	if (cr0.eq) goto loc_8269AC64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8269c968
	sub_8269C968(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269ac68
	goto loc_8269AC68;
loc_8269AC64:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269AC68:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x8269acd8
	if (cr0.eq) goto loc_8269ACD8;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-32536
	ctx.r4.s64 = r11.s64 + -32536;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269e0e0
	sub_8269E0E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269acdc
	goto loc_8269ACDC;
loc_8269ACD8:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269ACDC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// addi r4,r10,-32544
	ctx.r4.s64 = ctx.r10.s64 + -32544;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269ad40
	if (cr0.eq) goto loc_8269AD40;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821cb400
	sub_821CB400(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_8269AD40:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r10.u8);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269ad60
	if (!cr0.eq) goto loc_8269AD60;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x8269ad70
	goto loc_8269AD70;
loc_8269AD60:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8269AD70:
	// bl 0x8269a690
	sub_8269A690(ctx, base);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8269AD78:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269ada8
	if (cr0.eq) goto loc_8269ADA8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8269d110
	sub_8269D110(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269adac
	goto loc_8269ADAC;
loc_8269ADA8:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269ADAC:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8269aab8
	sub_8269AAB8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// blt cr6,0x8269ad78
	if (cr6.lt) goto loc_8269AD78;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b2f30
	sub_821B2F30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// beq 0x8269ae14
	if (cr0.eq) goto loc_8269AE14;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8269d8c8
	sub_8269D8C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269ae18
	goto loc_8269AE18;
loc_8269AE14:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269AE18:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x821b2f30
	sub_821B2F30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269ae5c
	if (cr0.eq) goto loc_8269AE5C;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8269d8c8
	sub_8269D8C8(ctx, base);
	// b 0x8269ae60
	goto loc_8269AE60;
loc_8269AE5C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8269AE60:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8269aeb0
	if (!cr0.eq) goto loc_8269AEB0;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-32560
	ctx.r4.s64 = r11.s64 + -32560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_8269AEB0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b2f30
	sub_821B2F30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269aef8
	if (cr0.eq) goto loc_8269AEF8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lfs f0,-25404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x8269d8c8
	sub_8269D8C8(ctx, base);
	// b 0x8269aefc
	goto loc_8269AEFC;
loc_8269AEF8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8269AEFC:
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8269AB80"))) PPC_WEAK_FUNC(sub_8269AB80);
PPC_FUNC_IMPL(__imp__sub_8269AB80) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// stw r30,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r30.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r26.u32);
	// stw r26,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r26.u32);
	// stw r26,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r26.u32);
	// addi r11,r31,96
	r11.s64 = r31.s64 + 96;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r23,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r23.u32);
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
	// stw r26,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r26.u32);
	// stw r26,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r26.u32);
	// stw r26,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r26.u32);
	// std r26,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r26.u64);
	// ld r11,96(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 96);
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// std r11,0(r29)
	PPC_STORE_U64(r29.u32 + 0, r11.u64);
	// stw r29,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r29.u32);
	// stw r29,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r29.u32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// addi r4,r11,3460
	ctx.r4.s64 = r11.s64 + 3460;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,27816
	ctx.r4.s64 = r11.s64 + 27816;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82192718
	sub_82192718(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt 0x8269ac38
	if (cr0.gt) goto loc_8269AC38;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269AC38:
	// li r3,24
	ctx.r3.s64 = 24;
	// clrlwi r25,r11,24
	r25.u64 = r11.u32 & 0xFF;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269ac64
	if (cr0.eq) goto loc_8269AC64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x8269c968
	sub_8269C968(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269ac68
	goto loc_8269AC68;
loc_8269AC64:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269AC68:
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// beq 0x8269acd8
	if (cr0.eq) goto loc_8269ACD8;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-32536
	ctx.r4.s64 = r11.s64 + -32536;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8269e0e0
	sub_8269E0E0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269acdc
	goto loc_8269ACDC;
loc_8269ACD8:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269ACDC:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// addi r4,r10,-32544
	ctx.r4.s64 = ctx.r10.s64 + -32544;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82254c00
	sub_82254C00(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269ad40
	if (cr0.eq) goto loc_8269AD40;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x821cb400
	sub_821CB400(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
loc_8269AD40:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,24(r11)
	PPC_STORE_U8(r11.u32 + 24, ctx.r10.u8);
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269ad60
	if (!cr0.eq) goto loc_8269AD60;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x8269ad70
	goto loc_8269AD70;
loc_8269AD60:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
loc_8269AD70:
	// bl 0x8269a690
	sub_8269A690(ctx, base);
	// mr r29,r26
	r29.u64 = r26.u64;
loc_8269AD78:
	// li r3,56
	ctx.r3.s64 = 56;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269ada8
	if (cr0.eq) goto loc_8269ADA8;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8269d110
	sub_8269D110(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269adac
	goto loc_8269ADAC;
loc_8269ADA8:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269ADAC:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x8269aab8
	sub_8269AAB8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// blt cr6,0x8269ad78
	if (cr6.lt) goto loc_8269AD78;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b2f30
	sub_821B2F30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// beq 0x8269ae14
	if (cr0.eq) goto loc_8269AE14;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8269d8c8
	sub_8269D8C8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x8269ae18
	goto loc_8269AE18;
loc_8269AE14:
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8269AE18:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r11.u32);
	// bl 0x821b2f30
	sub_821B2F30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269ae5c
	if (cr0.eq) goto loc_8269AE5C;
	// li r7,1
	ctx.r7.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// bl 0x8269d8c8
	sub_8269D8C8(ctx, base);
	// b 0x8269ae60
	goto loc_8269AE60;
loc_8269AE5C:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8269AE60:
	// lis r11,-32127
	r11.s64 = -2105475072;
	// stw r3,32(r30)
	PPC_STORE_U32(r30.u32 + 32, ctx.r3.u32);
	// lwz r3,-9608(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9608);
	// bl 0x822b37d8
	sub_822B37D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8269aeb0
	if (!cr0.eq) goto loc_8269AEB0;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// addi r4,r11,-32560
	ctx.r4.s64 = r11.s64 + -32560;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_8269AEB0:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x821b2f30
	sub_821B2F30(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,152
	ctx.r3.s64 = 152;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// stw r3,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269aef8
	if (cr0.eq) goto loc_8269AEF8;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lfs f0,-25404(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25404);
	f0.f64 = double(temp.f32);
	// fmuls f1,f31,f0
	ctx.f1.f64 = double(float(f31.f64 * f0.f64));
	// bl 0x8269d8c8
	sub_8269D8C8(ctx, base);
	// b 0x8269aefc
	goto loc_8269AEFC;
loc_8269AEF8:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_8269AEFC:
	// stw r3,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_8269AF10"))) PPC_WEAK_FUNC(sub_8269AF10);
PPC_FUNC_IMPL(__imp__sub_8269AF10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 228);
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

__attribute__((alias("__imp__sub_8269AF38"))) PPC_WEAK_FUNC(sub_8269AF38);
PPC_FUNC_IMPL(__imp__sub_8269AF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x82254fd8
	sub_82254FD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269AF64"))) PPC_WEAK_FUNC(sub_8269AF64);
PPC_FUNC_IMPL(__imp__sub_8269AF64) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8269AF8C"))) PPC_WEAK_FUNC(sub_8269AF8C);
PPC_FUNC_IMPL(__imp__sub_8269AF8C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8269AFB4"))) PPC_WEAK_FUNC(sub_8269AFB4);
PPC_FUNC_IMPL(__imp__sub_8269AFB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
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

__attribute__((alias("__imp__sub_8269AFDC"))) PPC_WEAK_FUNC(sub_8269AFDC);
PPC_FUNC_IMPL(__imp__sub_8269AFDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8269B004"))) PPC_WEAK_FUNC(sub_8269B004);
PPC_FUNC_IMPL(__imp__sub_8269B004) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
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

__attribute__((alias("__imp__sub_8269B02C"))) PPC_WEAK_FUNC(sub_8269B02C);
PPC_FUNC_IMPL(__imp__sub_8269B02C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-208
	r31.s64 = r12.s64 + -208;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
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

__attribute__((alias("__imp__sub_8269B054"))) PPC_WEAK_FUNC(sub_8269B054);
PPC_FUNC_IMPL(__imp__sub_8269B054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B058"))) PPC_WEAK_FUNC(sub_8269B058);
PPC_FUNC_IMPL(__imp__sub_8269B058) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// bl 0x8227e088
	sub_8227E088(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// lwz r3,-9288(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -9288);
	// bl 0x822bb728
	sub_822BB728(ctx, base);
	// lbz r11,13(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 13);
	// lfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	f31.f64 = double(temp.f32);
	// lbz r28,12(r3)
	r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 12);
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// rlwinm r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r6,r11,1
	ctx.r6.u64 = r11.u64 ^ 1;
	// beq cr6,0x8269b0cc
	if (cr6.eq) goto loc_8269B0CC;
	// cmpwi cr6,r30,3
	cr6.compare<int32_t>(r30.s32, 3, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8269b0d0
	if (!cr6.eq) goto loc_8269B0D0;
loc_8269B0CC:
	// li r11,1
	r11.s64 = 1;
loc_8269B0D0:
	// addi r10,r30,-3
	ctx.r10.s64 = r30.s64 + -3;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// clrlwi r5,r11,24
	ctx.r5.u64 = r11.u32 & 0xFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r29,r11
	r29.u64 = r11.u64;
	// bl 0x8269c720
	sub_8269C720(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// clrlwi r27,r28,16
	r27.u64 = r28.u32 & 0xFFFF;
	// li r30,0
	r30.s64 = 0;
	// clrlwi r28,r29,24
	r28.u64 = r29.u32 & 0xFF;
	// lfs f29,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f29.f64 = double(temp.f32);
loc_8269B104:
	// li r11,1
	r11.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r27
	r11.u64 = r11.u64 & r27.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269b1ac
	if (cr0.eq) goto loc_8269B1AC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269aa40
	sub_8269AA40(ctx, base);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x8269d708
	sub_8269D708(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x8269cf00
	sub_8269CF00(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8269b1e0
	if (cr6.eq) goto loc_8269B1E0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x8269d708
	sub_8269D708(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f1.f64;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8269d708
	sub_8269D708(ctx, base);
	// b 0x8269b1e0
	goto loc_8269B1E0;
loc_8269B1AC:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269d840
	sub_8269D840(ctx, base);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8269b1e0
	if (cr6.eq) goto loc_8269B1E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269d840
	sub_8269D840(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269d840
	sub_8269D840(ctx, base);
loc_8269B1E0:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// blt cr6,0x8269b104
	if (cr6.lt) goto loc_8269B104;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8269B204"))) PPC_WEAK_FUNC(sub_8269B204);
PPC_FUNC_IMPL(__imp__sub_8269B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B208"))) PPC_WEAK_FUNC(sub_8269B208);
PPC_FUNC_IMPL(__imp__sub_8269B208) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f31{};
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8269aa40
	sub_8269AA40(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269b23c
	if (cr0.eq) goto loc_8269B23C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8269cf78
	sub_8269CF78(ctx, base);
loc_8269B23C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8269c6c0
	sub_8269C6C0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_8269B264"))) PPC_WEAK_FUNC(sub_8269B264);
PPC_FUNC_IMPL(__imp__sub_8269B264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B268"))) PPC_WEAK_FUNC(sub_8269B268);
PPC_FUNC_IMPL(__imp__sub_8269B268) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x8269b2cc
	if (!cr6.eq) goto loc_8269B2CC;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// beq cr6,0x8269b2fc
	if (cr6.eq) goto loc_8269B2FC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r29,r11,-5056
	r29.s64 = r11.s64 + -5056;
	// lfs f31,17324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17324);
	f31.f64 = double(temp.f32);
loc_8269B2A4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmuls f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f31.f64));
	// bl 0x8269cf78
	sub_8269CF78(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b2a4
	if (!cr6.eq) goto loc_8269B2A4;
	// b 0x8269b2fc
	goto loc_8269B2FC;
loc_8269B2CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269aa40
	sub_8269AA40(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8269b2fc
	if (cr0.eq) goto loc_8269B2FC;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r3,r11,-5056
	ctx.r3.s64 = r11.s64 + -5056;
	// bl 0x82311960
	sub_82311960(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,17324(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f1,f0
	ctx.f1.f64 = double(float(ctx.f1.f64 * f0.f64));
	// bl 0x8269cf78
	sub_8269CF78(ctx, base);
loc_8269B2FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269B308"))) PPC_WEAK_FUNC(sub_8269B308);
PPC_FUNC_IMPL(__imp__sub_8269B308) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	cr6.compare<int32_t>(ctx.r4.s32, -1, xer);
	// bne cr6,0x8269b34c
	if (!cr6.eq) goto loc_8269B34C;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269b33c
	goto loc_8269B33C;
loc_8269B32C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269cd38
	sub_8269CD38(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B33C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b32c
	if (!cr6.eq) goto loc_8269B32C;
	// b 0x8269b364
	goto loc_8269B364;
loc_8269B34C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269aa40
	sub_8269AA40(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269b364
	if (cr0.eq) goto loc_8269B364;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8269cd38
	sub_8269CD38(ctx, base);
loc_8269B364:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269B36C"))) PPC_WEAK_FUNC(sub_8269B36C);
PPC_FUNC_IMPL(__imp__sub_8269B36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B370"))) PPC_WEAK_FUNC(sub_8269B370);
PPC_FUNC_IMPL(__imp__sub_8269B370) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x8269b3ac
	goto loc_8269B3AC;
loc_8269B38C:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8269b3a8
	if (cr0.eq) goto loc_8269B3A8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269d4b8
	sub_8269D4B8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8269B3A8:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B3AC:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x8269b38c
	if (!cr6.eq) goto loc_8269B38C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8269ab20
	sub_8269AB20(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269B3CC"))) PPC_WEAK_FUNC(sub_8269B3CC);
PPC_FUNC_IMPL(__imp__sub_8269B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B3D0"))) PPC_WEAK_FUNC(sub_8269B3D0);
PPC_FUNC_IMPL(__imp__sub_8269B3D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lwz r16,-32304(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -32304);
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
	// bl 0x8269b370
	sub_8269B370(ctx, base);
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8269b410
	if (cr0.eq) goto loc_8269B410;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269cb98
	sub_8269CB98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8269B410:
	// li r28,0
	r28.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269b454
	if (cr0.eq) goto loc_8269B454;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8269B454:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r28,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269b488
	if (cr0.eq) goto loc_8269B488;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8269B488:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269b4bc
	if (cr0.eq) goto loc_8269B4BC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8269B4BC:
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// b 0x8269b504
	goto loc_8269B504;
loc_8269B4D8:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269b4f8
	if (cr0.eq) goto loc_8269B4F8;
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
loc_8269B4F8:
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r28,r29
	r11.s64 = r29.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
loc_8269B504:
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269b4d8
	if (!cr0.eq) goto loc_8269B4D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82254d70
	sub_82254D70(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269b53c
	if (cr0.eq) goto loc_8269B53C;
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
loc_8269B53C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269B3D8"))) PPC_WEAK_FUNC(sub_8269B3D8);
PPC_FUNC_IMPL(__imp__sub_8269B3D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// bl 0x8269b370
	sub_8269B370(ctx, base);
	// lwz r29,16(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8269b410
	if (cr0.eq) goto loc_8269B410;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269cb98
	sub_8269CB98(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8269B410:
	// li r28,0
	r28.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r28,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269b454
	if (cr0.eq) goto loc_8269B454;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8269B454:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r28,28(r30)
	PPC_STORE_U32(r30.u32 + 28, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269b488
	if (cr0.eq) goto loc_8269B488;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8269B488:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// stw r28,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r28.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269b4bc
	if (cr0.eq) goto loc_8269B4BC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8269B4BC:
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r10,r11,r29
	ctx.r10.s64 = r29.s64 - r11.s64;
	// mr r28,r11
	r28.u64 = r11.u64;
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// b 0x8269b504
	goto loc_8269B504;
loc_8269B4D8:
	// lwz r3,12(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269b4f8
	if (cr0.eq) goto loc_8269B4F8;
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
loc_8269B4F8:
	// lwz r28,0(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r11,r28,r29
	r11.s64 = r29.s64 - r28.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
loc_8269B504:
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8269b4d8
	if (!cr0.eq) goto loc_8269B4D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82254d70
	sub_82254D70(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269b53c
	if (cr0.eq) goto loc_8269B53C;
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
loc_8269B53C:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269B544"))) PPC_WEAK_FUNC(sub_8269B544);
PPC_FUNC_IMPL(__imp__sub_8269B544) {
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

__attribute__((alias("__imp__sub_8269B56C"))) PPC_WEAK_FUNC(sub_8269B56C);
PPC_FUNC_IMPL(__imp__sub_8269B56C) {
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
	// addi r3,r11,44
	ctx.r3.s64 = r11.s64 + 44;
	// bl 0x82254fd8
	sub_82254FD8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B598"))) PPC_WEAK_FUNC(sub_8269B598);
PPC_FUNC_IMPL(__imp__sub_8269B598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lfs f0,-32216(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -32216);
	f0.f64 = double(temp.f32);
	// lbz r11,25(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// andi. r11,r11,159
	r11.u64 = r11.u64 & 159;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B5B4"))) PPC_WEAK_FUNC(sub_8269B5B4);
PPC_FUNC_IMPL(__imp__sub_8269B5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B5B8"))) PPC_WEAK_FUNC(sub_8269B5B8);
PPC_FUNC_IMPL(__imp__sub_8269B5B8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269b5e4
	goto loc_8269B5E4;
loc_8269B5D4:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269e7f0
	sub_8269E7F0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B5E4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b5d4
	if (!cr6.eq) goto loc_8269B5D4;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269B5F8"))) PPC_WEAK_FUNC(sub_8269B5F8);
PPC_FUNC_IMPL(__imp__sub_8269B5F8) {
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
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269b624
	goto loc_8269B624;
loc_8269B618:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269eac0
	sub_8269EAC0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B624:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b618
	if (!cr6.eq) goto loc_8269B618;
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stb r11,25(r30)
	PPC_STORE_U8(r30.u32 + 25, r11.u8);
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

__attribute__((alias("__imp__sub_8269B654"))) PPC_WEAK_FUNC(sub_8269B654);
PPC_FUNC_IMPL(__imp__sub_8269B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B658"))) PPC_WEAK_FUNC(sub_8269B658);
PPC_FUNC_IMPL(__imp__sub_8269B658) {
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
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269b684
	goto loc_8269B684;
loc_8269B678:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269e2c8
	sub_8269E2C8(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B684:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b678
	if (!cr6.eq) goto loc_8269B678;
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stb r11,25(r30)
	PPC_STORE_U8(r30.u32 + 25, r11.u8);
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

__attribute__((alias("__imp__sub_8269B6B4"))) PPC_WEAK_FUNC(sub_8269B6B4);
PPC_FUNC_IMPL(__imp__sub_8269B6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B6B8"))) PPC_WEAK_FUNC(sub_8269B6B8);
PPC_FUNC_IMPL(__imp__sub_8269B6B8) {
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
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269b6e4
	goto loc_8269B6E4;
loc_8269B6D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269e340
	sub_8269E340(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B6E4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b6d8
	if (!cr6.eq) goto loc_8269B6D8;
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stb r11,25(r30)
	PPC_STORE_U8(r30.u32 + 25, r11.u8);
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

__attribute__((alias("__imp__sub_8269B714"))) PPC_WEAK_FUNC(sub_8269B714);
PPC_FUNC_IMPL(__imp__sub_8269B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B718"))) PPC_WEAK_FUNC(sub_8269B718);
PPC_FUNC_IMPL(__imp__sub_8269B718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f29.u64);
	// stfd f30,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	f29.f64 = ctx.f3.f64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269b768
	goto loc_8269B768;
loc_8269B750:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = f29.f64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x8269e9f8
	sub_8269E9F8(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B768:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b750
	if (!cr6.eq) goto loc_8269B750;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
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

__attribute__((alias("__imp__sub_8269B798"))) PPC_WEAK_FUNC(sub_8269B798);
PPC_FUNC_IMPL(__imp__sub_8269B798) {
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
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269b7c4
	goto loc_8269B7C4;
loc_8269B7B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269e240
	sub_8269E240(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B7C4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b7b8
	if (!cr6.eq) goto loc_8269B7B8;
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

__attribute__((alias("__imp__sub_8269B7E8"))) PPC_WEAK_FUNC(sub_8269B7E8);
PPC_FUNC_IMPL(__imp__sub_8269B7E8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// addi r11,r11,-32216
	r11.s64 = r11.s64 + -32216;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x8269b804
	if (!cr6.gt) goto loc_8269B804;
	// addi r11,r1,28
	r11.s64 = ctx.r1.s64 + 28;
loc_8269B804:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269B810"))) PPC_WEAK_FUNC(sub_8269B810);
PPC_FUNC_IMPL(__imp__sub_8269B810) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269b854
	goto loc_8269B854;
loc_8269B82C:
	// lbz r11,25(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 25);
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8269b850
	if (!cr0.eq) goto loc_8269B850;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8269e398
	sub_8269E398(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82697fd8
	sub_82697FD8(ctx, base);
loc_8269B850:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B854:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b82c
	if (!cr6.eq) goto loc_8269B82C;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269B868"))) PPC_WEAK_FUNC(sub_8269B868);
PPC_FUNC_IMPL(__imp__sub_8269B868) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d5e8
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = ctx.f1.f64;
	// fmr f31,f2
	f31.f64 = ctx.f2.f64;
	// li r11,1
	r11.s64 = 1;
	// fmr f29,f4
	f29.f64 = ctx.f4.f64;
	// fmr f28,f5
	f28.f64 = ctx.f5.f64;
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x8269b8b0
	if (cr6.gt) goto loc_8269B8B0;
	// li r11,0
	r11.s64 = 0;
loc_8269B8B0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269b8ec
	if (cr0.eq) goto loc_8269B8EC;
	// fcmpu cr6,f31,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, ctx.f13.f64);
	// bge cr6,0x8269b8c8
	if (!cr6.lt) goto loc_8269B8C8;
	// fsubs f2,f31,f0
	ctx.f2.f64 = double(float(f31.f64 - f0.f64));
	// b 0x8269b8cc
	goto loc_8269B8CC;
loc_8269B8C8:
	// fsubs f2,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f13.f64 - f0.f64));
loc_8269B8CC:
	// lfs f1,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + f0.f64));
	// fcmpu cr6,f13,f3
	cr6.compare(ctx.f13.f64, ctx.f3.f64);
	// bge cr6,0x8269b8e0
	if (!cr6.lt) goto loc_8269B8E0;
	// fsubs f1,f3,f0
	ctx.f1.f64 = double(float(ctx.f3.f64 - f0.f64));
loc_8269B8E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fsubs f3,f31,f0
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(f31.f64 - f0.f64));
	// bl 0x8269b718
	sub_8269B718(ctx, base);
loc_8269B8EC:
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// b 0x8269b910
	goto loc_8269B910;
loc_8269B8F4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// fmr f4,f28
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f28.f64;
	// fmr f3,f29
	ctx.f3.f64 = f29.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x8269ead0
	sub_8269EAD0(ctx, base);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269B910:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x8269b8f4
	if (!cr6.eq) goto loc_8269B8F4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-24
	r12.s64 = ctx.r1.s64 + -24;
	// bl 0x8239d634
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

__attribute__((alias("__imp__sub_8269B93C"))) PPC_WEAK_FUNC(sub_8269B93C);
PPC_FUNC_IMPL(__imp__sub_8269B93C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B940"))) PPC_WEAK_FUNC(sub_8269B940);
PPC_FUNC_IMPL(__imp__sub_8269B940) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// b 0x8269b97c
	goto loc_8269B97C;
loc_8269B958:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// lwz r30,0(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269e790
	sub_8269E790(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269bf38
	sub_8269BF38(ctx, base);
loc_8269B97C:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269b958
	if (cr0.eq) goto loc_8269B958;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269B99C"))) PPC_WEAK_FUNC(sub_8269B99C);
PPC_FUNC_IMPL(__imp__sub_8269B99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269B9A0"))) PPC_WEAK_FUNC(sub_8269B9A0);
PPC_FUNC_IMPL(__imp__sub_8269B9A0) {
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
	// blt cr6,0x8269b9e8
	if (cr6.lt) goto loc_8269B9E8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_8269B9E8:
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
	// bl 0x826974e8
	sub_826974E8(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8269ba20
	if (cr0.eq) goto loc_8269BA20;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_8269BA20:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8269ba40
	if (cr6.eq) goto loc_8269BA40;
loc_8269BA2C:
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
	// bne 0x8269ba2c
	if (!cr0.eq) goto loc_8269BA2C;
loc_8269BA40:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x8269ba68
	if (!cr0.eq) goto loc_8269BA68;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x8269ba68
	if (cr0.eq) goto loc_8269BA68;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_8269BA68:
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

__attribute__((alias("__imp__sub_8269BA9C"))) PPC_WEAK_FUNC(sub_8269BA9C);
PPC_FUNC_IMPL(__imp__sub_8269BA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BAA0"))) PPC_WEAK_FUNC(sub_8269BAA0);
PPC_FUNC_IMPL(__imp__sub_8269BAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// lfs f0,-32216(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -32216);
	f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// lbz r11,25(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// stfs f1,12(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f2,16(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stb r4,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r4.u8);
	// rlwimi r11,r10,4,27,27
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 4) & 0x10) | (r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stfs f0,20(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BAE0"))) PPC_WEAK_FUNC(sub_8269BAE0);
PPC_FUNC_IMPL(__imp__sub_8269BAE0) {
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
	// beq cr6,0x8269bb20
	if (cr6.eq) goto loc_8269BB20;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8269bb10
	if (cr0.eq) goto loc_8269BB10;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_8269BB10:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x8269bb34
	goto loc_8269BB34;
loc_8269BB20:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x8269b9a0
	sub_8269B9A0(ctx, base);
loc_8269BB34:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8269BB44"))) PPC_WEAK_FUNC(sub_8269BB44);
PPC_FUNC_IMPL(__imp__sub_8269BB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BB48"))) PPC_WEAK_FUNC(sub_8269BB48);
PPC_FUNC_IMPL(__imp__sub_8269BB48) {
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
	// beq cr6,0x8269bb90
	if (cr6.eq) goto loc_8269BB90;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x8269bb88
	if (cr0.eq) goto loc_8269BB88;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x8269bb8c
	goto loc_8269BB8C;
loc_8269BB88:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8269BB8C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_8269BB90:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8269BB9C"))) PPC_WEAK_FUNC(sub_8269BB9C);
PPC_FUNC_IMPL(__imp__sub_8269BB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BBA0"))) PPC_WEAK_FUNC(sub_8269BBA0);
PPC_FUNC_IMPL(__imp__sub_8269BBA0) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// bl 0x8269be80
	sub_8269BE80(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8269bae0
	sub_8269BAE0(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r29,-4(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// bl 0x82699e78
	sub_82699E78(ctx, base);
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// lfs f0,16(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 16);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	cr6.compare(f0.f64, ctx.f2.f64);
	// bgt cr6,0x8269bc04
	if (cr6.gt) goto loc_8269BC04;
	// li r11,0
	r11.s64 = 0;
loc_8269BC04:
	// lbz r8,25(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// clrlwi r7,r11,24
	ctx.r7.u64 = r11.u32 & 0xFF;
	// rlwinm r8,r8,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0x1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269f108
	sub_8269F108(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8269BC2C"))) PPC_WEAK_FUNC(sub_8269BC2C);
PPC_FUNC_IMPL(__imp__sub_8269BC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BC30"))) PPC_WEAK_FUNC(sub_8269BC30);
PPC_FUNC_IMPL(__imp__sub_8269BC30) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
loc_8269BC54:
	// li r11,1
	r11.s64 = 1;
	// lbz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// slw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 << (r31.u8 & 0x3F));
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8269bc84
	if (cr0.eq) goto loc_8269BC84;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8269bba0
	sub_8269BBA0(ctx, base);
loc_8269BC84:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,5
	cr6.compare<int32_t>(r31.s32, 5, xer);
	// blt cr6,0x8269bc54
	if (cr6.lt) goto loc_8269BC54;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8269BC98"))) PPC_WEAK_FUNC(sub_8269BC98);
PPC_FUNC_IMPL(__imp__sub_8269BC98) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r31,0(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r28,4(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x8269bcd4
	goto loc_8269BCD4;
loc_8269BCB4:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x8269bcd0
	if (cr0.eq) goto loc_8269BCD0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8269e688
	sub_8269E688(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8269BCD0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_8269BCD4:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x8269bcb4
	if (!cr6.eq) goto loc_8269BCB4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x8269bb48
	sub_8269BB48(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8269BCF4"))) PPC_WEAK_FUNC(sub_8269BCF4);
PPC_FUNC_IMPL(__imp__sub_8269BCF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BCF8"))) PPC_WEAK_FUNC(sub_8269BCF8);
PPC_FUNC_IMPL(__imp__sub_8269BCF8) {
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
	// lwz r16,-32200(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -32200);
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
	// bl 0x8269bc98
	sub_8269BC98(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269bd44
	if (cr0.eq) goto loc_8269BD44;
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
loc_8269BD44:
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

__attribute__((alias("__imp__sub_8269BD00"))) PPC_WEAK_FUNC(sub_8269BD00);
PPC_FUNC_IMPL(__imp__sub_8269BD00) {
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
	// bl 0x8269bc98
	sub_8269BC98(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8269bd44
	if (cr0.eq) goto loc_8269BD44;
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
loc_8269BD44:
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

__attribute__((alias("__imp__sub_8269BD5C"))) PPC_WEAK_FUNC(sub_8269BD5C);
PPC_FUNC_IMPL(__imp__sub_8269BD5C) {
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

__attribute__((alias("__imp__sub_8269BD84"))) PPC_WEAK_FUNC(sub_8269BD84);
PPC_FUNC_IMPL(__imp__sub_8269BD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8269BD88"))) PPC_WEAK_FUNC(sub_8269BD88);
PPC_FUNC_IMPL(__imp__sub_8269BD88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-32136(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -32136);
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
	// li r3,468
	ctx.r3.s64 = 468;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269bdd0
	if (cr0.eq) goto loc_8269BDD0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8269e560
	sub_8269E560(ctx, base);
	// b 0x8269bdd4
	goto loc_8269BDD4;
loc_8269BDD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269BDD4:
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

__attribute__((alias("__imp__sub_8269BD90"))) PPC_WEAK_FUNC(sub_8269BD90);
PPC_FUNC_IMPL(__imp__sub_8269BD90) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,468
	ctx.r3.s64 = 468;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8269bdd0
	if (cr0.eq) goto loc_8269BDD0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8269e560
	sub_8269E560(ctx, base);
	// b 0x8269bdd4
	goto loc_8269BDD4;
loc_8269BDD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8269BDD4:
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

