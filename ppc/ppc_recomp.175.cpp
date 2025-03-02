#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_826A1A38"))) PPC_WEAK_FUNC(sub_826A1A38);
PPC_FUNC_IMPL(__imp__sub_826A1A38) {
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
	PPCRegister f0{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-29944(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -29944);
	// mflr r12
	// bl 0x8239bcf8
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-13380(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13380);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13384
	r28.s64 = ctx.r10.s64 + -13384;
	// bne 0x826a1a94
	if (!cr0.eq) goto loc_826A1A94;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13380(r29)
	PPC_STORE_U32(r29.u32 + -13380, r11.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-29968
	ctx.r4.s64 = r11.s64 + -29968;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13380(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13380);
loc_826A1A94:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x826a1ab8
	if (!cr0.eq) goto loc_826A1AB8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13380(r29)
	PPC_STORE_U32(r29.u32 + -13380, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,-16408
	ctx.r4.s64 = r11.s64 + -16408;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r11,-13388
	ctx.r3.s64 = r11.s64 + -13388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_826A1AB8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82699d68
	sub_82699D68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a1b10
	if (cr0.eq) goto loc_826A1B10;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822f6fb0
	sub_822F6FB0(ctx, base);
	// lwz r29,120(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x826a1afc
	goto loc_826A1AFC;
loc_826A1ADC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x822f6ff0
	sub_822F6FF0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_826A1AFC:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x826a1adc
	if (!cr6.eq) goto loc_826A1ADC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822f67d8
	sub_822F67D8(ctx, base);
loc_826A1B10:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a1c34
	if (cr0.eq) goto loc_826A1C34;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// lfs f29,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f29.f64 = double(temp.f32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_826A1B3C:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x82699d68
	sub_82699D68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a1c14
	if (cr0.eq) goto loc_826A1C14;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x822f6fb0
	sub_822F6FB0(ctx, base);
	// bl 0x826910a0
	sub_826910A0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x826a1b7c
	if (!cr6.lt) goto loc_826A1B7C;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x826a1b88
	goto loc_826A1B88;
loc_826A1B7C:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// ble cr6,0x826a1b88
	if (!cr6.gt) goto loc_826A1B88;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_826A1B88:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lbz r11,92(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x826a1bd0
	if (cr0.eq) goto loc_826A1BD0;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x826a1bfc
	goto loc_826A1BFC;
loc_826A1BD0:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwzx r11,r10,r29
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
loc_826A1BFC:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x822f67d8
	sub_822F67D8(ctx, base);
loc_826A1C14:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x826a1b3c
	if (cr6.lt) goto loc_826A1B3C;
loc_826A1C34:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A1A40"))) PPC_WEAK_FUNC(sub_826A1A40);
PPC_FUNC_IMPL(__imp__sub_826A1A40) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf8
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32126
	r29.s64 = -2105409536;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-13380(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13380);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13384
	r28.s64 = ctx.r10.s64 + -13384;
	// bne 0x826a1a94
	if (!cr0.eq) goto loc_826A1A94;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13380(r29)
	PPC_STORE_U32(r29.u32 + -13380, r11.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-29968
	ctx.r4.s64 = r11.s64 + -29968;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13380(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13380);
loc_826A1A94:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x826a1ab8
	if (!cr0.eq) goto loc_826A1AB8;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13380(r29)
	PPC_STORE_U32(r29.u32 + -13380, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r4,r11,-16408
	ctx.r4.s64 = r11.s64 + -16408;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r3,r11,-13388
	ctx.r3.s64 = r11.s64 + -13388;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_826A1AB8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82699d68
	sub_82699D68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a1b10
	if (cr0.eq) goto loc_826A1B10;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822f6fb0
	sub_822F6FB0(ctx, base);
	// lwz r29,120(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// b 0x826a1afc
	goto loc_826A1AFC;
loc_826A1ADC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x822f6ff0
	sub_822F6FF0(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
loc_826A1AFC:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x826a1adc
	if (!cr6.eq) goto loc_826A1ADC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x822f67d8
	sub_822F67D8(ctx, base);
loc_826A1B10:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// li r28,0
	r28.s64 = 0;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a1c34
	if (cr0.eq) goto loc_826A1C34;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r29,0
	r29.s64 = 0;
	// lfs f29,2552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2552);
	f29.f64 = double(temp.f32);
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
loc_826A1B3C:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x82699d68
	sub_82699D68(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a1c14
	if (cr0.eq) goto loc_826A1C14;
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x822f6fb0
	sub_822F6FB0(ctx, base);
	// bl 0x826910a0
	sub_826910A0(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fcmpu cr6,f31,f30
	cr6.compare(f31.f64, f30.f64);
	// bge cr6,0x826a1b7c
	if (!cr6.lt) goto loc_826A1B7C;
	// fmr f31,f30
	f31.f64 = f30.f64;
	// b 0x826a1b88
	goto loc_826A1B88;
loc_826A1B7C:
	// fcmpu cr6,f31,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f31.f64, f29.f64);
	// ble cr6,0x826a1b88
	if (!cr6.gt) goto loc_826A1B88;
	// fmr f31,f29
	f31.f64 = f29.f64;
loc_826A1B88:
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lbz r11,92(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x826a1bd0
	if (cr0.eq) goto loc_826A1BD0;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x826a1bfc
	goto loc_826A1BFC;
loc_826A1BD0:
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwzx r3,r11,r29
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// lwzx r11,r10,r29
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r29.u32);
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 88);
	f0.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(f0.f64 * f31.f64));
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
loc_826A1BFC:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x822f67d8
	sub_822F67D8(ctx, base);
loc_826A1C14:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x826a1b3c
	if (cr6.lt) goto loc_826A1B3C;
loc_826A1C34:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A1C48"))) PPC_WEAK_FUNC(sub_826A1C48);
PPC_FUNC_IMPL(__imp__sub_826A1C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13380
	r11.s64 = r11.s64 + -13380;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13380
	ctx.r10.s64 = ctx.r10.s64 + -13380;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1C70"))) PPC_WEAK_FUNC(sub_826A1C70);
PPC_FUNC_IMPL(__imp__sub_826A1C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13380
	r11.s64 = r11.s64 + -13380;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13380
	ctx.r10.s64 = ctx.r10.s64 + -13380;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1C98"))) PPC_WEAK_FUNC(sub_826A1C98);
PPC_FUNC_IMPL(__imp__sub_826A1C98) {
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
	// li r29,0
	r29.s64 = 0;
	// addi r31,r28,28
	r31.s64 = r28.s64 + 28;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a1d0c
	if (cr0.eq) goto loc_826A1D0C;
	// li r30,0
	r30.s64 = 0;
loc_826A1CC8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,120(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 120);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwzx r11,r10,r30
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwz r4,84(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x826a1cc8
	if (cr6.lt) goto loc_826A1CC8;
loc_826A1D0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A1D14"))) PPC_WEAK_FUNC(sub_826A1D14);
PPC_FUNC_IMPL(__imp__sub_826A1D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1D18"))) PPC_WEAK_FUNC(sub_826A1D18);
PPC_FUNC_IMPL(__imp__sub_826A1D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1D2C"))) PPC_WEAK_FUNC(sub_826A1D2C);
PPC_FUNC_IMPL(__imp__sub_826A1D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1D30"))) PPC_WEAK_FUNC(sub_826A1D30);
PPC_FUNC_IMPL(__imp__sub_826A1D30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,232(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// stw r11,232(r3)
	PPC_STORE_U32(ctx.r3.u32 + 232, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1D40"))) PPC_WEAK_FUNC(sub_826A1D40);
PPC_FUNC_IMPL(__imp__sub_826A1D40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// rlwinm r30,r4,2,0,29
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lfs f1,164(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x826a1db0
	if (cr0.eq) goto loc_826A1DB0;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 4);
	f0.f64 = double(temp.f32);
	// lfs f13,164(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lwzx r3,r30,r10
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826A1DB0:
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

__attribute__((alias("__imp__sub_826A1DC8"))) PPC_WEAK_FUNC(sub_826A1DC8);
PPC_FUNC_IMPL(__imp__sub_826A1DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stb r9,8(r11)
	PPC_STORE_U8(r11.u32 + 8, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1DE0"))) PPC_WEAK_FUNC(sub_826A1DE0);
PPC_FUNC_IMPL(__imp__sub_826A1DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
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

__attribute__((alias("__imp__sub_826A1DFC"))) PPC_WEAK_FUNC(sub_826A1DFC);
PPC_FUNC_IMPL(__imp__sub_826A1DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1E00"))) PPC_WEAK_FUNC(sub_826A1E00);
PPC_FUNC_IMPL(__imp__sub_826A1E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A1E1C"))) PPC_WEAK_FUNC(sub_826A1E1C);
PPC_FUNC_IMPL(__imp__sub_826A1E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1E20"))) PPC_WEAK_FUNC(sub_826A1E20);
PPC_FUNC_IMPL(__imp__sub_826A1E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stfs f1,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 4, temp.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// b 0x826a1d40
	sub_826A1D40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A1E4C"))) PPC_WEAK_FUNC(sub_826A1E4C);
PPC_FUNC_IMPL(__imp__sub_826A1E4C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1E50"))) PPC_WEAK_FUNC(sub_826A1E50);
PPC_FUNC_IMPL(__imp__sub_826A1E50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A1E6C"))) PPC_WEAK_FUNC(sub_826A1E6C);
PPC_FUNC_IMPL(__imp__sub_826A1E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1E70"))) PPC_WEAK_FUNC(sub_826A1E70);
PPC_FUNC_IMPL(__imp__sub_826A1E70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stfs f1,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r11.u32 + 88, temp.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x822f67c8
	sub_822F67C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1EB0"))) PPC_WEAK_FUNC(sub_826A1EB0);
PPC_FUNC_IMPL(__imp__sub_826A1EB0) {
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
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stb r9,92(r11)
	PPC_STORE_U8(r11.u32 + 92, ctx.r9.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,144(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x822f67c8
	sub_822F67C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A1EF4"))) PPC_WEAK_FUNC(sub_826A1EF4);
PPC_FUNC_IMPL(__imp__sub_826A1EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1EF8"))) PPC_WEAK_FUNC(sub_826A1EF8);
PPC_FUNC_IMPL(__imp__sub_826A1EF8) {
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
	// b 0x826a1f38
	goto loc_826A1F38;
loc_826A1F14:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a1f34
	if (cr0.eq) goto loc_826A1F34;
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
loc_826A1F34:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826A1F38:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x826a1f14
	if (!cr6.eq) goto loc_826A1F14;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A1F4C"))) PPC_WEAK_FUNC(sub_826A1F4C);
PPC_FUNC_IMPL(__imp__sub_826A1F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A1F50"))) PPC_WEAK_FUNC(sub_826A1F50);
PPC_FUNC_IMPL(__imp__sub_826A1F50) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-29824(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -29824);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stb r28,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r28.u8);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// bl 0x822f8898
	sub_822F8898(ctx, base);
	// addi r27,r30,52
	r27.s64 = r30.s64 + 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f7bc0
	sub_822F7BC0(ctx, base);
	// addi r29,r30,76
	r29.s64 = r30.s64 + 76;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822eb9b8
	sub_822EB9B8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-17724
	r11.s64 = r11.s64 + -17724;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lis r29,-32126
	r29.s64 = -2105409536;
	// stfs f30,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// stb r28,92(r30)
	PPC_STORE_U8(r30.u32 + 92, r28.u8);
	// lwz r11,-13368(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r26,r10,-13372
	r26.s64 = ctx.r10.s64 + -13372;
	// bne 0x826a200c
	if (!cr0.eq) goto loc_826A200C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13368(r29)
	PPC_STORE_U32(r29.u32 + -13368, r11.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-29968
	ctx.r4.s64 = r11.s64 + -29968;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13368(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13368);
loc_826A200C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13376
	r28.s64 = ctx.r10.s64 + -13376;
	// bne 0x826a2034
	if (!cr0.eq) goto loc_826A2034;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13368(r29)
	PPC_STORE_U32(r29.u32 + -13368, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-16408
	ctx.r4.s64 = r11.s64 + -16408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_826A2034:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x822f8110
	sub_822F8110(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x822f8110
	sub_822F8110(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A1F58"))) PPC_WEAK_FUNC(sub_826A1F58);
PPC_FUNC_IMPL(__imp__sub_826A1F58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r3,r30,12
	ctx.r3.s64 = r30.s64 + 12;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,0(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stb r28,8(r30)
	PPC_STORE_U8(r30.u32 + 8, r28.u8);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// stfs f30,4(r30)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
	// bl 0x822f8898
	sub_822F8898(ctx, base);
	// addi r27,r30,52
	r27.s64 = r30.s64 + 52;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f7bc0
	sub_822F7BC0(ctx, base);
	// addi r29,r30,76
	r29.s64 = r30.s64 + 76;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x822eb9b8
	sub_822EB9B8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,-17724
	r11.s64 = r11.s64 + -17724;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lis r29,-32126
	r29.s64 = -2105409536;
	// stfs f30,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 88, temp.u32);
	// stb r28,92(r30)
	PPC_STORE_U8(r30.u32 + 92, r28.u8);
	// lwz r11,-13368(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13368);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r26,r10,-13372
	r26.s64 = ctx.r10.s64 + -13372;
	// bne 0x826a200c
	if (!cr0.eq) goto loc_826A200C;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,-13368(r29)
	PPC_STORE_U32(r29.u32 + -13368, r11.u32);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r4,r11,-29968
	ctx.r4.s64 = r11.s64 + -29968;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r11,-13368(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -13368);
loc_826A200C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r28,r10,-13376
	r28.s64 = ctx.r10.s64 + -13376;
	// bne 0x826a2034
	if (!cr0.eq) goto loc_826A2034;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,-13368(r29)
	PPC_STORE_U32(r29.u32 + -13368, r11.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r4,r11,-16408
	ctx.r4.s64 = r11.s64 + -16408;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
loc_826A2034:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// bl 0x822f8110
	sub_822F8110(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x822f8110
	sub_822F8110(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x822f7878
	sub_822F7878(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A2070"))) PPC_WEAK_FUNC(sub_826A2070);
PPC_FUNC_IMPL(__imp__sub_826A2070) {
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
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// bl 0x822f7ea0
	sub_822F7EA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A209C"))) PPC_WEAK_FUNC(sub_826A209C);
PPC_FUNC_IMPL(__imp__sub_826A209C) {
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
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
	// bl 0x822ec050
	sub_822EC050(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A20C8"))) PPC_WEAK_FUNC(sub_826A20C8);
PPC_FUNC_IMPL(__imp__sub_826A20C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13368
	r11.s64 = r11.s64 + -13368;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13368
	ctx.r10.s64 = ctx.r10.s64 + -13368;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A20F0"))) PPC_WEAK_FUNC(sub_826A20F0);
PPC_FUNC_IMPL(__imp__sub_826A20F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	uint32_t ea{};
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-13368
	r11.s64 = r11.s64 + -13368;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r11,0,31,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// addi r10,r10,-13368
	ctx.r10.s64 = ctx.r10.s64 + -13368;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A2118"))) PPC_WEAK_FUNC(sub_826A2118);
PPC_FUNC_IMPL(__imp__sub_826A2118) {
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
	// li r28,1
	r28.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a2180
	if (cr0.eq) goto loc_826A2180;
	// li r30,0
	r30.s64 = 0;
loc_826A2148:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// bl 0x826a6840
	sub_826A6840(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a2160
	if (!cr0.eq) goto loc_826A2160;
	// li r28,0
	r28.s64 = 0;
loc_826A2160:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x826a2148
	if (cr6.lt) goto loc_826A2148;
loc_826A2180:
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a21dc
	if (cr0.eq) goto loc_826A21DC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,132(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x826a21dc
	if (!cr6.eq) goto loc_826A21DC;
	// lis r11,-32150
	r11.s64 = -2106982400;
	// lwz r30,32(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r31,28(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r29,r11,26920
	r29.s64 = r11.s64 + 26920;
	// b 0x826a21d4
	goto loc_826A21D4;
loc_826A21C4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826A21D4:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x826a21c4
	if (!cr6.eq) goto loc_826A21C4;
loc_826A21DC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A21E8"))) PPC_WEAK_FUNC(sub_826A21E8);
PPC_FUNC_IMPL(__imp__sub_826A21E8) {
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
	// bl 0x826a1a40
	sub_826A1A40(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// lwz r29,32(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r28,r11,26720
	r28.s64 = r11.s64 + 26720;
	// b 0x826a2234
	goto loc_826A2234;
loc_826A2224:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
loc_826A2234:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x826a2224
	if (!cr6.eq) goto loc_826A2224;
	// li r11,3
	r11.s64 = 3;
	// addi r3,r31,64
	ctx.r3.s64 = r31.s64 + 64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x8235d098
	sub_8235D098(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A2254"))) PPC_WEAK_FUNC(sub_826A2254);
PPC_FUNC_IMPL(__imp__sub_826A2254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2258"))) PPC_WEAK_FUNC(sub_826A2258);
PPC_FUNC_IMPL(__imp__sub_826A2258) {
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
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x826a22b0
	if (!cr6.eq) goto loc_826A22B0;
	// lis r11,-32150
	r11.s64 = -2106982400;
	// lwz r30,32(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// lwz r31,28(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r28,r11,26832
	r28.s64 = r11.s64 + 26832;
	// b 0x826a2298
	goto loc_826A2298;
loc_826A2288:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826A2298:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x826a2288
	if (!cr6.eq) goto loc_826A2288;
	// li r11,5
	r11.s64 = 5;
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// bl 0x8235d0d0
	sub_8235D0D0(ctx, base);
loc_826A22B0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A22B8"))) PPC_WEAK_FUNC(sub_826A22B8);
PPC_FUNC_IMPL(__imp__sub_826A22B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// li r31,0
	r31.s64 = 0;
	// addi r30,r29,28
	r30.s64 = r29.s64 + 28;
	// stfs f31,164(r29)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r29.u32 + 164, temp.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a2318
	if (cr0.eq) goto loc_826A2318;
loc_826A22F0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a1d40
	sub_826A1D40(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x826a22f0
	if (cr6.lt) goto loc_826A22F0;
loc_826A2318:
	// addi r3,r29,64
	ctx.r3.s64 = r29.s64 + 64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x8235d218
	sub_8235D218(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A2330"))) PPC_WEAK_FUNC(sub_826A2330);
PPC_FUNC_IMPL(__imp__sub_826A2330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r3,r11,52
	ctx.r3.s64 = r11.s64 + 52;
	// b 0x822f6fb0
	sub_822F6FB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A2344"))) PPC_WEAK_FUNC(sub_826A2344);
PPC_FUNC_IMPL(__imp__sub_826A2344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2348"))) PPC_WEAK_FUNC(sub_826A2348);
PPC_FUNC_IMPL(__imp__sub_826A2348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lwz r11,120(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A235C"))) PPC_WEAK_FUNC(sub_826A235C);
PPC_FUNC_IMPL(__imp__sub_826A235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2360"))) PPC_WEAK_FUNC(sub_826A2360);
PPC_FUNC_IMPL(__imp__sub_826A2360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lwz r10,120(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
	// b 0x822eba48
	sub_822EBA48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A237C"))) PPC_WEAK_FUNC(sub_826A237C);
PPC_FUNC_IMPL(__imp__sub_826A237C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2380"))) PPC_WEAK_FUNC(sub_826A2380);
PPC_FUNC_IMPL(__imp__sub_826A2380) {
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
	// addi r31,r30,160
	r31.s64 = r30.s64 + 160;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// bne 0x826a23c8
	if (!cr0.eq) goto loc_826A23C8;
	// mftb r11
	r11.u64 = __rdtsc();
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// ld r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
loc_826A23C8:
	// lis r11,-32136
	r11.s64 = -2106064896;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lfs f0,18804(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18804);
	f0.f64 = double(temp.f32);
	// ld r11,8(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// sradi r11,r11,32
	xer.ca = (r11.s64 < 0) & ((r11.u64 & 0xFFFFFFFF) != 0);
	r11.s64 = r11.s64 >> 32;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r11,-32136
	r11.s64 = -2106064896;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// lfs f13,18800(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 18800);
	ctx.f13.f64 = double(temp.f32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fmadds f31,f12,f0,f13
	f31.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// bl 0x82271840
	sub_82271840(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// bne 0x826a2438
	if (!cr0.eq) goto loc_826A2438;
	// mftb r11
	r11.u64 = __rdtsc();
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826A2438:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x826a2450
	if (!cr6.eq) goto loc_826A2450;
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,-27448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27448);
	f0.f64 = double(temp.f32);
	// b 0x826a2458
	goto loc_826A2458;
loc_826A2450:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
loc_826A2458:
	// lfs f13,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 208);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x826a2478
	if (cr6.lt) goto loc_826A2478;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
loc_826A2478:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// lwz r29,24(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// lwz r31,20(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// addi r28,r11,5336
	r28.s64 = r11.s64 + 5336;
	// b 0x826a24b4
	goto loc_826A24B4;
loc_826A24A4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mtctr r28
	ctr.u64 = r28.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826A24B4:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bne cr6,0x826a24a4
	if (!cr6.eq) goto loc_826A24A4;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x826a2540
	if (cr6.lt) goto loc_826A2540;
	// beq cr6,0x826a2528
	if (cr6.eq) goto loc_826A2528;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x826a2540
	if (cr6.lt) goto loc_826A2540;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// bge cr6,0x826a2540
	if (!cr6.lt) goto loc_826A2540;
	// addi r3,r30,-8
	ctx.r3.s64 = r30.s64 + -8;
	// bl 0x826a2118
	sub_826A2118(ctx, base);
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,32776
	ctx.r10.u64 = ctx.r10.u64 | 32776;
	// ori r9,r9,32804
	ctx.r9.u64 = ctx.r9.u64 | 32804;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x826a2518
	if (cr6.gt) goto loc_826A2518;
	// li r11,0
	r11.s64 = 0;
loc_826A2518:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a2540
	if (cr0.eq) goto loc_826A2540;
	// li r11,6
	r11.s64 = 6;
	// b 0x826a253c
	goto loc_826A253C;
loc_826A2528:
	// addi r3,r30,-8
	ctx.r3.s64 = r30.s64 + -8;
	// bl 0x826a2118
	sub_826A2118(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a2540
	if (cr0.eq) goto loc_826A2540;
	// li r11,2
	r11.s64 = 2;
loc_826A253C:
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_826A2540:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x826a25d0
	if (cr6.eq) goto loc_826A25D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 124);
	f0.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x826a25d0
	if (cr6.eq) goto loc_826A25D0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a25c8
	if (!cr0.eq) goto loc_826A25C8;
	// lfs f0,124(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 124);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x826a25d0
	if (!cr6.gt) goto loc_826A25D0;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwa r10,32(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 32));
	// lwz r9,152(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x826a25d0
	if (cr6.lt) goto loc_826A25D0;
loc_826A25C8:
	// addi r3,r30,-8
	ctx.r3.s64 = r30.s64 + -8;
	// bl 0x826a1580
	sub_826A1580(ctx, base);
loc_826A25D0:
	// addi r3,r30,-8
	ctx.r3.s64 = r30.s64 + -8;
	// bl 0x826a1a40
	sub_826A1A40(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A25E4"))) PPC_WEAK_FUNC(sub_826A25E4);
PPC_FUNC_IMPL(__imp__sub_826A25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A25E8"))) PPC_WEAK_FUNC(sub_826A25E8);
PPC_FUNC_IMPL(__imp__sub_826A25E8) {
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
	// blt cr6,0x826a2630
	if (cr6.lt) goto loc_826A2630;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_826A2630:
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
	// bl 0x826a1470
	sub_826A1470(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a2668
	if (cr0.eq) goto loc_826A2668;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_826A2668:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826a2688
	if (cr6.eq) goto loc_826A2688;
loc_826A2674:
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
	// bne 0x826a2674
	if (!cr0.eq) goto loc_826A2674;
loc_826A2688:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x826a26b0
	if (!cr0.eq) goto loc_826A26B0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a26b0
	if (cr0.eq) goto loc_826A26B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_826A26B0:
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

__attribute__((alias("__imp__sub_826A26E4"))) PPC_WEAK_FUNC(sub_826A26E4);
PPC_FUNC_IMPL(__imp__sub_826A26E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A26E8"))) PPC_WEAK_FUNC(sub_826A26E8);
PPC_FUNC_IMPL(__imp__sub_826A26E8) {
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
	// blt cr6,0x826a2730
	if (cr6.lt) goto loc_826A2730;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_826A2730:
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
	// bl 0x826a13a0
	sub_826A13A0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a2768
	if (cr0.eq) goto loc_826A2768;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_826A2768:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826a2788
	if (cr6.eq) goto loc_826A2788;
loc_826A2774:
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
	// bne 0x826a2774
	if (!cr0.eq) goto loc_826A2774;
loc_826A2788:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x826a27b0
	if (!cr0.eq) goto loc_826A27B0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a27b0
	if (cr0.eq) goto loc_826A27B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_826A27B0:
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

__attribute__((alias("__imp__sub_826A27E4"))) PPC_WEAK_FUNC(sub_826A27E4);
PPC_FUNC_IMPL(__imp__sub_826A27E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A27E8"))) PPC_WEAK_FUNC(sub_826A27E8);
PPC_FUNC_IMPL(__imp__sub_826A27E8) {
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
	// blt cr6,0x826a2830
	if (cr6.lt) goto loc_826A2830;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_826A2830:
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
	// bl 0x826a1408
	sub_826A1408(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a2868
	if (cr0.eq) goto loc_826A2868;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_826A2868:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826a2888
	if (cr6.eq) goto loc_826A2888;
loc_826A2874:
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
	// bne 0x826a2874
	if (!cr0.eq) goto loc_826A2874;
loc_826A2888:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x826a28b0
	if (!cr0.eq) goto loc_826A28B0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a28b0
	if (cr0.eq) goto loc_826A28B0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_826A28B0:
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

__attribute__((alias("__imp__sub_826A28E4"))) PPC_WEAK_FUNC(sub_826A28E4);
PPC_FUNC_IMPL(__imp__sub_826A28E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A28E8"))) PPC_WEAK_FUNC(sub_826A28E8);
PPC_FUNC_IMPL(__imp__sub_826A28E8) {
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
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x826a291c
	if (cr6.lt) goto loc_826A291C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x826a2920
	if (cr6.lt) goto loc_826A2920;
loc_826A291C:
	// li r11,0
	r11.s64 = 0;
loc_826A2920:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a2954
	if (cr0.eq) goto loc_826A2954;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x826a28e8
	sub_826A28E8(ctx, base);
	// b 0x826a2a28
	goto loc_826A2A28;
loc_826A2954:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// srawi r28,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r28.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r5
	cr6.compare<uint32_t>(r28.u32, ctx.r5.u32, xer);
	// ble cr6,0x826a29c8
	if (!cr6.gt) goto loc_826A29C8;
	// rlwinm r28,r5,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subf r27,r28,r31
	r27.s64 = r31.s64 - r28.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf. r5,r29,r27
	ctx.r5.s64 = r27.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// ble 0x826a29a0
	if (!cr0.gt) goto loc_826A29A0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r5,r31
	ctx.r3.s64 = r31.s64 - ctx.r5.s64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_826A29A0:
	// add r10,r28,r29
	ctx.r10.u64 = r28.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826a2a28
	if (cr6.eq) goto loc_826A2A28;
loc_826A29B0:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826a29b0
	if (!cr6.eq) goto loc_826A29B0;
	// b 0x826a2a28
	goto loc_826A2A28;
loc_826A29C8:
	// subf. r11,r28,r5
	r11.s64 = ctx.r5.s64 - r28.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// beq 0x826a29e8
	if (cr0.eq) goto loc_826A29E8;
loc_826A29D4:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x826a29d4
	if (!cr0.eq) goto loc_826A29D4;
loc_826A29E8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r29
	r11.u64 = r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x826a2a28
	if (cr6.eq) goto loc_826A2A28;
loc_826A2A14:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x826a2a14
	if (!cr6.eq) goto loc_826A2A14;
loc_826A2A28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A2A30"))) PPC_WEAK_FUNC(sub_826A2A30);
PPC_FUNC_IMPL(__imp__sub_826A2A30) {
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
	// bl 0x826a1470
	sub_826A1470(ctx, base);
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

__attribute__((alias("__imp__sub_826A2A70"))) PPC_WEAK_FUNC(sub_826A2A70);
PPC_FUNC_IMPL(__imp__sub_826A2A70) {
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
	// beq cr6,0x826a2ab0
	if (cr6.eq) goto loc_826A2AB0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a2aa0
	if (cr0.eq) goto loc_826A2AA0;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826A2AA0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x826a2ac4
	goto loc_826A2AC4;
loc_826A2AB0:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x826a26e8
	sub_826A26E8(ctx, base);
loc_826A2AC4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A2AD4"))) PPC_WEAK_FUNC(sub_826A2AD4);
PPC_FUNC_IMPL(__imp__sub_826A2AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2AD8"))) PPC_WEAK_FUNC(sub_826A2AD8);
PPC_FUNC_IMPL(__imp__sub_826A2AD8) {
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
	// beq cr6,0x826a2b18
	if (cr6.eq) goto loc_826A2B18;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a2b08
	if (cr0.eq) goto loc_826A2B08;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826A2B08:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x826a2b2c
	goto loc_826A2B2C;
loc_826A2B18:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x826a27e8
	sub_826A27E8(ctx, base);
loc_826A2B2C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A2B3C"))) PPC_WEAK_FUNC(sub_826A2B3C);
PPC_FUNC_IMPL(__imp__sub_826A2B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2B40"))) PPC_WEAK_FUNC(sub_826A2B40);
PPC_FUNC_IMPL(__imp__sub_826A2B40) {
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
	// beq cr6,0x826a2b80
	if (cr6.eq) goto loc_826A2B80;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a2b70
	if (cr0.eq) goto loc_826A2B70;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826A2B70:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x826a2b94
	goto loc_826A2B94;
loc_826A2B80:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x826a25e8
	sub_826A25E8(ctx, base);
loc_826A2B94:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A2BA4"))) PPC_WEAK_FUNC(sub_826A2BA4);
PPC_FUNC_IMPL(__imp__sub_826A2BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2BA8"))) PPC_WEAK_FUNC(sub_826A2BA8);
PPC_FUNC_IMPL(__imp__sub_826A2BA8) {
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
	// beq cr6,0x826a2bf0
	if (cr6.eq) goto loc_826A2BF0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x826a2be8
	if (cr0.eq) goto loc_826A2BE8;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x826a2bec
	goto loc_826A2BEC;
loc_826A2BE8:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_826A2BEC:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_826A2BF0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A2BFC"))) PPC_WEAK_FUNC(sub_826A2BFC);
PPC_FUNC_IMPL(__imp__sub_826A2BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2C00"))) PPC_WEAK_FUNC(sub_826A2C00);
PPC_FUNC_IMPL(__imp__sub_826A2C00) {
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
	// beq cr6,0x826a2c50
	if (cr6.eq) goto loc_826A2C50;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x826a2c3c
	if (cr6.lt) goto loc_826A2C3C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x826a28e8
	sub_826A28E8(ctx, base);
	// b 0x826a2c50
	goto loc_826A2C50;
loc_826A2C3C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a27e8
	sub_826A27E8(ctx, base);
loc_826A2C50:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A2C60"))) PPC_WEAK_FUNC(sub_826A2C60);
PPC_FUNC_IMPL(__imp__sub_826A2C60) {
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
	// beq cr6,0x826a2ca8
	if (cr6.eq) goto loc_826A2CA8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x826a2ca0
	if (cr0.eq) goto loc_826A2CA0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x826a2ca4
	goto loc_826A2CA4;
loc_826A2CA0:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_826A2CA4:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_826A2CA8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A2CB4"))) PPC_WEAK_FUNC(sub_826A2CB4);
PPC_FUNC_IMPL(__imp__sub_826A2CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2CB8"))) PPC_WEAK_FUNC(sub_826A2CB8);
PPC_FUNC_IMPL(__imp__sub_826A2CB8) {
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
	// b 0x826a2cf4
	goto loc_826A2CF4;
loc_826A2CD4:
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x826a2cf0
	if (cr0.eq) goto loc_826A2CF0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x826a14f0
	sub_826A14F0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826A2CF0:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_826A2CF4:
	// cmplw cr6,r31,r28
	cr6.compare<uint32_t>(r31.u32, r28.u32, xer);
	// bne cr6,0x826a2cd4
	if (!cr6.eq) goto loc_826A2CD4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826a2ba8
	sub_826A2BA8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A2D14"))) PPC_WEAK_FUNC(sub_826A2D14);
PPC_FUNC_IMPL(__imp__sub_826A2D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2D18"))) PPC_WEAK_FUNC(sub_826A2D18);
PPC_FUNC_IMPL(__imp__sub_826A2D18) {
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
	// bge cr6,0x826a2dd0
	if (!cr6.lt) goto loc_826A2DD0;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x826a2d64
	if (!cr6.gt) goto loc_826A2D64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_826A2D64:
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
	// beq cr6,0x826a2da4
	if (cr6.eq) goto loc_826A2DA4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a2a30
	sub_826A2A30(ctx, base);
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
	// b 0x826a2db4
	goto loc_826A2DB4;
loc_826A2DA4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a1470
	sub_826A1470(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826A2DB4:
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
loc_826A2DD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826A2DD8"))) PPC_WEAK_FUNC(sub_826A2DD8);
PPC_FUNC_IMPL(__imp__sub_826A2DD8) {
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
	// bl 0x826a1ef8
	sub_826A1EF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x826a2c60
	sub_826A2C60(ctx, base);
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

__attribute__((alias("__imp__sub_826A2E2C"))) PPC_WEAK_FUNC(sub_826A2E2C);
PPC_FUNC_IMPL(__imp__sub_826A2E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A2E30"))) PPC_WEAK_FUNC(sub_826A2E30);
PPC_FUNC_IMPL(__imp__sub_826A2E30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-29688(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -29688);
	// mflr r12
	// bl 0x8239bce8
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// fcmpu cr6,f2,f30
	cr6.compare(ctx.f2.f64, f30.f64);
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// addi r25,r11,-8716
	r25.s64 = r11.s64 + -8716;
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stw r28,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r28.u32);
	// bne cr6,0x826a2ec8
	if (!cr6.eq) goto loc_826A2EC8;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-29720
	ctx.r4.s64 = r11.s64 + -29720;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82319758
	sub_82319758(ctx, base);
loc_826A2EC8:
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// stfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f31,52(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f31,56(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// bl 0x8235d198
	sub_8235D198(ctx, base);
	// stb r28,228(r30)
	PPC_STORE_U8(r30.u32 + 228, r28.u8);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a2f80
	if (!cr0.eq) goto loc_826A2F80;
	// addi r29,r30,120
	r29.s64 = r30.s64 + 120;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// ble cr6,0x826a2f1c
	if (!cr6.gt) goto loc_826A2F1C;
	// addi r4,r11,64
	ctx.r4.s64 = r11.s64 + 64;
	// bl 0x826a2ba8
	sub_826A2BA8(ctx, base);
	// b 0x826a2f34
	goto loc_826A2F34;
loc_826A2F1C:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subfic r5,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r5.s64 = 16 - r11.s64;
	// bl 0x826a2c00
	sub_826A2C00(ctx, base);
loc_826A2F34:
	// mr r27,r28
	r27.u64 = r28.u64;
loc_826A2F38:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a2f54
	if (cr0.eq) goto loc_826A2F54;
	// bl 0x826a1f58
	sub_826A1F58(ctx, base);
	// b 0x826a2f58
	goto loc_826A2F58;
loc_826A2F54:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_826A2F58:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stwx r3,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, ctx.r3.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r27,64
	cr6.compare<int32_t>(r27.s32, 64, xer);
	// blt cr6,0x826a2f38
	if (cr6.lt) goto loc_826A2F38;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r28,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r28.u32);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 164, temp.u32);
	// b 0x826a2fe8
	goto loc_826A2FE8;
loc_826A2F80:
	// addi r29,r30,120
	r29.s64 = r30.s64 + 120;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x826a2fe8
	if (!cr6.lt) goto loc_826A2FE8;
loc_826A2F9C:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a2fbc
	if (cr0.eq) goto loc_826A2FBC;
	// bl 0x826a1f58
	sub_826A1F58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x826a2fc0
	goto loc_826A2FC0;
loc_826A2FBC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_826A2FC0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x826a2ad8
	sub_826A2AD8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x826a2f9c
	if (cr6.lt) goto loc_826A2F9C;
loc_826A2FE8:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stfs f30,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 132, temp.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r28,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r28.u32);
	// addi r4,r11,-29732
	ctx.r4.s64 = r11.s64 + -29732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r10,-29744
	ctx.r4.s64 = ctx.r10.s64 + -29744;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stfs f1,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 216, temp.u32);
	// bl 0x822f9258
	sub_822F9258(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_826A2E38"))) PPC_WEAK_FUNC(sub_826A2E38);
PPC_FUNC_IMPL(__imp__sub_826A2E38) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// addi r29,r30,44
	r29.s64 = r30.s64 + 44;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// lfs f30,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f30.f64 = double(temp.f32);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// fcmpu cr6,f2,f30
	cr6.compare(ctx.f2.f64, f30.f64);
	// stw r28,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r28.u32);
	// addi r25,r11,-8716
	r25.s64 = r11.s64 + -8716;
	// stfs f2,0(r29)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// stw r28,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r28.u32);
	// bne cr6,0x826a2ec8
	if (!cr6.eq) goto loc_826A2EC8;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r11,-29720
	ctx.r4.s64 = r11.s64 + -29720;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r27,0(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d20
	sub_82270D20(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82319758
	sub_82319758(ctx, base);
loc_826A2EC8:
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// stfs f31,48(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 48, temp.u32);
	// stfs f31,52(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 52, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stfs f31,56(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 56, temp.u32);
	// bl 0x8235d198
	sub_8235D198(ctx, base);
	// stb r28,228(r30)
	PPC_STORE_U8(r30.u32 + 228, r28.u8);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a2f80
	if (!cr0.eq) goto loc_826A2F80;
	// addi r29,r30,120
	r29.s64 = r30.s64 + 120;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// ble cr6,0x826a2f1c
	if (!cr6.gt) goto loc_826A2F1C;
	// addi r4,r11,64
	ctx.r4.s64 = r11.s64 + 64;
	// bl 0x826a2ba8
	sub_826A2BA8(ctx, base);
	// b 0x826a2f34
	goto loc_826A2F34;
loc_826A2F1C:
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subfic r5,r11,16
	xer.ca = r11.u32 <= 16;
	ctx.r5.s64 = 16 - r11.s64;
	// bl 0x826a2c00
	sub_826A2C00(ctx, base);
loc_826A2F34:
	// mr r27,r28
	r27.u64 = r28.u64;
loc_826A2F38:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a2f54
	if (cr0.eq) goto loc_826A2F54;
	// bl 0x826a1f58
	sub_826A1F58(ctx, base);
	// b 0x826a2f58
	goto loc_826A2F58;
loc_826A2F54:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_826A2F58:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stwx r3,r27,r11
	PPC_STORE_U32(r27.u32 + r11.u32, ctx.r3.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpwi cr6,r27,64
	cr6.compare<int32_t>(r27.s32, 64, xer);
	// blt cr6,0x826a2f38
	if (cr6.lt) goto loc_826A2F38;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stw r28,232(r30)
	PPC_STORE_U32(r30.u32 + 232, r28.u32);
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,164(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 164, temp.u32);
	// b 0x826a2fe8
	goto loc_826A2FE8;
loc_826A2F80:
	// addi r29,r30,120
	r29.s64 = r30.s64 + 120;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x826a2fe8
	if (!cr6.lt) goto loc_826A2FE8;
loc_826A2F9C:
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a2fbc
	if (cr0.eq) goto loc_826A2FBC;
	// bl 0x826a1f58
	sub_826A1F58(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x826a2fc0
	goto loc_826A2FC0;
loc_826A2FBC:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_826A2FC0:
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x826a2ad8
	sub_826A2AD8(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// blt cr6,0x826a2f9c
	if (cr6.lt) goto loc_826A2F9C;
loc_826A2FE8:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// stfs f30,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 132, temp.u32);
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r28,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r28.u32);
	// addi r4,r11,-29732
	ctx.r4.s64 = r11.s64 + -29732;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// addi r4,r10,-29744
	ctx.r4.s64 = ctx.r10.s64 + -29744;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
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
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// stfs f1,216(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 216, temp.u32);
	// bl 0x822f9258
	sub_822F9258(ctx, base);
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,-7564(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -7564);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 156);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_826A3094"))) PPC_WEAK_FUNC(sub_826A3094);
PPC_FUNC_IMPL(__imp__sub_826A3094) {
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

__attribute__((alias("__imp__sub_826A30BC"))) PPC_WEAK_FUNC(sub_826A30BC);
PPC_FUNC_IMPL(__imp__sub_826A30BC) {
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

__attribute__((alias("__imp__sub_826A30E4"))) PPC_WEAK_FUNC(sub_826A30E4);
PPC_FUNC_IMPL(__imp__sub_826A30E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A30E8"))) PPC_WEAK_FUNC(sub_826A30E8);
PPC_FUNC_IMPL(__imp__sub_826A30E8) {
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
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a311c
	if (cr0.eq) goto loc_826A311C;
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
loc_826A311C:
	// li r11,0
	r11.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x826a2dd8
	sub_826A2DD8(ctx, base);
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

__attribute__((alias("__imp__sub_826A3140"))) PPC_WEAK_FUNC(sub_826A3140);
PPC_FUNC_IMPL(__imp__sub_826A3140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-29368(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -29368);
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// addi r11,r11,-29588
	r11.s64 = r11.s64 + -29588;
	// addi r10,r10,-29604
	ctx.r10.s64 = ctx.r10.s64 + -29604;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a319c
	if (cr0.eq) goto loc_826A319C;
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
loc_826A319C:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x826a30e8
	sub_826A30E8(ctx, base);
	// addi r26,r30,120
	r26.s64 = r30.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a2cb8
	sub_826A2CB8(ctx, base);
	// addi r29,r30,236
	r29.s64 = r30.s64 + 236;
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r27,4(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x826a31d4
	goto loc_826A31D4;
loc_826A31C8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_826A31D4:
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// bne cr6,0x826a31c8
	if (!cr6.eq) goto loc_826A31C8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82281230
	sub_82281230(ctx, base);
	// lwz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// b 0x826a31fc
	goto loc_826A31FC;
loc_826A31F8:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_826A31FC:
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
	// bne 0x826a31f8
	if (!cr0.eq) goto loc_826A31F8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a3230
	if (cr6.eq) goto loc_826A3230;
	// lwz r11,256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3230:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a3250
	if (cr0.eq) goto loc_826A3250;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3250:
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a3278
	if (cr0.eq) goto loc_826A3278;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3278:
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a3298
	if (cr0.eq) goto loc_826A3298;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3298:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822f9248
	sub_822F9248(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f5510
	sub_822F5510(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826A3148"))) PPC_WEAK_FUNC(sub_826A3148);
PPC_FUNC_IMPL(__imp__sub_826A3148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r25,r30,8
	r25.s64 = r30.s64 + 8;
	// addi r11,r11,-29588
	r11.s64 = r11.s64 + -29588;
	// addi r10,r10,-29604
	ctx.r10.s64 = ctx.r10.s64 + -29604;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a319c
	if (cr0.eq) goto loc_826A319C;
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
loc_826A319C:
	// li r11,0
	r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r11.u32);
	// bl 0x826a30e8
	sub_826A30E8(ctx, base);
	// addi r26,r30,120
	r26.s64 = r30.s64 + 120;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a2cb8
	sub_826A2CB8(ctx, base);
	// addi r29,r30,236
	r29.s64 = r30.s64 + 236;
	// lwz r28,0(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r27,4(r29)
	r27.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// b 0x826a31d4
	goto loc_826A31D4;
loc_826A31C8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_826A31D4:
	// cmplw cr6,r28,r27
	cr6.compare<uint32_t>(r28.u32, r27.u32, xer);
	// bne cr6,0x826a31c8
	if (!cr6.eq) goto loc_826A31C8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,4(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82281230
	sub_82281230(ctx, base);
	// lwz r4,248(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// b 0x826a31fc
	goto loc_826A31FC;
loc_826A31F8:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_826A31FC:
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
	// bne 0x826a31f8
	if (!cr0.eq) goto loc_826A31F8;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a3230
	if (cr6.eq) goto loc_826A3230;
	// lwz r11,256(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3230:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a3250
	if (cr0.eq) goto loc_826A3250;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3250:
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// bl 0x82352df0
	sub_82352DF0(ctx, base);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a3278
	if (cr0.eq) goto loc_826A3278;
	// lwz r11,8(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3278:
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a3298
	if (cr0.eq) goto loc_826A3298;
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3298:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x822f9248
	sub_822F9248(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x822f5510
	sub_822F5510(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826A32B0"))) PPC_WEAK_FUNC(sub_826A32B0);
PPC_FUNC_IMPL(__imp__sub_826A32B0) {
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
	// bl 0x822f5510
	sub_822F5510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A32D8"))) PPC_WEAK_FUNC(sub_826A32D8);
PPC_FUNC_IMPL(__imp__sub_826A32D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826a3304
	if (cr6.eq) goto loc_826A3304;
	// lwz r11,180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 180);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x826a330c
	goto loc_826A330C;
loc_826A3304:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_826A330C:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x822f9248
	sub_822F9248(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A3324"))) PPC_WEAK_FUNC(sub_826A3324);
PPC_FUNC_IMPL(__imp__sub_826A3324) {
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
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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

__attribute__((alias("__imp__sub_826A3350"))) PPC_WEAK_FUNC(sub_826A3350);
PPC_FUNC_IMPL(__imp__sub_826A3350) {
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
	// addi r3,r11,120
	ctx.r3.s64 = r11.s64 + 120;
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

__attribute__((alias("__imp__sub_826A337C"))) PPC_WEAK_FUNC(sub_826A337C);
PPC_FUNC_IMPL(__imp__sub_826A337C) {
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
	// addi r3,r11,140
	ctx.r3.s64 = r11.s64 + 140;
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

__attribute__((alias("__imp__sub_826A33A8"))) PPC_WEAK_FUNC(sub_826A33A8);
PPC_FUNC_IMPL(__imp__sub_826A33A8) {
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
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
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

__attribute__((alias("__imp__sub_826A33D4"))) PPC_WEAK_FUNC(sub_826A33D4);
PPC_FUNC_IMPL(__imp__sub_826A33D4) {
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
	// addi r3,r11,248
	ctx.r3.s64 = r11.s64 + 248;
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A3400"))) PPC_WEAK_FUNC(sub_826A3400);
PPC_FUNC_IMPL(__imp__sub_826A3400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A340C"))) PPC_WEAK_FUNC(sub_826A340C);
PPC_FUNC_IMPL(__imp__sub_826A340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A3410"))) PPC_WEAK_FUNC(sub_826A3410);
PPC_FUNC_IMPL(__imp__sub_826A3410) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x826a3d98
	sub_826A3D98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A3418"))) PPC_WEAK_FUNC(sub_826A3418);
PPC_FUNC_IMPL(__imp__sub_826A3418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// add r27,r4,r11
	r27.u64 = ctx.r4.u64 + r11.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826a35b0
	if (!cr6.eq) goto loc_826A35B0;
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// lfs f0,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	f0.f64 = double(temp.f32);
	// lis r11,0
	r11.s64 = 0;
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r6,228(r31)
	PPC_STORE_U8(r31.u32 + 228, ctx.r6.u8);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r4,r11,-30216
	ctx.r4.s64 = r11.s64 + -30216;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfs f0,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r10,r11,15
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = r11.s32 >> 15;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// srawi r11,r11,14
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFF) != 0);
	r11.s64 = r11.s32 >> 14;
	// addze r26,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r26.s64 = temp.s64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r4,r10,-22064
	ctx.r4.s64 = ctx.r10.s64 + -22064;
	// lwz r29,0(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lis r11,-32252
	r11.s64 = -2113667072;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r11,-8716
	ctx.r4.s64 = r11.s64 + -8716;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82270d38
	sub_82270D38(ctx, base);
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
	// bl 0x82317fe8
	sub_82317FE8(ctx, base);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x826a355c
	if (!cr6.gt) goto loc_826A355C;
	// addi r25,r31,28
	r25.s64 = r31.s64 + 28;
	// li r28,0
	r28.s64 = 0;
	// mr r29,r27
	r29.u64 = r27.u64;
loc_826A3528:
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwzx r11,r28,r11
	r11.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// lbz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// bl 0x826a66c0
	sub_826A66C0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x826a2a70
	sub_826A2A70(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x826a3528
	if (!cr0.eq) goto loc_826A3528;
loc_826A355C:
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// li r30,0
	r30.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a35a8
	if (!cr6.gt) goto loc_826A35A8;
	// addi r29,r31,236
	r29.s64 = r31.s64 + 236;
loc_826A3570:
	// lbz r11,228(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 228);
	// li r3,16384
	ctx.r3.s64 = 16384;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a3584
	if (!cr0.eq) goto loc_826A3584;
	// li r3,8192
	ctx.r3.s64 = 8192;
loc_826A3584:
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82356c20
	sub_82356C20(ctx, base);
	// lwz r11,232(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 232);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// blt cr6,0x826a3570
	if (cr6.lt) goto loc_826A3570;
loc_826A35A8:
	// li r11,1
	r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_826A35B0:
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x826a3624
	if (!cr6.gt) goto loc_826A3624;
	// li r30,0
	r30.s64 = 0;
loc_826A35C0:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwzx r11,r30,r10
	r11.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1d40
	sub_826A1D40(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// lwzx r11,r30,r10
	r11.u64 = PPC_LOAD_U32(r30.u32 + ctx.r10.u32);
	// addi r4,r11,12
	ctx.r4.s64 = r11.s64 + 12;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r27
	cr6.compare<int32_t>(r29.s32, r27.s32, xer);
	// blt cr6,0x826a35c0
	if (cr6.lt) goto loc_826A35C0;
loc_826A3624:
	// addi r30,r31,120
	r30.s64 = r31.s64 + 120;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x826a3684
	if (!cr6.lt) goto loc_826A3684;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_826A3644:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r26,r28,r11
	r26.u64 = PPC_LOAD_U32(r28.u32 + r11.u32);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x826a3664
	if (cr0.eq) goto loc_826A3664;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826a14f0
	sub_826A14F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826A3664:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x826a3644
	if (cr6.lt) goto loc_826A3644;
loc_826A3684:
	// li r11,0
	r11.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r27,r10
	cr6.compare<uint32_t>(r27.u32, ctx.r10.u32, xer);
	// bge cr6,0x826a36b8
	if (!cr6.lt) goto loc_826A36B8;
	// rlwinm r10,r27,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x826a2ba8
	sub_826A2BA8(ctx, base);
	// b 0x826a36d0
	goto loc_826A36D0;
loc_826A36B8:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// subf r5,r11,r27
	ctx.r5.s64 = r27.s64 - r11.s64;
	// bl 0x826a2c00
	sub_826A2C00(ctx, base);
loc_826A36D0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwa r10,40(r31)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 40));
	// lfs f13,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 48);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	f0.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r4,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r4.u32);
	// beq 0x826a3728
	if (cr0.eq) goto loc_826A3728;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826A3728:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x822f67c8
	sub_822F67C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a1c98
	sub_826A1C98(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826A3740"))) PPC_WEAK_FUNC(sub_826A3740);
PPC_FUNC_IMPL(__imp__sub_826A3740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-29216(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -29216);
	// mflr r12
	// bl 0x8239bcec
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-8384
	r31.s64 = ctx.r1.s64 + -8384;
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8384(r1)
	ea = -8384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r27,8420(r31)
	PPC_STORE_U32(r31.u32 + 8420, r27.u32);
	// srawi r26,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r26.s64 = ctx.r10.s32 >> 2;
	// subf r29,r11,r26
	r29.s64 = r26.s64 - r11.s64;
	// blt cr6,0x826a37a8
	if (cr6.lt) goto loc_826A37A8;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// beq cr6,0x826a37a8
	if (cr6.eq) goto loc_826A37A8;
	// stw r6,160(r30)
	PPC_STORE_U32(r30.u32 + 160, ctx.r6.u32);
loc_826A37A8:
	// li r25,0
	r25.s64 = 0;
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// stw r25,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r25.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x826a2d18
	sub_826A2D18(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x826a37ec
	if (!cr6.gt) goto loc_826A37EC;
loc_826A37CC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x826a2b40
	sub_826A2B40(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x826a37cc
	if (!cr0.eq) goto loc_826A37CC;
loc_826A37EC:
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a382c
	if (!cr6.gt) goto loc_826A382C;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_826A3800:
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x826a2b40
	sub_826A2B40(ctx, base);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x826a3800
	if (cr6.lt) goto loc_826A3800;
loc_826A382C:
	// cmpwi cr6,r27,4096
	cr6.compare<int32_t>(r27.s32, 4096, xer);
	// bge cr6,0x826a383c
	if (!cr6.lt) goto loc_826A383C;
	// addi r11,r31,8420
	r11.s64 = r31.s64 + 8420;
	// b 0x826a3844
	goto loc_826A3844;
loc_826A383C:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-30144
	r11.s64 = r11.s64 + -30144;
loc_826A3844:
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 132);
	f0.f64 = double(temp.f32);
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x826a38b8
	if (!cr6.gt) goto loc_826A38B8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwa r10,40(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 40));
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfd f13,88(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// blt cr6,0x826a38b0
	if (cr6.lt) goto loc_826A38B0;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
loc_826A38B0:
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_826A38B8:
	// lwz r29,28(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// b 0x826a38ec
	goto loc_826A38EC;
loc_826A38C0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826a67c8
	sub_826A67C8(ctx, base);
	// rlwinm r11,r3,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// blt cr6,0x826a38e0
	if (cr6.lt) goto loc_826A38E0;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
loc_826A38E0:
	// lwz r27,0(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_826A38EC:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x826a38c0
	if (!cr6.eq) goto loc_826A38C0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x826a3a44
	if (cr6.eq) goto loc_826A3A44;
	// lbz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 228);
	// lwz r29,248(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// beq cr6,0x826a395c
	if (cr6.eq) goto loc_826A395C;
	// mullw r28,r10,r27
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
loc_826A3928:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x826a3928
	if (!cr6.eq) goto loc_826A3928;
loc_826A395C:
	// lbz r11,228(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a398c
	if (cr0.eq) goto loc_826A398C;
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a398c
	if (cr0.eq) goto loc_826A398C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826A398C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x826a3a44
	if (!cr6.gt) goto loc_826A3A44;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// rlwinm r28,r27,1,0,30
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lfs f30,-12636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12636);
	f30.f64 = double(temp.f32);
	// lfs f31,-12632(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12632);
	f31.f64 = double(temp.f32);
loc_826A39AC:
	// lbz r11,228(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a3a20
	if (cr0.eq) goto loc_826A3A20;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x826a3a18
	if (cr6.eq) goto loc_826A3A18;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r11,r25
	r11.u64 = r25.u64;
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_826A39D0:
	// lwzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + ctx.r8.u32);
	// lfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x826a39ec
	if (!cr6.gt) goto loc_826A39EC;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x826a39f8
	goto loc_826A39F8;
loc_826A39EC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x826a39f8
	if (!cr6.lt) goto loc_826A39F8;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_826A39F8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r31)
	PPC_STORE_U64(r31.u32 + 88, f0.u64);
	// lhz r7,94(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 94);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x826a39d0
	if (!cr0.eq) goto loc_826A39D0;
loc_826A3A18:
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// b 0x826a3a28
	goto loc_826A3A28;
loc_826A3A20:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
loc_826A3A28:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x826a67e8
	sub_826A67E8(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x826a39ac
	if (!cr0.eq) goto loc_826A39AC;
loc_826A3A44:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r11.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a3a70
	if (cr6.eq) goto loc_826A3A70;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3A70:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,8384
	ctx.r1.s64 = r31.s64 + 8384;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826A3748"))) PPC_WEAK_FUNC(sub_826A3748);
PPC_FUNC_IMPL(__imp__sub_826A3748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, f31.u64);
	// addi r31,r1,-8384
	r31.s64 = ctx.r1.s64 + -8384;
	// ld r12,-4096(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-8384(r1)
	ea = -8384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r27,8420(r31)
	PPC_STORE_U32(r31.u32 + 8420, r27.u32);
	// srawi r26,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	r26.s64 = ctx.r10.s32 >> 2;
	// subf r29,r11,r26
	r29.s64 = r26.s64 - r11.s64;
	// blt cr6,0x826a37a8
	if (cr6.lt) goto loc_826A37A8;
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// cmpw cr6,r6,r11
	cr6.compare<int32_t>(ctx.r6.s32, r11.s32, xer);
	// beq cr6,0x826a37a8
	if (cr6.eq) goto loc_826A37A8;
	// stw r6,160(r30)
	PPC_STORE_U32(r30.u32 + 160, ctx.r6.u32);
loc_826A37A8:
	// li r25,0
	r25.s64 = 0;
	// stw r25,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r25.u32);
	// stw r25,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r25.u32);
	// stw r25,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r25.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x826a2d18
	sub_826A2D18(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x826a37ec
	if (!cr6.gt) goto loc_826A37EC;
loc_826A37CC:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x826a2b40
	sub_826A2B40(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bne 0x826a37cc
	if (!cr0.eq) goto loc_826A37CC;
loc_826A37EC:
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a382c
	if (!cr6.gt) goto loc_826A382C;
	// mr r29,r25
	r29.u64 = r25.u64;
loc_826A3800:
	// lwz r11,236(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwzx r11,r29,r11
	r11.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x826a2b40
	sub_826A2B40(ctx, base);
	// lwz r11,232(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 232);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x826a3800
	if (cr6.lt) goto loc_826A3800;
loc_826A382C:
	// cmpwi cr6,r27,4096
	cr6.compare<int32_t>(r27.s32, 4096, xer);
	// bge cr6,0x826a383c
	if (!cr6.lt) goto loc_826A383C;
	// addi r11,r31,8420
	r11.s64 = r31.s64 + 8420;
	// b 0x826a3844
	goto loc_826A3844;
loc_826A383C:
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-30144
	r11.s64 = r11.s64 + -30144;
loc_826A3844:
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,132(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 132);
	f0.f64 = double(temp.f32);
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x826a38b8
	if (!cr6.gt) goto loc_826A38B8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwa r10,40(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 40));
	// lwz r9,160(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lfs f13,2868(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2868);
	ctx.f13.f64 = double(temp.f32);
	// std r10,88(r31)
	PPC_STORE_U64(r31.u32 + 88, ctx.r10.u64);
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// lfd f13,88(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f0,f13
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
	// blt cr6,0x826a38b0
	if (cr6.lt) goto loc_826A38B0;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
loc_826A38B0:
	// lwz r27,0(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_826A38B8:
	// lwz r29,28(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// b 0x826a38ec
	goto loc_826A38EC;
loc_826A38C0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x826a67c8
	sub_826A67C8(ctx, base);
	// rlwinm r11,r3,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r31,88
	ctx.r10.s64 = r31.s64 + 88;
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// blt cr6,0x826a38e0
	if (cr6.lt) goto loc_826A38E0;
	// addi r10,r31,80
	ctx.r10.s64 = r31.s64 + 80;
loc_826A38E0:
	// lwz r27,0(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
loc_826A38EC:
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x826a38c0
	if (!cr6.eq) goto loc_826A38C0;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x826a3a44
	if (cr6.eq) goto loc_826A3A44;
	// lbz r10,228(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 228);
	// lwz r29,248(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 248);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// beq cr6,0x826a395c
	if (cr6.eq) goto loc_826A395C;
	// mullw r28,r10,r27
	r28.s64 = int64_t(ctx.r10.s32) * int64_t(r27.s32);
loc_826A3928:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,252(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 252);
	// addi r29,r29,8
	r29.s64 = r29.s64 + 8;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x826a3928
	if (!cr6.eq) goto loc_826A3928;
loc_826A395C:
	// lbz r11,228(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a398c
	if (cr0.eq) goto loc_826A398C;
	// lwz r3,220(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 220);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a398c
	if (cr0.eq) goto loc_826A398C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r31,96
	ctx.r5.s64 = r31.s64 + 96;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826A398C:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x826a3a44
	if (!cr6.gt) goto loc_826A3A44;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// rlwinm r28,r27,1,0,30
	r28.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r29,r25
	r29.u64 = r25.u64;
	// lfs f30,-12636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12636);
	f30.f64 = double(temp.f32);
	// lfs f31,-12632(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12632);
	f31.f64 = double(temp.f32);
loc_826A39AC:
	// lbz r11,228(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 228);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a3a20
	if (cr0.eq) goto loc_826A3A20;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x826a3a18
	if (cr6.eq) goto loc_826A3A18;
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r11,r25
	r11.u64 = r25.u64;
	// addi r9,r31,112
	ctx.r9.s64 = r31.s64 + 112;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
loc_826A39D0:
	// lwzx r7,r29,r8
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + ctx.r8.u32);
	// lfsx f0,r11,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x826a39ec
	if (!cr6.gt) goto loc_826A39EC;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x826a39f8
	goto loc_826A39F8;
loc_826A39EC:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x826a39f8
	if (!cr6.lt) goto loc_826A39F8;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_826A39F8:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r31)
	PPC_STORE_U64(r31.u32 + 88, f0.u64);
	// lhz r7,94(r31)
	ctx.r7.u64 = PPC_LOAD_U16(r31.u32 + 94);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bne 0x826a39d0
	if (!cr0.eq) goto loc_826A39D0;
loc_826A3A18:
	// addi r4,r31,112
	ctx.r4.s64 = r31.s64 + 112;
	// b 0x826a3a28
	goto loc_826A3A28;
loc_826A3A20:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwzx r4,r29,r10
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + ctx.r10.u32);
loc_826A3A28:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + r11.u32);
	// bl 0x826a67e8
	sub_826A67E8(ctx, base);
	// addic. r26,r26,-1
	xer.ca = r26.u32 > 0;
	r26.s64 = r26.s64 + -1;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x826a39ac
	if (!cr0.eq) goto loc_826A39AC;
loc_826A3A44:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// add r11,r11,r27
	r11.u64 = r11.u64 + r27.u64;
	// stw r11,160(r30)
	PPC_STORE_U32(r30.u32 + 160, r11.u32);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a3a70
	if (cr6.eq) goto loc_826A3A70;
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A3A70:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,8384
	ctx.r1.s64 = r31.s64 + 8384;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826A3A84"))) PPC_WEAK_FUNC(sub_826A3A84);
PPC_FUNC_IMPL(__imp__sub_826A3A84) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// addi r31,r12,-8384
	r31.s64 = r12.s64 + -8384;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
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

__attribute__((alias("__imp__sub_826A3AAC"))) PPC_WEAK_FUNC(sub_826A3AAC);
PPC_FUNC_IMPL(__imp__sub_826A3AAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A3AB0"))) PPC_WEAK_FUNC(sub_826A3AB0);
PPC_FUNC_IMPL(__imp__sub_826A3AB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
loc_826A3ACC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a3acc
	if (cr0.eq) goto loc_826A3ACC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a30e8
	sub_826A30E8(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// lfs f2,44(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 44);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x826a2e38
	sub_826A2E38(ctx, base);
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

__attribute__((alias("__imp__sub_826A3B40"))) PPC_WEAK_FUNC(sub_826A3B40);
PPC_FUNC_IMPL(__imp__sub_826A3B40) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-29096(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -29096);
	// mflr r12
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x822f5360
	sub_822F5360(ctx, base);
	// addi r27,r30,8
	r27.s64 = r30.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f9030
	sub_822F9030(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-29588
	ctx.r10.s64 = ctx.r10.s64 + -29588;
	// addi r9,r9,-29604
	ctx.r9.s64 = ctx.r9.s64 + -29604;
	// addi r11,r30,28
	r11.s64 = r30.s64 + 28;
	// li r29,0
	r29.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x8235d050
	sub_8235D050(ctx, base);
	// addi r11,r30,120
	r11.s64 = r30.s64 + 120;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r30,168
	r11.s64 = r30.s64 + 168;
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r10,r30,236
	ctx.r10.s64 = r30.s64 + 236;
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r29.u32);
	// lwz r8,18972(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18972);
	// stw r8,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r8.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r29.u32);
	// lwz r11,18972(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18972);
	// stw r11,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r11.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// addi r11,r30,248
	r11.s64 = r30.s64 + 248;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r29,220(r30)
	PPC_STORE_U32(r30.u32 + 220, r29.u32);
	// stw r28,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r28.u32);
	// stw r26,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r26.u32);
	// bl 0x826a2e38
	sub_826A2E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A3B48"))) PPC_WEAK_FUNC(sub_826A3B48);
PPC_FUNC_IMPL(__imp__sub_826A3B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r26{};
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
	// bl 0x8239bcf0
	// stfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f31.u64);
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// bl 0x822f5360
	sub_822F5360(ctx, base);
	// addi r27,r30,8
	r27.s64 = r30.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x822f9030
	sub_822F9030(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,-29588
	ctx.r10.s64 = ctx.r10.s64 + -29588;
	// addi r9,r9,-29604
	ctx.r9.s64 = ctx.r9.s64 + -29604;
	// addi r11,r30,28
	r11.s64 = r30.s64 + 28;
	// li r29,0
	r29.s64 = 0;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r9.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r3,r30,64
	ctx.r3.s64 = r30.s64 + 64;
	// bl 0x8235d050
	sub_8235D050(ctx, base);
	// addi r11,r30,120
	r11.s64 = r30.s64 + 120;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// addi r3,r30,140
	ctx.r3.s64 = r30.s64 + 140;
	// bl 0x82352c68
	sub_82352C68(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r30,168
	r11.s64 = r30.s64 + 168;
	// lis r9,-32140
	ctx.r9.s64 = -2106327040;
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r10,r30,236
	ctx.r10.s64 = r30.s64 + 236;
	// stfs f0,16(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 16, temp.u32);
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
	// stfs f0,20(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 20, temp.u32);
	// stw r29,24(r11)
	PPC_STORE_U32(r11.u32 + 24, r29.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(r11.u32 + 28, r29.u32);
	// lwz r8,18972(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18972);
	// stw r8,32(r11)
	PPC_STORE_U32(r11.u32 + 32, ctx.r8.u32);
	// stfs f0,40(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 40, temp.u32);
	// stw r29,36(r11)
	PPC_STORE_U32(r11.u32 + 36, r29.u32);
	// lwz r11,18972(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 18972);
	// stw r11,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r11.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r29.u32);
	// addi r11,r30,248
	r11.s64 = r30.s64 + 248;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// stw r29,220(r30)
	PPC_STORE_U32(r30.u32 + 220, r29.u32);
	// stw r28,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r28.u32);
	// stw r26,20(r30)
	PPC_STORE_U32(r30.u32 + 20, r26.u32);
	// bl 0x826a2e38
	sub_826A2E38(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// lfd f30,-72(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A3C68"))) PPC_WEAK_FUNC(sub_826A3C68);
PPC_FUNC_IMPL(__imp__sub_826A3C68) {
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
	// bl 0x822f5510
	sub_822F5510(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A3C90"))) PPC_WEAK_FUNC(sub_826A3C90);
PPC_FUNC_IMPL(__imp__sub_826A3C90) {
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
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x822f9248
	sub_822F9248(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A3CBC"))) PPC_WEAK_FUNC(sub_826A3CBC);
PPC_FUNC_IMPL(__imp__sub_826A3CBC) {
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
	// addi r3,r11,28
	ctx.r3.s64 = r11.s64 + 28;
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

__attribute__((alias("__imp__sub_826A3CE8"))) PPC_WEAK_FUNC(sub_826A3CE8);
PPC_FUNC_IMPL(__imp__sub_826A3CE8) {
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
	// addi r3,r11,120
	ctx.r3.s64 = r11.s64 + 120;
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

__attribute__((alias("__imp__sub_826A3D14"))) PPC_WEAK_FUNC(sub_826A3D14);
PPC_FUNC_IMPL(__imp__sub_826A3D14) {
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
	// addi r3,r11,140
	ctx.r3.s64 = r11.s64 + 140;
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

__attribute__((alias("__imp__sub_826A3D40"))) PPC_WEAK_FUNC(sub_826A3D40);
PPC_FUNC_IMPL(__imp__sub_826A3D40) {
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
	// addi r3,r11,236
	ctx.r3.s64 = r11.s64 + 236;
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

__attribute__((alias("__imp__sub_826A3D6C"))) PPC_WEAK_FUNC(sub_826A3D6C);
PPC_FUNC_IMPL(__imp__sub_826A3D6C) {
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
	// addi r3,r11,248
	ctx.r3.s64 = r11.s64 + 248;
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A3D98"))) PPC_WEAK_FUNC(sub_826A3D98);
PPC_FUNC_IMPL(__imp__sub_826A3D98) {
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
	// bl 0x826a3148
	sub_826A3148(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a3dc8
	if (cr0.eq) goto loc_826A3DC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826A3DC8:
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

__attribute__((alias("__imp__sub_826A3DE4"))) PPC_WEAK_FUNC(sub_826A3DE4);
PPC_FUNC_IMPL(__imp__sub_826A3DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A3DE8"))) PPC_WEAK_FUNC(sub_826A3DE8);
PPC_FUNC_IMPL(__imp__sub_826A3DE8) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,248
	ctx.r3.s64 = ctx.r3.s64 + 248;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x822298b8
	sub_822298B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A3E1C"))) PPC_WEAK_FUNC(sub_826A3E1C);
PPC_FUNC_IMPL(__imp__sub_826A3E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A3E20"))) PPC_WEAK_FUNC(sub_826A3E20);
PPC_FUNC_IMPL(__imp__sub_826A3E20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r30,r31,4
	r30.s64 = r31.s64 + 4;
	// bne cr6,0x826a3e48
	if (!cr6.eq) goto loc_826A3E48;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_826A3E48:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826a3e58
	if (cr6.eq) goto loc_826A3E58;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_826A3E58:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r28,124(r31)
	PPC_STORE_U32(r31.u32 + 124, r28.u32);
	// stb r29,54(r31)
	PPC_STORE_U8(r31.u32 + 54, r29.u8);
	// stb r29,156(r31)
	PPC_STORE_U8(r31.u32 + 156, r29.u8);
	// beq cr6,0x826a3e74
	if (cr6.eq) goto loc_826A3E74;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_826A3E74:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A3E7C"))) PPC_WEAK_FUNC(sub_826A3E7C);
PPC_FUNC_IMPL(__imp__sub_826A3E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A3E80"))) PPC_WEAK_FUNC(sub_826A3E80);
PPC_FUNC_IMPL(__imp__sub_826A3E80) {
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
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// bl 0x826d29e0
	sub_826D29E0(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r4,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r4.u32);
	// bl 0x826d2060
	sub_826D2060(ctx, base);
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

__attribute__((alias("__imp__sub_826A3ED4"))) PPC_WEAK_FUNC(sub_826A3ED4);
PPC_FUNC_IMPL(__imp__sub_826A3ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A3ED8"))) PPC_WEAK_FUNC(sub_826A3ED8);
PPC_FUNC_IMPL(__imp__sub_826A3ED8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_826A3EF4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x826d3c38
	sub_826D3C38(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x826a3f2c
	if (cr0.gt) goto loc_826A3F2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x826d3660
	sub_826D3660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x826a3f34
	if (!cr0.gt) goto loc_826A3F34;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x826d36e0
	sub_826D36E0(ctx, base);
	// b 0x826a3ef4
	goto loc_826A3EF4;
loc_826A3F2C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a3f38
	goto loc_826A3F38;
loc_826A3F34:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A3F38:
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

__attribute__((alias("__imp__sub_826A3F50"))) PPC_WEAK_FUNC(sub_826A3F50);
PPC_FUNC_IMPL(__imp__sub_826A3F50) {
	PPC_FUNC_PROLOGUE();
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,36(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// b 0x826a3418
	sub_826A3418(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A3F64"))) PPC_WEAK_FUNC(sub_826A3F64);
PPC_FUNC_IMPL(__imp__sub_826A3F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A3F68"))) PPC_WEAK_FUNC(sub_826A3F68);
PPC_FUNC_IMPL(__imp__sub_826A3F68) {
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
	// beq 0x826a3fa8
	if (cr0.eq) goto loc_826A3FA8;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,9032
	ctx.r3.s64 = r11.s64 + 9032;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826a3fb0
	goto loc_826A3FB0;
loc_826A3FA8:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_826A3FB0:
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

__attribute__((alias("__imp__sub_826A3FCC"))) PPC_WEAK_FUNC(sub_826A3FCC);
PPC_FUNC_IMPL(__imp__sub_826A3FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A3FD0"))) PPC_WEAK_FUNC(sub_826A3FD0);
PPC_FUNC_IMPL(__imp__sub_826A3FD0) {
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
	// beq 0x826a4010
	if (cr0.eq) goto loc_826A4010;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,9092
	ctx.r3.s64 = r11.s64 + 9092;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826a4018
	goto loc_826A4018;
loc_826A4010:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_826A4018:
	// rlwinm r3,r31,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
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

__attribute__((alias("__imp__sub_826A4034"))) PPC_WEAK_FUNC(sub_826A4034);
PPC_FUNC_IMPL(__imp__sub_826A4034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4038"))) PPC_WEAK_FUNC(sub_826A4038);
PPC_FUNC_IMPL(__imp__sub_826A4038) {
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
	// beq 0x826a4078
	if (cr0.eq) goto loc_826A4078;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,9112
	ctx.r3.s64 = r11.s64 + 9112;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826a4080
	goto loc_826A4080;
loc_826A4078:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_826A4080:
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

__attribute__((alias("__imp__sub_826A409C"))) PPC_WEAK_FUNC(sub_826A409C);
PPC_FUNC_IMPL(__imp__sub_826A409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A40A0"))) PPC_WEAK_FUNC(sub_826A40A0);
PPC_FUNC_IMPL(__imp__sub_826A40A0) {
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
	// beq 0x826a40e0
	if (cr0.eq) goto loc_826A40E0;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32137
	r11.s64 = -2106130432;
	// addi r3,r11,9180
	ctx.r3.s64 = r11.s64 + 9180;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x826a40e8
	goto loc_826A40E8;
loc_826A40E0:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_826A40E8:
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

__attribute__((alias("__imp__sub_826A4104"))) PPC_WEAK_FUNC(sub_826A4104);
PPC_FUNC_IMPL(__imp__sub_826A4104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4108"))) PPC_WEAK_FUNC(sub_826A4108);
PPC_FUNC_IMPL(__imp__sub_826A4108) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lbz r11,53(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 53);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a41a0
	if (cr0.eq) goto loc_826A41A0;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a41a0
	if (!cr0.eq) goto loc_826A41A0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a41a0
	if (!cr0.eq) goto loc_826A41A0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lis r11,1
	r11.s64 = 65536;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x826a41a0
	if (!cr6.lt) goto loc_826A41A0;
	// li r4,16384
	ctx.r4.s64 = 16384;
	// bl 0x826d3388
	sub_826D3388(ctx, base);
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// stb r11,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r11.u8);
loc_826A41A0:
	// li r30,0
	r30.s64 = 0;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// beq 0x826a41e4
	if (cr0.eq) goto loc_826A41E4;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a41e4
	if (cr0.eq) goto loc_826A41E4;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x826d3440
	sub_826D3440(ctx, base);
	// stb r30,52(r31)
	PPC_STORE_U8(r31.u32 + 52, r30.u8);
loc_826A41E4:
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

__attribute__((alias("__imp__sub_826A41FC"))) PPC_WEAK_FUNC(sub_826A41FC);
PPC_FUNC_IMPL(__imp__sub_826A41FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4200"))) PPC_WEAK_FUNC(sub_826A4200);
PPC_FUNC_IMPL(__imp__sub_826A4200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-29008(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -29008);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826a4230
	if (!cr6.eq) goto loc_826A4230;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a42d8
	goto loc_826A42D8;
loc_826A4230:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a42c8
	if (cr0.eq) goto loc_826A42C8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// li r5,20000
	ctx.r5.s64 = 20000;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8235b0a0
	sub_8235B0A0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r29,r30,148
	r29.s64 = r30.s64 + 148;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x826a6de0
	sub_826A6DE0(ctx, base);
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359150
	sub_82359150(ctx, base);
loc_826A42C8:
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_826A42D8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A4208"))) PPC_WEAK_FUNC(sub_826A4208);
PPC_FUNC_IMPL(__imp__sub_826A4208) {
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826a4230
	if (!cr6.eq) goto loc_826A4230;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a42d8
	goto loc_826A42D8;
loc_826A4230:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a42c8
	if (cr0.eq) goto loc_826A42C8;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r4,152(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// li r5,20000
	ctx.r5.s64 = 20000;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x8235b0a0
	sub_8235B0A0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r29,r30,148
	r29.s64 = r30.s64 + 148;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// bl 0x826a6de0
	sub_826A6DE0(ctx, base);
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r11.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82359150
	sub_82359150(ctx, base);
loc_826A42C8:
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
loc_826A42D8:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A42E0"))) PPC_WEAK_FUNC(sub_826A42E0);
PPC_FUNC_IMPL(__imp__sub_826A42E0) {
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
	// bl 0x821f03f8
	sub_821F03F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4308"))) PPC_WEAK_FUNC(sub_826A4308);
PPC_FUNC_IMPL(__imp__sub_826A4308) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x826a438c
	if (!cr6.eq) goto loc_826A438C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x826d3660
	sub_826D3660(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x826a43d0
	if (!cr0.gt) goto loc_826A43D0;
	// li r3,360
	ctx.r3.s64 = 360;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// bl 0x826d30d0
	sub_826D30D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x826d3100
	sub_826D3100(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x826d36e0
	sub_826D36E0(ctx, base);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r3.u32);
	// bl 0x826d3ce8
	sub_826D3CE8(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// bl 0x82396d30
	sub_82396D30(ctx, base);
loc_826A438C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x826a43d0
	if (cr6.eq) goto loc_826A43D0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a3ed8
	sub_826A3ED8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a43d0
	if (cr0.eq) goto loc_826A43D0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// bl 0x826d44f0
	sub_826D44F0(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// b 0x826a43d4
	goto loc_826A43D4;
loc_826A43D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A43D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A43E8"))) PPC_WEAK_FUNC(sub_826A43E8);
PPC_FUNC_IMPL(__imp__sub_826A43E8) {
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
	// addi r11,r3,128
	r11.s64 = ctx.r3.s64 + 128;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble 0x826a442c
	if (!cr0.gt) goto loc_826A442C;
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r9,r5
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, xer);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// blt cr6,0x826a441c
	if (cr6.lt) goto loc_826A441C;
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
loc_826A441C:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x826a4434
	goto loc_826A4434;
loc_826A442C:
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// bl 0x826a3748
	sub_826A3748(ctx, base);
loc_826A4434:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4444"))) PPC_WEAK_FUNC(sub_826A4444);
PPC_FUNC_IMPL(__imp__sub_826A4444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4448"))) PPC_WEAK_FUNC(sub_826A4448);
PPC_FUNC_IMPL(__imp__sub_826A4448) {
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
	// bl 0x826a3f68
	sub_826A3F68(ctx, base);
	// addic. r11,r3,8
	xer.ca = ctx.r3.u32 > 4294967287;
	r11.s64 = ctx.r3.s64 + 8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a4478
	if (cr0.eq) goto loc_826A4478;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826A4478:
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

__attribute__((alias("__imp__sub_826A448C"))) PPC_WEAK_FUNC(sub_826A448C);
PPC_FUNC_IMPL(__imp__sub_826A448C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4490"))) PPC_WEAK_FUNC(sub_826A4490);
PPC_FUNC_IMPL(__imp__sub_826A4490) {
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
	// bl 0x826a3fd0
	sub_826A3FD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
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

__attribute__((alias("__imp__sub_826A44E8"))) PPC_WEAK_FUNC(sub_826A44E8);
PPC_FUNC_IMPL(__imp__sub_826A44E8) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a4514
	if (cr0.eq) goto loc_826A4514;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826d3008
	sub_826D3008(ctx, base);
	// b 0x826a4518
	goto loc_826A4518;
loc_826A4514:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_826A4518:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt cr6,0x826a461c
	if (cr6.gt) goto loc_826A461C;
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// li r30,1
	r30.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a4548
	if (!cr0.eq) goto loc_826A4548;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a3ed8
	sub_826A3ED8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a4548
	if (cr0.eq) goto loc_826A4548;
	// stb r30,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r30.u8);
loc_826A4548:
	// lbz r11,120(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a459c
	if (cr0.eq) goto loc_826A459C;
	// addi r4,r31,88
	ctx.r4.s64 = r31.s64 + 88;
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x826d4638
	sub_826D4638(ctx, base);
	// cmpwi cr6,r3,-135
	cr6.compare<int32_t>(ctx.r3.s32, -135, xer);
	// bne cr6,0x826a4570
	if (!cr6.eq) goto loc_826A4570;
	// stb r29,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r29.u8);
	// b 0x826a461c
	goto loc_826A461C;
loc_826A4570:
	// cmpwi cr6,r3,-50
	cr6.compare<int32_t>(ctx.r3.s32, -50, xer);
	// bne cr6,0x826a4580
	if (!cr6.eq) goto loc_826A4580;
loc_826A4578:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x826a4620
	goto loc_826A4620;
loc_826A4580:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stb r29,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r29.u8);
	// bne cr6,0x826a461c
	if (!cr6.eq) goto loc_826A461C;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x826d2a30
	sub_826D2A30(ctx, base);
	// b 0x826a4578
	goto loc_826A4578;
loc_826A459C:
	// lbz r11,157(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 157);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a461c
	if (cr0.eq) goto loc_826A461C;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a461c
	if (!cr0.eq) goto loc_826A461C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a45cc
	if (cr0.eq) goto loc_826A45CC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826d3008
	sub_826D3008(ctx, base);
	// b 0x826a45d0
	goto loc_826A45D0;
loc_826A45CC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_826A45D0:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x826a461c
	if (!cr6.eq) goto loc_826A461C;
	// lbz r11,54(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 54);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a461c
	if (!cr0.eq) goto loc_826A461C;
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r10,184(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 184);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x826a461c
	if (cr6.lt) goto loc_826A461C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r30,54(r31)
	PPC_STORE_U8(r31.u32 + 54, r30.u8);
loc_826A461C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A4620:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A4628"))) PPC_WEAK_FUNC(sub_826A4628);
PPC_FUNC_IMPL(__imp__sub_826A4628) {
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

__attribute__((alias("__imp__sub_826A467C"))) PPC_WEAK_FUNC(sub_826A467C);
PPC_FUNC_IMPL(__imp__sub_826A467C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4680"))) PPC_WEAK_FUNC(sub_826A4680);
PPC_FUNC_IMPL(__imp__sub_826A4680) {
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
	// bl 0x826a4448
	sub_826A4448(ctx, base);
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

__attribute__((alias("__imp__sub_826A46E4"))) PPC_WEAK_FUNC(sub_826A46E4);
PPC_FUNC_IMPL(__imp__sub_826A46E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A46E8"))) PPC_WEAK_FUNC(sub_826A46E8);
PPC_FUNC_IMPL(__imp__sub_826A46E8) {
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
	// b 0x826a4718
	goto loc_826A4718;
loc_826A4708:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A4718:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x826a4708
	if (!cr6.eq) goto loc_826A4708;
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

__attribute__((alias("__imp__sub_826A4740"))) PPC_WEAK_FUNC(sub_826A4740);
PPC_FUNC_IMPL(__imp__sub_826A4740) {
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
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// blt cr6,0x826a4788
	if (cr6.lt) goto loc_826A4788;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_826A4788:
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
	// bl 0x826a3fd0
	sub_826A3FD0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a47c0
	if (cr0.eq) goto loc_826A47C0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_826A47C0:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826a47e0
	if (cr6.eq) goto loc_826A47E0;
loc_826A47CC:
	// lhz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U16(r24.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r10,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r10.u16);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
	// bne 0x826a47cc
	if (!cr0.eq) goto loc_826A47CC;
loc_826A47E0:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x826a4808
	if (!cr0.eq) goto loc_826A4808;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a4808
	if (cr0.eq) goto loc_826A4808;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_826A4808:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// rlwinm r11,r25,1,0,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
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

__attribute__((alias("__imp__sub_826A483C"))) PPC_WEAK_FUNC(sub_826A483C);
PPC_FUNC_IMPL(__imp__sub_826A483C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4840"))) PPC_WEAK_FUNC(sub_826A4840);
PPC_FUNC_IMPL(__imp__sub_826A4840) {
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
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A4860"))) PPC_WEAK_FUNC(sub_826A4860);
PPC_FUNC_IMPL(__imp__sub_826A4860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4864"))) PPC_WEAK_FUNC(sub_826A4864);
PPC_FUNC_IMPL(__imp__sub_826A4864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4868"))) PPC_WEAK_FUNC(sub_826A4868);
PPC_FUNC_IMPL(__imp__sub_826A4868) {
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
	// srawi r4,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r4.s64 = r11.s32 >> 1;
	// bl 0x826a4490
	sub_826A4490(ctx, base);
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

__attribute__((alias("__imp__sub_826A48DC"))) PPC_WEAK_FUNC(sub_826A48DC);
PPC_FUNC_IMPL(__imp__sub_826A48DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A48E0"))) PPC_WEAK_FUNC(sub_826A48E0);
PPC_FUNC_IMPL(__imp__sub_826A48E0) {
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
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x826a4914
	if (cr6.lt) goto loc_826A4914;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x826a4918
	if (cr6.lt) goto loc_826A4918;
loc_826A4914:
	// li r11,0
	r11.s64 = 0;
loc_826A4918:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a494c
	if (cr0.eq) goto loc_826A494C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lhz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,82
	ctx.r6.s64 = ctx.r1.s64 + 82;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x826a48e0
	sub_826A48E0(ctx, base);
	// b 0x826a4a20
	goto loc_826A4A20;
loc_826A494C:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// srawi r28,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r28.s64 = r11.s32 >> 1;
	// cmplw cr6,r28,r5
	cr6.compare<uint32_t>(r28.u32, ctx.r5.u32, xer);
	// ble cr6,0x826a49c0
	if (!cr6.gt) goto loc_826A49C0;
	// rlwinm r28,r5,1,0,30
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subf r27,r28,r31
	r27.s64 = r31.s64 - r28.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf. r5,r29,r27
	ctx.r5.s64 = r27.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// ble 0x826a4998
	if (!cr0.gt) goto loc_826A4998;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r5,r31
	ctx.r3.s64 = r31.s64 - ctx.r5.s64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_826A4998:
	// add r10,r28,r29
	ctx.r10.u64 = r28.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826a4a20
	if (cr6.eq) goto loc_826A4A20;
loc_826A49A8:
	// lhz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// sth r9,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826a49a8
	if (!cr6.eq) goto loc_826A49A8;
	// b 0x826a4a20
	goto loc_826A4A20;
loc_826A49C0:
	// subf. r11,r28,r5
	r11.s64 = ctx.r5.s64 - r28.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// beq 0x826a49e0
	if (cr0.eq) goto loc_826A49E0;
loc_826A49CC:
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// sth r10,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r10.u16);
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// bne 0x826a49cc
	if (!cr0.eq) goto loc_826A49CC;
loc_826A49E0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r29
	r11.u64 = r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x826a4a20
	if (cr6.eq) goto loc_826A4A20;
loc_826A4A0C:
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(r26.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x826a4a0c
	if (!cr6.eq) goto loc_826A4A0C;
loc_826A4A20:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A4A28"))) PPC_WEAK_FUNC(sub_826A4A28);
PPC_FUNC_IMPL(__imp__sub_826A4A28) {
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
	// blt cr6,0x826a4a70
	if (cr6.lt) goto loc_826A4A70;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_826A4A70:
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
	// bl 0x826a40a0
	sub_826A40A0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a4aa8
	if (cr0.eq) goto loc_826A4AA8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_826A4AA8:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826a4ac8
	if (cr6.eq) goto loc_826A4AC8;
loc_826A4AB4:
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
	// bne 0x826a4ab4
	if (!cr0.eq) goto loc_826A4AB4;
loc_826A4AC8:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x826a4af0
	if (!cr0.eq) goto loc_826A4AF0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x826a4af0
	if (cr0.eq) goto loc_826A4AF0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_826A4AF0:
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

__attribute__((alias("__imp__sub_826A4B24"))) PPC_WEAK_FUNC(sub_826A4B24);
PPC_FUNC_IMPL(__imp__sub_826A4B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4B28"))) PPC_WEAK_FUNC(sub_826A4B28);
PPC_FUNC_IMPL(__imp__sub_826A4B28) {
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
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x826a4b5c
	if (cr6.lt) goto loc_826A4B5C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x826a4b60
	if (cr6.lt) goto loc_826A4B60;
loc_826A4B5C:
	// li r11,0
	r11.s64 = 0;
loc_826A4B60:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a4b94
	if (cr0.eq) goto loc_826A4B94;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// bl 0x826a4b28
	sub_826A4B28(ctx, base);
	// b 0x826a4c68
	goto loc_826A4C68;
loc_826A4B94:
	// lwz r31,4(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r29,r31
	r11.s64 = r31.s64 - r29.s64;
	// srawi r28,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r28.s64 = r11.s32 >> 2;
	// cmplw cr6,r28,r5
	cr6.compare<uint32_t>(r28.u32, ctx.r5.u32, xer);
	// ble cr6,0x826a4c08
	if (!cr6.gt) goto loc_826A4C08;
	// rlwinm r28,r5,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// subf r27,r28,r31
	r27.s64 = r31.s64 - r28.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf. r5,r29,r27
	ctx.r5.s64 = r27.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// ble 0x826a4be0
	if (!cr0.gt) goto loc_826A4BE0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r3,r5,r31
	ctx.r3.s64 = r31.s64 - ctx.r5.s64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
loc_826A4BE0:
	// add r10,r28,r29
	ctx.r10.u64 = r28.u64 + r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// beq cr6,0x826a4c68
	if (cr6.eq) goto loc_826A4C68;
loc_826A4BF0:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x826a4bf0
	if (!cr6.eq) goto loc_826A4BF0;
	// b 0x826a4c68
	goto loc_826A4C68;
loc_826A4C08:
	// subf. r11,r28,r5
	r11.s64 = ctx.r5.s64 - r28.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// beq 0x826a4c28
	if (cr0.eq) goto loc_826A4C28;
loc_826A4C14:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x826a4c14
	if (!cr0.eq) goto loc_826A4C14;
loc_826A4C28:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r5,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r5.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82122018
	sub_82122018(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r29
	r11.u64 = r29.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// beq cr6,0x826a4c68
	if (cr6.eq) goto loc_826A4C68;
loc_826A4C54:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bne cr6,0x826a4c54
	if (!cr6.eq) goto loc_826A4C54;
loc_826A4C68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A4C70"))) PPC_WEAK_FUNC(sub_826A4C70);
PPC_FUNC_IMPL(__imp__sub_826A4C70) {
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
	// bl 0x826a3fd0
	sub_826A3FD0(ctx, base);
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

__attribute__((alias("__imp__sub_826A4CB0"))) PPC_WEAK_FUNC(sub_826A4CB0);
PPC_FUNC_IMPL(__imp__sub_826A4CB0) {
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
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a4cec
	if (cr0.eq) goto loc_826A4CEC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A4CEC:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a4cfc
	if (cr0.eq) goto loc_826A4CFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826A4CFC:
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

__attribute__((alias("__imp__sub_826A4D18"))) PPC_WEAK_FUNC(sub_826A4D18);
PPC_FUNC_IMPL(__imp__sub_826A4D18) {
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
	// lwz r16,-28936(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28936);
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
	// beq cr6,0x826a4d48
	if (cr6.eq) goto loc_826A4D48;
	// bl 0x826a4868
	sub_826A4868(ctx, base);
loc_826A4D48:
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

__attribute__((alias("__imp__sub_826A4D20"))) PPC_WEAK_FUNC(sub_826A4D20);
PPC_FUNC_IMPL(__imp__sub_826A4D20) {
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
	// beq cr6,0x826a4d48
	if (cr6.eq) goto loc_826A4D48;
	// bl 0x826a4868
	sub_826A4868(ctx, base);
loc_826A4D48:
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

__attribute__((alias("__imp__sub_826A4D5C"))) PPC_WEAK_FUNC(sub_826A4D5C);
PPC_FUNC_IMPL(__imp__sub_826A4D5C) {
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

__attribute__((alias("__imp__sub_826A4D88"))) PPC_WEAK_FUNC(sub_826A4D88);
PPC_FUNC_IMPL(__imp__sub_826A4D88) {
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
	// lwz r16,-28880(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28880);
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
	// beq cr6,0x826a4db8
	if (cr6.eq) goto loc_826A4DB8;
	// bl 0x826a4868
	sub_826A4868(ctx, base);
loc_826A4DB8:
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

__attribute__((alias("__imp__sub_826A4D90"))) PPC_WEAK_FUNC(sub_826A4D90);
PPC_FUNC_IMPL(__imp__sub_826A4D90) {
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
	// beq cr6,0x826a4db8
	if (cr6.eq) goto loc_826A4DB8;
	// bl 0x826a4868
	sub_826A4868(ctx, base);
loc_826A4DB8:
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

__attribute__((alias("__imp__sub_826A4DCC"))) PPC_WEAK_FUNC(sub_826A4DCC);
PPC_FUNC_IMPL(__imp__sub_826A4DCC) {
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

__attribute__((alias("__imp__sub_826A4DF8"))) PPC_WEAK_FUNC(sub_826A4DF8);
PPC_FUNC_IMPL(__imp__sub_826A4DF8) {
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
	// beq cr6,0x826a4e40
	if (cr6.eq) goto loc_826A4E40;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x826a4e38
	if (cr0.eq) goto loc_826A4E38;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x826a4e3c
	goto loc_826A4E3C;
loc_826A4E38:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_826A4E3C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_826A4E40:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A4E4C"))) PPC_WEAK_FUNC(sub_826A4E4C);
PPC_FUNC_IMPL(__imp__sub_826A4E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4E50"))) PPC_WEAK_FUNC(sub_826A4E50);
PPC_FUNC_IMPL(__imp__sub_826A4E50) {
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
	// beq cr6,0x826a4ea0
	if (cr6.eq) goto loc_826A4EA0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x826a4e8c
	if (cr6.lt) goto loc_826A4E8C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x826a48e0
	sub_826A48E0(ctx, base);
	// b 0x826a4ea0
	goto loc_826A4EA0;
loc_826A4E8C:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a4740
	sub_826A4740(ctx, base);
loc_826A4EA0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4EB0"))) PPC_WEAK_FUNC(sub_826A4EB0);
PPC_FUNC_IMPL(__imp__sub_826A4EB0) {
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
	// beq cr6,0x826a4f00
	if (cr6.eq) goto loc_826A4F00;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// blt cr6,0x826a4eec
	if (cr6.lt) goto loc_826A4EEC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x826a4b28
	sub_826A4B28(ctx, base);
	// b 0x826a4f00
	goto loc_826A4F00;
loc_826A4EEC:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a4a28
	sub_826A4A28(ctx, base);
loc_826A4F00:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A4F10"))) PPC_WEAK_FUNC(sub_826A4F10);
PPC_FUNC_IMPL(__imp__sub_826A4F10) {
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
	// b 0x826a4f4c
	goto loc_826A4F4C;
loc_826A4F30:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-12
	ctx.r3.s64 = r11.s64 + -12;
	// bl 0x826a4cb0
	sub_826A4CB0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826A4F4C:
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
	// bne 0x826a4f30
	if (!cr0.eq) goto loc_826A4F30;
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

__attribute__((alias("__imp__sub_826A4F84"))) PPC_WEAK_FUNC(sub_826A4F84);
PPC_FUNC_IMPL(__imp__sub_826A4F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A4F88"))) PPC_WEAK_FUNC(sub_826A4F88);
PPC_FUNC_IMPL(__imp__sub_826A4F88) {
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
	// li r28,0
	r28.s64 = 0;
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a4fcc
	if (cr0.eq) goto loc_826A4FCC;
	// stb r28,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r28.u8);
loc_826A4FB0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a4108
	sub_826A4108(ctx, base);
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a4fb0
	if (!cr0.eq) goto loc_826A4FB0;
	// li r11,1
	r11.s64 = 1;
	// stb r11,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r11.u8);
loc_826A4FCC:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a5008
	if (!cr6.gt) goto loc_826A5008;
	// mr r30,r28
	r30.u64 = r28.u64;
loc_826A4FE0:
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a4df8
	sub_826A4DF8(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826a4fe0
	if (cr6.lt) goto loc_826A4FE0;
loc_826A5008:
	// li r11,-1
	r11.s64 = -1;
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// stw r28,184(r31)
	PPC_STORE_U32(r31.u32 + 184, r28.u32);
	// std r11,176(r31)
	PPC_STORE_U64(r31.u32 + 176, r11.u64);
	// bl 0x826d3ae0
	sub_826D3AE0(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x826d3ab8
	sub_826D3AB8(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x826d2218
	sub_826D2218(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x826d2970
	sub_826D2970(ctx, base);
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x826d2060
	sub_826D2060(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// stb r28,120(r31)
	PPC_STORE_U8(r31.u32 + 120, r28.u8);
	// add r4,r11,r27
	ctx.r4.u64 = r11.u64 + r27.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stb r28,54(r31)
	PPC_STORE_U8(r31.u32 + 54, r28.u8);
	// stb r28,157(r31)
	PPC_STORE_U8(r31.u32 + 157, r28.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826A5074"))) PPC_WEAK_FUNC(sub_826A5074);
PPC_FUNC_IMPL(__imp__sub_826A5074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A5078"))) PPC_WEAK_FUNC(sub_826A5078);
PPC_FUNC_IMPL(__imp__sub_826A5078) {
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
	// beq cr6,0x826a50b4
	if (cr6.eq) goto loc_826A50B4;
loc_826A509C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a4cb0
	sub_826A4CB0(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x826a509c
	if (!cr6.eq) goto loc_826A509C;
loc_826A50B4:
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

__attribute__((alias("__imp__sub_826A50CC"))) PPC_WEAK_FUNC(sub_826A50CC);
PPC_FUNC_IMPL(__imp__sub_826A50CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A50D0"))) PPC_WEAK_FUNC(sub_826A50D0);
PPC_FUNC_IMPL(__imp__sub_826A50D0) {
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
	// beq cr6,0x826a510c
	if (cr6.eq) goto loc_826A510C;
loc_826A50F4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a4cb0
	sub_826A4CB0(ctx, base);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x826a50f4
	if (!cr6.eq) goto loc_826A50F4;
loc_826A510C:
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

__attribute__((alias("__imp__sub_826A5124"))) PPC_WEAK_FUNC(sub_826A5124);
PPC_FUNC_IMPL(__imp__sub_826A5124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A5128"))) PPC_WEAK_FUNC(sub_826A5128);
PPC_FUNC_IMPL(__imp__sub_826A5128) {
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
	// li r11,0
	r11.s64 = 0;
	// stb r11,53(r31)
	PPC_STORE_U8(r31.u32 + 53, r11.u8);
	// bl 0x826a4108
	sub_826A4108(ctx, base);
	// lbz r11,52(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 52);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a519c
	if (!cr0.eq) goto loc_826A519C;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,132
	ctx.r3.s64 = r31.s64 + 132;
	// bl 0x826a6cd0
	sub_826A6CD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a4f88
	sub_826A4F88(ctx, base);
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,124(r31)
	PPC_STORE_U32(r31.u32 + 124, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// stb r9,53(r31)
	PPC_STORE_U8(r31.u32 + 53, ctx.r9.u8);
	// b 0x826a51a0
	goto loc_826A51A0;
loc_826A519C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_826A51A0:
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

__attribute__((alias("__imp__sub_826A51B4"))) PPC_WEAK_FUNC(sub_826A51B4);
PPC_FUNC_IMPL(__imp__sub_826A51B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A51B8"))) PPC_WEAK_FUNC(sub_826A51B8);
PPC_FUNC_IMPL(__imp__sub_826A51B8) {
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
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// bge cr6,0x826a5270
	if (!cr6.lt) goto loc_826A5270;
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x826a5204
	if (!cr6.gt) goto loc_826A5204;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r3,r11,7600
	ctx.r3.s64 = r11.s64 + 7600;
	// bl 0x82125240
	sub_82125240(ctx, base);
loc_826A5204:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// subf r11,r5,r6
	r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// srawi r27,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r27.s64 = r11.s32 >> 1;
	// beq cr6,0x826a5244
	if (cr6.eq) goto loc_826A5244;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x826a4c70
	sub_826A4C70(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x826a5254
	goto loc_826A5254;
loc_826A5244:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a3fd0
	sub_826A3FD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_826A5254:
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r29,1,0,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
loc_826A5270:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826A5278"))) PPC_WEAK_FUNC(sub_826A5278);
PPC_FUNC_IMPL(__imp__sub_826A5278) {
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
	// bl 0x826a4f10
	sub_826A4F10(ctx, base);
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

__attribute__((alias("__imp__sub_826A52DC"))) PPC_WEAK_FUNC(sub_826A52DC);
PPC_FUNC_IMPL(__imp__sub_826A52DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A52E0"))) PPC_WEAK_FUNC(sub_826A52E0);
PPC_FUNC_IMPL(__imp__sub_826A52E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// beq cr6,0x826a532c
	if (cr6.eq) goto loc_826A532C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_826A52F0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x826a531c
	if (cr6.eq) goto loc_826A531C;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_826A531C:
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// addi r5,r5,12
	ctx.r5.s64 = ctx.r5.s64 + 12;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bne cr6,0x826a52f0
	if (!cr6.eq) goto loc_826A52F0;
loc_826A532C:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5334"))) PPC_WEAK_FUNC(sub_826A5334);
PPC_FUNC_IMPL(__imp__sub_826A5334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A5338"))) PPC_WEAK_FUNC(sub_826A5338);
PPC_FUNC_IMPL(__imp__sub_826A5338) {
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
	// lwz r16,-28780(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28780);
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
loc_826A536C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826a5394
	if (cr6.eq) goto loc_826A5394;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4d90
	sub_826A4D90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x826a536c
	goto loc_826A536C;
loc_826A5394:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A5340"))) PPC_WEAK_FUNC(sub_826A5340);
PPC_FUNC_IMPL(__imp__sub_826A5340) {
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
loc_826A536C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x826a5394
	if (cr6.eq) goto loc_826A5394;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4d90
	sub_826A4D90(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// b 0x826a536c
	goto loc_826A536C;
loc_826A5394:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A53A0"))) PPC_WEAK_FUNC(sub_826A53A0);
PPC_FUNC_IMPL(__imp__sub_826A53A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r31{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-28780(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28780);
	// addi r31,r12,-128
	r31.s64 = r12.s64 + -128;
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x826a5078
	sub_826A5078(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A53A8"))) PPC_WEAK_FUNC(sub_826A53A8);
PPC_FUNC_IMPL(__imp__sub_826A53A8) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x826a5078
	sub_826A5078(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8239c9a8
	sub_8239C9A8(ctx, base);
}

__attribute__((alias("__imp__sub_826A53D8"))) PPC_WEAK_FUNC(sub_826A53D8);
PPC_FUNC_IMPL(__imp__sub_826A53D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x826a53e8
	goto loc_826A53E8;
loc_826A53E4:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
loc_826A53E8:
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
	// bne 0x826a53e4
	if (!cr0.eq) goto loc_826A53E4;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82355020
	sub_82355020(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_826A541C"))) PPC_WEAK_FUNC(sub_826A541C);
PPC_FUNC_IMPL(__imp__sub_826A541C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5420"))) PPC_WEAK_FUNC(sub_826A5420);
PPC_FUNC_IMPL(__imp__sub_826A5420) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-28720(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28720);
	// mflr r12
	// bl 0x8239bce0
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r22,r30,4
	r22.s64 = r30.s64 + 4;
	// bne cr6,0x826a5458
	if (!cr6.eq) goto loc_826A5458;
	// mr r22,r23
	r22.u64 = r23.u64;
loc_826A5458:
	// stw r22,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r22.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x826a546c
	if (cr6.eq) goto loc_826A546C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_826A546C:
	// lbz r11,156(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a5490
	if (!cr0.eq) goto loc_826A5490;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x826a5488
	if (cr6.eq) goto loc_826A5488;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_826A5488:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a56d4
	goto loc_826A56D4;
loc_826A5490:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a54d4
	if (!cr6.gt) goto loc_826A54D4;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_826A54A4:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bl 0x826a4df8
	sub_826A4DF8(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x826a54a4
	if (cr6.lt) goto loc_826A54A4;
loc_826A54D4:
	// ld r11,176(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 176);
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(r11.s64, -1, xer);
	// beq cr6,0x826a54ec
	if (cr6.eq) goto loc_826A54EC;
	// lwa r10,184(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 184));
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// std r11,176(r30)
	PPC_STORE_U64(r30.u32 + 176, r11.u64);
loc_826A54EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x826a44e8
	sub_826A44E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5514
	if (cr0.eq) goto loc_826A5514;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826d3008
	sub_826D3008(ctx, base);
	// b 0x826a5518
	goto loc_826A5518;
loc_826A5514:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_826A5518:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x826a56c0
	if (!cr6.gt) goto loc_826A56C0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x826d3008
	sub_826D3008(ctx, base);
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r25,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r25.s64 = r11.s32 >> 1;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// subfic r10,r25,4096
	xer.ca = r25.u32 <= 4096;
	ctx.r10.s64 = 4096 - r25.s64;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// blt cr6,0x826a555c
	if (cr6.lt) goto loc_826A555C;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
loc_826A555C:
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r24,0
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// ble 0x826a56a8
	if (!cr0.gt) goto loc_826A56A8;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// ld r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 176);
	// cmpdi cr6,r9,-1
	cr6.compare<int64_t>(ctx.r9.s64, -1, xer);
	// ld r11,56(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// bne cr6,0x826a5598
	if (!cr6.eq) goto loc_826A5598;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// blt cr6,0x826a5598
	if (cr6.lt) goto loc_826A5598;
	// extsw r9,r25
	ctx.r9.s64 = r25.s32;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// std r11,176(r30)
	PPC_STORE_U64(r30.u32 + 176, r11.u64);
loc_826A5598:
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// blt cr6,0x826a55a8
	if (cr6.lt) goto loc_826A55A8;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
loc_826A55A8:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r27,r23
	r27.u64 = r23.u64;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826a56a0
	if (!cr6.gt) goto loc_826A56A0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// sth r23,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r23.u16);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// add r28,r26,r25
	r28.u64 = r26.u64 + r25.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lfs f30,-12636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12636);
	f30.f64 = double(temp.f32);
	// lfs f31,-12632(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12632);
	f31.f64 = double(temp.f32);
loc_826A55D8:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bge cr6,0x826a5608
	if (!cr6.lt) goto loc_826A5608;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x826a4df8
	sub_826A4DF8(ctx, base);
	// b 0x826a5620
	goto loc_826A5620;
loc_826A5608:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// subf r5,r11,r28
	ctx.r5.s64 = r28.s64 - r11.s64;
	// bl 0x826a4e50
	sub_826A4E50(ctx, base);
loc_826A5620:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x826a568c
	if (!cr6.gt) goto loc_826A568C;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_826A5638:
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x826a5658
	if (!cr6.gt) goto loc_826A5658;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x826a5664
	goto loc_826A5664;
loc_826A5658:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x826a5664
	if (!cr6.lt) goto loc_826A5664;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_826A5664:
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r31)
	PPC_STORE_U64(r31.u32 + 88, f0.u64);
	// lhz r6,94(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 94);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r8,r29,r8
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + ctx.r8.u32);
	// sthx r6,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x826a5638
	if (!cr0.eq) goto loc_826A5638;
loc_826A568C:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x826a55d8
	if (cr6.lt) goto loc_826A55D8;
loc_826A56A0:
	// li r29,1
	r29.s64 = 1;
	// b 0x826a56b4
	goto loc_826A56B4;
loc_826A56A8:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826a56b4
	if (!cr6.eq) goto loc_826A56B4;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_826A56B4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x826d3090
	sub_826D3090(ctx, base);
loc_826A56C0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x826a56d0
	if (cr6.eq) goto loc_826A56D0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_826A56D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_826A56D4:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_826A5428"))) PPC_WEAK_FUNC(sub_826A5428);
PPC_FUNC_IMPL(__imp__sub_826A5428) {
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
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, f31.u64);
	// addi r31,r1,-208
	r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r23,0
	r23.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r22,r30,4
	r22.s64 = r30.s64 + 4;
	// bne cr6,0x826a5458
	if (!cr6.eq) goto loc_826A5458;
	// mr r22,r23
	r22.u64 = r23.u64;
loc_826A5458:
	// stw r22,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r22.u32);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x826a546c
	if (cr6.eq) goto loc_826A546C;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_826A546C:
	// lbz r11,156(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 156);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a5490
	if (!cr0.eq) goto loc_826A5490;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x826a5488
	if (cr6.eq) goto loc_826A5488;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_826A5488:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x826a56d4
	goto loc_826A56D4;
loc_826A5490:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r28,r23
	r28.u64 = r23.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a54d4
	if (!cr6.gt) goto loc_826A54D4;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_826A54A4:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r5,r10,r4
	ctx.r5.u64 = ctx.r10.u64 + ctx.r4.u64;
	// bl 0x826a4df8
	sub_826A4DF8(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// blt cr6,0x826a54a4
	if (cr6.lt) goto loc_826A54A4;
loc_826A54D4:
	// ld r11,176(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 176);
	// cmpdi cr6,r11,-1
	cr6.compare<int64_t>(r11.s64, -1, xer);
	// beq cr6,0x826a54ec
	if (cr6.eq) goto loc_826A54EC;
	// lwa r10,184(r30)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(r30.u32 + 184));
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// std r11,176(r30)
	PPC_STORE_U64(r30.u32 + 176, r11.u64);
loc_826A54EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r23,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r23.u32);
	// bl 0x826a44e8
	sub_826A44E8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5514
	if (cr0.eq) goto loc_826A5514;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826d3008
	sub_826D3008(ctx, base);
	// b 0x826a5518
	goto loc_826A5518;
loc_826A5514:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
loc_826A5518:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x826a56c0
	if (!cr6.gt) goto loc_826A56C0;
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x826d3008
	sub_826D3008(ctx, base);
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// srawi r25,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r25.s64 = r11.s32 >> 1;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// subfic r10,r25,4096
	xer.ca = r25.u32 <= 4096;
	ctx.r10.s64 = 4096 - r25.s64;
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// stw r10,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r10.u32);
	// blt cr6,0x826a555c
	if (cr6.lt) goto loc_826A555C;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
loc_826A555C:
	// lwz r24,0(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r24,0
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// ble 0x826a56a8
	if (!cr0.gt) goto loc_826A56A8;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// ld r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 176);
	// cmpdi cr6,r9,-1
	cr6.compare<int64_t>(ctx.r9.s64, -1, xer);
	// ld r11,56(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 56);
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// bne cr6,0x826a5598
	if (!cr6.eq) goto loc_826A5598;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// blt cr6,0x826a5598
	if (cr6.lt) goto loc_826A5598;
	// extsw r9,r25
	ctx.r9.s64 = r25.s32;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// std r11,176(r30)
	PPC_STORE_U64(r30.u32 + 176, r11.u64);
loc_826A5598:
	// cmpw cr6,r3,r10
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, xer);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// blt cr6,0x826a55a8
	if (cr6.lt) goto loc_826A55A8;
	// addi r11,r31,88
	r11.s64 = r31.s64 + 88;
loc_826A55A8:
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r27,r23
	r27.u64 = r23.u64;
	// lwz r26,0(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// ble cr6,0x826a56a0
	if (!cr6.gt) goto loc_826A56A0;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// sth r23,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r23.u16);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// add r28,r26,r25
	r28.u64 = r26.u64 + r25.u64;
	// mr r29,r23
	r29.u64 = r23.u64;
	// lfs f30,-12636(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12636);
	f30.f64 = double(temp.f32);
	// lfs f31,-12632(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -12632);
	f31.f64 = double(temp.f32);
loc_826A55D8:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// add r3,r29,r11
	ctx.r3.u64 = r29.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - r11.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// bge cr6,0x826a5608
	if (!cr6.lt) goto loc_826A5608;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x826a4df8
	sub_826A4DF8(ctx, base);
	// b 0x826a5620
	goto loc_826A5620;
loc_826A5608:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// subf r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// subf r5,r11,r28
	ctx.r5.s64 = r28.s64 - r11.s64;
	// bl 0x826a4e50
	sub_826A4E50(ctx, base);
loc_826A5620:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// ble cr6,0x826a568c
	if (!cr6.gt) goto loc_826A568C;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_826A5638:
	// lwz r8,96(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	f0.f64 = double(temp.f32);
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x826a5658
	if (!cr6.gt) goto loc_826A5658;
	// fmr f0,f31
	f0.f64 = f31.f64;
	// b 0x826a5664
	goto loc_826A5664;
loc_826A5658:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x826a5664
	if (!cr6.lt) goto loc_826A5664;
	// fmr f0,f30
	f0.f64 = f30.f64;
loc_826A5664:
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfd f0,88(r31)
	PPC_STORE_U64(r31.u32 + 88, f0.u64);
	// lhz r6,94(r31)
	ctx.r6.u64 = PPC_LOAD_U16(r31.u32 + 94);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwzx r8,r29,r8
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + ctx.r8.u32);
	// sthx r6,r10,r8
	PPC_STORE_U16(ctx.r10.u32 + ctx.r8.u32, ctx.r6.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bne 0x826a5638
	if (!cr0.eq) goto loc_826A5638;
loc_826A568C:
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x826a55d8
	if (cr6.lt) goto loc_826A55D8;
loc_826A56A0:
	// li r29,1
	r29.s64 = 1;
	// b 0x826a56b4
	goto loc_826A56B4;
loc_826A56A8:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x826a56b4
	if (!cr6.eq) goto loc_826A56B4;
	// mr r29,r23
	r29.u64 = r23.u64;
loc_826A56B4:
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// bl 0x826d3090
	sub_826D3090(ctx, base);
loc_826A56C0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x826a56d0
	if (cr6.eq) goto loc_826A56D0;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_826A56D0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_826A56D4:
	// addi r1,r31,208
	ctx.r1.s64 = r31.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_826A56E4"))) PPC_WEAK_FUNC(sub_826A56E4);
PPC_FUNC_IMPL(__imp__sub_826A56E4) {
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
	// addi r3,r31,100
	ctx.r3.s64 = r31.s64 + 100;
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A570C"))) PPC_WEAK_FUNC(sub_826A570C);
PPC_FUNC_IMPL(__imp__sub_826A570C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A5710"))) PPC_WEAK_FUNC(sub_826A5710);
PPC_FUNC_IMPL(__imp__sub_826A5710) {
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
	// lwz r16,-28648(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28648);
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
	// bl 0x826a4f10
	sub_826A4F10(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a577c
	if (cr0.eq) goto loc_826A577C;
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
loc_826A577C:
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

__attribute__((alias("__imp__sub_826A5718"))) PPC_WEAK_FUNC(sub_826A5718);
PPC_FUNC_IMPL(__imp__sub_826A5718) {
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
	// bl 0x826a4f10
	sub_826A4F10(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x826a577c
	if (cr0.eq) goto loc_826A577C;
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
loc_826A577C:
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

__attribute__((alias("__imp__sub_826A5794"))) PPC_WEAK_FUNC(sub_826A5794);
PPC_FUNC_IMPL(__imp__sub_826A5794) {
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

__attribute__((alias("__imp__sub_826A57BC"))) PPC_WEAK_FUNC(sub_826A57BC);
PPC_FUNC_IMPL(__imp__sub_826A57BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A57C0"))) PPC_WEAK_FUNC(sub_826A57C0);
PPC_FUNC_IMPL(__imp__sub_826A57C0) {
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r30,r25
	r30.u64 = r25.u64;
	// mr r31,r29
	r31.u64 = r29.u64;
	// lwz r26,4(r24)
	r26.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplw cr6,r25,r29
	cr6.compare<uint32_t>(r25.u32, r29.u32, xer);
	// li r28,0
	r28.s64 = 0;
	// beq cr6,0x826a58a4
	if (cr6.eq) goto loc_826A58A4;
	// subf r27,r29,r25
	r27.s64 = r25.s64 - r29.s64;
loc_826A57F4:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// beq cr6,0x826a5848
	if (cr6.eq) goto loc_826A5848;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4cb0
	sub_826A4CB0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826a5838
	if (cr6.eq) goto loc_826A5838;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r27,r31
	r11.u64 = r27.u64 + r31.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_826A5838:
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bne cr6,0x826a57f4
	if (!cr6.eq) goto loc_826A57F4;
loc_826A5848:
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// beq cr6,0x826a58a4
	if (cr6.eq) goto loc_826A58A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a5078
	sub_826A5078(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x826a58b0
	goto loc_826A58B0;
loc_826A5868:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826a4cb0
	sub_826A4CB0(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x826a589c
	if (cr6.eq) goto loc_826A589C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
loc_826A589C:
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
loc_826A58A4:
	// cmplw cr6,r31,r26
	cr6.compare<uint32_t>(r31.u32, r26.u32, xer);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bne cr6,0x826a5868
	if (!cr6.eq) goto loc_826A5868;
loc_826A58B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x826a50d0
	sub_826A50D0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r30,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_826A58CC"))) PPC_WEAK_FUNC(sub_826A58CC);
PPC_FUNC_IMPL(__imp__sub_826A58CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A58D0"))) PPC_WEAK_FUNC(sub_826A58D0);
PPC_FUNC_IMPL(__imp__sub_826A58D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-28540(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28540);
	// mflr r12
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcdc
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
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
	// blt cr6,0x826a5930
	if (cr6.lt) goto loc_826A5930;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_826A5930:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r23,r30,8
	r23.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r22,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r22.u32);
	// bl 0x826a4038
	sub_826A4038(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x826a52e0
	sub_826A52E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x826a59a8
	if (!cr6.eq) goto loc_826A59A8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826a4d20
	sub_826A4D20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// b 0x826a59c0
	goto loc_826A59C0;
loc_826A59A8:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826a5340
	sub_826A5340(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826A59C0:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a59f4
	if (!cr0.eq) goto loc_826A59F4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x826a52e0
	sub_826A52E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826A59F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a5278
	sub_826A5278(ctx, base);
	// mulli r11,r22,12
	r11.s64 = r22.s64 * 12;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_826A58D8"))) PPC_WEAK_FUNC(sub_826A58D8);
PPC_FUNC_IMPL(__imp__sub_826A58D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
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
	// li r0,0
	r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, r0.u32);
	// bl 0x8239bcdc
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
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
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
	// blt cr6,0x826a5930
	if (cr6.lt) goto loc_826A5930;
	// addi r10,r31,84
	ctx.r10.s64 = r31.s64 + 84;
loc_826A5930:
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r23,r30,8
	r23.s64 = r30.s64 + 8;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r22,r10,r11
	r22.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// stw r22,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r22.u32);
	// bl 0x826a4038
	sub_826A4038(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r28.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x826a52e0
	sub_826A52E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,1
	cr6.compare<uint32_t>(r27.u32, 1, xer);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// bne cr6,0x826a59a8
	if (!cr6.eq) goto loc_826A59A8;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// bl 0x826a4d20
	sub_826A4D20(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// b 0x826a59c0
	goto loc_826A59C0;
loc_826A59A8:
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x826a5340
	sub_826A5340(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826A59C0:
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// clrlwi. r11,r21,24
	r11.u64 = r21.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a59f4
	if (!cr0.eq) goto loc_826A59F4;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stb r26,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r26.u8);
	// lbz r6,80(r31)
	ctx.r6.u64 = PPC_LOAD_U8(r31.u32 + 80);
	// bl 0x826a52e0
	sub_826A52E0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_826A59F4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a5278
	sub_826A5278(ctx, base);
	// mulli r11,r22,12
	r11.s64 = r22.s64 * 12;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_826A5A18"))) PPC_WEAK_FUNC(sub_826A5A18);
PPC_FUNC_IMPL(__imp__sub_826A5A18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// lwz r16,-28540(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28540);
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a5078
	sub_826A5078(ctx, base);
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
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,-28456(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28456);
	// mflr r12
	// bl 0x8239bce4
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x826a5aa8
	if (cr6.lt) goto loc_826A5AA8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x826a5aac
	if (cr6.lt) goto loc_826A5AAC;
loc_826A5AA8:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_826A5AAC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a5b04
	if (cr0.eq) goto loc_826A5B04;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x826a4868
	sub_826A4868(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r23,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r23.u8);
	// bl 0x826a5a68
	sub_826A5A68(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a5b80
	if (cr6.eq) goto loc_826A5B80;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x826a5b80
	goto loc_826A5B80;
loc_826A5B04:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r26,r25,12
	r26.s64 = r25.s64 * 12;
	// addi r30,r11,-12
	r30.s64 = r11.s64 + -12;
	// add r28,r26,r30
	r28.u64 = r26.u64 + r30.u64;
	// b 0x826a5b58
	goto loc_826A5B58;
loc_826A5B18:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826a5b44
	if (cr6.eq) goto loc_826A5B44;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r23.u32);
	// stw r23,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
loc_826A5B44:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4cb0
	sub_826A4CB0(ctx, base);
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// addi r28,r28,-12
	r28.s64 = r28.s64 + -12;
loc_826A5B58:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bge cr6,0x826a5b18
	if (!cr6.lt) goto loc_826A5B18;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a5340
	sub_826A5340(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_826A5B80:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_826A5A20"))) PPC_WEAK_FUNC(sub_826A5A20);
PPC_FUNC_IMPL(__imp__sub_826A5A20) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a5078
	sub_826A5078(ctx, base);
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

__attribute__((alias("__imp__sub_826A5A68"))) PPC_WEAK_FUNC(sub_826A5A68);
PPC_FUNC_IMPL(__imp__sub_826A5A68) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// li r23,0
	r23.s64 = 0;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// blt cr6,0x826a5aa8
	if (cr6.lt) goto loc_826A5AA8;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x826a5aac
	if (cr6.lt) goto loc_826A5AAC;
loc_826A5AA8:
	// mr r11,r23
	r11.u64 = r23.u64;
loc_826A5AAC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a5b04
	if (cr0.eq) goto loc_826A5B04;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x826a4868
	sub_826A4868(ctx, base);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// addi r6,r31,88
	ctx.r6.s64 = r31.s64 + 88;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stb r23,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r23.u8);
	// bl 0x826a5a68
	sub_826A5A68(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a5b80
	if (cr6.eq) goto loc_826A5B80;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x826a5b80
	goto loc_826A5B80;
loc_826A5B04:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mulli r26,r25,12
	r26.s64 = r25.s64 * 12;
	// addi r30,r11,-12
	r30.s64 = r11.s64 + -12;
	// add r28,r26,r30
	r28.u64 = r26.u64 + r30.u64;
	// b 0x826a5b58
	goto loc_826A5B58;
loc_826A5B18:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x826a5b44
	if (cr6.eq) goto loc_826A5B44;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// stw r23,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r23.u32);
	// stw r23,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r23.u32);
	// stw r23,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r23.u32);
loc_826A5B44:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4cb0
	sub_826A4CB0(ctx, base);
	// addi r30,r30,-12
	r30.s64 = r30.s64 + -12;
	// addi r28,r28,-12
	r28.s64 = r28.s64 + -12;
loc_826A5B58:
	// cmplw cr6,r30,r27
	cr6.compare<uint32_t>(r30.u32, r27.u32, xer);
	// bge cr6,0x826a5b18
	if (!cr6.lt) goto loc_826A5B18;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a5340
	sub_826A5340(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// add r11,r11,r26
	r11.u64 = r11.u64 + r26.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_826A5B80:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_826A5B88"))) PPC_WEAK_FUNC(sub_826A5B88);
PPC_FUNC_IMPL(__imp__sub_826A5B88) {
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x826a4840
	sub_826A4840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5BB0"))) PPC_WEAK_FUNC(sub_826A5BB0);
PPC_FUNC_IMPL(__imp__sub_826A5BB0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lis r25,-32137
	r25.s64 = -2106130432;
	// addi r26,r11,-13328
	r26.s64 = r11.s64 + -13328;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r31,r11,-13336
	r31.s64 = r11.s64 + -13336;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r28,r11,-13364
	r28.s64 = r11.s64 + -13364;
loc_826A5BD8:
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,9028(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 9028);
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82370ed8
	sub_82370ED8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_826A5C0C:
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// b 0x826a5c74
	goto loc_826A5C74;
loc_826A5C18:
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lbz r11,32(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a5c4c
	if (cr0.eq) goto loc_826A5C4C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x826a4628
	sub_826A4628(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r11,32(r29)
	PPC_STORE_U8(r29.u32 + 32, r11.u8);
	// b 0x826a5c74
	goto loc_826A5C74;
loc_826A5C4C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r30,0(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x826a5428
	sub_826A5428(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a5c6c
	if (!cr0.eq) goto loc_826A5C6C;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq 0x826a5c70
	if (cr0.eq) goto loc_826A5C70;
loc_826A5C6C:
	// li r11,1
	r11.s64 = 1;
loc_826A5C70:
	// clrlwi r27,r11,24
	r27.u64 = r11.u32 & 0xFF;
loc_826A5C74:
	// subf r11,r30,r31
	r11.s64 = r31.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a5c18
	if (!cr0.eq) goto loc_826A5C18;
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a5c0c
	if (!cr0.eq) goto loc_826A5C0C;
	// b 0x826a5bd8
	goto loc_826A5BD8;
}

__attribute__((alias("__imp__sub_826A5C98"))) PPC_WEAK_FUNC(sub_826A5C98);
PPC_FUNC_IMPL(__imp__sub_826A5C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-28296(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28296);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,22056
	r11.s64 = r11.s64 + 22056;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826911f8
	sub_826911F8(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r29,0
	r29.s64 = 0;
	// stw r25,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r25.u32);
	// li r28,-1
	r28.s64 = -1;
	// stw r27,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r27.u32);
	// addi r11,r11,-28372
	r11.s64 = r11.s64 + -28372;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r28,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r28.u32);
	// stb r29,52(r30)
	PPC_STORE_U8(r30.u32 + 52, r29.u8);
	// stb r10,53(r30)
	PPC_STORE_U8(r30.u32 + 53, ctx.r10.u8);
	// stb r29,54(r30)
	PPC_STORE_U8(r30.u32 + 54, r29.u8);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stb r29,120(r30)
	PPC_STORE_U8(r30.u32 + 120, r29.u8);
	// stw r28,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r28.u32);
	// stw r29,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// bl 0x826a6d48
	sub_826A6D48(ctx, base);
	// addi r11,r30,160
	r11.s64 = r30.s64 + 160;
	// stw r29,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r29.u32);
	// stb r29,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r29.u8);
	// stb r29,157(r30)
	PPC_STORE_U8(r30.u32 + 157, r29.u8);
	// stw r29,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// std r28,176(r30)
	PPC_STORE_U64(r30.u32 + 176, r28.u64);
	// stw r29,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r29.u32);
	// beq 0x826a5d94
	if (cr0.eq) goto loc_826A5D94;
	// li r3,20000
	ctx.r3.s64 = 20000;
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r5,20000
	ctx.r5.s64 = 20000;
	// stw r4,152(r30)
	PPC_STORE_U32(r30.u32 + 152, ctx.r4.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826A5D94:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// bl 0x826d32f8
	sub_826D32F8(ctx, base);
	// stb r29,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r29.u8);
	// lis r29,-32137
	r29.s64 = -2106130432;
	// lwz r11,9028(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 9028);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x826a5e04
	if (!cr6.eq) goto loc_826A5E04;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a8a80
	sub_826A8A80(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// stw r3,9028(r29)
	PPC_STORE_U32(r29.u32 + 9028, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23472
	ctx.r5.s64 = r11.s64 + 23472;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b9a20
	sub_823B9A20(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x823b9c20
	sub_823B9C20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823b9fc0
	sub_823B9FC0(ctx, base);
loc_826A5E04:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,-13364
	r29.s64 = r11.s64 + -13364;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// bl 0x82691228
	sub_82691228(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r4,r11,-13328
	ctx.r4.s64 = r11.s64 + -13328;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x826a4680
	sub_826A4680(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826A5CA0"))) PPC_WEAK_FUNC(sub_826A5CA0);
PPC_FUNC_IMPL(__imp__sub_826A5CA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,22056
	r11.s64 = r11.s64 + 22056;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r30,180(r31)
	PPC_STORE_U32(r31.u32 + 180, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x826911f8
	sub_826911F8(ctx, base);
	// lis r11,-32242
	r11.s64 = -2113011712;
	// li r29,0
	r29.s64 = 0;
	// stw r25,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r25.u32);
	// li r28,-1
	r28.s64 = -1;
	// stw r27,44(r30)
	PPC_STORE_U32(r30.u32 + 44, r27.u32);
	// addi r11,r11,-28372
	r11.s64 = r11.s64 + -28372;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r30,132
	ctx.r3.s64 = r30.s64 + 132;
	// stw r29,48(r30)
	PPC_STORE_U32(r30.u32 + 48, r29.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stw r28,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r28.u32);
	// stb r29,52(r30)
	PPC_STORE_U8(r30.u32 + 52, r29.u8);
	// stb r10,53(r30)
	PPC_STORE_U8(r30.u32 + 53, ctx.r10.u8);
	// stb r29,54(r30)
	PPC_STORE_U8(r30.u32 + 54, r29.u8);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// stb r29,120(r30)
	PPC_STORE_U8(r30.u32 + 120, r29.u8);
	// stw r28,124(r30)
	PPC_STORE_U32(r30.u32 + 124, r28.u32);
	// stw r29,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r29.u32);
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// bl 0x826a6d48
	sub_826A6D48(ctx, base);
	// addi r11,r30,160
	r11.s64 = r30.s64 + 160;
	// stw r29,148(r30)
	PPC_STORE_U32(r30.u32 + 148, r29.u32);
	// stb r29,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r29.u8);
	// stb r29,157(r30)
	PPC_STORE_U8(r30.u32 + 157, r29.u8);
	// stw r29,152(r30)
	PPC_STORE_U32(r30.u32 + 152, r29.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// std r28,176(r30)
	PPC_STORE_U64(r30.u32 + 176, r28.u64);
	// stw r29,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r29.u32);
	// beq 0x826a5d94
	if (cr0.eq) goto loc_826A5D94;
	// li r3,20000
	ctx.r3.s64 = 20000;
	// bl 0x82354fe8
	sub_82354FE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r5,20000
	ctx.r5.s64 = 20000;
	// stw r4,152(r30)
	PPC_STORE_U32(r30.u32 + 152, ctx.r4.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826A5D94:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,64(r30)
	PPC_STORE_U32(r30.u32 + 64, ctx.r3.u32);
	// bl 0x826d32f8
	sub_826D32F8(ctx, base);
	// stb r29,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r29.u8);
	// lis r29,-32137
	r29.s64 = -2106130432;
	// lwz r11,9028(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 9028);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x826a5e04
	if (!cr6.eq) goto loc_826A5E04;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826a8a80
	sub_826A8A80(ctx, base);
	// lis r11,-32150
	r11.s64 = -2106982400;
	// stw r3,9028(r29)
	PPC_STORE_U32(r29.u32 + 9028, ctx.r3.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r11,23472
	ctx.r5.s64 = r11.s64 + 23472;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x823b9a20
	sub_823B9A20(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x823b9c20
	sub_823B9C20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823b9fc0
	sub_823B9FC0(ctx, base);
loc_826A5E04:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r29,r11,-13364
	r29.s64 = r11.s64 + -13364;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// bl 0x82691228
	sub_82691228(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r4,r11,-13328
	ctx.r4.s64 = r11.s64 + -13328;
	// addi r5,r31,84
	ctx.r5.s64 = r31.s64 + 84;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x826a4680
	sub_826A4680(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82691230
	sub_82691230(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_826A5E50"))) PPC_WEAK_FUNC(sub_826A5E50);
PPC_FUNC_IMPL(__imp__sub_826A5E50) {
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
	// bl 0x82686578
	sub_82686578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5E78"))) PPC_WEAK_FUNC(sub_826A5E78);
PPC_FUNC_IMPL(__imp__sub_826A5E78) {
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

__attribute__((alias("__imp__sub_826A5EA4"))) PPC_WEAK_FUNC(sub_826A5EA4);
PPC_FUNC_IMPL(__imp__sub_826A5EA4) {
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
	// addi r3,r11,132
	ctx.r3.s64 = r11.s64 + 132;
	// bl 0x826a53d8
	sub_826A53D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5ED0"))) PPC_WEAK_FUNC(sub_826A5ED0);
PPC_FUNC_IMPL(__imp__sub_826A5ED0) {
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
	// addi r3,r11,160
	ctx.r3.s64 = r11.s64 + 160;
	// bl 0x826a5718
	sub_826A5718(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5EFC"))) PPC_WEAK_FUNC(sub_826A5EFC);
PPC_FUNC_IMPL(__imp__sub_826A5EFC) {
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
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5F24"))) PPC_WEAK_FUNC(sub_826A5F24);
PPC_FUNC_IMPL(__imp__sub_826A5F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A5F28"))) PPC_WEAK_FUNC(sub_826A5F28);
PPC_FUNC_IMPL(__imp__sub_826A5F28) {
	PPC_FUNC_PROLOGUE();
	// stb r4,53(r3)
	PPC_STORE_U8(ctx.r3.u32 + 53, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5F30"))) PPC_WEAK_FUNC(sub_826A5F30);
PPC_FUNC_IMPL(__imp__sub_826A5F30) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,54(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 54);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A5F38"))) PPC_WEAK_FUNC(sub_826A5F38);
PPC_FUNC_IMPL(__imp__sub_826A5F38) {
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
	// lwz r16,-28184(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28184);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-28372
	r11.s64 = r11.s64 + -28372;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stb r11,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r11.u8);
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// stb r29,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r29.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a5f98
	if (cr0.eq) goto loc_826A5F98;
	// lis r28,-32137
	r28.s64 = -2106130432;
loc_826A5F84:
	// lwz r3,9028(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 9028);
	// bl 0x826a8d18
	sub_826A8D18(ctx, base);
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a5f84
	if (!cr0.eq) goto loc_826A5F84;
loc_826A5F98:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5fb0
	if (cr0.eq) goto loc_826A5FB0;
	// bl 0x826d31a0
	sub_826D31A0(ctx, base);
loc_826A5FB0:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5fc0
	if (cr0.eq) goto loc_826A5FC0;
	// bl 0x826d2218
	sub_826D2218(ctx, base);
loc_826A5FC0:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5fd0
	if (cr0.eq) goto loc_826A5FD0;
	// bl 0x826d26c8
	sub_826D26C8(ctx, base);
loc_826A5FD0:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5fe0
	if (cr0.eq) goto loc_826A5FE0;
	// bl 0x826d3c40
	sub_826D3C40(ctx, base);
loc_826A5FE0:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5ff0
	if (cr0.eq) goto loc_826A5FF0;
	// bl 0x826d3d30
	sub_826D3D30(ctx, base);
loc_826A5FF0:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x826d3330
	sub_826D3330(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r3,r30,160
	ctx.r3.s64 = r30.s64 + 160;
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// bl 0x826a5718
	sub_826A5718(ctx, base);
	// addi r11,r30,132
	r11.s64 = r30.s64 + 132;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x826a605c
	goto loc_826A605C;
loc_826A6058:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_826A605C:
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x826a6058
	if (!cr0.eq) goto loc_826A6058;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a6090
	if (cr6.eq) goto loc_826A6090;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A6090:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,22056
	r11.s64 = r11.s64 + 22056;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A5F40"))) PPC_WEAK_FUNC(sub_826A5F40);
PPC_FUNC_IMPL(__imp__sub_826A5F40) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-28372
	r11.s64 = r11.s64 + -28372;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// li r29,0
	r29.s64 = 0;
	// stb r11,32(r30)
	PPC_STORE_U8(r30.u32 + 32, r11.u8);
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// stb r29,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r29.u8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a5f98
	if (cr0.eq) goto loc_826A5F98;
	// lis r28,-32137
	r28.s64 = -2106130432;
loc_826A5F84:
	// lwz r3,9028(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 9028);
	// bl 0x826a8d18
	sub_826A8D18(ctx, base);
	// lbz r11,32(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a5f84
	if (!cr0.eq) goto loc_826A5F84;
loc_826A5F98:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5fb0
	if (cr0.eq) goto loc_826A5FB0;
	// bl 0x826d31a0
	sub_826D31A0(ctx, base);
loc_826A5FB0:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5fc0
	if (cr0.eq) goto loc_826A5FC0;
	// bl 0x826d2218
	sub_826D2218(ctx, base);
loc_826A5FC0:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5fd0
	if (cr0.eq) goto loc_826A5FD0;
	// bl 0x826d26c8
	sub_826D26C8(ctx, base);
loc_826A5FD0:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5fe0
	if (cr0.eq) goto loc_826A5FE0;
	// bl 0x826d3c40
	sub_826D3C40(ctx, base);
loc_826A5FE0:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x826a5ff0
	if (cr0.eq) goto loc_826A5FF0;
	// bl 0x826d3d30
	sub_826D3D30(ctx, base);
loc_826A5FF0:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// bl 0x826d3330
	sub_826D3330(ctx, base);
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r29,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,68(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// addi r3,r30,160
	ctx.r3.s64 = r30.s64 + 160;
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// bl 0x826a5718
	sub_826A5718(ctx, base);
	// addi r11,r30,132
	r11.s64 = r30.s64 + 132;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x826a605c
	goto loc_826A605C;
loc_826A6058:
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
loc_826A605C:
	// subf r9,r10,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r10.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x826a6058
	if (!cr0.eq) goto loc_826A6058;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a6090
	if (cr6.eq) goto loc_826A6090;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,3
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7) != 0);
	r11.s64 = r11.s32 >> 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A6090:
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// addi r11,r11,22056
	r11.s64 = r11.s64 + 22056;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_826A60AC"))) PPC_WEAK_FUNC(sub_826A60AC);
PPC_FUNC_IMPL(__imp__sub_826A60AC) {
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
	// bl 0x82686578
	sub_82686578(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A60D4"))) PPC_WEAK_FUNC(sub_826A60D4);
PPC_FUNC_IMPL(__imp__sub_826A60D4) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
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
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826a6100
	if (cr6.eq) goto loc_826A6100;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// b 0x826a6108
	goto loc_826A6108;
loc_826A6100:
	// li r11,0
	r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_826A6108:
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

__attribute__((alias("__imp__sub_826A6120"))) PPC_WEAK_FUNC(sub_826A6120);
PPC_FUNC_IMPL(__imp__sub_826A6120) {
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
	// addi r3,r11,132
	ctx.r3.s64 = r11.s64 + 132;
	// bl 0x826a53d8
	sub_826A53D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A614C"))) PPC_WEAK_FUNC(sub_826A614C);
PPC_FUNC_IMPL(__imp__sub_826A614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6150"))) PPC_WEAK_FUNC(sub_826A6150);
PPC_FUNC_IMPL(__imp__sub_826A6150) {
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
	// lwz r16,-28096(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28096);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x826a6194
	if (cr6.lt) goto loc_826A6194;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x826a6198
	if (cr6.lt) goto loc_826A6198;
loc_826A6194:
	// li r11,0
	r11.s64 = 0;
loc_826A6198:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a61ec
	if (cr0.eq) goto loc_826A61EC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x826a4868
	sub_826A4868(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a58d8
	sub_826A58D8(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a6204
	if (cr6.eq) goto loc_826A6204;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x826a6204
	goto loc_826A6204;
loc_826A61EC:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a58d8
	sub_826A58D8(ctx, base);
loc_826A6204:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826A6158"))) PPC_WEAK_FUNC(sub_826A6158);
PPC_FUNC_IMPL(__imp__sub_826A6158) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r27,r8
	r27.u64 = ctx.r8.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x826a6194
	if (cr6.lt) goto loc_826A6194;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x826a6198
	if (cr6.lt) goto loc_826A6198;
loc_826A6194:
	// li r11,0
	r11.s64 = 0;
loc_826A6198:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a61ec
	if (cr0.eq) goto loc_826A61EC;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x826a4868
	sub_826A4868(ctx, base);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// addi r5,r31,88
	ctx.r5.s64 = r31.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a58d8
	sub_826A58D8(ctx, base);
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a6204
	if (cr6.eq) goto loc_826A6204;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82355020
	sub_82355020(ctx, base);
	// b 0x826a6204
	goto loc_826A6204;
loc_826A61EC:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a58d8
	sub_826A58D8(ctx, base);
loc_826A6204:
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_826A620C"))) PPC_WEAK_FUNC(sub_826A620C);
PPC_FUNC_IMPL(__imp__sub_826A620C) {
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
	// bl 0x826a4840
	sub_826A4840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6234"))) PPC_WEAK_FUNC(sub_826A6234);
PPC_FUNC_IMPL(__imp__sub_826A6234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6238"))) PPC_WEAK_FUNC(sub_826A6238);
PPC_FUNC_IMPL(__imp__sub_826A6238) {
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
	// bl 0x826a5f40
	sub_826A5F40(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a6268
	if (cr0.eq) goto loc_826A6268;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826A6268:
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

__attribute__((alias("__imp__sub_826A6284"))) PPC_WEAK_FUNC(sub_826A6284);
PPC_FUNC_IMPL(__imp__sub_826A6284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6288"))) PPC_WEAK_FUNC(sub_826A6288);
PPC_FUNC_IMPL(__imp__sub_826A6288) {
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
	// beq cr6,0x826a62dc
	if (cr6.eq) goto loc_826A62DC;
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
	// blt cr6,0x826a62c8
	if (cr6.lt) goto loc_826A62C8;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x826a5a68
	sub_826A5A68(ctx, base);
	// b 0x826a62dc
	goto loc_826A62DC;
loc_826A62C8:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// bl 0x826a6158
	sub_826A6158(ctx, base);
loc_826A62DC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A62EC"))) PPC_WEAK_FUNC(sub_826A62EC);
PPC_FUNC_IMPL(__imp__sub_826A62EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A62F0"))) PPC_WEAK_FUNC(sub_826A62F0);
PPC_FUNC_IMPL(__imp__sub_826A62F0) {
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
	// bge cr6,0x826a6340
	if (!cr6.lt) goto loc_826A6340;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x826a6354
	if (cr6.eq) goto loc_826A6354;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// bl 0x826a57c0
	sub_826A57C0(ctx, base);
	// b 0x826a6354
	goto loc_826A6354;
loc_826A6340:
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x826a6288
	sub_826A6288(ctx, base);
loc_826A6354:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6364"))) PPC_WEAK_FUNC(sub_826A6364);
PPC_FUNC_IMPL(__imp__sub_826A6364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6368"))) PPC_WEAK_FUNC(sub_826A6368);
PPC_FUNC_IMPL(__imp__sub_826A6368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,-28008(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -28008);
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
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r26,r30,4
	r26.s64 = r30.s64 + 4;
	// bne cr6,0x826a6398
	if (!cr6.eq) goto loc_826A6398;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_826A6398:
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826a63ac
	if (cr6.eq) goto loc_826A63AC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_826A63AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4208
	sub_826A4208(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a63c0
	if (!cr0.eq) goto loc_826A63C0;
	// b 0x826a662c
	goto loc_826A662C;
loc_826A63C0:
	// lbz r11,54(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 54);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a63dc
	if (cr0.eq) goto loc_826A63DC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826a663c
	if (cr6.eq) goto loc_826A663C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x826a6638
	goto loc_826A6638;
loc_826A63DC:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x826a63fc
	if (cr6.lt) goto loc_826A63FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a5128
	sub_826A5128(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a63fc
	if (!cr0.eq) goto loc_826A63FC;
	// b 0x826a662c
	goto loc_826A662C;
loc_826A63FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4108
	sub_826A4108(ctx, base);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stb r3,157(r30)
	PPC_STORE_U8(r30.u32 + 157, ctx.r3.u8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x826a64d0
	if (!cr6.lt) goto loc_826A64D0;
loc_826A6428:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4308
	sub_826A4308(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a6428
	if (!cr0.eq) goto loc_826A6428;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x826a6448
	if (!cr6.lt) goto loc_826A6448;
	// b 0x826a662c
	goto loc_826A662C;
loc_826A6448:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// addi r27,r30,160
	r27.s64 = r30.s64 + 160;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a62f0
	sub_826A62F0(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a64b0
	if (!cr6.gt) goto loc_826A64B0;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_826A648C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x826a51b8
	sub_826A51B8(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826a648c
	if (cr6.lt) goto loc_826A648C;
loc_826A64B0:
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a3e80
	sub_826A3E80(ctx, base);
	// b 0x826a662c
	goto loc_826A662C;
loc_826A64D0:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x826a6618
	if (!cr6.lt) goto loc_826A6618;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_826A64F4:
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x826a4eb0
	sub_826A4EB0(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a6560
	if (!cr6.gt) goto loc_826A6560;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826A652C:
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stwx r8,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x826a652c
	if (cr6.lt) goto loc_826A652C;
loc_826A6560:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ld r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 176);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r11,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r11.u32);
	// beq 0x826a65f8
	if (cr0.eq) goto loc_826A65F8;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a65d4
	if (cr6.eq) goto loc_826A65D4;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A65D4:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x826a64f4
	if (cr6.lt) goto loc_826A64F4;
	// b 0x826a6618
	goto loc_826A6618;
loc_826A65F8:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a6618
	if (cr6.eq) goto loc_826A6618;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A6618:
	// lis r11,-32137
	r11.s64 = -2106130432;
	// lwz r3,9028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 9028);
	// bl 0x826a8d18
	sub_826A8D18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r11.u8);
loc_826A662C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826a663c
	if (cr6.eq) goto loc_826A663C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_826A6638:
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_826A663C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A6370"))) PPC_WEAK_FUNC(sub_826A6370);
PPC_FUNC_IMPL(__imp__sub_826A6370) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r26,r30,4
	r26.s64 = r30.s64 + 4;
	// bne cr6,0x826a6398
	if (!cr6.eq) goto loc_826A6398;
	// mr r26,r29
	r26.u64 = r29.u64;
loc_826A6398:
	// stw r26,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r26.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826a63ac
	if (cr6.eq) goto loc_826A63AC;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82691228
	sub_82691228(ctx, base);
loc_826A63AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4208
	sub_826A4208(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a63c0
	if (!cr0.eq) goto loc_826A63C0;
	// b 0x826a662c
	goto loc_826A662C;
loc_826A63C0:
	// lbz r11,54(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 54);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a63dc
	if (cr0.eq) goto loc_826A63DC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826a663c
	if (cr6.eq) goto loc_826A663C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x826a6638
	goto loc_826A6638;
loc_826A63DC:
	// lwz r11,124(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 124);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x826a63fc
	if (cr6.lt) goto loc_826A63FC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a5128
	sub_826A5128(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a63fc
	if (!cr0.eq) goto loc_826A63FC;
	// b 0x826a662c
	goto loc_826A662C;
loc_826A63FC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4108
	sub_826A4108(ctx, base);
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// stb r3,157(r30)
	PPC_STORE_U8(r30.u32 + 157, ctx.r3.u8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x826a64d0
	if (!cr6.lt) goto loc_826A64D0;
loc_826A6428:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a4308
	sub_826A4308(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x826a6428
	if (!cr0.eq) goto loc_826A6428;
	// lwz r11,48(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x826a6448
	if (!cr6.lt) goto loc_826A6448;
	// b 0x826a662c
	goto loc_826A662C;
loc_826A6448:
	// lwz r11,72(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// stw r29,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r29.u32);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// stw r29,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r29.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,36(r30)
	PPC_STORE_U32(r30.u32 + 36, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r11.u32);
	// addi r27,r30,160
	r27.s64 = r30.s64 + 160;
	// addi r5,r31,104
	ctx.r5.s64 = r31.s64 + 104;
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x826a62f0
	sub_826A62F0(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a64b0
	if (!cr6.gt) goto loc_826A64B0;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_826A648C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r4,4096
	ctx.r4.s64 = 4096;
	// add r3,r28,r11
	ctx.r3.u64 = r28.u64 + r11.u64;
	// bl 0x826a51b8
	sub_826A51B8(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,12
	r28.s64 = r28.s64 + 12;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x826a648c
	if (cr6.lt) goto loc_826A648C;
loc_826A64B0:
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
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826a3e80
	sub_826A3E80(ctx, base);
	// b 0x826a662c
	goto loc_826A662C;
loc_826A64D0:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x826a6618
	if (!cr6.lt) goto loc_826A6618;
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
loc_826A64F4:
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stw r29,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r29.u32);
	// addi r6,r31,80
	ctx.r6.s64 = r31.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x826a4eb0
	sub_826A4EB0(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x826a6560
	if (!cr6.gt) goto loc_826A6560;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_826A652C:
	// lwz r8,160(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,184(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r8.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwz r7,88(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stwx r8,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// cmpw cr6,r9,r8
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, xer);
	// blt cr6,0x826a652c
	if (cr6.lt) goto loc_826A652C;
loc_826A6560:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ld r9,176(r30)
	ctx.r9.u64 = PPC_LOAD_U64(r30.u32 + 176);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// subf r11,r11,r7
	r11.s64 = ctx.r7.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// subf r5,r10,r11
	ctx.r5.s64 = r11.s64 - ctx.r10.s64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,184(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r11,184(r30)
	PPC_STORE_U32(r30.u32 + 184, r11.u32);
	// beq 0x826a65f8
	if (cr0.eq) goto loc_826A65F8;
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a65d4
	if (cr6.eq) goto loc_826A65D4;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A65D4:
	// lwz r11,160(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 160);
	// lwz r10,184(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 184);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x826a64f4
	if (cr6.lt) goto loc_826A64F4;
	// b 0x826a6618
	goto loc_826A6618;
loc_826A65F8:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x826a6618
	if (cr6.eq) goto loc_826A6618;
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// subf r11,r4,r11
	r11.s64 = r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_826A6618:
	// lis r11,-32137
	r11.s64 = -2106130432;
	// lwz r3,9028(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 9028);
	// bl 0x826a8d18
	sub_826A8D18(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,156(r30)
	PPC_STORE_U8(r30.u32 + 156, r11.u8);
loc_826A662C:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x826a663c
	if (cr6.eq) goto loc_826A663C;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
loc_826A6638:
	// bl 0x82691230
	sub_82691230(ctx, base);
loc_826A663C:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_826A6644"))) PPC_WEAK_FUNC(sub_826A6644);
PPC_FUNC_IMPL(__imp__sub_826A6644) {
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
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// bl 0x82353980
	sub_82353980(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A666C"))) PPC_WEAK_FUNC(sub_826A666C);
PPC_FUNC_IMPL(__imp__sub_826A666C) {
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
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// bl 0x826a4840
	sub_826A4840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6694"))) PPC_WEAK_FUNC(sub_826A6694);
PPC_FUNC_IMPL(__imp__sub_826A6694) {
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

__attribute__((alias("__imp__sub_826A66BC"))) PPC_WEAK_FUNC(sub_826A66BC);
PPC_FUNC_IMPL(__imp__sub_826A66BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A66C0"))) PPC_WEAK_FUNC(sub_826A66C0);
PPC_FUNC_IMPL(__imp__sub_826A66C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r11,-13320(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -13320);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_826A66D0"))) PPC_WEAK_FUNC(sub_826A66D0);
PPC_FUNC_IMPL(__imp__sub_826A66D0) {
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
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// addi r10,r10,-27860
	ctx.r10.s64 = ctx.r10.s64 + -27860;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// ori r5,r5,32768
	ctx.r5.u64 = ctx.r5.u64 | 32768;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r11,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r11.u8);
	// addi r3,r31,5
	ctx.r3.s64 = r31.s64 + 5;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r11,0
	r11.s64 = 0;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r11,32776
	ctx.r10.u64 = r11.u64 | 32776;
	// lis r11,0
	r11.s64 = 0;
	// ori r8,r8,32784
	ctx.r8.u64 = ctx.r8.u64 | 32784;
	// ori r9,r11,32780
	ctx.r9.u64 = r11.u64 | 32780;
	// li r11,0
	r11.s64 = 0;
	// stwx r30,r31,r10
	PPC_STORE_U32(r31.u32 + ctx.r10.u32, r30.u32);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r7,r7,32788
	ctx.r7.u64 = ctx.r7.u64 | 32788;
	// ori r10,r10,32792
	ctx.r10.u64 = ctx.r10.u64 | 32792;
	// stwx r11,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r11.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r11,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r11.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,32793
	ctx.r9.u64 = ctx.r9.u64 | 32793;
	// ori r8,r8,32796
	ctx.r8.u64 = ctx.r8.u64 | 32796;
	// stwx r11,r31,r7
	PPC_STORE_U32(r31.u32 + ctx.r7.u32, r11.u32);
	// stbx r11,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, r11.u8);
	// lis r7,0
	ctx.r7.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r7,r7,32800
	ctx.r7.u64 = ctx.r7.u64 | 32800;
	// stbx r11,r31,r9
	PPC_STORE_U8(r31.u32 + ctx.r9.u32, r11.u8);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stwx r11,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r11.u32);
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,32801
	ctx.r10.u64 = ctx.r10.u64 | 32801;
	// ori r9,r9,32804
	ctx.r9.u64 = ctx.r9.u64 | 32804;
	// ori r8,r8,32808
	ctx.r8.u64 = ctx.r8.u64 | 32808;
	// stbx r11,r31,r7
	PPC_STORE_U8(r31.u32 + ctx.r7.u32, r11.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stbx r11,r31,r10
	PPC_STORE_U8(r31.u32 + ctx.r10.u32, r11.u8);
	// stwx r11,r31,r9
	PPC_STORE_U32(r31.u32 + ctx.r9.u32, r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(r31.u32 + ctx.r8.u32, r11.u32);
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

__attribute__((alias("__imp__sub_826A67B8"))) PPC_WEAK_FUNC(sub_826A67B8);
PPC_FUNC_IMPL(__imp__sub_826A67B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32242
	r11.s64 = -2113011712;
	// addi r11,r11,-27860
	r11.s64 = r11.s64 + -27860;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A67C8"))) PPC_WEAK_FUNC(sub_826A67C8);
PPC_FUNC_IMPL(__imp__sub_826A67C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,0
	r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,32780
	r11.u64 = r11.u64 | 32780;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A67E4"))) PPC_WEAK_FUNC(sub_826A67E4);
PPC_FUNC_IMPL(__imp__sub_826A67E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A67E8"))) PPC_WEAK_FUNC(sub_826A67E8);
PPC_FUNC_IMPL(__imp__sub_826A67E8) {
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
	// addis r31,r3,1
	r31.s64 = ctx.r3.s64 + 65536;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r31,r31,-32756
	r31.s64 = r31.s64 + -32756;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// addi r3,r11,5
	ctx.r3.s64 = r11.s64 + 5;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_826A683C"))) PPC_WEAK_FUNC(sub_826A683C);
PPC_FUNC_IMPL(__imp__sub_826A683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6840"))) PPC_WEAK_FUNC(sub_826A6840);
PPC_FUNC_IMPL(__imp__sub_826A6840) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32784
	r11.u64 = r11.u64 | 32784;
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r3,r11,1
	ctx.r3.u64 = r11.u64 ^ 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6860"))) PPC_WEAK_FUNC(sub_826A6860);
PPC_FUNC_IMPL(__imp__sub_826A6860) {
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
	// addis r31,r3,1
	r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-32752
	r31.s64 = r31.s64 + -32752;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x826a68b8
	if (cr6.eq) goto loc_826A68B8;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bne cr6,0x826a68a4
	if (!cr6.eq) goto loc_826A68A4;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x826a68b0
	goto loc_826A68B0;
loc_826A68A4:
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_826A68B0:
	// li r11,2
	r11.s64 = 2;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826A68B8:
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

__attribute__((alias("__imp__sub_826A68CC"))) PPC_WEAK_FUNC(sub_826A68CC);
PPC_FUNC_IMPL(__imp__sub_826A68CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A68D0"))) PPC_WEAK_FUNC(sub_826A68D0);
PPC_FUNC_IMPL(__imp__sub_826A68D0) {
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
	// addis r31,r3,1
	r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-32752
	r31.s64 = r31.s64 + -32752;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// bne cr6,0x826a6910
	if (!cr6.eq) goto loc_826A6910;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,48(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,3
	r11.s64 = 3;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_826A6910:
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

__attribute__((alias("__imp__sub_826A6924"))) PPC_WEAK_FUNC(sub_826A6924);
PPC_FUNC_IMPL(__imp__sub_826A6924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6928"))) PPC_WEAK_FUNC(sub_826A6928);
PPC_FUNC_IMPL(__imp__sub_826A6928) {
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
	// addis r29,r3,1
	r29.s64 = ctx.r3.s64 + 65536;
	// addi r29,r29,-32735
	r29.s64 = r29.s64 + -32735;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a6984
	if (!cr0.eq) goto loc_826A6984;
	// addis r30,r3,1
	r30.s64 = ctx.r3.s64 + 65536;
	// lis r11,0
	r11.s64 = 0;
	// addi r30,r30,-32756
	r30.s64 = r30.s64 + -32756;
	// ori r31,r11,32768
	r31.u64 = r11.u64 | 32768;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpw cr6,r11,r31
	cr6.compare<int32_t>(r11.s32, r31.s32, xer);
	// bge cr6,0x826a697c
	if (!cr6.lt) goto loc_826A697C;
	// add r10,r11,r3
	ctx.r10.u64 = r11.u64 + ctx.r3.u64;
	// subf r5,r11,r31
	ctx.r5.s64 = r31.s64 - r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 5;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_826A697C:
	// li r11,1
	r11.s64 = 1;
	// stb r11,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r11.u8);
loc_826A6984:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_826A698C"))) PPC_WEAK_FUNC(sub_826A698C);
PPC_FUNC_IMPL(__imp__sub_826A698C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6990"))) PPC_WEAK_FUNC(sub_826A6990);
PPC_FUNC_IMPL(__imp__sub_826A6990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,0
	r11.s64 = 0;
	// ori r11,r11,32784
	r11.u64 = r11.u64 | 32784;
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826a69ac
	if (!cr6.eq) goto loc_826A69AC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_826A69AC:
	// lis r11,0
	r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r9,r3,1
	ctx.r9.s64 = ctx.r3.s64 + 65536;
	// ori r11,r11,32796
	r11.u64 = r11.u64 | 32796;
	// ori r10,r10,32808
	ctx.r10.u64 = ctx.r10.u64 | 32808;
	// addi r9,r9,-32760
	ctx.r9.s64 = ctx.r9.s64 + -32760;
	// lwzx r11,r3,r11
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + r11.u32);
	// lwzx r7,r3,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r11,14,0,17
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// rotlwi r6,r11,1
	ctx.r6.u64 = __builtin_rotateleft32(r11.u32, 1);
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
	// andc r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 & ~ctx.r6.u64;
	// add r3,r11,r7
	ctx.r3.u64 = r11.u64 + ctx.r7.u64;
	// twllei r10,0
	// twlgei r6,-1
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r11,r11,14,0,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0xFFFFC000;
loc_826A6A08:
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// cmpw cr6,r3,r8
	cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, xer);
	// bge cr6,0x826a6a08
	if (!cr6.lt) goto loc_826A6A08;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6A18"))) PPC_WEAK_FUNC(sub_826A6A18);
PPC_FUNC_IMPL(__imp__sub_826A6A18) {
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
	// lis r11,-32242
	r11.s64 = -2113011712;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27860
	r11.s64 = r11.s64 + -27860;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x826a6a44
	if (cr0.eq) goto loc_826A6A44;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_826A6A44:
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

__attribute__((alias("__imp__sub_826A6A5C"))) PPC_WEAK_FUNC(sub_826A6A5C);
PPC_FUNC_IMPL(__imp__sub_826A6A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6A60"))) PPC_WEAK_FUNC(sub_826A6A60);
PPC_FUNC_IMPL(__imp__sub_826A6A60) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addis r19,r31,1
	r19.s64 = r31.s64 + 65536;
	// ori r24,r10,32788
	r24.u64 = ctx.r10.u64 | 32788;
	// addi r19,r19,-32752
	r19.s64 = r19.s64 + -32752;
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r20,1
	r20.s64 = 1;
	// ori r30,r10,32792
	r30.u64 = ctx.r10.u64 | 32792;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// ori r27,r10,32776
	r27.u64 = ctx.r10.u64 | 32776;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x826a6b1c
	if (cr6.lt) goto loc_826A6B1C;
	// beq cr6,0x826a6b20
	if (cr6.eq) goto loc_826A6B20;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bge cr6,0x826a6b20
	if (!cr6.lt) goto loc_826A6B20;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,0
	r11.s64 = 0;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 4);
	// ori r11,r11,32808
	r11.u64 = r11.u64 | 32808;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// srawi r10,r3,14
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 14;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// stwx r3,r31,r11
	PPC_STORE_U32(r31.u32 + r11.u32, ctx.r3.u32);
	// bne 0x826a6aec
	if (!cr0.eq) goto loc_826A6AEC;
	// lwzx r11,r31,r24
	r11.u64 = PPC_LOAD_U32(r31.u32 + r24.u32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x826a6aec
	if (cr6.eq) goto loc_826A6AEC;
	// stbx r20,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r20.u8);
loc_826A6AEC:
	// lwzx r9,r31,r24
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r24.u32);
	// lwzx r11,r31,r27
	r11.u64 = PPC_LOAD_U32(r31.u32 + r27.u32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r9,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r9.s64 = r11.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x826a6b1c
	if (cr6.eq) goto loc_826A6B1C;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// neg r11,r11
	r11.s64 = -r11.s64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bne cr6,0x826a6b20
	if (!cr6.eq) goto loc_826A6B20;
loc_826A6B1C:
	// stbx r20,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r20.u8);
loc_826A6B20:
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r26,r31,r30
	r26.u64 = r31.u64 + r30.u64;
	// ori r21,r10,32780
	r21.u64 = ctx.r10.u64 | 32780;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r22,r10,32768
	r22.u64 = ctx.r10.u64 | 32768;
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r23,r10,32800
	r23.u64 = ctx.r10.u64 | 32800;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a6b64
	if (cr0.eq) goto loc_826A6B64;
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x826a6b64
	if (cr6.eq) goto loc_826A6B64;
	// lwzx r10,r31,r21
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r21.u32);
	// subf. r10,r10,r22
	ctx.r10.s64 = r22.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x826a6b64
	if (cr0.eq) goto loc_826A6B64;
	// stbx r20,r31,r23
	PPC_STORE_U8(r31.u32 + r23.u32, r20.u8);
loc_826A6B64:
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// ori r25,r10,32793
	r25.u64 = ctx.r10.u64 | 32793;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x826a6c0c
	if (cr6.eq) goto loc_826A6C0C;
	// lwzx r11,r31,r21
	r11.u64 = PPC_LOAD_U32(r31.u32 + r21.u32);
	// cmpwi cr6,r11,16384
	cr6.compare<int32_t>(r11.s32, 16384, xer);
	// blt cr6,0x826a6c0c
	if (cr6.lt) goto loc_826A6C0C;
	// add r29,r31,r25
	r29.u64 = r31.u64 + r25.u64;
	// lbz r11,0(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x826a6c0c
	if (!cr0.eq) goto loc_826A6C0C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r30,r31,r24
	r30.u64 = r31.u64 + r24.u64;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r4,r31,5
	ctx.r4.s64 = r31.s64 + 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,1
	r11.s64 = 65536;
	// ori r9,r11,34464
	ctx.r9.u64 = r11.u64 | 34464;
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// addi r11,r11,-32740
	r11.s64 = r11.s64 + -32740;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x826a6be8
	if (cr6.lt) goto loc_826A6BE8;
	// lwzx r9,r31,r27
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + r27.u32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826A6BE8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwzx r10,r31,r27
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + r27.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r28,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r28.u8);
	// stb r20,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r20.u8);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bne cr6,0x826a6c0c
	if (!cr6.eq) goto loc_826A6C0C;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
loc_826A6C0C:
	// add r30,r31,r25
	r30.u64 = r31.u64 + r25.u64;
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a6cc8
	if (cr0.eq) goto loc_826A6CC8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,64(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x826a6cc8
	if (cr0.eq) goto loc_826A6CC8;
	// lwzx r11,r31,r24
	r11.u64 = PPC_LOAD_U32(r31.u32 + r24.u32);
	// stb r28,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r28.u8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stbx r28,r31,r23
	PPC_STORE_U8(r31.u32 + r23.u32, r28.u8);
	// bne cr6,0x826a6c60
	if (!cr6.eq) goto loc_826A6C60;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x826a6c60
	if (!cr6.eq) goto loc_826A6C60;
	// stw r20,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r20.u32);
	// stb r28,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r28.u8);
loc_826A6C60:
	// add r30,r31,r21
	r30.u64 = r31.u64 + r21.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addic. r5,r11,-16384
	xer.ca = r11.u32 > 16383;
	ctx.r5.s64 = r11.s64 + -16384;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x826a6c7c
	if (cr0.eq) goto loc_826A6C7C;
	// addi r4,r31,16389
	ctx.r4.s64 = r31.s64 + 16389;
	// addi r3,r31,5
	ctx.r3.s64 = r31.s64 + 5;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_826A6C7C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r10,r10,32801
	ctx.r10.u64 = ctx.r10.u64 | 32801;
	// addi r11,r11,-16384
	r11.s64 = r11.s64 + -16384;
	// lbzx r10,r31,r10
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x826a6cc8
	if (cr0.eq) goto loc_826A6CC8;
	// add r10,r11,r31
	ctx.r10.u64 = r11.u64 + r31.u64;
	// subf r5,r11,r22
	ctx.r5.s64 = r22.s64 - r11.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r10,5
	ctx.r3.s64 = ctx.r10.s64 + 5;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addis r11,r31,1
	r11.s64 = r31.s64 + 65536;
	// stw r22,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r22.u32);
	// addi r11,r11,-32732
	r11.s64 = r11.s64 + -32732;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_826A6CC8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_826A6CD0"))) PPC_WEAK_FUNC(sub_826A6CD0);
PPC_FUNC_IMPL(__imp__sub_826A6CD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rotlwi r10,r4,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// twllei r9,0
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twlgei r10,-1
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// divw. r11,r4,r9
	r11.s32 = ctx.r4.s32 / ctx.r9.s32;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// bge 0x826a6d0c
	if (!cr0.lt) goto loc_826A6D0C;
	// li r11,0
	r11.s64 = 0;
	// b 0x826a6d18
	goto loc_826A6D18;
loc_826A6D0C:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x826a6d18
	if (!cr6.gt) goto loc_826A6D18;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_826A6D18:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6D3C"))) PPC_WEAK_FUNC(sub_826A6D3C);
PPC_FUNC_IMPL(__imp__sub_826A6D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6D40"))) PPC_WEAK_FUNC(sub_826A6D40);
PPC_FUNC_IMPL(__imp__sub_826A6D40) {
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
	// lwz r16,-27784(r13)
	r16.u64 = PPC_LOAD_U32(ctx.r13.u32 + -27784);
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
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r11,0
	r11.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x822298b8
	sub_822298B8(ctx, base);
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

__attribute__((alias("__imp__sub_826A6D48"))) PPC_WEAK_FUNC(sub_826A6D48);
PPC_FUNC_IMPL(__imp__sub_826A6D48) {
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
	// li r10,1000
	ctx.r10.s64 = 1000;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// li r11,0
	r11.s64 = 0;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x822298b8
	sub_822298B8(ctx, base);
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

__attribute__((alias("__imp__sub_826A6DB0"))) PPC_WEAK_FUNC(sub_826A6DB0);
PPC_FUNC_IMPL(__imp__sub_826A6DB0) {
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
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// bl 0x82267180
	sub_82267180(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_826A6DDC"))) PPC_WEAK_FUNC(sub_826A6DDC);
PPC_FUNC_IMPL(__imp__sub_826A6DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_826A6DE0"))) PPC_WEAK_FUNC(sub_826A6DE0);
PPC_FUNC_IMPL(__imp__sub_826A6DE0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82359400
	sub_82359400(ctx, base);
	// addi r4,r30,4
	ctx.r4.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8222a5b8
	sub_8222A5B8(ctx, base);
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

__attribute__((alias("__imp__sub_826A6E40"))) PPC_WEAK_FUNC(sub_826A6E40);
PPC_FUNC_IMPL(__imp__sub_826A6E40) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r10,-27736
	ctx.r4.s64 = ctx.r10.s64 + -27736;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stb r11,12(r31)
	PPC_STORE_U8(r31.u32 + 12, r11.u8);
	// stb r9,20(r31)
	PPC_STORE_U8(r31.u32 + 20, ctx.r9.u8);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// bl 0x82354930
	sub_82354930(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

__attribute__((alias("__imp__sub_826A6EA8"))) PPC_WEAK_FUNC(sub_826A6EA8);
PPC_FUNC_IMPL(__imp__sub_826A6EA8) {
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
	// lbz r11,20(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x826a6ed0
	if (cr0.eq) goto loc_826A6ED0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_826A6ED0:
	// li r11,0
	r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
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

