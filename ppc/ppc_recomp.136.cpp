#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823D83C0"))) PPC_WEAK_FUNC(sub_823D83C0);
PPC_FUNC_IMPL(__imp__sub_823D83C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,-29800(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -29800);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d83e0
	if (!cr6.eq) goto loc_823D83E0;
	// li r10,15
	ctx.r10.s64 = 15;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,-29800(r11)
	PPC_STORE_U32(r11.u32 + -29800, ctx.r10.u32);
	// blr 
	return;
loc_823D83E0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D83EC"))) PPC_WEAK_FUNC(sub_823D83EC);
PPC_FUNC_IMPL(__imp__sub_823D83EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D83F0"))) PPC_WEAK_FUNC(sub_823D83F0);
PPC_FUNC_IMPL(__imp__sub_823D83F0) {
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
	// lwz r11,21508(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21508);
	// lwz r10,16408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16408);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823d8420
	if (!cr6.eq) goto loc_823D8420;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823d8440
	goto loc_823D8440;
loc_823D8420:
	// lwz r11,21496(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21496);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x823d8458
	if (cr6.eq) goto loc_823D8458;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d843c
	if (!cr6.eq) goto loc_823D843C;
	// li r11,1
	r11.s64 = 1;
	// stw r11,21496(r30)
	PPC_STORE_U32(r30.u32 + 21496, r11.u32);
loc_823D843C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D8440:
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
loc_823D8458:
	// lwz r10,21504(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 21504);
	// lwz r11,21500(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21500);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823d843c
	if (cr6.eq) goto loc_823D843C;
	// addi r11,r11,5369
	r11.s64 = r11.s64 + 5369;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x823c5280
	sub_823C5280(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823d843c
	if (!cr0.eq) goto loc_823D843C;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// li r5,480
	ctx.r5.s64 = 480;
	// addi r31,r11,-31060
	r31.s64 = r11.s64 + -31060;
	// addi r4,r31,484
	ctx.r4.s64 = r31.s64 + 484;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,21500(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21500);
	// addi r4,r31,484
	ctx.r4.s64 = r31.s64 + 484;
	// addi r11,r11,5369
	r11.s64 = r11.s64 + 5369;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwzx r3,r10,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
	// bl 0x823c6938
	sub_823C6938(ctx, base);
	// lwz r11,21500(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 21500);
	// lwz r10,21492(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 21492);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bne cr6,0x823d84f0
	if (!cr6.eq) goto loc_823D84F0;
	// li r11,0
	r11.s64 = 0;
	// b 0x823d84f4
	goto loc_823D84F4;
loc_823D84F0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823D84F4:
	// lwz r10,16408(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16408);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,21500(r30)
	PPC_STORE_U32(r30.u32 + 21500, r11.u32);
	// stw r10,21508(r30)
	PPC_STORE_U32(r30.u32 + 21508, ctx.r10.u32);
	// b 0x823d8440
	goto loc_823D8440;
}

__attribute__((alias("__imp__sub_823D8508"))) PPC_WEAK_FUNC(sub_823D8508);
PPC_FUNC_IMPL(__imp__sub_823D8508) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	r11.s64 = 2147418112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplwi cr6,r31,18
	cr6.compare<uint32_t>(r31.u32, 18, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bgt cr6,0x823d8b84
	if (cr6.gt) goto loc_823D8B84;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-15800
	r12.s64 = r12.s64 + -15800;
	// rlwinm r0,r31,1,0,30
	r0.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32194
	r12.s64 = -2109865984;
	// addi r12,r12,-31388
	r12.s64 = r12.s64 + -31388;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r31.u64) {
	case 0:
		goto loc_823D8564;
	case 1:
		goto loc_823D8584;
	case 2:
		goto loc_823D85B0;
	case 3:
		goto loc_823D85C8;
	case 4:
		goto loc_823D862C;
	case 5:
		goto loc_823D8648;
	case 6:
		goto loc_823D8688;
	case 7:
		goto loc_823D872C;
	case 8:
		goto loc_823D87D8;
	case 9:
		goto loc_823D8858;
	case 10:
		goto loc_823D8900;
	case 11:
		goto loc_823D895C;
	case 12:
		goto loc_823D89E8;
	case 13:
		goto loc_823D8A48;
	case 14:
		goto loc_823D8A9C;
	case 15:
		goto loc_823D8AF0;
	case 16:
		goto loc_823D8B54;
	case 17:
		goto loc_823D871C;
	case 18:
		goto loc_823D872C;
	default:
		__builtin_unreachable();
	}
loc_823D8564:
	// lwz r11,21420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// lfs f0,21436(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21436);
	f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// b 0x823d8b88
	goto loc_823D8B88;
loc_823D8584:
	// lwz r11,21420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lfs f0,21432(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21432);
	f0.f64 = double(temp.f32);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 / ctx.f13.f64));
	// b 0x823d8b88
	goto loc_823D8B88;
loc_823D85B0:
	// lwz r11,16408(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16408);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_823D85BC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// b 0x823d8b88
	goto loc_823D8B88;
loc_823D85C8:
	// lwz r11,21456(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21456);
	// lwz r10,21420(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_823D85E0:
	// fcfid f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fdivs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 / ctx.f13.f64));
loc_823D85F4:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,17320(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17320);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f12,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x823d8618
	if (!cr6.lt) goto loc_823D8618;
	// fmr f0,f12
	f0.f64 = ctx.f12.f64;
	// b 0x823d8624
	goto loc_823D8624;
loc_823D8618:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, f0.f64);
	// bgt cr6,0x823d8624
	if (cr6.gt) goto loc_823D8624;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_823D8624:
	// fmr f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f0.f64;
	// b 0x823d8b88
	goto loc_823D8B88;
loc_823D862C:
	// lwz r11,21460(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21460);
	// lwz r10,21420(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823d85e0
	goto loc_823D85E0;
loc_823D8648:
	// lwz r11,21420(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21420);
	// lwz r10,21460(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21460);
	// lwz r9,21456(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21456);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x823d85f4
	goto loc_823D85F4;
loc_823D8688:
	// lwz r11,21464(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21464);
	// lwz r10,10768(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10768);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r7,r11,-1
	ctx.r7.s64 = r11.s64 + -1;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// clrlwi r8,r11,29
	ctx.r8.u64 = r11.u32 & 0x7;
	// addi r6,r9,16
	ctx.r6.s64 = ctx.r9.s64 + 16;
	// clrlwi r9,r7,29
	ctx.r9.u64 = ctx.r7.u32 & 0x7;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwbrx r31,r7,r10
	r31.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32));
	// lwbrx r8,r8,r10
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32));
	// lwbrx r30,r9,r10
	r30.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32));
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// beq cr6,0x823d8b84
	if (cr6.eq) goto loc_823D8B84;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// stw r11,21464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 21464, r11.u32);
	// beq cr6,0x823d8b84
	if (cr6.eq) goto loc_823D8B84;
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x823d8b84
	if (cr6.eq) goto loc_823D8B84;
	// li r11,1
	r11.s64 = 1;
	// cmpld cr6,r10,r30
	cr6.compare<uint64_t>(ctx.r10.u64, r30.u64, xer);
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// bgt cr6,0x823d8700
	if (cr6.gt) goto loc_823D8700;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_823D8700:
	// cmpld cr6,r31,r10
	cr6.compare<uint64_t>(r31.u64, ctx.r10.u64, xer);
	// bgt cr6,0x823d870c
	if (cr6.gt) goto loc_823D870C;
	// add r31,r31,r11
	r31.u64 = r31.u64 + r11.u64;
loc_823D870C:
	// subf r3,r10,r31
	ctx.r3.s64 = r31.s64 - ctx.r10.s64;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// subf r3,r30,r31
	ctx.r3.s64 = r31.s64 - r30.s64;
	// b 0x823d8844
	goto loc_823D8844;
loc_823D871C:
	// lwz r11,21512(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21512);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// b 0x823d85bc
	goto loc_823D85BC;
loc_823D872C:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// cmpwi cr6,r31,7
	cr6.compare<int32_t>(r31.s32, 7, xer);
	// addi r11,r11,-31060
	r11.s64 = r11.s64 + -31060;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r30,r10,r9
	r30.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,492(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 492);
	// lwz r11,496(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 496);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// bne cr6,0x823d87a8
	if (!cr6.eq) goto loc_823D87A8;
	// ld r11,88(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
loc_823D87A8:
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x823d8b84
	if (cr6.eq) goto loc_823D8B84;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 / ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// b 0x823d85f4
	goto loc_823D85F4;
loc_823D87D8:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-31060
	r11.s64 = r11.s64 + -31060;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,604(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 604);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r31,r10,r9
	r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// beq cr6,0x823d8b84
	if (cr6.eq) goto loc_823D8B84;
	// lwz r10,132(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// lwz r9,136(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 136);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,612(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 612);
	// lwz r11,616(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 616);
loc_823D8830:
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823D8844:
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 / ctx.f1.f64;
loc_823D8850:
	// frsp f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64));
	// b 0x823d85f4
	goto loc_823D85F4;
loc_823D8858:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r31,r11,-31060
	r31.s64 = r11.s64 + -31060;
	// lwz r11,124(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lwz r10,604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// cmpldi cr6,r3,0
	cr6.compare<uint64_t>(ctx.r3.u64, 0, xer);
	// beq cr6,0x823d8b84
	if (cr6.eq) goto loc_823D8B84;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,616(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 616);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lwz r10,612(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 612);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lwz r10,144(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// fsub f30,f31,f1
	ctx.fpscr.disableFlushMode();
	f30.f64 = f31.f64 - ctx.f1.f64;
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r9,624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lwz r10,620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 620);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x826a7080
	sub_826A7080(ctx, base);
	// fsub f0,f30,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = f30.f64 - ctx.f1.f64;
	// fdiv f0,f0,f31
	f0.f64 = f0.f64 / f31.f64;
	// b 0x823d8850
	goto loc_823D8850;
loc_823D8900:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-31060
	r11.s64 = r11.s64 + -31060;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// lwz r9,128(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,608(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 608);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,604(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 604);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r31,r10,r9
	r31.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpldi cr6,r31,0
	cr6.compare<uint64_t>(r31.u64, 0, xer);
	// beq cr6,0x823d8b84
	if (cr6.eq) goto loc_823D8B84;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 140);
	// lwz r9,144(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 144);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,620(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 620);
	// lwz r11,624(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 624);
	// b 0x823d8830
	goto loc_823D8830;
loc_823D895C:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-31060
	r11.s64 = r11.s64 + -31060;
	// lwz r10,444(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 444);
	// lwz r9,448(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 448);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,928(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 928);
	// lwz r7,488(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,924(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 924);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,436(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 436);
	// lwz r9,440(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 440);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,916(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 916);
	// lwz r11,920(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 920);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
loc_823D89E0:
	// bl 0x823d8350
	sub_823D8350(ctx, base);
	// b 0x823d8b88
	goto loc_823D8B88;
loc_823D89E8:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-31060
	r11.s64 = r11.s64 + -31060;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,452(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 452);
	// lwz r9,456(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 456);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,932(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 932);
	// lwz r11,936(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 936);
loc_823D8A38:
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// b 0x823d89e0
	goto loc_823D89E0;
loc_823D8A48:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-31060
	r11.s64 = r11.s64 + -31060;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,236(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r9,240(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,716(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 716);
	// lwz r11,720(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 720);
	// b 0x823d8a38
	goto loc_823D8A38;
loc_823D8A9C:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-31060
	r11.s64 = r11.s64 + -31060;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,488(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 488);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,484(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// subf r4,r10,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r9,96(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,572(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 572);
	// lwz r11,576(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 576);
	// b 0x823d8a38
	goto loc_823D8A38;
loc_823D8AF0:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-31060
	r11.s64 = r11.s64 + -31060;
	// lwz r10,460(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 460);
	// lwz r9,464(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 464);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,944(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 944);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,940(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 940);
loc_823D8B1C:
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// rldicr r3,r9,1,62
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lwz r8,484(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// lwz r11,488(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 488);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// subf r4,r10,r11
	ctx.r4.s64 = r11.s64 - ctx.r10.s64;
	// b 0x823d89e0
	goto loc_823D89E0;
loc_823D8B54:
	// bl 0x823d83f0
	sub_823D83F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823d8b84
	if (cr0.eq) goto loc_823D8B84;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-31060
	r11.s64 = r11.s64 + -31060;
	// lwz r10,468(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 468);
	// lwz r9,472(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 472);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,952(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 952);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lwz r9,948(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 948);
	// b 0x823d8b1c
	goto loc_823D8B1C;
loc_823D8B84:
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
loc_823D8B88:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_823D8BA8"))) PPC_WEAK_FUNC(sub_823D8BA8);
PPC_FUNC_IMPL(__imp__sub_823D8BA8) {
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
	// bl 0x823d2520
	sub_823D2520(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r3,-16812(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + -16812);
	// bl 0x823de340
	sub_823DE340(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d8c00
	if (cr0.eq) goto loc_823D8C00;
	// stw r3,21380(r31)
	PPC_STORE_U32(r31.u32 + 21380, ctx.r3.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,10768(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10768);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// lwz r8,40(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D8C00:
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

__attribute__((alias("__imp__sub_823D8C14"))) PPC_WEAK_FUNC(sub_823D8C14);
PPC_FUNC_IMPL(__imp__sub_823D8C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D8C18"))) PPC_WEAK_FUNC(sub_823D8C18);
PPC_FUNC_IMPL(__imp__sub_823D8C18) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r30,r11,-30096
	r30.s64 = r11.s64 + -30096;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lis r27,-32256
	r27.s64 = -2113929216;
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// addi r11,r11,-11
	r11.s64 = r11.s64 + -11;
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// bgt cr6,0x823d8fe8
	if (cr6.gt) goto loc_823D8FE8;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,-15760
	r12.s64 = r12.s64 + -15760;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32194
	r12.s64 = -2109865984;
	// addi r12,r12,-29584
	r12.s64 = r12.s64 + -29584;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823D8D70;
	case 1:
		goto loc_823D8DA0;
	case 2:
		goto loc_823D8C70;
	case 3:
		goto loc_823D8CB4;
	case 4:
		goto loc_823D8CA8;
	case 5:
		goto loc_823D8DF8;
	case 6:
		goto loc_823D8E6C;
	case 7:
		goto loc_823D8EFC;
	case 8:
		goto loc_823D8F64;
	default:
		__builtin_unreachable();
	}
loc_823D8C70:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15460
	ctx.r3.s64 = r11.s64 + -15460;
loc_823D8C78:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826a8920
	sub_826A8920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823d8c98
	if (!cr0.lt) goto loc_823D8C98;
loc_823D8C8C:
	// li r11,0
	r11.s64 = 0;
loc_823D8C90:
	// stw r11,296(r30)
	PPC_STORE_U32(r30.u32 + 296, r11.u32);
	// b 0x823d8fe8
	goto loc_823D8FE8;
loc_823D8C98:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d8ba8
	sub_823D8BA8(ctx, base);
	// li r11,14
	r11.s64 = 14;
	// b 0x823d8c90
	goto loc_823D8C90;
loc_823D8CA8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15476
	ctx.r3.s64 = r11.s64 + -15476;
	// b 0x823d8c78
	goto loc_823D8C78;
loc_823D8CB4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d2520
	sub_823D2520(ctx, base);
	// lwz r31,21380(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 21380);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823d8cf0
	if (cr0.eq) goto loc_823D8CF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r29,14720
	ctx.r4.s64 = r29.s64 + 14720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dd7b8
	sub_823DD7B8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,21380(r29)
	PPC_STORE_U32(r29.u32 + 21380, r11.u32);
loc_823D8CF0:
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826a89a8
	sub_826A89A8(ctx, base);
	// lwz r11,1824(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8d20
	if (cr0.eq) goto loc_823D8D20;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,-15484
	ctx.r4.s64 = ctx.r10.s64 + -15484;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D8D20:
	// lbz r11,10814(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 10814);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = r11.u32 & 0x1;
	// bl 0x823c4af8
	sub_823C4AF8(ctx, base);
	// lbz r10,10813(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 10813);
	// clrlwi. r11,r10,31
	r11.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d8c8c
	if (cr0.eq) goto loc_823D8C8C;
	// rlwinm r10,r10,0,24,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFE;
	// lwz r11,13288(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 13288);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stb r10,10813(r29)
	PPC_STORE_U8(r29.u32 + 10813, ctx.r10.u8);
	// beq 0x823d8d5c
	if (cr0.eq) goto loc_823D8D5C;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D8D5C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15680
	ctx.r3.s64 = r11.s64 + -15680;
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
	// twi 31,r0,22
	// b 0x823d8c8c
	goto loc_823D8C8C;
loc_823D8D70:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d2520
	sub_823D2520(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = r30.s64 + 40;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826a8920
	sub_826A8920(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823d8c8c
	if (cr0.lt) goto loc_823D8C8C;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d8ba8
	sub_823D8BA8(ctx, base);
	// li r11,12
	r11.s64 = 12;
	// b 0x823d8c90
	goto loc_823D8C90;
loc_823D8DA0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823d2520
	sub_823D2520(ctx, base);
	// lwz r31,21380(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 21380);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823d8ddc
	if (cr0.eq) goto loc_823D8DDC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r29,14720
	ctx.r4.s64 = r29.s64 + 14720;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dd7b8
	sub_823DD7B8(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,21380(r29)
	PPC_STORE_U32(r29.u32 + 21380, r11.u32);
loc_823D8DDC:
	// lbz r11,10814(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 10814);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// clrlwi r4,r11,31
	ctx.r4.u64 = r11.u32 & 0x1;
	// bl 0x823c4af8
	sub_823C4AF8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826a89a8
	sub_826A89A8(ctx, base);
	// b 0x823d8c8c
	goto loc_823D8C8C;
loc_823D8DF8:
	// lwz r11,2060(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d8e44
	if (cr6.eq) goto loc_823D8E44;
	// lwz r11,2060(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8e24
	if (cr0.eq) goto loc_823D8E24;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d8e58
	if (!cr0.eq) goto loc_823D8E58;
loc_823D8E24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D8E28:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823d8c8c
	if (cr6.eq) goto loc_823D8C8C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15712
	ctx.r3.s64 = r11.s64 + -15712;
	// li r11,17
	r11.s64 = 17;
	// stw r11,296(r30)
	PPC_STORE_U32(r30.u32 + 296, r11.u32);
	// b 0x823d8ef4
	goto loc_823D8EF4;
loc_823D8E44:
	// lwz r11,1824(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8e24
	if (cr0.eq) goto loc_823D8E24;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823D8E58:
	// li r3,56
	ctx.r3.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823d8e28
	goto loc_823D8E28;
loc_823D8E6C:
	// lwz r11,2060(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823d8e98
	if (cr6.eq) goto loc_823D8E98;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8ebc
	if (cr0.eq) goto loc_823D8EBC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8ebc
	if (cr0.eq) goto loc_823D8EBC;
	// b 0x823d8eac
	goto loc_823D8EAC;
loc_823D8E98:
	// lwz r11,1824(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8ebc
	if (cr0.eq) goto loc_823D8EBC;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823D8EAC:
	// li r3,57
	ctx.r3.s64 = 57;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D8EBC:
	// lwz r11,1824(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1824);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,296(r30)
	PPC_STORE_U32(r30.u32 + 296, ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8eec
	if (cr0.eq) goto loc_823D8EEC;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,-15724
	ctx.r4.s64 = ctx.r10.s64 + -15724;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D8EEC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-15748
	ctx.r3.s64 = r11.s64 + -15748;
loc_823D8EF4:
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
	// b 0x823d8fe8
	goto loc_823D8FE8;
loc_823D8EFC:
	// lwz r11,2060(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d8f3c
	if (cr6.eq) goto loc_823D8F3C;
	// lwz r11,2060(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8f28
	if (cr0.eq) goto loc_823D8F28;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823d8f50
	if (!cr0.eq) goto loc_823D8F50;
loc_823D8F28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D8F2C:
	// subfic r11,r3,0
	xer.ca = ctx.r3.u32 <= 0;
	r11.s64 = 0 - ctx.r3.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r11,r11,19
	r11.u64 = r11.u64 & 19;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x823d8c90
	goto loc_823D8C90;
loc_823D8F3C:
	// lwz r11,1824(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8f28
	if (cr0.eq) goto loc_823D8F28;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823D8F50:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,61
	ctx.r3.s64 = 61;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823d8f2c
	goto loc_823D8F2C;
loc_823D8F64:
	// lwz r11,2060(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d8f94
	if (cr6.eq) goto loc_823D8F94;
	// lwz r11,2060(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8fb8
	if (cr0.eq) goto loc_823D8FB8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8fb8
	if (cr0.eq) goto loc_823D8FB8;
	// b 0x823d8fa8
	goto loc_823D8FA8;
loc_823D8F94:
	// lwz r11,1824(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8fb8
	if (cr0.eq) goto loc_823D8FB8;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823D8FA8:
	// li r3,62
	ctx.r3.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D8FB8:
	// lwz r11,1824(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1824);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,296(r30)
	PPC_STORE_U32(r30.u32 + 296, ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d8fe8
	if (cr0.eq) goto loc_823D8FE8;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,-15724
	ctx.r4.s64 = ctx.r10.s64 + -15724;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D8FE8:
	// lwz r11,2060(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d9018
	if (cr6.eq) goto loc_823D9018;
	// lwz r11,2060(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d903c
	if (cr0.eq) goto loc_823D903C;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d903c
	if (cr0.eq) goto loc_823D903C;
	// b 0x823d902c
	goto loc_823D902C;
loc_823D9018:
	// lwz r11,1824(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d903c
	if (cr0.eq) goto loc_823D903C;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823D902C:
	// lwz r4,16408(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 16408);
	// li r3,46
	ctx.r3.s64 = 46;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D903C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823D9044"))) PPC_WEAK_FUNC(sub_823D9044);
PPC_FUNC_IMPL(__imp__sub_823D9044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9048"))) PPC_WEAK_FUNC(sub_823D9048);
PPC_FUNC_IMPL(__imp__sub_823D9048) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823d9074
	if (!cr6.eq) goto loc_823D9074;
	// lis r3,-32038
	ctx.r3.s64 = -2099642368;
	// ori r3,r3,23
	ctx.r3.u64 = ctx.r3.u64 | 23;
	// b 0x823d9324
	goto loc_823D9324;
loc_823D9074:
	// lbz r11,4(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,107
	cr6.compare<int32_t>(r11.s32, 107, xer);
	// bgt cr6,0x823d9230
	if (cr6.gt) goto loc_823D9230;
	// beq cr6,0x823d91c4
	if (cr6.eq) goto loc_823D91C4;
	// cmpwi cr6,r11,97
	cr6.compare<int32_t>(r11.s32, 97, xer);
	// beq cr6,0x823d9164
	if (cr6.eq) goto loc_823D9164;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// beq cr6,0x823d912c
	if (cr6.eq) goto loc_823D912C;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// beq cr6,0x823d9104
	if (cr6.eq) goto loc_823D9104;
	// cmpwi cr6,r11,102
	cr6.compare<int32_t>(r11.s32, 102, xer);
	// beq cr6,0x823d90fc
	if (cr6.eq) goto loc_823D90FC;
	// cmpwi cr6,r11,103
	cr6.compare<int32_t>(r11.s32, 103, xer);
	// bne cr6,0x823d9320
	if (!cr6.eq) goto loc_823D9320;
	// li r10,1
	ctx.r10.s64 = 1;
loc_823D90B4:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-16816
	r11.s64 = r11.s64 + -16816;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-30096
	r11.s64 = r11.s64 + -30096;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d90ec
	if (!cr6.eq) goto loc_823D90EC;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r10,-15424
	ctx.r4.s64 = ctx.r10.s64 + -15424;
	// li r10,13
	ctx.r10.s64 = 13;
loc_823D90E4:
	// stw r10,296(r11)
	PPC_STORE_U32(r11.u32 + 296, ctx.r10.u32);
	// b 0x823d90f4
	goto loc_823D90F4;
loc_823D90EC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-15432
	ctx.r4.s64 = r11.s64 + -15432;
loc_823D90F4:
	// bl 0x826e517c
	__imp__sprintf(ctx, base);
	// b 0x823d9320
	goto loc_823D9320;
loc_823D90FC:
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823d90b4
	goto loc_823D90B4;
loc_823D9104:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,-30096
	r11.s64 = r11.s64 + -30096;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d90ec
	if (!cr6.eq) goto loc_823D90EC;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r10,-15424
	ctx.r4.s64 = ctx.r10.s64 + -15424;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x823d90e4
	goto loc_823D90E4;
loc_823D912C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-16816
	r11.s64 = r11.s64 + -16816;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-30096
	r11.s64 = r11.s64 + -30096;
	// lwz r10,296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d90ec
	if (!cr6.eq) goto loc_823D90EC;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r4,r10,-15424
	ctx.r4.s64 = ctx.r10.s64 + -15424;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x823d90e4
	goto loc_823D90E4;
loc_823D9164:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r9,r11,-30096
	ctx.r9.s64 = r11.s64 + -30096;
	// lwz r11,296(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d91b4
	if (!cr6.eq) goto loc_823D91B4;
	// lbz r11,5(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 5);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,48
	cr6.compare<int32_t>(r11.s32, 48, xer);
	// blt cr6,0x823d9194
	if (cr6.lt) goto loc_823D9194;
	// cmpwi cr6,r11,57
	cr6.compare<int32_t>(r11.s32, 57, xer);
	// addi r11,r11,-47
	r11.s64 = r11.s64 + -47;
	// ble cr6,0x823d9198
	if (!cr6.gt) goto loc_823D9198;
loc_823D9194:
	// li r11,1
	r11.s64 = 1;
loc_823D9198:
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// stw r11,-16816(r10)
	PPC_STORE_U32(ctx.r10.u32 + -16816, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-15424
	ctx.r4.s64 = r11.s64 + -15424;
	// li r11,3
	r11.s64 = 3;
	// stw r11,296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 296, r11.u32);
	// b 0x823d91bc
	goto loc_823D91BC;
loc_823D91B4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-15432
	ctx.r4.s64 = r11.s64 + -15432;
loc_823D91BC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823d90f4
	goto loc_823D90F4;
loc_823D91C4:
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r31,r11,-30096
	r31.s64 = r11.s64 + -30096;
	// lwz r11,296(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 296);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d91b4
	if (!cr6.eq) goto loc_823D91B4;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,5
	ctx.r3.s64 = ctx.r3.s64 + 5;
	// bl 0x823a1778
	sub_823A1778(ctx, base);
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r3.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823a1778
	sub_823A1778(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r3.u32);
	// li r5,31
	ctx.r5.s64 = 31;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-15424
	ctx.r4.s64 = r11.s64 + -15424;
	// li r11,0
	r11.s64 = 0;
	// stb r11,31(r31)
	PPC_STORE_U8(r31.u32 + 31, r11.u8);
	// li r11,18
	r11.s64 = 18;
	// stw r11,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r11.u32);
	// b 0x823d91bc
	goto loc_823D91BC;
loc_823D9230:
	// cmpwi cr6,r11,109
	cr6.compare<int32_t>(r11.s32, 109, xer);
	// beq cr6,0x823d9318
	if (cr6.eq) goto loc_823D9318;
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// beq cr6,0x823d92c8
	if (cr6.eq) goto loc_823D92C8;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// beq cr6,0x823d91b4
	if (cr6.eq) goto loc_823D91B4;
	// cmpwi cr6,r11,120
	cr6.compare<int32_t>(r11.s32, 120, xer);
	// bne cr6,0x823d9320
	if (!cr6.eq) goto loc_823D9320;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r11,r11,-30096
	r11.s64 = r11.s64 + -30096;
	// lwz r11,296(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 296);
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bne cr6,0x823d92bc
	if (!cr6.eq) goto loc_823D92BC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823d9294
	if (cr6.eq) goto loc_823D9294;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d92bc
	if (cr0.eq) goto loc_823D92BC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d92bc
	if (cr0.eq) goto loc_823D92BC;
	// b 0x823d92ac
	goto loc_823D92AC;
loc_823D9294:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d92bc
	if (cr0.eq) goto loc_823D92BC;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823D92AC:
	// li r3,59
	ctx.r3.s64 = 59;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D92BC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-15424
	ctx.r4.s64 = r11.s64 + -15424;
	// b 0x823d91bc
	goto loc_823D91BC;
loc_823D92C8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d92f4
	if (cr0.eq) goto loc_823D92F4;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,58
	ctx.r3.s64 = 58;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823d92f8
	goto loc_823D92F8;
loc_823D92F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823D92F8:
	// lis r11,1
	r11.s64 = 65536;
	// ori r10,r11,34464
	ctx.r10.u64 = r11.u64 | 34464;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// divwu r5,r3,r10
	ctx.r5.u32 = ctx.r3.u32 / ctx.r10.u32;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e517c
	__imp__sprintf(ctx, base);
	// b 0x823d9320
	goto loc_823D9320;
loc_823D9318:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823dba28
	sub_823DBA28(ctx, base);
loc_823D9320:
	// lis r3,730
	ctx.r3.s64 = 47841280;
loc_823D9324:
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

__attribute__((alias("__imp__sub_823D933C"))) PPC_WEAK_FUNC(sub_823D933C);
PPC_FUNC_IMPL(__imp__sub_823D933C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9340"))) PPC_WEAK_FUNC(sub_823D9340);
PPC_FUNC_IMPL(__imp__sub_823D9340) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823d94f8
	if (cr6.eq) goto loc_823D94F8;
	// rotlwi r31,r10,0
	r31.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d94f8
	if (cr6.eq) goto loc_823D94F8;
	// ld r11,10752(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 10752);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823d94f8
	if (cr6.eq) goto loc_823D94F8;
	// cmplwi cr6,r3,34
	cr6.compare<uint32_t>(ctx.r3.u32, 34, xer);
	// bgt cr6,0x823d941c
	if (cr6.gt) goto loc_823D941C;
	// beq cr6,0x823d9414
	if (cr6.eq) goto loc_823D9414;
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// blt cr6,0x823d9404
	if (cr6.lt) goto loc_823D9404;
	// beq cr6,0x823d9404
	if (cr6.eq) goto loc_823D9404;
	// cmplwi cr6,r3,16
	cr6.compare<uint32_t>(ctx.r3.u32, 16, xer);
	// beq cr6,0x823d93d8
	if (cr6.eq) goto loc_823D93D8;
	// cmplwi cr6,r3,17
	cr6.compare<uint32_t>(ctx.r3.u32, 17, xer);
	// bne cr6,0x823d94f8
	if (!cr6.eq) goto loc_823D94F8;
	// li r9,1
	ctx.r9.s64 = 1;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// lwz r10,-29796(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -29796);
	// slw r8,r9,r4
	ctx.r8.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r4.u8 & 0x3F));
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r10,-29796(r11)
	PPC_STORE_U32(r11.u32 + -29796, ctx.r10.u32);
	// bne cr6,0x823d94f8
	if (!cr6.eq) goto loc_823D94F8;
	// li r11,0
	r11.s64 = 0;
	// stw r9,21472(r31)
	PPC_STORE_U32(r31.u32 + 21472, ctx.r9.u32);
	// stw r11,21464(r31)
	PPC_STORE_U32(r31.u32 + 21464, r11.u32);
	// stw r11,21468(r31)
	PPC_STORE_U32(r31.u32 + 21468, r11.u32);
	// b 0x823d94f8
	goto loc_823D94F8;
loc_823D93D8:
	// li r11,1
	r11.s64 = 1;
	// cmplwi cr6,r4,6
	cr6.compare<uint32_t>(ctx.r4.u32, 6, xer);
	// slw r9,r11,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r4.u8 & 0x3F));
	// lis r11,-32126
	r11.s64 = -2105409536;
	// lwz r10,-29796(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -29796);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// stw r10,-29796(r11)
	PPC_STORE_U32(r11.u32 + -29796, ctx.r10.u32);
	// bne cr6,0x823d94f8
	if (!cr6.eq) goto loc_823D94F8;
	// li r11,0
	r11.s64 = 0;
loc_823D93FC:
	// stw r11,21472(r31)
	PPC_STORE_U32(r31.u32 + 21472, r11.u32);
	// b 0x823d94f8
	goto loc_823D94F8;
loc_823D9404:
	// li r11,0
	r11.s64 = 0;
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// stw r11,-29796(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29796, r11.u32);
	// b 0x823d93fc
	goto loc_823D93FC;
loc_823D9414:
	// stw r4,21520(r31)
	PPC_STORE_U32(r31.u32 + 21520, ctx.r4.u32);
	// b 0x823d94f8
	goto loc_823D94F8;
loc_823D941C:
	// cmplwi cr6,r3,224
	cr6.compare<uint32_t>(ctx.r3.u32, 224, xer);
	// beq cr6,0x823d94c0
	if (cr6.eq) goto loc_823D94C0;
	// cmplwi cr6,r3,225
	cr6.compare<uint32_t>(ctx.r3.u32, 225, xer);
	// beq cr6,0x823d94c0
	if (cr6.eq) goto loc_823D94C0;
	// cmplwi cr6,r3,226
	cr6.compare<uint32_t>(ctx.r3.u32, 226, xer);
	// beq cr6,0x823d94c0
	if (cr6.eq) goto loc_823D94C0;
	// cmplwi cr6,r3,255
	cr6.compare<uint32_t>(ctx.r3.u32, 255, xer);
	// bne cr6,0x823d94f8
	if (!cr6.eq) goto loc_823D94F8;
	// lis r28,-32126
	r28.s64 = -2105409536;
	// lwz r11,-29796(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -29796);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d947c
	if (cr0.eq) goto loc_823D947C;
	// lwz r11,21420(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21420);
	// lfs f0,21436(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 21436);
	f0.f64 = double(temp.f32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// lfs f0,17324(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 17324);
	f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f0.f64));
	// bl 0x826a8a08
	sub_826A8A08(ctx, base);
loc_823D947C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// li r29,17
	r29.s64 = 17;
	// addi r11,r11,-16808
	r11.s64 = r11.s64 + -16808;
	// addi r30,r11,8
	r30.s64 = r11.s64 + 8;
loc_823D948C:
	// lwz r11,-8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// lwz r10,-29796(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + -29796);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d94b0
	if (cr0.eq) goto loc_823D94B0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823d8508
	sub_823D8508(ctx, base);
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// bl 0x826a8a08
	sub_826A8A08(ctx, base);
loc_823D94B0:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x823d948c
	if (!cr0.eq) goto loc_823D948C;
	// b 0x823d94f8
	goto loc_823D94F8;
loc_823D94C0:
	// lwz r11,21380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21380);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823d94f8
	if (cr6.eq) goto loc_823D94F8;
	// bl 0x823b6748
	sub_823B6748(ctx, base);
	// lwz r11,10760(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10760);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// bne cr6,0x823d94f8
	if (!cr6.eq) goto loc_823D94F8;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823d94f4
	if (!cr6.gt) goto loc_823D94F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823D94F4:
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_823D94F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823D9500"))) PPC_WEAK_FUNC(sub_823D9500);
PPC_FUNC_IMPL(__imp__sub_823D9500) {
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
	// lis r31,-32256
	r31.s64 = -2113929216;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823d9548
	if (cr6.eq) goto loc_823D9548;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823d9574
	if (cr0.eq) goto loc_823D9574;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823d9574
	if (cr0.eq) goto loc_823D9574;
	// b 0x823d955c
	goto loc_823D955C;
loc_823D9548:
	// lwz r10,1824(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 1824);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823d9574
	if (cr0.eq) goto loc_823D9574;
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
loc_823D955C:
	// lis r11,-32194
	r11.s64 = -2109865984;
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r4,r11,-28600
	ctx.r4.s64 = r11.s64 + -28600;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,2060(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2060);
loc_823D9574:
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r10,-27840
	ctx.r10.s64 = ctx.r10.s64 + -27840;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r9,-32126
	ctx.r9.s64 = -2105409536;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// stw r10,-29796(r9)
	PPC_STORE_U32(ctx.r9.u32 + -29796, ctx.r10.u32);
	// beq cr6,0x823d95bc
	if (cr6.eq) goto loc_823D95BC;
	// rotlwi r11,r8,0
	r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d95e0
	if (cr0.eq) goto loc_823D95E0;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d95e0
	if (cr0.eq) goto loc_823D95E0;
	// b 0x823d95d0
	goto loc_823D95D0;
loc_823D95BC:
	// lwz r11,1824(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d95e0
	if (cr0.eq) goto loc_823D95E0;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823D95D0:
	// li r3,47
	ctx.r3.s64 = 47;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D95E0:
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

__attribute__((alias("__imp__sub_823D95F8"))) PPC_WEAK_FUNC(sub_823D95F8);
PPC_FUNC_IMPL(__imp__sub_823D95F8) {
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
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d962c
	if (!cr6.gt) goto loc_823D962C;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D962C:
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// ori r9,r10,22528
	ctx.r9.u64 = ctx.r10.u64 | 22528;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r8,r10,3
	ctx.r8.u64 = ctx.r10.u64 | 3;
	// rlwinm r10,r30,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// clrlwi r9,r30,3
	ctx.r9.u64 = r30.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lis r9,-8531
	ctx.r9.s64 = -559087616;
	// ori r9,r9,48879
	ctx.r9.u64 = ctx.r9.u64 | 48879;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
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

__attribute__((alias("__imp__sub_823D9684"))) PPC_WEAK_FUNC(sub_823D9684);
PPC_FUNC_IMPL(__imp__sub_823D9684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9688"))) PPC_WEAK_FUNC(sub_823D9688);
PPC_FUNC_IMPL(__imp__sub_823D9688) {
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
	// li r4,70
	ctx.r4.s64 = 70;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x823d24b8
	sub_823D24B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823d96b0
	if (cr0.eq) goto loc_823D96B0;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_823D96B0:
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

__attribute__((alias("__imp__sub_823D96C4"))) PPC_WEAK_FUNC(sub_823D96C4);
PPC_FUNC_IMPL(__imp__sub_823D96C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D96C8"))) PPC_WEAK_FUNC(sub_823D96C8);
PPC_FUNC_IMPL(__imp__sub_823D96C8) {
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
	// lwz r11,21496(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21496);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x823d978c
	if (!cr6.eq) goto loc_823D978C;
	// lwz r11,21504(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21504);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x823d9700
	if (!cr6.eq) goto loc_823D9700;
	// li r11,0
	r11.s64 = 0;
	// b 0x823d9704
	goto loc_823D9704;
loc_823D9700:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_823D9704:
	// lwz r10,21500(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 21500);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823d978c
	if (cr6.eq) goto loc_823D978C;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x823d9720
	if (!cr6.eq) goto loc_823D9720;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823D9720:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823d973c
	if (!cr6.gt) goto loc_823D973C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823D973C:
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// ori r10,r10,22528
	ctx.r10.u64 = ctx.r10.u64 | 22528;
	// ori r8,r9,3
	ctx.r8.u64 = ctx.r9.u64 | 3;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r7,-8531
	ctx.r7.s64 = -559087616;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// ori r7,r7,48879
	ctx.r7.u64 = ctx.r7.u64 | 48879;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lwz r10,21492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 21492);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r8,r10,12,20,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r10,3
	ctx.r9.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r8,512
	ctx.r10.s64 = ctx.r8.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_823D978C:
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

__attribute__((alias("__imp__sub_823D97A4"))) PPC_WEAK_FUNC(sub_823D97A4);
PPC_FUNC_IMPL(__imp__sub_823D97A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D97A8"))) PPC_WEAK_FUNC(sub_823D97A8);
PPC_FUNC_IMPL(__imp__sub_823D97A8) {
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
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r9,16568(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16568);
	// rlwinm. r11,r9,0,21,21
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d9954
	if (cr0.eq) goto loc_823D9954;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d97e4
	if (cr0.eq) goto loc_823D97E4;
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x823d97e8
	goto loc_823D97E8;
loc_823D97E4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823D97E8:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,16572(r31)
	PPC_STORE_U32(r31.u32 + 16572, ctx.r3.u32);
loc_823D97F8:
	// stw r30,16568(r31)
	PPC_STORE_U32(r31.u32 + 16568, r30.u32);
loc_823D97FC:
	// lwz r11,21428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21428);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,21424(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21424);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mftb r11
	r11.u64 = __rdtsc();
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// cmpdi cr6,r10,0
	cr6.compare<int64_t>(ctx.r10.s64, 0, xer);
	// beq cr6,0x823d9830
	if (cr6.eq) goto loc_823D9830;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// stw r11,21420(r31)
	PPC_STORE_U32(r31.u32 + 21420, r11.u32);
loc_823D9830:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r9,21448(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 21448);
	// std r30,21448(r31)
	PPC_STORE_U64(r31.u32 + 21448, r30.u64);
	// stw r10,21424(r31)
	PPC_STORE_U32(r31.u32 + 21424, ctx.r10.u32);
	// ld r10,21440(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 21440);
	// stw r11,21428(r31)
	PPC_STORE_U32(r31.u32 + 21428, r11.u32);
	// lwz r11,21496(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21496);
	// std r30,21440(r31)
	PPC_STORE_U64(r31.u32 + 21440, r30.u64);
	// stw r9,21460(r31)
	PPC_STORE_U32(r31.u32 + 21460, ctx.r9.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r10,21456(r31)
	PPC_STORE_U32(r31.u32 + 21456, ctx.r10.u32);
	// bne cr6,0x823d99b8
	if (!cr6.eq) goto loc_823D99B8;
	// li r5,240
	ctx.r5.s64 = 240;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r30.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// li r11,8
	r11.s64 = 8;
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, r11.u32);
	// li r11,13
	r11.s64 = 13;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, r11.u32);
	// li r11,37
	r11.s64 = 37;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, r11.u32);
	// li r11,19
	r11.s64 = 19;
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, r11.u32);
	// stw r11,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, r11.u32);
	// li r11,6
	r11.s64 = 6;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, r11.u32);
	// li r11,25
	r11.s64 = 25;
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, r11.u32);
	// li r11,26
	r11.s64 = 26;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, r11.u32);
	// li r11,200
	r11.s64 = 200;
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// li r11,30
	r11.s64 = 30;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r11.u32);
	// bne 0x823d98e4
	if (!cr0.eq) goto loc_823D98E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c4af8
	sub_823C4AF8(ctx, base);
loc_823D98E4:
	// addi r29,r31,21476
	r29.s64 = r31.s64 + 21476;
	// li r28,4
	r28.s64 = 4;
loc_823D98EC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d9908
	if (!cr6.eq) goto loc_823D9908;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c4be0
	sub_823C4BE0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
loc_823D9908:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x823d98ec
	if (!cr0.eq) goto loc_823D98EC;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c4c78
	sub_823C4C78(ctx, base);
	// lwz r11,21492(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21492);
	// stw r30,21500(r31)
	PPC_STORE_U32(r31.u32 + 21500, r30.u32);
	// stw r30,21504(r31)
	PPC_STORE_U32(r31.u32 + 21504, r30.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823d9948
	if (!cr6.eq) goto loc_823D9948;
	// lis r4,-23936
	ctx.r4.s64 = -1568669696;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// stw r3,21492(r31)
	PPC_STORE_U32(r31.u32 + 21492, ctx.r3.u32);
loc_823D9948:
	// li r11,2
	r11.s64 = 2;
	// stw r11,21496(r31)
	PPC_STORE_U32(r31.u32 + 21496, r11.u32);
	// b 0x823d9a10
	goto loc_823D9A10;
loc_823D9954:
	// rlwinm. r11,r9,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823d97fc
	if (cr0.eq) goto loc_823D97FC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d9978
	if (cr0.eq) goto loc_823D9978;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// b 0x823d997c
	goto loc_823D997C;
loc_823D9978:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823D997C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// rlwinm r4,r9,20,4,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFF00000;
	// addi r3,r11,-15416
	ctx.r3.s64 = r11.s64 + -15416;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,16572(r31)
	PPC_STORE_U32(r31.u32 + 16572, ctx.r3.u32);
	// blt 0x823d97f8
	if (cr0.lt) goto loc_823D97F8;
	// lwz r11,16568(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16568);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,10,23,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x100) | (r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwimi r11,r10,10,21,21
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (r11.u64 & 0xFFFFFFFFFFFFFBFF);
	// stw r11,16568(r31)
	PPC_STORE_U32(r31.u32 + 16568, r11.u32);
	// b 0x823d97fc
	goto loc_823D97FC;
loc_823D99B8:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bne cr6,0x823d9a10
	if (!cr6.eq) goto loc_823D9A10;
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d99d8
	if (!cr0.eq) goto loc_823D99D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c4af8
	sub_823C4AF8(ctx, base);
loc_823D99D8:
	// lwz r11,21504(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21504);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x823d99e8
	if (cr6.eq) goto loc_823D99E8;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
loc_823D99E8:
	// lwz r11,21500(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21500);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x823d9a10
	if (cr6.eq) goto loc_823D9A10;
	// addi r11,r30,5369
	r11.s64 = r30.s64 + 5369;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x823c5298
	sub_823C5298(ctx, base);
	// stw r30,21504(r31)
	PPC_STORE_U32(r31.u32 + 21504, r30.u32);
loc_823D9A10:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d8c18
	sub_823D8C18(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d9a44
	if (cr0.eq) goto loc_823D9A44;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823d9a44
	if (cr0.eq) goto loc_823D9A44;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823D9A44:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823D9A4C"))) PPC_WEAK_FUNC(sub_823D9A4C);
PPC_FUNC_IMPL(__imp__sub_823D9A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9A50"))) PPC_WEAK_FUNC(sub_823D9A50);
PPC_FUNC_IMPL(__imp__sub_823D9A50) {
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
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823d9ac4
	if (!cr6.eq) goto loc_823D9AC4;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d9ac4
	if (!cr6.eq) goto loc_823D9AC4;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x823d9ac4
	if (!cr6.eq) goto loc_823D9AC4;
	// lwz r11,92(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823d9ac4
	if (!cr6.eq) goto loc_823D9AC4;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
loc_823D9AC4:
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// subf r10,r10,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// subf r29,r9,r8
	r29.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// bne 0x823d9ae8
	if (!cr0.eq) goto loc_823D9AE8;
	// lwz r27,21388(r26)
	r27.u64 = PPC_LOAD_U32(r26.u32 + 21388);
loc_823D9AE8:
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x823d9b30
	if (!cr0.eq) goto loc_823D9B30;
	// lwz r11,13436(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 13436);
	// mullw r9,r27,r29
	ctx.r9.s64 = int64_t(r27.s32) * int64_t(r29.s32);
	// divwu r30,r9,r10
	r30.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d9b2c
	if (!cr0.eq) goto loc_823D9B2C;
	// bl 0x826e52ec
	__imp__VdQueryVideoFlags(ctx, base);
	// clrlwi. r11,r3,31
	r11.u64 = ctx.r3.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823d9b2c
	if (!cr0.eq) goto loc_823D9B2C;
	// cmplw cr6,r30,r29
	cr6.compare<uint32_t>(r30.u32, r29.u32, xer);
	// bgt cr6,0x823d9b2c
	if (cr6.gt) goto loc_823D9B2C;
	// lwz r11,21392(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 21392);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823d9b30
	if (!cr6.gt) goto loc_823D9B30;
loc_823D9B2C:
	// lwz r30,21392(r26)
	r30.u64 = PPC_LOAD_U32(r26.u32 + 21392);
loc_823D9B30:
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stw r27,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r27.u32);
	// stw r30,20(r28)
	PPC_STORE_U32(r28.u32 + 20, r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r10,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r10.u32);
	// stw r9,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r9.u32);
	// stw r8,8(r28)
	PPC_STORE_U32(r28.u32 + 8, ctx.r8.u32);
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823D9B74"))) PPC_WEAK_FUNC(sub_823D9B74);
PPC_FUNC_IMPL(__imp__sub_823D9B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9B78"))) PPC_WEAK_FUNC(sub_823D9B78);
PPC_FUNC_IMPL(__imp__sub_823D9B78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, r11.u32);
	// lwz r11,20(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823d9bc4
	if (!cr6.eq) goto loc_823D9BC4;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, r11.u32);
	// stw r11,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, r11.u32);
	// b 0x823d9bd0
	goto loc_823D9BD0;
loc_823D9BC4:
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r10.u32);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
loc_823D9BD0:
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, r11.u32);
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, r11.u32);
	// stw r11,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, r11.u32);
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, r11.u32);
	// stw r11,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, r11.u32);
	// stw r11,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D9BEC"))) PPC_WEAK_FUNC(sub_823D9BEC);
PPC_FUNC_IMPL(__imp__sub_823D9BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9BF0"))) PPC_WEAK_FUNC(sub_823D9BF0);
PPC_FUNC_IMPL(__imp__sub_823D9BF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823d9a50
	sub_823D9A50(ctx, base);
	// lwz r11,21388(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 21388);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r10,21392(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 21392);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,56
	ctx.r5.s64 = 56;
	// sth r30,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, r30.u16);
	// sth r29,146(r1)
	PPC_STORE_U16(ctx.r1.u32 + 146, r29.u16);
	// sth r11,148(r1)
	PPC_STORE_U16(ctx.r1.u32 + 148, r11.u16);
	// sth r10,150(r1)
	PPC_STORE_U16(ctx.r1.u32 + 150, ctx.r10.u16);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x826e52fc
	__imp__VdCallGraphicsNotificationRoutines(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823D9C4C"))) PPC_WEAK_FUNC(sub_823D9C4C);
PPC_FUNC_IMPL(__imp__sub_823D9C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9C50"))) PPC_WEAK_FUNC(sub_823D9C50);
PPC_FUNC_IMPL(__imp__sub_823D9C50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// vrfim v11,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_round_ps(_mm_load_ps(ctx.v1.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-15376
	r11.s64 = r11.s64 + -15376;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v8,v0,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// addi r11,r11,-15392
	r11.s64 = r11.s64 + -15392;
	// vspltw v6,v0,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vspltw v4,v0,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vsubfp v0,v1,v11
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v11.f32)));
	// vexptefp v9,v11
	ctx.v9.f32[0] = exp2f(ctx.v11.f32[0]);
	ctx.v9.f32[1] = exp2f(ctx.v11.f32[1]);
	ctx.v9.f32[2] = exp2f(ctx.v11.f32[2]);
	ctx.v9.f32[3] = exp2f(ctx.v11.f32[3]);
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v10,v13,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v7,v13,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v5,v13,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vspltw v3,v13,3
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v0,v8,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v0,v7,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v11,v13,v6,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v10,v13,v5,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v4,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v3,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v11,v8,v0,v13
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrefp v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v11.f32)));
	// vor v8,v11,v11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vnmsubfp v0,v11,v13,v12
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v8,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v0,v13,v0,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v1,v9,v0
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D9CE4"))) PPC_WEAK_FUNC(sub_823D9CE4);
PPC_FUNC_IMPL(__imp__sub_823D9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9CE8"))) PPC_WEAK_FUNC(sub_823D9CE8);
PPC_FUNC_IMPL(__imp__sub_823D9CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stfs f1,-48(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lis r11,292
	r11.s64 = 19136512;
	// ori r10,r11,16237
	ctx.r10.u64 = r11.u64 | 16237;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,32744(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 32744);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f13,-32(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// addi r11,r11,2448
	r11.s64 = r11.s64 + 2448;
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2464
	r11.s64 = r11.s64 + 2464;
	// lvx128 v11,r0,r11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r11,r11,2432
	r11.s64 = r11.s64 + 2432;
	// lvx128 v10,r0,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-48(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	// addi r9,r1,-48
	ctx.r9.s64 = ctx.r1.s64 + -48;
	// rlwimi r11,r10,30,1,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x7FFFFFFF) | (r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f1
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// lfs f13,-15296(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15296);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f13.u32);
	// lwa r11,-48(r1)
	r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -48));
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, r11.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fnmsubs f0,f13,f0,f1
	f0.f64 = double(float(-(ctx.f13.f64 * f0.f64 - ctx.f1.f64)));
	// stfs f0,-28(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(f0.f64 * f0.f64));
	// stfs f13,-24(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-20(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -20, temp.u32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vmulfp128 v0,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v9,v0,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmsum4fp128 v10,v0,v10
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmulfp128 v13,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v13,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v0,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v13,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,-48
	r11.s64 = ctx.r1.s64 + -48;
	// stvx v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	f0.f64 = double(temp.f32);
	// lfs f13,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f1,f0,f13
	ctx.f1.f64 = double(float(f0.f64 + ctx.f13.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823D9DE4"))) PPC_WEAK_FUNC(sub_823D9DE4);
PPC_FUNC_IMPL(__imp__sub_823D9DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823D9DE8"))) PPC_WEAK_FUNC(sub_823D9DE8);
PPC_FUNC_IMPL(__imp__sub_823D9DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r10,r1,20
	ctx.r10.s64 = ctx.r1.s64 + 20;
	// stfs f2,28(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// addi r8,r1,-24
	ctx.r8.s64 = ctx.r1.s64 + -24;
	// vspltisw v11,-1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r1,-32
	ctx.r9.s64 = ctx.r1.s64 + -32;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// vspltisw v5,-9
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_set1_epi32(int(0xFFFFFFF7)));
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r11,r1,-28
	r11.s64 = ctx.r1.s64 + -28;
	// stfs f0,-28(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lvlx v6,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,28
	ctx.r10.s64 = ctx.r1.s64 + 28;
	// lvlx v7,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-24
	r11.s64 = ctx.r1.s64 + -24;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,-28
	ctx.r9.s64 = ctx.r1.s64 + -28;
	// stfs f0,-24(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// vrlimi128 v12,v7,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// stfs f0,-28(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// vrlimi128 v0,v6,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 57), 4));
	// stfs f0,-32(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lvlx v1,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v1,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v1.f32), 57), 4));
	// lvlx v4,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v12,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// vrlimi128 v8,v4,4,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 57), 4));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// vslw v4,v11,v11
	ctx.v4.u32[0] = ctx.v11.u32[0] << (ctx.v11.u8[0] & 0x1F);
	ctx.v4.u32[1] = ctx.v11.u32[1] << (ctx.v11.u8[4] & 0x1F);
	ctx.v4.u32[2] = ctx.v11.u32[2] << (ctx.v11.u8[8] & 0x1F);
	ctx.v4.u32[3] = ctx.v11.u32[3] << (ctx.v11.u8[12] & 0x1F);
	// vor v12,v9,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// addi r11,r11,-15312
	r11.s64 = r11.s64 + -15312;
	// vor v9,v0,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v12,v8,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// vandc v6,v9,v4
	// lvx128 v10,r0,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vslw v8,v11,v5
	ctx.v8.u32[0] = ctx.v11.u32[0] << (ctx.v5.u8[0] & 0x1F);
	ctx.v8.u32[1] = ctx.v11.u32[1] << (ctx.v5.u8[4] & 0x1F);
	ctx.v8.u32[2] = ctx.v11.u32[2] << (ctx.v5.u8[8] & 0x1F);
	ctx.v8.u32[3] = ctx.v11.u32[3] << (ctx.v5.u8[12] & 0x1F);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// vspltw v3,v10,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vor v0,v12,v12
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vupkd3d128 v12,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v12 = vTemp;
	// addi r11,r11,-15328
	r11.s64 = r11.s64 + -15328;
	// vspltw v2,v10,1
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xAA));
	// vlogefp v29,v6
	ctx.fpscr.enableFlushModeUnconditional();
	v29.f32[0] = log2f(ctx.v6.f32[0]);
	v29.f32[1] = log2f(ctx.v6.f32[1]);
	v29.f32[2] = log2f(ctx.v6.f32[2]);
	v29.f32[3] = log2f(ctx.v6.f32[3]);
	// vspltw v31,v10,2
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x55));
	// vspltw v28,v10,3
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x0));
	// vspltw v7,v12,3
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vsel v12,v6,v7,v8
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// lvx128 v8,r0,r11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v1,v8,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xAA));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// vspltw v6,v8,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vspltw v30,v8,2
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x55));
	// addi r11,r11,-15344
	r11.s64 = r11.s64 + -15344;
	// vsubfp v12,v12,v7
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32)));
	// vspltw v8,v8,3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x0));
	// vmaddfp v2,v12,v2,v3
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v12,v1,v6
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v1,v12,v0
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vrfim v3,v29
	_mm_store_ps(ctx.v3.f32, _mm_round_ps(_mm_load_ps(v29.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// vmaddfp v31,v10,v31,v2
	_mm_store_ps(v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v31.f32)), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v12,v12,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v2,v10,v10
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v10,v30,v6
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v6,v3,v0
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v3,v12,v28,v31
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v28.f32)), _mm_load_ps(v31.f32)));
	// vmaddfp v12,v12,v8,v10
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v8,v2,v12,v3
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v3.f32)));
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r11,r11,-15360
	r11.s64 = r11.s64 + -15360;
	// lvx128 v10,r0,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v6,v1,v8,v6
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v6.f32)));
	// vspltw v8,v12,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v1,v12,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vand v4,v9,v4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vspltw v30,v12,2
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// vspltw v28,v12,3
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vrfim v12,v6
	_mm_store_ps(ctx.v12.f32, _mm_round_ps(_mm_load_ps(ctx.v6.f32), _MM_FROUND_TO_NEG_INF | _MM_FROUND_NO_EXC));
	// vspltw v31,v10,1
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v29,v10,2
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x55));
	// vspltw v27,v10,3
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x0));
	// vspltw v3,v10,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vsubfp v10,v6,v12
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)));
	// vexptefp v2,v12
	ctx.v2.f32[0] = exp2f(ctx.v12.f32[0]);
	ctx.v2.f32[1] = exp2f(ctx.v12.f32[1]);
	ctx.v2.f32[2] = exp2f(ctx.v12.f32[2]);
	ctx.v2.f32[3] = exp2f(ctx.v12.f32[3]);
	// vor v12,v10,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v12,v1,v8
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v3,v12,v31,v3
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v31.f32)), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v12,v12,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v6,v10,v30,v6
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v3,v10,v29,v3
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(v29.f32)), _mm_load_ps(ctx.v3.f32)));
	// vor v29,v7,v7
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vmulfp128 v1,v10,v10
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp v7,v0,v13
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v10,v12,v28,v6
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v28.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v12,v12,v27,v3
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v27.f32)), _mm_load_ps(ctx.v3.f32)));
	// vspltisw v3,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_set1_epi32(int(0x1)));
	// vcmpgtfp v27,v13,v0
	_mm_store_ps(v27.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpgtfp v28,v13,v9
	_mm_store_ps(v28.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v6,v1,v12,v10
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vrfiz v1,v0
	_mm_store_ps(ctx.v1.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrefp v10,v6
	_mm_store_ps(ctx.v10.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v6.f32)));
	// vor v31,v6,v6
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vnmsubfp v12,v6,v10,v8
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v30,v10,v10
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vctsxs v6,v0,0
	_mm_store_si128((__m128i*)ctx.v6.s32, _mm_vctsxs(_mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v0,v0,v1
	_mm_store_ps(ctx.v0.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v12,v10,v12,v10
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp v10,v9,v13
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)));
	// vand v6,v6,v3
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vandc v0,v28,v0
	// vnmsubfp v31,v31,v12,v8
	_mm_store_ps(v31.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vslw v8,v11,v5
	ctx.v8.u32[0] = ctx.v11.u32[0] << (ctx.v5.u8[0] & 0x1F);
	ctx.v8.u32[1] = ctx.v11.u32[1] << (ctx.v5.u8[4] & 0x1F);
	ctx.v8.u32[2] = ctx.v11.u32[2] << (ctx.v5.u8[8] & 0x1F);
	ctx.v8.u32[3] = ctx.v11.u32[3] << (ctx.v5.u8[12] & 0x1F);
	// vcmpeqfp v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v5,v12,v31,v12
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(v31.f32)), _mm_load_ps(ctx.v12.f32)));
	// vslw v12,v6,v11
	ctx.v12.u32[0] = ctx.v6.u32[0] << (ctx.v11.u8[0] & 0x1F);
	ctx.v12.u32[1] = ctx.v6.u32[1] << (ctx.v11.u8[4] & 0x1F);
	ctx.v12.u32[2] = ctx.v6.u32[2] << (ctx.v11.u8[8] & 0x1F);
	ctx.v12.u32[3] = ctx.v6.u32[3] << (ctx.v11.u8[12] & 0x1F);
	// vor v6,v10,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vandc v11,v10,v27
	// vsel v10,v30,v5,v9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)v30.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vor v9,v0,v6
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vand v0,v4,v12
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vmulfp128 v12,v2,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v10.f32)));
	// vsrw v10,v8,v3
	ctx.v10.u32[0] = ctx.v8.u32[0] >> (ctx.v3.u8[0] & 0x1F);
	ctx.v10.u32[1] = ctx.v8.u32[1] >> (ctx.v3.u8[4] & 0x1F);
	ctx.v10.u32[2] = ctx.v8.u32[2] >> (ctx.v3.u8[8] & 0x1F);
	ctx.v10.u32[3] = ctx.v8.u32[3] >> (ctx.v3.u8[12] & 0x1F);
	// vor v13,v13,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v13,v10,v13,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v13,v29,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)v29.u8))));
	// vor v0,v12,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsel v0,v0,v13,v9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA018"))) PPC_WEAK_FUNC(sub_823DA018);
PPC_FUNC_IMPL(__imp__sub_823DA018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// addi r10,r1,20
	ctx.r10.s64 = ctx.r1.s64 + 20;
	// vspltisw v12,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x1)));
	// addi r9,r1,-28
	ctx.r9.s64 = ctx.r1.s64 + -28;
	// addi r8,r1,-24
	ctx.r8.s64 = ctx.r1.s64 + -24;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// stfs f0,-28(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// vcfsx v12,v12,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v12.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// stfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// stfs f0,-24(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v11,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// lvlx v10,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v10,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrsqrtefp v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v13.f32))));
	// vmulfp128 v9,v13,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v8,v0,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v9,v8,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v12,v12,v12
	_mm_store_ps(ctx.v12.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vxor v12,v12,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vsel v0,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA0A0"))) PPC_WEAK_FUNC(sub_823DA0A0);
PPC_FUNC_IMPL(__imp__sub_823DA0A0) {
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
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mullw. r11,r30,r29
	r11.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823da0d0
	if (!cr0.gt) goto loc_823DA0D0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239d2a8
	sub_8239D2A8(ctx, base);
loc_823DA0D0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x823da0f8
	if (!cr6.gt) goto loc_823DA0F8;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x823da0f8
	if (cr0.eq) goto loc_823DA0F8;
	// mtctr r30
	ctr.u64 = r30.u64;
loc_823DA0EC:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x823da0ec
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823DA0EC;
loc_823DA0F8:
	// srawi r11,r30,1
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0x1) != 0);
	r11.s64 = r30.s32 >> 1;
	// addi r10,r30,-1
	ctx.r10.s64 = r30.s64 + -1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// li r28,0
	r28.s64 = 0;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r30,2
	cr6.compare<int32_t>(r30.s32, 2, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r28,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r28.u32);
	// stwx r28,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, r28.u32);
	// beq cr6,0x823da164
	if (cr6.eq) goto loc_823DA164;
	// addi r11,r30,2
	r11.s64 = r30.s64 + 2;
	// addi r10,r30,-3
	ctx.r10.s64 = r30.s64 + -3;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r3.u32);
	// stwx r3,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r3.u32);
loc_823DA164:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x823da194
	if (!cr6.gt) goto loc_823DA194;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823DA174:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x823da188
	if (!cr6.eq) goto loc_823DA188;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
loc_823DA188:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823da174
	if (!cr0.eq) goto loc_823DA174;
loc_823DA194:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x823da4f0
	if (!cr6.gt) goto loc_823DA4F0;
	// addi r11,r1,288
	r11.s64 = ctx.r1.s64 + 288;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subf r4,r31,r11
	ctx.r4.s64 = r11.s64 - r31.s64;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lfs f12,17324(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17324);
	ctx.f12.f64 = double(temp.f32);
	// mr r31,r29
	r31.u64 = r29.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// lfd f10,-28592(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28592);
	// lfs f11,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f11.f64 = double(temp.f32);
loc_823DA1C8:
	// li r7,512
	ctx.r7.s64 = 512;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x823da294
	if (!cr6.gt) goto loc_823DA294;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823DA1E4:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	f0.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stfs f0,0(r9)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x823da1e4
	if (!cr0.eq) goto loc_823DA1E4;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
loc_823DA204:
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r27,r10,7
	r27.s64 = ctx.r10.s64 + 7;
	// slw r27,r3,r27
	r27.u64 = r27.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r27.u8 & 0x3F));
	// extsw r27,r27
	r27.s64 = r27.s32;
	// ble cr6,0x823da248
	if (!cr6.gt) goto loc_823DA248;
	// std r27,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, r27.u64);
	// lfd f13,176(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fadd f0,f0,f10
	f0.f64 = f0.f64 + ctx.f10.f64;
	// b 0x823da260
	goto loc_823DA260;
loc_823DA248:
	// std r27,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, r27.u64);
	// lfd f13,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsub f0,f0,f10
	f0.f64 = f0.f64 - ctx.f10.f64;
loc_823DA260:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subfic r8,r10,2
	xer.ca = ctx.r10.u32 <= 2;
	ctx.r8.s64 = 2 - ctx.r10.s64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// stwx r10,r11,r27
	PPC_STORE_U32(r11.u32 + r27.u32, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// bne 0x823da204
	if (!cr0.eq) goto loc_823DA204;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ble cr6,0x823da384
	if (!cr6.gt) goto loc_823DA384;
loc_823DA294:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x823da358
	if (!cr6.gt) goto loc_823DA358;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823DA2AC:
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x823da310
	if (!cr6.gt) goto loc_823DA310;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// lwax r27,r11,r27
	r27.s64 = int32_t(PPC_LOAD_U32(r11.u32 + r27.u32));
	// slw r10,r3,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r27,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, r27.u64);
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f9,168(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,160(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fdivs f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 / f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// b 0x823da314
	goto loc_823DA314;
loc_823DA310:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
loc_823DA314:
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,255
	cr6.compare<int32_t>(ctx.r10.s32, 255, xer);
	// bge cr6,0x823da348
	if (!cr6.lt) goto loc_823DA348;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// sraw r10,r6,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r10.s64 = ctx.r6.s32 >> temp.u32;
	// cmpw cr6,r7,r10
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, xer);
	// blt cr6,0x823da348
	if (cr6.lt) goto loc_823DA348;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x823da348
	if (!cr6.lt) goto loc_823DA348;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_823DA348:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// blt cr6,0x823da2ac
	if (cr6.lt) goto loc_823DA2AC;
loc_823DA358:
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// sraw r9,r6,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r9.s64 = ctx.r6.s32 >> temp.u32;
	// subf. r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bgt 0x823da294
	if (cr0.gt) goto loc_823DA294;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
loc_823DA384:
	// bge cr6,0x823da4a0
	if (!cr6.lt) goto loc_823DA4A0;
loc_823DA388:
	// mr r8,r28
	ctx.r8.u64 = r28.u64;
	// fmr f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x823da478
	if (!cr6.gt) goto loc_823DA478;
	// mr r11,r28
	r11.u64 = r28.u64;
loc_823DA3A0:
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f9,f11
	cr6.compare(ctx.f9.f64, ctx.f11.f64);
	// ble cr6,0x823da40c
	if (!cr6.gt) goto loc_823DA40C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r26,r10,7
	r26.s64 = ctx.r10.s64 + 7;
	// lwzx r10,r11,r27
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// slw r10,r3,r26
	ctx.r10.u64 = r26.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r26.u8 & 0x3F));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f9,136(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfd f8,144(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fmuls f0,f8,f0
	f0.f64 = double(float(ctx.f8.f64 * f0.f64));
	// fsubs f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 - f0.f64));
	// fdivs f0,f9,f0
	f0.f64 = double(float(ctx.f9.f64 / f0.f64));
	// fabs f0,f0
	f0.u64 = f0.u64 & ~0x8000000000000000;
	// b 0x823da410
	goto loc_823DA410;
loc_823DA40C:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	f0.f64 = ctx.f12.f64;
loc_823DA410:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// sraw r27,r6,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	r27.s64 = ctx.r6.s32 >> temp.u32;
	// neg r27,r27
	r27.s64 = -r27.s64;
	// cmpw cr6,r7,r27
	cr6.compare<int32_t>(ctx.r7.s32, r27.s32, xer);
	// bgt cr6,0x823da468
	if (cr6.gt) goto loc_823DA468;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823da444
	if (!cr6.eq) goto loc_823DA444;
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// lwzx r27,r11,r27
	r27.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bgt cr6,0x823da458
	if (cr6.gt) goto loc_823DA458;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
loc_823DA444:
	// ble cr6,0x823da468
	if (!cr6.gt) goto loc_823DA468;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,-256
	cr6.compare<int32_t>(ctx.r10.s32, -256, xer);
	// ble cr6,0x823da468
	if (!cr6.gt) goto loc_823DA468;
loc_823DA458:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x823da468
	if (!cr6.lt) goto loc_823DA468;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
loc_823DA468:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r9,r30
	cr6.compare<int32_t>(ctx.r9.s32, r30.s32, xer);
	// blt cr6,0x823da3a0
	if (cr6.lt) goto loc_823DA3A0;
loc_823DA478:
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// sraw r9,r6,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r9.s64 = ctx.r6.s32 >> temp.u32;
	// add. r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// blt 0x823da388
	if (cr0.lt) goto loc_823DA388;
loc_823DA4A0:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x823da4e4
	if (!cr6.gt) goto loc_823DA4E4;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
loc_823DA4B8:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r27,r1,192
	r27.s64 = ctx.r1.s64 + 192;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r11,r7
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// lwzx r27,r11,r27
	r27.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// subfic r7,r7,2
	xer.ca = ctx.r7.u32 <= 2;
	ctx.r7.s64 = 2 - ctx.r7.s64;
	// slw r7,r27,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r7.u8 & 0x3F));
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bne 0x823da4b8
	if (!cr0.eq) goto loc_823DA4B8;
loc_823DA4E4:
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x823da1c8
	if (!cr0.eq) goto loc_823DA1C8;
loc_823DA4F0:
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823DA4F8"))) PPC_WEAK_FUNC(sub_823DA4F8);
PPC_FUNC_IMPL(__imp__sub_823DA4F8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, f30.u64);
	// stfd f31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fabs f30,f1
	f30.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f0,-15228(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15228);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// bge cr6,0x823da588
	if (!cr6.lt) goto loc_823DA588;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-15232(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15232);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// lfs f13,-15236(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15236);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,-15240(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15240);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,-15244(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15244);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,-15248(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15248);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,-15252(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15252);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,-15256(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15256);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// b 0x823da654
	goto loc_823DA654;
loc_823DA588:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fdivs f31,f0,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f0.f64 / f30.f64));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// stfs f0,88(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx v1,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r11
	temp.u32 = r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v1,v12,4,3
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v1,v0,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// bl 0x823d9c50
	sub_823D9C50(ctx, base);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// stvx v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x823da018
	sub_823DA018(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-15260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15260);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,-15264(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15264);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmsubs f13,f31,f0,f13
	ctx.f13.f64 = double(float(f31.f64 * f0.f64 - ctx.f13.f64));
	// lfs f0,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	f0.f64 = double(temp.f32);
	// fdivs f12,f0,f1
	ctx.f12.f64 = double(float(f0.f64 / ctx.f1.f64));
	// lfs f0,-15268(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15268);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmadds f13,f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// lfs f0,-15272(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15272);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmsubs f13,f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 - f0.f64));
	// lfs f0,-15276(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15276);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmadds f13,f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// lfs f0,-15280(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15280);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmsubs f13,f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 - f0.f64));
	// lfs f0,-15284(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15284);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmadds f13,f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// lfs f0,-15288(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15288);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmadds f13,f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// lfs f0,-15292(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15292);
	f0.f64 = double(temp.f32);
	// fmadds f0,f13,f31,f0
	f0.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * f0.f64));
loc_823DA654:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA66C"))) PPC_WEAK_FUNC(sub_823DA66C);
PPC_FUNC_IMPL(__imp__sub_823DA66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DA670"))) PPC_WEAK_FUNC(sub_823DA670);
PPC_FUNC_IMPL(__imp__sub_823DA670) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, f31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bne cr6,0x823da69c
	if (!cr6.eq) goto loc_823DA69C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823da6b4
	goto loc_823DA6B4;
loc_823DA69C:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-10024(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -10024);
	f0.f64 = double(temp.f32);
	// fmuls f31,f1,f0
	f31.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d9ce8
	sub_823D9CE8(ctx, base);
	// fdivs f1,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 / f31.f64));
loc_823DA6B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA6C8"))) PPC_WEAK_FUNC(sub_823DA6C8);
PPC_FUNC_IMPL(__imp__sub_823DA6C8) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8239d5e8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fabs f13,f31
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x823da740
	if (!cr6.lt) goto loc_823DA740;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fabs f1,f31
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// lfs f2,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x823d9de8
	sub_823D9DE8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f30,-20104(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -20104);
	f30.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f2,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x823d9de8
	sub_823D9DE8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,-1472(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1472);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmsubs f13,f29,f30,f0
	ctx.f13.f64 = double(float(f29.f64 * f30.f64 - f0.f64));
	// lfs f0,-26876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26876);
	f0.f64 = double(temp.f32);
loc_823DA738:
	// fadds f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x823da7a8
	goto loc_823DA7A8;
loc_823DA740:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f30,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bge cr6,0x823da7a0
	if (!cr6.lt) goto loc_823DA7A0;
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d9de8
	sub_823D9DE8(ctx, base);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fabs f1,f31
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// lfs f29,-1472(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1472);
	f29.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x823d9de8
	sub_823D9DE8(ctx, base);
	// fmuls f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fabs f12,f31
	ctx.f12.u64 = f31.u64 & ~0x8000000000000000;
	// lfs f0,-1468(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1468);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmsubs f13,f28,f29,f13
	ctx.f13.f64 = double(float(f28.f64 * f29.f64 - ctx.f13.f64));
	// fnmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
	// lfs f0,29204(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29204);
	f0.f64 = double(temp.f32);
	// b 0x823da738
	goto loc_823DA738;
loc_823DA7A0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
loc_823DA7A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8239d634
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA7C0"))) PPC_WEAK_FUNC(sub_823DA7C0);
PPC_FUNC_IMPL(__imp__sub_823DA7C0) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8239d5e8
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fabs f13,f31
	ctx.f13.u64 = f31.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bge cr6,0x823da838
	if (!cr6.lt) goto loc_823DA838;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fabs f1,f31
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// lfs f2,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x823d9de8
	sub_823D9DE8(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	f29.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// lfs f30,-27456(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27456);
	f30.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f2,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x823d9de8
	sub_823D9DE8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-15224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15224);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f0,f1,f0
	f0.f64 = double(float(ctx.f1.f64 * f0.f64));
	// fmsubs f13,f29,f30,f0
	ctx.f13.f64 = double(float(f29.f64 * f30.f64 - f0.f64));
	// lfs f0,11008(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11008);
	f0.f64 = double(temp.f32);
loc_823DA830:
	// fadds f1,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f13.f64 + f0.f64));
	// b 0x823da8a0
	goto loc_823DA8A0;
loc_823DA838:
	// fabs f0,f31
	ctx.fpscr.disableFlushMode();
	f0.u64 = f31.u64 & ~0x8000000000000000;
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f2,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f0,f2
	cr6.compare(f0.f64, ctx.f2.f64);
	// bge cr6,0x823da898
	if (!cr6.lt) goto loc_823DA898;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823d9de8
	sub_823D9DE8(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fabs f1,f31
	ctx.f1.u64 = f31.u64 & ~0x8000000000000000;
	// lfs f29,-15224(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15224);
	f29.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,11004(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = f30.f64;
	// bl 0x823d9de8
	sub_823D9DE8(ctx, base);
	// fmuls f13,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 * f30.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fabs f12,f31
	ctx.f12.u64 = f31.u64 & ~0x8000000000000000;
	// lfs f0,7720(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 7720);
	f0.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmsubs f13,f28,f29,f13
	ctx.f13.f64 = double(float(f28.f64 * f29.f64 - ctx.f13.f64));
	// fnmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
	// lfs f0,-1472(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -1472);
	f0.f64 = double(temp.f32);
	// b 0x823da830
	goto loc_823DA830;
loc_823DA898:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
loc_823DA8A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	r12.s64 = ctx.r1.s64 + -8;
	// bl 0x8239d634
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DA8B8"))) PPC_WEAK_FUNC(sub_823DA8B8);
PPC_FUNC_IMPL(__imp__sub_823DA8B8) {
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
	// bl 0x8239bcec
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8239d5d0
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f25,f1
	ctx.fpscr.disableFlushMode();
	f25.f64 = ctx.f1.f64;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lfs f23,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f23.f64 = double(temp.f32);
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// mullw r31,r27,r25
	r31.s64 = int64_t(r27.s32) * int64_t(r25.s32);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x823da908
	if (cr6.eq) goto loc_823DA908;
	// fmr f29,f23
	f29.f64 = f23.f64;
	// b 0x823da90c
	goto loc_823DA90C;
loc_823DA908:
	// fmr f29,f0
	ctx.fpscr.disableFlushMode();
	f29.f64 = f0.f64;
loc_823DA90C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// lfs f24,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f24.f64 = double(temp.f32);
	// beq cr6,0x823dac4c
	if (cr6.eq) goto loc_823DAC4C;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x823dabb4
	if (cr6.eq) goto loc_823DABB4;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x823dab34
	if (cr6.eq) goto loc_823DAB34;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x823daad0
	if (cr6.eq) goto loc_823DAAD0;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x823daa54
	if (cr6.eq) goto loc_823DAA54;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x823da9b4
	if (cr6.eq) goto loc_823DA9B4;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// bne cr6,0x823da9b4
	if (!cr6.eq) goto loc_823DA9B4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823da974
	if (cr6.eq) goto loc_823DA974;
	// mr r11,r28
	r11.u64 = r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823da974
	if (cr0.eq) goto loc_823DA974;
	// mtctr r31
	ctr.u64 = r31.u64;
loc_823DA968:
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x823da968
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823DA968;
loc_823DA974:
	// subf r11,r27,r31
	r11.s64 = r31.s64 - r27.s64;
	// add r10,r31,r27
	ctx.r10.u64 = r31.u64 + r27.u64;
	// rlwinm r11,r11,31,1,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823dacac
	if (!cr6.lt) goto loc_823DACAC;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// add r10,r9,r28
	ctx.r10.u64 = ctx.r9.u64 + r28.u64;
	// lis r9,16256
	ctx.r9.s64 = 1065353216;
	// beq 0x823dacac
	if (cr0.eq) goto loc_823DACAC;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823DA9A4:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x823da9a4
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823DA9A4;
	// b 0x823dacac
	goto loc_823DACAC;
loc_823DA9B4:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823dacac
	if (cr6.eq) goto loc_823DACAC;
	// rlwinm r11,r31,31,1,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// subf r6,r27,r11
	ctx.r6.s64 = r11.s64 - r27.s64;
	// subf r7,r11,r27
	ctx.r7.s64 = r27.s64 - r11.s64;
loc_823DA9D0:
	// cmplw cr6,r10,r6
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, xer);
	// blt cr6,0x823daa00
	if (cr6.lt) goto loc_823DAA00;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x823daa00
	if (!cr6.lt) goto loc_823DAA00;
	// add r8,r7,r10
	ctx.r8.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// b 0x823daa34
	goto loc_823DAA34;
loc_823DAA00:
	// add r8,r11,r27
	ctx.r8.u64 = r11.u64 + r27.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// bge cr6,0x823daa3c
	if (!cr6.lt) goto loc_823DAA3C;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823daa3c
	if (cr6.lt) goto loc_823DAA3C;
	// subf r8,r10,r11
	ctx.r8.s64 = r11.s64 - ctx.r10.s64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + r27.u64;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f29
	f0.f64 = double(float(f0.f64 - f29.f64));
loc_823DAA34:
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x823daa40
	goto loc_823DAA40;
loc_823DAA3C:
	// stfs f23,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_823DAA40:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// blt cr6,0x823da9d0
	if (cr6.lt) goto loc_823DA9D0;
	// b 0x823dacac
	goto loc_823DACAC;
loc_823DAA54:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823dacac
	if (cr6.eq) goto loc_823DACAC;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// fdivs f30,f24,f30
	ctx.fpscr.disableFlushMode();
	f30.f64 = double(float(f24.f64 / f30.f64));
	// mr r30,r28
	r30.u64 = r28.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f28,f13,f0
	f28.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_823DAA80:
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f28
	f0.f64 = double(float(f0.f64 - f28.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// fmuls f31,f0,f25
	f31.f64 = double(float(f0.f64 * f25.f64));
	// fmuls f1,f30,f31
	ctx.f1.f64 = double(float(f30.f64 * f31.f64));
	// bl 0x823da670
	sub_823DA670(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	f27.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x823da670
	sub_823DA670(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// fmuls f0,f27,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f27.f64 * ctx.f1.f64));
	// stfs f0,0(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x823daa80
	if (cr6.lt) goto loc_823DAA80;
	// b 0x823dacac
	goto loc_823DACAC;
loc_823DAAD0:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823dacac
	if (cr6.eq) goto loc_823DACAC;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// mr r30,r28
	r30.u64 = r28.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_823DAAF8:
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// fmuls f1,f0,f25
	ctx.f1.f64 = double(float(f0.f64 * f25.f64));
	// bl 0x823da6c8
	sub_823DA6C8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x823daaf8
	if (cr6.lt) goto loc_823DAAF8;
	// b 0x823dacac
	goto loc_823DACAC;
loc_823DAB34:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823dacac
	if (cr6.eq) goto loc_823DACAC;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// fdivs f31,f24,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = double(float(f24.f64 / f30.f64));
	// mr r30,r28
	r30.u64 = r28.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f28,560(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f28.f64 = double(temp.f32);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f30,f13,f0
	f30.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_823DAB68:
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f28.f64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f30
	f0.f64 = double(float(f0.f64 - f30.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// fmuls f0,f0,f31
	f0.f64 = double(float(f0.f64 * f31.f64));
	// fmuls f0,f0,f25
	f0.f64 = double(float(f0.f64 * f25.f64));
	// fmuls f0,f0,f0
	f0.f64 = double(float(f0.f64 * f0.f64));
	// fneg f2,f0
	ctx.f2.u64 = f0.u64 ^ 0x8000000000000000;
	// bl 0x823d9de8
	sub_823D9DE8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x823dab68
	if (cr6.lt) goto loc_823DAB68;
	// b 0x823dacac
	goto loc_823DACAC;
loc_823DABB4:
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f27,f13,f0
	f27.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fsubs f28,f27,f29
	f28.f64 = double(float(f27.f64 - f29.f64));
	// beq cr6,0x823dacac
	if (cr6.eq) goto loc_823DACAC;
	// fdivs f26,f24,f28
	f26.f64 = double(float(f24.f64 / f28.f64));
	// mr r29,r28
	r29.u64 = r28.u64;
loc_823DABE4:
	// clrldi r11,r30,32
	r11.u64 = r30.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// fsubs f0,f31,f28
	f0.f64 = double(float(f31.f64 - f28.f64));
	// fmuls f0,f0,f26
	f0.f64 = double(float(f0.f64 * f26.f64));
	// fnmsubs f1,f0,f0,f24
	ctx.f1.f64 = double(float(-(f0.f64 * f0.f64 - f24.f64)));
	// bl 0x823da018
	sub_823DA018(ctx, base);
	// fmuls f1,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * f30.f64));
	// bl 0x823da4f8
	sub_823DA4F8(ctx, base);
	// fmr f22,f1
	ctx.fpscr.disableFlushMode();
	f22.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = f30.f64;
	// bl 0x823da4f8
	sub_823DA4F8(ctx, base);
	// fsubs f0,f31,f27
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 - f27.f64));
	// fdivs f31,f22,f1
	f31.f64 = double(float(f22.f64 / ctx.f1.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// fmuls f1,f0,f25
	ctx.f1.f64 = double(float(f0.f64 * f25.f64));
	// bl 0x823da670
	sub_823DA670(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// fmuls f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f31.f64 * ctx.f1.f64));
	// stfs f0,0(r29)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r29.u32 + 0, temp.u32);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// blt cr6,0x823dabe4
	if (cr6.lt) goto loc_823DABE4;
	// b 0x823dacac
	goto loc_823DACAC;
loc_823DAC4C:
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823dacac
	if (cr6.eq) goto loc_823DACAC;
	// clrldi r11,r31,32
	r11.u64 = r31.u64 & 0xFFFFFFFF;
	// mr r30,r28
	r30.u64 = r28.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f31,f13,f0
	f31.f64 = double(float(ctx.f13.f64 * f0.f64));
loc_823DAC74:
	// clrldi r11,r29,32
	r11.u64 = r29.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f0,f31
	f0.f64 = double(float(f0.f64 - f31.f64));
	// fadds f0,f0,f29
	f0.f64 = double(float(f0.f64 + f29.f64));
	// fmuls f1,f0,f25
	ctx.f1.f64 = double(float(f0.f64 * f25.f64));
	// bl 0x823da7c0
	sub_823DA7C0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// blt cr6,0x823dac74
	if (cr6.lt) goto loc_823DAC74;
loc_823DACAC:
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// beq cr6,0x823dacb8
	if (cr6.eq) goto loc_823DACB8;
	// stfs f23,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f23.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
loc_823DACB8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823dad24
	if (cr6.eq) goto loc_823DAD24;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
loc_823DACC8:
	// fmr f0,f23
	ctx.fpscr.disableFlushMode();
	f0.f64 = f23.f64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823dad18
	if (cr6.eq) goto loc_823DAD18;
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_823DACE0:
	// lfs f13,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// fadds f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 + f0.f64));
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bne 0x823dace0
	if (!cr0.eq) goto loc_823DACE0;
	// fdivs f0,f24,f0
	f0.f64 = double(float(f24.f64 / f0.f64));
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_823DAD00:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// bne 0x823dad00
	if (!cr0.eq) goto loc_823DAD00;
loc_823DAD18:
	// addic. r7,r7,-1
	xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x823dacc8
	if (!cr0.eq) goto loc_823DACC8;
loc_823DAD24:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-64
	r12.s64 = ctx.r1.s64 + -64;
	// bl 0x8239d61c
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823DAD34"))) PPC_WEAK_FUNC(sub_823DAD34);
PPC_FUNC_IMPL(__imp__sub_823DAD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DAD38"))) PPC_WEAK_FUNC(sub_823DAD38);
PPC_FUNC_IMPL(__imp__sub_823DAD38) {
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
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x823dad74
	if (!cr6.eq) goto loc_823DAD74;
	// addi r11,r1,88
	r11.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_823DAD74:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	f0.f64 = double(temp.f32);
	// lfs f9,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x823dad8c
	if (!cr6.lt) goto loc_823DAD8C;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_823DAD8C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f11,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x823dada0
	if (!cr6.gt) goto loc_823DADA0;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_823DADA0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lfs f12,-15180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15180);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lfs f13,-4584(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -4584);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f0,f12,f13
	ctx.f13.f64 = double(float(-(f0.f64 * ctx.f12.f64 - ctx.f13.f64)));
	// fmadds f10,f13,f0,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f11.f64));
	// beq cr6,0x823dae58
	if (cr6.eq) goto loc_823DAE58;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x823dae58
	if (cr6.eq) goto loc_823DAE58;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x823dadd8
	if (!cr6.lt) goto loc_823DADD8;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_823DADD8:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x823dade4
	if (!cr6.gt) goto loc_823DADE4;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_823DADE4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f13,-15184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15184);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmadds f12,f0,f12,f13
	ctx.f12.f64 = double(float(f0.f64 * ctx.f12.f64 + ctx.f13.f64));
	// lfd f13,-15192(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -15192);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fcmpu cr6,f1,f13
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// lfs f13,22980(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 22980);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f13,f12,f0,f13
	ctx.f13.f64 = double(float(-(ctx.f12.f64 * f0.f64 - ctx.f13.f64)));
	// ble cr6,0x823dae1c
	if (!cr6.gt) goto loc_823DAE1C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-15200(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -15200);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x823dae20
	if (cr6.lt) goto loc_823DAE20;
loc_823DAE1C:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823DAE20:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x823dae2c
	if (!cr6.lt) goto loc_823DAE2C;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823DAE2C:
	// fcmpu cr6,f13,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x823dae38
	if (!cr6.lt) goto loc_823DAE38;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823DAE38:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f0,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	f0.f64 = double(temp.f32);
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x823dae50
	if (cr6.lt) goto loc_823DAE50;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_823DAE50:
	// fmuls f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 * ctx.f13.f64));
	// b 0x823dae98
	goto loc_823DAE98;
loc_823DAE58:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-15208(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -15208);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x823dae78
	if (!cr6.gt) goto loc_823DAE78;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-15216(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -15216);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x823dae7c
	if (cr6.lt) goto loc_823DAE7C;
loc_823DAE78:
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823DAE7C:
	// fcmpu cr6,f10,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f10.f64, ctx.f11.f64);
	// bge cr6,0x823dae88
	if (!cr6.lt) goto loc_823DAE88;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
loc_823DAE88:
	// fdivs f0,f11,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f11.f64 / ctx.f1.f64));
	// fcmpu cr6,f0,f11
	cr6.compare(f0.f64, ctx.f11.f64);
	// blt cr6,0x823dae98
	if (cr6.lt) goto loc_823DAE98;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_823DAE98:
	// fmuls f13,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(f0.f64 * ctx.f10.f64));
	// lis r11,-32254
	r11.s64 = -2113798144;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lfs f0,-8088(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8088);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,4(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 4, temp.u32);
	// lfs f0,-15220(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15220);
	f0.f64 = double(temp.f32);
	// lis r11,31
	r11.s64 = 2031616;
	// ori r10,r11,65535
	ctx.r10.u64 = r11.u64 | 65535;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f10,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f10
	f0.f64 = double(float(ctx.f1.f64 * f0.f64 + ctx.f10.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,648(r31)
	PPC_STORE_U32(r31.u32 + 648, r11.u32);
	// ble cr6,0x823daee8
	if (!cr6.gt) goto loc_823DAEE8;
	// stw r10,648(r31)
	PPC_STORE_U32(r31.u32 + 648, ctx.r10.u32);
loc_823DAEE8:
	// lfs f1,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// cmpwi cr6,r5,2
	cr6.compare<int32_t>(ctx.r5.s32, 2, xer);
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// bne cr6,0x823daf34
	if (!cr6.eq) goto loc_823DAF34;
	// lfs f0,8(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x823daf08
	if (!cr6.lt) goto loc_823DAF08;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_823DAF08:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x823daf14
	if (!cr6.gt) goto loc_823DAF14;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_823DAF14:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,11004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,-27448(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27448);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,-26876(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -26876);
	ctx.f13.f64 = double(temp.f32);
	// b 0x823dafb4
	goto loc_823DAFB4;
loc_823DAF34:
	// cmpwi cr6,r5,3
	cr6.compare<int32_t>(ctx.r5.s32, 3, xer);
	// bne cr6,0x823daf74
	if (!cr6.eq) goto loc_823DAF74;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x823daf4c
	if (!cr6.lt) goto loc_823DAF4C;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_823DAF4C:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x823daf58
	if (!cr6.gt) goto loc_823DAF58;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_823DAF58:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f13,3008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 3008);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f12,-28584(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -28584);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f13,f0,f13,f12
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fmadds f2,f13,f0,f10
	ctx.f2.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f10.f64));
	// b 0x823dafc4
	goto loc_823DAFC4;
loc_823DAF74:
	// cmpwi cr6,r5,5
	cr6.compare<int32_t>(ctx.r5.s32, 5, xer);
	// bne cr6,0x823dafbc
	if (!cr6.eq) goto loc_823DAFBC;
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f9
	cr6.compare(f0.f64, ctx.f9.f64);
	// bge cr6,0x823daf8c
	if (!cr6.lt) goto loc_823DAF8C;
	// fmr f0,f9
	f0.f64 = ctx.f9.f64;
loc_823DAF8C:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, ctx.f11.f64);
	// ble cr6,0x823daf98
	if (!cr6.gt) goto loc_823DAF98;
	// fmr f0,f11
	f0.f64 = ctx.f11.f64;
loc_823DAF98:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,31836(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 31836);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f12,-18768(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18768);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fmadds f12,f0,f13,f12
	ctx.f12.f64 = double(float(f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f13,-27476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	ctx.f13.f64 = double(temp.f32);
loc_823DAFB4:
	// fmadds f2,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f12.f64 * f0.f64 + ctx.f13.f64));
	// b 0x823dafc4
	goto loc_823DAFC4;
loc_823DAFBC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f2,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f2.f64 = double(temp.f32);
loc_823DAFC4:
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// li r3,7
	ctx.r3.s64 = 7;
	// bne cr6,0x823dafd4
	if (!cr6.eq) goto loc_823DAFD4;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
loc_823DAFD4:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x823da8b8
	sub_823DA8B8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r4,r31,8
	ctx.r4.s64 = r31.s64 + 8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823da0a0
	sub_823DA0A0(ctx, base);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
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

__attribute__((alias("__imp__sub_823DB014"))) PPC_WEAK_FUNC(sub_823DB014);
PPC_FUNC_IMPL(__imp__sub_823DB014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB018"))) PPC_WEAK_FUNC(sub_823DB018);
PPC_FUNC_IMPL(__imp__sub_823DB018) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r15,r9
	r15.u64 = ctx.r9.u64;
	// mr r14,r10
	r14.u64 = ctx.r10.u64;
	// bl 0x826e528c
	__imp__VdQueryVideoMode(ctx, base);
	// lwz r29,120(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// cntlzw r11,r29
	r11.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r10,r11,1
	ctx.r10.s64 = r11.s64 + 1;
	// bne cr6,0x823db07c
	if (!cr6.eq) goto loc_823DB07C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823db07c
	if (!cr6.eq) goto loc_823DB07C;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_823DB07C:
	// lwz r20,420(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// rlwinm r25,r27,16,16,31
	r25.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF;
	// lwz r18,21396(r28)
	r18.u64 = PPC_LOAD_U32(r28.u32 + 21396);
	// rlwinm r19,r31,16,16,31
	r19.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 16) & 0xFFFF;
	// lwz r16,21392(r28)
	r16.u64 = PPC_LOAD_U32(r28.u32 + 21392);
	// clrlwi r17,r31,16
	r17.u64 = r31.u32 & 0xFFFF;
	// rlwinm r28,r30,16,16,31
	r28.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF;
	// clrlwi r24,r30,16
	r24.u64 = r30.u32 & 0xFFFF;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// clrlwi r27,r27,16
	r27.u64 = r27.u32 & 0xFFFF;
	// rlwinm r23,r26,16,16,31
	r23.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 16) & 0xFFFF;
	// clrlwi r22,r26,16
	r22.u64 = r26.u32 & 0xFFFF;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823db0d8
	if (!cr6.eq) goto loc_823DB0D8;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// bne cr6,0x823db0c4
	if (!cr6.eq) goto loc_823DB0C4;
	// li r11,7
	r11.s64 = 7;
	// b 0x823db0d4
	goto loc_823DB0D4;
loc_823DB0C4:
	// subfc r11,r23,r28
	xer.ca = r28.u32 >= r23.u32;
	r11.s64 = r28.s64 - r23.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
loc_823DB0D4:
	// stw r11,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r11.u32);
loc_823DB0D8:
	// lwz r11,0(r15)
	r11.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823db11c
	if (!cr6.eq) goto loc_823DB11C;
	// divwu r11,r22,r10
	r11.u32 = r22.u32 / ctx.r10.u32;
	// twllei r10,0
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bne cr6,0x823db108
	if (!cr6.eq) goto loc_823DB108;
	// subfic r11,r29,0
	xer.ca = r29.u32 <= 0;
	r11.s64 = 0 - r29.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// addi r11,r11,7
	r11.s64 = r11.s64 + 7;
	// b 0x823db118
	goto loc_823DB118;
loc_823DB108:
	// subfc r11,r11,r24
	xer.ca = r24.u32 >= r11.u32;
	r11.s64 = r24.s64 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
loc_823DB118:
	// stw r11,0(r15)
	PPC_STORE_U32(r15.u32 + 0, r11.u32);
loc_823DB11C:
	// clrldi r9,r23,32
	ctx.r9.u64 = r23.u64 & 0xFFFFFFFF;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f30,f0,f13
	f30.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfs f0,-27476(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27476);
	f0.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,-15152(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -15152);
	// fcmpu cr6,f30,f0
	cr6.compare(f30.f64, f0.f64);
	// blt cr6,0x823db16c
	if (cr6.lt) goto loc_823DB16C;
	// fcmpu cr6,f30,f13
	cr6.compare(f30.f64, ctx.f13.f64);
	// bgt cr6,0x823db16c
	if (cr6.gt) goto loc_823DB16C;
	// fmr f30,f0
	f30.f64 = f0.f64;
loc_823DB16C:
	// clrldi r11,r24,32
	r11.u64 = r24.u64 & 0xFFFFFFFF;
	// clrldi r9,r22,32
	ctx.r9.u64 = r22.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f11,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fdivs f31,f12,f10
	f31.f64 = double(float(ctx.f12.f64 / ctx.f10.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x823db1c8
	if (cr6.lt) goto loc_823DB1C8;
	// fcmpu cr6,f31,f13
	cr6.compare(f31.f64, ctx.f13.f64);
	// bgt cr6,0x823db1c8
	if (cr6.gt) goto loc_823DB1C8;
	// fmr f31,f0
	f31.f64 = f0.f64;
	// b 0x823db20c
	goto loc_823DB20C;
loc_823DB1C8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,11004(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 11004);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(f31.f64, ctx.f13.f64);
	// blt cr6,0x823db1e8
	if (cr6.lt) goto loc_823DB1E8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-15160(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -15160);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x823db208
	if (!cr6.gt) goto loc_823DB208;
loc_823DB1E8:
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,560(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 560);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f31,f13
	cr6.compare(f31.f64, ctx.f13.f64);
	// blt cr6,0x823db20c
	if (cr6.lt) goto loc_823DB20C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f0,-15200(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -15200);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bgt cr6,0x823db20c
	if (cr6.gt) goto loc_823DB20C;
loc_823DB208:
	// fmr f31,f13
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f13.f64;
loc_823DB20C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// twllei r9,0
	// lwz r11,2188(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2188);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// divwu r11,r10,r9
	r11.u32 = ctx.r10.u32 / ctx.r9.u32;
	// rlwinm r26,r11,1,0,30
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r26,10
	cr6.compare<uint32_t>(r26.u32, 10, xer);
	// ble cr6,0x823db234
	if (!cr6.gt) goto loc_823DB234;
	// li r26,10
	r26.s64 = 10;
loc_823DB234:
	// li r11,7680
	r11.s64 = 7680;
	// twllei r28,0
	// divwu r11,r11,r28
	r11.u32 = r11.u32 / r28.u32;
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// li r11,6
	r11.s64 = 6;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(r30.u32, 6, xer);
	// bgt cr6,0x823db254
	if (cr6.gt) goto loc_823DB254;
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823DB254:
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f12,f0
	ctx.f12.f64 = double(float(f0.f64));
	// frsp f0,f13
	f0.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f12,f30
	ctx.f13.f64 = double(float(ctx.f12.f64 * f30.f64));
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(f0.f64 / ctx.f13.f64));
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f12,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823db2ac
	if (!cr6.lt) goto loc_823DB2AC;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(r30.u32, 6, xer);
	// ble cr6,0x823db2c0
	if (!cr6.gt) goto loc_823DB2C0;
	// li r30,6
	r30.s64 = 6;
	// b 0x823db2c0
	goto loc_823DB2C0;
loc_823DB2AC:
	// fdivs f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823DB2C0:
	// lwz r31,436(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// li r5,1408
	ctx.r5.s64 = 1408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r5,0(r15)
	ctx.r5.u64 = PPC_LOAD_U32(r15.u32 + 0);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r31,652
	r30.s64 = r31.s64 + 652;
	// bl 0x823dad38
	sub_823DAD38(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// lwz r5,0(r20)
	ctx.r5.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,428(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f30.f64;
	// bl 0x823dad38
	sub_823DAD38(ctx, base);
	// addi r6,r28,3
	ctx.r6.s64 = r28.s64 + 3;
	// rlwinm r11,r21,16,16,31
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 16) & 0xFFFF;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,648(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// clrlwi r6,r21,16
	ctx.r6.u64 = r21.u32 & 0xFFFF;
	// rlwinm r10,r11,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// li r11,0
	r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r6,r6,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// cntlzw r3,r29
	ctx.r3.u64 = r29.u32 == 0 ? 32 : __builtin_clz(r29.u32);
	// subf r26,r22,r16
	r26.s64 = r16.s64 - r22.s64;
	// stw r11,1348(r31)
	PPC_STORE_U32(r31.u32 + 1348, r11.u32);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// stw r7,1360(r31)
	PPC_STORE_U32(r31.u32 + 1360, ctx.r7.u32);
	// rlwinm r7,r3,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r3,r28,16,4,15
	ctx.r3.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 16) & 0xFFF0000;
	// stw r6,1344(r31)
	PPC_STORE_U32(r31.u32 + 1344, ctx.r6.u32);
	// addi r6,r9,-1
	ctx.r6.s64 = ctx.r9.s64 + -1;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stw r10,1340(r31)
	PPC_STORE_U32(r31.u32 + 1340, ctx.r10.u32);
	// clrlwi r28,r24,20
	r28.u64 = r24.u32 & 0xFFF;
	// stw r10,1320(r31)
	PPC_STORE_U32(r31.u32 + 1320, ctx.r10.u32);
	// rlwimi r6,r4,8,20,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0xF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF0FF);
	// stw r11,1332(r31)
	PPC_STORE_U32(r31.u32 + 1332, r11.u32);
	// rlwinm r24,r19,16,4,15
	r24.u64 = __builtin_rotateleft64(r19.u32 | (r19.u64 << 32), 16) & 0xFFF0000;
	// stw r11,1336(r31)
	PPC_STORE_U32(r31.u32 + 1336, r11.u32);
	// clrlwi r22,r17,20
	r22.u64 = r17.u32 & 0xFFF;
	// or r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 | r28.u64;
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// or r28,r24,r22
	r28.u64 = r24.u64 | r22.u64;
	// subf r23,r23,r18
	r23.s64 = r18.s64 - r23.s64;
	// subf r26,r27,r26
	r26.s64 = r26.s64 - r27.s64;
	// subf r23,r25,r23
	r23.s64 = r23.s64 - r25.s64;
	// stw r3,1356(r31)
	PPC_STORE_U32(r31.u32 + 1356, ctx.r3.u32);
	// clrlwi r3,r27,20
	ctx.r3.u64 = r27.u32 & 0xFFF;
	// stw r5,1404(r31)
	PPC_STORE_U32(r31.u32 + 1404, ctx.r5.u32);
	// stw r28,1352(r31)
	PPC_STORE_U32(r31.u32 + 1352, r28.u32);
	// clrlwi r5,r26,20
	ctx.r5.u64 = r26.u32 & 0xFFF;
	// clrlwi r28,r25,20
	r28.u64 = r25.u32 & 0xFFF;
	// clrlwi r27,r23,20
	r27.u64 = r23.u32 & 0xFFF;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r3,1304(r31)
	PPC_STORE_U32(r31.u32 + 1304, ctx.r3.u32);
	// stw r5,1308(r31)
	PPC_STORE_U32(r31.u32 + 1308, ctx.r5.u32);
	// stw r28,1312(r31)
	PPC_STORE_U32(r31.u32 + 1312, r28.u32);
	// andi. r6,r6,3847
	ctx.r6.u64 = ctx.r6.u64 & 3847;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r27,1316(r31)
	PPC_STORE_U32(r31.u32 + 1316, r27.u32);
	// stw r6,1364(r31)
	PPC_STORE_U32(r31.u32 + 1364, ctx.r6.u32);
	// lwz r10,648(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 648);
	// rlwinm r10,r10,5,6,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0x3FFFFE0;
	// stw r10,1376(r31)
	PPC_STORE_U32(r31.u32 + 1376, ctx.r10.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// slw r7,r8,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// clrlwi r7,r7,6
	ctx.r7.u64 = ctx.r7.u32 & 0x3FFFFFF;
	// lfs f11,-15164(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15164);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f0,-15168(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15168);
	f0.f64 = double(temp.f32);
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// stw r11,1372(r31)
	PPC_STORE_U32(r31.u32 + 1372, r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r7,1392(r31)
	PPC_STORE_U32(r31.u32 + 1392, ctx.r7.u32);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// stw r10,1388(r31)
	PPC_STORE_U32(r31.u32 + 1388, ctx.r10.u32);
	// lwz r11,648(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 648);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f12,f13,f11,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fadds f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// lfs f12,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f12.f64));
	// fctidz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f10,0,r6
	PPC_STORE_U32(ctx.r6.u32, ctx.f10.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,9,12,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFFE00;
	// stw r11,1380(r31)
	PPC_STORE_U32(r31.u32 + 1380, r11.u32);
	// beq cr6,0x823db500
	if (cr6.eq) goto loc_823DB500;
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfs f9,-15172(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15172);
	ctx.f9.f64 = double(temp.f32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f8,-15176(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -15176);
	ctx.f8.f64 = double(temp.f32);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f9,f11,f9,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f9.f64 + ctx.f10.f64));
	// fmadds f11,f11,f8,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f10.f64));
	// fadds f10,f9,f13
	ctx.f10.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fmadds f11,f10,f0,f12
	ctx.f11.f64 = double(float(ctx.f10.f64 * f0.f64 + ctx.f12.f64));
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfiwx f13,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// rlwinm r11,r11,9,13,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7FE00;
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// stw r11,1396(r31)
	PPC_STORE_U32(r31.u32 + 1396, r11.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,9,13,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7FE00;
	// stw r11,1400(r31)
	PPC_STORE_U32(r31.u32 + 1400, r11.u32);
	// b 0x823db54c
	goto loc_823DB54C;
loc_823DB500:
	// clrldi r11,r8,32
	r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f10,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmadds f11,f10,f11,f9
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// fmadds f0,f13,f0,f12
	f0.f64 = double(float(ctx.f13.f64 * f0.f64 + ctx.f12.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,9,13,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7FE00;
	// stw r11,1396(r31)
	PPC_STORE_U32(r31.u32 + 1396, r11.u32);
loc_823DB54C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823DB560"))) PPC_WEAK_FUNC(sub_823DB560);
PPC_FUNC_IMPL(__imp__sub_823DB560) {
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
	// stwu r1,-2464(r1)
	ea = -2464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x823d9a50
	sub_823D9A50(ctx, base);
	// lwz r11,136(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r6,128(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r9,r6,r11
	ctx.r9.s64 = r11.s64 - ctx.r6.s64;
	// lwz r11,140(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,21396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 21396);
	// lwz r8,21388(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 21388);
	// subf r3,r5,r11
	ctx.r3.s64 = r11.s64 - ctx.r5.s64;
	// lwz r11,144(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x823db5dc
	if (cr6.eq) goto loc_823DB5DC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823db5c0
	if (cr6.lt) goto loc_823DB5C0;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x823db5c0
	if (cr6.gt) goto loc_823DB5C0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823DB5C0:
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x823db5dc
	if (cr6.lt) goto loc_823DB5DC;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bgt cr6,0x823db5dc
	if (cr6.gt) goto loc_823DB5DC;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - r11.s64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
loc_823DB5DC:
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - r11.s64;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r8,21392(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 21392);
	// clrlwi r4,r30,16
	ctx.r4.u64 = r30.u32 & 0xFFFF;
	// rlwinm r27,r11,16,0,15
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// subf r30,r10,r8
	r30.s64 = ctx.r8.s64 - ctx.r10.s64;
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r30,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 31) & 0x7FFFFFFF;
	// clrlwi r30,r29,16
	r30.u64 = r29.u32 & 0xFFFF;
	// clrlwi r11,r9,16
	r11.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwimi r30,r4,16,0,15
	r30.u64 = (__builtin_rotateleft32(ctx.r4.u32, 16) & 0xFFFF0000) | (r30.u64 & 0xFFFFFFFF0000FFFF);
	// clrlwi r4,r5,16
	ctx.r4.u64 = ctx.r5.u32 & 0xFFFF;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwimi r5,r11,16,0,15
	ctx.r5.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r5.u64 & 0xFFFFFFFF0000FFFF);
	// lwz r11,152(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// clrlwi r10,r6,16
	ctx.r10.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r9,r1,992
	ctx.r9.s64 = ctx.r1.s64 + 992;
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// clrlwi r29,r7,16
	r29.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r11,168(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r10,r1,156
	ctx.r10.s64 = ctx.r1.s64 + 156;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// or r7,r28,r27
	ctx.r7.u64 = r28.u64 | r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// clrlwi r11,r8,16
	r11.u64 = ctx.r8.u32 & 0xFFFF;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// rlwimi r29,r11,16,0,15
	r29.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (r29.u64 & 0xFFFFFFFF0000FFFF);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// bl 0x823db018
	sub_823DB018(ctx, base);
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// li r4,800
	ctx.r4.s64 = 800;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x826e4dbc
	__imp__RtlFillMemoryUlong(ctx, base);
	// li r4,220
	ctx.r4.s64 = 220;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d24b8
	sub_823D24B8(ctx, base);
	// lwz r11,128(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r6,r1,172
	ctx.r6.s64 = ctx.r1.s64 + 172;
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r7,r1,992
	ctx.r7.s64 = ctx.r1.s64 + 992;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - r11.s64;
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// clrlwi r26,r10,16
	r26.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r9,200
	ctx.r9.s64 = 200;
	// clrlwi r4,r8,16
	ctx.r4.u64 = ctx.r8.u32 & 0xFFFF;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwimi r26,r11,16,0,15
	r26.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (r26.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// or r6,r5,r27
	ctx.r6.u64 = ctx.r5.u64 | r27.u64;
	// rlwimi r4,r10,16,0,15
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r4.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x826e530c
	__imp__VdInitializeScalerCommandBuffer(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r28,4
	ctx.r3.s64 = r28.s64 + 4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,2464
	ctx.r1.s64 = ctx.r1.s64 + 2464;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823DB72C"))) PPC_WEAK_FUNC(sub_823DB72C);
PPC_FUNC_IMPL(__imp__sub_823DB72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB730"))) PPC_WEAK_FUNC(sub_823DB730);
PPC_FUNC_IMPL(__imp__sub_823DB730) {
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
	// lwz r11,14676(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 14676);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823db770
	if (cr0.eq) goto loc_823DB770;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r10,r10,2,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x2;
	// clrlwi r9,r11,19
	ctx.r9.u64 = r11.u32 & 0x1FFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,19,19,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x1FFF;
	// add r30,r9,r10
	r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823db778
	goto loc_823DB778;
loc_823DB770:
	// lwz r30,13392(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 13392);
	// lwz r29,13396(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 13396);
loc_823DB778:
	// addi r28,r31,13572
	r28.s64 = r31.s64 + 13572;
	// li r5,56
	ctx.r5.s64 = 56;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lbz r11,10814(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,10814(r31)
	PPC_STORE_U8(r31.u32 + 10814, r11.u8);
	// bl 0x823d9bf0
	sub_823D9BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823DB7B0"))) PPC_WEAK_FUNC(sub_823DB7B0);
PPC_FUNC_IMPL(__imp__sub_823DB7B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x823d9b78
	sub_823D9B78(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823db730
	sub_823DB730(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DB7DC"))) PPC_WEAK_FUNC(sub_823DB7DC);
PPC_FUNC_IMPL(__imp__sub_823DB7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB7E0"))) PPC_WEAK_FUNC(sub_823DB7E0);
PPC_FUNC_IMPL(__imp__sub_823DB7E0) {
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
	// stwu r1,-2192(r1)
	ea = -2192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x826e534c
	__imp__KeEnterCriticalRegion(ctx, base);
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lwz r3,2208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 2208);
	// bl 0x826e4b6c
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823db818
	if (cr6.eq) goto loc_823DB818;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x826e533c
	__imp__VdRetrainEDRAMWorker(ctx, base);
loc_823DB818:
	// li r11,0
	r11.s64 = 0;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826e532c
	__imp__VdRetrainEDRAM(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823db8b0
	if (cr0.eq) goto loc_823DB8B0;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x823db858
	if (!cr6.eq) goto loc_823DB858;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d2520
	sub_823D2520(ctx, base);
loc_823DB858:
	// li r4,4096
	ctx.r4.s64 = 4096;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d24b8
	sub_823D24B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r8,2048
	ctx.r8.s64 = 2048;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4096
	ctx.r5.s64 = 4096;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x826e532c
	__imp__VdRetrainEDRAM(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x823d2520
	sub_823D2520(ctx, base);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x823db858
	if (!cr6.eq) goto loc_823DB858;
loc_823DB8B0:
	// lwz r3,2208(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 2208);
	// bl 0x826e4b7c
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x826e531c
	__imp__KeLeaveCriticalRegion(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2192
	ctx.r1.s64 = ctx.r1.s64 + 2192;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823DB8C8"))) PPC_WEAK_FUNC(sub_823DB8C8);
PPC_FUNC_IMPL(__imp__sub_823DB8C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-29529(r10)
	PPC_STORE_U8(ctx.r10.u32 + -29529, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DB8DC"))) PPC_WEAK_FUNC(sub_823DB8DC);
PPC_FUNC_IMPL(__imp__sub_823DB8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB8E0"))) PPC_WEAK_FUNC(sub_823DB8E0);
PPC_FUNC_IMPL(__imp__sub_823DB8E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,0
	r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-29529(r10)
	PPC_STORE_U8(ctx.r10.u32 + -29529, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DB8F4"))) PPC_WEAK_FUNC(sub_823DB8F4);
PPC_FUNC_IMPL(__imp__sub_823DB8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB8F8"))) PPC_WEAK_FUNC(sub_823DB8F8);
PPC_FUNC_IMPL(__imp__sub_823DB8F8) {
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
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// subf r11,r3,r11
	r11.s64 = r11.s64 - ctx.r3.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DB92C"))) PPC_WEAK_FUNC(sub_823DB92C);
PPC_FUNC_IMPL(__imp__sub_823DB92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB930"))) PPC_WEAK_FUNC(sub_823DB930);
PPC_FUNC_IMPL(__imp__sub_823DB930) {
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
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// lis r11,2
	r11.s64 = 131072;
	// ori r11,r11,32728
	r11.u64 = r11.u64 | 32728;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bge cr6,0x823db964
	if (!cr6.lt) goto loc_823DB964;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823a0c30
	sub_823A0C30(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
loc_823DB964:
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,-12612(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12612, r11.u32);
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

__attribute__((alias("__imp__sub_823DB984"))) PPC_WEAK_FUNC(sub_823DB984);
PPC_FUNC_IMPL(__imp__sub_823DB984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB988"))) PPC_WEAK_FUNC(sub_823DB988);
PPC_FUNC_IMPL(__imp__sub_823DB988) {
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
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r31,r11,-29792
	r31.s64 = r11.s64 + -29792;
	// li r5,260
	ctx.r5.s64 = 260;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,262(r31)
	PPC_STORE_U8(r31.u32 + 262, r11.u8);
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

__attribute__((alias("__imp__sub_823DB9D0"))) PPC_WEAK_FUNC(sub_823DB9D0);
PPC_FUNC_IMPL(__imp__sub_823DB9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-29531(r10)
	PPC_STORE_U8(ctx.r10.u32 + -29531, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DB9E4"))) PPC_WEAK_FUNC(sub_823DB9E4);
PPC_FUNC_IMPL(__imp__sub_823DB9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DB9E8"))) PPC_WEAK_FUNC(sub_823DB9E8);
PPC_FUNC_IMPL(__imp__sub_823DB9E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,-29532(r10)
	PPC_STORE_U8(ctx.r10.u32 + -29532, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DB9FC"))) PPC_WEAK_FUNC(sub_823DB9FC);
PPC_FUNC_IMPL(__imp__sub_823DB9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DBA00"))) PPC_WEAK_FUNC(sub_823DBA00);
PPC_FUNC_IMPL(__imp__sub_823DBA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// addi r11,r3,21544
	r11.s64 = ctx.r3.s64 + 21544;
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r10,41
	ctx.r10.s64 = 41;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823DBA10:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x823dba10
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823DBA10;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DBA24"))) PPC_WEAK_FUNC(sub_823DBA24);
PPC_FUNC_IMPL(__imp__sub_823DBA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DBA28"))) PPC_WEAK_FUNC(sub_823DBA28);
PPC_FUNC_IMPL(__imp__sub_823DBA28) {
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
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,-8356
	ctx.r10.s64 = ctx.r10.s64 + -8356;
	// addi r28,r11,6
	r28.s64 = r11.s64 + 6;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// lis r25,-32038
	r25.s64 = -2099642368;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r5,54
	ctx.r5.s64 = 54;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,90
	ctx.r3.s64 = ctx.r1.s64 + 90;
	// ori r25,r25,7
	r25.u64 = r25.u64 | 7;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lhz r11,8(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, r11.u16);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r10,-18232
	ctx.r10.s64 = ctx.r10.s64 + -18232;
	// addi r11,r11,-8372
	r11.s64 = r11.s64 + -8372;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,161
	ctx.r3.s64 = ctx.r1.s64 + 161;
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r11,12(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stb r11,160(r1)
	PPC_STORE_U8(ctx.r1.u32 + 160, r11.u8);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r10,-18208
	ctx.r10.s64 = ctx.r10.s64 + -18208;
	// addi r11,r11,-8384
	r11.s64 = r11.s64 + -8384;
	// li r5,54
	ctx.r5.s64 = 54;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,226
	ctx.r3.s64 = ctx.r1.s64 + 226;
	// stw r10,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// sth r11,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, r11.u16);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r10,-18184
	ctx.r10.s64 = ctx.r10.s64 + -18184;
	// addi r11,r11,-8404
	r11.s64 = r11.s64 + -8404;
	// addi r9,r1,284
	ctx.r9.s64 = ctx.r1.s64 + 284;
	// stw r10,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r10.u32);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// li r11,19
	r11.s64 = 19;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823DBB20:
	// lbz r11,0(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, r11.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bdnz 0x823dbb20
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823DBB20;
	// li r5,45
	ctx.r5.s64 = 45;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,303
	ctx.r3.s64 = ctx.r1.s64 + 303;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// addi r4,r11,-8432
	ctx.r4.s64 = r11.s64 + -8432;
	// addi r11,r10,-18128
	r11.s64 = ctx.r10.s64 + -18128;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// li r5,27
	ctx.r5.s64 = 27;
	// stw r11,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r5,37
	ctx.r5.s64 = 37;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,379
	ctx.r3.s64 = ctx.r1.s64 + 379;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// addi r4,r11,-8460
	ctx.r4.s64 = r11.s64 + -8460;
	// addi r11,r10,-18040
	r11.s64 = ctx.r10.s64 + -18040;
	// addi r3,r1,420
	ctx.r3.s64 = ctx.r1.s64 + 420;
	// li r5,25
	ctx.r5.s64 = 25;
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r5,39
	ctx.r5.s64 = 39;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,445
	ctx.r3.s64 = ctx.r1.s64 + 445;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r10,-17944
	ctx.r10.s64 = ctx.r10.s64 + -17944;
	// addi r11,r11,-8476
	r11.s64 = r11.s64 + -8476;
	// li r5,49
	ctx.r5.s64 = 49;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,503
	ctx.r3.s64 = ctx.r1.s64 + 503;
	// stw r10,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r10.u32);
	// lhz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// lbz r11,14(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 14);
	// sth r10,500(r1)
	PPC_STORE_U16(ctx.r1.u32 + 500, ctx.r10.u16);
	// stb r11,502(r1)
	PPC_STORE_U8(ctx.r1.u32 + 502, r11.u8);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r10,-17968
	ctx.r10.s64 = ctx.r10.s64 + -17968;
	// addi r11,r11,-8492
	r11.s64 = r11.s64 + -8492;
	// li r5,51
	ctx.r5.s64 = 51;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,569
	ctx.r3.s64 = ctx.r1.s64 + 569;
	// stw r10,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lbz r11,12(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12);
	// stw r10,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r10.u32);
	// stb r11,568(r1)
	PPC_STORE_U8(ctx.r1.u32 + 568, r11.u8);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// lis r11,-32194
	r11.s64 = -2109865984;
	// li r29,0
	r29.s64 = 0;
	// addi r11,r11,-17944
	r11.s64 = r11.s64 + -17944;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// stw r11,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, r11.u32);
loc_823DBC48:
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823DBC50:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823dbc50
	if (!cr6.eq) goto loc_823DBC50;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rotlwi r30,r11,0
	r30.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823dbcb4
	if (cr0.eq) goto loc_823DBCB4;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,68
	r31.s64 = r31.s64 + 68;
	// cmplwi cr6,r29,8
	cr6.compare<uint32_t>(r29.u32, 8, xer);
	// blt cr6,0x823dbc48
	if (cr6.lt) goto loc_823DBC48;
loc_823DBC94:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-15432
	ctx.r4.s64 = r11.s64 + -15432;
loc_823DBC9C:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x8239bd3c
	return;
loc_823DBCB4:
	// mulli r10,r29,68
	ctx.r10.s64 = r29.s64 * 68;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
	// addi r3,r11,1
	ctx.r3.s64 = r11.s64 + 1;
	// lwzx r11,r10,r9
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r25,730
	r25.s64 = 47841280;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823dbc94
	if (cr0.eq) goto loc_823DBC94;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-15424
	ctx.r4.s64 = r11.s64 + -15424;
	// b 0x823dbc9c
	goto loc_823DBC9C;
}

__attribute__((alias("__imp__sub_823DBCE8"))) PPC_WEAK_FUNC(sub_823DBCE8);
PPC_FUNC_IMPL(__imp__sub_823DBCE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1028
	ctx.r5.s64 = 1028;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// li r30,0
	r30.s64 = 0;
	// bl 0x826e4c0c
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823dbd58
	if (!cr0.eq) goto loc_823DBD58;
	// lis r4,-18048
	ctx.r4.s64 = -1182793728;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823dbd48
	if (cr0.eq) goto loc_823DBD48;
	// li r30,1
	r30.s64 = 1;
	// b 0x823dbd58
	goto loc_823DBD58;
loc_823DBD48:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823dbd58
	if (cr6.eq) goto loc_823DBD58;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,2
	r30.s64 = 2;
loc_823DBD58:
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823DBD68"))) PPC_WEAK_FUNC(sub_823DBD68);
PPC_FUNC_IMPL(__imp__sub_823DBD68) {
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
	// addi r31,r3,21524
	r31.s64 = ctx.r3.s64 + 21524;
	// lwz r3,592(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823dbdb0
	if (cr0.eq) goto loc_823DBDB0;
	// lwz r11,604(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// rlwinm. r11,r11,0,4,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dbda8
	if (!cr0.eq) goto loc_823DBDA8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826e4c2c
	__imp__MmFreePhysicalMemory(ctx, base);
	// b 0x823dbdb0
	goto loc_823DBDB0;
loc_823DBDA8:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823DBDB0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r30,-20096
	r30.s64 = -1317011456;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823dbdec
	if (cr0.eq) goto loc_823DBDEC;
	// lwz r11,604(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// srawi r11,r11,30
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFFFF) != 0);
	r11.s64 = r11.s32 >> 30;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x823dbde0
	if (cr6.lt) goto loc_823DBDE0;
	// bne cr6,0x823dbdec
	if (!cr6.eq) goto loc_823DBDEC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// b 0x823dbdec
	goto loc_823DBDEC;
loc_823DBDE0:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826e4c2c
	__imp__MmFreePhysicalMemory(ctx, base);
loc_823DBDEC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823dbe28
	if (cr0.eq) goto loc_823DBE28;
	// lwz r11,604(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r11,r11,30
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFFFF) != 0);
	r11.s64 = r11.s32 >> 30;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x823dbe1c
	if (cr6.lt) goto loc_823DBE1C;
	// bne cr6,0x823dbe28
	if (!cr6.eq) goto loc_823DBE28;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// b 0x823dbe28
	goto loc_823DBE28;
loc_823DBE1C:
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826e4c2c
	__imp__MmFreePhysicalMemory(ctx, base);
loc_823DBE28:
	// li r5,612
	ctx.r5.s64 = 612;
	// lwz r30,608(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 608);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,608(r31)
	PPC_STORE_U32(r31.u32 + 608, r30.u32);
	// li r10,41
	ctx.r10.s64 = 41;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823DBE50:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x823dbe50
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823DBE50;
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

__attribute__((alias("__imp__sub_823DBE74"))) PPC_WEAK_FUNC(sub_823DBE74);
PPC_FUNC_IMPL(__imp__sub_823DBE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DBE78"))) PPC_WEAK_FUNC(sub_823DBE78);
PPC_FUNC_IMPL(__imp__sub_823DBE78) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,21524
	r31.s64 = ctx.r3.s64 + 21524;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r26,r31,600
	r26.s64 = r31.s64 + 600;
	// addi r11,r31,372
	r11.s64 = r31.s64 + 372;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r29,r1,96
	r29.s64 = ctx.r1.s64 + 96;
	// lbz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// andi. r9,r9,191
	ctx.r9.u64 = ctx.r9.u64 & 191;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stb r9,0(r26)
	PPC_STORE_U8(r26.u32 + 0, ctx.r9.u8);
	// rlwinm. r8,r9,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r9,40(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// rlwinm r9,r9,2,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x2;
	// clrlwi r7,r10,19
	ctx.r7.u64 = ctx.r10.u32 & 0x1FFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r8,r10,19,19,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1FFF;
	// add r10,r7,r9
	ctx.r10.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r10,31
	ctx.r8.s64 = ctx.r10.s64 + 31;
	// addi r7,r9,31
	ctx.r7.s64 = ctx.r9.s64 + 31;
	// rlwinm r8,r8,0,16,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFE0;
	// sth r10,368(r31)
	PPC_STORE_U16(r31.u32 + 368, ctx.r10.u16);
	// rlwinm r7,r7,0,16,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFE0;
	// sth r9,370(r31)
	PPC_STORE_U16(r31.u32 + 370, ctx.r9.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// sth r8,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r8.u16);
	// sth r7,2(r11)
	PPC_STORE_U16(r11.u32 + 2, ctx.r7.u16);
	// lfs f0,2480(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f0.f64 = double(temp.f32);
	// lfs f10,-11704(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -11704);
	ctx.f10.f64 = double(temp.f32);
	// bne 0x823dbfb4
	if (!cr0.eq) goto loc_823DBFB4;
	// clrlwi r9,r8,16
	ctx.r9.u64 = ctx.r8.u32 & 0xFFFF;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,100
	r30.s64 = ctx.r1.s64 + 100;
	// addi r28,r1,80
	r28.s64 = ctx.r1.s64 + 80;
	// lfs f13,-8088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8088);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// addi r10,r10,2552
	ctx.r10.s64 = ctx.r10.s64 + 2552;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r27,r1,104
	r27.s64 = ctx.r1.s64 + 104;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,12
	ctx.r7.s64 = 12;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// li r6,48
	ctx.r6.s64 = 48;
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fdivs f9,f13,f11
	ctx.f9.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v10,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// addi r10,r10,7724
	ctx.r10.s64 = ctx.r10.s64 + 7724;
	// lvlx v13,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,0,r30
	temp.u32 = r30.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f8,560(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 560);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvlx v12,0,r29
	temp.u32 = r29.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,0,r28
	temp.u32 = r28.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r27
	temp.u32 = r27.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// b 0x823dc068
	goto loc_823DC068;
loc_823DBFB4:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r30,r1,104
	r30.s64 = ctx.r1.s64 + 104;
	// addi r28,r1,100
	r28.s64 = ctx.r1.s64 + 100;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f9,5736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f9,80(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r25,r1,104
	r25.s64 = ctx.r1.s64 + 104;
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,12
	ctx.r6.s64 = 12;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-8088(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8088);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r10,r10,2552
	ctx.r10.s64 = ctx.r10.s64 + 2552;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r10,r10,7724
	ctx.r10.s64 = ctx.r10.s64 + 7724;
	// fdivs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fdivs f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lvlx v13,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,0,r30
	temp.u32 = r30.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v12,0,r29
	temp.u32 = r29.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r28
	temp.u32 = r28.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,0,r27
	temp.u32 = r27.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r25
	temp.u32 = r25.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
loc_823DC068:
	// vrlimi128 v0,v9,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 57), 4));
	// addi r10,r31,408
	ctx.r10.s64 = r31.s64 + 408;
	// vrlimi128 v13,v10,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// li r9,16
	ctx.r9.s64 = 16;
	// vrlimi128 v12,v7,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// li r5,16
	ctx.r5.s64 = 16;
	// vrlimi128 v11,v8,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// li r30,16
	r30.s64 = 16;
	// li r28,16
	r28.s64 = 16;
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// li r25,16
	r25.s64 = 16;
	// li r23,16
	r23.s64 = 16;
	// vrlimi128 v12,v11,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lbz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// addi r9,r31,424
	ctx.r9.s64 = r31.s64 + 424;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823dc114
	if (!cr0.eq) goto loc_823DC114;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,-8540
	ctx.r10.s64 = ctx.r10.s64 + -8540;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// addi r29,r10,16
	r29.s64 = ctx.r10.s64 + 16;
	// addi r27,r10,32
	r27.s64 = ctx.r10.s64 + 32;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r24,r10,32
	r24.s64 = ctx.r10.s64 + 32;
	// lvrx v0,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r10,r31,440
	ctx.r10.s64 = r31.s64 + 440;
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx v0,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r9,r5
	ea = ctx.r9.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvlx v13,0,r29
	temp.u32 = r29.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v0,r3,r30
	temp.u32 = ctx.r3.u32 + r30.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r28
	ea = ctx.r10.u32 + r28.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r10,r31,456
	ctx.r10.s64 = r31.s64 + 456;
	// lvrx v0,r27,r25
	temp.u32 = r27.u32 + r25.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v13,0,r24
	temp.u32 = r24.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r23
	ea = ctx.r10.u32 + r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// b 0x823dc174
	goto loc_823DC174;
loc_823DC114:
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r10,r10,-12536
	ctx.r10.s64 = ctx.r10.s64 + -12536;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// addi r29,r10,16
	r29.s64 = ctx.r10.s64 + 16;
	// addi r27,r10,32
	r27.s64 = ctx.r10.s64 + 32;
	// lvrx v0,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r5,16
	ctx.r5.s64 = 16;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r24,r10,32
	r24.s64 = ctx.r10.s64 + 32;
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r10,r31,440
	ctx.r10.s64 = r31.s64 + 440;
	// stvlx v0,0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r9,r5
	ea = ctx.r9.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lvlx v13,0,r29
	temp.u32 = r29.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v0,r3,r30
	temp.u32 = ctx.r3.u32 + r30.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r28
	ea = ctx.r10.u32 + r28.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r10,r31,456
	ctx.r10.s64 = r31.s64 + 456;
	// lvrx v0,r27,r25
	temp.u32 = r27.u32 + r25.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v13,0,r24
	temp.u32 = r24.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r23
	ea = ctx.r10.u32 + r23.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
loc_823DC174:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// addi r30,r1,96
	r30.s64 = ctx.r1.s64 + 96;
	// lfs f11,-8336(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8336);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r29,r1,104
	r29.s64 = ctx.r1.s64 + 104;
	// li r28,16
	r28.s64 = 16;
	// addi r27,r1,100
	r27.s64 = ctx.r1.s64 + 100;
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lfs f11,-8340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8340);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r31,472
	ctx.r10.s64 = r31.s64 + 472;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// addi r24,r1,80
	r24.s64 = ctx.r1.s64 + 80;
	// lvlx v11,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// lvlx v10,0,r30
	temp.u32 = r30.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lvlx v13,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v11,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v0,v10,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r23,r1,104
	r23.s64 = ctx.r1.s64 + 104;
	// addi r22,r1,104
	r22.s64 = ctx.r1.s64 + 104;
	// li r21,16
	r21.s64 = 16;
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,-27476(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27476);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,-27448(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27448);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r31,488
	ctx.r10.s64 = r31.s64 + 488;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvlx v11,0,r30
	temp.u32 = r30.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// lvlx v10,0,r29
	temp.u32 = r29.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,104
	r29.s64 = ctx.r1.s64 + 104;
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lvlx v13,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v10,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// vrlimi128 v13,v11,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r28
	ea = ctx.r10.u32 + r28.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f11,-1472(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1472);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f11,22976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22976);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stfs f11,100(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f11,-14504(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14504);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r31,504
	ctx.r10.s64 = r31.s64 + 504;
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvlx v0,0,r27
	temp.u32 = r27.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r27,16
	r27.s64 = 16;
	// lvlx v13,0,r25
	temp.u32 = r25.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r25,r1,96
	r25.s64 = ctx.r1.s64 + 96;
	// lvlx v11,0,r24
	temp.u32 = r24.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r24,r1,100
	r24.s64 = ctx.r1.s64 + 100;
	// lvlx v10,0,r23
	temp.u32 = r23.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v11,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v13,v10,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// addi r23,r1,80
	r23.s64 = ctx.r1.s64 + 80;
	// vrlimi128 v13,v0,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r9
	ea = ctx.r10.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f12,-21452(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -21452);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r31,520
	ctx.r10.s64 = r31.s64 + 520;
	// lfs f13,-20332(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -20332);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v11,0,r30
	temp.u32 = r30.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v0,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r5,260
	ctx.r5.s64 = 260;
	// lvlx v13,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvlx v10,0,r29
	temp.u32 = r29.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v11,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v0,v10,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r28
	ea = ctx.r10.u32 + r28.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// addi r10,r31,536
	ctx.r10.s64 = r31.s64 + 536;
	// stvlx v12,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v12.u8[15 - i]);
	// stvrx v12,r10,r27
	ea = ctx.r10.u32 + r27.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v12.u8[i]);
	// addi r10,r31,552
	ctx.r10.s64 = r31.s64 + 552;
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f0,-8344(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8344);
	f0.f64 = double(temp.f32);
	// stfs f10,100(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,96(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v0,0,r25
	temp.u32 = r25.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,0,r24
	temp.u32 = r24.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,0,r23
	temp.u32 = r23.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r22
	temp.u32 = r22.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v12,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v11,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 4));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// stvlx v0,0,r10
	ea = ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r10,r21
	ea = ctx.r10.u32 + r21.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// mullw r11,r10,r11
	r11.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// rlwinm r11,r11,22,10,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x3FFFFF;
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// lwz r10,-12612(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12612);
	// stw r11,376(r31)
	PPC_STORE_U32(r31.u32 + 376, r11.u32);
	// rldicr r30,r10,20,63
	r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 20) & 0xFFFFFFFFFFFFFFFF;
	// mullw r10,r11,r6
	ctx.r10.s64 = int64_t(r11.s32) * int64_t(ctx.r6.s32);
	// rlwinm r9,r10,23,9,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x7FFFFF;
	// mullw r8,r11,r7
	ctx.r8.s64 = int64_t(r11.s32) * int64_t(ctx.r7.s32);
	// sth r9,14(r31)
	PPC_STORE_U16(r31.u32 + 14, ctx.r9.u16);
	// stw r8,388(r31)
	PPC_STORE_U32(r31.u32 + 388, ctx.r8.u32);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addi r10,r10,22599
	ctx.r10.s64 = ctx.r10.s64 + 22599;
	// rlwinm r28,r10,0,0,22
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFE00;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r27,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, r27.u8);
loc_823DC3AC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823dc3ac
	if (!cr6.eq) goto loc_823DC3AC;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x823dc3fc
	if (cr6.lt) goto loc_823DC3FC;
loc_823DC3E0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r10,92
	cr6.compare<uint32_t>(ctx.r10.u32, 92, xer);
	// beq cr6,0x823dc3fc
	if (cr6.eq) goto loc_823DC3FC;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823dc3e0
	if (!cr6.lt) goto loc_823DC3E0;
loc_823DC3FC:
	// li r6,0
	ctx.r6.s64 = 0;
	// stb r27,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r27.u8);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b62c8
	sub_823B62C8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823dc448
	if (cr0.eq) goto loc_823DC448;
	// lis r10,640
	ctx.r10.s64 = 41943040;
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r30,r10
	ctx.r9.u64 = r30.u64 + ctx.r10.u64;
	// cmpld cr6,r11,r9
	cr6.compare<uint64_t>(r11.u64, ctx.r9.u64, xer);
	// bge cr6,0x823dc448
	if (!cr6.lt) goto loc_823DC448;
	// cmpld cr6,r11,r10
	cr6.compare<uint64_t>(r11.u64, ctx.r10.u64, xer);
	// ble cr6,0x823dc444
	if (!cr6.gt) goto loc_823DC444;
	// lis r10,-640
	ctx.r10.s64 = -41943040;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// b 0x823dc448
	goto loc_823DC448;
loc_823DC444:
	// mr r30,r27
	r30.u64 = r27.u64;
loc_823DC448:
	// addi r11,r28,2048
	r11.s64 = r28.s64 + 2048;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r30
	cr6.compare<uint64_t>(r11.u64, r30.u64, xer);
	// ble cr6,0x823dc464
	if (!cr6.gt) goto loc_823DC464;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823dc590
	goto loc_823DC590;
loc_823DC464:
	// lis r11,-17
	r11.s64 = -1114112;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// oris r10,r10,65520
	ctx.r10.u64 = ctx.r10.u64 | 4293918720;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// rotlwi r9,r30,0
	ctx.r9.u64 = __builtin_rotateleft32(r30.u32, 0);
	// add r11,r30,r11
	r11.u64 = r30.u64 + r11.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// divdu r11,r11,r10
	r11.u64 = r11.u64 / ctx.r10.u64;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// rlwimi r11,r10,14,12,17
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xFC000) | (r11.u64 & 0xFFFFFFFFFFF03FFF);
	// rlwinm r10,r11,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r11,596(r31)
	PPC_STORE_U32(r31.u32 + 596, r11.u32);
	// rlwinm r10,r10,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFF00000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,384(r31)
	PPC_STORE_U32(r31.u32 + 384, ctx.r10.u32);
loc_823DC4AC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823dc4c8
	if (cr6.eq) goto loc_823DC4C8;
	// lwz r11,604(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// srawi r11,r11,30
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFFFF) != 0);
	r11.s64 = r11.s32 >> 30;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823dc4cc
	if (cr6.eq) goto loc_823DC4CC;
loc_823DC4C8:
	// lwz r4,608(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 608);
loc_823DC4CC:
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r30,r11,r31
	r30.u64 = r11.u64 + r31.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823dbce8
	sub_823DBCE8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823dc588
	if (cr6.eq) goto loc_823DC588;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// lwz r10,604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// bne cr6,0x823dc508
	if (!cr6.eq) goto loc_823DC508;
	// rlwimi r10,r11,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// b 0x823dc50c
	goto loc_823DC50C;
loc_823DC508:
	// rlwimi r10,r11,28,2,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x30000000) | (ctx.r10.u64 & 0xFFFFFFFFCFFFFFFF);
loc_823DC50C:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// stw r10,604(r31)
	PPC_STORE_U32(r31.u32 + 604, ctx.r10.u32);
	// cmplwi cr6,r29,2
	cr6.compare<uint32_t>(r29.u32, 2, xer);
	// blt cr6,0x823dc4ac
	if (cr6.lt) goto loc_823DC4AC;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1536
	ctx.r4.s64 = 1536;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x826e4c0c
	__imp__MmAllocatePhysicalMemoryEx(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,592(r31)
	PPC_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// beq 0x823dc550
	if (cr0.eq) goto loc_823DC550;
	// lwz r11,604(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// rlwinm r11,r11,0,5,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// b 0x823dc570
	goto loc_823DC570;
loc_823DC550:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// li r3,1536
	ctx.r3.s64 = 1536;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,592(r31)
	PPC_STORE_U32(r31.u32 + 592, ctx.r3.u32);
	// beq 0x823dc588
	if (cr0.eq) goto loc_823DC588;
	// lwz r11,604(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 604);
	// oris r11,r11,2048
	r11.u64 = r11.u64 | 134217728;
loc_823DC570:
	// stw r11,604(r31)
	PPC_STORE_U32(r31.u32 + 604, r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,0(r26)
	PPC_STORE_U8(r26.u32 + 0, r11.u8);
	// b 0x823dc590
	goto loc_823DC590;
loc_823DC588:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_823DC590:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823DC598"))) PPC_WEAK_FUNC(sub_823DC598);
PPC_FUNC_IMPL(__imp__sub_823DC598) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lhz r11,14(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// lwz r10,596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// addi r11,r11,172
	r11.s64 = r11.s64 + 172;
	// rlwinm r8,r10,12,26,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// rlwinm r9,r11,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r11,380(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 380);
	// rlwinm r10,r10,18,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x3F;
	// add r11,r4,r11
	r11.u64 = ctx.r4.u64 + r11.u64;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + r11.u64;
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, r11.u32);
	// bne cr6,0x823dc5d4
	if (!cr6.eq) goto loc_823DC5D4;
	// lwz r9,384(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 384);
	// b 0x823dc5d8
	goto loc_823DC5D8;
loc_823DC5D4:
	// lis r9,-16
	ctx.r9.s64 = -1048576;
loc_823DC5D8:
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823dc5f0
	if (cr6.lt) goto loc_823DC5F0;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_823DC5F0:
	// addi r10,r8,46
	ctx.r10.s64 = ctx.r8.s64 + 46;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// lwz r11,596(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// rlwinm r10,r11,12,26,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3F;
	// rlwinm r9,r11,18,26,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// twllei r9,0
	// divwu r8,r10,r9
	ctx.r8.u32 = ctx.r10.u32 / ctx.r9.u32;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwimi r11,r10,20,6,11
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x3F00000) | (r11.u64 & 0xFFFFFFFFFC0FFFFF);
	// stw r11,596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 596, r11.u32);
	// rlwinm. r10,r11,0,6,11
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3F00000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823dc644
	if (!cr0.eq) goto loc_823DC644;
	// li r11,2048
	r11.s64 = 2048;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, r11.u32);
	// lbz r11,600(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 600);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stb r11,600(r3)
	PPC_STORE_U8(ctx.r3.u32 + 600, r11.u8);
	// blr 
	return;
loc_823DC644:
	// li r11,0
	r11.s64 = 0;
	// stw r11,380(r3)
	PPC_STORE_U32(ctx.r3.u32 + 380, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DC650"))) PPC_WEAK_FUNC(sub_823DC650);
PPC_FUNC_IMPL(__imp__sub_823DC650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCRegister reserved{};
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
	// stwu r1,-2304(r1)
	ea = -2304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// addi r31,r26,21524
	r31.s64 = r26.s64 + 21524;
	// lbz r11,600(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 600);
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823dc990
	if (cr0.eq) goto loc_823DC990;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823dc968
	if (cr0.eq) goto loc_823DC968;
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r28,-1
	r28.s64 = -1;
	// beq 0x823dc7a4
	if (cr0.eq) goto loc_823DC7A4;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823dc69c
	if (cr0.eq) goto loc_823DC69C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
loc_823DC69C:
	// lwz r30,16(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r3,588(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 588);
	// bl 0x823d1ea0
	sub_823D1EA0(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r29,r11,-12616
	r29.s64 = r11.s64 + -12616;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// addi r11,r11,15360
	r11.s64 = r11.s64 + 15360;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_823DC6C0:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823dc6c0
	if (!cr0.eq) goto loc_823DC6C0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r9,6144
	ctx.r9.s64 = 6144;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// divwu r10,r11,r9
	ctx.r10.u32 = r11.u32 / ctx.r9.u32;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// blt cr6,0x823dc6f8
	if (cr6.lt) goto loc_823DC6F8;
	// li r10,14
	ctx.r10.s64 = 14;
loc_823DC6F8:
	// lwz r11,584(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 584);
	// lis r9,-25768
	ctx.r9.s64 = -1688731648;
	// addi r7,r31,348
	ctx.r7.s64 = r31.s64 + 348;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// ori r8,r9,59162
	ctx.r8.u64 = ctx.r9.u64 | 59162;
	// rlwinm r11,r11,2,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x4;
	// mulli r9,r10,12
	ctx.r9.s64 = ctx.r10.s64 * 12;
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// addi r11,r4,-4
	r11.s64 = ctx.r4.s64 + -4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lwz r8,596(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// rlwinm r8,r8,4,30,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0x3;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lhz r11,12(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 12);
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// lwz r8,380(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// rlwinm r11,r10,12,26,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x3F;
	// stw r27,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r27.u32);
	// rlwinm r30,r9,9,0,22
	r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,356(r31)
	PPC_STORE_U32(r31.u32 + 356, ctx.r8.u32);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x823b5d88
	sub_823B5D88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823dc598
	sub_823DC598(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
	// lis r30,-32126
	r30.s64 = -2105409536;
	// b 0x823dc794
	goto loc_823DC794;
loc_823DC78C:
	// li r3,6
	ctx.r3.s64 = 6;
	// bl 0x823b5498
	sub_823B5498(ctx, base);
loc_823DC794:
	// lwz r11,15368(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 15368);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823dc78c
	if (!cr6.eq) goto loc_823DC78C;
loc_823DC7A4:
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// mr r30,r27
	r30.u64 = r27.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// rlwinm. r11,r11,0,12,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFC000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823dc820
	if (cr0.eq) goto loc_823DC820;
	// addi r29,r31,20
	r29.s64 = r31.s64 + 20;
loc_823DC7BC:
	// lbz r11,600(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 600);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dc7ec
	if (!cr0.eq) goto loc_823DC7EC;
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// rlwinm r11,r11,12,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3F;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823dc7ec
	if (cr6.lt) goto loc_823DC7EC;
	// ble cr6,0x823dc7e4
	if (!cr6.gt) goto loc_823DC7E4;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// b 0x823dc7f0
	goto loc_823DC7F0;
loc_823DC7E4:
	// lwz r4,380(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// b 0x823dc7f0
	goto loc_823DC7F0;
loc_823DC7EC:
	// lwz r4,164(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 164);
loc_823DC7F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// bl 0x823b6070
	sub_823B6070(ctx, base);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x823ba040
	sub_823BA040(ctx, base);
	// lwz r11,596(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,18,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x823dc7bc
	if (cr6.lt) goto loc_823DC7BC;
loc_823DC820:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x826e529c
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lbz r11,600(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 600);
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,21415
	r11.s64 = 1403453440;
	// bne 0x823dc840
	if (!cr0.eq) goto loc_823DC840;
	// ori r11,r11,8884
	r11.u64 = r11.u64 | 8884;
	// b 0x823dc844
	goto loc_823DC844;
loc_823DC840:
	// ori r11,r11,8885
	r11.u64 = r11.u64 | 8885;
loc_823DC844:
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, r11.u32);
	// lis r11,1
	r11.s64 = 65536;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, r11.u32);
	// lhz r11,168(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 168);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, r11.u32);
	// lhz r11,170(r1)
	r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 170);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, r11.u32);
	// lhz r11,368(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 368);
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, r11.u32);
	// lhz r11,370(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 370);
	// stw r11,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, r11.u32);
	// bl 0x826e4cbc
	__imp__KeQueryPerformanceFrequency(ctx, base);
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// stw r3,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r3.u32);
	// rlwinm r11,r10,6,26,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x3F;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823dc89c
	if (cr0.eq) goto loc_823DC89C;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_823DC89C:
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823dc8ac
	if (cr0.eq) goto loc_823DC8AC;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
loc_823DC8AC:
	// rlwinm. r11,r10,0,0,0
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823dc8bc
	if (cr0.eq) goto loc_823DC8BC;
	// lwz r4,592(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 592);
	// b 0x823dc8c0
	goto loc_823DC8C0;
loc_823DC8BC:
	// addi r4,r26,14852
	ctx.r4.s64 = r26.s64 + 14852;
loc_823DC8C0:
	// lbz r11,101(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 101);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x823dc8e4
	if (!cr6.eq) goto loc_823DC8E4;
	// ori r11,r9,4
	r11.u64 = ctx.r9.u64 | 4;
	// stw r11,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, r11.u32);
	// bl 0x823d3130
	sub_823D3130(ctx, base);
	// b 0x823dc8e8
	goto loc_823DC8E8;
loc_823DC8E4:
	// bl 0x823d2f90
	sub_823D2F90(ctx, base);
loc_823DC8E8:
	// lwz r30,596(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 596);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r26,13572
	ctx.r4.s64 = r26.s64 + 13572;
	// rlwinm. r11,r30,0,5,5
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x4000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dc904
	if (!cr0.eq) goto loc_823DC904;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
loc_823DC904:
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lbz r11,600(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 600);
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823dc928
	if (cr0.eq) goto loc_823DC928;
	// lwz r11,380(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 380);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
	// rlwinm r11,r30,12,26,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0x3F;
	// stw r11,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r11.u32);
	// b 0x823dc934
	goto loc_823DC934;
loc_823DC928:
	// li r11,2048
	r11.s64 = 2048;
	// stw r27,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, r27.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, r11.u32);
loc_823DC934:
	// addi r7,r31,348
	ctx.r7.s64 = r31.s64 + 348;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r27,356(r31)
	PPC_STORE_U32(r31.u32 + 356, r27.u32);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r27,360(r31)
	PPC_STORE_U32(r31.u32 + 360, r27.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// bl 0x823b5d88
	sub_823B5D88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 364);
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
loc_823DC968:
	// mr r30,r27
	r30.u64 = r27.u64;
	// addi r31,r31,20
	r31.s64 = r31.s64 + 20;
loc_823DC970:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823dc990
	if (cr6.eq) goto loc_823DC990;
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi cr6,r30,41
	cr6.compare<uint32_t>(r30.u32, 41, xer);
	// blt cr6,0x823dc970
	if (cr6.lt) goto loc_823DC970;
loc_823DC990:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823dc9c0
	if (cr6.eq) goto loc_823DC9C0;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dc9ec
	if (cr0.eq) goto loc_823DC9EC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dc9ec
	if (cr0.eq) goto loc_823DC9EC;
	// b 0x823dc9d8
	goto loc_823DC9D8;
loc_823DC9C0:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dc9ec
	if (cr0.eq) goto loc_823DC9EC;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823DC9D8:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r3,27
	ctx.r3.s64 = 27;
	// addi r4,r10,-8332
	ctx.r4.s64 = ctx.r10.s64 + -8332;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DC9EC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823dbd68
	sub_823DBD68(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-12592
	ctx.r3.s64 = r11.s64 + -12592;
	// bl 0x826e535c
	__imp__ObDeleteSymbolicLink(ctx, base);
	// lis r11,-32126
	r11.s64 = -2105409536;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// addi r11,r11,-29530
	r11.s64 = r11.s64 + -29530;
	// stb r10,-2(r11)
	PPC_STORE_U8(r11.u32 + -2, ctx.r10.u8);
	// stb r10,-1(r11)
	PPC_STORE_U8(r11.u32 + -1, ctx.r10.u8);
	// stb r10,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,2304
	ctx.r1.s64 = ctx.r1.s64 + 2304;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823DCA20"))) PPC_WEAK_FUNC(sub_823DCA20);
PPC_FUNC_IMPL(__imp__sub_823DCA20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r31,21524
	r30.s64 = r31.s64 + 21524;
	// bl 0x823ca718
	sub_823CA718(ctx, base);
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x823dcb68
	if (cr6.eq) goto loc_823DCB68;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823dca74
	if (cr6.eq) goto loc_823DCA74;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10432);
	// bl 0x823d37f0
	sub_823D37F0(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_823DCA74:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823dcaa4
	if (cr6.eq) goto loc_823DCAA4;
	// addi r6,r31,10420
	ctx.r6.s64 = r31.s64 + 10420;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d3b88
	sub_823D3B88(ctx, base);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r11,r11,0,51
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823DCAA4:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823dcadc
	if (cr6.eq) goto loc_823DCADC;
	// addi r6,r31,10400
	ctx.r6.s64 = r31.s64 + 10400;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d3b88
	sub_823D3B88(ctx, base);
	// lis r12,-2
	r12.s64 = -131072;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,4095
	r12.u64 = r12.u64 | 4095;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823DCADC:
	// lis r12,0
	r12.s64 = 0;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823dcb24
	if (cr6.eq) goto loc_823DCB24;
	// addi r6,r31,10240
	ctx.r6.s64 = r31.s64 + 10240;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d3b88
	sub_823D3B88(ctx, base);
	// lis r12,-1
	r12.s64 = -65536;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	r12.u64 = r12.u64 | 0;
	// rldicr r12,r12,42,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823DCB24:
	// lis r12,-32
	r12.s64 = -2097152;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823dcb68
	if (cr6.eq) goto loc_823DCB68;
	// addi r6,r31,10316
	ctx.r6.s64 = r31.s64 + 10316;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d3b88
	sub_823D3B88(ctx, base);
	// lis r12,-32
	r12.s64 = -2097152;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r12,r12,0
	r12.u64 = r12.u64 | 0;
	// rldicr r12,r12,21,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823DCB68:
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823dcbb8
	if (cr6.eq) goto loc_823DCBB8;
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = r11.u64 & r12.u64;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823dcbb8
	if (cr6.eq) goto loc_823DCBB8;
	// addi r6,r31,10468
	ctx.r6.s64 = r31.s64 + 10468;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d3b88
	sub_823D3B88(ctx, base);
	// lis r12,-32
	r12.s64 = -2097152;
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// ori r12,r12,0
	r12.u64 = r12.u64 | 0;
	// rldicr r12,r12,34,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_823DCBB8:
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823dcbf0
	if (cr6.eq) goto loc_823DCBF0;
	// clrldi r10,r11,26
	ctx.r10.u64 = r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823dcbf0
	if (cr6.eq) goto loc_823DCBF0;
	// addi r6,r31,10552
	ctx.r6.s64 = r31.s64 + 10552;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d3b88
	sub_823D3B88(ctx, base);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// rldicr r11,r11,0,25
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
loc_823DCBF0:
	// lbz r11,600(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 600);
	// lis r25,1792
	r25.s64 = 117440512;
	// rlwinm. r11,r11,0,25,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r26,r11,-14480
	r26.s64 = r11.s64 + -14480;
	// bne 0x823dcc18
	if (!cr0.eq) goto loc_823DCC18;
	// li r29,525
	r29.s64 = 525;
	// mr r27,r26
	r27.u64 = r26.u64;
	// ori r25,r25,21
	r25.u64 = r25.u64 | 21;
	// b 0x823dcc24
	goto loc_823DCC24;
loc_823DCC18:
	// addi r27,r26,2160
	r27.s64 = r26.s64 + 2160;
	// li r29,933
	r29.s64 = 933;
	// ori r25,r25,19
	r25.u64 = r25.u64 | 19;
loc_823DCC24:
	// addi r4,r29,5
	ctx.r4.s64 = r29.s64 + 5;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d24b8
	sub_823D24B8(ctx, base);
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,768
	ctx.r10.s64 = 768;
	// ori r11,r11,15104
	r11.u64 = r11.u64 | 15104;
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// addi r9,r29,1
	ctx.r9.s64 = r29.s64 + 1;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r22,0
	r22.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// rlwimi r8,r9,16,2,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3FFF0000) | (ctx.r8.u64 & 0xFFFFFFFFC000FFFF);
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// clrlwi r9,r29,18
	ctx.r9.u64 = r29.u32 & 0x3FFF;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// rlwinm r29,r29,2,0,29
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// addi r3,r27,4
	ctx.r3.s64 = r27.s64 + 4;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// add r3,r29,r27
	ctx.r3.u64 = r29.u64 + r27.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x823dcca0
	if (!cr6.gt) goto loc_823DCCA0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823DCCA0:
	// lis r11,-16368
	r11.s64 = -1072693248;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	r11.u64 = r11.u64 | 11008;
	// li r9,15
	ctx.r9.s64 = 15;
	// addi r4,r26,2100
	ctx.r4.s64 = r26.s64 + 2100;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r29,60
	r11.s64 = r29.s64 + 60;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// oris r9,r25,4096
	ctx.r9.u64 = r25.u64 | 268435456;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x823dcd0c
	if (!cr6.gt) goto loc_823DCD0C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823DCD0C:
	// lis r11,2
	r11.s64 = 131072;
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// ori r10,r11,8448
	ctx.r10.u64 = r11.u64 | 8448;
	// lis r11,0
	r11.s64 = 0;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// li r6,8851
	ctx.r6.s64 = 8851;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r27,768
	r27.s64 = 768;
	// ori r4,r10,8708
	ctx.r4.u64 = ctx.r10.u64 | 8708;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r26,8978
	r26.s64 = 8978;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// li r25,8205
	r25.s64 = 8205;
	// mr r24,r22
	r24.u64 = r22.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r23,8704
	r23.s64 = 8704;
	// mr r21,r22
	r21.u64 = r22.u64;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r3.u32 = ea;
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x823dcdb0
	if (!cr6.gt) goto loc_823DCDB0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823DCDB0:
	// lis r11,5
	r11.s64 = 327680;
	// addi r29,r30,392
	r29.s64 = r30.s64 + 392;
	// ori r11,r11,18432
	r11.u64 = r11.u64 | 18432;
	// lis r8,16384
	ctx.r8.s64 = 1073741824;
	// li r4,49
	ctx.r4.s64 = 49;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// lhz r11,372(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 372);
	// rlwinm r10,r10,0,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FC;
	// rlwinm r11,r11,17,0,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFC00000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// ori r11,r11,18434
	r11.u64 = r11.u64 | 18434;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,32(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 32);
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,36(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 36);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,40(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 40);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// rlwinm r11,r11,13,0,18
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0xFFFFE000;
	// rlwinm r10,r10,0,19,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF001FFF;
	// srawi r11,r11,13
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFF) != 0);
	r11.s64 = r11.s32 >> 13;
	// rlwinm r10,r10,0,7,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF81FFFFFF;
	// rlwimi r11,r9,24,19,12
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFFFFFFFFFFF81FFF) | (r11.u64 & 0x7E000);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,44(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 44);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,48(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 48);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// lwz r10,584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// rlwinm r26,r11,2,30,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	// lwz r11,388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// rlwinm r10,r10,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// clrlwi r24,r26,31
	r24.u64 = r26.u32 & 0x1;
	// mulli r9,r24,56
	ctx.r9.s64 = r24.s64 * 56;
	// lwzx r25,r10,r30
	r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// addi r9,r9,527
	ctx.r9.s64 = ctx.r9.s64 + 527;
	// rlwinm r10,r26,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 31) & 0x1;
	// rlwinm r9,r9,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFE00;
	// mulli r10,r10,1536
	ctx.r10.s64 = ctx.r10.s64 * 1536;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r28,r10,r25
	r28.u64 = ctx.r10.u64 + r25.u64;
	// rlwinm r10,r28,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r28,3
	ctx.r9.u64 = r28.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r27,r10,r9
	r27.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r10,75
	ctx.r10.s64 = 75;
	// rlwimi r8,r27,30,2,31
	ctx.r8.u64 = (__builtin_rotateleft32(r27.u32, 30) & 0x3FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFFC0000000);
	// rlwimi r11,r10,24,0,8
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF800000) | (r11.u64 & 0xFFFFFFFF007FFFFF);
	// lis r10,19200
	ctx.r10.s64 = 1258291200;
	// stw r8,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r8.u32);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// stw r10,4(r29)
	PPC_STORE_U32(r29.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// andi. r11,r10,49400
	r11.u64 = ctx.r10.u64 & 49400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// oris r11,r11,19200
	r11.u64 = r11.u64 | 1258291200;
	// ori r11,r11,1536
	r11.u64 = r11.u64 | 1536;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// bl 0x823d24b8
	sub_823D24B8(ctx, base);
	// lis r11,47
	r11.s64 = 3080192;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// li r5,192
	ctx.r5.s64 = 192;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r29,4
	ctx.r3.s64 = r29.s64 + 4;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r11,r29,192
	r11.s64 = r29.s64 + 192;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lbz r11,600(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 600);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823dcf0c
	if (cr0.eq) goto loc_823DCF0C;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 364);
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
loc_823DCF0C:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r8,r11,-12616
	ctx.r8.s64 = r11.s64 + -12616;
	// lhz r11,14(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// rotlwi r11,r11,9
	r11.u64 = __builtin_rotateleft32(r11.u32, 9);
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
loc_823DCF20:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r8
	reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// stwcx. r11,0,r8
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), reserved.s32, __builtin_bswap32(r11.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x823dcf20
	if (!cr0.eq) goto loc_823DCF20;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// mr r10,r10
	ctx.r10.u64 = ctx.r10.u64;
	// li r9,6144
	ctx.r9.s64 = 6144;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// cmplwi cr6,r10,14
	cr6.compare<uint32_t>(ctx.r10.u32, 14, xer);
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// blt cr6,0x823dcf5c
	if (cr6.lt) goto loc_823DCF5C;
	// li r23,14
	r23.s64 = 14;
loc_823DCF5C:
	// lwz r9,584(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// lis r10,-25768
	ctx.r10.s64 = -1688731648;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// ori r8,r10,59162
	ctx.r8.u64 = ctx.r10.u64 | 59162;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// rlwinm r9,r9,2,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x4;
	// lwzx r11,r9,r30
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r30.u32);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// lwz r9,596(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// rlwinm r9,r9,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x3;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r27,10264(r31)
	PPC_STORE_U32(r31.u32 + 10264, r27.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823dcfb4
	if (!cr6.gt) goto loc_823DCFB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823DCFB4:
	// li r11,8198
	r11.s64 = 8198;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13360);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne cr6,0x823dcffc
	if (!cr6.eq) goto loc_823DCFFC;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823dcfe8
	if (!cr6.gt) goto loc_823DCFE8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823DCFE8:
	// li r11,1480
	r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_823DCFFC:
	// lwz r11,13360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13360);
	// mr r28,r22
	r28.u64 = r22.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,13360(r31)
	PPC_STORE_U32(r31.u32 + 13360, r11.u32);
	// lwz r29,376(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 376);
loc_823DD010:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823dd02c
	if (!cr6.gt) goto loc_823DD02C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823DD02C:
	// li r9,8450
	ctx.r9.s64 = 8450;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r29,65535
	cr6.compare<uint32_t>(r29.u32, 65535, xer);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// ble cr6,0x823dd04c
	if (!cr6.gt) goto loc_823DD04C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
loc_823DD04C:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// li r8,129
	ctx.r8.s64 = 129;
	// ori r9,r9,13825
	ctx.r9.u64 = ctx.r9.u64 | 13825;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// subf. r29,r10,r29
	r29.s64 = r29.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x823dd078
	if (cr0.eq) goto loc_823DD078;
	// add r28,r10,r28
	r28.u64 = ctx.r10.u64 + r28.u64;
	// b 0x823dd010
	goto loc_823DD010;
loc_823DD078:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// stw r22,10264(r31)
	PPC_STORE_U32(r31.u32 + 10264, r22.u32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823dd094
	if (!cr6.gt) goto loc_823DD094;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823DD094:
	// li r11,8198
	r11.s64 = 8198;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,13360(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13360);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// stw r11,13360(r31)
	PPC_STORE_U32(r31.u32 + 13360, r11.u32);
	// bne 0x823dd0e4
	if (!cr0.eq) goto loc_823DD0E4;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823dd0cc
	if (!cr6.gt) goto loc_823DD0CC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823DD0CC:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// li r10,6
	ctx.r10.s64 = 6;
	// ori r11,r11,17920
	r11.u64 = r11.u64 | 17920;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_823DD0E4:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,65024
	r11.u64 = r11.u64 | 4261412864;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r27,588(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 588);
	// bl 0x823d23a0
	sub_823D23A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,588(r30)
	PPC_STORE_U32(r30.u32 + 588, r11.u32);
	// bl 0x823ca718
	sub_823CA718(ctx, base);
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// clrlwi r28,r26,30
	r28.u64 = r26.u32 & 0x3;
	// rlwinm r11,r11,0,4,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFCFFFFFFF;
	// rlwinm r10,r28,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 28) & 0xF0000000;
	// addi r29,r25,16
	r29.s64 = r25.s64 + 16;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// stw r11,596(r30)
	PPC_STORE_U32(r30.u32 + 596, r11.u32);
	// beq cr6,0x823dd180
	if (cr6.eq) goto loc_823DD180;
	// li r5,56
	ctx.r5.s64 = 56;
	// addi r4,r31,13572
	ctx.r4.s64 = r31.s64 + 13572;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r29,r29,56
	r29.s64 = r29.s64 + 56;
loc_823DD180:
	// subf r11,r25,r29
	r11.s64 = r29.s64 - r25.s64;
	// rlwinm. r10,r26,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,511
	r11.s64 = r11.s64 + 511;
	// rlwinm r11,r11,0,0,22
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r31,r11,r25
	r31.u64 = r11.u64 + r25.u64;
	// beq 0x823dd1d0
	if (cr0.eq) goto loc_823DD1D0;
	// lbz r11,600(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 600);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 592);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,0,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF80;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823dd1b8
	if (cr0.eq) goto loc_823DD1B8;
	// bl 0x823d3130
	sub_823D3130(ctx, base);
	// b 0x823dd1bc
	goto loc_823DD1BC;
loc_823DD1B8:
	// bl 0x823d2f90
	sub_823D2F90(ctx, base);
loc_823DD1BC:
	// li r5,1536
	ctx.r5.s64 = 1536;
	// lwz r4,592(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 592);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r31,r31,1536
	r31.s64 = r31.s64 + 1536;
loc_823DD1D0:
	// lwz r11,584(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// rlwinm r8,r28,26,0,5
	ctx.r8.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 26) & 0xFC000000;
	// lwz r10,596(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// rlwinm r7,r11,2,29,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x4;
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// lbz r8,600(r30)
	ctx.r8.u64 = PPC_LOAD_U8(r30.u32 + 600);
	// mulli r11,r23,12
	r11.s64 = r23.s64 * 12;
	// lwzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r30.u32);
	// subf r7,r7,r31
	ctx.r7.s64 = r31.s64 - ctx.r7.s64;
	// clrlwi r6,r10,2
	ctx.r6.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// rlwinm r10,r7,23,9,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 23) & 0x7FFFFF;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lhz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r6,596(r30)
	PPC_STORE_U32(r30.u32 + 596, ctx.r6.u32);
	// rlwinm. r8,r8,0,26,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// sth r9,12(r30)
	PPC_STORE_U16(r30.u32 + 12, ctx.r9.u16);
	// rlwinm r31,r11,9,0,22
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0xFFFFFE00;
	// beq 0x823dd280
	if (cr0.eq) goto loc_823DD280;
	// lwz r11,380(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 380);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r22,360(r30)
	PPC_STORE_U32(r30.u32 + 360, r22.u32);
	// stw r11,356(r30)
	PPC_STORE_U32(r30.u32 + 356, r11.u32);
	// bl 0x823d1ea0
	sub_823D1EA0(ctx, base);
	// lwz r11,596(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 596);
	// addi r7,r30,348
	ctx.r7.s64 = r30.s64 + 348;
	// lwz r10,584(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,12,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3F;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r11,r11,5
	r11.s64 = r11.s64 + 5;
	// rlwinm r10,r10,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwzx r4,r10,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x823b5d88
	sub_823B5D88(ctx, base);
	// lbz r11,600(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 600);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
	// stb r11,600(r30)
	PPC_STORE_U8(r30.u32 + 600, r11.u8);
	// bl 0x823dc598
	sub_823DC598(ctx, base);
loc_823DD280:
	// lbz r10,600(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 600);
	// lwz r11,584(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 584);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stb r10,600(r30)
	PPC_STORE_U8(r30.u32 + 600, ctx.r10.u8);
	// stw r11,584(r30)
	PPC_STORE_U32(r30.u32 + 584, r11.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823DD2A0"))) PPC_WEAK_FUNC(sub_823DD2A0);
PPC_FUNC_IMPL(__imp__sub_823DD2A0) {
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
	// bl 0x823dc650
	sub_823DC650(ctx, base);
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// li r11,0
	r11.s64 = 0;
	// stb r11,-29529(r10)
	PPC_STORE_U8(ctx.r10.u32 + -29529, r11.u8);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DD2CC"))) PPC_WEAK_FUNC(sub_823DD2CC);
PPC_FUNC_IMPL(__imp__sub_823DD2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DD2D0"))) PPC_WEAK_FUNC(sub_823DD2D0);
PPC_FUNC_IMPL(__imp__sub_823DD2D0) {
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
	// stwu r1,-816(r1)
	ea = -816 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r24,21524
	r29.s64 = r24.s64 + 21524;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lbz r11,600(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 600);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823dd308
	if (cr0.eq) goto loc_823DD308;
loc_823DD2F8:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823dc650
	sub_823DC650(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823dd65c
	goto loc_823DD65C;
loc_823DD308:
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// li r25,0
	r25.s64 = 0;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stb r25,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, r25.u8);
loc_823DD324:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823dd324
	if (!cr6.eq) goto loc_823DD324;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// blt cr6,0x823dd374
	if (cr6.lt) goto loc_823DD374;
loc_823DD358:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x823dd374
	if (cr6.eq) goto loc_823DD374;
	// addi r31,r31,-1
	r31.s64 = r31.s64 + -1;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x823dd358
	if (!cr6.lt) goto loc_823DD358;
loc_823DD374:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,92
	cr6.compare<uint32_t>(r11.u32, 92, xer);
	// beq cr6,0x823dd390
	if (cr6.eq) goto loc_823DD390;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-8196
	ctx.r3.s64 = r11.s64 + -8196;
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
	// b 0x823dd2f8
	goto loc_823DD2F8;
loc_823DD390:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stb r25,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r25.u8);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x826e4ccc
	__imp__RtlInitAnsiString(ctx, base);
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r11,-12592
	ctx.r3.s64 = r11.s64 + -12592;
	// bl 0x826e536c
	__imp__ObCreateSymbolicLink(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823dd3cc
	if (!cr0.lt) goto loc_823DD3CC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-8232
	ctx.r3.s64 = r11.s64 + -8232;
loc_823DD3C0:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x823d70c0
	sub_823D70C0(ctx, base);
	// b 0x823dd2f8
	goto loc_823DD2F8;
loc_823DD3CC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r6,r31,1
	ctx.r6.s64 = r31.s64 + 1;
	// addi r5,r11,-8240
	ctx.r5.s64 = r11.s64 + -8240;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r11,-8248
	ctx.r4.s64 = r11.s64 + -8248;
	// bl 0x826e517c
	__imp__sprintf(ctx, base);
	// addi r5,r1,480
	ctx.r5.s64 = ctx.r1.s64 + 480;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x823dbe78
	sub_823DBE78(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823dd2f8
	if (cr0.lt) goto loc_823DD2F8;
	// li r5,260
	ctx.r5.s64 = 260;
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stb r25,371(r1)
	PPC_STORE_U8(ctx.r1.u32 + 371, r25.u8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823DD41C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823dd41c
	if (!cr6.eq) goto loc_823DD41C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r30,r11
	r30.u64 = r11.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x823dd47c
	if (cr6.lt) goto loc_823DD47C;
loc_823DD454:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,46
	cr6.compare<int32_t>(ctx.r10.s32, 46, xer);
	// beq cr6,0x823dd47c
	if (cr6.eq) goto loc_823DD47C;
	// cmpwi cr6,r10,92
	cr6.compare<int32_t>(ctx.r10.s32, 92, xer);
	// beq cr6,0x823dd47c
	if (cr6.eq) goto loc_823DD47C;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bge cr6,0x823dd454
	if (!cr6.lt) goto loc_823DD454;
loc_823DD47C:
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// cmplwi cr6,r10,46
	cr6.compare<uint32_t>(ctx.r10.u32, 46, xer);
	// beq cr6,0x823dd48c
	if (cr6.eq) goto loc_823DD48C;
	// mr r30,r11
	r30.u64 = r11.u64;
loc_823DD48C:
	// lwz r11,596(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 596);
	// mr r31,r25
	r31.u64 = r25.u64;
	// rlwinm. r11,r11,0,12,17
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFC000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r27,r11,-8256
	r27.s64 = r11.s64 + -8256;
	// beq 0x823dd574
	if (cr0.eq) goto loc_823DD574;
	// addi r28,r29,20
	r28.s64 = r29.s64 + 20;
	// lis r26,-32126
	r26.s64 = -2105409536;
loc_823DD4AC:
	// lbz r11,-29532(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + -29532);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823dd2f8
	if (!cr0.eq) goto loc_823DD2F8;
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r6,r11,r10
	ctx.r6.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e517c
	__imp__sprintf(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,26624
	ctx.r8.s64 = 1744830464;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823b5b78
	sub_823B5B78(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,0(r28)
	PPC_STORE_U32(r28.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823dd664
	if (cr6.eq) goto loc_823DD664;
	// lwz r11,596(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 596);
	// rlwinm r11,r11,18,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bne cr6,0x823dd538
	if (!cr6.eq) goto loc_823DD538;
	// lwz r11,384(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 384);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd52c
	if (cr0.eq) goto loc_823DD52C;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// b 0x823dd540
	goto loc_823DD540;
loc_823DD52C:
	// li r11,1
	r11.s64 = 1;
	// rldicr r11,r11,32,63
	r11.u64 = __builtin_rotateleft64(r11.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// b 0x823dd540
	goto loc_823DD540;
loc_823DD538:
	// li r11,0
	r11.s64 = 0;
	// oris r11,r11,65520
	r11.u64 = r11.u64 | 4293918720;
loc_823DD540:
	// li r6,0
	ctx.r6.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823b6070
	sub_823B6070(ctx, base);
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x823ba040
	sub_823BA040(ctx, base);
	// lwz r11,596(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 596);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// rlwinm r11,r11,18,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x3F;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x823dd4ac
	if (cr6.lt) goto loc_823DD4AC;
loc_823DD574:
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_823DD584:
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x826e517c
	__imp__sprintf(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// bl 0x823b6210
	sub_823B6210(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823dd584
	if (!cr0.eq) goto loc_823DD584;
	// addi r31,r29,348
	r31.s64 = r29.s64 + 348;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r25.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// stw r25,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r25.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
	// stw r25,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r25.u32);
	// bl 0x826a8a80
	sub_826A8A80(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,364(r29)
	PPC_STORE_U32(r29.u32 + 364, ctx.r3.u32);
	// beq 0x823dd2f8
	if (cr0.eq) goto loc_823DD2F8;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,356(r29)
	PPC_STORE_U32(r29.u32 + 356, r25.u32);
	// stw r25,360(r29)
	PPC_STORE_U32(r29.u32 + 360, r25.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x823b5d88
	sub_823B5D88(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,364(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 364);
	// bl 0x823b5b58
	sub_823B5B58(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x826e529c
	__imp__VdGetCurrentDisplayInformation(ctx, base);
	// lbz r11,389(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 389);
	// lbz r10,600(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 600);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// lwz r8,596(r29)
	ctx.r8.u64 = PPC_LOAD_U32(r29.u32 + 596);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r25,584(r29)
	PPC_STORE_U32(r29.u32 + 584, r25.u32);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r8,r8,0,12,5
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFC0FFFFF;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r9,380(r29)
	PPC_STORE_U32(r29.u32 + 380, ctx.r9.u32);
	// rlwimi r10,r11,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// stw r8,596(r29)
	PPC_STORE_U32(r29.u32 + 596, ctx.r8.u32);
	// stb r10,600(r29)
	PPC_STORE_U8(r29.u32 + 600, ctx.r10.u8);
loc_823DD65C:
	// addi r1,r1,816
	ctx.r1.s64 = ctx.r1.s64 + 816;
	// b 0x8239bd38
	return;
loc_823DD664:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,-8312
	ctx.r3.s64 = r11.s64 + -8312;
	// b 0x823dd3c0
	goto loc_823DD3C0;
}

__attribute__((alias("__imp__sub_823DD670"))) PPC_WEAK_FUNC(sub_823DD670);
PPC_FUNC_IMPL(__imp__sub_823DD670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32126
	r11.s64 = -2105409536;
	// addi r5,r11,-29792
	ctx.r5.s64 = r11.s64 + -29792;
	// lbz r11,262(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 262);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd750
	if (cr0.eq) goto loc_823DD750;
	// lbz r11,22124(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 22124);
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dd72c
	if (!cr0.eq) goto loc_823DD72C;
	// bl 0x823dd2d0
	sub_823DD2D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823dd6b0
	if (cr0.eq) goto loc_823DD6B0;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x823dd6b8
	goto loc_823DD6B8;
loc_823DD6B0:
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// ori r6,r6,16389
	ctx.r6.u64 = ctx.r6.u64 | 16389;
loc_823DD6B8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r5,r11,-8132
	ctx.r5.s64 = r11.s64 + -8132;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,-8144
	ctx.r4.s64 = r11.s64 + -8144;
	// bl 0x826e517c
	__imp__sprintf(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823dd700
	if (cr6.eq) goto loc_823DD700;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd750
	if (cr0.eq) goto loc_823DD750;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd750
	if (cr0.eq) goto loc_823DD750;
	// b 0x823dd718
	goto loc_823DD718;
loc_823DD700:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1824(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd750
	if (cr0.eq) goto loc_823DD750;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823DD718:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,27
	ctx.r3.s64 = 27;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823dd750
	goto loc_823DD750;
loc_823DD72C:
	// lbz r11,260(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 260);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd740
	if (cr0.eq) goto loc_823DD740;
	// bl 0x823dc650
	sub_823DC650(ctx, base);
	// b 0x823dd750
	goto loc_823DD750;
loc_823DD740:
	// lbz r11,261(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 261);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd750
	if (cr0.eq) goto loc_823DD750;
	// bl 0x823dca20
	sub_823DCA20(ctx, base);
loc_823DD750:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DD760"))) PPC_WEAK_FUNC(sub_823DD760);
PPC_FUNC_IMPL(__imp__sub_823DD760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r4,804(r3)
	PPC_STORE_U32(ctx.r3.u32 + 804, ctx.r4.u32);
	// stw r11,772(r3)
	PPC_STORE_U32(ctx.r3.u32 + 772, r11.u32);
	// stw r11,780(r3)
	PPC_STORE_U32(ctx.r3.u32 + 780, r11.u32);
	// stw r11,784(r3)
	PPC_STORE_U32(ctx.r3.u32 + 784, r11.u32);
	// stw r11,788(r3)
	PPC_STORE_U32(ctx.r3.u32 + 788, r11.u32);
	// stw r11,792(r3)
	PPC_STORE_U32(ctx.r3.u32 + 792, r11.u32);
	// stw r11,796(r3)
	PPC_STORE_U32(ctx.r3.u32 + 796, r11.u32);
	// stw r11,800(r3)
	PPC_STORE_U32(ctx.r3.u32 + 800, r11.u32);
	// stw r11,816(r3)
	PPC_STORE_U32(ctx.r3.u32 + 816, r11.u32);
	// stw r11,820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 820, r11.u32);
	// stw r11,824(r3)
	PPC_STORE_U32(ctx.r3.u32 + 824, r11.u32);
	// stw r11,828(r3)
	PPC_STORE_U32(ctx.r3.u32 + 828, r11.u32);
	// stw r11,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, r11.u32);
	// stw r11,836(r3)
	PPC_STORE_U32(ctx.r3.u32 + 836, r11.u32);
	// stw r11,808(r3)
	PPC_STORE_U32(ctx.r3.u32 + 808, r11.u32);
	// stw r11,812(r3)
	PPC_STORE_U32(ctx.r3.u32 + 812, r11.u32);
	// lwz r11,776(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// clrlwi r11,r11,6
	r11.u64 = r11.u32 & 0x3FFFFFF;
	// stw r11,776(r3)
	PPC_STORE_U32(ctx.r3.u32 + 776, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DD7B4"))) PPC_WEAK_FUNC(sub_823DD7B4);
PPC_FUNC_IMPL(__imp__sub_823DD7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DD7B8"))) PPC_WEAK_FUNC(sub_823DD7B8);
PPC_FUNC_IMPL(__imp__sub_823DD7B8) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823dd814
	if (cr6.eq) goto loc_823DD814;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd814
	if (cr0.eq) goto loc_823DD814;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd814
	if (cr0.eq) goto loc_823DD814;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DD814:
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

__attribute__((alias("__imp__sub_823DD828"))) PPC_WEAK_FUNC(sub_823DD828);
PPC_FUNC_IMPL(__imp__sub_823DD828) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,776(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 776);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// stw r7,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r7.u32);
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r9,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r9.u32);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r31.u32);
	// rlwinm. r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dd9e8
	if (!cr0.eq) goto loc_823DD9E8;
	// li r11,5
	r11.s64 = 5;
	// lis r30,-32256
	r30.s64 = -2113929216;
	// li r27,2
	r27.s64 = 2;
	// li r28,32
	r28.s64 = 32;
	// lis r25,-32256
	r25.s64 = -2113929216;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lwz r11,2060(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823dd8c0
	if (cr6.eq) goto loc_823DD8C0;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823dd8e8
	if (cr0.eq) goto loc_823DD8E8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823dd8e8
	if (cr0.eq) goto loc_823DD8E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,43
	ctx.r3.s64 = 43;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
	// b 0x823dd8e0
	goto loc_823DD8E0;
loc_823DD8C0:
	// lwz r10,1824(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 1824);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823dd8e8
	if (cr0.eq) goto loc_823DD8E8;
	// lwz r11,24(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,43
	ctx.r3.s64 = 43;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823DD8E0:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,2060(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2060);
loc_823DD8E8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823dd9e8
	if (cr6.eq) goto loc_823DD9E8;
	// cmpwi cr6,r29,8
	cr6.compare<int32_t>(r29.s32, 8, xer);
	// beq cr6,0x823dd95c
	if (cr6.eq) goto loc_823DD95C;
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r26.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823dd934
	if (cr6.eq) goto loc_823DD934;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd9e8
	if (cr0.eq) goto loc_823DD9E8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd9e8
	if (cr0.eq) goto loc_823DD9E8;
	// b 0x823dd948
	goto loc_823DD948;
loc_823DD934:
	// lwz r11,1824(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd9e8
	if (cr0.eq) goto loc_823DD9E8;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823DD948:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,43
	ctx.r3.s64 = 43;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823dd9e8
	goto loc_823DD9E8;
loc_823DD95C:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// rlwinm r11,r31,30,2,31
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lwz r11,2060(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 2060);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823dd9b8
	if (cr6.eq) goto loc_823DD9B8;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd9dc
	if (cr0.eq) goto loc_823DD9DC;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd9dc
	if (cr0.eq) goto loc_823DD9DC;
	// b 0x823dd9cc
	goto loc_823DD9CC;
loc_823DD9B8:
	// lwz r11,1824(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 1824);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dd9dc
	if (cr0.eq) goto loc_823DD9DC;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823DD9CC:
	// li r3,43
	ctx.r3.s64 = 43;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DD9DC:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823DD9E8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823DD9F0"))) PPC_WEAK_FUNC(sub_823DD9F0);
PPC_FUNC_IMPL(__imp__sub_823DD9F0) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r24,63
	r24.s64 = 63;
	// addi r25,r26,4
	r25.s64 = r26.s64 + 4;
loc_823DDA08:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// b 0x823ddaa4
	goto loc_823DDAA4;
loc_823DDA1C:
	// addi r30,r30,-8
	r30.s64 = r30.s64 + -8;
	// lwz r27,4(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r27,0,9,9
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823dda44
	if (cr0.eq) goto loc_823DDA44;
	// andis. r11,r27,65424
	r11.u64 = r27.u64 & 4287627264;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r10,780(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 780);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_823DDA44:
	// rlwinm. r11,r27,0,10,10
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ddaa0
	if (cr0.eq) goto loc_823DDAA0;
	// lwz r28,0(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r11,8192
	r11.s64 = 536870912;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// addis r31,r28,-16384
	r31.s64 = r28.s64 + -1073741824;
	// blt cr6,0x823dda64
	if (cr6.lt) goto loc_823DDA64;
	// addis r31,r28,-16640
	r31.s64 = r28.s64 + -1090519040;
loc_823DDA64:
	// addi r29,r31,4096
	r29.s64 = r31.s64 + 4096;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
	// clrlwi r8,r27,12
	ctx.r8.u64 = r27.u32 & 0xFFFFF;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r9,784(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 784);
	// li r6,4096
	ctx.r6.s64 = 4096;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823dd828
	sub_823DD828(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
loc_823DDAA0:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
loc_823DDAA4:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bgt cr6,0x823dda1c
	if (cr6.gt) goto loc_823DDA1C;
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r25,r25,12
	r25.s64 = r25.s64 + 12;
	// bge 0x823dda08
	if (!cr0.lt) goto loc_823DDA08;
	// lwz r11,780(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 780);
	// stw r11,784(r26)
	PPC_STORE_U32(r26.u32 + 784, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823DDAC8"))) PPC_WEAK_FUNC(sub_823DDAC8);
PPC_FUNC_IMPL(__imp__sub_823DDAC8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823ddb04
	if (cr6.eq) goto loc_823DDB04;
	// lwz r11,824(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 824);
	// lwz r10,816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 816);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ddb04
	if (!cr0.eq) goto loc_823DDB04;
	// lwz r11,828(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 828);
	// lwz r10,820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 820);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ddd7c
	if (cr0.eq) goto loc_823DDD7C;
loc_823DDB04:
	// cmplwi cr6,r4,90
	cr6.compare<uint32_t>(ctx.r4.u32, 90, xer);
	// bgt cr6,0x823ddd28
	if (cr6.gt) goto loc_823DDD28;
	// cmplwi cr6,r4,88
	cr6.compare<uint32_t>(ctx.r4.u32, 88, xer);
	// bge cr6,0x823ddd04
	if (!cr6.lt) goto loc_823DDD04;
	// cmplwi cr6,r4,37
	cr6.compare<uint32_t>(ctx.r4.u32, 37, xer);
	// beq cr6,0x823ddc04
	if (cr6.eq) goto loc_823DDC04;
	// cmplwi cr6,r4,39
	cr6.compare<uint32_t>(ctx.r4.u32, 39, xer);
	// beq cr6,0x823ddb7c
	if (cr6.eq) goto loc_823DDB7C;
	// cmplwi cr6,r4,70
	cr6.compare<uint32_t>(ctx.r4.u32, 70, xer);
	// beq cr6,0x823ddd04
	if (cr6.eq) goto loc_823DDD04;
	// cmplwi cr6,r4,84
	cr6.compare<uint32_t>(ctx.r4.u32, 84, xer);
	// bne cr6,0x823ddd48
	if (!cr6.eq) goto loc_823DDD48;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,2052(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2052);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lbz r11,10813(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 10813);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ddd7c
	if (cr0.eq) goto loc_823DDD7C;
	// lis r10,-32195
	ctx.r10.s64 = -2109931520;
	// lwz r11,832(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 832);
	// addi r10,r10,26496
	ctx.r10.s64 = ctx.r10.s64 + 26496;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823ddb6c
	if (!cr6.eq) goto loc_823DDB6C;
	// lwz r11,836(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// stw r11,812(r31)
	PPC_STORE_U32(r31.u32 + 812, r11.u32);
	// b 0x823ddd7c
	goto loc_823DDD7C;
loc_823DDB6C:
	// lwz r3,836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 836);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823ddd7c
	goto loc_823DDD7C;
loc_823DDB7C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r29,r11,18
	r29.u64 = r11.u32 & 0x3FFF;
	// rlwinm r30,r10,0,0,26
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r27,r10,30
	r27.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r26,r11,16,20,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFF;
	// lwz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mtctr r9
	ctr.u64 = ctx.r9.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,8192
	r11.s64 = 536870912;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x823ddbcc
	if (!cr6.lt) goto loc_823DDBCC;
	// addis r30,r30,-16384
	r30.s64 = r30.s64 + -1073741824;
	// b 0x823ddbd0
	goto loc_823DDBD0;
loc_823DDBCC:
	// addis r30,r30,-16640
	r30.s64 = r30.s64 + -1090519040;
loc_823DDBD0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// add r4,r28,r30
	ctx.r4.u64 = r28.u64 + r30.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
	// b 0x823ddd7c
	goto loc_823DDD7C;
loc_823DDC04:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r11,r11,-18876
	r11.s64 = r11.s64 + -18876;
	// addi r10,r10,-18908
	ctx.r10.s64 = ctx.r10.s64 + -18908;
	// mr r29,r30
	r29.u64 = r30.u64;
	// subf r26,r30,r11
	r26.s64 = r11.s64 - r30.s64;
	// subf r25,r30,r10
	r25.s64 = ctx.r10.s64 - r30.s64;
	// li r24,8
	r24.s64 = 8;
loc_823DDC24:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ddc94
	if (!cr0.eq) goto loc_823DDC94;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lis r10,8192
	ctx.r10.s64 = 536870912;
	// rlwinm r28,r11,0,0,26
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplw cr6,r28,r10
	cr6.compare<uint32_t>(r28.u32, ctx.r10.u32, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addis r5,r28,-16384
	ctx.r5.s64 = r28.s64 + -1073741824;
	// rlwinm r27,r11,3,0,28
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// blt cr6,0x823ddc58
	if (cr6.lt) goto loc_823DDC58;
	// addis r5,r28,-16640
	ctx.r5.s64 = r28.s64 + -1090519040;
loc_823DDC58:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwzx r6,r26,r29
	ctx.r6.u64 = PPC_LOAD_U32(r26.u32 + r29.u32);
	// lwzx r4,r25,r29
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + r29.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DDC94:
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x823ddc24
	if (!cr0.eq) goto loc_823DDC24;
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823ddcd0
	if (!cr0.eq) goto loc_823DDCD0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r11,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DDCD0:
	// lwz r11,40(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 40);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823ddd7c
	if (!cr0.eq) goto loc_823DDD7C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r11,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 44);
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,20(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823ddd7c
	goto loc_823DDD7C;
loc_823DDD04:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,804(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 804);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823ddd7c
	if (!cr6.eq) goto loc_823DDD7C;
	// lwz r11,780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 780);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,780(r31)
	PPC_STORE_U32(r31.u32 + 780, r11.u32);
	// b 0x823ddd7c
	goto loc_823DDD7C;
loc_823DDD28:
	// cmplwi cr6,r4,96
	cr6.compare<uint32_t>(ctx.r4.u32, 96, xer);
	// beq cr6,0x823ddd74
	if (cr6.eq) goto loc_823DDD74;
	// cmplwi cr6,r4,97
	cr6.compare<uint32_t>(ctx.r4.u32, 97, xer);
	// beq cr6,0x823ddd68
	if (cr6.eq) goto loc_823DDD68;
	// cmplwi cr6,r4,98
	cr6.compare<uint32_t>(ctx.r4.u32, 98, xer);
	// beq cr6,0x823ddd5c
	if (cr6.eq) goto loc_823DDD5C;
	// cmplwi cr6,r4,99
	cr6.compare<uint32_t>(ctx.r4.u32, 99, xer);
	// beq cr6,0x823ddd50
	if (cr6.eq) goto loc_823DDD50;
loc_823DDD48:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ddd80
	goto loc_823DDD80;
loc_823DDD50:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,828(r31)
	PPC_STORE_U32(r31.u32 + 828, r11.u32);
	// b 0x823ddd7c
	goto loc_823DDD7C;
loc_823DDD5C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,824(r31)
	PPC_STORE_U32(r31.u32 + 824, r11.u32);
	// b 0x823ddd7c
	goto loc_823DDD7C;
loc_823DDD68:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,820(r31)
	PPC_STORE_U32(r31.u32 + 820, r11.u32);
	// b 0x823ddd7c
	goto loc_823DDD7C;
loc_823DDD74:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,816(r31)
	PPC_STORE_U32(r31.u32 + 816, r11.u32);
loc_823DDD7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DDD80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823DDD88"))) PPC_WEAK_FUNC(sub_823DDD88);
PPC_FUNC_IMPL(__imp__sub_823DDD88) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// sync 
	// lwz r11,776(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 776);
	// rlwinm. r11,r11,0,3,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dddc4
	if (!cr0.eq) goto loc_823DDDC4;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DDDC4:
	// li r23,1406
	r23.s64 = 1406;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x823dde00
	if (cr6.eq) goto loc_823DDE00;
	// lis r11,1
	r11.s64 = 65536;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,12
	r11.u64 = r11.u64 | 12;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dd828
	sub_823DD828(ctx, base);
loc_823DDE00:
	// rlwinm r11,r31,2,0,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r26
	r28.u64 = r26.u64;
	// add r25,r11,r26
	r25.u64 = r11.u64 + r26.u64;
	// mr r31,r26
	r31.u64 = r26.u64;
	// cmplw cr6,r26,r25
	cr6.compare<uint32_t>(r26.u32, r25.u32, xer);
	// bge cr6,0x823ddf58
	if (!cr6.lt) goto loc_823DDF58;
loc_823DDE18:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// rlwinm. r10,r11,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823dde3c
	if (!cr0.eq) goto loc_823DDE3C;
	// rlwinm r11,r11,16,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x3FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_823DDE34:
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// b 0x823ddf50
	goto loc_823DDF50;
loc_823DDE3C:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x823ddf50
	if (cr6.eq) goto loc_823DDF50;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x823ddf50
	if (!cr6.eq) goto loc_823DDF50;
	// rlwinm r4,r11,24,24,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFF;
	// clrlwi r30,r11,31
	r30.u64 = r11.u32 & 0x1;
	// rlwinm r11,r11,16,18,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0x3FFF;
	// cmplwi cr6,r4,63
	cr6.compare<uint32_t>(ctx.r4.u32, 63, xer);
	// addi r27,r11,1
	r27.s64 = r11.s64 + 1;
	// beq cr6,0x823dde94
	if (cr6.eq) goto loc_823DDE94;
	// cmplwi cr6,r4,55
	cr6.compare<uint32_t>(ctx.r4.u32, 55, xer);
	// beq cr6,0x823dde94
	if (cr6.eq) goto loc_823DDE94;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x823dde34
	goto loc_823DDE34;
loc_823DDE94:
	// subf r11,r28,r31
	r11.s64 = r31.s64 - r28.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm. r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x823ddec4
	if (cr0.eq) goto loc_823DDEC4;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dd828
	sub_823DD828(ctx, base);
loc_823DDEC4:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823ddeec
	if (cr6.eq) goto loc_823DDEEC;
	// lwz r11,824(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 824);
	// lwz r10,816(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 816);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823ddeec
	if (!cr0.eq) goto loc_823DDEEC;
	// lwz r11,828(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 828);
	// lwz r10,820(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 820);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823ddf44
	if (cr0.eq) goto loc_823DDF44;
loc_823DDEEC:
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(r24.u32, 2, xer);
	// bge cr6,0x823ddf44
	if (!cr6.lt) goto loc_823DDF44;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r9,8192
	ctx.r9.s64 = 536870912;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// clrlwi r28,r10,12
	r28.u64 = ctx.r10.u32 & 0xFFFFF;
	// addis r30,r11,-16384
	r30.s64 = r11.s64 + -1073741824;
	// blt cr6,0x823ddf14
	if (cr6.lt) goto loc_823DDF14;
	// addis r30,r11,-16640
	r30.s64 = r11.s64 + -1090519040;
loc_823DDF14:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r6,r24,1
	ctx.r6.s64 = r24.s64 + 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
loc_823DDF44:
	// rlwinm r11,r27,2,0,29
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_823DDF50:
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// blt cr6,0x823dde18
	if (cr6.lt) goto loc_823DDE18;
loc_823DDF58:
	// subf r11,r28,r31
	r11.s64 = r31.s64 - r28.s64;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm. r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// beq 0x823ddf84
	if (cr0.eq) goto loc_823DDF84;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dd828
	sub_823DD828(ctx, base);
loc_823DDF84:
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x823ddfbc
	if (cr6.eq) goto loc_823DDFBC;
	// lis r11,1
	r11.s64 = 65536;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r23.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r11,r11,13
	r11.u64 = r11.u64 | 13;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,7
	ctx.r4.s64 = 7;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823dd828
	sub_823DD828(ctx, base);
loc_823DDFBC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x823d5498
	sub_823D5498(ctx, base);
	// lwz r3,812(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 812);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823ddff4
	if (cr0.eq) goto loc_823DDFF4;
	// bl 0x823d6808
	sub_823D6808(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,812(r29)
	PPC_STORE_U32(r29.u32 + 812, r11.u32);
loc_823DDFF4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823DDFFC"))) PPC_WEAK_FUNC(sub_823DDFFC);
PPC_FUNC_IMPL(__imp__sub_823DDFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE000"))) PPC_WEAK_FUNC(sub_823DE000);
PPC_FUNC_IMPL(__imp__sub_823DE000) {
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
	// lwz r11,776(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 776);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823de034
	if (cr0.eq) goto loc_823DE034;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r11,776(r31)
	PPC_STORE_U32(r31.u32 + 776, r11.u32);
	// b 0x823de088
	goto loc_823DE088;
loc_823DE034:
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// lwz r9,804(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 804);
	// lis r10,2746
	ctx.r10.s64 = 179961856;
	// li r6,4
	ctx.r6.s64 = 4;
	// ori r7,r10,53434
	ctx.r7.u64 = ctx.r10.u64 | 53434;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,776(r31)
	PPC_STORE_U32(r31.u32 + 776, r11.u32);
	// li r11,5426
	r11.s64 = 5426;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x823dd828
	sub_823DD828(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2048
	ctx.r9.s64 = 2048;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,796(r31)
	PPC_STORE_U32(r31.u32 + 796, r11.u32);
	// stw r10,788(r31)
	PPC_STORE_U32(r31.u32 + 788, ctx.r10.u32);
	// stw r9,792(r31)
	PPC_STORE_U32(r31.u32 + 792, ctx.r9.u32);
	// stw r11,800(r31)
	PPC_STORE_U32(r31.u32 + 800, r11.u32);
loc_823DE088:
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

__attribute__((alias("__imp__sub_823DE09C"))) PPC_WEAK_FUNC(sub_823DE09C);
PPC_FUNC_IMPL(__imp__sub_823DE09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE0A0"))) PPC_WEAK_FUNC(sub_823DE0A0);
PPC_FUNC_IMPL(__imp__sub_823DE0A0) {
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
	// lwz r11,776(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 776);
	// rlwinm. r10,r11,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823de0d0
	if (!cr0.eq) goto loc_823DE0D0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823de134
	goto loc_823DE134;
loc_823DE0D0:
	// rlwinm r11,r11,0,4,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFEFFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,776(r31)
	PPC_STORE_U32(r31.u32 + 776, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x823dd828
	sub_823DD828(ctx, base);
	// addi r10,r31,8
	ctx.r10.s64 = r31.s64 + 8;
	// li r11,64
	r11.s64 = 64;
loc_823DE104:
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r30.u32);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x823de104
	if (!cr0.eq) goto loc_823DE104;
	// lwz r11,776(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 776);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823de128
	if (!cr0.eq) goto loc_823DE128;
	// rlwinm. r11,r11,0,2,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823de130
	if (cr0.eq) goto loc_823DE130;
loc_823DE128:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
loc_823DE130:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823DE134:
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

__attribute__((alias("__imp__sub_823DE14C"))) PPC_WEAK_FUNC(sub_823DE14C);
PPC_FUNC_IMPL(__imp__sub_823DE14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE150"))) PPC_WEAK_FUNC(sub_823DE150);
PPC_FUNC_IMPL(__imp__sub_823DE150) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823de21c
	if (!cr6.gt) goto loc_823DE21C;
	// rlwinm r31,r11,1,0,30
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r31,r4
	cr6.compare<uint32_t>(r31.u32, ctx.r4.u32, xer);
	// bge cr6,0x823de180
	if (!cr6.lt) goto loc_823DE180;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_823DE180:
	// lis r28,-32256
	r28.s64 = -2113929216;
	// lwz r11,2060(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823de1b4
	if (cr0.eq) goto loc_823DE1B4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823de1b4
	if (cr0.eq) goto loc_823DE1B4;
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x823de1b8
	goto loc_823DE1B8;
loc_823DE1B4:
	// li r29,0
	r29.s64 = 0;
loc_823DE1B8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823de1d0
	if (!cr6.eq) goto loc_823DE1D0;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// b 0x823de21c
	goto loc_823DE21C;
loc_823DE1D0:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r31,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r31.u32);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823de218
	if (cr0.eq) goto loc_823DE218;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,2060(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823de218
	if (cr0.eq) goto loc_823DE218;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823de218
	if (cr0.eq) goto loc_823DE218;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DE218:
	// stw r29,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r29.u32);
loc_823DE21C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823DE224"))) PPC_WEAK_FUNC(sub_823DE224);
PPC_FUNC_IMPL(__imp__sub_823DE224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE228"))) PPC_WEAK_FUNC(sub_823DE228);
PPC_FUNC_IMPL(__imp__sub_823DE228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r31,r3,768
	r31.s64 = ctx.r3.s64 + 768;
	// li r30,63
	r30.s64 = 63;
	// lis r29,-32256
	r29.s64 = -2113929216;
loc_823DE240:
	// addi r31,r31,-12
	r31.s64 = r31.s64 + -12;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823de274
	if (cr0.eq) goto loc_823DE274;
	// lwz r11,2060(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823de274
	if (cr0.eq) goto loc_823DE274;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823de274
	if (cr0.eq) goto loc_823DE274;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DE274:
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x823de240
	if (!cr0.lt) goto loc_823DE240;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823DE284"))) PPC_WEAK_FUNC(sub_823DE284);
PPC_FUNC_IMPL(__imp__sub_823DE284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE288"))) PPC_WEAK_FUNC(sub_823DE288);
PPC_FUNC_IMPL(__imp__sub_823DE288) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823de2bc
	if (!cr6.gt) goto loc_823DE2BC;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x823de150
	sub_823DE150(ctx, base);
loc_823DE2BC:
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

__attribute__((alias("__imp__sub_823DE2DC"))) PPC_WEAK_FUNC(sub_823DE2DC);
PPC_FUNC_IMPL(__imp__sub_823DE2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE2E0"))) PPC_WEAK_FUNC(sub_823DE2E0);
PPC_FUNC_IMPL(__imp__sub_823DE2E0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,2272
	r11.s64 = r11.s64 + 2272;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x823de228
	sub_823DE228(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823de320
	if (cr0.eq) goto loc_823DE320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823DE320:
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

__attribute__((alias("__imp__sub_823DE33C"))) PPC_WEAK_FUNC(sub_823DE33C);
PPC_FUNC_IMPL(__imp__sub_823DE33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE340"))) PPC_WEAK_FUNC(sub_823DE340);
PPC_FUNC_IMPL(__imp__sub_823DE340) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,2060(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2060);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823de384
	if (cr0.eq) goto loc_823DE384;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823de384
	if (cr0.eq) goto loc_823DE384;
	// li r3,840
	ctx.r3.s64 = 840;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x823de388
	goto loc_823DE388;
loc_823DE384:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823DE388:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823de3c0
	if (cr6.eq) goto loc_823DE3C0;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,63
	ctx.r10.s64 = 63;
	// addi r9,r11,2272
	ctx.r9.s64 = r11.s64 + 2272;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
loc_823DE3A4:
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r31.u32);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// bge 0x823de3a4
	if (!cr0.lt) goto loc_823DE3A4;
	// b 0x823de3c4
	goto loc_823DE3C4;
loc_823DE3C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823DE3C4:
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

__attribute__((alias("__imp__sub_823DE3D8"))) PPC_WEAK_FUNC(sub_823DE3D8);
PPC_FUNC_IMPL(__imp__sub_823DE3D8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2031
	r11.s64 = 133103616;
	// addis r10,r4,16368
	ctx.r10.s64 = ctx.r4.s64 + 1072693248;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x823de58c
	if (!cr6.gt) goto loc_823DE58C;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823de58c
	if (cr6.eq) goto loc_823DE58C;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823de58c
	if (cr6.eq) goto loc_823DE58C;
	// lis r11,8192
	r11.s64 = 536870912;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x823de58c
	if (!cr6.lt) goto loc_823DE58C;
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x823de42c
	if (!cr6.gt) goto loc_823DE42C;
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
loc_823DE42C:
	// rlwinm r30,r4,0,0,19
	r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFF000;
	// add r26,r4,r5
	r26.u64 = ctx.r4.u64 + ctx.r5.u64;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// bge cr6,0x823de58c
	if (!cr6.lt) goto loc_823DE58C;
	// addi r27,r28,4
	r27.s64 = r28.s64 + 4;
	// li r29,0
	r29.s64 = 0;
loc_823DE444:
	// rlwinm r11,r30,20,26,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 20) & 0x3F;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r31,r11,r27
	r31.u64 = r11.u64 + r27.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823de524
	if (!cr6.eq) goto loc_823DE524;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x823de478
	if (!cr6.lt) goto loc_823DE478;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823de150
	sub_823DE150(ctx, base);
loc_823DE478:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x823de580
	if (cr6.lt) goto loc_823DE580;
loc_823DE484:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823de288
	sub_823DE288(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x823de580
	if (cr6.lt) goto loc_823DE580;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// stw r29,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r29.u32);
loc_823DE4BC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823de580
	if (cr6.eq) goto loc_823DE580;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r9,r11,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823de56c
	if (!cr0.eq) goto loc_823DE56C;
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823de560
	if (!cr6.eq) goto loc_823DE560;
	// lwz r11,776(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 776);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823de570
	if (!cr0.eq) goto loc_823DE570;
	// lwz r10,772(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 772);
	// oris r11,r11,16384
	r11.u64 = r11.u64 | 1073741824;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r25.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,776(r28)
	PPC_STORE_U32(r28.u32 + 776, r11.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823dd828
	sub_823DD828(ctx, base);
	// b 0x823de570
	goto loc_823DE570;
loc_823DE524:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// b 0x823de54c
	goto loc_823DE54C;
loc_823DE53C:
	// addi r11,r11,-8
	r11.s64 = r11.s64 + -8;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r30
	cr6.compare<uint32_t>(ctx.r9.u32, r30.u32, xer);
	// beq cr6,0x823de558
	if (cr6.eq) goto loc_823DE558;
loc_823DE54C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x823de53c
	if (cr6.gt) goto loc_823DE53C;
	// b 0x823de484
	goto loc_823DE484;
loc_823DE558:
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// b 0x823de4bc
	goto loc_823DE4BC;
loc_823DE560:
	// rlwinm. r9,r11,0,10,11
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x300000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823de56c
	if (!cr0.eq) goto loc_823DE56C;
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
loc_823DE56C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_823DE570:
	// addi r30,r30,4096
	r30.s64 = r30.s64 + 4096;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x823de444
	if (cr6.lt) goto loc_823DE444;
	// b 0x823de58c
	goto loc_823DE58C;
loc_823DE580:
	// lwz r11,776(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 776);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,776(r28)
	PPC_STORE_U32(r28.u32 + 776, r11.u32);
loc_823DE58C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823DE594"))) PPC_WEAK_FUNC(sub_823DE594);
PPC_FUNC_IMPL(__imp__sub_823DE594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE598"))) PPC_WEAK_FUNC(sub_823DE598);
PPC_FUNC_IMPL(__imp__sub_823DE598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister temp{};
	uint32_t ea{};
	// addi r11,r5,16
	r11.s64 = ctx.r5.s64 + 16;
	// lvx128 v9,r0,r5
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r5,32
	ctx.r10.s64 = ctx.r5.s64 + 32;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r5,48
	ctx.r9.s64 = ctx.r5.s64 + 48;
	// lvx128 v13,r0,r4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r5,63
	ctx.r8.s64 = ctx.r5.s64 + 63;
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r4,15
	r11.s64 = ctx.r4.s64 + 15;
	// lvx128 v11,r0,r10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v9,v9,v12,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v10,r0,r9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v12,v12,v11,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v8,r0,r8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v11,v11,v10,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v0,v10,v8,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r10,8
	ctx.r10.s64 = 8;
	// lvx128 v6,r0,r11
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,4
	r11.s64 = 4;
	// vperm v13,v13,v6,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvsr v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vmrghw v10,v9,v11
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// li r9,12
	ctx.r9.s64 = 12;
	// vmrglw v11,v9,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v9,v12,v0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrglw v0,v12,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrglw v12,v10,v9
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrglw v8,v11,v0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v11,v10,v9
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmsum4fp128 v12,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v10,v13,v8
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v13,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vmrghw v12,v12,v10
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v0,v0,v12
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vperm v0,v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvewx v0,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r8,r11
	ea = (ctx.r8.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DE65C"))) PPC_WEAK_FUNC(sub_823DE65C);
PPC_FUNC_IMPL(__imp__sub_823DE65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DE660"))) PPC_WEAK_FUNC(sub_823DE660);
PPC_FUNC_IMPL(__imp__sub_823DE660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// addi r11,r5,16
	r11.s64 = ctx.r5.s64 + 16;
	// lvx128 v6,r0,r5
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r5,32
	ctx.r10.s64 = ctx.r5.s64 + 32;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r5,48
	ctx.r9.s64 = ctx.r5.s64 + 48;
	// lvsl v7,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r5,63
	ctx.r8.s64 = ctx.r5.s64 + 63;
	// lvx128 v2,r0,r4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r7,20
	ctx.r7.s64 = 20;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// lvx128 v11,r0,r9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// lvx128 v3,r0,r8
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r4,63
	ctx.r8.s64 = ctx.r4.s64 + 63;
	// vperm v5,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r6,24
	ctx.r6.s64 = 24;
	// vperm v6,v6,v13,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v10,r0,r11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v4,v12,v11,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v9,r0,r10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v3,v11,v3,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v8,r0,r9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v1,r0,r8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v13,v10,v9,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v12,v9,v8,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r11,4
	r11.s64 = 4;
	// vperm v11,v8,v1,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r10,8
	ctx.r10.s64 = 8;
	// vperm v0,v2,v10,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r9,12
	ctx.r9.s64 = 12;
	// vmrghw v9,v6,v4
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// li r8,16
	ctx.r8.s64 = 16;
	// vmrghw v8,v5,v3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// li r5,28
	ctx.r5.s64 = 28;
	// vmrglw v7,v6,v4
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// li r4,32
	ctx.r4.s64 = 32;
	// vmrglw v6,v5,v3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// li r31,36
	r31.s64 = 36;
	// li r30,40
	r30.s64 = 40;
	// vmrghw v10,v9,v8
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// li r29,44
	r29.s64 = 44;
	// vmrglw v9,v9,v8
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// li r28,48
	r28.s64 = 48;
	// vmrghw v8,v7,v6
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// li r27,52
	r27.s64 = 52;
	// vmrglw v7,v7,v6
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// li r26,56
	r26.s64 = 56;
	// vmsum4fp128 v6,v0,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v0,v9
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v31,v0,v8
	_mm_store_ps(v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v0,v0,v7
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v5,v13,v10
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v4,v12,v10
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v2,v13,v9
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v1,v12,v9
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v30,v13,v7
	_mm_store_ps(v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v29,v12,v7
	_mm_store_ps(v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v10,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v13,v13,v8
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v9,v11,v9
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v7,v11,v7
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v12,v12,v8
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmsum4fp128 v11,v11,v8
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vmrghw v8,v6,v31
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v31.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v0,v3,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v6,v2,v30
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v30.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmrghw v3,v1,v29
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)v29.u32), _mm_load_si128((__m128i*)ctx.v1.u32)));
	// vmrghw v5,v5,v13
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v13,v8,v0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// lvsr v0,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vmrghw v9,v9,v7
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v4,v4,v12
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v10,v10,v11
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v12,v5,v6
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vperm v13,v13,v13,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghw v11,v4,v3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v10,v10,v9
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// stvewx v13,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// vperm v12,v12,v12,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v11,v11,v11,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v0,v10,v10,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvewx v13,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v13,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v13,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v11,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v11,r11,r31
	ea = (r11.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v11,r11,r30
	ea = (r11.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v11,r11,r29
	ea = (r11.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r28
	ea = (r11.u32 + r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r27
	ea = (r11.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r26
	ea = (r11.u32 + r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r11,60
	r11.s64 = 60;
	// stvewx v0,r10,r11
	ea = (ctx.r10.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823DE840"))) PPC_WEAK_FUNC(sub_823DE840);
PPC_FUNC_IMPL(__imp__sub_823DE840) {
	PPC_FUNC_PROLOGUE();
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
	// addi r11,r4,16
	r11.s64 = ctx.r4.s64 + 16;
	// lvx128 v10,r0,r4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// lvsl v0,r0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// lvsr v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// addi r8,r4,63
	ctx.r8.s64 = ctx.r4.s64 + 63;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// li r6,20
	ctx.r6.s64 = 20;
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,4
	r11.s64 = 4;
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v10,v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v11,r0,r9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v13,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v9,r0,r8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v12,v12,v11,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v0,v11,v9,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,16
	ctx.r8.s64 = 16;
	// vmrghw v11,v10,v12
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// li r5,24
	ctx.r5.s64 = 24;
	// vmrglw v12,v10,v12
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// li r4,28
	ctx.r4.s64 = 28;
	// vmrghw v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// li r31,40
	r31.s64 = 40;
	// vmrglw v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// li r30,44
	r30.s64 = 44;
	// li r29,52
	r29.s64 = 52;
	// li r28,56
	r28.s64 = 56;
	// vmrghw v13,v11,v10
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// li r27,60
	r27.s64 = 60;
	// vmrglw v11,v11,v10
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v10,v12,v0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrglw v9,v12,v0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vperm v0,v13,v13,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v13,v11,v11,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v12,v10,v10,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v10,v9,v9,v7
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// stvewx v0,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r7,20(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r3,32
	ctx.r3.s64 = 32;
	// stvewx v0,r7,r11
	ea = (ctx.r7.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r7,36
	ctx.r7.s64 = 36;
	// stvewx v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,48
	ctx.r10.s64 = 48;
	// vor v0,v10,v10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// stvewx v11,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v13,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v13,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v13,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v13,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r3
	ea = (r11.u32 + ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r31
	ea = (r11.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r30
	ea = (r11.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r29
	ea = (r11.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r28
	ea = (r11.u32 + r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r27
	ea = (r11.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823DE980"))) PPC_WEAK_FUNC(sub_823DE980);
PPC_FUNC_IMPL(__imp__sub_823DE980) {
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
	PPCVRegister v18{};
	PPCVRegister v19{};
	PPCVRegister v20{};
	PPCVRegister v21{};
	PPCVRegister v22{};
	PPCVRegister v23{};
	PPCVRegister v24{};
	PPCVRegister v25{};
	PPCVRegister v26{};
	PPCVRegister v27{};
	PPCVRegister v28{};
	PPCVRegister v29{};
	PPCVRegister v30{};
	PPCVRegister v31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// addi r11,r5,16
	r11.s64 = ctx.r5.s64 + 16;
	// lvx128 v10,r0,r5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r5,32
	ctx.r10.s64 = ctx.r5.s64 + 32;
	// lvsl v0,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r5,48
	ctx.r9.s64 = ctx.r5.s64 + 48;
	// vspltisw v3,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r5,63
	ctx.r8.s64 = ctx.r5.s64 + 63;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v10,v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v11,r0,r9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v13,v13,v12,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v9,r0,r8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm v12,v12,v11,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v11,v11,v9,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrglw v9,v10,v12
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrglw v0,v13,v11
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v8,v10,v12
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v7,v13,v11
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vor v28,v9,v9
	_mm_store_si128((__m128i*)v28.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vmrghw v12,v9,v0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrglw v11,v9,v0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vor v27,v8,v8
	_mm_store_si128((__m128i*)v27.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vor v29,v7,v7
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vmrghw v13,v8,v7
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrglw v10,v8,v7
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vrlimi128 v28,v8,3,2
	_mm_store_ps(v28.f32, _mm_blend_ps(_mm_load_ps(v28.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// vpermwi128 v6,v12,5
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFA));
	// vpermwi128 v5,v11,187
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x44));
	// vrlimi128 v27,v9,12,2
	_mm_store_ps(v27.f32, _mm_blend_ps(_mm_load_ps(v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 12));
	// vrlimi128 v29,v0,12,2
	_mm_store_ps(v29.f32, _mm_blend_ps(_mm_load_ps(v29.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 12));
	// vpermwi128 v4,v13,5
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFA));
	// vpermwi128 v2,v10,187
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x44));
	// vrlimi128 v0,v7,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vpermwi128 v1,v11,5
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFA));
	// vmulfp128 v5,v6,v5
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v5.f32)));
	// vpermwi128 v31,v13,187
	_mm_store_si128((__m128i*)v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x44));
	// vmulfp128 v8,v28,v29
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v29.f32)));
	// vspltisw v6,-1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vmulfp128 v4,v4,v2
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v2.f32)));
	// vpermwi128 v2,v12,187
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x44));
	// vpermwi128 v30,v10,5
	_mm_store_si128((__m128i*)v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFA));
	// vpermwi128 v20,v10,97
	_mm_store_si128((__m128i*)v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9E));
	// vslw v7,v6,v6
	ctx.v7.u32[0] = ctx.v6.u32[0] << (ctx.v6.u8[0] & 0x1F);
	ctx.v7.u32[1] = ctx.v6.u32[1] << (ctx.v6.u8[4] & 0x1F);
	ctx.v7.u32[2] = ctx.v6.u32[2] << (ctx.v6.u8[8] & 0x1F);
	ctx.v7.u32[3] = ctx.v6.u32[3] << (ctx.v6.u8[12] & 0x1F);
	// vpermwi128 v25,v12,132
	_mm_store_si128((__m128i*)v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x7B));
	// vpermwi128 v26,v11,97
	_mm_store_si128((__m128i*)v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9E));
	// vpermwi128 v19,v13,132
	_mm_store_si128((__m128i*)v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x7B));
	// vpermwi128 v22,v11,182
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x49));
	// vpermwi128 v21,v12,237
	_mm_store_si128((__m128i*)v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x12));
	// vor v23,v26,v26
	_mm_store_si128((__m128i*)v23.u8, _mm_load_si128((__m128i*)v26.u8));
	// vpermwi128 v28,v10,182
	_mm_store_si128((__m128i*)v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x49));
	// vnmsubfp v9,v2,v1,v5
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v5.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmrghw v2,v3,v7
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vnmsubfp v0,v0,v27,v8
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(v27.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmrghw v1,v7,v3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vnmsubfp v8,v31,v30,v4
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v31.f32), _mm_load_ps(v30.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v27,v13,237
	_mm_store_si128((__m128i*)v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x12));
	// vpermwi128 v7,v9,156
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x63));
	// vpermwi128 v6,v9,198
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x39));
	// vpermwi128 v5,v8,156
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x63));
	// vpermwi128 v4,v8,198
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vor v31,v7,v7
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vor v30,v6,v6
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vor v29,v5,v5
	_mm_store_si128((__m128i*)v29.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// vrlimi128 v6,v0,1,1
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 147), 1));
	// vrlimi128 v31,v0,8,1
	_mm_store_ps(v31.f32, _mm_blend_ps(_mm_load_ps(v31.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 147), 8));
	// vrlimi128 v30,v0,4,0
	_mm_store_ps(v30.f32, _mm_blend_ps(_mm_load_ps(v30.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 4));
	// vrlimi128 v29,v0,8,3
	_mm_store_ps(v29.f32, _mm_blend_ps(_mm_load_ps(v29.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 8));
	// vrlimi128 v7,v0,2,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 2));
	// vmulfp128 v24,v20,v31
	_mm_store_ps(v24.f32, _mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(v31.f32)));
	// vor v20,v25,v25
	_mm_store_si128((__m128i*)v20.u8, _mm_load_si128((__m128i*)v25.u8));
	// vor v25,v4,v4
	_mm_store_si128((__m128i*)v25.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vmulfp128 v26,v19,v30
	_mm_store_ps(v26.f32, _mm_mul_ps(_mm_load_ps(v19.f32), _mm_load_ps(v30.f32)));
	// vor v31,v22,v22
	_mm_store_si128((__m128i*)v31.u8, _mm_load_si128((__m128i*)v22.u8));
	// vmulfp128 v29,v23,v29
	_mm_store_ps(v29.f32, _mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(v29.f32)));
	// vor v30,v21,v21
	_mm_store_si128((__m128i*)v30.u8, _mm_load_si128((__m128i*)v21.u8));
	// vrlimi128 v4,v0,1,3
	_mm_store_ps(ctx.v4.f32, _mm_blend_ps(_mm_load_ps(ctx.v4.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 1));
	// vrlimi128 v25,v0,4,2
	_mm_store_ps(v25.f32, _mm_blend_ps(_mm_load_ps(v25.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 4));
	// vor v19,v6,v6
	_mm_store_si128((__m128i*)v19.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vpermwi128 v23,v9,78
	_mm_store_si128((__m128i*)v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xB1));
	// vor v18,v4,v4
	_mm_store_si128((__m128i*)v18.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vsldoi v21,v9,v0,8
	_mm_store_si128((__m128i*)v21.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 8));
	// vmulfp128 v25,v20,v25
	_mm_store_ps(v25.f32, _mm_mul_ps(_mm_load_ps(v20.f32), _mm_load_ps(v25.f32)));
	// vor v20,v7,v7
	_mm_store_si128((__m128i*)v20.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vnmsubfp v4,v28,v19,v24
	_mm_store_ps(ctx.v4.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v28.f32), _mm_load_ps(v19.f32)), _mm_load_ps(v24.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v7,v10,204
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x33));
	// vrlimi128 v5,v0,2,0
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 2));
	// vor v9,v23,v23
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)v23.u8));
	// vpermwi128 v22,v8,78
	_mm_store_si128((__m128i*)v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xB1));
	// vor v23,v31,v31
	_mm_store_si128((__m128i*)v23.u8, _mm_load_si128((__m128i*)v31.u8));
	// vpermwi128 v11,v11,204
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x33));
	// vor v10,v21,v21
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)v21.u8));
	// vmrglw v8,v8,v0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vor v21,v30,v30
	_mm_store_si128((__m128i*)v21.u8, _mm_load_si128((__m128i*)v30.u8));
	// vnmsubfp v31,v27,v20,v26
	_mm_store_ps(v31.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v27.f32), _mm_load_ps(v20.f32)), _mm_load_ps(v26.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vxor v7,v7,v2
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vpermwi128 v6,v13,114
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x8D));
	// vnmsubfp v30,v23,v18,v29
	_mm_store_ps(v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v23.f32), _mm_load_ps(v18.f32)), _mm_load_ps(v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vpermwi128 v29,v12,114
	_mm_store_si128((__m128i*)v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x8D));
	// vor v12,v22,v22
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)v22.u8));
	// vpermwi128 v10,v10,56
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xC7));
	// vrlimi128 v9,v0,9,1
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 147), 9));
	// vpermwi128 v8,v8,52
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xCB));
	// vxor v6,v6,v1
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// addi r11,r1,-64
	r11.s64 = ctx.r1.s64 + -64;
	// vnmsubfp v5,v21,v5,v25
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(v21.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(v25.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// li r10,8
	ctx.r10.s64 = 8;
	// vrlimi128 v12,v0,9,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 9));
	// li r9,12
	ctx.r9.s64 = 12;
	// vxor v0,v11,v2
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vmaddfp v11,v7,v10,v4
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v4.f32)));
	// vupkd3d128 v10,v3,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v3.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v3.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v10 = vTemp;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,20
	ctx.r7.s64 = 20;
	// li r6,24
	ctx.r6.s64 = 24;
	// vmaddfp v7,v6,v9,v31
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(v31.f32)));
	// vxor v9,v29,v1
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_xor_si128(_mm_load_si128((__m128i*)v29.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vspltw v10,v10,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x0));
	// li r5,28
	ctx.r5.s64 = 28;
	// vmaddfp v8,v0,v8,v30
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(v30.f32)));
	// li r4,32
	ctx.r4.s64 = 32;
	// li r31,36
	r31.s64 = 36;
	// li r30,40
	r30.s64 = 40;
	// li r29,44
	r29.s64 = 44;
	// vmaddfp v9,v9,v12,v5
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v5.f32)));
	// li r28,48
	r28.s64 = 48;
	// li r27,52
	r27.s64 = 52;
	// vmsum4fp128 v0,v11,v13
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,4
	r11.s64 = 4;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrefp v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v13,v0,v10
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v5,v0,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v12,v12,v0,v10
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v0,v5,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vmulfp128 v13,v11,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v7,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)));
	// lvsr v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableR[(temp.u32 & 0xF) * 16]));
	// vmulfp128 v11,v8,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v9,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)));
	// vperm v0,v13,v13,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v13,v12,v12,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v12,v11,v11,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v11,v10,v10,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvewx v0,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r3,r11
	ea = (ctx.r3.u32 + r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v0,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v13,r11,r8
	ea = (r11.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v13,r11,r7
	ea = (r11.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,56
	ctx.r10.s64 = 56;
	// li r9,60
	ctx.r9.s64 = 60;
	// stvewx v13,r11,r6
	ea = (r11.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v13,r11,r5
	ea = (r11.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r4
	ea = (r11.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r31
	ea = (r11.u32 + r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r30
	ea = (r11.u32 + r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v12,r11,r29
	ea = (r11.u32 + r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v11,r11,r28
	ea = (r11.u32 + r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v11,r11,r27
	ea = (r11.u32 + r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v11,r11,r10
	ea = (r11.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,20(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// stvewx v11,r11,r9
	ea = (r11.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r11,28(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823dec7c
	if (cr6.eq) goto loc_823DEC7C;
	// lfs f0,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r11.u32 + 0, temp.u32);
loc_823DEC7C:
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823DEC84"))) PPC_WEAK_FUNC(sub_823DEC84);
PPC_FUNC_IMPL(__imp__sub_823DEC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DEC88"))) PPC_WEAK_FUNC(sub_823DEC88);
PPC_FUNC_IMPL(__imp__sub_823DEC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// cntlzw r11,r3
	r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,-12488(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12488, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DEC9C"))) PPC_WEAK_FUNC(sub_823DEC9C);
PPC_FUNC_IMPL(__imp__sub_823DEC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DECA0"))) PPC_WEAK_FUNC(sub_823DECA0);
PPC_FUNC_IMPL(__imp__sub_823DECA0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,6572
	r11.s64 = r11.s64 + 6572;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x823deccc
	if (cr0.eq) goto loc_823DECCC;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823DECCC:
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

__attribute__((alias("__imp__sub_823DECE4"))) PPC_WEAK_FUNC(sub_823DECE4);
PPC_FUNC_IMPL(__imp__sub_823DECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DECE8"))) PPC_WEAK_FUNC(sub_823DECE8);
PPC_FUNC_IMPL(__imp__sub_823DECE8) {
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
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,118
	cr6.compare<uint32_t>(r11.u32, 118, xer);
	// bne cr6,0x823ded7c
	if (!cr6.eq) goto loc_823DED7C;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823DED0C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823ded0c
	if (!cr6.eq) goto loc_823DED0C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// subf r10,r3,r11
	ctx.r10.s64 = r11.s64 - ctx.r3.s64;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// ble cr6,0x823ded7c
	if (!cr6.gt) goto loc_823DED7C;
	// addi r31,r11,-3
	r31.s64 = r11.s64 + -3;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,6616
	ctx.r4.s64 = r11.s64 + 6616;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823ded74
	if (cr0.eq) goto loc_823DED74;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,6612
	ctx.r4.s64 = r11.s64 + 6612;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823ded7c
	if (!cr0.eq) goto loc_823DED7C;
loc_823DED74:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823ded80
	goto loc_823DED80;
loc_823DED7C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DED80:
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

__attribute__((alias("__imp__sub_823DED94"))) PPC_WEAK_FUNC(sub_823DED94);
PPC_FUNC_IMPL(__imp__sub_823DED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DED98"))) PPC_WEAK_FUNC(sub_823DED98);
PPC_FUNC_IMPL(__imp__sub_823DED98) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi cr6,r11,118
	cr6.compare<uint32_t>(r11.u32, 118, xer);
	// bne cr6,0x823dee40
	if (!cr6.eq) goto loc_823DEE40;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823DEDC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823dedc0
	if (!cr6.eq) goto loc_823DEDC0;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// subf r10,r31,r11
	ctx.r10.s64 = r11.s64 - r31.s64;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// ble cr6,0x823dee40
	if (!cr6.gt) goto loc_823DEE40;
	// addi r30,r11,-3
	r30.s64 = r11.s64 + -3;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,6616
	ctx.r4.s64 = r11.s64 + 6616;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823dee18
	if (!cr0.eq) goto loc_823DEE18;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,5612
	ctx.r3.s64 = r11.s64 + 5612;
	// b 0x823dee78
	goto loc_823DEE78;
loc_823DEE18:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r11,6612
	ctx.r4.s64 = r11.s64 + 6612;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d9a0
	sub_8239D9A0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823dee40
	if (!cr0.eq) goto loc_823DEE40;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,5600
	ctx.r3.s64 = r11.s64 + 5600;
	// b 0x823dee78
	goto loc_823DEE78;
loc_823DEE40:
	// rlwinm. r11,r29,0,11,11
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dee74
	if (!cr0.eq) goto loc_823DEE74;
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,118
	cr6.compare<int32_t>(r11.s32, 118, xer);
	// bne cr6,0x823dee64
	if (!cr6.eq) goto loc_823DEE64;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r31,r11,2956
	r31.s64 = r11.s64 + 2956;
	// b 0x823dee74
	goto loc_823DEE74;
loc_823DEE64:
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// bne cr6,0x823dee74
	if (!cr6.eq) goto loc_823DEE74;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r31,r11,2940
	r31.s64 = r11.s64 + 2940;
loc_823DEE74:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823DEE78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823DEE80"))) PPC_WEAK_FUNC(sub_823DEE80);
PPC_FUNC_IMPL(__imp__sub_823DEE80) {
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
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823dee9c
	if (!cr6.eq) goto loc_823DEE9C;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823def10
	goto loc_823DEF10;
loc_823DEE9C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r31,0
	r31.s64 = 0;
	// li r6,49
	ctx.r6.s64 = 49;
	// addi r30,r11,5984
	r30.s64 = r11.s64 + 5984;
loc_823DEEAC:
	// add r11,r6,r31
	r11.u64 = ctx.r6.u64 + r31.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mulli r11,r9,12
	r11.s64 = ctx.r9.s64 * 12;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
loc_823DEEC0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823deee4
	if (cr0.eq) goto loc_823DEEE4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823deec0
	if (cr6.eq) goto loc_823DEEC0;
loc_823DEEE4:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823def1c
	if (cr0.eq) goto loc_823DEF1C;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bge cr6,0x823deefc
	if (!cr6.lt) goto loc_823DEEFC;
	// addi r31,r9,1
	r31.s64 = ctx.r9.s64 + 1;
	// b 0x823def00
	goto loc_823DEF00;
loc_823DEEFC:
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
loc_823DEF00:
	// cmplw cr6,r31,r6
	cr6.compare<uint32_t>(r31.u32, ctx.r6.u32, xer);
	// blt cr6,0x823deeac
	if (cr6.lt) goto loc_823DEEAC;
loc_823DEF08:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823DEF10:
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_823DEF1C:
	// mulli r11,r9,12
	r11.s64 = ctx.r9.s64 * 12;
	// addi r10,r30,8
	ctx.r10.s64 = r30.s64 + 8;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// and r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bne cr6,0x823def08
	if (!cr6.eq) goto loc_823DEF08;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823def58
	if (cr6.eq) goto loc_823DEF58;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
loc_823DEF58:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823def10
	goto loc_823DEF10;
}

__attribute__((alias("__imp__sub_823DEF60"))) PPC_WEAK_FUNC(sub_823DEF60);
PPC_FUNC_IMPL(__imp__sub_823DEF60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r9,49
	ctx.r9.s64 = 49;
	// addi r10,r11,5984
	ctx.r10.s64 = r11.s64 + 5984;
	// addi r11,r10,596
	r11.s64 = ctx.r10.s64 + 596;
loc_823DEF70:
	// addi r11,r11,-12
	r11.s64 = r11.s64 + -12;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// cmplw cr6,r8,r3
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, xer);
	// bne cr6,0x823def94
	if (!cr6.eq) goto loc_823DEF94;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// and r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 & ctx.r4.u64;
	// cmplw cr6,r8,r4
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, xer);
	// beq cr6,0x823defac
	if (cr6.eq) goto loc_823DEFAC;
loc_823DEF94:
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x823def70
	if (cr6.gt) goto loc_823DEF70;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_823DEFAC:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823defd4
	if (cr6.eq) goto loc_823DEFD4;
	// mulli r11,r9,12
	r11.s64 = ctx.r9.s64 * 12;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
loc_823DEFD4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DEFDC"))) PPC_WEAK_FUNC(sub_823DEFDC);
PPC_FUNC_IMPL(__imp__sub_823DEFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DEFE0"))) PPC_WEAK_FUNC(sub_823DEFE0);
PPC_FUNC_IMPL(__imp__sub_823DEFE0) {
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
	// li r28,0
	r28.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r28
	r29.u64 = r28.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x823df00c
	if (!cr6.eq) goto loc_823DF00C;
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,87
	r29.u64 = r29.u64 | 87;
	// b 0x823df040
	goto loc_823DF040;
loc_823DF00C:
	// addi r31,r4,-1
	r31.s64 = ctx.r4.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8239f070
	sub_8239F070(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823df034
	if (cr0.lt) goto loc_823DF034;
	// cmplw cr6,r3,r31
	cr6.compare<uint32_t>(ctx.r3.u32, r31.u32, xer);
	// bgt cr6,0x823df034
	if (cr6.gt) goto loc_823DF034;
	// bne cr6,0x823df040
	if (!cr6.eq) goto loc_823DF040;
	// b 0x823df03c
	goto loc_823DF03C;
loc_823DF034:
	// lis r29,-32761
	r29.s64 = -2147024896;
	// ori r29,r29,122
	r29.u64 = r29.u64 | 122;
loc_823DF03C:
	// stbx r28,r31,r30
	PPC_STORE_U8(r31.u32 + r30.u32, r28.u8);
loc_823DF040:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823DF04C"))) PPC_WEAK_FUNC(sub_823DF04C);
PPC_FUNC_IMPL(__imp__sub_823DF04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DF050"))) PPC_WEAK_FUNC(sub_823DF050);
PPC_FUNC_IMPL(__imp__sub_823DF050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,9120
	ctx.r4.s64 = ctx.r10.s64 + 9120;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x823e41d8
	sub_823E41D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DF074"))) PPC_WEAK_FUNC(sub_823DF074);
PPC_FUNC_IMPL(__imp__sub_823DF074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DF078"))) PPC_WEAK_FUNC(sub_823DF078);
PPC_FUNC_IMPL(__imp__sub_823DF078) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,6572
	r11.s64 = r11.s64 + 6572;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x823df0a4
	if (cr0.eq) goto loc_823DF0A4;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823DF0A4:
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

__attribute__((alias("__imp__sub_823DF0BC"))) PPC_WEAK_FUNC(sub_823DF0BC);
PPC_FUNC_IMPL(__imp__sub_823DF0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DF0C0"))) PPC_WEAK_FUNC(sub_823DF0C0);
PPC_FUNC_IMPL(__imp__sub_823DF0C0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823df0e4
	if (cr6.eq) goto loc_823DF0E4;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
loc_823DF0E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823df0f8
	if (!cr6.eq) goto loc_823DF0F8;
loc_823DF0EC:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823df1a0
	goto loc_823DF1A0;
loc_823DF0F8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823df0ec
	if (cr6.eq) goto loc_823DF0EC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,4138
	ctx.r10.s64 = 271187968;
	// ori r10,r10,4352
	ctx.r10.u64 = ctx.r10.u64 | 4352;
	// rlwinm r9,r11,0,0,23
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// beq cr6,0x823df134
	if (cr6.eq) goto loc_823DF134;
	// rlwinm r11,r11,0,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823df134
	if (cr6.eq) goto loc_823DF134;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823df198
	if (!cr6.eq) goto loc_823DF198;
loc_823DF134:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823df150
	if (cr0.eq) goto loc_823DF150;
	// bl 0x823ea600
	sub_823EA600(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_823DF150:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823df164
	if (!cr6.eq) goto loc_823DF164;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823df1a0
	goto loc_823DF1A0;
loc_823DF164:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823eab28
	sub_823EAB28(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x823df198
	if (!cr0.lt) goto loc_823DF198;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e97e8
	sub_823E97E8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// b 0x823df1a0
	goto loc_823DF1A0;
loc_823DF198:
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823DF1A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823DF1A8"))) PPC_WEAK_FUNC(sub_823DF1A8);
PPC_FUNC_IMPL(__imp__sub_823DF1A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x823df0c0
	sub_823DF0C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823DF1AC"))) PPC_WEAK_FUNC(sub_823DF1AC);
PPC_FUNC_IMPL(__imp__sub_823DF1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DF1B0"))) PPC_WEAK_FUNC(sub_823DF1B0);
PPC_FUNC_IMPL(__imp__sub_823DF1B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
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
	// lis r11,32767
	r11.s64 = 2147418112;
	// ori r11,r11,65535
	r11.u64 = r11.u64 | 65535;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823df1ec
	if (!cr6.gt) goto loc_823DF1EC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x823df200
	goto loc_823DF200;
loc_823DF1EC:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823defe0
	sub_823DEFE0(ctx, base);
loc_823DF200:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823DF210"))) PPC_WEAK_FUNC(sub_823DF210);
PPC_FUNC_IMPL(__imp__sub_823DF210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	r20.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// mr r19,r8
	r19.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// bl 0x823e20a0
	sub_823E20A0(ctx, base);
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823df25c
	if (cr6.eq) goto loc_823DF25C;
	// stw r20,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r20.u32);
loc_823DF25C:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x823df268
	if (cr6.eq) goto loc_823DF268;
	// stw r20,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r20.u32);
loc_823DF268:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823df288
	if (cr6.eq) goto loc_823DF288;
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823df288
	if (cr6.eq) goto loc_823DF288;
	// lis r30,-30602
	r30.s64 = -2005532672;
	// ori r30,r30,2156
	r30.u64 = r30.u64 | 2156;
	// b 0x823df854
	goto loc_823DF854;
loc_823DF288:
	// lis r12,-863
	r12.s64 = -56557568;
	// ori r12,r12,57792
	r12.u64 = r12.u64 | 57792;
	// and. r11,r29,r12
	r11.u64 = r29.u64 & r12.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823df2a4
	if (cr0.eq) goto loc_823DF2A4;
loc_823DF298:
	// lis r30,-30602
	r30.s64 = -2005532672;
	// ori r30,r30,2156
	r30.u64 = r30.u64 | 2156;
	// b 0x823df838
	goto loc_823DF838;
loc_823DF2A4:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823df298
	if (cr6.eq) goto loc_823DF298;
	// mr r31,r20
	r31.u64 = r20.u64;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823df6ec
	if (cr6.eq) goto loc_823DF6EC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823df6ec
	if (cr0.eq) goto loc_823DF6EC;
	// bl 0x824904b0
	sub_824904B0(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r31,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r31.u32);
	// bne 0x823df2e4
	if (!cr0.eq) goto loc_823DF2E4;
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x823df838
	goto loc_823DF838;
loc_823DF2E4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,6900
	ctx.r4.s64 = r11.s64 + 6900;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8248e1a8
	sub_8248E1A8(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823df34c
	if (cr0.eq) goto loc_823DF34C;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823df340
	goto loc_823DF340;
loc_823DF330:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82490df0
	sub_82490DF0(ctx, base);
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
loc_823DF340:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne 0x823df330
	if (!cr0.eq) goto loc_823DF330;
loc_823DF34C:
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r28,r11,-24604
	r28.s64 = r11.s64 + -24604;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r26,r11,-24612
	r26.s64 = r11.s64 + -24612;
	// bne 0x823df36c
	if (!cr0.eq) goto loc_823DF36C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF36C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6776
	ctx.r4.s64 = r11.s64 + 6776;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,30,30
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df38c
	if (!cr0.eq) goto loc_823DF38C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF38C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6772
	ctx.r4.s64 = r11.s64 + 6772;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,11,11
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df3ac
	if (!cr0.eq) goto loc_823DF3AC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF3AC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6756
	ctx.r4.s64 = r11.s64 + 6756;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,14,14
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df3cc
	if (!cr0.eq) goto loc_823DF3CC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF3CC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6740
	ctx.r4.s64 = r11.s64 + 6740;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df3f0
	if (!cr0.eq) goto loc_823DF3F0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF3F0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6732
	ctx.r4.s64 = r11.s64 + 6732;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r11,0,29,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df414
	if (!cr0.eq) goto loc_823DF414;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF414:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6724
	ctx.r4.s64 = r11.s64 + 6724;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r6,16(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// addi r30,r11,14924
	r30.s64 = r11.s64 + 14924;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,6708
	ctx.r4.s64 = r11.s64 + 6708;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,32(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,6696
	ctx.r4.s64 = r11.s64 + 6696;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,36(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,6684
	ctx.r4.s64 = r11.s64 + 6684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,40(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 40);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,6672
	ctx.r4.s64 = r11.s64 + 6672;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,44(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,6660
	ctx.r4.s64 = r11.s64 + 6660;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,52(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,6648
	ctx.r4.s64 = r11.s64 + 6648;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,48(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,6636
	ctx.r4.s64 = r11.s64 + 6636;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,29,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df554
	if (!cr0.eq) goto loc_823DF554;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF554:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6896
	ctx.r4.s64 = r11.s64 + 6896;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,28,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df574
	if (!cr0.eq) goto loc_823DF574;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF574:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6888
	ctx.r4.s64 = r11.s64 + 6888;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,27,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df594
	if (!cr0.eq) goto loc_823DF594;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF594:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6880
	ctx.r4.s64 = r11.s64 + 6880;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,26,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df5b4
	if (!cr0.eq) goto loc_823DF5B4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF5B4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6872
	ctx.r4.s64 = r11.s64 + 6872;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,23,23
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df5d4
	if (!cr0.eq) goto loc_823DF5D4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF5D4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6868
	ctx.r4.s64 = r11.s64 + 6868;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,22,22
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df5f4
	if (!cr0.eq) goto loc_823DF5F4;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF5F4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6860
	ctx.r4.s64 = r11.s64 + 6860;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,21,21
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df614
	if (!cr0.eq) goto loc_823DF614;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF614:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6852
	ctx.r4.s64 = r11.s64 + 6852;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,13,13
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df634
	if (!cr0.eq) goto loc_823DF634;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF634:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6836
	ctx.r4.s64 = r11.s64 + 6836;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,9,9
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df654
	if (!cr0.eq) goto loc_823DF654;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF654:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6828
	ctx.r4.s64 = r11.s64 + 6828;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,6,6
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df674
	if (!cr0.eq) goto loc_823DF674;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF674:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6820
	ctx.r4.s64 = r11.s64 + 6820;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r29,0,7,7
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x1000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df694
	if (!cr0.eq) goto loc_823DF694;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF694:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6812
	ctx.r4.s64 = r11.s64 + 6812;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r11,0,28,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df6b8
	if (!cr0.eq) goto loc_823DF6B8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF6B8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6792
	ctx.r4.s64 = r11.s64 + 6792;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823df6dc
	if (!cr0.eq) goto loc_823DF6DC;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
loc_823DF6DC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,6780
	ctx.r4.s64 = r11.s64 + 6780;
	// bl 0x824904f8
	sub_824904F8(ctx, base);
loc_823DF6EC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x823ded98
	sub_823DED98(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r27,1028(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1028, r27.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823df838
	if (cr0.lt) goto loc_823DF838;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// bl 0x823dece8
	sub_823DECE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// beq 0x823df744
	if (cr0.eq) goto loc_823DF744;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,6600
	ctx.r4.s64 = r11.s64 + 6600;
	// b 0x823df74c
	goto loc_823DF74C;
loc_823DF744:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r4,r11,6584
	ctx.r4.s64 = r11.s64 + 6584;
loc_823DF74C:
	// bl 0x823e3298
	sub_823E3298(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x823f3150
	sub_823F3150(ctx, base);
	// addi r11,r1,100
	r11.s64 = ctx.r1.s64 + 100;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// ori r9,r29,256
	ctx.r9.u64 = r29.u64 | 256;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82409138
	sub_82409138(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bge 0x823df79c
	if (!cr0.lt) goto loc_823DF79C;
	// bl 0x823f50d8
	sub_823F50D8(ctx, base);
	// b 0x823df838
	goto loc_823DF838;
loc_823DF79C:
	// bl 0x823f50d8
	sub_823F50D8(ctx, base);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x821efd88
	sub_821EFD88(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823df7bc
	if (cr0.eq) goto loc_823DF7BC;
	// lis r30,-30602
	r30.s64 = -2005532672;
	// ori r30,r30,2905
	r30.u64 = r30.u64 | 2905;
	// b 0x823df838
	goto loc_823DF838;
loc_823DF7BC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823df810
	if (cr6.eq) goto loc_823DF810;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82490f68
	sub_82490F68(ctx, base);
	// addi r28,r27,12
	r28.s64 = r27.s64 + 12;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823e0280
	sub_823E0280(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823df810
	if (cr0.lt) goto loc_823DF810;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82490f70
	sub_82490F70(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823DF810:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x823df824
	if (cr6.eq) goto loc_823DF824;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r20.u32);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
loc_823DF824:
	// cmplwi cr6,r21,0
	cr6.compare<uint32_t>(r21.u32, 0, xer);
	// beq cr6,0x823df838
	if (cr6.eq) goto loc_823DF838;
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r20.u32);
	// stw r11,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r11.u32);
loc_823DF838:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823df854
	if (cr6.eq) goto loc_823DF854;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823df854
	if (cr0.eq) goto loc_823DF854;
	// bl 0x821df888
	sub_821DF888(ctx, base);
	// stw r20,20(r27)
	PPC_STORE_U32(r27.u32 + 20, r20.u32);
loc_823DF854:
	// cmplwi cr6,r19,0
	cr6.compare<uint32_t>(r19.u32, 0, xer);
	// beq cr6,0x823df868
	if (cr6.eq) goto loc_823DF868;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x823eaf78
	sub_823EAF78(ctx, base);
loc_823DF868:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823df888
	if (cr6.eq) goto loc_823DF888;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r20.u32);
loc_823DF888:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823df8a8
	if (cr6.eq) goto loc_823DF8A8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r20.u32);
loc_823DF8A8:
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x823e21b0
	sub_823E21B0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_823DF8BC"))) PPC_WEAK_FUNC(sub_823DF8BC);
PPC_FUNC_IMPL(__imp__sub_823DF8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DF8C0"))) PPC_WEAK_FUNC(sub_823DF8C0);
PPC_FUNC_IMPL(__imp__sub_823DF8C0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32126
	r30.s64 = -2105409536;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lbz r11,-29523(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + -29523);
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r29,-32126
	r29.s64 = -2105409536;
	// bne 0x823df930
	if (!cr0.eq) goto loc_823DF930;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7136
	ctx.r3.s64 = r11.s64 + 7136;
	// bl 0x826a8b20
	sub_826A8B20(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823df928
	if (cr6.eq) goto loc_823DF928;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7048
	ctx.r3.s64 = r11.s64 + 7048;
	// li r11,1
	r11.s64 = 1;
	// stb r11,-29524(r29)
	PPC_STORE_U8(r29.u32 + -29524, r11.u8);
	// bl 0x823b54a0
	sub_823B54A0(ctx, base);
loc_823DF928:
	// li r11,1
	r11.s64 = 1;
	// stb r11,-29523(r30)
	PPC_STORE_U8(r30.u32 + -29523, r11.u8);
loc_823DF930:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// mr r7,r24
	ctx.r7.u64 = r24.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823df210
	sub_823DF210(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// blt 0x823dfd80
	if (cr0.lt) goto loc_823DFD80;
	// lbz r11,-29524(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + -29524);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823dfd80
	if (cr0.eq) goto loc_823DFD80;
	// rlwinm. r11,r31,0,6,6
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x2000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dfd80
	if (!cr0.eq) goto loc_823DFD80;
	// rlwinm. r11,r31,0,11,11
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dfd80
	if (!cr0.eq) goto loc_823DFD80;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x823dfd80
	if (cr6.eq) goto loc_823DFD80;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823dfd80
	if (cr6.eq) goto loc_823DFD80;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// oris r6,r31,16
	ctx.r6.u64 = r31.u64 | 1048576;
	// oris r26,r31,512
	r26.u64 = r31.u64 | 33554432;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// cmplwi cr6,r11,118
	cr6.compare<uint32_t>(r11.u32, 118, xer);
	// bne cr6,0x823df9c4
	if (!cr6.eq) goto loc_823DF9C4;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,2956
	r11.s64 = r11.s64 + 2956;
	// b 0x823df9cc
	goto loc_823DF9CC;
loc_823DF9C4:
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r11,r11,2940
	r11.s64 = r11.s64 + 2940;
loc_823DF9CC:
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, r11.u32);
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// addi r7,r1,124
	ctx.r7.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823df210
	sub_823DF210(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823dfa0c
	if (!cr0.lt) goto loc_823DFA0C;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_823DF9FC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823dfd80
	if (cr6.eq) goto loc_823DFD80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x823dfd74
	goto loc_823DFD74;
loc_823DFA0C:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// bl 0x823e0280
	sub_823E0280(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823dfa64
	if (!cr0.lt) goto loc_823DFA64;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823dfa40
	if (cr6.eq) goto loc_823DFA40;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
loc_823DFA40:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823dfa5c
	if (cr6.eq) goto loc_823DFA5C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFA5C:
	// lwz r3,120(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// b 0x823df9fc
	goto loc_823DF9FC;
loc_823DFA64:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r29.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823dfab4
	if (cr6.eq) goto loc_823DFAB4;
	// lwz r30,16(r23)
	r30.u64 = PPC_LOAD_U32(r23.u32 + 16);
	// b 0x823dfab8
	goto loc_823DFAB8;
loc_823DFAB4:
	// mr r30,r29
	r30.u64 = r29.u64;
loc_823DFAB8:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r11,-32209
	r11.s64 = -2110849024;
	// lwz r28,120(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r19,r1,128
	r19.s64 = ctx.r1.s64 + 128;
	// addi r27,r11,21608
	r27.s64 = r11.s64 + 21608;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r31,124(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r17,r3
	r17.u64 = ctx.r3.u64;
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r16
	ctx.r4.u64 = r16.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r30.u32);
	// mr r7,r19
	ctx.r7.u64 = r19.u64;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r29.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// bl 0x82495200
	sub_82495200(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823dfbb8
	if (!cr0.lt) goto loc_823DFBB8;
loc_823DFB60:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823dfb80
	if (cr6.eq) goto loc_823DFB80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
loc_823DFB80:
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
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823dfbb0
	if (cr6.eq) goto loc_823DFBB0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFBB0:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x823df9fc
	goto loc_823DF9FC;
loc_823DFBB8:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,118
	cr6.compare<uint32_t>(r11.u32, 118, xer);
	// bne cr6,0x823dfbe4
	if (!cr6.eq) goto loc_823DFBE4;
	// bl 0x8234e1e0
	sub_8234E1E0(ctx, base);
	// b 0x823dfbe8
	goto loc_823DFBE8;
loc_823DFBE4:
	// bl 0x8234e1e0
	sub_8234E1E0(ctx, base);
loc_823DFBE8:
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne cr6,0x823dfd18
	if (!cr6.eq) goto loc_823DFD18;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,6912
	ctx.r3.s64 = r11.s64 + 6912;
	// bl 0x823b54a0
	sub_823B54A0(ctx, base);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r29.u32);
	// bl 0x823e0280
	sub_823E0280(ctx, base);
	// mr. r20,r3
	r20.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r20.s32, 0, xer);
	// blt 0x823dfb60
	if (cr0.lt) goto loc_823DFB60;
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,128(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823dfc70
	if (cr6.eq) goto loc_823DFC70;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFC70:
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// lwz r3,0(r22)
	ctx.r3.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823dfcc4
	if (cr0.eq) goto loc_823DFCC4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFCC4:
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r11.u32);
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823dfce8
	if (cr0.eq) goto loc_823DFCE8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFCE8:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// stw r28,0(r21)
	PPC_STORE_U32(r21.u32 + 0, r28.u32);
	// beq cr6,0x823dfd80
	if (cr6.eq) goto loc_823DFD80;
	// lwz r3,12(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823dfd80
	if (cr0.eq) goto loc_823DFD80;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r29,12(r23)
	PPC_STORE_U32(r23.u32 + 12, r29.u32);
	// b 0x823dfd80
	goto loc_823DFD80;
loc_823DFD18:
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
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823dfd48
	if (cr6.eq) goto loc_823DFD48;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFD48:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823dfd64
	if (cr6.eq) goto loc_823DFD64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFD64:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823dfd80
	if (cr6.eq) goto loc_823DFD80;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
loc_823DFD74:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFD80:
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_823DFD8C"))) PPC_WEAK_FUNC(sub_823DFD8C);
PPC_FUNC_IMPL(__imp__sub_823DFD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DFD90"))) PPC_WEAK_FUNC(sub_823DFD90);
PPC_FUNC_IMPL(__imp__sub_823DFD90) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// bl 0x823df8c0
	sub_823DF8C0(ctx, base);
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2924
	r11.u64 = r11.u64 | 2924;
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x823dfdfc
	if (!cr6.eq) goto loc_823DFDFC;
	// rlwinm. r11,r31,0,29,29
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dfdfc
	if (!cr0.eq) goto loc_823DFDFC;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// ori r6,r31,4
	ctx.r6.u64 = r31.u64 | 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823df8c0
	sub_823DF8C0(ctx, base);
loc_823DFDFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823DFE04"))) PPC_WEAK_FUNC(sub_823DFE04);
PPC_FUNC_IMPL(__imp__sub_823DFE04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DFE08"))) PPC_WEAK_FUNC(sub_823DFE08);
PPC_FUNC_IMPL(__imp__sub_823DFE08) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	r31.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// mr r30,r9
	r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bne cr6,0x823dfe5c
	if (!cr6.eq) goto loc_823DFE5C;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_823DFE4C:
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// bdnz 0x823dfe4c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823DFE4C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_823DFE5C:
	// mr r9,r31
	ctx.r9.u64 = r31.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823dfe88
	if (cr6.eq) goto loc_823DFE88;
	// lbz r11,0(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,118
	cr6.compare<int32_t>(r11.s32, 118, xer);
	// beq cr6,0x823dfe88
	if (cr6.eq) goto loc_823DFE88;
	// cmpwi cr6,r11,112
	cr6.compare<int32_t>(r11.s32, 112, xer);
	// beq cr6,0x823dfe88
	if (cr6.eq) goto loc_823DFE88;
	// li r9,1
	ctx.r9.s64 = 1;
	// oris r6,r6,16
	ctx.r6.u64 = ctx.r6.u64 | 1048576;
loc_823DFE88:
	// clrlwi. r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dff5c
	if (!cr0.eq) goto loc_823DFF5C;
	// rlwinm. r11,r6,0,11,11
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823dff5c
	if (!cr0.eq) goto loc_823DFF5C;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x823dfd90
	sub_823DFD90(ctx, base);
	// mr. r27,r3
	r27.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// blt 0x823dfee8
	if (cr0.lt) goto loc_823DFEE8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823dfecc
	if (cr6.eq) goto loc_823DFECC;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r31
	r29.u64 = r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x823dfed0
	goto loc_823DFED0;
loc_823DFECC:
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823DFED0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x823dfeec
	if (cr6.eq) goto loc_823DFEEC;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x823dfef0
	goto loc_823DFEF0;
loc_823DFEE8:
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_823DFEEC:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823DFEF0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823dff04
	if (cr6.eq) goto loc_823DFF04;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_823DFF04:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823dff1c
	if (cr6.eq) goto loc_823DFF1C;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFF1C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823dff38
	if (cr6.eq) goto loc_823DFF38;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFF38:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823dff54
	if (cr6.eq) goto loc_823DFF54;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823DFF54:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// b 0x823dff70
	goto loc_823DFF70;
loc_823DFF5C:
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// bl 0x823dfd90
	sub_823DFD90(ctx, base);
loc_823DFF70:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823DFF78"))) PPC_WEAK_FUNC(sub_823DFF78);
PPC_FUNC_IMPL(__imp__sub_823DFF78) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r31.u32);
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r28,r10,6620
	r28.s64 = ctx.r10.s64 + 6620;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// lwz r8,228(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// lwz r9,236(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r30.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// bl 0x823dfe08
	sub_823DFE08(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823DFFDC"))) PPC_WEAK_FUNC(sub_823DFFDC);
PPC_FUNC_IMPL(__imp__sub_823DFFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823DFFE0"))) PPC_WEAK_FUNC(sub_823DFFE0);
PPC_FUNC_IMPL(__imp__sub_823DFFE0) {
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
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// bne cr6,0x823e0018
	if (!cr6.eq) goto loc_823E0018;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823E0018:
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

__attribute__((alias("__imp__sub_823E0030"))) PPC_WEAK_FUNC(sub_823E0030);
PPC_FUNC_IMPL(__imp__sub_823E0030) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bne 0x823e0070
	if (!cr0.eq) goto loc_823E0070;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e0078
	goto loc_823E0078;
loc_823E0070:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
loc_823E0078:
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

__attribute__((alias("__imp__sub_823E0090"))) PPC_WEAK_FUNC(sub_823E0090);
PPC_FUNC_IMPL(__imp__sub_823E0090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r10,r10,-32080
	ctx.r10.s64 = ctx.r10.s64 + -32080;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
loc_823E00B4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e00d4
	if (!cr0.eq) goto loc_823E00D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x823e00b4
	if (!cr6.eq) goto loc_823E00B4;
loc_823E00D4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823e0114
	if (cr0.eq) goto loc_823E0114;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r10,r10,-32112
	ctx.r10.s64 = ctx.r10.s64 + -32112;
loc_823E00EC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e010c
	if (!cr0.eq) goto loc_823E010C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x823e00ec
	if (!cr6.eq) goto loc_823E00EC;
loc_823E010C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e0130
	if (!cr0.eq) goto loc_823E0130;
loc_823E0114:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e0138
	goto loc_823E0138;
loc_823E0130:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_823E0138:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E0148"))) PPC_WEAK_FUNC(sub_823E0148);
PPC_FUNC_IMPL(__imp__sub_823E0148) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,7168
	r11.s64 = r11.s64 + 7168;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e0190
	if (cr0.eq) goto loc_823E0190;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E0190:
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

__attribute__((alias("__imp__sub_823E01AC"))) PPC_WEAK_FUNC(sub_823E01AC);
PPC_FUNC_IMPL(__imp__sub_823E01AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E01B0"))) PPC_WEAK_FUNC(sub_823E01B0);
PPC_FUNC_IMPL(__imp__sub_823E01B0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823e01d8
	if (!cr6.eq) goto loc_823E01D8;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823e0274
	goto loc_823E0274;
loc_823E01D8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e0214
	if (cr0.eq) goto loc_823E0214;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7168
	r11.s64 = r11.s64 + 7168;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// b 0x823e0218
	goto loc_823E0218;
loc_823E0214:
	// li r31,0
	r31.s64 = 0;
loc_823E0218:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823e022c
	if (!cr6.eq) goto loc_823E022C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e0274
	goto loc_823E0274;
loc_823E022C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x823e026c
	if (!cr0.lt) goto loc_823E026C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
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
	// b 0x823e0274
	goto loc_823E0274;
loc_823E026C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
loc_823E0274:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823E027C"))) PPC_WEAK_FUNC(sub_823E027C);
PPC_FUNC_IMPL(__imp__sub_823E027C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0280"))) PPC_WEAK_FUNC(sub_823E0280);
PPC_FUNC_IMPL(__imp__sub_823E0280) {
	PPC_FUNC_PROLOGUE();
	// b 0x823e01b0
	sub_823E01B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E0284"))) PPC_WEAK_FUNC(sub_823E0284);
PPC_FUNC_IMPL(__imp__sub_823E0284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0288"))) PPC_WEAK_FUNC(sub_823E0288);
PPC_FUNC_IMPL(__imp__sub_823E0288) {
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
	// lis r10,-32126
	ctx.r10.s64 = -2105409536;
	// lwz r11,-29508(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -29508);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e0360
	if (!cr6.eq) goto loc_823E0360;
	// li r11,1
	r11.s64 = 1;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// stw r11,-29508(r10)
	PPC_STORE_U32(ctx.r10.u32 + -29508, r11.u32);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823e02e8
	if (cr6.eq) goto loc_823E02E8;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823e02e8
	if (cr6.eq) goto loc_823E02E8;
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x823e02ec
	if (!cr6.eq) goto loc_823E02EC;
loc_823E02E8:
	// li r29,1
	r29.s64 = 1;
loc_823E02EC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823e0300
	if (cr6.eq) goto loc_823E0300;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E0300:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823e031c
	if (cr6.eq) goto loc_823E031C;
	// cmplw cr6,r30,r31
	cr6.compare<uint32_t>(r30.u32, r31.u32, xer);
	// beq cr6,0x823e031c
	if (cr6.eq) goto loc_823E031C;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E031C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x823e0360
	if (cr6.eq) goto loc_823E0360;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7560
	ctx.r3.s64 = r11.s64 + 7560;
	// bl 0x823b54a0
	sub_823B54A0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7464
	ctx.r3.s64 = r11.s64 + 7464;
	// bl 0x823b54a0
	sub_823B54A0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7376
	ctx.r3.s64 = r11.s64 + 7376;
	// bl 0x823b54a0
	sub_823B54A0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r3,r11,7324
	ctx.r3.s64 = r11.s64 + 7324;
	// bl 0x823b54a0
	sub_823B54A0(ctx, base);
loc_823E0360:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823E0368"))) PPC_WEAK_FUNC(sub_823E0368);
PPC_FUNC_IMPL(__imp__sub_823E0368) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E0380"))) PPC_WEAK_FUNC(sub_823E0380);
PPC_FUNC_IMPL(__imp__sub_823E0380) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823e03b0
	if (!cr6.eq) goto loc_823E03B0;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823e0460
	goto loc_823E0460;
loc_823E03B0:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823e03c4
	if (cr6.eq) goto loc_823E03C4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823e0460
	goto loc_823E0460;
loc_823E03C4:
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// bl 0x823b5b78
	sub_823B5B78(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823e044c
	if (cr6.eq) goto loc_823E044C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x823b6470
	sub_823B6470(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// beq cr6,0x823e044c
	if (cr6.eq) goto loc_823E044C;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x823e0424
	if (cr6.eq) goto loc_823E0424;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// beq 0x823e044c
	if (cr0.eq) goto loc_823E044C;
	// b 0x823e0428
	goto loc_823E0428;
loc_823E0424:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_823E0428:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x823b5eb0
	sub_823B5EB0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823e045c
	if (!cr0.eq) goto loc_823E045C;
loc_823E044C:
	// bl 0x823b6468
	sub_823B6468(ctx, base);
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// b 0x823e0460
	goto loc_823E0460;
loc_823E045C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E0460:
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

__attribute__((alias("__imp__sub_823E0478"))) PPC_WEAK_FUNC(sub_823E0478);
PPC_FUNC_IMPL(__imp__sub_823E0478) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e04ac
	if (cr0.eq) goto loc_823E04AC;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_823E04AC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823e04c4
	if (cr6.eq) goto loc_823E04C4;
	// bl 0x823b54e8
	sub_823B54E8(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_823E04C4:
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

__attribute__((alias("__imp__sub_823E04DC"))) PPC_WEAK_FUNC(sub_823E04DC);
PPC_FUNC_IMPL(__imp__sub_823E04DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E04E0"))) PPC_WEAK_FUNC(sub_823E04E0);
PPC_FUNC_IMPL(__imp__sub_823E04E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x823e0478
	sub_823E0478(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E04F0"))) PPC_WEAK_FUNC(sub_823E04F0);
PPC_FUNC_IMPL(__imp__sub_823E04F0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E04F4"))) PPC_WEAK_FUNC(sub_823E04F4);
PPC_FUNC_IMPL(__imp__sub_823E04F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E04F8"))) PPC_WEAK_FUNC(sub_823E04F8);
PPC_FUNC_IMPL(__imp__sub_823E04F8) {
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
	// mflr r12
	// bl 0x8239bce8
	// mullw r11,r6,r7
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r24,r11,r4
	r24.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, xer);
	// bge cr6,0x823e05e8
	if (!cr6.lt) goto loc_823E05E8;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r7,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r11,r4
	r26.u64 = r11.u64 + ctx.r4.u64;
loc_823E051C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r26
	cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, xer);
	// bge cr6,0x823e05d4
	if (!cr6.lt) goto loc_823E05D4;
	// subf r10,r4,r26
	ctx.r10.s64 = r26.s64 - ctx.r4.s64;
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r27,r7,-4
	r27.s64 = ctx.r7.s64 + -4;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823E0540:
	// lwzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// rlwinm r28,r9,30,2,25
	r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFC0;
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// rlwinm r29,r6,30,2,25
	r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFC0;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r6,r6,8
	ctx.r6.u64 = ctx.r6.u32 & 0xFFFFFF;
	// clrlwi r9,r9,8
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFFFF;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r9,r9,0,24,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r28,r28,0,18,9
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r29,r29,0,18,9
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// rlwinm r28,r5,30,2,25
	r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r6,r5,8
	ctx.r6.u64 = ctx.r5.u32 & 0xFFFFFF;
	// rlwinm r28,r28,0,18,9
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r5,r29,r28
	ctx.r5.u64 = r29.u64 + r28.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r29,r31,30,2,25
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 30) & 0x3FFFFFC0;
	// clrlwi r6,r31,8
	ctx.r6.u64 = r31.u32 & 0xFFFFFF;
	// rlwinm r29,r29,0,18,9
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFC03FFF;
	// rlwinm r6,r6,0,24,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addis r6,r5,128
	ctx.r6.s64 = ctx.r5.s64 + 8388608;
	// addis r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 131072;
	// addi r6,r6,128
	ctx.r6.s64 = ctx.r6.s64 + 128;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwimi r6,r9,30,24,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0xFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFF00);
	// rlwimi r6,r9,30,8,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r6,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r6.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x823e0540
	if (!cr0.eq) goto loc_823E0540;
loc_823E05D4:
	// add r4,r25,r4
	ctx.r4.u64 = r25.u64 + ctx.r4.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r26,r26,r25
	r26.u64 = r26.u64 + r25.u64;
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, xer);
	// blt cr6,0x823e051c
	if (cr6.lt) goto loc_823E051C;
loc_823E05E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823E05F0"))) PPC_WEAK_FUNC(sub_823E05F0);
PPC_FUNC_IMPL(__imp__sub_823E05F0) {
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
	// mflr r12
	// bl 0x8239bce8
	// mullw r11,r6,r7
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
	// add r24,r11,r4
	r24.u64 = r11.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, xer);
	// bge cr6,0x823e06cc
	if (!cr6.lt) goto loc_823E06CC;
	// rlwinm r11,r5,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r25,r7,1,0,30
	r25.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r26,r11,r4
	r26.u64 = r11.u64 + ctx.r4.u64;
loc_823E0614:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplw cr6,r4,r26
	cr6.compare<uint32_t>(ctx.r4.u32, r26.u32, xer);
	// bge cr6,0x823e06b8
	if (!cr6.lt) goto loc_823E06B8;
	// subf r10,r4,r26
	ctx.r10.s64 = r26.s64 - ctx.r4.s64;
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r27,r7,-4
	r27.s64 = ctx.r7.s64 + -4;
	// rlwinm r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_823E0638:
	// lwzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r6,-4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// clrlwi r28,r9,8
	r28.u64 = ctx.r9.u32 & 0xFFFFFF;
	// lwzx r5,r11,r7
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// clrlwi r29,r6,8
	r29.u64 = ctx.r6.u32 & 0xFFFFFF;
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r28,r28,0,24,15
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r29,r29,0,24,15
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r6,r6,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFF00;
	// add r29,r29,r28
	r29.u64 = r29.u64 + r28.u64;
	// clrlwi r28,r5,8
	r28.u64 = ctx.r5.u32 & 0xFFFFFF;
	// rlwinm r9,r9,0,16,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFF00;
	// rlwinm r28,r28,0,24,15
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// rlwinm r6,r5,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFF00;
	// add r5,r29,r28
	ctx.r5.u64 = r29.u64 + r28.u64;
	// clrlwi r29,r31,8
	r29.u64 = r31.u32 & 0xFFFFFF;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r29,r29,0,24,15
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rlwinm r6,r31,0,16,23
	ctx.r6.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0xFF00;
	// add r5,r5,r29
	ctx.r5.u64 = ctx.r5.u64 + r29.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addis r6,r5,2
	ctx.r6.s64 = ctx.r5.s64 + 131072;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// rlwimi r6,r9,0,14,21
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x3FC00) | (ctx.r6.u64 & 0xFFFFFFFFFFFC03FF);
	// rlwinm r9,r6,30,8,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFFFFFF;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x823e0638
	if (!cr0.eq) goto loc_823E0638;
loc_823E06B8:
	// add r4,r25,r4
	ctx.r4.u64 = r25.u64 + ctx.r4.u64;
	// add r3,r3,r8
	ctx.r3.u64 = ctx.r3.u64 + ctx.r8.u64;
	// add r26,r26,r25
	r26.u64 = r26.u64 + r25.u64;
	// cmplw cr6,r4,r24
	cr6.compare<uint32_t>(ctx.r4.u32, r24.u32, xer);
	// blt cr6,0x823e0614
	if (cr6.lt) goto loc_823E0614;
loc_823E06CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823E06D4"))) PPC_WEAK_FUNC(sub_823E06D4);
PPC_FUNC_IMPL(__imp__sub_823E06D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E06D8"))) PPC_WEAK_FUNC(sub_823E06D8);
PPC_FUNC_IMPL(__imp__sub_823E06D8) {
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
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r10,r10,1272
	ctx.r10.s64 = ctx.r10.s64 + 1272;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r31,-32139
	r31.s64 = -2106261504;
	// stw r10,-10792(r11)
	PPC_STORE_U32(r11.u32 + -10792, ctx.r10.u32);
	// addi r10,r9,1520
	ctx.r10.s64 = ctx.r9.s64 + 1520;
	// lwz r11,-10792(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10792);
	// stw r10,-10788(r31)
	PPC_STORE_U32(r31.u32 + -10788, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_823E0728"))) PPC_WEAK_FUNC(sub_823E0728);
PPC_FUNC_IMPL(__imp__sub_823E0728) {
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
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r10,r10,1520
	ctx.r10.s64 = ctx.r10.s64 + 1520;
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// lis r31,-32139
	r31.s64 = -2106261504;
	// stw r10,-10788(r11)
	PPC_STORE_U32(r11.u32 + -10788, ctx.r10.u32);
	// addi r10,r9,1272
	ctx.r10.s64 = ctx.r9.s64 + 1272;
	// lwz r11,-10788(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10788);
	// stw r10,-10792(r31)
	PPC_STORE_U32(r31.u32 + -10792, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_823E0778"))) PPC_WEAK_FUNC(sub_823E0778);
PPC_FUNC_IMPL(__imp__sub_823E0778) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823e0788
	if (cr6.eq) goto loc_823E0788;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_823E0788:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823e0794
	if (cr6.eq) goto loc_823E0794;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
loc_823E0794:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823e07a8
	if (!cr6.eq) goto loc_823E07A8;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_823E07A8:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,4138
	r11.s64 = 271187968;
	// ori r11,r11,4352
	r11.u64 = r11.u64 | 4352;
	// rlwinm r10,r8,0,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF00;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823e07c8
	if (!cr6.eq) goto loc_823E07C8;
loc_823E07C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_823E07C8:
	// rlwinm r11,r8,0,0,15
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF0000;
	// lis r10,18008
	ctx.r10.s64 = 1180172288;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823e0820
	if (cr6.eq) goto loc_823E0820;
	// lis r10,21592
	ctx.r10.s64 = 1415053312;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823e0820
	if (cr6.eq) goto loc_823E0820;
	// lis r10,32766
	ctx.r10.s64 = 2147352576;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823e0820
	if (cr6.eq) goto loc_823E0820;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823e0820
	if (cr6.eq) goto loc_823E0820;
	// lis r10,-2
	ctx.r10.s64 = -131072;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823e0820
	if (cr6.eq) goto loc_823E0820;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823e0820
	if (cr6.eq) goto loc_823E0820;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// blr 
	return;
loc_823E0820:
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_823E0824:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823e0888
	if (!cr0.eq) goto loc_823E0888;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,65535
	cr6.compare<uint32_t>(ctx.r9.u32, 65535, xer);
	// beq cr6,0x823e07c0
	if (cr6.eq) goto loc_823E07C0;
	// cmplwi cr6,r9,65534
	cr6.compare<uint32_t>(ctx.r9.u32, 65534, xer);
	// bne cr6,0x823e0868
	if (!cr6.eq) goto loc_823E0868;
	// rlwinm r10,r10,16,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x7FFF;
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// ble cr6,0x823e085c
	if (!cr6.gt) goto loc_823E085C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r4,r9
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, xer);
	// beq cr6,0x823e0890
	if (cr6.eq) goto loc_823E0890;
loc_823E085C:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_823E0860:
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x823e0888
	goto loc_823E0888;
loc_823E0868:
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// cmplwi cr6,r7,512
	cr6.compare<uint32_t>(ctx.r7.u32, 512, xer);
	// blt cr6,0x823e087c
	if (cr6.lt) goto loc_823E087C;
	// rlwinm r10,r10,10,26,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x3C;
	// b 0x823e0860
	goto loc_823E0860;
loc_823E087C:
	// cmplwi cr6,r9,81
	cr6.compare<uint32_t>(ctx.r9.u32, 81, xer);
	// bne cr6,0x823e0888
	if (!cr6.eq) goto loc_823E0888;
	// addi r11,r11,20
	r11.s64 = r11.s64 + 20;
loc_823E0888:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x823e0824
	goto loc_823E0824;
loc_823E0890:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823e08a0
	if (cr6.eq) goto loc_823E08A0;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_823E08A0:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823e08b4
	if (cr6.eq) goto loc_823E08B4;
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
loc_823E08B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E08BC"))) PPC_WEAK_FUNC(sub_823E08BC);
PPC_FUNC_IMPL(__imp__sub_823E08BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E08C0"))) PPC_WEAK_FUNC(sub_823E08C0);
PPC_FUNC_IMPL(__imp__sub_823E08C0) {
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
	// bl 0x823eb050
	sub_823EB050(ctx, base);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x823e0368
	sub_823E0368(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
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

__attribute__((alias("__imp__sub_823E0918"))) PPC_WEAK_FUNC(sub_823E0918);
PPC_FUNC_IMPL(__imp__sub_823E0918) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r26,0
	r26.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E093C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823e093c
	if (!cr6.eq) goto loc_823E093C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rotlwi r28,r11,0
	r28.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r30,r28,1
	r30.s64 = r28.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// beq 0x823e0994
	if (cr0.eq) goto loc_823E0994;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// bne 0x823e09a0
	if (!cr0.eq) goto loc_823E09A0;
loc_823E0994:
	// lis r26,-32761
	r26.s64 = -2147024896;
	// ori r26,r26,14
	r26.u64 = r26.u64 | 14;
	// b 0x823e09ec
	goto loc_823E09EC;
loc_823E09A0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x8239d550
	sub_8239D550(ctx, base);
	// li r4,92
	ctx.r4.s64 = 92;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x8239e1c0
	sub_8239E1C0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x823e09c8
	if (cr0.eq) goto loc_823E09C8;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_823E09C8:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stbx r26,r11,r28
	PPC_STORE_U8(r11.u32 + r28.u32, r26.u8);
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823e09ec
	if (cr6.eq) goto loc_823E09EC;
	// stb r26,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r26.u8);
loc_823E09EC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823E09F8"))) PPC_WEAK_FUNC(sub_823E09F8);
PPC_FUNC_IMPL(__imp__sub_823E09F8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// stw r9,72(r31)
	PPC_STORE_U32(r31.u32 + 72, ctx.r9.u32);
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x823e0a54
	if (cr6.eq) goto loc_823E0A54;
	// lis r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,260
	ctx.r8.s64 = 260;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r3,r3,65001
	ctx.r3.u64 = ctx.r3.u64 | 65001;
	// bl 0x823b9a30
	sub_823B9A30(ctx, base);
	// addi r29,r1,352
	r29.s64 = ctx.r1.s64 + 352;
loc_823E0A54:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e0b8c
	if (cr6.eq) goto loc_823E0B8C;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E0A68:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823e0a68
	if (!cr6.eq) goto loc_823E0A68;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,76(r31)
	PPC_STORE_U32(r31.u32 + 76, ctx.r3.u32);
	// bne 0x823e0ab0
	if (!cr0.eq) goto loc_823E0AB0;
loc_823E0AA4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e0bfc
	goto loc_823E0BFC;
loc_823E0AB0:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r26,0
	r26.s64 = 0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// addi r27,r31,88
	r27.s64 = r31.s64 + 88;
	// addi r28,r31,84
	r28.s64 = r31.s64 + 84;
	// lwz r5,76(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// lwz r6,788(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 788);
	// li r10,260
	ctx.r10.s64 = 260;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, r26.u8);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x823e0b24
	if (!cr0.lt) goto loc_823E0B24;
loc_823E0B04:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r11,12104
	ctx.r6.s64 = r11.s64 + 12104;
	// li r5,1507
	ctx.r5.s64 = 1507;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// b 0x823e0bf8
	goto loc_823E0BF8;
loc_823E0B24:
	// lbz r11,80(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e0bd4
	if (cr0.eq) goto loc_823E0BD4;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// stb r26,339(r1)
	PPC_STORE_U8(ctx.r1.u32 + 339, r26.u8);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E0B3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823e0b3c
	if (!cr6.eq) goto loc_823E0B3C;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823e0aa4
	if (cr0.eq) goto loc_823E0AA4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// b 0x823e0bd4
	goto loc_823E0BD4;
loc_823E0B8C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e0918
	sub_823E0918(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e0bf8
	if (cr0.lt) goto loc_823E0BF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x823e0380
	sub_823E0380(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e0b04
	if (cr0.lt) goto loc_823E0B04;
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// addi r28,r31,84
	r28.s64 = r31.s64 + 84;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r27,r31,88
	r27.s64 = r31.s64 + 88;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(r27.u32 + 0, ctx.r10.u32);
loc_823E0BD4:
	// mr r9,r22
	ctx.r9.u64 = r22.u64;
	// lwz r6,76(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823eb078
	sub_823EB078(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823E0BF8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_823E0BFC:
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823E0C04"))) PPC_WEAK_FUNC(sub_823E0C04);
PPC_FUNC_IMPL(__imp__sub_823E0C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0C08"))) PPC_WEAK_FUNC(sub_823E0C08);
PPC_FUNC_IMPL(__imp__sub_823E0C08) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r8
	r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823e0c44
	if (cr6.eq) goto loc_823E0C44;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e0c44
	if (!cr6.eq) goto loc_823E0C44;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823e0c84
	goto loc_823E0C84;
loc_823E0C44:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r6,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e0918
	sub_823E0918(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e0c84
	if (cr0.lt) goto loc_823E0C84;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r8,r29
	ctx.r8.u64 = r29.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823eb078
	sub_823EB078(ctx, base);
loc_823E0C84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823E0C8C"))) PPC_WEAK_FUNC(sub_823E0C8C);
PPC_FUNC_IMPL(__imp__sub_823E0C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0C90"))) PPC_WEAK_FUNC(sub_823E0C90);
PPC_FUNC_IMPL(__imp__sub_823E0C90) {
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
	// bl 0x8240d238
	sub_8240D238(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e0cc8
	if (cr0.lt) goto loc_823E0CC8;
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,684(r31)
	PPC_STORE_U32(r31.u32 + 684, r11.u32);
	// bl 0x82409330
	sub_82409330(ctx, base);
	// stw r3,688(r31)
	PPC_STORE_U32(r31.u32 + 688, ctx.r3.u32);
loc_823E0CC8:
	// stw r30,680(r31)
	PPC_STORE_U32(r31.u32 + 680, r30.u32);
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

__attribute__((alias("__imp__sub_823E0CE4"))) PPC_WEAK_FUNC(sub_823E0CE4);
PPC_FUNC_IMPL(__imp__sub_823E0CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0CE8"))) PPC_WEAK_FUNC(sub_823E0CE8);
PPC_FUNC_IMPL(__imp__sub_823E0CE8) {
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
	// lwz r11,684(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 684);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e0d1c
	if (cr6.eq) goto loc_823E0D1C;
	// lwz r3,688(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 688);
	// bl 0x82409330
	sub_82409330(ctx, base);
	// bl 0x8240d380
	sub_8240D380(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,684(r31)
	PPC_STORE_U32(r31.u32 + 684, r11.u32);
loc_823E0D1C:
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

__attribute__((alias("__imp__sub_823E0D30"))) PPC_WEAK_FUNC(sub_823E0D30);
PPC_FUNC_IMPL(__imp__sub_823E0D30) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823e0d44
	if (cr6.eq) goto loc_823E0D44;
	// lwz r11,628(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_823E0D44:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823e0d58
	if (cr6.eq) goto loc_823E0D58;
	// lwz r11,628(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_823E0D58:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E0D60"))) PPC_WEAK_FUNC(sub_823E0D60);
PPC_FUNC_IMPL(__imp__sub_823E0D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,624(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 624);
	// b 0x823e0d6c
	goto loc_823E0D6C;
loc_823E0D68:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823E0D6C:
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823e0d68
	if (!cr0.eq) goto loc_823E0D68;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823e0d88
	if (cr6.eq) goto loc_823E0D88;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
loc_823E0D88:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823e0dac
	if (cr6.eq) goto loc_823E0DAC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// bge cr6,0x823e0da8
	if (!cr6.lt) goto loc_823E0DA8;
	// li r11,0
	r11.s64 = 0;
loc_823E0DA8:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_823E0DAC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E0DB4"))) PPC_WEAK_FUNC(sub_823E0DB4);
PPC_FUNC_IMPL(__imp__sub_823E0DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E0DB8"))) PPC_WEAK_FUNC(sub_823E0DB8);
PPC_FUNC_IMPL(__imp__sub_823E0DB8) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,628(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 628);
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823ec250
	sub_823EC250(ctx, base);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e0f04
	if (cr6.eq) goto loc_823E0F04;
	// lwz r5,628(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 628);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// b 0x823e0e1c
	goto loc_823E0E1C;
loc_823E0DF8:
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// beq cr6,0x823e0e10
	if (cr6.eq) goto loc_823E0E10;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x823e0e24
	if (!cr6.eq) goto loc_823E0E24;
loc_823E0E10:
	// lwz r11,628(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 628);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_823E0E1C:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x823e0df8
	if (cr6.lt) goto loc_823E0DF8;
loc_823E0E24:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r31,2
	ctx.r10.s64 = r31.s64 + 2;
	// addi r11,r31,1
	r11.s64 = r31.s64 + 1;
loc_823E0E30:
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x823e0ed0
	if (!cr6.lt) goto loc_823E0ED0;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// extsb r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	// cmpwi cr6,r6,92
	cr6.compare<int32_t>(ctx.r6.s32, 92, xer);
	// bne cr6,0x823e0ea8
	if (!cr6.eq) goto loc_823E0EA8;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x823e0e70
	if (!cr6.lt) goto loc_823E0E70;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r4,10
	cr6.compare<uint32_t>(ctx.r4.u32, 10, xer);
	// bne cr6,0x823e0e70
	if (!cr6.eq) goto loc_823E0E70;
	// addi r31,r31,2
	r31.s64 = r31.s64 + 2;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// b 0x823e0ec8
	goto loc_823E0EC8;
loc_823E0E70:
	// cmpwi cr6,r6,92
	cr6.compare<int32_t>(ctx.r6.s32, 92, xer);
	// bne cr6,0x823e0ea8
	if (!cr6.eq) goto loc_823E0EA8;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x823e0ea8
	if (!cr6.lt) goto loc_823E0EA8;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r9,13
	cr6.compare<uint32_t>(ctx.r9.u32, 13, xer);
	// bne cr6,0x823e0ea8
	if (!cr6.eq) goto loc_823E0EA8;
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,10
	cr6.compare<uint32_t>(ctx.r9.u32, 10, xer);
	// bne cr6,0x823e0ea8
	if (!cr6.eq) goto loc_823E0EA8;
	// addi r31,r31,3
	r31.s64 = r31.s64 + 3;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// b 0x823e0ec8
	goto loc_823E0EC8;
loc_823E0EA8:
	// cmpwi cr6,r6,13
	cr6.compare<int32_t>(ctx.r6.s32, 13, xer);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq cr6,0x823e0ec8
	if (cr6.eq) goto loc_823E0EC8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r7,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_823E0EC8:
	// cmplwi cr6,r8,255
	cr6.compare<uint32_t>(ctx.r8.u32, 255, xer);
	// blt cr6,0x823e0e30
	if (cr6.lt) goto loc_823E0E30;
loc_823E0ED0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,12140
	ctx.r6.s64 = r11.s64 + 12140;
	// li r11,0
	r11.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r30,640
	ctx.r4.s64 = r30.s64 + 640;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// stbx r11,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, r11.u8);
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// stw r11,76(r30)
	PPC_STORE_U32(r30.u32 + 76, r11.u32);
loc_823E0F04:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_823E0F20"))) PPC_WEAK_FUNC(sub_823E0F20);
PPC_FUNC_IMPL(__imp__sub_823E0F20) {
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
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823e0f70
	if (!cr0.eq) goto loc_823E0F70;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1508
	ctx.r5.s64 = 1508;
	// addi r6,r11,12188
	ctx.r6.s64 = r11.s64 + 12188;
loc_823E0F50:
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// b 0x823e0fcc
	goto loc_823E0FCC;
loc_823E0F70:
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e0f8c
	if (cr6.eq) goto loc_823E0F8C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1513
	ctx.r5.s64 = 1513;
	// addi r6,r11,12152
	ctx.r6.s64 = r11.s64 + 12152;
	// b 0x823e0f50
	goto loc_823E0F50;
loc_823E0F8C:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x823e0fb0
	if (cr6.eq) goto loc_823E0FB0;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e0fb0
	if (!cr6.eq) goto loc_823E0FB0;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x823e0fb4
	if (!cr6.eq) goto loc_823E0FB4;
loc_823E0FB0:
	// li r11,0
	r11.s64 = 0;
loc_823E0FB4:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// beq cr6,0x823e0fc8
	if (cr6.eq) goto loc_823E0FC8;
	// li r11,1
	r11.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
loc_823E0FC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E0FCC:
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

__attribute__((alias("__imp__sub_823E0FE0"))) PPC_WEAK_FUNC(sub_823E0FE0);
PPC_FUNC_IMPL(__imp__sub_823E0FE0) {
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
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823e1030
	if (!cr0.eq) goto loc_823E1030;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1509
	ctx.r5.s64 = 1509;
	// addi r6,r11,12244
	ctx.r6.s64 = r11.s64 + 12244;
loc_823E1010:
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// b 0x823e1080
	goto loc_823E1080;
loc_823E1030:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823e104c
	if (cr6.eq) goto loc_823E104C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1514
	ctx.r5.s64 = 1514;
	// addi r6,r11,12208
	ctx.r6.s64 = r11.s64 + 12208;
	// b 0x823e1010
	goto loc_823E1010;
loc_823E104C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823e106c
	if (!cr6.eq) goto loc_823E106C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne cr6,0x823e1070
	if (!cr6.eq) goto loc_823E1070;
loc_823E106C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823E1070:
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
loc_823E1080:
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

__attribute__((alias("__imp__sub_823E1094"))) PPC_WEAK_FUNC(sub_823E1094);
PPC_FUNC_IMPL(__imp__sub_823E1094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1098"))) PPC_WEAK_FUNC(sub_823E1098);
PPC_FUNC_IMPL(__imp__sub_823E1098) {
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
	// addi r30,r28,640
	r30.s64 = r28.s64 + 640;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,672(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 672);
	// lwz r3,628(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e1280
	if (cr0.lt) goto loc_823E1280;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r27,0
	r27.s64 = 0;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x823e125c
	if (!cr6.eq) goto loc_823E125C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r28,648
	r31.s64 = r28.s64 + 648;
	// addi r10,r11,2828
	ctx.r10.s64 = r11.s64 + 2828;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823E10E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1108
	if (cr0.eq) goto loc_823E1108;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e10e4
	if (cr6.eq) goto loc_823E10E4;
loc_823E1108:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e125c
	if (!cr0.eq) goto loc_823E125C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,672(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 672);
	// lwz r3,628(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e1280
	if (cr0.lt) goto loc_823E1280;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x823e1154
	if (!cr6.eq) goto loc_823E1154;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r29,0(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,672(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 672);
	// lwz r3,628(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e1280
	if (cr0.lt) goto loc_823E1280;
	// b 0x823e1158
	goto loc_823E1158;
loc_823E1154:
	// mr r29,r27
	r29.u64 = r27.u64;
loc_823E1158:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x823e125c
	if (!cr6.eq) goto loc_823E125C;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,16928
	ctx.r10.s64 = r11.s64 + 16928;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823E1170:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1194
	if (cr0.eq) goto loc_823E1194;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1170
	if (cr6.eq) goto loc_823E1170;
loc_823E1194:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e125c
	if (!cr0.eq) goto loc_823E125C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,672(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 672);
	// lwz r3,628(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e1280
	if (cr0.lt) goto loc_823E1280;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r7,12
	cr6.compare<int32_t>(ctx.r7.s32, 12, xer);
	// beq cr6,0x823e11c8
	if (cr6.eq) goto loc_823E11C8;
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// bne cr6,0x823e125c
	if (!cr6.eq) goto loc_823E125C;
loc_823E11C8:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823e11d8
	if (!cr6.eq) goto loc_823E11D8;
	// stw r27,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r27.u32);
	// b 0x823e127c
	goto loc_823E127C;
loc_823E11D8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,12280
	ctx.r10.s64 = r11.s64 + 12280;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823E11E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1208
	if (cr0.eq) goto loc_823E1208;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e11e4
	if (cr6.eq) goto loc_823E11E4;
loc_823E1208:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e1218
	if (!cr0.eq) goto loc_823E1218;
	// li r11,1024
	r11.s64 = 1024;
	// b 0x823e1254
	goto loc_823E1254;
loc_823E1218:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,12264
	ctx.r10.s64 = r11.s64 + 12264;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823E1224:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1248
	if (cr0.eq) goto loc_823E1248;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1224
	if (cr6.eq) goto loc_823E1224;
loc_823E1248:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e125c
	if (!cr0.eq) goto loc_823E125C;
	// li r11,2048
	r11.s64 = 2048;
loc_823E1254:
	// stw r11,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r11.u32);
	// b 0x823e127c
	goto loc_823E127C;
loc_823E125C:
	// cmpwi cr6,r7,12
	cr6.compare<int32_t>(ctx.r7.s32, 12, xer);
	// beq cr6,0x823e1278
	if (cr6.eq) goto loc_823E1278;
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// beq cr6,0x823e1278
	if (cr6.eq) goto loc_823E1278;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,628(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 628);
	// bl 0x823ec250
	sub_823EC250(ctx, base);
loc_823E1278:
	// stw r27,668(r28)
	PPC_STORE_U32(r28.u32 + 668, r27.u32);
loc_823E127C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_823E1280:
	// li r11,1
	r11.s64 = 1;
	// stw r11,72(r28)
	PPC_STORE_U32(r28.u32 + 72, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823E1290"))) PPC_WEAK_FUNC(sub_823E1290);
PPC_FUNC_IMPL(__imp__sub_823E1290) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// addi r24,r26,640
	r24.s64 = r26.s64 + 640;
	// mr r14,r25
	r14.u64 = r25.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 672);
	// lwz r3,628(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 628);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r25.u32);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x823e1764
	if (cr0.lt) goto loc_823E1764;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e173c
	if (!cr6.eq) goto loc_823E173C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r27,r26,648
	r27.s64 = r26.s64 + 648;
	// addi r10,r11,2828
	ctx.r10.s64 = r11.s64 + 2828;
	// mr r11,r27
	r11.u64 = r27.u64;
loc_823E12E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1308
	if (cr0.eq) goto loc_823E1308;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e12e4
	if (cr6.eq) goto loc_823E12E4;
loc_823E1308:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e173c
	if (!cr0.eq) goto loc_823E173C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 672);
	// lwz r3,628(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x823e1764
	if (cr0.lt) goto loc_823E1764;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r15,-1
	r15.s64 = -1;
	// addi r22,r11,12300
	r22.s64 = r11.s64 + 12300;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r20,r11,-18944
	r20.s64 = r11.s64 + -18944;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r19,r11,19528
	r19.s64 = r11.s64 + 19528;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r18,r11,6716
	r18.s64 = r11.s64 + 6716;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r17,r11,12292
	r17.s64 = r11.s64 + 12292;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r21,r11,10116
	r21.s64 = r11.s64 + 10116;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r23,r11,16928
	r23.s64 = r11.s64 + 16928;
	// lis r11,16383
	r11.s64 = 1073676288;
	// ori r16,r11,65535
	r16.u64 = r11.u64 | 65535;
loc_823E136C:
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x823e13ac
	if (!cr6.eq) goto loc_823E13AC;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_823E1380:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e13a4
	if (cr0.eq) goto loc_823E13A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1380
	if (cr6.eq) goto loc_823E1380;
loc_823E13A4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823e1790
	if (cr0.eq) goto loc_823E1790;
loc_823E13AC:
	// cmpwi cr6,r7,9
	cr6.compare<int32_t>(ctx.r7.s32, 9, xer);
	// bne cr6,0x823e14a8
	if (!cr6.eq) goto loc_823E14A8;
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823E13C0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e13e4
	if (cr0.eq) goto loc_823E13E4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e13c0
	if (cr6.eq) goto loc_823E13C0;
loc_823E13E4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e13f4
	if (!cr0.eq) goto loc_823E13F4;
	// li r28,16
	r28.s64 = 16;
	// b 0x823e14d8
	goto loc_823E14D8;
loc_823E13F4:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
loc_823E13FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1420
	if (cr0.eq) goto loc_823E1420;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e13fc
	if (cr6.eq) goto loc_823E13FC;
loc_823E1420:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e1430
	if (!cr0.eq) goto loc_823E1430;
	// li r28,15
	r28.s64 = 15;
	// b 0x823e14d8
	goto loc_823E14D8;
loc_823E1430:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
loc_823E1438:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e145c
	if (cr0.eq) goto loc_823E145C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1438
	if (cr6.eq) goto loc_823E1438;
loc_823E145C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e146c
	if (!cr0.eq) goto loc_823E146C;
	// li r28,0
	r28.s64 = 0;
	// b 0x823e14d8
	goto loc_823E14D8;
loc_823E146C:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r10,r19
	ctx.r10.u64 = r19.u64;
loc_823E1474:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1498
	if (cr0.eq) goto loc_823E1498;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1474
	if (cr6.eq) goto loc_823E1474;
loc_823E1498:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e173c
	if (!cr0.eq) goto loc_823E173C;
	// li r28,255
	r28.s64 = 255;
	// b 0x823e14d8
	goto loc_823E14D8;
loc_823E14A8:
	// cmpwi cr6,r7,2
	cr6.compare<int32_t>(ctx.r7.s32, 2, xer);
	// beq cr6,0x823e14c0
	if (cr6.eq) goto loc_823E14C0;
	// cmpwi cr6,r7,3
	cr6.compare<int32_t>(ctx.r7.s32, 3, xer);
	// beq cr6,0x823e14c0
	if (cr6.eq) goto loc_823E14C0;
	// cmpwi cr6,r7,4
	cr6.compare<int32_t>(ctx.r7.s32, 4, xer);
	// bne cr6,0x823e173c
	if (!cr6.eq) goto loc_823E173C;
loc_823E14C0:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x823e173c
	if (cr6.lt) goto loc_823E173C;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bgt cr6,0x823e173c
	if (cr6.gt) goto loc_823E173C;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_823E14D8:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 672);
	// lwz r3,628(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x823e1764
	if (cr0.lt) goto loc_823E1764;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e173c
	if (!cr6.eq) goto loc_823E173C;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_823E1504:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1528
	if (cr0.eq) goto loc_823E1528;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1504
	if (cr6.eq) goto loc_823E1504;
loc_823E1528:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e173c
	if (!cr0.eq) goto loc_823E173C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 672);
	// lwz r3,628(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x823e1764
	if (cr0.lt) goto loc_823E1764;
loc_823E1548:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823e1564
	if (cr6.eq) goto loc_823E1564;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x823e1564
	if (cr6.eq) goto loc_823E1564;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x823e173c
	if (!cr6.eq) goto loc_823E173C;
loc_823E1564:
	// not r11,r25
	r11.u64 = ~r25.u64;
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// and r11,r11,r25
	r11.u64 = r11.u64 & r25.u64;
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x823e1610
	if (!cr6.eq) goto loc_823E1610;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// rlwinm r11,r25,1,0,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823e158c
	if (!cr6.eq) goto loc_823E158C;
	// li r11,1
	r11.s64 = 1;
loc_823E158C:
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(r11.u32, r16.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x823e159c
	if (!cr6.gt) goto loc_823E159C;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_823E159C:
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823e1808
	if (cr0.eq) goto loc_823E1808;
	// rlwinm r30,r25,2,0,29
	r30.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// rlwinm r11,r25,1,0,30
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 1) & 0xFFFFFFFE;
	// bne cr6,0x823e15d8
	if (!cr6.eq) goto loc_823E15D8;
	// li r11,1
	r11.s64 = 1;
loc_823E15D8:
	// cmplw cr6,r11,r16
	cr6.compare<uint32_t>(r11.u32, r16.u32, xer);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// ble cr6,0x823e15e8
	if (!cr6.gt) goto loc_823E15E8;
	// mr r3,r15
	ctx.r3.u64 = r15.u64;
loc_823E15E8:
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823e1808
	if (cr0.eq) goto loc_823E1808;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r14
	ctx.r4.u64 = r14.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r14,r31
	r14.u64 = r31.u64;
loc_823E1610:
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// stwx r29,r11,r14
	PPC_STORE_U32(r11.u32 + r14.u32, r29.u32);
	// stwx r28,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r28.u32);
	// lwz r4,672(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 672);
	// lwz r3,628(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x823e1764
	if (cr0.lt) goto loc_823E1764;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e1548
	if (!cr6.eq) goto loc_823E1548;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_823E1650:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1674
	if (cr0.eq) goto loc_823E1674;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1650
	if (cr6.eq) goto loc_823E1650;
loc_823E1674:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823e16b0
	if (cr0.eq) goto loc_823E16B0;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_823E1684:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e16a8
	if (cr0.eq) goto loc_823E16A8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1684
	if (cr6.eq) goto loc_823E1684;
loc_823E16A8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e1548
	if (!cr0.eq) goto loc_823E1548;
loc_823E16B0:
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
loc_823E16B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e16dc
	if (cr0.eq) goto loc_823E16DC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e16b8
	if (cr6.eq) goto loc_823E16B8;
loc_823E16DC:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e136c
	if (!cr0.eq) goto loc_823E136C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 672);
	// lwz r3,628(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x823e1764
	if (cr0.lt) goto loc_823E1764;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e136c
	if (!cr6.eq) goto loc_823E136C;
	// mr r11,r27
	r11.u64 = r27.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
loc_823E1710:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1734
	if (cr0.eq) goto loc_823E1734;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1710
	if (cr6.eq) goto loc_823E1710;
loc_823E1734:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e136c
	if (!cr0.eq) goto loc_823E136C;
loc_823E173C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e175c
	if (cr6.eq) goto loc_823E175C;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823e175c
	if (cr6.eq) goto loc_823E175C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,628(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 628);
	// bl 0x823ec250
	sub_823EC250(ctx, base);
loc_823E175C:
	// li r31,0
	r31.s64 = 0;
	// stw r31,668(r26)
	PPC_STORE_U32(r26.u32 + 668, r31.u32);
loc_823E1764:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// mr r3,r14
	ctx.r3.u64 = r14.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,72(r26)
	PPC_STORE_U32(r26.u32 + 72, r11.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd10
	return;
loc_823E1790:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r4,672(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 672);
	// lwz r3,628(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x823e1764
	if (cr0.lt) goto loc_823E1764;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e17bc
	if (cr6.eq) goto loc_823E17BC;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x823e173c
	if (!cr6.eq) goto loc_823E173C;
loc_823E17BC:
	// li r27,0
	r27.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823e1800
	if (cr6.eq) goto loc_823E1800;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r26,24
	r29.s64 = r26.s64 + 24;
	// mr r30,r14
	r30.u64 = r14.u64;
	// subf r28,r14,r11
	r28.s64 = r11.s64 - r14.s64;
loc_823E17D8:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r5,r28,r30
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + r30.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x823ebb70
	sub_823EBB70(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// blt 0x823e1764
	if (cr0.lt) goto loc_823E1764;
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r27,r25
	cr6.compare<uint32_t>(r27.u32, r25.u32, xer);
	// blt cr6,0x823e17d8
	if (cr6.lt) goto loc_823E17D8;
loc_823E1800:
	// li r31,0
	r31.s64 = 0;
	// b 0x823e1764
	goto loc_823E1764;
loc_823E1808:
	// lis r31,-32761
	r31.s64 = -2147024896;
	// ori r31,r31,14
	r31.u64 = r31.u64 | 14;
	// b 0x823e1764
	goto loc_823E1764;
}

__attribute__((alias("__imp__sub_823E1814"))) PPC_WEAK_FUNC(sub_823E1814);
PPC_FUNC_IMPL(__imp__sub_823E1814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1818"))) PPC_WEAK_FUNC(sub_823E1818);
PPC_FUNC_IMPL(__imp__sub_823E1818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r10,1586
	ctx.r10.s64 = 103940096;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// ori r10,r10,55311
	ctx.r10.u64 = ctx.r10.u64 | 55311;
	// beq cr6,0x823e1860
	if (cr6.eq) goto loc_823E1860;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e1860
	if (cr0.eq) goto loc_823E1860;
loc_823E1834:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mulli r10,r10,19
	ctx.r10.s64 = ctx.r10.s64 * 19;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// lbz r11,0(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	r11.s64 = r11.s8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823e1834
	if (!cr0.eq) goto loc_823E1834;
	// li r11,127
	r11.s64 = 127;
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// mulli r11,r11,127
	r11.s64 = r11.s64 * 127;
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - r11.s64;
	// blr 
	return;
loc_823E1860:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1868"))) PPC_WEAK_FUNC(sub_823E1868);
PPC_FUNC_IMPL(__imp__sub_823E1868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	// mflr r12
	// bl 0x8239bcfc
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_823E1878:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e189c
	if (cr0.eq) goto loc_823E189C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1878
	if (cr6.eq) goto loc_823E1878;
loc_823E189C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e19a0
	if (!cr0.eq) goto loc_823E19A0;
	// lwz r30,4(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,4(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr. r11,r30
	r11.u64 = r30.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e18d8
	if (cr0.eq) goto loc_823E18D8;
loc_823E18B8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823e18d0
	if (cr6.eq) goto loc_823E18D0;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823e18b8
	if (!cr0.eq) goto loc_823E18B8;
loc_823E18D0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e19a0
	if (!cr6.eq) goto loc_823E19A0;
loc_823E18D8:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823e19a0
	if (!cr6.eq) goto loc_823E19A0;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r31,8(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x823e1afc
	goto loc_823E1AFC;
loc_823E18EC:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823e198c
	if (cr6.eq) goto loc_823E198C;
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x823e198c
	if (!cr6.eq) goto loc_823E198C;
	// cmplwi cr6,r11,11
	cr6.compare<uint32_t>(r11.u32, 11, xer);
	// bgt cr6,0x823e1ae8
	if (cr6.gt) goto loc_823E1AE8;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,11944
	r12.s64 = r12.s64 + 11944;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32194
	r12.s64 = -2109865984;
	// addi r12,r12,6452
	r12.s64 = r12.s64 + 6452;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823E1934;
	case 1:
		goto loc_823E194C;
	case 2:
		goto loc_823E1934;
	case 3:
		goto loc_823E1934;
	case 4:
		goto loc_823E1934;
	case 5:
		goto loc_823E19A8;
	case 6:
		goto loc_823E19A8;
	case 7:
		goto loc_823E19A8;
	case 8:
		goto loc_823E19A8;
	case 9:
		goto loc_823E19B8;
	case 10:
		goto loc_823E1AB8;
	case 11:
		goto loc_823E1AB8;
	default:
		__builtin_unreachable();
	}
loc_823E1934:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
loc_823E1940:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
loc_823E1944:
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x823e1aec
	goto loc_823E1AEC;
loc_823E194C:
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823e198c
	if (!cr6.eq) goto loc_823E198C;
	// lbz r11,25(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 25);
	// lbz r10,25(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 25);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823e198c
	if (!cr6.eq) goto loc_823E198C;
	// lbz r11,26(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 26);
	// lbz r10,26(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 26);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x823e198c
	if (!cr6.eq) goto loc_823E198C;
	// lbz r11,27(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 27);
	// lbz r10,27(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 27);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
loc_823E1988:
	// beq cr6,0x823e1af4
	if (cr6.eq) goto loc_823E1AF4;
loc_823E198C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823e19a0
	if (!cr6.eq) goto loc_823E19A0;
loc_823E1994:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x823e19a4
	if (cr6.eq) goto loc_823E19A4;
loc_823E19A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E19A4:
	// b 0x8239bd4c
	return;
loc_823E19A8:
	// lfd f0,24(r3)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// lfd f13,24(r31)
	ctx.f13.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// b 0x823e1988
	goto loc_823E1988;
loc_823E19B8:
	// mr. r9,r30
	ctx.r9.u64 = r30.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// beq 0x823e1a18
	if (cr0.eq) goto loc_823E1A18;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_823E19CC:
	// lwz r10,24(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_823E19D4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e19f8
	if (cr0.eq) goto loc_823E19F8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e19d4
	if (cr6.eq) goto loc_823E19D4;
loc_823E19F8:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823e1a14
	if (cr0.eq) goto loc_823E1A14;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x823e19cc
	if (!cr0.eq) goto loc_823E19CC;
	// b 0x823e1a18
	goto loc_823E1A18;
loc_823E1A14:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823E1A18:
	// mr. r8,r29
	ctx.r8.u64 = r29.u64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r5,r6,-1
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// beq 0x823e1a74
	if (cr0.eq) goto loc_823E1A74;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_823E1A28:
	// lwz r10,24(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
loc_823E1A30:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x823e1a54
	if (cr0.eq) goto loc_823E1A54;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e1a30
	if (cr6.eq) goto loc_823E1A30;
loc_823E1A54:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823e1a70
	if (cr0.eq) goto loc_823E1A70;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x823e1a28
	if (!cr0.eq) goto loc_823E1A28;
	// b 0x823e1a74
	goto loc_823E1A74;
loc_823E1A70:
	// li r4,1
	ctx.r4.s64 = 1;
loc_823E1A74:
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq cr6,0x823e1a84
	if (cr6.eq) goto loc_823E1A84;
	// addi r11,r5,0
	r11.s64 = ctx.r5.s64 + 0;
	// b 0x823e1940
	goto loc_823E1940;
loc_823E1A84:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_823E1A8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1ab0
	if (cr0.eq) goto loc_823E1AB0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1a8c
	if (cr6.eq) goto loc_823E1A8C;
loc_823E1AB0:
	// cntlzw r11,r8
	r11.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// b 0x823e1944
	goto loc_823E1944;
loc_823E1AB8:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_823E1AC0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1ab0
	if (cr0.eq) goto loc_823E1AB0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1ac0
	if (cr6.eq) goto loc_823E1AC0;
	// b 0x823e1ab0
	goto loc_823E1AB0;
loc_823E1AE8:
	// li r11,1
	r11.s64 = 1;
loc_823E1AEC:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e198c
	if (cr6.eq) goto loc_823E198C;
loc_823E1AF4:
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_823E1AFC:
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823e18ec
	if (!cr0.eq) goto loc_823E18EC;
	// b 0x823e1994
	goto loc_823E1994;
}

__attribute__((alias("__imp__sub_823E1B08"))) PPC_WEAK_FUNC(sub_823E1B08);
PPC_FUNC_IMPL(__imp__sub_823E1B08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,628(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 628);
	// b 0x823eb110
	sub_823EB110(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823E1B10"))) PPC_WEAK_FUNC(sub_823E1B10);
PPC_FUNC_IMPL(__imp__sub_823E1B10) {
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
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x823e1818
	sub_823E1818(ctx, base);
	// addi r11,r3,29
	r11.s64 = ctx.r3.s64 + 29;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r11,r29
	r30.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// b 0x823e1b78
	goto loc_823E1B78;
loc_823E1B38:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823E1B40:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1b64
	if (cr0.eq) goto loc_823E1B64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1b40
	if (cr6.eq) goto loc_823E1B40;
loc_823E1B64:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x823e1b80
	if (cr0.lt) goto loc_823E1B80;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1b88
	if (cr6.eq) goto loc_823E1B88;
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
loc_823E1B78:
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x823e1b38
	if (!cr0.eq) goto loc_823E1B38;
loc_823E1B80:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e1bf0
	goto loc_823E1BF0;
loc_823E1B88:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e1b9c
	if (cr6.eq) goto loc_823E1B9C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823e1bf0
	goto loc_823E1BF0;
loc_823E1B9C:
	// li r11,1
	r11.s64 = 1;
	// lwz r31,8(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// b 0x823e1bd0
	goto loc_823E1BD0;
loc_823E1BAC:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x823e1bcc
	if (!cr6.eq) goto loc_823E1BCC;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x823e1b10
	sub_823E1B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823e1bd8
	if (!cr0.eq) goto loc_823E1BD8;
loc_823E1BCC:
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
loc_823E1BD0:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823e1bac
	if (!cr0.eq) goto loc_823E1BAC;
loc_823E1BD8:
	// li r11,0
	r11.s64 = 0;
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
loc_823E1BF0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823E1BF8"))) PPC_WEAK_FUNC(sub_823E1BF8);
PPC_FUNC_IMPL(__imp__sub_823E1BF8) {
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
	// bl 0x823e1b10
	sub_823E1B10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823e1c84
	if (!cr0.eq) goto loc_823E1C84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e1818
	sub_823E1818(ctx, base);
	// addi r11,r3,29
	r11.s64 = ctx.r3.s64 + 29;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// b 0x823e1c7c
	goto loc_823E1C7C;
loc_823E1C3C:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r30
	r11.u64 = r30.u64;
loc_823E1C44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e1c68
	if (cr0.eq) goto loc_823E1C68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1c44
	if (cr6.eq) goto loc_823E1C44;
loc_823E1C68:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x823e1c84
	if (cr0.lt) goto loc_823E1C84;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e1ca0
	if (cr6.eq) goto loc_823E1CA0;
	// lwz r7,12(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
loc_823E1C7C:
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne 0x823e1c3c
	if (!cr0.eq) goto loc_823E1C3C;
loc_823E1C84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E1C88:
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
loc_823E1CA0:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823e1cb0
	if (cr6.eq) goto loc_823E1CB0;
	// lwz r11,4(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_823E1CB0:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823e1cc0
	if (cr6.eq) goto loc_823E1CC0;
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
loc_823E1CC0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823e1c88
	goto loc_823E1C88;
}

__attribute__((alias("__imp__sub_823E1CC8"))) PPC_WEAK_FUNC(sub_823E1CC8);
PPC_FUNC_IMPL(__imp__sub_823E1CC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// li r9,92
	ctx.r9.s64 = 92;
loc_823E1CE0:
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,34
	cr6.compare<uint32_t>(ctx.r8.u32, 34, xer);
	// bne cr6,0x823e1d14
	if (!cr6.eq) goto loc_823E1D14;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823e1d00
	if (cr6.eq) goto loc_823E1D00;
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// bge cr6,0x823e1d00
	if (!cr6.lt) goto loc_823E1D00;
	// stbx r9,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u8);
loc_823E1D00:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e1d14
	if (!cr6.eq) goto loc_823E1D14;
	// cntlzw r11,r10
	r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_823E1D14:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823e1d48
	if (cr6.eq) goto loc_823E1D48;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi cr6,r8,92
	cr6.compare<uint32_t>(ctx.r8.u32, 92, xer);
	// bne cr6,0x823e1d48
	if (!cr6.eq) goto loc_823E1D48;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823e1d40
	if (cr6.eq) goto loc_823E1D40;
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// bge cr6,0x823e1d40
	if (!cr6.lt) goto loc_823E1D40;
	// stbx r9,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r9.u8);
loc_823E1D40:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// li r11,1
	r11.s64 = 1;
loc_823E1D48:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823e1d60
	if (cr6.eq) goto loc_823E1D60;
	// cmplw cr6,r3,r7
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, xer);
	// bge cr6,0x823e1d60
	if (!cr6.lt) goto loc_823E1D60;
	// lbz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// stbx r8,r3,r6
	PPC_STORE_U8(ctx.r3.u32 + ctx.r6.u32, ctx.r8.u8);
loc_823E1D60:
	// addic. r5,r5,-1
	xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x823e1ce0
	if (!cr0.eq) goto loc_823E1CE0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E1D74"))) PPC_WEAK_FUNC(sub_823E1D74);
PPC_FUNC_IMPL(__imp__sub_823E1D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1D78"))) PPC_WEAK_FUNC(sub_823E1D78);
PPC_FUNC_IMPL(__imp__sub_823E1D78) {
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
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823e1d9c
	if (cr6.eq) goto loc_823E1D9C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x823e1dcc
	goto loc_823E1DCC;
loc_823E1D9C:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e1dc8
	if (!cr6.eq) goto loc_823E1DC8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,12304
	ctx.r6.s64 = r11.s64 + 12304;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
loc_823E1DC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E1DCC:
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

__attribute__((alias("__imp__sub_823E1DE0"))) PPC_WEAK_FUNC(sub_823E1DE0);
PPC_FUNC_IMPL(__imp__sub_823E1DE0) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e1e10
	if (cr0.eq) goto loc_823E1E10;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e1de0
	sub_823E1DE0(ctx, base);
loc_823E1E10:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e1e24
	if (cr0.eq) goto loc_823E1E24;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E1E24:
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

__attribute__((alias("__imp__sub_823E1E40"))) PPC_WEAK_FUNC(sub_823E1E40);
PPC_FUNC_IMPL(__imp__sub_823E1E40) {
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
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e1e70
	if (cr0.eq) goto loc_823E1E70;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e1e40
	sub_823E1E40(ctx, base);
loc_823E1E70:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e1e84
	if (cr0.eq) goto loc_823E1E84;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E1E84:
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

__attribute__((alias("__imp__sub_823E1EA0"))) PPC_WEAK_FUNC(sub_823E1EA0);
PPC_FUNC_IMPL(__imp__sub_823E1EA0) {
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
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e1ec8
	if (cr0.eq) goto loc_823E1EC8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e1e40
	sub_823E1E40(ctx, base);
loc_823E1EC8:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e1edc
	if (cr0.eq) goto loc_823E1EDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e1f30
	sub_823E1F30(ctx, base);
loc_823E1EDC:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e1f08
	if (cr6.eq) goto loc_823E1F08;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823e1f08
	if (cr0.eq) goto loc_823E1F08;
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
loc_823E1F08:
	// addi r3,r31,60
	ctx.r3.s64 = r31.s64 + 60;
	// bl 0x823e04e0
	sub_823E04E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
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

__attribute__((alias("__imp__sub_823E1F2C"))) PPC_WEAK_FUNC(sub_823E1F2C);
PPC_FUNC_IMPL(__imp__sub_823E1F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E1F30"))) PPC_WEAK_FUNC(sub_823E1F30);
PPC_FUNC_IMPL(__imp__sub_823E1F30) {
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
	// bl 0x823e1ea0
	sub_823E1EA0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e1f64
	if (cr0.eq) goto loc_823E1F64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E1F64:
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

__attribute__((alias("__imp__sub_823E1F80"))) PPC_WEAK_FUNC(sub_823E1F80);
PPC_FUNC_IMPL(__imp__sub_823E1F80) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e1fb0
	if (cr0.eq) goto loc_823E1FB0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e1f80
	sub_823E1F80(ctx, base);
loc_823E1FB0:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e1fc4
	if (cr0.eq) goto loc_823E1FC4;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E1FC4:
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

__attribute__((alias("__imp__sub_823E1FE0"))) PPC_WEAK_FUNC(sub_823E1FE0);
PPC_FUNC_IMPL(__imp__sub_823E1FE0) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e2010
	if (cr0.eq) goto loc_823E2010;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e1fe0
	sub_823E1FE0(ctx, base);
loc_823E2010:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e2024
	if (cr0.eq) goto loc_823E2024;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E2024:
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

__attribute__((alias("__imp__sub_823E2040"))) PPC_WEAK_FUNC(sub_823E2040);
PPC_FUNC_IMPL(__imp__sub_823E2040) {
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
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e2070
	if (cr0.eq) goto loc_823E2070;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e2040
	sub_823E2040(ctx, base);
loc_823E2070:
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e2084
	if (cr0.eq) goto loc_823E2084;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E2084:
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

__attribute__((alias("__imp__sub_823E20A0"))) PPC_WEAK_FUNC(sub_823E20A0);
PPC_FUNC_IMPL(__imp__sub_823E20A0) {
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
	// lis r5,1
	ctx.r5.s64 = 65536;
	// lis r4,16
	ctx.r4.s64 = 1048576;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824091d0
	sub_824091D0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823eaf48
	sub_823EAF48(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,684(r31)
	PPC_STORE_U32(r31.u32 + 684, r30.u32);
	// bl 0x823e0c90
	sub_823E0C90(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// li r5,508
	ctx.r5.s64 = 508;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// addi r3,r31,116
	ctx.r3.s64 = r31.s64 + 116;
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
	// stw r29,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r29.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// stw r29,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r29.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,624(r31)
	PPC_STORE_U32(r31.u32 + 624, r30.u32);
	// stw r30,628(r31)
	PPC_STORE_U32(r31.u32 + 628, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// std r30,640(r31)
	PPC_STORE_U64(r31.u32 + 640, r30.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r30,648(r31)
	PPC_STORE_U64(r31.u32 + 648, r30.u64);
	// li r3,4
	ctx.r3.s64 = 4;
	// std r30,656(r31)
	PPC_STORE_U64(r31.u32 + 656, r30.u64);
	// std r30,664(r31)
	PPC_STORE_U64(r31.u32 + 664, r30.u64);
	// stw r29,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r29.u32);
	// bl 0x826a7468
	sub_826A7468(ctx, base);
	// bl 0x826a73d0
	sub_826A73D0(ctx, base);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,676(r31)
	PPC_STORE_U32(r31.u32 + 676, ctx.r3.u32);
	// addi r4,r11,12340
	ctx.r4.s64 = r11.s64 + 12340;
	// beq 0x823e2194
	if (cr0.eq) goto loc_823E2194;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_823E2168:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// beq 0x823e218c
	if (cr0.eq) goto loc_823E218C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq cr6,0x823e2168
	if (cr6.eq) goto loc_823E2168;
loc_823E218C:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x823e219c
	if (cr0.eq) goto loc_823E219C;
loc_823E2194:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x826a7468
	sub_826A7468(ctx, base);
loc_823E219C:
	// stw r30,692(r31)
	PPC_STORE_U32(r31.u32 + 692, r30.u32);
	// bl 0x823e0288
	sub_823E0288(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823E21B0"))) PPC_WEAK_FUNC(sub_823E21B0);
PPC_FUNC_IMPL(__imp__sub_823E21B0) {
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
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e21d4
	if (cr0.eq) goto loc_823E21D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e1fe0
	sub_823E1FE0(ctx, base);
loc_823E21D4:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e21e8
	if (cr0.eq) goto loc_823E21E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e1f80
	sub_823E1F80(ctx, base);
loc_823E21E8:
	// lwz r31,624(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 624);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823e2208
	if (cr0.eq) goto loc_823E2208;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e1ea0
	sub_823E1EA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E2208:
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e221c
	if (cr0.eq) goto loc_823E221C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e2040
	sub_823E2040(ctx, base);
loc_823E221C:
	// addi r31,r30,116
	r31.s64 = r30.s64 + 116;
	// li r29,127
	r29.s64 = 127;
loc_823E2224:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e2238
	if (cr0.eq) goto loc_823E2238;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e1de0
	sub_823E1DE0(ctx, base);
loc_823E2238:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// bne 0x823e2224
	if (!cr0.eq) goto loc_823E2224;
	// lwz r11,684(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 684);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e2258
	if (cr6.eq) goto loc_823E2258;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e0ce8
	sub_823E0CE8(ctx, base);
loc_823E2258:
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x823eb7c8
	sub_823EB7C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82409218
	sub_82409218(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823E2270"))) PPC_WEAK_FUNC(sub_823E2270);
PPC_FUNC_IMPL(__imp__sub_823E2270) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e22bc
	if (cr0.eq) goto loc_823E22BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// b 0x823e22c0
	goto loc_823E22C0;
loc_823E22BC:
	// li r11,0
	r11.s64 = 0;
loc_823E22C0:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e22d4
	if (!cr6.eq) goto loc_823E22D4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e22e8
	goto loc_823E22E8;
loc_823E22D4:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r11,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r11.u32);
	// stw r30,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r30.u32);
loc_823E22E8:
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

__attribute__((alias("__imp__sub_823E2300"))) PPC_WEAK_FUNC(sub_823E2300);
PPC_FUNC_IMPL(__imp__sub_823E2300) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r11,72(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e2ac0
	if (!cr6.eq) goto loc_823E2AC0;
	// lwz r11,80(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e2ac0
	if (!cr6.eq) goto loc_823E2AC0;
	// lwz r10,108(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 108);
	// li r30,0
	r30.s64 = 0;
	// addi r31,r28,640
	r31.s64 = r28.s64 + 640;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823e2370
	if (cr0.eq) goto loc_823E2370;
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r9,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r9,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r9.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,108(r28)
	PPC_STORE_U32(r28.u32 + 108, r11.u32);
	// stw r30,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r30.u32);
	// b 0x823e238c
	goto loc_823E238C;
loc_823E2370:
	// lwz r11,672(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 672);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r3,628(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 628);
	// ori r4,r11,4
	ctx.r4.u64 = r11.u64 | 4;
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e2ac8
	if (cr0.lt) goto loc_823E2AC8;
loc_823E238C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x823e2a1c
	if (cr6.eq) goto loc_823E2A1C;
	// ble cr6,0x823e2ab8
	if (!cr6.gt) goto loc_823E2AB8;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// ble cr6,0x823e2a14
	if (!cr6.gt) goto loc_823E2A14;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x823e23d8
	if (cr6.eq) goto loc_823E23D8;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// beq cr6,0x823e23d0
	if (cr6.eq) goto loc_823E23D0;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e23c4
	if (cr6.eq) goto loc_823E23C4;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x823e2ab8
	if (!cr6.eq) goto loc_823E2AB8;
loc_823E23C4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,72(r28)
	PPC_STORE_U32(r28.u32 + 72, r11.u32);
	// b 0x823e2ac8
	goto loc_823E2AC8;
loc_823E23D0:
	// li r3,280
	ctx.r3.s64 = 280;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E23D8:
	// lwz r11,84(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e28d0
	if (cr6.eq) goto loc_823E28D0;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// li r29,1
	r29.s64 = 1;
	// stw r30,84(r28)
	PPC_STORE_U32(r28.u32 + 84, r30.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,648(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 648);
	// stw r30,96(r28)
	PPC_STORE_U32(r28.u32 + 96, r30.u32);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// beq cr6,0x823e2724
	if (cr6.eq) goto loc_823E2724;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// beq cr6,0x823e26e8
	if (cr6.eq) goto loc_823E26E8;
	// cmpwi cr6,r10,101
	cr6.compare<int32_t>(ctx.r10.s32, 101, xer);
	// beq cr6,0x823e25e8
	if (cr6.eq) goto loc_823E25E8;
	// cmpwi cr6,r10,105
	cr6.compare<int32_t>(ctx.r10.s32, 105, xer);
	// beq cr6,0x823e24ec
	if (cr6.eq) goto loc_823E24EC;
	// cmpwi cr6,r10,108
	cr6.compare<int32_t>(ctx.r10.s32, 108, xer);
	// beq cr6,0x823e24b0
	if (cr6.eq) goto loc_823E24B0;
	// cmpwi cr6,r10,112
	cr6.compare<int32_t>(ctx.r10.s32, 112, xer);
	// beq cr6,0x823e2474
	if (cr6.eq) goto loc_823E2474;
	// cmpwi cr6,r10,117
	cr6.compare<int32_t>(ctx.r10.s32, 117, xer);
	// bne cr6,0x823e27e0
	if (!cr6.eq) goto loc_823E27E0;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,12468
	ctx.r10.s64 = ctx.r10.s64 + 12468;
loc_823E2440:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e2464
	if (cr0.eq) goto loc_823E2464;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e2440
	if (cr6.eq) goto loc_823E2440;
loc_823E2464:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e27e0
	if (!cr0.eq) goto loc_823E27E0;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2474:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,12460
	ctx.r10.s64 = ctx.r10.s64 + 12460;
loc_823E247C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e24a0
	if (cr0.eq) goto loc_823E24A0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e247c
	if (cr6.eq) goto loc_823E247C;
loc_823E24A0:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e27e0
	if (!cr0.eq) goto loc_823E27E0;
	// li r3,270
	ctx.r3.s64 = 270;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E24B0:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,12452
	ctx.r10.s64 = ctx.r10.s64 + 12452;
loc_823E24B8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e24dc
	if (cr0.eq) goto loc_823E24DC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e24b8
	if (cr6.eq) goto loc_823E24B8;
loc_823E24DC:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e27e0
	if (!cr0.eq) goto loc_823E27E0;
	// li r3,259
	ctx.r3.s64 = 259;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E24EC:
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r10,25880
	ctx.r9.s64 = ctx.r10.s64 + 25880;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E24F8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e251c
	if (cr0.eq) goto loc_823E251C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e24f8
	if (cr6.eq) goto loc_823E24F8;
loc_823E251C:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823e252c
	if (!cr0.eq) goto loc_823E252C;
	// li r3,262
	ctx.r3.s64 = 262;
	// b 0x823e2624
	goto loc_823E2624;
loc_823E252C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,12444
	ctx.r9.s64 = ctx.r10.s64 + 12444;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E2538:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e255c
	if (cr0.eq) goto loc_823E255C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e2538
	if (cr6.eq) goto loc_823E2538;
loc_823E255C:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823e256c
	if (!cr0.eq) goto loc_823E256C;
	// li r3,263
	ctx.r3.s64 = 263;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E256C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,12436
	ctx.r9.s64 = ctx.r10.s64 + 12436;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E2578:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e259c
	if (cr0.eq) goto loc_823E259C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e2578
	if (cr6.eq) goto loc_823E2578;
loc_823E259C:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823e25ac
	if (!cr0.eq) goto loc_823E25AC;
	// li r3,264
	ctx.r3.s64 = 264;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E25AC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,12428
	ctx.r10.s64 = ctx.r10.s64 + 12428;
loc_823E25B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e25d8
	if (cr0.eq) goto loc_823E25D8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e25b4
	if (cr6.eq) goto loc_823E25B4;
loc_823E25D8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e27e0
	if (!cr0.eq) goto loc_823E27E0;
	// li r3,260
	ctx.r3.s64 = 260;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E25E8:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,12420
	ctx.r9.s64 = ctx.r10.s64 + 12420;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E25F4:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e2618
	if (cr0.eq) goto loc_823E2618;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e25f4
	if (cr6.eq) goto loc_823E25F4;
loc_823E2618:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823e262c
	if (!cr0.eq) goto loc_823E262C;
loc_823E2620:
	// li r3,265
	ctx.r3.s64 = 265;
loc_823E2624:
	// stw r29,96(r28)
	PPC_STORE_U32(r28.u32 + 96, r29.u32);
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E262C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,12412
	ctx.r9.s64 = ctx.r10.s64 + 12412;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E2638:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e265c
	if (cr0.eq) goto loc_823E265C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e2638
	if (cr6.eq) goto loc_823E2638;
loc_823E265C:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823e266c
	if (!cr0.eq) goto loc_823E266C;
loc_823E2664:
	// li r3,266
	ctx.r3.s64 = 266;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E266C:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,12404
	ctx.r9.s64 = ctx.r10.s64 + 12404;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E2678:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e269c
	if (cr0.eq) goto loc_823E269C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e2678
	if (cr6.eq) goto loc_823E2678;
loc_823E269C:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823e26ac
	if (!cr0.eq) goto loc_823E26AC;
loc_823E26A4:
	// li r3,267
	ctx.r3.s64 = 267;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E26AC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,12292
	ctx.r10.s64 = ctx.r10.s64 + 12292;
loc_823E26B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e26d8
	if (cr0.eq) goto loc_823E26D8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e26b4
	if (cr6.eq) goto loc_823E26B4;
loc_823E26D8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e27e0
	if (!cr0.eq) goto loc_823E27E0;
	// li r3,261
	ctx.r3.s64 = 261;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E26E8:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r10,r10,19412
	ctx.r10.s64 = ctx.r10.s64 + 19412;
loc_823E26F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e2714
	if (cr0.eq) goto loc_823E2714;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e26f0
	if (cr6.eq) goto loc_823E26F0;
loc_823E2714:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e27e0
	if (!cr0.eq) goto loc_823E27E0;
	// li r3,257
	ctx.r3.s64 = 257;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2724:
	// cmpwi cr6,r10,101
	cr6.compare<int32_t>(ctx.r10.s32, 101, xer);
	// beq cr6,0x823e27ec
	if (cr6.eq) goto loc_823E27EC;
	// cmpwi cr6,r10,105
	cr6.compare<int32_t>(ctx.r10.s32, 105, xer);
	// bne cr6,0x823e27e0
	if (!cr6.eq) goto loc_823E27E0;
	// lis r10,-32251
	ctx.r10.s64 = -2113601536;
	// addi r9,r10,25880
	ctx.r9.s64 = ctx.r10.s64 + 25880;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E2740:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e2764
	if (cr0.eq) goto loc_823E2764;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e2740
	if (cr6.eq) goto loc_823E2740;
loc_823E2764:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x823e2774
	if (!cr0.eq) goto loc_823E2774;
loc_823E276C:
	// li r3,268
	ctx.r3.s64 = 268;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2774:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,12444
	ctx.r9.s64 = ctx.r10.s64 + 12444;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E2780:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e27a4
	if (cr0.eq) goto loc_823E27A4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e2780
	if (cr6.eq) goto loc_823E2780;
loc_823E27A4:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823e276c
	if (cr0.eq) goto loc_823E276C;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,12436
	ctx.r10.s64 = ctx.r10.s64 + 12436;
loc_823E27B4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e27d8
	if (cr0.eq) goto loc_823E27D8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e27b4
	if (cr6.eq) goto loc_823E27B4;
loc_823E27D8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823e276c
	if (cr0.eq) goto loc_823E276C;
loc_823E27E0:
	// li r11,1
	r11.s64 = 1;
	// stw r11,84(r28)
	PPC_STORE_U32(r28.u32 + 84, r11.u32);
	// b 0x823e2a0c
	goto loc_823E2A0C;
loc_823E27EC:
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,12412
	ctx.r9.s64 = ctx.r10.s64 + 12412;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E27F8:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e281c
	if (cr0.eq) goto loc_823E281C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e27f8
	if (cr6.eq) goto loc_823E27F8;
loc_823E281C:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823e2664
	if (cr0.eq) goto loc_823E2664;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r9,r10,12404
	ctx.r9.s64 = ctx.r10.s64 + 12404;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E2830:
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e2854
	if (cr0.eq) goto loc_823E2854;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e2830
	if (cr6.eq) goto loc_823E2830;
loc_823E2854:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823e26a4
	if (cr0.eq) goto loc_823E26A4;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// addi r10,r10,12420
	ctx.r10.s64 = ctx.r10.s64 + 12420;
loc_823E2864:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e2888
	if (cr0.eq) goto loc_823E2888;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e2864
	if (cr6.eq) goto loc_823E2864;
loc_823E2888:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e27e0
	if (!cr0.eq) goto loc_823E27E0;
	// lwz r11,624(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 624);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823e28a8
	if (!cr0.eq) goto loc_823E28A8;
	// stw r29,88(r28)
	PPC_STORE_U32(r28.u32 + 88, r29.u32);
	// b 0x823e2620
	goto loc_823E2620;
loc_823E28A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823e28c8
	if (cr0.eq) goto loc_823E28C8;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e28c8
	if (!cr6.eq) goto loc_823E28C8;
	// stw r10,88(r28)
	PPC_STORE_U32(r28.u32 + 88, ctx.r10.u32);
	// b 0x823e2620
	goto loc_823E2620;
loc_823E28C8:
	// li r3,269
	ctx.r3.s64 = 269;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E28D0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r4,648(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 648);
	// addi r10,r11,12396
	ctx.r10.s64 = r11.s64 + 12396;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_823E28E0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e2904
	if (cr0.eq) goto loc_823E2904;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e28e0
	if (cr6.eq) goto loc_823E28E0;
loc_823E2904:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e2918
	if (!cr0.eq) goto loc_823E2918;
	// li r3,271
	ctx.r3.s64 = 271;
	// stw r30,96(r28)
	PPC_STORE_U32(r28.u32 + 96, r30.u32);
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2918:
	// lwz r11,96(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 96);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e2a0c
	if (cr6.eq) goto loc_823E2A0C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e1bf8
	sub_823E1BF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823e2a0c
	if (cr0.eq) goto loc_823E2A0C;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// li r29,1
	r29.s64 = 1;
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// lwz r6,76(r28)
	ctx.r6.u64 = PPC_LOAD_U32(r28.u32 + 76);
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// std r9,8(r11)
	PPC_STORE_U64(r11.u32 + 8, ctx.r9.u64);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// std r8,16(r11)
	PPC_STORE_U64(r11.u32 + 16, ctx.r8.u64);
	// std r7,24(r11)
	PPC_STORE_U64(r11.u32 + 24, ctx.r7.u64);
	// bne cr6,0x823e2990
	if (!cr6.eq) goto loc_823E2990;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x823e5370
	sub_823E5370(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// mr r11,r30
	r11.u64 = r30.u64;
	// bne 0x823e2994
	if (!cr0.eq) goto loc_823E2994;
loc_823E2990:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823E2994:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,76(r28)
	PPC_STORE_U32(r28.u32 + 76, r11.u32);
	// bne cr6,0x823e29b8
	if (!cr6.eq) goto loc_823E29B8;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e2300
	sub_823E2300(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823e29bc
	if (cr6.eq) goto loc_823E29BC;
	// mr r11,r30
	r11.u64 = r30.u64;
	// b 0x823e29c0
	goto loc_823E29C0;
loc_823E29B8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_823E29BC:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_823E29C0:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,76(r28)
	PPC_STORE_U32(r28.u32 + 76, r11.u32);
	// beq cr6,0x823e2acc
	if (cr6.eq) goto loc_823E2ACC;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r29,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r29.u32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// li r5,1518
	ctx.r5.s64 = 1518;
	// addi r6,r10,12344
	ctx.r6.s64 = ctx.r10.s64 + 12344;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// addi r3,r28,24
	ctx.r3.s64 = r28.s64 + 24;
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r10,0(r31)
	PPC_STORE_U64(r31.u32 + 0, ctx.r10.u64);
	// std r9,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r9.u64);
	// std r8,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r8.u64);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
loc_823E2A0C:
	// li r3,278
	ctx.r3.s64 = 278;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2A14:
	// li r3,279
	ctx.r3.s64 = 279;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2A1C:
	// lbz r11,649(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 649);
	// extsb. r10,r11
	ctx.r10.s64 = r11.s8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823e2a34
	if (!cr0.eq) goto loc_823E2A34;
	// lbz r11,648(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 648);
	// extsb r3,r11
	ctx.r3.s64 = r11.s8;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2A34:
	// lbz r11,650(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 650);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e2ab8
	if (!cr6.eq) goto loc_823E2AB8;
	// lbz r11,648(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 648);
	// cmpwi cr6,r10,61
	cr6.compare<int32_t>(ctx.r10.s32, 61, xer);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// bne cr6,0x823e2a90
	if (!cr6.eq) goto loc_823E2A90;
	// cmpwi cr6,r11,33
	cr6.compare<int32_t>(r11.s32, 33, xer);
	// beq cr6,0x823e2a88
	if (cr6.eq) goto loc_823E2A88;
	// cmpwi cr6,r11,60
	cr6.compare<int32_t>(r11.s32, 60, xer);
	// beq cr6,0x823e2a80
	if (cr6.eq) goto loc_823E2A80;
	// cmpwi cr6,r11,61
	cr6.compare<int32_t>(r11.s32, 61, xer);
	// beq cr6,0x823e2a78
	if (cr6.eq) goto loc_823E2A78;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// bne cr6,0x823e2ab8
	if (!cr6.eq) goto loc_823E2AB8;
	// li r3,273
	ctx.r3.s64 = 273;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2A78:
	// li r3,274
	ctx.r3.s64 = 274;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2A80:
	// li r3,272
	ctx.r3.s64 = 272;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2A88:
	// li r3,275
	ctx.r3.s64 = 275;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2A90:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// bne cr6,0x823e2ab8
	if (!cr6.eq) goto loc_823E2AB8;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// beq cr6,0x823e2ab0
	if (cr6.eq) goto loc_823E2AB0;
	// cmpwi cr6,r11,124
	cr6.compare<int32_t>(r11.s32, 124, xer);
	// bne cr6,0x823e2ab8
	if (!cr6.eq) goto loc_823E2AB8;
	// li r3,277
	ctx.r3.s64 = 277;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2AB0:
	// li r3,276
	ctx.r3.s64 = 276;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2AB8:
	// li r3,281
	ctx.r3.s64 = 281;
	// b 0x823e2acc
	goto loc_823E2ACC;
loc_823E2AC0:
	// li r11,12
	r11.s64 = 12;
	// stw r11,640(r28)
	PPC_STORE_U32(r28.u32 + 640, r11.u32);
loc_823E2AC8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_823E2ACC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823E2AD4"))) PPC_WEAK_FUNC(sub_823E2AD4);
PPC_FUNC_IMPL(__imp__sub_823E2AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2AD8"))) PPC_WEAK_FUNC(sub_823E2AD8);
PPC_FUNC_IMPL(__imp__sub_823E2AD8) {
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
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// bl 0x823e1818
	sub_823E1818(ctx, base);
	// addi r11,r3,29
	r11.s64 = ctx.r3.s64 + 29;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r9
	ctx.r9.u64 = r11.u64 + ctx.r9.u64;
	// b 0x823e2b44
	goto loc_823E2B44;
loc_823E2B00:
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_823E2B0C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// subf r7,r7,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r7.s64;
	// beq 0x823e2b30
	if (cr0.eq) goto loc_823E2B30;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e2b0c
	if (cr6.eq) goto loc_823E2B0C;
loc_823E2B30:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// blt 0x823e2b70
	if (cr0.lt) goto loc_823E2B70;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e2b54
	if (cr6.eq) goto loc_823E2B54;
	// addi r9,r6,12
	ctx.r9.s64 = ctx.r6.s64 + 12;
loc_823E2B44:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e2b00
	if (!cr6.eq) goto loc_823E2B00;
	// b 0x823e2b70
	goto loc_823E2B70;
loc_823E2B54:
	// lwz r3,0(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bl 0x823e1de0
	sub_823E1DE0(ctx, base);
loc_823E2B70:
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

__attribute__((alias("__imp__sub_823E2B84"))) PPC_WEAK_FUNC(sub_823E2B84);
PPC_FUNC_IMPL(__imp__sub_823E2B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2B88"))) PPC_WEAK_FUNC(sub_823E2B88);
PPC_FUNC_IMPL(__imp__sub_823E2B88) {
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
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e2bd8
	if (cr0.eq) goto loc_823E2BD8;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x823e2bdc
	goto loc_823E2BDC;
loc_823E2BD8:
	// li r11,0
	r11.s64 = 0;
loc_823E2BDC:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e2bf0
	if (!cr6.eq) goto loc_823E2BF0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e2c28
	goto loc_823E2C28;
loc_823E2BF0:
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// stw r11,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, r11.u32);
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e2c1c
	if (cr6.eq) goto loc_823E2C1C;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x823e2c20
	if (!cr6.eq) goto loc_823E2C20;
loc_823E2C1C:
	// li r11,0
	r11.s64 = 0;
loc_823E2C20:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
loc_823E2C28:
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

__attribute__((alias("__imp__sub_823E2C40"))) PPC_WEAK_FUNC(sub_823E2C40);
PPC_FUNC_IMPL(__imp__sub_823E2C40) {
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
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823e2c90
	if (!cr0.eq) goto loc_823E2C90;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1510
	ctx.r5.s64 = 1510;
	// addi r6,r11,12476
	ctx.r6.s64 = r11.s64 + 12476;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// b 0x823e2cb4
	goto loc_823E2CB4;
loc_823E2C90:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,92(r31)
	PPC_STORE_U32(r31.u32 + 92, ctx.r10.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r10.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// bl 0x823e1e40
	sub_823E1E40(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E2CB4:
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

__attribute__((alias("__imp__sub_823E2CC8"))) PPC_WEAK_FUNC(sub_823E2CC8);
PPC_FUNC_IMPL(__imp__sub_823E2CC8) {
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
	// addi r30,r31,640
	r30.s64 = r31.s64 + 640;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e2da4
	if (cr0.lt) goto loc_823E2DA4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823e2d10
	if (cr6.eq) goto loc_823E2D10;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// bne cr6,0x823e2d84
	if (!cr6.eq) goto loc_823E2D84;
loc_823E2D10:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e2d3c
	if (cr0.eq) goto loc_823E2D3C;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,648(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x823e2d40
	goto loc_823E2D40;
loc_823E2D3C:
	// li r11,0
	r11.s64 = 0;
loc_823E2D40:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// bne cr6,0x823e2d58
	if (!cr6.eq) goto loc_823E2D58;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e2da4
	goto loc_823E2DA4;
loc_823E2D58:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e2da4
	if (cr0.lt) goto loc_823E2DA4;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e2da0
	if (cr6.eq) goto loc_823E2DA0;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823e2da0
	if (cr6.eq) goto loc_823E2DA0;
loc_823E2D84:
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e2da0
	if (cr6.eq) goto loc_823E2DA0;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823e2da0
	if (cr6.eq) goto loc_823E2DA0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// bl 0x823ec250
	sub_823EC250(ctx, base);
loc_823E2DA0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E2DA4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
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

__attribute__((alias("__imp__sub_823E2DC4"))) PPC_WEAK_FUNC(sub_823E2DC4);
PPC_FUNC_IMPL(__imp__sub_823E2DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E2DC8"))) PPC_WEAK_FUNC(sub_823E2DC8);
PPC_FUNC_IMPL(__imp__sub_823E2DC8) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r27,r29,640
	r27.s64 = r29.s64 + 640;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 672);
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3194
	if (cr0.lt) goto loc_823E3194;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e3170
	if (!cr6.eq) goto loc_823E3170;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r31,r29,648
	r31.s64 = r29.s64 + 648;
	// addi r10,r11,2828
	ctx.r10.s64 = r11.s64 + 2828;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823E2E10:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e2e34
	if (cr0.eq) goto loc_823E2E34;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e2e10
	if (cr6.eq) goto loc_823E2E10;
loc_823E2E34:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e3170
	if (!cr0.eq) goto loc_823E3170;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 672);
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3194
	if (cr0.lt) goto loc_823E3194;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x823e3170
	if (!cr6.eq) goto loc_823E3170;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r22,0(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,672(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 672);
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3194
	if (cr0.lt) goto loc_823E3194;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e3170
	if (!cr6.eq) goto loc_823E3170;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r24,r11,24840
	r24.s64 = r11.s64 + 24840;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_823E2E98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e2ebc
	if (cr0.eq) goto loc_823E2EBC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e2e98
	if (cr6.eq) goto loc_823E2E98;
loc_823E2EBC:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e3170
	if (!cr0.eq) goto loc_823E3170;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 672);
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3194
	if (cr0.lt) goto loc_823E3194;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x823e3170
	if (!cr6.eq) goto loc_823E3170;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// lwz r23,0(r31)
	r23.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
	// addi r25,r11,25924
	r25.s64 = r11.s64 + 25924;
loc_823E2EFC:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 672);
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// li r30,0
	r30.s64 = 0;
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3194
	if (cr0.lt) goto loc_823E3194;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e3170
	if (!cr6.eq) goto loc_823E3170;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_823E2F2C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e2f50
	if (cr0.eq) goto loc_823E2F50;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e2f2c
	if (cr6.eq) goto loc_823E2F2C;
loc_823E2F50:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e3170
	if (!cr0.eq) goto loc_823E3170;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 672);
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3194
	if (cr0.lt) goto loc_823E3194;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e2fcc
	if (!cr6.eq) goto loc_823E2FCC;
	// mr r11,r31
	r11.u64 = r31.u64;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
loc_823E2F84:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e2fa8
	if (cr0.eq) goto loc_823E2FA8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e2f84
	if (cr6.eq) goto loc_823E2F84;
loc_823E2FA8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e2fcc
	if (!cr0.eq) goto loc_823E2FCC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 672);
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// li r30,1
	r30.s64 = 1;
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3194
	if (cr0.lt) goto loc_823E3194;
loc_823E2FCC:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x823e300c
	if (cr6.eq) goto loc_823E300C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x823e2ffc
	if (cr6.eq) goto loc_823E2FFC;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// beq cr6,0x823e300c
	if (cr6.eq) goto loc_823E300C;
	// addi r11,r11,-5
	r11.s64 = r11.s64 + -5;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x823e3170
	if (cr6.gt) goto loc_823E3170;
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// b 0x823e301c
	goto loc_823E301C;
loc_823E2FFC:
	// lwa r11,0(r31)
	r11.s64 = int32_t(PPC_LOAD_U32(r31.u32 + 0));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// b 0x823e3018
	goto loc_823E3018;
loc_823E300C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
loc_823E3018:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(f0.s64);
loc_823E301C:
	// stfd f0,0(r28)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(r28.u32 + 0, f0.u64);
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// beq cr6,0x823e3030
	if (cr6.eq) goto loc_823E3030;
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfd f0,0(r28)
	PPC_STORE_U64(r28.u32 + 0, f0.u64);
loc_823E3030:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplwi cr6,r26,4
	cr6.compare<uint32_t>(r26.u32, 4, xer);
	// blt cr6,0x823e2efc
	if (cr6.lt) goto loc_823E2EFC;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 672);
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3194
	if (cr0.lt) goto loc_823E3194;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e3170
	if (!cr6.eq) goto loc_823E3170;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r11,16928
	ctx.r10.s64 = r11.s64 + 16928;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_823E3070:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e3094
	if (cr0.eq) goto loc_823E3094;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e3070
	if (cr6.eq) goto loc_823E3070;
loc_823E3094:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e3170
	if (!cr0.eq) goto loc_823E3170;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,672(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 672);
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3194
	if (cr0.lt) goto loc_823E3194;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e30c8
	if (cr6.eq) goto loc_823E30C8;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x823e3170
	if (!cr6.eq) goto loc_823E3170;
loc_823E30C8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e30ec
	if (cr0.eq) goto loc_823E30EC;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, r11.u32);
	// b 0x823e30f0
	goto loc_823E30F0;
loc_823E30EC:
	// li r31,0
	r31.s64 = 0;
loc_823E30F0:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823e3104
	if (!cr6.eq) goto loc_823E3104;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e3194
	goto loc_823E3194;
loc_823E3104:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// stw r22,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r22.u32);
	// addi r30,r29,60
	r30.s64 = r29.s64 + 60;
	// stw r23,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r23.u32);
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r10,8(r31)
	PPC_STORE_U64(r31.u32 + 8, ctx.r10.u64);
	// std r9,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r9.u64);
	// std r8,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r8.u64);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// b 0x823e3154
	goto loc_823E3154;
loc_823E3138:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x823a12f0
	sub_823A12F0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823e3160
	if (!cr0.lt) goto loc_823E3160;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r30,r11,40
	r30.s64 = r11.s64 + 40;
loc_823E3154:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823e3138
	if (!cr0.eq) goto loc_823E3138;
loc_823E3160:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// b 0x823e3190
	goto loc_823E3190;
loc_823E3170:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e3190
	if (cr6.eq) goto loc_823E3190;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823e3190
	if (cr6.eq) goto loc_823E3190;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,628(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 628);
	// bl 0x823ec250
	sub_823EC250(ctx, base);
loc_823E3190:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E3194:
	// li r11,1
	r11.s64 = 1;
	// stw r11,72(r29)
	PPC_STORE_U32(r29.u32 + 72, r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823E31A4"))) PPC_WEAK_FUNC(sub_823E31A4);
PPC_FUNC_IMPL(__imp__sub_823E31A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E31A8"))) PPC_WEAK_FUNC(sub_823E31A8);
PPC_FUNC_IMPL(__imp__sub_823E31A8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,0(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823e1818
	sub_823E1818(ctx, base);
	// addi r11,r3,29
	r11.s64 = ctx.r3.s64 + 29;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r30
	r31.u64 = r11.u64 + r30.u64;
	// b 0x823e321c
	goto loc_823E321C;
loc_823E31D8:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r11,r29
	r11.u64 = r29.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
loc_823E31E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e3208
	if (cr0.eq) goto loc_823E3208;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e31e4
	if (cr6.eq) goto loc_823E31E4;
loc_823E3208:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// blt 0x823e327c
	if (cr0.lt) goto loc_823E327C;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e322c
	if (cr6.eq) goto loc_823E322C;
	// addi r31,r7,12
	r31.s64 = ctx.r7.s64 + 12;
loc_823E321C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e31d8
	if (!cr6.eq) goto loc_823E31D8;
	// b 0x823e327c
	goto loc_823E327C;
loc_823E322C:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e1868
	sub_823E1868(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823e3260
	if (!cr0.eq) goto loc_823E3260;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r6,r11,12496
	ctx.r6.s64 = r11.s64 + 12496;
	// li r5,1519
	ctx.r5.s64 = 1519;
	// addi r4,r30,640
	ctx.r4.s64 = r30.s64 + 640;
	// addi r3,r30,24
	ctx.r3.s64 = r30.s64 + 24;
	// bl 0x823ebe20
	sub_823EBE20(ctx, base);
loc_823E3260:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// bl 0x823e1de0
	sub_823E1DE0(ctx, base);
loc_823E327C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12(r28)
	PPC_STORE_U32(r28.u32 + 12, r11.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823E3294"))) PPC_WEAK_FUNC(sub_823E3294);
PPC_FUNC_IMPL(__imp__sub_823E3294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E3298"))) PPC_WEAK_FUNC(sub_823E3298);
PPC_FUNC_IMPL(__imp__sub_823E3298) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e32e8
	if (cr0.eq) goto loc_823E32E8;
	// li r11,0
	r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// b 0x823e32ec
	goto loc_823E32EC;
loc_823E32E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823E32EC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
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

__attribute__((alias("__imp__sub_823E330C"))) PPC_WEAK_FUNC(sub_823E330C);
PPC_FUNC_IMPL(__imp__sub_823E330C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E3310"))) PPC_WEAK_FUNC(sub_823E3310);
PPC_FUNC_IMPL(__imp__sub_823E3310) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r31,0
	r31.s64 = 0;
	// beq 0x823e335c
	if (cr0.eq) goto loc_823E335C;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// b 0x823e3360
	goto loc_823E3360;
loc_823E335C:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_823E3360:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823e3374
	if (!cr6.eq) goto loc_823E3374;
loc_823E3368:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e33c8
	goto loc_823E33C8;
loc_823E3374:
	// li r11,2
	r11.s64 = 2;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r29.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e339c
	if (cr0.eq) goto loc_823E339C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e33a0
	goto loc_823E33A0;
loc_823E339C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823E33A0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// bne cr6,0x823e33bc
	if (!cr6.eq) goto loc_823E33BC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e1de0
	sub_823E1DE0(ctx, base);
	// b 0x823e3368
	goto loc_823E3368;
loc_823E33BC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
loc_823E33C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823E33D0"))) PPC_WEAK_FUNC(sub_823E33D0);
PPC_FUNC_IMPL(__imp__sub_823E33D0) {
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
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,12596
	r11.s64 = r11.s64 + 12596;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_823E33F0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e3414
	if (cr0.eq) goto loc_823E3414;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e33f0
	if (cr6.eq) goto loc_823E33F0;
loc_823E3414:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e3424
	if (!cr0.eq) goto loc_823E3424;
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 660);
	// b 0x823e34b4
	goto loc_823E34B4;
loc_823E3424:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e1bf8
	sub_823E1BF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823e34b0
	if (cr0.eq) goto loc_823E34B0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e3468
	if (cr6.eq) goto loc_823E3468;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1517
	ctx.r5.s64 = 1517;
	// addi r6,r11,12528
	ctx.r6.s64 = r11.s64 + 12528;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823e34b4
	goto loc_823E34B4;
loc_823E3468:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e3498
	if (cr6.eq) goto loc_823E3498;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823e3498
	if (!cr6.eq) goto loc_823E3498;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bgt cr6,0x823e3498
	if (cr6.gt) goto loc_823E3498;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x823e34b4
	goto loc_823E34B4;
loc_823E3498:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1518
	ctx.r5.s64 = 1518;
	// addi r6,r11,12344
	ctx.r6.s64 = r11.s64 + 12344;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
loc_823E34B0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E34B4:
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

__attribute__((alias("__imp__sub_823E34C8"))) PPC_WEAK_FUNC(sub_823E34C8);
PPC_FUNC_IMPL(__imp__sub_823E34C8) {
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
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,1
	r11.s64 = 1;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x823e359c
	if (cr6.eq) goto loc_823E359C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,12644
	ctx.r10.s64 = r11.s64 + 12644;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
loc_823E3500:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e3524
	if (cr0.eq) goto loc_823E3524;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e3500
	if (cr6.eq) goto loc_823E3500;
loc_823E3524:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e3570
	if (!cr0.eq) goto loc_823E3570;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e355c
	if (cr6.eq) goto loc_823E355C;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x823e355c
	if (!cr6.eq) goto loc_823E355C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r7,648(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// li r5,1504
	ctx.r5.s64 = 1504;
	// addi r6,r11,12608
	ctx.r6.s64 = r11.s64 + 12608;
	// b 0x823e3594
	goto loc_823E3594;
loc_823E355C:
	// addi r5,r31,640
	ctx.r5.s64 = r31.s64 + 640;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ec0b8
	sub_823EC0B8(ctx, base);
	// b 0x823e359c
	goto loc_823E359C;
loc_823E3570:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823defe0
	sub_823DEFE0(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-24616
	ctx.r6.s64 = r11.s64 + -24616;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
loc_823E3594:
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
loc_823E359C:
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E35B0"))) PPC_WEAK_FUNC(sub_823E35B0);
PPC_FUNC_IMPL(__imp__sub_823E35B0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// li r24,0
	r24.s64 = 0;
	// beq 0x823e35fc
	if (cr0.eq) goto loc_823E35FC;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r24.u32);
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r24.u32);
	// stw r24,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r24.u32);
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r24.u32);
	// b 0x823e3600
	goto loc_823E3600;
loc_823E35FC:
	// mr r23,r24
	r23.u64 = r24.u64;
loc_823E3600:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823e38d8
	if (cr6.eq) goto loc_823E38D8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x823e37ec
	if (cr6.eq) goto loc_823E37EC;
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823e37ec
	if (!cr6.lt) goto loc_823E37EC;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// bne cr6,0x823e37ec
	if (!cr6.eq) goto loc_823E37EC;
	// addi r28,r31,640
	r28.s64 = r31.s64 + 640;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r27,r23,4
	r27.s64 = r23.s64 + 4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r29,r27
	r29.u64 = r27.u64;
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3908
	if (cr0.lt) goto loc_823E3908;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// addi r26,r11,24840
	r26.s64 = r11.s64 + 24840;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r25,r11,12660
	r25.s64 = r11.s64 + 12660;
loc_823E3664:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3908
	if (cr0.lt) goto loc_823E3908;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x823e37b0
	if (!cr6.eq) goto loc_823E37B0;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x823e36f0
	if (cr0.eq) goto loc_823E36F0;
	// lwz r7,648(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 648);
loc_823E3698:
	// lwz r10,24(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823E36A0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e36c4
	if (cr0.eq) goto loc_823E36C4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e36a0
	if (cr6.eq) goto loc_823E36A0;
loc_823E36C4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823e36dc
	if (cr0.eq) goto loc_823E36DC;
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne 0x823e3698
	if (!cr0.eq) goto loc_823E3698;
	// b 0x823e36f0
	goto loc_823E36F0;
loc_823E36DC:
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,1511
	ctx.r5.s64 = 1511;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
loc_823E36F0:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e370c
	if (cr0.eq) goto loc_823E370C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e3710
	goto loc_823E3710;
loc_823E370C:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
loc_823E3710:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r29)
	PPC_STORE_U32(r29.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823e38d8
	if (cr6.eq) goto loc_823E38D8;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// addi r29,r3,12
	r29.s64 = ctx.r3.s64 + 12;
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3908
	if (cr0.lt) goto loc_823E3908;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e37b0
	if (!cr6.eq) goto loc_823E37B0;
	// addi r10,r31,648
	ctx.r10.s64 = r31.s64 + 648;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823E374C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e3770
	if (cr0.eq) goto loc_823E3770;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e374c
	if (cr6.eq) goto loc_823E374C;
loc_823E3770:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823e3664
	if (cr0.eq) goto loc_823E3664;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r10,r31,648
	ctx.r10.s64 = r31.s64 + 648;
	// addi r11,r11,16928
	r11.s64 = r11.s64 + 16928;
loc_823E3784:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e37a8
	if (cr0.eq) goto loc_823E37A8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e3784
	if (cr6.eq) goto loc_823E3784;
loc_823E37A8:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823e37ec
	if (cr0.eq) goto loc_823E37EC;
loc_823E37B0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r29,1
	r29.s64 = 1;
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e37c8
	if (cr6.eq) goto loc_823E37C8;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// bne cr6,0x823e37cc
	if (!cr6.eq) goto loc_823E37CC;
loc_823E37C8:
	// stw r29,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r29.u32);
loc_823E37CC:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1500
	ctx.r4.s64 = 1500;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ec0b8
	sub_823EC0B8(ctx, base);
	// lis r30,-32768
	r30.s64 = -2147483648;
	// stw r29,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r29.u32);
	// ori r30,r30,16389
	r30.u64 = r30.u64 | 16389;
	// b 0x823e3908
	goto loc_823E3908;
loc_823E37EC:
	// addi r28,r23,8
	r28.s64 = r23.s64 + 8;
loc_823E37F0:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// addi r29,r31,640
	r29.s64 = r31.s64 + 640;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823e3848
	if (cr0.eq) goto loc_823E3848;
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r9,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r9,8(r29)
	PPC_STORE_U64(r29.u32 + 8, ctx.r9.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r9,16(r29)
	PPC_STORE_U64(r29.u32 + 16, ctx.r9.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r11,24(r29)
	PPC_STORE_U64(r29.u32 + 24, r11.u64);
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r24,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r24.u32);
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r10,656(r31)
	PPC_STORE_U32(r31.u32 + 656, ctx.r10.u32);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,660(r31)
	PPC_STORE_U32(r31.u32 + 660, r11.u32);
	// b 0x823e3860
	goto loc_823E3860;
loc_823E3848:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3908
	if (cr0.lt) goto loc_823E3908;
loc_823E3860:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e38e4
	if (cr6.eq) goto loc_823E38E4;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823e38e4
	if (cr6.eq) goto loc_823E38E4;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3894
	if (cr0.eq) goto loc_823E3894;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823e3898
	goto loc_823E3898;
loc_823E3894:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823E3898:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823e38d8
	if (cr6.eq) goto loc_823E38D8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,668(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x823e38d8
	if (cr0.eq) goto loc_823E38D8;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,668(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 668);
	// lwz r4,664(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 664);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// stw r29,40(r30)
	PPC_STORE_U32(r30.u32 + 40, r29.u32);
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r28,r30,12
	r28.s64 = r30.s64 + 12;
	// b 0x823e37f0
	goto loc_823E37F0;
loc_823E38D8:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x823e3908
	goto loc_823E3908;
loc_823E38E4:
	// li r11,1
	r11.s64 = 1;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3908
	if (cr0.lt) goto loc_823E3908;
	// mr r23,r24
	r23.u64 = r24.u64;
	// mr r30,r24
	r30.u64 = r24.u64;
loc_823E3908:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x823e391c
	if (cr6.eq) goto loc_823E391C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x823e1de0
	sub_823E1DE0(ctx, base);
loc_823E391C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823E3928"))) PPC_WEAK_FUNC(sub_823E3928);
PPC_FUNC_IMPL(__imp__sub_823E3928) {
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
	// addi r31,r30,640
	r31.s64 = r30.s64 + 640;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,672(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 672);
	// lwz r3,628(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// li r29,1
	r29.s64 = 1;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e3a9c
	if (cr0.lt) goto loc_823E3A9C;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r6,9
	cr6.compare<int32_t>(ctx.r6.s32, 9, xer);
	// bne cr6,0x823e3a7c
	if (!cr6.eq) goto loc_823E3A7C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r7,648(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 648);
	// stw r29,68(r30)
	PPC_STORE_U32(r30.u32 + 68, r29.u32);
	// addi r10,r11,12716
	ctx.r10.s64 = r11.s64 + 12716;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823E3978:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e399c
	if (cr0.eq) goto loc_823E399C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e3978
	if (cr6.eq) goto loc_823E3978;
loc_823E399C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e39b0
	if (!cr0.eq) goto loc_823E39B0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e1098
	sub_823E1098(ctx, base);
	// b 0x823e3aa0
	goto loc_823E3AA0;
loc_823E39B0:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,12708
	ctx.r10.s64 = r11.s64 + 12708;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823E39BC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e39e0
	if (cr0.eq) goto loc_823E39E0;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e39bc
	if (cr6.eq) goto loc_823E39BC;
loc_823E39E0:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e39f4
	if (!cr0.eq) goto loc_823E39F4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e1290
	sub_823E1290(ctx, base);
	// b 0x823e3aa0
	goto loc_823E3AA0;
loc_823E39F4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,12704
	ctx.r10.s64 = r11.s64 + 12704;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823E3A00:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e3a24
	if (cr0.eq) goto loc_823E3A24;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e3a00
	if (cr6.eq) goto loc_823E3A00;
loc_823E3A24:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e3a38
	if (!cr0.eq) goto loc_823E3A38;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2dc8
	sub_823E2DC8(ctx, base);
	// b 0x823e3aa0
	goto loc_823E3AA0;
loc_823E3A38:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r10,r11,12692
	ctx.r10.s64 = r11.s64 + 12692;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823E3A44:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e3a68
	if (cr0.eq) goto loc_823E3A68;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e3a44
	if (cr6.eq) goto loc_823E3A44;
loc_823E3A68:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e3a7c
	if (!cr0.eq) goto loc_823E3A7C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e2cc8
	sub_823E2CC8(ctx, base);
	// b 0x823e3aa0
	goto loc_823E3AA0;
loc_823E3A7C:
	// cmpwi cr6,r6,12
	cr6.compare<int32_t>(ctx.r6.s32, 12, xer);
	// beq cr6,0x823e3a98
	if (cr6.eq) goto loc_823E3A98;
	// cmpwi cr6,r6,13
	cr6.compare<int32_t>(ctx.r6.s32, 13, xer);
	// beq cr6,0x823e3a98
	if (cr6.eq) goto loc_823E3A98;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,628(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 628);
	// bl 0x823ec250
	sub_823EC250(ctx, base);
loc_823E3A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E3A9C:
	// stw r29,72(r30)
	PPC_STORE_U32(r30.u32 + 72, r29.u32);
loc_823E3AA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823E3AA8"))) PPC_WEAK_FUNC(sub_823E3AA8);
PPC_FUNC_IMPL(__imp__sub_823E3AA8) {
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
	// lwz r3,3032(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3032);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e34c8
	sub_823E34C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E3AF4"))) PPC_WEAK_FUNC(sub_823E3AF4);
PPC_FUNC_IMPL(__imp__sub_823E3AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E3AF8"))) PPC_WEAK_FUNC(sub_823E3AF8);
PPC_FUNC_IMPL(__imp__sub_823E3AF8) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	r31.s64 = 0;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// std r31,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r31.u64);
	// lwz r25,628(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 628);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3b60
	if (cr0.eq) goto loc_823E3B60;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r11,r11,12832
	r11.s64 = r11.s64 + 12832;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823e3b64
	goto loc_823E3B64;
loc_823E3B60:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_823E3B64:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823e3e24
	if (cr6.eq) goto loc_823E3E24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f30
	if (cr0.lt) goto loc_823E3F30;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3bb8
	if (cr0.eq) goto loc_823E3BB8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r11,r11,12824
	r11.s64 = r11.s64 + 12824;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823e3bbc
	goto loc_823E3BBC;
loc_823E3BB8:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_823E3BBC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823e3e24
	if (cr6.eq) goto loc_823E3E24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f30
	if (cr0.lt) goto loc_823E3F30;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3c10
	if (cr0.eq) goto loc_823E3C10;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r11,r11,12808
	r11.s64 = r11.s64 + 12808;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823e3c14
	goto loc_823E3C14;
loc_823E3C10:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_823E3C14:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823e3e24
	if (cr6.eq) goto loc_823E3E24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f30
	if (cr0.lt) goto loc_823E3F30;
	// li r28,2
	r28.s64 = 2;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r28.u32);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3c74
	if (cr0.eq) goto loc_823E3C74;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r11,r11,12792
	r11.s64 = r11.s64 + 12792;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823e3c78
	goto loc_823E3C78;
loc_823E3C74:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_823E3C78:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823e3e24
	if (cr6.eq) goto loc_823E3E24;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3c9c
	if (cr0.eq) goto loc_823E3C9C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e3ca0
	goto loc_823E3CA0;
loc_823E3C9C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823E3CA0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// beq cr6,0x823e3e24
	if (cr6.eq) goto loc_823E3E24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f30
	if (cr0.lt) goto loc_823E3F30;
	// li r11,2560
	r11.s64 = 2560;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3d04
	if (cr0.eq) goto loc_823E3D04;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r11,r11,12772
	r11.s64 = r11.s64 + 12772;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823e3d08
	goto loc_823E3D08;
loc_823E3D04:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_823E3D08:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823e3e24
	if (cr6.eq) goto loc_823E3E24;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3d2c
	if (cr0.eq) goto loc_823E3D2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e3d30
	goto loc_823E3D30;
loc_823E3D2C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823E3D30:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// beq cr6,0x823e3e24
	if (cr6.eq) goto loc_823E3E24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f30
	if (cr0.lt) goto loc_823E3F30;
	// li r11,2589
	r11.s64 = 2589;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3d94
	if (cr0.eq) goto loc_823E3D94;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r11,r11,12756
	r11.s64 = r11.s64 + 12756;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823e3d98
	goto loc_823E3D98;
loc_823E3D94:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_823E3D98:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x823e3e24
	if (cr6.eq) goto loc_823E3E24;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3dbc
	if (cr0.eq) goto loc_823E3DBC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e3dc0
	goto loc_823E3DC0;
loc_823E3DBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823E3DC0:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r3.u32);
	// beq cr6,0x823e3e24
	if (cr6.eq) goto loc_823E3E24;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f30
	if (cr0.lt) goto loc_823E3F30;
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e3e18
	if (cr0.eq) goto loc_823E3E18;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r31.u32);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r31.u32);
	// addi r11,r11,12748
	r11.s64 = r11.s64 + 12748;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r31.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// b 0x823e3e1c
	goto loc_823E3E1C;
loc_823E3E18:
	// mr r29,r31
	r29.u64 = r31.u64;
loc_823E3E1C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823e3e30
	if (!cr6.eq) goto loc_823E3E30;
loc_823E3E24:
	// lis r30,-32761
	r30.s64 = -2147024896;
	// ori r30,r30,14
	r30.u64 = r30.u64 | 14;
	// b 0x823e3f30
	goto loc_823E3F30;
loc_823E3E30:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e31a8
	sub_823E31A8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f30
	if (cr0.lt) goto loc_823E3F30;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r4,r11,12740
	ctx.r4.s64 = r11.s64 + 12740;
	// mr r29,r31
	r29.u64 = r31.u64;
	// bl 0x823e3298
	sub_823E3298(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f30
	if (cr0.lt) goto loc_823E3F30;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,200
	ctx.r5.s64 = 200;
	// addi r4,r11,12728
	ctx.r4.s64 = r11.s64 + 12728;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e3310
	sub_823E3310(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f30
	if (cr0.lt) goto loc_823E3F30;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823e3f2c
	if (cr6.eq) goto loc_823E3F2C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823eb050
	sub_823EB050(ctx, base);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// stw r11,628(r27)
	PPC_STORE_U32(r27.u32 + 628, r11.u32);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e3f24
	if (cr6.eq) goto loc_823E3F24;
	// addi r28,r27,24
	r28.s64 = r27.s64 + 24;
loc_823E3EA4:
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823e3ed8
	if (cr0.eq) goto loc_823E3ED8;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_823E3EB8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823e3eb8
	if (!cr6.eq) goto loc_823E3EB8;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(r11.u32, 0);
	// b 0x823e3edc
	goto loc_823E3EDC;
loc_823E3ED8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
loc_823E3EDC:
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823eb078
	sub_823EB078(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f54
	if (cr0.lt) goto loc_823E3F54;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x823e35b0
	sub_823E35B0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// blt 0x823e3f54
	if (cr0.lt) goto loc_823E3F54;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e3ea4
	if (!cr6.eq) goto loc_823E3EA4;
loc_823E3F24:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_823E3F2C:
	// mr r30,r31
	r30.u64 = r31.u64;
loc_823E3F30:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r25,628(r27)
	PPC_STORE_U32(r27.u32 + 628, r25.u32);
	// beq cr6,0x823e3f48
	if (cr6.eq) goto loc_823E3F48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823e1de0
	sub_823E1DE0(ctx, base);
loc_823E3F48:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd3c
	return;
loc_823E3F54:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// b 0x823e3f30
	goto loc_823E3F30;
}

__attribute__((alias("__imp__sub_823E3F60"))) PPC_WEAK_FUNC(sub_823E3F60);
PPC_FUNC_IMPL(__imp__sub_823E3F60) {
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
	// bl 0x823e34c8
	sub_823E34C8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E3FA8"))) PPC_WEAK_FUNC(sub_823E3FA8);
PPC_FUNC_IMPL(__imp__sub_823E3FA8) {
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
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r27,r31,640
	r27.s64 = r31.s64 + 640;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r11,672(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// ori r4,r11,12
	ctx.r4.u64 = r11.u64 | 12;
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e41cc
	if (cr0.lt) goto loc_823E41CC;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r26,1
	r26.s64 = 1;
	// cmpwi cr6,r11,10
	cr6.compare<int32_t>(r11.s32, 10, xer);
	// beq cr6,0x823e4014
	if (cr6.eq) goto loc_823E4014;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// beq cr6,0x823e400c
	if (cr6.eq) goto loc_823E400C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,12644
	ctx.r4.s64 = r11.s64 + 12644;
	// bl 0x823e3f60
	sub_823E3F60(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823e41cc
	goto loc_823E41CC;
loc_823E400C:
	// mr r25,r26
	r25.u64 = r26.u64;
	// b 0x823e4018
	goto loc_823E4018;
loc_823E4014:
	// li r25,0
	r25.s64 = 0;
loc_823E4018:
	// lwz r9,632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 632);
	// lwz r28,648(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 648);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne 0x823e4064
	if (!cr0.eq) goto loc_823E4064;
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e4064
	if (!cr6.eq) goto loc_823E4064;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1505
	ctx.r5.s64 = 1505;
	// addi r6,r11,12872
	ctx.r6.s64 = r11.s64 + 12872;
loc_823E4044:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r26,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r26.u32);
	// b 0x823e41cc
	goto loc_823E41CC;
loc_823E4064:
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e409c
	if (cr0.eq) goto loc_823E409C;
loc_823E4074:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823e4074
	if (!cr0.eq) goto loc_823E4074;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x823e409c
	if (cr6.lt) goto loc_823E409C;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1506
	ctx.r5.s64 = 1506;
	// addi r6,r11,12844
	ctx.r6.s64 = r11.s64 + 12844;
	// b 0x823e4044
	goto loc_823E4044;
loc_823E409C:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x823e40e0
	if (!cr6.eq) goto loc_823E40E0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x826a8b20
	sub_826A8B20(ctx, base);
	// cmpwi cr6,r3,-1
	cr6.compare<int32_t>(ctx.r3.s32, -1, xer);
	// beq cr6,0x823e40bc
	if (cr6.eq) goto loc_823E40BC;
	// rlwinm. r11,r3,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e40e0
	if (cr0.eq) goto loc_823E40E0;
loc_823E40BC:
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// addi r5,r11,26560
	ctx.r5.s64 = r11.s64 + 26560;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// bl 0x823df1b0
	sub_823DF1B0(ctx, base);
	// addi r28,r1,96
	r28.s64 = ctx.r1.s64 + 96;
loc_823E40E0:
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e4100
	if (cr0.eq) goto loc_823E4100;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 72);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823e4100
	if (cr6.eq) goto loc_823E4100;
	// lwz r29,84(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// b 0x823e4104
	goto loc_823E4104;
loc_823E4100:
	// li r29,0
	r29.s64 = 0;
loc_823E4104:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e4124
	if (cr0.eq) goto loc_823E4124;
	// bl 0x823e08c0
	sub_823E08C0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x823e4128
	goto loc_823E4128;
loc_823E4124:
	// li r30,0
	r30.s64 = 0;
loc_823E4128:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823e413c
	if (!cr6.eq) goto loc_823E413C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e41cc
	goto loc_823E41CC;
loc_823E413C:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// lwz r9,632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 632);
	// addi r8,r31,24
	ctx.r8.s64 = r31.s64 + 24;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823e09f8
	sub_823E09F8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bge 0x823e4190
	if (!cr0.lt) goto loc_823E4190;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r26,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r26.u32);
	// stw r26,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r26.u32);
	// bl 0x823e1ea0
	sub_823E1EA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x823e41cc
	goto loc_823E41CC;
loc_823E4190:
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// stw r11,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r11.u32);
	// lwz r11,692(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 692);
	// stw r30,624(r31)
	PPC_STORE_U32(r31.u32 + 624, r30.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e41c8
	if (cr0.eq) goto loc_823E41C8;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e41c8
	if (cr0.eq) goto loc_823E41C8;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,76(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// subf r6,r5,r11
	ctx.r6.s64 = r11.s64 - ctx.r5.s64;
	// bl 0x82490de8
	sub_82490DE8(ctx, base);
loc_823E41C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E41CC:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823E41D4"))) PPC_WEAK_FUNC(sub_823E41D4);
PPC_FUNC_IMPL(__imp__sub_823E41D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E41D8"))) PPC_WEAK_FUNC(sub_823E41D8);
PPC_FUNC_IMPL(__imp__sub_823E41D8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// lwz r3,680(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 680);
	// mr r26,r8
	r26.u64 = ctx.r8.u64;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e42d0
	if (cr0.lt) goto loc_823E42D0;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x823e4218
	if (!cr6.eq) goto loc_823E4218;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r30,r11,9120
	r30.s64 = r11.s64 + 9120;
loc_823E4218:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82121108
	sub_82121108(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e4234
	if (cr0.eq) goto loc_823E4234;
	// bl 0x823e08c0
	sub_823E08C0(ctx, base);
	// b 0x823e4238
	goto loc_823E4238;
loc_823E4234:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E4238:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,624(r31)
	PPC_STORE_U32(r31.u32 + 624, ctx.r3.u32);
	// bne cr6,0x823e4250
	if (!cr6.eq) goto loc_823E4250;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x823e42d0
	goto loc_823E42D0;
loc_823E4250:
	// addi r8,r31,24
	ctx.r8.s64 = r31.s64 + 24;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x823e0c08
	sub_823E0C08(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e42d0
	if (cr0.lt) goto loc_823E42D0;
	// lwz r11,692(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 692);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e42ac
	if (cr0.eq) goto loc_823E42AC;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e42ac
	if (cr0.eq) goto loc_823E42AC;
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// extsw r5,r9
	ctx.r5.s64 = ctx.r9.s32;
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// subf r6,r9,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x82490de8
	sub_82490DE8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e42d0
	if (cr0.lt) goto loc_823E42D0;
loc_823E42AC:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e3af8
	sub_823E3AF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e42d0
	if (cr0.lt) goto loc_823E42D0;
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r26,632(r31)
	PPC_STORE_U32(r31.u32 + 632, r26.u32);
	// stw r11,628(r31)
	PPC_STORE_U32(r31.u32 + 628, r11.u32);
loc_823E42D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823E42D8"))) PPC_WEAK_FUNC(sub_823E42D8);
PPC_FUNC_IMPL(__imp__sub_823E42D8) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// li r26,1
	r26.s64 = 1;
	// cmplwi cr6,r30,16
	cr6.compare<uint32_t>(r30.u32, 16, xer);
	// ble cr6,0x823e4304
	if (!cr6.gt) goto loc_823E4304;
	// stw r26,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r26.u32);
loc_823E4304:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e47e0
	if (!cr6.eq) goto loc_823E47E0;
	// rlwinm r11,r30,2,0,29
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subfic r9,r30,16
	xer.ca = r30.u32 <= 16;
	ctx.r9.s64 = 16 - r30.s64;
	// add r29,r11,r10
	r29.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// mtctr r30
	ctr.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823e4378
	if (cr6.eq) goto loc_823E4378;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_823E4340:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e43a8
	if (cr0.eq) goto loc_823E43A8;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r9,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// bdnz 0x823e4340
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823E4340;
loc_823E4378:
	// cmplwi cr6,r27,46
	cr6.compare<uint32_t>(r27.u32, 46, xer);
	// bgt cr6,0x823e47b0
	if (cr6.gt) goto loc_823E47B0;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,11960
	r12.s64 = r12.s64 + 11960;
	// rlwinm r0,r27,1,0,30
	r0.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r0,r12,r0
	r0.u64 = PPC_LOAD_U16(r12.u32 + r0.u32);
	// lis r12,-32194
	r12.s64 = -2109865984;
	// addi r12,r12,17320
	r12.s64 = r12.s64 + 17320;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r27.u64) {
	case 0:
		goto loc_823E43C8;
	case 1:
		goto loc_823E43E0;
	case 2:
		goto loc_823E43F4;
	case 3:
		goto loc_823E4424;
	case 4:
		goto loc_823E446C;
	case 5:
		goto loc_823E4478;
	case 6:
		goto loc_823E4484;
	case 7:
		goto loc_823E4498;
	case 8:
		goto loc_823E44B8;
	case 9:
		goto loc_823E44E0;
	case 10:
		goto loc_823E44F4;
	case 11:
		goto loc_823E4500;
	case 12:
		goto loc_823E450C;
	case 13:
		goto loc_823E4528;
	case 14:
		goto loc_823E4538;
	case 15:
		goto loc_823E4544;
	case 16:
		goto loc_823E4544;
	case 17:
		goto loc_823E454C;
	case 18:
		goto loc_823E4570;
	case 19:
		goto loc_823E4544;
	case 20:
		goto loc_823E45A0;
	case 21:
		goto loc_823E45B8;
	case 22:
		goto loc_823E4544;
	case 23:
		goto loc_823E4544;
	case 24:
		goto loc_823E45C8;
	case 25:
		goto loc_823E45E0;
	case 26:
		goto loc_823E4544;
	case 27:
		goto loc_823E4624;
	case 28:
		goto loc_823E4644;
	case 29:
		goto loc_823E4544;
	case 30:
		goto loc_823E465C;
	case 31:
		goto loc_823E467C;
	case 32:
		goto loc_823E4694;
	case 33:
		goto loc_823E46B4;
	case 34:
		goto loc_823E4544;
	case 35:
		goto loc_823E46CC;
	case 36:
		goto loc_823E46E4;
	case 37:
		goto loc_823E4544;
	case 38:
		goto loc_823E4708;
	case 39:
		goto loc_823E4544;
	case 40:
		goto loc_823E4734;
	case 41:
		goto loc_823E4544;
	case 42:
		goto loc_823E4760;
	case 43:
		goto loc_823E4544;
	case 44:
		goto loc_823E4780;
	case 45:
		goto loc_823E4780;
	case 46:
		goto loc_823E4780;
	default:
		__builtin_unreachable();
	}
loc_823E43A8:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r6,r11,13028
	ctx.r6.s64 = r11.s64 + 13028;
loc_823E43B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// stw r26,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r26.u32);
	// b 0x823e47e0
	goto loc_823E47E0;
loc_823E43C8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x823e35b0
	sub_823E35B0(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E43E0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x823e2ad8
	sub_823E2AD8(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E43F4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lwz r11,640(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e47b0
	if (cr6.eq) goto loc_823E47B0;
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4424:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// stw r11,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, r11.u32);
	// lwz r11,640(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 640);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e4458
	if (cr6.eq) goto loc_823E4458;
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r10.u32);
loc_823E4458:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823e47b0
	if (cr6.eq) goto loc_823E47B0;
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// stw r9,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r9.u32);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E446C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e3fa8
	sub_823E3FA8(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4478:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e0db8
	sub_823E0DB8(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4484:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
loc_823E448C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e2b88
	sub_823E2B88(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4498:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x823e1bf8
	sub_823E1BF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823e448c
	goto loc_823E448C;
loc_823E44B8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x823e1bf8
	sub_823E1BF8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// b 0x823e448c
	goto loc_823E448C;
loc_823E44E0:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x823e0f20
	sub_823E0F20(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E44F4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e0fe0
	sub_823E0FE0(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4500:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e2c40
	sub_823E2C40(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E450C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e2b88
	sub_823E2B88(ctx, base);
loc_823E4518:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// bl 0x823ec250
	sub_823EC250(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4528:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e0f20
	sub_823E0F20(ctx, base);
	// b 0x823e4518
	goto loc_823E4518;
loc_823E4538:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e3928
	sub_823E3928(ctx, base);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4544:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E454C:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,2
	r11.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x823e33d0
	sub_823E33D0(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4570:
	// lwz r30,80(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,2
	r11.s64 = 2;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r28,r30
	r28.u64 = r30.u64;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r11,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r11.u32);
	// bl 0x823e1bf8
	sub_823E1BF8(ctx, base);
	// stw r3,24(r30)
	PPC_STORE_U32(r30.u32 + 24, ctx.r3.u32);
	// stw r26,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r26.u32);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E45A0:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
loc_823E45A8:
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_823E45B0:
	// stw r11,24(r28)
	PPC_STORE_U32(r28.u32 + 24, r11.u32);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E45B8:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// neg r11,r11
	r11.s64 = -r11.s64;
	// b 0x823e45b0
	goto loc_823E45B0;
loc_823E45C8:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// b 0x823e45b0
	goto loc_823E45B0;
loc_823E45E0:
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e4604
	if (cr0.eq) goto loc_823E4604;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// twllei r11,0
	// divwu r11,r10,r11
	r11.u32 = ctx.r10.u32 / r11.u32;
	// b 0x823e45b0
	goto loc_823E45B0;
loc_823E4604:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1503
	ctx.r5.s64 = 1503;
	// addi r6,r11,12984
	ctx.r6.s64 = r11.s64 + 12984;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// stw r26,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r26.u32);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4624:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_823E4638:
	// mr r28,r11
	r28.u64 = r11.u64;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// b 0x823e47b0
	goto loc_823E47B0;
loc_823E4644:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// b 0x823e45b0
	goto loc_823E45B0;
loc_823E465C:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// subfc r11,r11,r10
	xer.ca = ctx.r10.u32 >= r11.u32;
	r11.s64 = ctx.r10.s64 - r11.s64;
loc_823E4670:
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// b 0x823e45b0
	goto loc_823E45B0;
loc_823E467C:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// subfc r11,r10,r11
	xer.ca = r11.u32 >= ctx.r10.u32;
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x823e4670
	goto loc_823E4670;
loc_823E4694:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// subfc r10,r9,r10
	xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_823E46A8:
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x823e4638
	goto loc_823E4638;
loc_823E46B4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lwz r10,24(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// subfc r10,r10,r9
	xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// b 0x823e46a8
	goto loc_823E46A8;
loc_823E46CC:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// b 0x823e45a8
	goto loc_823E45A8;
loc_823E46E4:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// b 0x823e45b0
	goto loc_823E45B0;
loc_823E4708:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e472c
	if (cr6.eq) goto loc_823E472C;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r11,r26
	r11.u64 = r26.u64;
	// bne cr6,0x823e45b0
	if (!cr6.eq) goto loc_823E45B0;
loc_823E472C:
	// li r11,0
	r11.s64 = 0;
	// b 0x823e45b0
	goto loc_823E45B0;
loc_823E4734:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e4758
	if (!cr6.eq) goto loc_823E4758;
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x823e45b0
	if (cr6.eq) goto loc_823E45B0;
loc_823E4758:
	// mr r11,r26
	r11.u64 = r26.u64;
	// b 0x823e45b0
	goto loc_823E45B0;
loc_823E4760:
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne cr6,0x823e4778
	if (!cr6.eq) goto loc_823E4778;
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_823E4778:
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// b 0x823e45b0
	goto loc_823E45B0;
loc_823E4780:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e47a0
	if (cr0.eq) goto loc_823E47A0;
	// addi r4,r31,640
	ctx.r4.s64 = r31.s64 + 640;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x823e47a4
	goto loc_823E47A4;
loc_823E47A0:
	// li r28,0
	r28.s64 = 0;
loc_823E47A4:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e1d78
	sub_823E1D78(ctx, base);
loc_823E47B0:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e47e0
	if (!cr6.eq) goto loc_823E47E0;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e47e8
	if (cr0.eq) goto loc_823E47E8;
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r11.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r28.u32);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_823E47DC:
	// stw r3,100(r31)
	PPC_STORE_U32(r31.u32 + 100, ctx.r3.u32);
loc_823E47E0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd40
	return;
loc_823E47E8:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e4810
	if (cr0.eq) goto loc_823E4810;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r6,r11,12976
	ctx.r6.s64 = r11.s64 + 12976;
	// bl 0x82409578
	sub_82409578(ctx, base);
	// b 0x823e4814
	goto loc_823E4814;
loc_823E4810:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E4814:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823e47dc
	if (!cr6.eq) goto loc_823E47DC;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r6,r11,12944
	ctx.r6.s64 = r11.s64 + 12944;
	// b 0x823e43b0
	goto loc_823E43B0;
}

__attribute__((alias("__imp__sub_823E4828"))) PPC_WEAK_FUNC(sub_823E4828);
PPC_FUNC_IMPL(__imp__sub_823E4828) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// addi r11,r31,1032
	r11.s64 = r31.s64 + 1032;
	// addi r24,r31,32
	r24.s64 = r31.s64 + 32;
	// li r26,-1
	r26.s64 = -1;
	// mr r30,r25
	r30.u64 = r25.u64;
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r25,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r25.u32);
	// addi r27,r11,9724
	r27.s64 = r11.s64 + 9724;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r24,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r24.u32);
	// sth r25,0(r24)
	PPC_STORE_U16(r24.u32 + 0, r25.u16);
	// addi r23,r11,12644
	r23.s64 = r11.s64 + 12644;
loc_823E4874:
	// rlwinm r29,r30,1,0,30
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r27,220
	r11.s64 = r27.s64 + 220;
	// lhax r11,r29,r11
	r11.s64 = int16_t(PPC_LOAD_U16(r29.u32 + r11.u32));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823e4970
	if (!cr0.eq) goto loc_823E4970;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x823e48ac
	if (!cr6.lt) goto loc_823E48AC;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3032);
	// bl 0x823e2300
	sub_823E2300(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bge 0x823e48ac
	if (!cr0.lt) goto loc_823E48AC;
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
loc_823E48AC:
	// addi r11,r27,380
	r11.s64 = r27.s64 + 380;
	// lhax r10,r29,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r29.u32 + r11.u32));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823e4934
	if (cr0.eq) goto loc_823E4934;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,369
	cr6.compare<uint32_t>(ctx.r10.u32, 369, xer);
	// bgt cr6,0x823e4934
	if (cr6.gt) goto loc_823E4934;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,1476
	ctx.r9.s64 = r27.s64 + 1476;
	// lhax r9,r10,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x823e4934
	if (!cr6.eq) goto loc_823E4934;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = r31.s64 + 1030;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x823e4dc4
	if (!cr6.lt) goto loc_823E4DC4;
	// addi r9,r27,732
	ctx.r9.s64 = r27.s64 + 732;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhax r30,r10,r9
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x823e4874
	if (!cr0.gt) goto loc_823E4874;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x823e4874
	goto loc_823E4874;
loc_823E4934:
	// addi r11,r27,540
	r11.s64 = r27.s64 + 540;
	// lhax r10,r29,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r29.u32 + r11.u32));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823e4cec
	if (cr0.eq) goto loc_823E4CEC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// cmplwi cr6,r10,369
	cr6.compare<uint32_t>(ctx.r10.u32, 369, xer);
	// bgt cr6,0x823e4cec
	if (cr6.gt) goto loc_823E4CEC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,1476
	ctx.r9.s64 = r27.s64 + 1476;
	// lhax r9,r10,r9
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bne cr6,0x823e4cec
	if (!cr6.eq) goto loc_823E4CEC;
	// addi r11,r27,732
	r11.s64 = r27.s64 + 732;
	// lhax r11,r10,r11
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r11.u32));
loc_823E4970:
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r9,r27,124
	ctx.r9.s64 = r27.s64 + 124;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplwi cr6,r11,46
	cr6.compare<uint32_t>(r11.u32, 46, xer);
	// lhax r29,r30,r9
	r29.s64 = int16_t(PPC_LOAD_U16(r30.u32 + ctx.r9.u32));
	// rlwinm r28,r29,2,0,29
	r28.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - r28.s64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// bgt cr6,0x823e4bd8
	if (cr6.gt) goto loc_823E4BD8;
	// lis r12,-32249
	r12.s64 = -2113470464;
	// addi r12,r12,12056
	r12.s64 = r12.s64 + 12056;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32194
	r12.s64 = -2109865984;
	// addi r12,r12,18884
	r12.s64 = r12.s64 + 18884;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		goto loc_823E49C4;
	case 1:
		goto loc_823E49D0;
	case 2:
		goto loc_823E49DC;
	case 3:
		goto loc_823E49E8;
	case 4:
		goto loc_823E49F4;
	case 5:
		goto loc_823E49FC;
	case 6:
		goto loc_823E4A04;
	case 7:
		goto loc_823E4A10;
	case 8:
		goto loc_823E4A1C;
	case 9:
		goto loc_823E4A28;
	case 10:
		goto loc_823E4A34;
	case 11:
		goto loc_823E4A3C;
	case 12:
		goto loc_823E4A44;
	case 13:
		goto loc_823E4A4C;
	case 14:
		goto loc_823E4A54;
	case 15:
		goto loc_823E4A5C;
	case 16:
		goto loc_823E4A68;
	case 17:
		goto loc_823E4A74;
	case 18:
		goto loc_823E4A80;
	case 19:
		goto loc_823E4A8C;
	case 20:
		goto loc_823E4A98;
	case 21:
		goto loc_823E4AA4;
	case 22:
		goto loc_823E4AB0;
	case 23:
		goto loc_823E4ABC;
	case 24:
		goto loc_823E4AC8;
	case 25:
		goto loc_823E4AD4;
	case 26:
		goto loc_823E4AE0;
	case 27:
		goto loc_823E4AEC;
	case 28:
		goto loc_823E4AF8;
	case 29:
		goto loc_823E4B04;
	case 30:
		goto loc_823E4B10;
	case 31:
		goto loc_823E4B1C;
	case 32:
		goto loc_823E4B28;
	case 33:
		goto loc_823E4B34;
	case 34:
		goto loc_823E4B40;
	case 35:
		goto loc_823E4B4C;
	case 36:
		goto loc_823E4B58;
	case 37:
		goto loc_823E4B64;
	case 38:
		goto loc_823E4B70;
	case 39:
		goto loc_823E4B7C;
	case 40:
		goto loc_823E4B88;
	case 41:
		goto loc_823E4B94;
	case 42:
		goto loc_823E4BA0;
	case 43:
		goto loc_823E4BAC;
	case 44:
		goto loc_823E4BB8;
	case 45:
		goto loc_823E4BC0;
	case 46:
		goto loc_823E4BC8;
	default:
		__builtin_unreachable();
	}
loc_823E49C4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E49D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E49DC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E49E8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,3
	ctx.r4.s64 = 3;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E49F4:
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x823e4bcc
	goto loc_823E4BCC;
loc_823E49FC:
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x823e4bcc
	goto loc_823E4BCC;
loc_823E4A04:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4A10:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,7
	ctx.r4.s64 = 7;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4A1C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4A28:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,9
	ctx.r4.s64 = 9;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4A34:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x823e4bcc
	goto loc_823E4BCC;
loc_823E4A3C:
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x823e4bcc
	goto loc_823E4BCC;
loc_823E4A44:
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x823e4bcc
	goto loc_823E4BCC;
loc_823E4A4C:
	// li r4,13
	ctx.r4.s64 = 13;
	// b 0x823e4bcc
	goto loc_823E4BCC;
loc_823E4A54:
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x823e4bcc
	goto loc_823E4BCC;
loc_823E4A5C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,15
	ctx.r4.s64 = 15;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4A68:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,16
	ctx.r4.s64 = 16;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4A74:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4A80:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,18
	ctx.r4.s64 = 18;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4A8C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,19
	ctx.r4.s64 = 19;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4A98:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4AA4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4AB0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4ABC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,23
	ctx.r4.s64 = 23;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4AC8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,24
	ctx.r4.s64 = 24;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4AD4:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4AE0:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4AEC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4AF8:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,28
	ctx.r4.s64 = 28;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B04:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,29
	ctx.r4.s64 = 29;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B10:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,30
	ctx.r4.s64 = 30;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B1C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,31
	ctx.r4.s64 = 31;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B28:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,32
	ctx.r4.s64 = 32;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B34:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,33
	ctx.r4.s64 = 33;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B40:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B4C:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B58:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,36
	ctx.r4.s64 = 36;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B64:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,37
	ctx.r4.s64 = 37;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B70:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,38
	ctx.r4.s64 = 38;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B7C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,39
	ctx.r4.s64 = 39;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B88:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,40
	ctx.r4.s64 = 40;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4B94:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,41
	ctx.r4.s64 = 41;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4BA0:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,42
	ctx.r4.s64 = 42;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4BAC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// b 0x823e4bd0
	goto loc_823E4BD0;
loc_823E4BB8:
	// li r4,44
	ctx.r4.s64 = 44;
	// b 0x823e4bcc
	goto loc_823E4BCC;
loc_823E4BC0:
	// li r4,45
	ctx.r4.s64 = 45;
	// b 0x823e4bcc
	goto loc_823E4BCC;
loc_823E4BC8:
	// li r4,46
	ctx.r4.s64 = 46;
loc_823E4BCC:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823E4BD0:
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3032);
	// bl 0x823e42d8
	sub_823E42D8(ctx, base);
loc_823E4BD8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r27,28
	ctx.r8.s64 = r27.s64 + 28;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r28,r9
	ctx.r10.s64 = ctx.r9.s64 - r28.s64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lha r11,0(r11)
	r11.s64 = int16_t(PPC_LOAD_U16(r11.u32 + 0));
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lhax r10,r30,r8
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(r30.u32 + ctx.r8.u32));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823e4c74
	if (!cr0.eq) goto loc_823E4C74;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x823e4c74
	if (!cr6.eq) goto loc_823E4C74;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r10,15
	ctx.r10.s64 = 15;
	// li r30,15
	r30.s64 = 15;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// sth r10,0(r11)
	PPC_STORE_U16(r11.u32 + 0, ctx.r10.u16);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x823e4c60
	if (!cr6.lt) goto loc_823E4C60;
	// lwz r3,3032(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 3032);
	// bl 0x823e2300
	sub_823E2300(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// bge 0x823e4c60
	if (!cr0.lt) goto loc_823E4C60;
	// stw r25,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r25.u32);
loc_823E4C60:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e4874
	if (!cr6.eq) goto loc_823E4874;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e4dd8
	goto loc_823E4DD8;
loc_823E4C74:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r27,700
	ctx.r10.s64 = r27.s64 + 700;
	// lhax r10,r9,r10
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32));
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823e4cb4
	if (cr0.eq) goto loc_823E4CB4;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// cmplwi cr6,r10,369
	cr6.compare<uint32_t>(ctx.r10.u32, 369, xer);
	// bgt cr6,0x823e4cb4
	if (cr6.gt) goto loc_823E4CB4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r27,1476
	ctx.r8.s64 = r27.s64 + 1476;
	// lhax r8,r10,r8
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32));
	// cmpw cr6,r8,r11
	cr6.compare<int32_t>(ctx.r8.s32, r11.s32, xer);
	// bne cr6,0x823e4cb4
	if (!cr6.eq) goto loc_823E4CB4;
	// addi r11,r27,732
	r11.s64 = r27.s64 + 732;
	// lhax r30,r10,r11
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r11.u32));
	// b 0x823e4cb8
	goto loc_823E4CB8;
loc_823E4CB4:
	// lhax r30,r9,r27
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + r27.u32));
loc_823E4CB8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r10,r31,1030
	ctx.r10.s64 = r31.s64 + 1030;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x823e4dc4
	if (!cr6.lt) goto loc_823E4DC4;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
loc_823E4CD8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// b 0x823e4874
	goto loc_823E4874;
loc_823E4CEC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e4d10
	if (!cr6.eq) goto loc_823E4D10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x823e3aa8
	sub_823E3AA8(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_823E4D10:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bge cr6,0x823e4db0
	if (!cr6.lt) goto loc_823E4DB0;
	// li r11,3
	r11.s64 = 3;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_823E4D24:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r11,r27,380
	r11.s64 = r27.s64 + 380;
	// lha r10,0(r9)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 0));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhax r11,r10,r11
	r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + r11.u32));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823e4d60
	if (cr0.eq) goto loc_823E4D60;
	// addi r10,r11,256
	ctx.r10.s64 = r11.s64 + 256;
	// cmplwi cr6,r10,369
	cr6.compare<uint32_t>(ctx.r10.u32, 369, xer);
	// bgt cr6,0x823e4d60
	if (cr6.gt) goto loc_823E4D60;
	// addi r11,r27,1476
	r11.s64 = r27.s64 + 1476;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r8,r11
	r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + r11.u32);
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// beq cr6,0x823e4d80
	if (cr6.eq) goto loc_823E4D80;
loc_823E4D60:
	// cmplw cr6,r9,r24
	cr6.compare<uint32_t>(ctx.r9.u32, r24.u32, xer);
	// ble cr6,0x823e4dd4
	if (!cr6.gt) goto loc_823E4DD4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r9,-2
	ctx.r10.s64 = ctx.r9.s64 + -2;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x823e4d24
	goto loc_823E4D24;
loc_823E4D80:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r9,r31,1030
	ctx.r9.s64 = r31.s64 + 1030;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x823e4dc4
	if (!cr6.lt) goto loc_823E4DC4;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r27,732
	ctx.r9.s64 = r27.s64 + 732;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// lhax r30,r10,r9
	r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// sth r30,0(r11)
	PPC_STORE_U16(r11.u32 + 0, r30.u16);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// b 0x823e4cd8
	goto loc_823E4CD8;
loc_823E4DB0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e4dd4
	if (cr6.eq) goto loc_823E4DD4;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// b 0x823e4874
	goto loc_823E4874;
loc_823E4DC4:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,13060
	ctx.r4.s64 = r11.s64 + 13060;
	// bl 0x823e3aa8
	sub_823E3AA8(ctx, base);
loc_823E4DD4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823E4DD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_823E4DE0"))) PPC_WEAK_FUNC(sub_823E4DE0);
PPC_FUNC_IMPL(__imp__sub_823E4DE0) {
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
	// stwu r1,-3232(r1)
	ea = -3232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e5194
	if (!cr6.eq) goto loc_823E5194;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// addi r22,r11,9120
	r22.s64 = r11.s64 + 9120;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r24,1
	r24.s64 = 1;
	// addi r26,r11,12596
	r26.s64 = r11.s64 + 12596;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r21,12
	r21.s64 = 12;
	// addi r27,r11,13160
	r27.s64 = r11.s64 + 13160;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r23,r11,13108
	r23.s64 = r11.s64 + 13108;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r25,r11,13104
	r25.s64 = r11.s64 + 13104;
loc_823E4E34:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e4e4c
	if (cr0.eq) goto loc_823E4E4C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e51c0
	if (cr6.eq) goto loc_823E51C0;
loc_823E4E4C:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823e4eac
	if (cr0.eq) goto loc_823E4EAC;
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r9,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r9.u64);
	// ld r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r9,8(r29)
	PPC_STORE_U64(r29.u32 + 8, ctx.r9.u64);
	// ld r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r9,16(r29)
	PPC_STORE_U64(r29.u32 + 16, ctx.r9.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r11,24(r29)
	PPC_STORE_U64(r29.u32 + 24, r11.u64);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r11.u32);
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, r28.u32);
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r28.u32);
	// b 0x823e4ec4
	goto loc_823E4EC4;
loc_823E4EAC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e52c8
	if (cr0.lt) goto loc_823E52C8;
loc_823E4EC4:
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x823e5064
	if (!cr6.eq) goto loc_823E5064;
	// addi r10,r29,8
	ctx.r10.s64 = r29.s64 + 8;
	// mr r11,r25
	r11.u64 = r25.u64;
loc_823E4ED8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e4efc
	if (cr0.eq) goto loc_823E4EFC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e4ed8
	if (cr6.eq) goto loc_823E4ED8;
loc_823E4EFC:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e5064
	if (!cr0.eq) goto loc_823E5064;
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e5064
	if (cr6.eq) goto loc_823E5064;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// li r5,3036
	ctx.r5.s64 = 3036;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r24,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r24.u32);
	// stw r28,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r28.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r31,3128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 3128, r31.u32);
	// bl 0x823e4828
	sub_823E4828(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823e4f4c
	if (cr0.eq) goto loc_823E4F4C;
	// stw r24,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r24.u32);
loc_823E4F4C:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// stw r28,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e4fc4
	if (!cr6.eq) goto loc_823E4FC4;
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e4fc4
	if (!cr6.eq) goto loc_823E4FC4;
	// addi r30,r31,640
	r30.s64 = r31.s64 + 640;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e52c8
	if (cr0.lt) goto loc_823E52C8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,12
	cr6.compare<int32_t>(r11.s32, 12, xer);
	// beq cr6,0x823e4fc0
	if (cr6.eq) goto loc_823E4FC0;
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823e4fc0
	if (cr6.eq) goto loc_823E4FC0;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e4fb8
	if (cr6.eq) goto loc_823E4FB8;
	// li r5,1501
	ctx.r5.s64 = 1501;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
loc_823E4FB8:
	// stw r24,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r24.u32);
	// b 0x823e4fc4
	goto loc_823E4FC4;
loc_823E4FC0:
	// stw r24,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r24.u32);
loc_823E4FC4:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x823e4ffc
	if (!cr6.eq) goto loc_823E4FFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// bl 0x823ec250
	sub_823EC250(ctx, base);
	// addi r5,r31,640
	ctx.r5.s64 = r31.s64 + 640;
	// lwz r4,672(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 672);
	// lwz r3,628(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// stw r28,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r28.u32);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e52c8
	if (cr0.lt) goto loc_823E52C8;
	// stw r24,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r24.u32);
loc_823E4FFC:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r10,624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// stw r10,628(r31)
	PPC_STORE_U32(r31.u32 + 628, ctx.r10.u32);
	// beq 0x823e5188
	if (cr0.eq) goto loc_823E5188;
	// addi r11,r31,640
	r11.s64 = r31.s64 + 640;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r29)
	PPC_STORE_U64(r29.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r10,8(r29)
	PPC_STORE_U64(r29.u32 + 8, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r10,16(r29)
	PPC_STORE_U64(r29.u32 + 16, ctx.r10.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r11,24(r29)
	PPC_STORE_U64(r29.u32 + 24, r11.u64);
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e504c
	if (cr6.eq) goto loc_823E504C;
	// stw r21,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r21.u32);
loc_823E504C:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e51c8
	if (cr6.eq) goto loc_823E51C8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823e52c8
	goto loc_823E52C8;
loc_823E5064:
	// cmpwi cr6,r7,13
	cr6.compare<int32_t>(ctx.r7.s32, 13, xer);
	// beq cr6,0x823e51d0
	if (cr6.eq) goto loc_823E51D0;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e50b8
	if (cr6.eq) goto loc_823E50B8;
	// cmpwi cr6,r7,9
	cr6.compare<int32_t>(ctx.r7.s32, 9, xer);
	// bne cr6,0x823e50b8
	if (!cr6.eq) goto loc_823E50B8;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e1bf8
	sub_823E1BF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x823e50b8
	if (cr0.eq) goto loc_823E50B8;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823e5370
	sub_823E5370(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x823e5188
	if (!cr0.eq) goto loc_823E5188;
loc_823E50B8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x823e5168
	if (!cr6.eq) goto loc_823E5168;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
loc_823E50D0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e50f4
	if (cr0.eq) goto loc_823E50F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e50d0
	if (cr6.eq) goto loc_823E50D0;
loc_823E50F4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e5120
	if (!cr0.eq) goto loc_823E5120;
	// li r11,10
	r11.s64 = 10;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// bne 0x823e5168
	if (!cr0.eq) goto loc_823E5168;
	// stw r22,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r22.u32);
	// b 0x823e5168
	goto loc_823E5168;
loc_823E5120:
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_823E5128:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e514c
	if (cr0.eq) goto loc_823E514C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e5128
	if (cr6.eq) goto loc_823E5128;
loc_823E514C:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e5168
	if (!cr0.eq) goto loc_823E5168;
	// li r11,2
	r11.s64 = 2;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
loc_823E5168:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// subf r11,r21,r11
	r11.s64 = r11.s64 - r21.s64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// bne cr6,0x823e523c
	if (!cr6.eq) goto loc_823E523C;
loc_823E5188:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823e4e34
	if (cr6.eq) goto loc_823E4E34;
loc_823E5194:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_823E519C:
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// stw r11,16(r29)
	PPC_STORE_U32(r29.u32 + 16, r11.u32);
	// lwz r11,628(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 628);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// li r11,13
	r11.s64 = 13;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// b 0x823e52c8
	goto loc_823E52C8;
loc_823E51C0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x823e519c
	goto loc_823E519C;
loc_823E51C8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// b 0x823e52c8
	goto loc_823E52C8;
loc_823E51D0:
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e51f8
	if (cr6.eq) goto loc_823E51F8;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1502
	ctx.r5.s64 = 1502;
	// addi r6,r11,13080
	ctx.r6.s64 = r11.s64 + 13080;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,24
	ctx.r3.s64 = r31.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
loc_823E51F8:
	// lwz r30,624(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// lwz r11,92(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e52c4
	if (cr6.eq) goto loc_823E52C4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,624(r31)
	PPC_STORE_U32(r31.u32 + 624, r11.u32);
	// stw r28,92(r30)
	PPC_STORE_U32(r30.u32 + 92, r28.u32);
	// bl 0x823e1ea0
	sub_823E1EA0(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// lwz r11,624(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 624);
	// stw r11,628(r31)
	PPC_STORE_U32(r31.u32 + 628, r11.u32);
	// stw r21,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r21.u32);
	// stw r24,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r24.u32);
	// b 0x823e52c4
	goto loc_823E52C4;
loc_823E523C:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e52c4
	if (cr0.eq) goto loc_823E52C4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823e52c4
	if (cr6.eq) goto loc_823E52C4;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x823e52ac
	if (!cr6.eq) goto loc_823E52AC;
	// lbz r10,9(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 9);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823e52ac
	if (!cr6.eq) goto loc_823E52AC;
	// lbz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplwi cr6,r10,123
	cr6.compare<uint32_t>(ctx.r10.u32, 123, xer);
	// bne cr6,0x823e5284
	if (!cr6.eq) goto loc_823E5284;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_823E5284:
	// lbz r11,8(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 8);
	// cmplwi cr6,r11,125
	cr6.compare<uint32_t>(r11.u32, 125, xer);
	// bne cr6,0x823e52ac
	if (!cr6.eq) goto loc_823E52AC;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823e52ac
	if (cr6.eq) goto loc_823E52AC;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
loc_823E52AC:
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e52c4
	if (!cr6.eq) goto loc_823E52C4;
	// li r11,13
	r11.s64 = 13;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_823E52C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E52C8:
	// addi r1,r1,3232
	ctx.r1.s64 = ctx.r1.s64 + 3232;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_823E52D0"))) PPC_WEAK_FUNC(sub_823E52D0);
PPC_FUNC_IMPL(__imp__sub_823E52D0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e5308
	if (!cr6.eq) goto loc_823E5308;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823e535c
	goto loc_823E535C;
loc_823E52FC:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823e5320
	if (cr6.eq) goto loc_823E5320;
loc_823E5308:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e4de0
	sub_823E4DE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x823e52fc
	if (!cr0.lt) goto loc_823E52FC;
	// b 0x823e535c
	goto loc_823E535C;
loc_823E5320:
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r11,0
	r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,112(r31)
	PPC_STORE_U32(r31.u32 + 112, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// bl 0x823e1f80
	sub_823E1F80(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e5350
	if (cr0.eq) goto loc_823E5350;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x823e5354
	goto loc_823E5354;
loc_823E5350:
	// li r11,1
	r11.s64 = 1;
loc_823E5354:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,672(r31)
	PPC_STORE_U32(r31.u32 + 672, r11.u32);
loc_823E535C:
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

__attribute__((alias("__imp__sub_823E5370"))) PPC_WEAK_FUNC(sub_823E5370);
PPC_FUNC_IMPL(__imp__sub_823E5370) {
	PPC_FUNC_PROLOGUE();
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc8
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	r16.s64 = 0;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r16.u32);
	// cmplwi cr6,r17,0
	cr6.compare<uint32_t>(r17.u32, 0, xer);
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r16.u32);
	// bne cr6,0x823e53f4
	if (!cr6.eq) goto loc_823E53F4;
	// addi r31,r1,80
	r31.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823e53e8
	if (cr6.eq) goto loc_823E53E8;
loc_823E53AC:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e53c8
	if (cr0.eq) goto loc_823E53C8;
	// addi r4,r25,16
	ctx.r4.s64 = r25.s64 + 16;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e53cc
	goto loc_823E53CC;
loc_823E53C8:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_823E53CC:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823e5c84
	if (cr6.eq) goto loc_823E5C84;
	// lwz r25,12(r25)
	r25.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
	// cmplwi r25,0
	cr0.compare<uint32_t>(r25.u32, 0, xer);
	// bne 0x823e53ac
	if (!cr0.eq) goto loc_823E53AC;
loc_823E53E8:
	// lwz r11,108(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 108);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x823e5c58
	goto loc_823E5C58;
loc_823E53F4:
	// lwz r7,108(r18)
	ctx.r7.u64 = PPC_LOAD_U32(r18.u32 + 108);
	// cmplwi r7,0
	cr0.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq 0x823e5480
	if (cr0.eq) goto loc_823E5480;
	// addi r11,r7,16
	r11.s64 = ctx.r7.s64 + 16;
	// addi r28,r18,640
	r28.s64 = r18.s64 + 640;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// std r10,0(r28)
	PPC_STORE_U64(r28.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// std r10,8(r28)
	PPC_STORE_U64(r28.u32 + 8, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// std r10,16(r28)
	PPC_STORE_U64(r28.u32 + 16, ctx.r10.u64);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r11,24(r28)
	PPC_STORE_U64(r28.u32 + 24, r11.u64);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e5c84
	if (!cr6.eq) goto loc_823E5C84;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r18,648
	r26.s64 = r18.s64 + 648;
	// addi r10,r11,2828
	ctx.r10.s64 = r11.s64 + 2828;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823E5444:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e5468
	if (cr0.eq) goto loc_823E5468;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e5444
	if (cr6.eq) goto loc_823E5444;
loc_823E5468:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e5c84
	if (!cr0.eq) goto loc_823E5C84;
	// lwz r11,12(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// stw r11,108(r18)
	PPC_STORE_U32(r18.u32 + 108, r11.u32);
	// stw r16,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, r16.u32);
	// b 0x823e553c
	goto loc_823E553C;
loc_823E5480:
	// lwz r3,628(r18)
	ctx.r3.u64 = PPC_LOAD_U32(r18.u32 + 628);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x823e54dc
	if (!cr6.lt) goto loc_823E54DC;
loc_823E5494:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,32
	cr6.compare<int32_t>(ctx.r10.s32, 32, xer);
	// beq cr6,0x823e54b4
	if (cr6.eq) goto loc_823E54B4;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// blt cr6,0x823e54c8
	if (cr6.lt) goto loc_823E54C8;
	// cmpwi cr6,r10,13
	cr6.compare<int32_t>(ctx.r10.s32, 13, xer);
	// bgt cr6,0x823e54c8
	if (cr6.gt) goto loc_823E54C8;
loc_823E54B4:
	// lwz r10,628(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 628);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823e5494
	if (cr6.lt) goto loc_823E5494;
loc_823E54C8:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x823e54dc
	if (!cr6.lt) goto loc_823E54DC;
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi cr6,r11,40
	cr6.compare<uint32_t>(r11.u32, 40, xer);
	// bne cr6,0x823e5c84
	if (!cr6.eq) goto loc_823E5C84;
loc_823E54DC:
	// addi r28,r18,640
	r28.s64 = r18.s64 + 640;
	// lwz r4,672(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 672);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e5c84
	if (cr0.lt) goto loc_823E5C84;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e5c84
	if (!cr6.eq) goto loc_823E5C84;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r18,648
	r26.s64 = r18.s64 + 648;
	// addi r10,r11,2828
	ctx.r10.s64 = r11.s64 + 2828;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_823E5510:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e5534
	if (cr0.eq) goto loc_823E5534;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e5510
	if (cr6.eq) goto loc_823E5510;
loc_823E5534:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e5c84
	if (!cr0.eq) goto loc_823E5C84;
loc_823E553C:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r29,1
	r29.s64 = 1;
	// addi r30,r1,84
	r30.s64 = ctx.r1.s64 + 84;
	// mr r31,r16
	r31.u64 = r16.u64;
	// addi r27,r11,13268
	r27.s64 = r11.s64 + 13268;
loc_823E5550:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// bl 0x823e4de0
	sub_823E4DE0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823e5754
	if (cr6.eq) goto loc_823E5754;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e55ac
	if (!cr6.eq) goto loc_823E55AC;
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e5598
	if (cr0.eq) goto loc_823E5598;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82409578
	sub_82409578(ctx, base);
	// b 0x823e559c
	goto loc_823E559C;
loc_823E5598:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_823E559C:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823e5c84
	if (cr6.eq) goto loc_823E5C84;
	// addi r31,r3,8
	r31.s64 = ctx.r3.s64 + 8;
loc_823E55AC:
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// bne cr6,0x823e55f0
	if (!cr6.eq) goto loc_823E55F0;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e55f0
	if (!cr6.eq) goto loc_823E55F0;
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,44
	cr6.compare<int32_t>(r11.s32, 44, xer);
	// beq cr6,0x823e55d8
	if (cr6.eq) goto loc_823E55D8;
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(r11.s32, 41, xer);
	// bne cr6,0x823e55f0
	if (!cr6.eq) goto loc_823E55F0;
loc_823E55D8:
	// lbz r11,649(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 649);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e55f0
	if (!cr6.eq) goto loc_823E55F0;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// b 0x823e5620
	goto loc_823E5620;
loc_823E55F0:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e560c
	if (cr0.eq) goto loc_823E560C;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e5610
	goto loc_823E5610;
loc_823E560C:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_823E5610:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823e5c84
	if (cr6.eq) goto loc_823E5C84;
	// addi r31,r3,12
	r31.s64 = ctx.r3.s64 + 12;
loc_823E5620:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x823e567c
	if (!cr6.eq) goto loc_823E567C;
	// lbz r11,649(r18)
	r11.u64 = PPC_LOAD_U8(r18.u32 + 649);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e567c
	if (!cr6.eq) goto loc_823E567C;
	// lbz r11,0(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 0);
	// extsb r11,r11
	r11.s64 = r11.s8;
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// beq cr6,0x823e5678
	if (cr6.eq) goto loc_823E5678;
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(r11.s32, 41, xer);
	// beq cr6,0x823e5670
	if (cr6.eq) goto loc_823E5670;
	// cmpwi cr6,r11,91
	cr6.compare<int32_t>(r11.s32, 91, xer);
	// beq cr6,0x823e5678
	if (cr6.eq) goto loc_823E5678;
	// cmpwi cr6,r11,93
	cr6.compare<int32_t>(r11.s32, 93, xer);
	// beq cr6,0x823e5670
	if (cr6.eq) goto loc_823E5670;
	// cmpwi cr6,r11,123
	cr6.compare<int32_t>(r11.s32, 123, xer);
	// beq cr6,0x823e5678
	if (cr6.eq) goto loc_823E5678;
	// cmpwi cr6,r11,125
	cr6.compare<int32_t>(r11.s32, 125, xer);
	// bne cr6,0x823e567c
	if (!cr6.eq) goto loc_823E567C;
loc_823E5670:
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// b 0x823e567c
	goto loc_823E567C;
loc_823E5678:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_823E567C:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x823e5550
	if (!cr6.eq) goto loc_823E5550;
	// lwz r19,84(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r10,r17
	ctx.r10.u64 = r17.u64;
	// mr r11,r19
	r11.u64 = r19.u64;
loc_823E5690:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e56b4
	if (cr6.eq) goto loc_823E56B4;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x823e56b4
	if (cr6.eq) goto loc_823E56B4;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823e5690
	if (!cr0.eq) goto loc_823E5690;
loc_823E56B4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823e5c68
	if (!cr6.eq) goto loc_823E5C68;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e5c68
	if (!cr6.eq) goto loc_823E5C68;
	// mr r27,r16
	r27.u64 = r16.u64;
	// mr r29,r16
	r29.u64 = r16.u64;
	// mr r23,r16
	r23.u64 = r16.u64;
	// addi r30,r1,80
	r30.s64 = ctx.r1.s64 + 80;
	// mr r22,r25
	r22.u64 = r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x823e5a40
	if (cr6.eq) goto loc_823E5A40;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r21,r11,13264
	r21.s64 = r11.s64 + 13264;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r20,r11,13104
	r20.s64 = r11.s64 + 13104;
loc_823E56F0:
	// addi r31,r22,16
	r31.s64 = r22.s64 + 16;
	// mr r24,r30
	r24.u64 = r30.u64;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x823e57b8
	if (!cr6.eq) goto loc_823E57B8;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bne cr6,0x823e57b8
	if (!cr6.eq) goto loc_823E57B8;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x823e57b8
	if (!cr6.eq) goto loc_823E57B8;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_823E571C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e5740
	if (cr0.eq) goto loc_823E5740;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e571c
	if (cr6.eq) goto loc_823E571C;
loc_823E5740:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e5770
	if (!cr0.eq) goto loc_823E5770;
	// mr r23,r31
	r23.u64 = r31.u64;
	// li r27,1
	r27.s64 = 1;
	// b 0x823e5a34
	goto loc_823E5A34;
loc_823E5754:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// li r5,1515
	ctx.r5.s64 = 1515;
	// addi r6,r11,13220
	ctx.r6.s64 = r11.s64 + 13220;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r18,24
	ctx.r3.s64 = r18.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
	// b 0x823e5c84
	goto loc_823E5C84;
loc_823E5770:
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// bne cr6,0x823e57b8
	if (!cr6.eq) goto loc_823E57B8;
	// addi r11,r31,8
	r11.s64 = r31.s64 + 8;
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_823E5780:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e57a4
	if (cr0.eq) goto loc_823E57A4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e5780
	if (cr6.eq) goto loc_823E5780;
loc_823E57A4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e57b8
	if (!cr0.eq) goto loc_823E57B8;
	// mr r23,r31
	r23.u64 = r31.u64;
	// li r29,1
	r29.s64 = 1;
	// b 0x823e5a34
	goto loc_823E5A34;
loc_823E57B8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// bne cr6,0x823e5864
	if (!cr6.eq) goto loc_823E5864;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r8,r17
	ctx.r8.u64 = r17.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
loc_823E57D0:
	// lwz r11,24(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
loc_823E57D8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r7,r7,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x823e57fc
	if (cr0.eq) goto loc_823E57FC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x823e57d8
	if (cr6.eq) goto loc_823E57D8;
loc_823E57FC:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x823e5814
	if (cr0.eq) goto loc_823E5814;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x823e57d0
	if (!cr0.eq) goto loc_823E57D0;
loc_823E5814:
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beq cr6,0x823e5864
	if (cr6.eq) goto loc_823E5864;
	// lwz r31,8(r5)
	r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// b 0x823e5858
	goto loc_823E5858;
loc_823E5824:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e5840
	if (cr0.eq) goto loc_823E5840;
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e5844
	goto loc_823E5844;
loc_823E5840:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_823E5844:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823e5c84
	if (cr6.eq) goto loc_823E5C84;
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
loc_823E5858:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823e5824
	if (!cr0.eq) goto loc_823E5824;
	// b 0x823e5894
	goto loc_823E5894;
loc_823E5864:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e5880
	if (cr0.eq) goto loc_823E5880;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e5884
	goto loc_823E5884;
loc_823E5880:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_823E5884:
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r3.u32);
	// beq cr6,0x823e5c84
	if (cr6.eq) goto loc_823E5C84;
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
loc_823E5894:
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bne cr6,0x823e58a4
	if (!cr6.eq) goto loc_823E58A4;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x823e5a34
	if (cr6.eq) goto loc_823E5A34;
loc_823E58A4:
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r11,r16
	r11.u64 = r16.u64;
	// li r30,1
	r30.s64 = 1;
	// b 0x823e5900
	goto loc_823E5900;
loc_823E58B4:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e58cc
	if (cr6.eq) goto loc_823E58CC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823e58cc
	if (cr6.eq) goto loc_823E58CC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823E58CC:
	// addi r29,r31,44
	r29.s64 = r31.s64 + 44;
	// addi r28,r31,40
	r28.s64 = r31.s64 + 40;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// bl 0x823e1cc8
	sub_823E1CC8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_823E5900:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823e58b4
	if (!cr0.eq) goto loc_823E58B4;
	// addi r4,r30,1
	ctx.r4.s64 = r30.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x823e5c84
	if (cr0.eq) goto loc_823E5C84;
	// subfic r10,r27,0
	xer.ca = r27.u32 <= 0;
	ctx.r10.s64 = 0 - r27.s64;
	// mr r11,r16
	r11.u64 = r16.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// li r30,1
	r30.s64 = 1;
	// rlwinm r10,r10,0,30,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r26,r10,39
	r26.s64 = ctx.r10.s64 + 39;
	// stb r26,0(r29)
	PPC_STORE_U8(r29.u32 + 0, r26.u8);
	// lwz r31,0(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// b 0x823e599c
	goto loc_823E599C;
loc_823E5948:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e5968
	if (cr6.eq) goto loc_823E5968;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823e5968
	if (cr6.eq) goto loc_823E5968;
	// li r11,32
	r11.s64 = 32;
	// stbx r11,r29,r30
	PPC_STORE_U8(r29.u32 + r30.u32, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823E5968:
	// addi r28,r31,44
	r28.s64 = r31.s64 + 44;
	// addi r27,r31,40
	r27.s64 = r31.s64 + 40;
	// subf r7,r30,r25
	ctx.r7.s64 = r25.s64 - r30.s64;
	// add r6,r29,r30
	ctx.r6.u64 = r29.u64 + r30.u64;
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// bl 0x823e1cc8
	sub_823E1CC8(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// add r30,r3,r30
	r30.u64 = ctx.r3.u64 + r30.u64;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r31,12(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
loc_823E599C:
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823e5948
	if (!cr0.eq) goto loc_823E5948;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stbx r26,r29,r30
	PPC_STORE_U8(r29.u32 + r30.u32, r26.u8);
	// bl 0x823eb050
	sub_823EB050(ctx, base);
	// addi r9,r18,24
	ctx.r9.s64 = r18.s64 + 24;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// lwz r7,20(r23)
	ctx.r7.u64 = PPC_LOAD_U32(r23.u32 + 20);
	// addi r5,r30,1
	ctx.r5.s64 = r30.s64 + 1;
	// lwz r6,16(r23)
	ctx.r6.u64 = PPC_LOAD_U32(r23.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823eb078
	sub_823EB078(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// blt 0x823e5a70
	if (cr0.lt) goto loc_823E5A70;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,672(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 672);
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e5a6c
	if (cr0.lt) goto loc_823E5A6C;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e5a10
	if (cr0.eq) goto loc_823E5A10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x823e5a14
	goto loc_823E5A14;
loc_823E5A10:
	// mr r11,r16
	r11.u64 = r16.u64;
loc_823E5A14:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// beq cr6,0x823e5a70
	if (cr6.eq) goto loc_823E5A70;
	// addi r30,r11,12
	r30.s64 = r11.s64 + 12;
	// mr r29,r16
	r29.u64 = r16.u64;
	// mr r27,r16
	r27.u64 = r16.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_823E5A34:
	// lwz r22,12(r22)
	r22.u64 = PPC_LOAD_U32(r22.u32 + 12);
	// cmplwi r22,0
	cr0.compare<uint32_t>(r22.u32, 0, xer);
	// bne 0x823e56f0
	if (!cr0.eq) goto loc_823E56F0;
loc_823E5A40:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r25,r1,80
	r25.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e5c50
	if (cr6.eq) goto loc_823E5C50;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// addi r24,r11,13216
	r24.s64 = r11.s64 + 13216;
loc_823E5A58:
	// lwz r26,0(r25)
	r26.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi r26,0
	cr0.compare<uint32_t>(r26.u32, 0, xer);
	// beq 0x823e5a78
	if (cr0.eq) goto loc_823E5A78;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// b 0x823e5a7c
	goto loc_823E5A7C;
loc_823E5A6C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_823E5A70:
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// b 0x823e5c84
	goto loc_823E5C84;
loc_823E5A78:
	// mr r10,r16
	ctx.r10.u64 = r16.u64;
loc_823E5A7C:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823e5a8c
	if (cr6.eq) goto loc_823E5A8C;
	// lwz r27,12(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x823e5a90
	goto loc_823E5A90;
loc_823E5A8C:
	// mr r27,r16
	r27.u64 = r16.u64;
loc_823E5A90:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// addi r29,r26,16
	r29.s64 = r26.s64 + 16;
	// bne cr6,0x823e5aa0
	if (!cr6.eq) goto loc_823E5AA0;
	// mr r29,r16
	r29.u64 = r16.u64;
loc_823E5AA0:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// addi r11,r10,16
	r11.s64 = ctx.r10.s64 + 16;
	// bne cr6,0x823e5ab0
	if (!cr6.eq) goto loc_823E5AB0;
	// mr r11,r16
	r11.u64 = r16.u64;
loc_823E5AB0:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// addi r28,r27,16
	r28.s64 = r27.s64 + 16;
	// bne cr6,0x823e5ac0
	if (!cr6.eq) goto loc_823E5AC0;
	// mr r28,r16
	r28.u64 = r16.u64;
loc_823E5AC0:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823e5c40
	if (cr6.eq) goto loc_823E5C40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x823e5c40
	if (cr6.eq) goto loc_823E5C40;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x823e5c40
	if (cr6.eq) goto loc_823E5C40;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x823e5c40
	if (!cr6.eq) goto loc_823E5C40;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// mr r10,r24
	ctx.r10.u64 = r24.u64;
loc_823E5AEC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x823e5b10
	if (cr0.eq) goto loc_823E5B10;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x823e5aec
	if (cr6.eq) goto loc_823E5AEC;
loc_823E5B10:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e5c40
	if (!cr0.eq) goto loc_823E5C40;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r3,r18
	ctx.r3.u64 = r18.u64;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82409268
	sub_82409268(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823e5c84
	if (cr0.eq) goto loc_823E5C84;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r5,28(r28)
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + 28);
	// add r3,r11,r31
	ctx.r3.u64 = r11.u64 + r31.u64;
	// lwz r4,24(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823eb050
	sub_823EB050(ctx, base);
	// addi r9,r18,24
	ctx.r9.s64 = r18.s64 + 24;
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r6,16(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823eb078
	sub_823EB078(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e5a6c
	if (cr0.lt) goto loc_823E5A6C;
	// lwz r30,12(r27)
	r30.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r31,r26
	r31.u64 = r26.u64;
loc_823E5B98:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,672(r18)
	ctx.r4.u64 = PPC_LOAD_U32(r18.u32 + 672);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823ece58
	sub_823ECE58(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e5a6c
	if (cr0.lt) goto loc_823E5A6C;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,13
	cr6.compare<int32_t>(r11.s32, 13, xer);
	// beq cr6,0x823e5c20
	if (cr6.eq) goto loc_823E5C20;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823e5bf4
	if (cr6.eq) goto loc_823E5BF4;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r31,16
	ctx.r10.s64 = r31.s64 + 16;
	// mr r31,r16
	r31.u64 = r16.u64;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// ld r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 16);
	// ld r11,24(r11)
	r11.u64 = PPC_LOAD_U64(r11.u32 + 24);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r8,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r8.u64);
	// std r7,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r7.u64);
	// std r11,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, r11.u64);
	// b 0x823e5b98
	goto loc_823E5B98;
loc_823E5BF4:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x824093b0
	sub_824093B0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e5c10
	if (cr0.eq) goto loc_823E5C10;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x824099d0
	sub_824099D0(ctx, base);
	// b 0x823e5c14
	goto loc_823E5C14;
loc_823E5C10:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_823E5C14:
	// stw r3,12(r26)
	PPC_STORE_U32(r26.u32 + 12, ctx.r3.u32);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x823e5b98
	goto loc_823E5B98;
loc_823E5C20:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x823e5c30
	if (!cr6.eq) goto loc_823E5C30;
	// stw r30,12(r26)
	PPC_STORE_U32(r26.u32 + 12, r30.u32);
	// b 0x823e5c34
	goto loc_823E5C34;
loc_823E5C30:
	// stw r30,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r30.u32);
loc_823E5C34:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// b 0x823e5c44
	goto loc_823E5C44;
loc_823E5C40:
	// addi r25,r26,12
	r25.s64 = r26.s64 + 12;
loc_823E5C44:
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823e5a58
	if (!cr6.eq) goto loc_823E5A58;
loc_823E5C50:
	// lwz r11,108(r18)
	r11.u64 = PPC_LOAD_U32(r18.u32 + 108);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
loc_823E5C58:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,108(r18)
	PPC_STORE_U32(r18.u32 + 108, r11.u32);
	// b 0x823e5c88
	goto loc_823E5C88;
loc_823E5C68:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lwz r7,8(r24)
	ctx.r7.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// li r5,1516
	ctx.r5.s64 = 1516;
	// addi r6,r11,13172
	ctx.r6.s64 = r11.s64 + 13172;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// addi r3,r18,24
	ctx.r3.s64 = r18.s64 + 24;
	// bl 0x823ebc20
	sub_823EBC20(ctx, base);
loc_823E5C84:
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
loc_823E5C88:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x8239bd18
	return;
}

__attribute__((alias("__imp__sub_823E5C90"))) PPC_WEAK_FUNC(sub_823E5C90);
PPC_FUNC_IMPL(__imp__sub_823E5C90) {
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
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// lhz r11,10(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e5d24
	if (cr0.eq) goto loc_823E5D24;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// beq cr6,0x823e5d94
	if (cr6.eq) goto loc_823E5D94;
	// addi r26,r11,4
	r26.s64 = r11.s64 + 4;
loc_823E5CDC:
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823e5d0c
	if (cr0.eq) goto loc_823E5D0C;
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r8,r24
	ctx.r8.u64 = r24.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lhz r11,8(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// mullw r6,r11,r28
	ctx.r6.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// bl 0x823e5c90
	sub_823E5C90(ctx, base);
loc_823E5D0C:
	// lhz r11,10(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 10);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r26,r26,8
	r26.s64 = r26.s64 + 8;
	// cmplw cr6,r27,r11
	cr6.compare<uint32_t>(r27.u32, r11.u32, xer);
	// blt cr6,0x823e5cdc
	if (cr6.lt) goto loc_823E5CDC;
	// b 0x823e5d94
	goto loc_823E5D94;
loc_823E5D24:
	// lhz r11,4(r25)
	r11.u64 = PPC_LOAD_U16(r25.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823e5d3c
	if (!cr0.eq) goto loc_823E5D3C;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// b 0x823e5d64
	goto loc_823E5D64;
loc_823E5D3C:
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x823e5d54
	if (cr6.eq) goto loc_823E5D54;
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// b 0x823e5d5c
	goto loc_823E5D5C;
loc_823E5D54:
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lhz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 6);
loc_823E5D5C:
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
loc_823E5D64:
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mullw r11,r11,r28
	r11.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lhz r11,6(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 6);
	// lhz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r11,r28
	r11.s64 = int64_t(r11.s32) * int64_t(r28.s32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
loc_823E5D94:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_823E5D9C"))) PPC_WEAK_FUNC(sub_823E5D9C);
PPC_FUNC_IMPL(__imp__sub_823E5D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5DA0"))) PPC_WEAK_FUNC(sub_823E5DA0);
PPC_FUNC_IMPL(__imp__sub_823E5DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// addi r9,r31,4
	ctx.r9.s64 = r31.s64 + 4;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// li r11,5
	r11.s64 = 5;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
loc_823E5DD0:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x823e5dd0
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_823E5DD0;
	// li r30,0
	r30.s64 = 0;
	// stw r7,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r7.u32);
	// addi r28,r31,44
	r28.s64 = r31.s64 + 44;
	// stw r8,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r8.u32);
	// addi r27,r31,52
	r27.s64 = r31.s64 + 52;
	// stw r29,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r29.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// bl 0x823e5c90
	sub_823E5C90(ctx, base);
	// lhz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mullw r11,r9,r11
	r11.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// lhz r11,8(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 8);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823E5E54"))) PPC_WEAK_FUNC(sub_823E5E54);
PPC_FUNC_IMPL(__imp__sub_823E5E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5E58"))) PPC_WEAK_FUNC(sub_823E5E58);
PPC_FUNC_IMPL(__imp__sub_823E5E58) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// stw r29,32(r30)
	PPC_STORE_U32(r30.u32 + 32, r29.u32);
	// lhz r11,10(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e5eec
	if (cr0.eq) goto loc_823E5EEC;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r31,0
	r31.s64 = 0;
loc_823E5E8C:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwzx r3,r31,r10
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// bl 0x823e5e58
	sub_823E5E58(ctx, base);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwzx r11,r31,r10
	r11.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e5eb4
	if (cr0.eq) goto loc_823E5EB4;
	// li r9,4
	ctx.r9.s64 = 4;
loc_823E5EB4:
	// lwzx r11,r31,r10
	r11.u64 = PPC_LOAD_U32(r31.u32 + ctx.r10.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lhz r8,10(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 10);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplw cr6,r28,r8
	cr6.compare<uint32_t>(r28.u32, ctx.r8.u32, xer);
	// lhz r8,8(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// mullw r11,r8,r11
	r11.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// mullw r11,r11,r9
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r9.s32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r29
	r29.u64 = r11.u64 + r29.u64;
	// blt cr6,0x823e5e8c
	if (cr6.lt) goto loc_823E5E8C;
loc_823E5EEC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823E5EF8"))) PPC_WEAK_FUNC(sub_823E5EF8);
PPC_FUNC_IMPL(__imp__sub_823E5EF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e5f24
	if (cr0.eq) goto loc_823E5F24;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x823e5f28
	goto loc_823E5F28;
loc_823E5F24:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823E5F28:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lhz r11,8(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lhz r11,10(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// lhz r11,12(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,0(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,2(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lhz r11,4(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 4);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lhz r11,6(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 6);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r8,28(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mullw r11,r11,r10
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// lhz r10,10(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// mullw r11,r11,r8
	r11.s64 = int64_t(r11.s32) * int64_t(ctx.r8.s32);
	// stw r10,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r10.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, r11.u32);
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e5fc4
	if (cr0.eq) goto loc_823E5FC4;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// b 0x823e5fc8
	goto loc_823E5FC8;
loc_823E5FC4:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_823E5FC8:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E5FD4"))) PPC_WEAK_FUNC(sub_823E5FD4);
PPC_FUNC_IMPL(__imp__sub_823E5FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E5FD8"))) PPC_WEAK_FUNC(sub_823E5FD8);
PPC_FUNC_IMPL(__imp__sub_823E5FD8) {
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
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r31,20(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823e6060
	if (cr0.eq) goto loc_823E6060;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x823e6010
	if (cr0.eq) goto loc_823E6010;
	// li r10,4
	ctx.r10.s64 = 4;
loc_823E6010:
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne 0x823e6028
	if (!cr0.eq) goto loc_823E6028;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x823e6064
	goto loc_823E6064;
loc_823E6028:
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// lhz r9,10(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 12);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// add r4,r9,r5
	ctx.r4.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r5,r11,r31
	ctx.r5.u64 = r11.u64 + r31.u64;
	// mtctr r8
	ctr.u64 = ctx.r8.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e6064
	if (cr0.lt) goto loc_823E6064;
loc_823E6060:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E6064:
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

__attribute__((alias("__imp__sub_823E6078"))) PPC_WEAK_FUNC(sub_823E6078);
PPC_FUNC_IMPL(__imp__sub_823E6078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r10,r10,-32080
	ctx.r10.s64 = ctx.r10.s64 + -32080;
	// stw r9,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r9.u32);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
loc_823E609C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e60bc
	if (!cr0.eq) goto loc_823E60BC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x823e609c
	if (!cr6.eq) goto loc_823E609C;
loc_823E60BC:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823e60fc
	if (cr0.eq) goto loc_823E60FC;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// addi r10,r10,-32096
	ctx.r10.s64 = ctx.r10.s64 + -32096;
loc_823E60D4:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e60f4
	if (!cr0.eq) goto loc_823E60F4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x823e60d4
	if (!cr6.eq) goto loc_823E60D4;
loc_823E60F4:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823e6118
	if (!cr0.eq) goto loc_823E6118;
loc_823E60FC:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823e6120
	goto loc_823E6120;
loc_823E6118:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16386
	ctx.r3.u64 = ctx.r3.u64 | 16386;
loc_823E6120:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6130"))) PPC_WEAK_FUNC(sub_823E6130);
PPC_FUNC_IMPL(__imp__sub_823E6130) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6138"))) PPC_WEAK_FUNC(sub_823E6138);
PPC_FUNC_IMPL(__imp__sub_823E6138) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x823e614c
	if (!cr6.eq) goto loc_823E614C;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// blr 
	return;
loc_823E614C:
	// lwz r11,12(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,28
	cr6.compare<uint32_t>(r11.u32, 28, xer);
	// blt cr6,0x823e6174
	if (cr6.lt) goto loc_823E6174;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,28
	cr6.compare<uint32_t>(ctx.r10.u32, 28, xer);
	// blt cr6,0x823e6174
	if (cr6.lt) goto loc_823E6174;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x823e6180
	if (cr6.lt) goto loc_823E6180;
loc_823E6174:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2905
	ctx.r3.u64 = ctx.r3.u64 | 2905;
	// blr 
	return;
loc_823E6180:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e61a4
	if (cr0.eq) goto loc_823E61A4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
loc_823E61A4:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E61C0"))) PPC_WEAK_FUNC(sub_823E61C0);
PPC_FUNC_IMPL(__imp__sub_823E61C0) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823e6218
	if (!cr6.gt) goto loc_823E6218;
	// li r30,0
	r30.s64 = 0;
loc_823E61E8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// bl 0x823e5fd8
	sub_823E5FD8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e621c
	if (cr0.lt) goto loc_823E621C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x823e61e8
	if (cr6.lt) goto loc_823E61E8;
loc_823E6218:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E621C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823E6224"))) PPC_WEAK_FUNC(sub_823E6224);
PPC_FUNC_IMPL(__imp__sub_823E6224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6228"))) PPC_WEAK_FUNC(sub_823E6228);
PPC_FUNC_IMPL(__imp__sub_823E6228) {
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
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e6298
	if (cr6.eq) goto loc_823E6298;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// lhz r11,10(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e628c
	if (cr0.eq) goto loc_823E628C;
	// li r30,0
	r30.s64 = 0;
loc_823E625C:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + r11.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e6274
	if (cr0.eq) goto loc_823E6274;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e9798
	sub_823E9798(ctx, base);
loc_823E6274:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lhz r11,10(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x823e625c
	if (cr6.lt) goto loc_823E625C;
loc_823E628C:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E6298:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823e62f8
	if (cr6.eq) goto loc_823E62F8;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r29,0
	r29.s64 = 0;
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823e62ec
	if (cr0.eq) goto loc_823E62EC;
	// li r30,0
	r30.s64 = 0;
loc_823E62BC:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823e62d4
	if (cr0.eq) goto loc_823E62D4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x823e9798
	sub_823E9798(ctx, base);
loc_823E62D4:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lhz r11,8(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x823e62bc
	if (cr6.lt) goto loc_823E62BC;
loc_823E62EC:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
loc_823E62F8:
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x82120e68
	sub_82120E68(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823E630C"))) PPC_WEAK_FUNC(sub_823E630C);
PPC_FUNC_IMPL(__imp__sub_823E630C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6310"))) PPC_WEAK_FUNC(sub_823E6310);
PPC_FUNC_IMPL(__imp__sub_823E6310) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823e6344
	if (!cr6.eq) goto loc_823E6344;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x823e6344
	if (!cr6.eq) goto loc_823E6344;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x823e63d4
	goto loc_823E63D4;
loc_823E6344:
	// not. r31,r11
	r31.u64 = ~r11.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r30,1
	r30.s64 = 1;
	// mr r11,r31
	r11.u64 = r31.u64;
	// beq 0x823e6368
	if (cr0.eq) goto loc_823E6368;
loc_823E6358:
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823e6358
	if (!cr0.eq) goto loc_823E6358;
loc_823E6368:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x823e6390
	if (cr6.eq) goto loc_823E6390;
	// lwz r30,0(r6)
	r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x823e6380
	if (!cr0.eq) goto loc_823E6380;
	// li r30,1
	r30.s64 = 1;
loc_823E6380:
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x823e638c
	if (!cr6.gt) goto loc_823E638C;
	// mr r30,r10
	r30.u64 = ctx.r10.u64;
loc_823E638C:
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
loc_823E6390:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x823e63d0
	if (cr6.eq) goto loc_823E63D0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823e63d0
	if (cr6.eq) goto loc_823E63D0;
loc_823E63A0:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823e63d0
	if (cr6.eq) goto loc_823E63D0;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823e5ef8
	sub_823E5EF8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x823e63d4
	if (cr0.lt) goto loc_823E63D4;
	// lwz r31,36(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r5,r5,48
	ctx.r5.s64 = ctx.r5.s64 + 48;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x823e63a0
	if (!cr0.eq) goto loc_823E63A0;
loc_823E63D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823E63D4:
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

__attribute__((alias("__imp__sub_823E63EC"))) PPC_WEAK_FUNC(sub_823E63EC);
PPC_FUNC_IMPL(__imp__sub_823E63EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E63F0"))) PPC_WEAK_FUNC(sub_823E63F0);
PPC_FUNC_IMPL(__imp__sub_823E63F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// not r11,r4
	r11.u64 = ~ctx.r4.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// lhz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 8);
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lhz r3,10(r11)
	ctx.r3.u64 = PPC_LOAD_U16(r11.u32 + 10);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E640C"))) PPC_WEAK_FUNC(sub_823E640C);
PPC_FUNC_IMPL(__imp__sub_823E640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6410"))) PPC_WEAK_FUNC(sub_823E6410);
PPC_FUNC_IMPL(__imp__sub_823E6410) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x823e643c
	if (!cr6.eq) goto loc_823E643C;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplw cr6,r5,r11
	cr6.compare<uint32_t>(ctx.r5.u32, r11.u32, xer);
	// blt cr6,0x823e642c
	if (cr6.lt) goto loc_823E642C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823E642C:
	// lwz r11,20(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// b 0x823e6470
	goto loc_823E6470;
loc_823E643C:
	// not r11,r4
	r11.u64 = ~ctx.r4.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// lhz r10,10(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// cmplw cr6,r5,r10
	cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, xer);
	// blt cr6,0x823e6458
	if (cr6.lt) goto loc_823E6458;
	// li r11,0
	r11.s64 = 0;
	// b 0x823e6464
	goto loc_823E6464;
loc_823E6458:
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_823E6464:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (cr6.eq) return;
loc_823E6470:
	// not r3,r11
	ctx.r3.u64 = ~r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823E6478"))) PPC_WEAK_FUNC(sub_823E6478);
PPC_FUNC_IMPL(__imp__sub_823E6478) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823c9fd8
	sub_823C9FD8(ctx, base);
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

__attribute__((alias("__imp__sub_823E64A0"))) PPC_WEAK_FUNC(sub_823E64A0);
PPC_FUNC_IMPL(__imp__sub_823E64A0) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823c9fd8
	sub_823C9FD8(ctx, base);
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

__attribute__((alias("__imp__sub_823E64C8"))) PPC_WEAK_FUNC(sub_823E64C8);
PPC_FUNC_IMPL(__imp__sub_823E64C8) {
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823e6508
	if (cr6.eq) goto loc_823E6508;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_823E64E8:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823e64e8
	if (!cr0.eq) goto loc_823E64E8;
loc_823E6508:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823c9fd8
	sub_823C9FD8(ctx, base);
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

__attribute__((alias("__imp__sub_823E6524"))) PPC_WEAK_FUNC(sub_823E6524);
PPC_FUNC_IMPL(__imp__sub_823E6524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823E6528"))) PPC_WEAK_FUNC(sub_823E6528);
PPC_FUNC_IMPL(__imp__sub_823E6528) {
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// beq cr6,0x823e6574
	if (cr6.eq) goto loc_823E6574;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// subf r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - r11.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// lfs f0,2480(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_823E6550:
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x823e6564
	if (!cr6.eq) goto loc_823E6564;
	// li r9,0
	ctx.r9.s64 = 0;
loc_823E6564:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823e6550
	if (!cr0.eq) goto loc_823E6550;
loc_823E6574:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823c9fd8
	sub_823C9FD8(ctx, base);
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

__attribute__((alias("__imp__sub_823E6590"))) PPC_WEAK_FUNC(sub_823E6590);
PPC_FUNC_IMPL(__imp__sub_823E6590) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823ca098
	sub_823CA098(ctx, base);
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

__attribute__((alias("__imp__sub_823E65B8"))) PPC_WEAK_FUNC(sub_823E65B8);
PPC_FUNC_IMPL(__imp__sub_823E65B8) {
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823e65f4
	if (cr0.eq) goto loc_823E65F4;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
loc_823E65D4:
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823e65d4
	if (!cr0.eq) goto loc_823E65D4;
loc_823E65F4:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823ca098
	sub_823CA098(ctx, base);
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

__attribute__((alias("__imp__sub_823E6610"))) PPC_WEAK_FUNC(sub_823E6610);
PPC_FUNC_IMPL(__imp__sub_823E6610) {
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
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823ca098
	sub_823CA098(ctx, base);
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

__attribute__((alias("__imp__sub_823E6638"))) PPC_WEAK_FUNC(sub_823E6638);
PPC_FUNC_IMPL(__imp__sub_823E6638) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// rlwinm. r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823e666c
	if (cr0.eq) goto loc_823E666C;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - r11.s64;
loc_823E6654:
	// lfsx f0,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	f0.f64 = double(temp.f32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x823e6654
	if (!cr0.eq) goto loc_823E6654;
loc_823E666C:
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x823ca098
	sub_823CA098(ctx, base);
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

