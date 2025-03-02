#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82562B38"))) PPC_WEAK_FUNC(sub_82562B38);
PPC_FUNC_IMPL(__imp__sub_82562B38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82562b7c
	if (!cr6.eq) goto loc_82562B7C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4257
	ctx.r7.s64 = 4257;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562B7C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// lfs f1,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,0(r28)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r28.u32 + 0, temp.u32);
	// beq cr6,0x82562bcc
	if (cr6.eq) goto loc_82562BCC;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82562bcc
	if (cr6.eq) goto loc_82562BCC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,64
	ctx.r6.s64 = 64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,256(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 256);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562BCC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82562BD8"))) PPC_WEAK_FUNC(sub_82562BD8);
PPC_FUNC_IMPL(__imp__sub_82562BD8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82562c20
	if (!cr6.eq) goto loc_82562C20;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4293
	ctx.r7.s64 = 4293;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562C20:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,26
	ctx.r4.s64 = 26;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253e748
	sub_8253E748(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82562c78
	if (cr6.eq) goto loc_82562C78;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82562c78
	if (cr6.eq) goto loc_82562C78;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,65
	ctx.r6.s64 = 65;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,260(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 260);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562C78:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82562C84"))) PPC_WEAK_FUNC(sub_82562C84);
PPC_FUNC_IMPL(__imp__sub_82562C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562C88"))) PPC_WEAK_FUNC(sub_82562C88);
PPC_FUNC_IMPL(__imp__sub_82562C88) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82562cd0
	if (!cr6.eq) goto loc_82562CD0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4327
	ctx.r7.s64 = 4327;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562CD0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,25
	ctx.r4.s64 = 25;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8253e748
	sub_8253E748(ctx, base);
	// stfs f1,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(r27.u32 + 0, temp.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82562d28
	if (cr6.eq) goto loc_82562D28;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82562d28
	if (cr6.eq) goto loc_82562D28;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,66
	ctx.r6.s64 = 66;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,264(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 264);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562D28:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82562D34"))) PPC_WEAK_FUNC(sub_82562D34);
PPC_FUNC_IMPL(__imp__sub_82562D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562D38"))) PPC_WEAK_FUNC(sub_82562D38);
PPC_FUNC_IMPL(__imp__sub_82562D38) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82562d80
	if (!cr6.eq) goto loc_82562D80;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4363
	ctx.r7.s64 = 4363;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562D80:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,89
	ctx.r4.s64 = 89;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// lis r11,16384
	r11.s64 = 1073741824;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// rlwimi r11,r3,30,2,31
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82562de4
	if (cr6.eq) goto loc_82562DE4;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82562de4
	if (cr6.eq) goto loc_82562DE4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,62
	ctx.r6.s64 = 62;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,248(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 248);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562DE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82562DF0"))) PPC_WEAK_FUNC(sub_82562DF0);
PPC_FUNC_IMPL(__imp__sub_82562DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcfc
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,19200
	r11.s64 = 1258291200;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// beq cr6,0x82562e58
	if (cr6.eq) goto loc_82562E58;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82562e58
	if (cr6.eq) goto loc_82562E58;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,88
	ctx.r6.s64 = 88;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,352(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 352);
	// mtctr r31
	ctr.u64 = r31.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562E58:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82562E64"))) PPC_WEAK_FUNC(sub_82562E64);
PPC_FUNC_IMPL(__imp__sub_82562E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562E68"))) PPC_WEAK_FUNC(sub_82562E68);
PPC_FUNC_IMPL(__imp__sub_82562E68) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// mr r24,r7
	r24.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// addi r27,r11,-15792
	r27.s64 = r11.s64 + -15792;
	// bne cr6,0x82562ebc
	if (!cr6.eq) goto loc_82562EBC;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,4437
	ctx.r7.s64 = 4437;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562EBC:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,92
	ctx.r4.s64 = 92;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r11,r11,-10088
	r11.s64 = r11.s64 + -10088;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,-4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// beq cr6,0x82562f40
	if (cr6.eq) goto loc_82562F40;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// beq cr6,0x82562f40
	if (cr6.eq) goto loc_82562F40;
	// cmplwi cr6,r30,1
	cr6.compare<uint32_t>(r30.u32, 1, xer);
	// beq cr6,0x82562f38
	if (cr6.eq) goto loc_82562F38;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82562f38
	if (cr6.eq) goto loc_82562F38;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4450
	ctx.r7.s64 = 4450;
	// addi r5,r11,-20320
	ctx.r5.s64 = r11.s64 + -20320;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562F38:
	// li r11,7
	r11.s64 = 7;
	// b 0x82562f44
	goto loc_82562F44;
loc_82562F40:
	// li r11,2
	r11.s64 = 2;
loc_82562F44:
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// oris r11,r11,75
	r11.u64 = r11.u64 | 4915200;
	// or r11,r11,r31
	r11.u64 = r11.u64 | r31.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// beq cr6,0x82562fa0
	if (cr6.eq) goto loc_82562FA0;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// beq cr6,0x82562fa0
	if (cr6.eq) goto loc_82562FA0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r26.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,89
	ctx.r6.s64 = 89;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r5,356(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 356);
	// mtctr r25
	ctr.u64 = r25.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82562FA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82562FAC"))) PPC_WEAK_FUNC(sub_82562FAC);
PPC_FUNC_IMPL(__imp__sub_82562FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82562FB0"))) PPC_WEAK_FUNC(sub_82562FB0);
PPC_FUNC_IMPL(__imp__sub_82562FB0) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82562ff8
	if (!cr6.eq) goto loc_82562FF8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,4490
	ctx.r7.s64 = 4490;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82562FF8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,90
	ctx.r4.s64 = 90;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// oris r11,r3,19200
	r11.u64 = ctx.r3.u64 | 1258291200;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82563058
	if (cr6.eq) goto loc_82563058;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82563058
	if (cr6.eq) goto loc_82563058;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255e928
	sub_8255E928(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15444
	ctx.r4.s64 = r11.s64 + -15444;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,90
	ctx.r6.s64 = 90;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r5,360(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 360);
	// mtctr r29
	ctr.u64 = r29.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82563058:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82563064"))) PPC_WEAK_FUNC(sub_82563064);
PPC_FUNC_IMPL(__imp__sub_82563064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563068"))) PPC_WEAK_FUNC(sub_82563068);
PPC_FUNC_IMPL(__imp__sub_82563068) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x825630b0
	if (!cr6.eq) goto loc_825630B0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,447
	ctx.r7.s64 = 447;
	// addi r6,r11,-15792
	ctx.r6.s64 = r11.s64 + -15792;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825630B0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,7
	ctx.r4.s64 = 7;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x82563128
	if (!cr6.eq) goto loc_82563128;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825630e4
	if (cr6.eq) goto loc_825630E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825630E4:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82563120
	if (cr6.eq) goto loc_82563120;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82563120
	if (cr6.eq) goto loc_82563120;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82563120:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82563184
	goto loc_82563184;
loc_82563128:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82563144
	if (cr6.eq) goto loc_82563144;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82563144:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82563180
	if (cr6.eq) goto loc_82563180;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82563180
	if (cr6.eq) goto loc_82563180;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,105
	ctx.r6.s64 = 105;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,420(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82563180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82563184:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256318C"))) PPC_WEAK_FUNC(sub_8256318C);
PPC_FUNC_IMPL(__imp__sub_8256318C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563190"))) PPC_WEAK_FUNC(sub_82563190);
PPC_FUNC_IMPL(__imp__sub_82563190) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r30,r11,-15792
	r30.s64 = r11.s64 + -15792;
	// bne cr6,0x825631e4
	if (!cr6.eq) goto loc_825631E4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,504
	ctx.r7.s64 = 504;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825631E4:
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(r29.s32, 16, xer);
	// blt cr6,0x82563208
	if (cr6.lt) goto loc_82563208;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,505
	ctx.r7.s64 = 505;
	// addi r5,r11,-15124
	ctx.r5.s64 = r11.s64 + -15124;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563208:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x8256322c
	if (!cr6.lt) goto loc_8256322C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,506
	ctx.r7.s64 = 506;
	// addi r5,r11,-15136
	ctx.r5.s64 = r11.s64 + -15136;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256322C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// beq cr6,0x825632a0
	if (cr6.eq) goto loc_825632A0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82563260
	if (cr6.eq) goto loc_82563260;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82563260:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82563298
	if (cr6.eq) goto loc_82563298;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82563298
	if (cr6.eq) goto loc_82563298;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,-10536(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -10536);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82563298:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825632f8
	goto loc_825632F8;
loc_825632A0:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x825632bc
	if (cr6.eq) goto loc_825632BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825632BC:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825632f4
	if (cr6.eq) goto loc_825632F4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825632f4
	if (cr6.eq) goto loc_825632F4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,-10536(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + -10536);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825632F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825632F8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82563300"))) PPC_WEAK_FUNC(sub_82563300);
PPC_FUNC_IMPL(__imp__sub_82563300) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r30,r11,-15792
	r30.s64 = r11.s64 + -15792;
	// bne cr6,0x82563354
	if (!cr6.eq) goto loc_82563354;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,561
	ctx.r7.s64 = 561;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563354:
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(r29.s32, 16, xer);
	// blt cr6,0x82563378
	if (cr6.lt) goto loc_82563378;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,562
	ctx.r7.s64 = 562;
	// addi r5,r11,-15124
	ctx.r5.s64 = r11.s64 + -15124;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563378:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x8256339c
	if (!cr6.lt) goto loc_8256339C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,563
	ctx.r7.s64 = 563;
	// addi r5,r11,-15136
	ctx.r5.s64 = r11.s64 + -15136;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256339C:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8256342c
	if (!cr6.eq) goto loc_8256342C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x8256342c
	if (!cr6.eq) goto loc_8256342C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x825633e8
	if (cr6.eq) goto loc_825633E8;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825633E8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82563424
	if (cr6.eq) goto loc_82563424;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82563424
	if (cr6.eq) goto loc_82563424;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82563424:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82563488
	goto loc_82563488;
loc_8256342C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82563448
	if (cr6.eq) goto loc_82563448;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82563448:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82563484
	if (cr6.eq) goto loc_82563484;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82563484
	if (cr6.eq) goto loc_82563484;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82563484:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82563488:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82563490"))) PPC_WEAK_FUNC(sub_82563490);
PPC_FUNC_IMPL(__imp__sub_82563490) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r30,r11,-15792
	r30.s64 = r11.s64 + -15792;
	// bne cr6,0x825634e4
	if (!cr6.eq) goto loc_825634E4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,619
	ctx.r7.s64 = 619;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825634E4:
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(r29.s32, 16, xer);
	// blt cr6,0x82563508
	if (cr6.lt) goto loc_82563508;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,620
	ctx.r7.s64 = 620;
	// addi r5,r11,-15124
	ctx.r5.s64 = r11.s64 + -15124;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563508:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x8256352c
	if (!cr6.lt) goto loc_8256352C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,621
	ctx.r7.s64 = 621;
	// addi r5,r11,-15136
	ctx.r5.s64 = r11.s64 + -15136;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256352C:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x825635bc
	if (!cr6.eq) goto loc_825635BC;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// bne cr6,0x825635bc
	if (!cr6.eq) goto loc_825635BC;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82563578
	if (cr6.eq) goto loc_82563578;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82563578:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825635b4
	if (cr6.eq) goto loc_825635B4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825635b4
	if (cr6.eq) goto loc_825635B4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825635B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82563618
	goto loc_82563618;
loc_825635BC:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x825635d8
	if (cr6.eq) goto loc_825635D8;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_825635D8:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82563614
	if (cr6.eq) goto loc_82563614;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82563614
	if (cr6.eq) goto loc_82563614;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82563614:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82563618:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82563620"))) PPC_WEAK_FUNC(sub_82563620);
PPC_FUNC_IMPL(__imp__sub_82563620) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// addi r30,r11,-15792
	r30.s64 = r11.s64 + -15792;
	// bne cr6,0x82563674
	if (!cr6.eq) goto loc_82563674;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,677
	ctx.r7.s64 = 677;
	// addi r5,r11,9296
	ctx.r5.s64 = r11.s64 + 9296;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563674:
	// cmpwi cr6,r29,16
	cr6.compare<int32_t>(r29.s32, 16, xer);
	// blt cr6,0x82563698
	if (cr6.lt) goto loc_82563698;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,678
	ctx.r7.s64 = 678;
	// addi r5,r11,-15124
	ctx.r5.s64 = r11.s64 + -15124;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563698:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// bge cr6,0x825636bc
	if (!cr6.lt) goto loc_825636BC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,679
	ctx.r7.s64 = 679;
	// addi r5,r11,-15136
	ctx.r5.s64 = r11.s64 + -15136;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825636BC:
	// li r4,135
	ctx.r4.s64 = 135;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// cmplwi cr6,r3,1
	cr6.compare<uint32_t>(ctx.r3.u32, 1, xer);
	// bne cr6,0x8256374c
	if (!cr6.eq) goto loc_8256374C;
	// cmplwi cr6,r31,2
	cr6.compare<uint32_t>(r31.u32, 2, xer);
	// bne cr6,0x8256374c
	if (!cr6.eq) goto loc_8256374C;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82563708
	if (cr6.eq) goto loc_82563708;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82563708:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82563744
	if (cr6.eq) goto loc_82563744;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82563744
	if (cr6.eq) goto loc_82563744;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82563744:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825637a8
	goto loc_825637A8;
loc_8256374C:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82563768
	if (cr6.eq) goto loc_82563768;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x824a2eb0
	sub_824A2EB0(ctx, base);
loc_82563768:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x825637a4
	if (cr6.eq) goto loc_825637A4;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x825637a4
	if (cr6.eq) goto loc_825637A4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r4,r11,-15696
	ctx.r4.s64 = r11.s64 + -15696;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// addi r11,r11,-10536
	r11.s64 = r11.s64 + -10536;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825637A4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825637A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_825637B0"))) PPC_WEAK_FUNC(sub_825637B0);
PPC_FUNC_IMPL(__imp__sub_825637B0) {
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x825637fc
	if (!cr6.eq) goto loc_825637FC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,683
	ctx.r7.s64 = 683;
	// addi r6,r11,-15104
	ctx.r6.s64 = r11.s64 + -15104;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r11,-15112
	ctx.r5.s64 = r11.s64 + -15112;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825637FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82563810
	if (!cr0.eq) goto loc_82563810;
loc_82563808:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8256384c
	goto loc_8256384C;
loc_82563810:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82563808
	if (cr6.eq) goto loc_82563808;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_8256381C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x82563854
	if (!cr6.eq) goto loc_82563854;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r29,r28
	cr6.compare<uint32_t>(r29.u32, r28.u32, xer);
	// bne cr6,0x82563864
	if (!cr6.eq) goto loc_82563864;
	// li r27,1
	r27.s64 = 1;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
loc_82563848:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
loc_8256384C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_82563854:
	// bge cr6,0x82563860
	if (!cr6.lt) goto loc_82563860;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82563864
	goto loc_82563864;
loc_82563860:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
loc_82563864:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256381c
	if (!cr6.eq) goto loc_8256381C;
	// b 0x82563848
	goto loc_82563848;
}

__attribute__((alias("__imp__sub_82563870"))) PPC_WEAK_FUNC(sub_82563870);
PPC_FUNC_IMPL(__imp__sub_82563870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82563880
	if (cr6.eq) goto loc_82563880;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
loc_82563880:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563888"))) PPC_WEAK_FUNC(sub_82563888);
PPC_FUNC_IMPL(__imp__sub_82563888) {
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
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x8253a740
	sub_8253A740(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r30.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
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

__attribute__((alias("__imp__sub_825638DC"))) PPC_WEAK_FUNC(sub_825638DC);
PPC_FUNC_IMPL(__imp__sub_825638DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825638E0"))) PPC_WEAK_FUNC(sub_825638E0);
PPC_FUNC_IMPL(__imp__sub_825638E0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r28,r11,-15104
	r28.s64 = r11.s64 + -15104;
	// bne cr6,0x82563930
	if (!cr6.eq) goto loc_82563930;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,66
	ctx.r7.s64 = 66;
	// addi r5,r11,23752
	ctx.r5.s64 = r11.s64 + 23752;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563930:
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// bne cr6,0x82563954
	if (!cr6.eq) goto loc_82563954;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r7,67
	ctx.r7.s64 = 67;
	// addi r5,r11,23740
	ctx.r5.s64 = r11.s64 + 23740;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563954:
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r30
	ctr.u64 = r30.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82563988
	if (!cr0.eq) goto loc_82563988;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,70
	ctx.r7.s64 = 70;
	// addi r5,r11,-15000
	ctx.r5.s64 = r11.s64 + -15000;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563988:
	// li r11,0
	r11.s64 = 0;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// stw r26,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r26.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// bl 0x8253a610
	sub_8253A610(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// bne 0x825639e4
	if (!cr0.eq) goto loc_825639E4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,88
	ctx.r7.s64 = 88;
	// addi r5,r11,-15024
	ctx.r5.s64 = r11.s64 + -15024;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825639E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_825639F0"))) PPC_WEAK_FUNC(sub_825639F0);
PPC_FUNC_IMPL(__imp__sub_825639F0) {
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
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r25,r6
	r25.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// lwz r24,20(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r28,1
	r28.s64 = 1;
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82563b5c
	if (cr6.eq) goto loc_82563B5C;
	// lwz r30,0(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// bne 0x82563a4c
	if (!cr0.eq) goto loc_82563A4C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82563888
	sub_82563888(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_82563A4C:
	// cmplwi cr6,r27,0
	cr6.compare<uint32_t>(r27.u32, 0, xer);
	// beq cr6,0x82563b14
	if (cr6.eq) goto loc_82563B14;
loc_82563A54:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bne cr6,0x82563aa8
	if (!cr6.eq) goto loc_82563AA8;
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// beq cr6,0x82563b14
	if (cr6.eq) goto loc_82563B14;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82563aa0
	if (!cr6.eq) goto loc_82563AA0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82563888
	sub_82563888(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_82563AA0:
	// lwz r30,12(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// b 0x82563b08
	goto loc_82563B08;
loc_82563AA8:
	// bge cr6,0x82563adc
	if (!cr6.lt) goto loc_82563ADC;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82563ad4
	if (!cr6.eq) goto loc_82563AD4;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82563888
	sub_82563888(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r3.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_82563AD4:
	// lwz r30,4(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// b 0x82563b08
	goto loc_82563B08;
loc_82563ADC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82563b04
	if (!cr6.eq) goto loc_82563B04;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82563888
	sub_82563888(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r3.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_82563B04:
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_82563B08:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplw cr6,r26,r27
	cr6.compare<uint32_t>(r26.u32, r27.u32, xer);
	// blt cr6,0x82563a54
	if (cr6.lt) goto loc_82563A54;
loc_82563B14:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bge cr6,0x82563b5c
	if (!cr6.lt) goto loc_82563B5C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82563888
	sub_82563888(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r3.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82563b54
	if (!cr6.gt) goto loc_82563B54;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_82563B54:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// b 0x82563b60
	goto loc_82563B60;
loc_82563B5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82563B60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82563B68"))) PPC_WEAK_FUNC(sub_82563B68);
PPC_FUNC_IMPL(__imp__sub_82563B68) {
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
	// lis r11,-32246
	r11.s64 = -2113273856;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r26,r11,-15104
	r26.s64 = r11.s64 + -15104;
	// bne cr6,0x82563bac
	if (!cr6.eq) goto loc_82563BAC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,572
	ctx.r7.s64 = 572;
	// addi r5,r11,-15112
	ctx.r5.s64 = r11.s64 + -15112;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563BAC:
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r28,0
	r28.s64 = 0;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82563c6c
	if (cr6.lt) goto loc_82563C6C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r25,r11,-14988
	r25.s64 = r11.s64 + -14988;
loc_82563BC8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82563bec
	if (!cr0.eq) goto loc_82563BEC;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82563bec
	if (!cr0.eq) goto loc_82563BEC;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82563bf4
	if (cr0.eq) goto loc_82563BF4;
loc_82563BEC:
	// mr r31,r11
	r31.u64 = r11.u64;
	// b 0x82563bc8
	goto loc_82563BC8;
loc_82563BF4:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// bl 0x8253a840
	sub_8253A840(ctx, base);
	// lwz r11,20(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r11.u32);
	// beq 0x82563c68
	if (cr0.eq) goto loc_82563C68;
	// mr r30,r31
	r30.u64 = r31.u64;
	// lwz r31,16(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x82563c38
	if (!cr0.eq) goto loc_82563C38;
	// li r7,616
	ctx.r7.s64 = 616;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563C38:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82563c4c
	if (!cr6.eq) goto loc_82563C4C;
	// stw r28,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r28.u32);
	// b 0x82563bc8
	goto loc_82563BC8;
loc_82563C4C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82563c60
	if (!cr6.eq) goto loc_82563C60;
	// stw r28,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r28.u32);
	// b 0x82563bc8
	goto loc_82563BC8;
loc_82563C60:
	// stw r28,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r28.u32);
	// b 0x82563bc8
	goto loc_82563BC8;
loc_82563C68:
	// stw r28,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r28.u32);
loc_82563C6C:
	// stw r28,24(r29)
	PPC_STORE_U32(r29.u32 + 24, r28.u32);
	// stw r28,20(r29)
	PPC_STORE_U32(r29.u32 + 20, r28.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82563C7C"))) PPC_WEAK_FUNC(sub_82563C7C);
PPC_FUNC_IMPL(__imp__sub_82563C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563C80"))) PPC_WEAK_FUNC(sub_82563C80);
PPC_FUNC_IMPL(__imp__sub_82563C80) {
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
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// bne cr6,0x82563cbc
	if (!cr6.eq) goto loc_82563CBC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,109
	ctx.r7.s64 = 109;
	// addi r6,r11,-15104
	ctx.r6.s64 = r11.s64 + -15104;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r5,r11,-15112
	ctx.r5.s64 = r11.s64 + -15112;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563CBC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82563b68
	sub_82563B68(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x8253a6d0
	sub_8253A6D0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82563CF4"))) PPC_WEAK_FUNC(sub_82563CF4);
PPC_FUNC_IMPL(__imp__sub_82563CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82563CF8"))) PPC_WEAK_FUNC(sub_82563CF8);
PPC_FUNC_IMPL(__imp__sub_82563CF8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-25033
	r11.s64 = -1640562688;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// ori r10,r11,31161
	ctx.r10.u64 = r11.u64 | 31161;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// blt cr6,0x82563dd4
	if (cr6.lt) goto loc_82563DD4;
	// li r8,3
	ctx.r8.s64 = 3;
	// divwu r8,r4,r8
	ctx.r8.u32 = ctx.r4.u32 / ctx.r8.u32;
loc_82563D1C:
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r6,r9,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r9.s64;
	// rlwinm r5,r9,19,13,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r6,r10,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r11,r6,r11
	r11.u64 = ctx.r6.u64 + r11.u64;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// xor r11,r11,r5
	r11.u64 = r11.u64 ^ ctx.r5.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r6,r11,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r6,r10,19,13,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// rlwinm r6,r9,20,12,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r6
	r11.u64 = r11.u64 ^ ctx.r6.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r6,r11,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r6,r10,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// rlwinm r6,r9,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r6
	r11.u64 = r11.u64 ^ ctx.r6.u64;
	// rlwinm r6,r11,10,0,21
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// xor r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r6.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r6,r10,17,15,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// bne 0x82563d1c
	if (!cr0.eq) goto loc_82563D1C;
loc_82563DD4:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r7,1
	cr6.compare<uint32_t>(ctx.r7.u32, 1, xer);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// beq cr6,0x82563df4
	if (cr6.eq) goto loc_82563DF4;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// bne cr6,0x82563dfc
	if (!cr6.eq) goto loc_82563DFC;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
loc_82563DF4:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r8,r11
	r11.u64 = ctx.r8.u64 + r11.u64;
loc_82563DFC:
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// rlwinm r8,r9,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x7FFFF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r8
	r11.u64 = r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r8,r11,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r8,r10,19,13,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x7FFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// rlwinm r8,r9,20,12,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xFFFFF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r8
	r11.u64 = r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r8,r10,27,5,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x7FFFFFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// rlwinm r8,r9,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// xor r11,r11,r8
	r11.u64 = r11.u64 ^ ctx.r8.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// rlwinm r8,r11,10,0,21
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r10,r10,17,15,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1FFFF;
	// subf r11,r11,r9
	r11.s64 = ctx.r9.s64 - r11.s64;
	// xor r3,r11,r10
	ctx.r3.u64 = r11.u64 ^ ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82563E90"))) PPC_WEAK_FUNC(sub_82563E90);
PPC_FUNC_IMPL(__imp__sub_82563E90) {
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
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,-13432
	r11.s64 = r11.s64 + -13432;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// lwz r26,8(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,-13880
	r29.s64 = r11.s64 + -13880;
	// bne cr6,0x82563ee8
	if (!cr6.eq) goto loc_82563EE8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1690
	ctx.r7.s64 = 1690;
	// addi r5,r11,-30488
	ctx.r5.s64 = r11.s64 + -30488;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563EE8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254f010
	sub_8254F010(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82563f14
	if (!cr0.eq) goto loc_82563F14;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1691
	ctx.r7.s64 = 1691;
	// addi r5,r11,-13788
	ctx.r5.s64 = r11.s64 + -13788;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563F14:
	// rlwinm r11,r28,4,0,27
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r31,r11,r26
	r31.u64 = r11.u64 + r26.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8254f010
	sub_8254F010(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8254f010
	sub_8254F010(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r3,r11
	r11.u64 = ctx.r3.u64 + r11.u64;
	// slw r10,r27,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r27.u32 << (ctx.r10.u8 & 0x3F));
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82563F88"))) PPC_WEAK_FUNC(sub_82563F88);
PPC_FUNC_IMPL(__imp__sub_82563F88) {
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
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r5
	r26.u64 = ctx.r5.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r22,r6
	r22.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// bl 0x82581c98
	sub_82581C98(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8972
	r25.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r24,r11,-13880
	r24.s64 = r11.s64 + -13880;
	// mr. r19,r3
	r19.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r19.s32, 0, xer);
	// bne 0x82563fe8
	if (!cr0.eq) goto loc_82563FE8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1730
	ctx.r7.s64 = 1730;
	// addi r5,r11,-13748
	ctx.r5.s64 = r11.s64 + -13748;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82563FE8:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82564028
	if (!cr6.eq) goto loc_82564028;
	// lfs f13,4(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82564028
	if (!cr6.eq) goto loc_82564028;
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82564028
	if (!cr6.eq) goto loc_82564028;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// bne cr6,0x82564028
	if (!cr6.eq) goto loc_82564028;
	// li r11,0
	r11.s64 = 0;
	// b 0x82564150
	goto loc_82564150;
loc_82564028:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82581ef8
	sub_82581EF8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r23,r11,-13768
	r23.s64 = r11.s64 + -13768;
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x8256405c
	if (cr0.gt) goto loc_8256405C;
	// li r7,1750
	ctx.r7.s64 = 1750;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256405C:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x82564098
	if (!cr6.gt) goto loc_82564098;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r28,r30,r11
	r28.s64 = r11.s64 - r30.s64;
	// subf r27,r30,r10
	r27.s64 = ctx.r10.s64 - r30.s64;
loc_82564074:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// lwzx r5,r28,r30
	ctx.r5.u64 = PPC_LOAD_U32(r28.u32 + r30.u32);
	// li r4,128
	ctx.r4.s64 = 128;
	// lfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82582380
	sub_82582380(ctx, base);
	// stwx r3,r27,r30
	PPC_STORE_U32(r27.u32 + r30.u32, ctx.r3.u32);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bne 0x82564074
	if (!cr0.eq) goto loc_82564074;
loc_82564098:
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82582218
	sub_82582218(ctx, base);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825821e0
	sub_825821E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bgt 0x825640dc
	if (cr0.gt) goto loc_825640DC;
	// li r7,1763
	ctx.r7.s64 = 1763;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825640DC:
	// cmplwi cr6,r19,1
	cr6.compare<uint32_t>(r19.u32, 1, xer);
	// beq cr6,0x82564130
	if (cr6.eq) goto loc_82564130;
	// cmplwi cr6,r19,2
	cr6.compare<uint32_t>(r19.u32, 2, xer);
	// beq cr6,0x82564114
	if (cr6.eq) goto loc_82564114;
	// cmplwi cr6,r19,4
	cr6.compare<uint32_t>(r19.u32, 4, xer);
	// beq cr6,0x8256410c
	if (cr6.eq) goto loc_8256410C;
	// cmplwi cr6,r19,8
	cr6.compare<uint32_t>(r19.u32, 8, xer);
	// bne cr6,0x82564160
	if (!cr6.eq) goto loc_82564160;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// b 0x8256415c
	goto loc_8256415C;
loc_8256410C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// b 0x82564154
	goto loc_82564154;
loc_82564114:
	// li r11,0
	r11.s64 = 0;
	// sth r11,0(r31)
	PPC_STORE_U16(r31.u32 + 0, r11.u16);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// b 0x82564150
	goto loc_82564150;
loc_82564130:
	// lbz r11,3(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 3);
	// rotlwi r10,r11,8
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 8);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
loc_82564150:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82564154:
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_8256415C:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
loc_82564160:
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8256416C"))) PPC_WEAK_FUNC(sub_8256416C);
PPC_FUNC_IMPL(__imp__sub_8256416C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564170"))) PPC_WEAK_FUNC(sub_82564170);
PPC_FUNC_IMPL(__imp__sub_82564170) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// cmpwi cr6,r29,-1
	cr6.compare<int32_t>(r29.s32, -1, xer);
	// beq cr6,0x825641cc
	if (cr6.eq) goto loc_825641CC;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// b 0x825641f0
	goto loc_825641F0;
loc_825641CC:
	// li r4,960
	ctx.r4.s64 = 960;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r4,961
	ctx.r4.s64 = 961;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a28a0
	sub_824A28A0(ctx, base);
	// lis r24,770
	r24.s64 = 50462720;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// ori r24,r24,256
	r24.u64 = r24.u64 | 256;
loc_825641F0:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r28,r11,-13880
	r28.s64 = r11.s64 + -13880;
	// beq cr6,0x82564210
	if (cr6.eq) goto loc_82564210;
	// cmplwi cr6,r30,17
	cr6.compare<uint32_t>(r30.u32, 17, xer);
	// blt cr6,0x8256422c
	if (cr6.lt) goto loc_8256422C;
loc_82564210:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,321
	ctx.r7.s64 = 321;
	// addi r5,r11,-11824
	ctx.r5.s64 = r11.s64 + -11824;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256422C:
	// clrlwi r26,r27,24
	r26.u64 = r27.u32 & 0xFF;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mulli r31,r30,12
	r31.s64 = r30.s64 * 12;
	// cmplwi cr6,r26,64
	cr6.compare<uint32_t>(r26.u32, 64, xer);
	// addi r30,r11,-14976
	r30.s64 = r11.s64 + -14976;
	// bne cr6,0x82564288
	if (!cr6.eq) goto loc_82564288;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// bne cr6,0x82564274
	if (!cr6.eq) goto loc_82564274;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,331
	ctx.r7.s64 = 331;
	// addi r5,r11,-11852
	ctx.r5.s64 = r11.s64 + -11852;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564274:
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// bne cr6,0x825642a4
	if (!cr6.eq) goto loc_825642A4;
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// b 0x825642a0
	goto loc_825642A0;
loc_82564288:
	// lwzx r11,r31,r30
	r11.u64 = PPC_LOAD_U32(r31.u32 + r30.u32);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
	// bne cr6,0x825642a4
	if (!cr6.eq) goto loc_825642A4;
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// lwzx r11,r31,r11
	r11.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
loc_825642A0:
	// stw r11,4(r25)
	PPC_STORE_U32(r25.u32 + 4, r11.u32);
loc_825642A4:
	// addi r11,r30,8
	r11.s64 = r30.s64 + 8;
	// lwzx r30,r31,r11
	r30.u64 = PPC_LOAD_U32(r31.u32 + r11.u32);
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// blt cr6,0x825642dc
	if (cr6.lt) goto loc_825642DC;
	// rlwinm r11,r27,24,24,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 24) & 0xFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x825642dc
	if (cr6.eq) goto loc_825642DC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,369
	ctx.r7.s64 = 369;
	// addi r5,r11,-11968
	ctx.r5.s64 = r11.s64 + -11968;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825642DC:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x8256430c
	if (cr6.lt) goto loc_8256430C;
	// rlwinm r11,r27,16,24,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x8256430c
	if (cr6.eq) goto loc_8256430C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,372
	ctx.r7.s64 = 372;
	// addi r5,r11,-12088
	ctx.r5.s64 = r11.s64 + -12088;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256430C:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x8256433c
	if (cr6.lt) goto loc_8256433C;
	// rlwinm r11,r27,8,24,31
	r11.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 8) & 0xFF;
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// beq cr6,0x8256433c
	if (cr6.eq) goto loc_8256433C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,375
	ctx.r7.s64 = 375;
	// addi r5,r11,-12208
	ctx.r5.s64 = r11.s64 + -12208;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256433C:
	// cmplwi cr6,r26,34
	cr6.compare<uint32_t>(r26.u32, 34, xer);
	// bne cr6,0x82564360
	if (!cr6.eq) goto loc_82564360;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,383
	ctx.r7.s64 = 383;
	// addi r5,r11,-12288
	ctx.r5.s64 = r11.s64 + -12288;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564360:
	// cmplwi cr6,r26,35
	cr6.compare<uint32_t>(r26.u32, 35, xer);
	// bne cr6,0x82564384
	if (!cr6.eq) goto loc_82564384;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,385
	ctx.r7.s64 = 385;
	// addi r5,r11,-12368
	ctx.r5.s64 = r11.s64 + -12368;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564384:
	// cmplwi cr6,r26,17
	cr6.compare<uint32_t>(r26.u32, 17, xer);
	// bne cr6,0x825643a8
	if (!cr6.eq) goto loc_825643A8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,387
	ctx.r7.s64 = 387;
	// addi r5,r11,-12448
	ctx.r5.s64 = r11.s64 + -12448;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825643A8:
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// bne cr6,0x825643cc
	if (!cr6.eq) goto loc_825643CC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,389
	ctx.r7.s64 = 389;
	// addi r5,r11,-12536
	ctx.r5.s64 = r11.s64 + -12536;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825643CC:
	// cmplwi cr6,r26,18
	cr6.compare<uint32_t>(r26.u32, 18, xer);
	// bne cr6,0x825643f0
	if (!cr6.eq) goto loc_825643F0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,391
	ctx.r7.s64 = 391;
	// addi r5,r11,-12624
	ctx.r5.s64 = r11.s64 + -12624;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825643F0:
	// li r31,1
	r31.s64 = 1;
	// cmplwi cr6,r26,1
	cr6.compare<uint32_t>(r26.u32, 1, xer);
	// blt cr6,0x82564448
	if (cr6.lt) goto loc_82564448;
	// beq cr6,0x82564440
	if (cr6.eq) goto loc_82564440;
	// cmplwi cr6,r26,3
	cr6.compare<uint32_t>(r26.u32, 3, xer);
	// beq cr6,0x82564438
	if (cr6.eq) goto loc_82564438;
	// cmplwi cr6,r26,32
	cr6.compare<uint32_t>(r26.u32, 32, xer);
	// beq cr6,0x82564430
	if (cr6.eq) goto loc_82564430;
	// cmplwi cr6,r26,33
	cr6.compare<uint32_t>(r26.u32, 33, xer);
	// beq cr6,0x82564428
	if (cr6.eq) goto loc_82564428;
	// cmplwi cr6,r26,64
	cr6.compare<uint32_t>(r26.u32, 64, xer);
	// bne cr6,0x82564448
	if (!cr6.eq) goto loc_82564448;
	// li r11,7
	r11.s64 = 7;
	// b 0x8256444c
	goto loc_8256444C;
loc_82564428:
	// li r11,3
	r11.s64 = 3;
	// b 0x8256444c
	goto loc_8256444C;
loc_82564430:
	// li r11,2
	r11.s64 = 2;
	// b 0x8256444c
	goto loc_8256444C;
loc_82564438:
	// li r11,4
	r11.s64 = 4;
	// b 0x8256444c
	goto loc_8256444C;
loc_82564440:
	// stw r31,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r31.u32);
	// b 0x82564450
	goto loc_82564450;
loc_82564448:
	// li r11,0
	r11.s64 = 0;
loc_8256444C:
	// stw r11,8(r25)
	PPC_STORE_U32(r25.u32 + 8, r11.u32);
loc_82564450:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82564504
	if (!cr0.eq) goto loc_82564504;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// blt cr6,0x82564498
	if (cr6.lt) goto loc_82564498;
	// rlwinm r11,r24,24,24,31
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82564498
	if (cr6.eq) goto loc_82564498;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x82564498
	if (cr6.eq) goto loc_82564498;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82564498
	if (cr6.eq) goto loc_82564498;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,450
	ctx.r7.s64 = 450;
	// addi r5,r11,-12880
	ctx.r5.s64 = r11.s64 + -12880;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564498:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x825644d8
	if (cr6.lt) goto loc_825644D8;
	// rlwinm r11,r24,16,24,31
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x825644d8
	if (cr6.eq) goto loc_825644D8;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x825644d8
	if (cr6.eq) goto loc_825644D8;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x825644d8
	if (cr6.eq) goto loc_825644D8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,454
	ctx.r7.s64 = 454;
	// addi r5,r11,-13136
	ctx.r5.s64 = r11.s64 + -13136;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825644D8:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825645e4
	if (cr6.lt) goto loc_825645E4;
	// rlwinm r11,r24,8,24,31
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825645e4
	if (cr6.eq) goto loc_825645E4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x825645e4
	if (cr6.eq) goto loc_825645E4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x825645e4
	if (cr6.eq) goto loc_825645E4;
	// li r7,458
	ctx.r7.s64 = 458;
	// b 0x825645cc
	goto loc_825645CC;
loc_82564504:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82564528
	if (cr6.eq) goto loc_82564528;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,466
	ctx.r7.s64 = 466;
	// addi r5,r11,-13216
	ctx.r5.s64 = r11.s64 + -13216;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564528:
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// blt cr6,0x82564568
	if (cr6.lt) goto loc_82564568;
	// rlwinm r11,r24,24,24,31
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 24) & 0xFF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82564568
	if (cr6.eq) goto loc_82564568;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x82564568
	if (cr6.eq) goto loc_82564568;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82564568
	if (cr6.eq) goto loc_82564568;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,472
	ctx.r7.s64 = 472;
	// addi r5,r11,-12880
	ctx.r5.s64 = r11.s64 + -12880;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564568:
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// blt cr6,0x825645a4
	if (cr6.lt) goto loc_825645A4;
	// rlwinm. r11,r24,16,24,31
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825645a4
	if (cr0.eq) goto loc_825645A4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x825645a4
	if (cr6.eq) goto loc_825645A4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x825645a4
	if (cr6.eq) goto loc_825645A4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,476
	ctx.r7.s64 = 476;
	// addi r5,r11,-13472
	ctx.r5.s64 = r11.s64 + -13472;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825645A4:
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x825645e4
	if (cr6.lt) goto loc_825645E4;
	// rlwinm r11,r24,8,24,31
	r11.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 8) & 0xFF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x825645e4
	if (cr6.eq) goto loc_825645E4;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// beq cr6,0x825645e4
	if (cr6.eq) goto loc_825645E4;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x825645e4
	if (cr6.eq) goto loc_825645E4;
	// li r7,480
	ctx.r7.s64 = 480;
loc_825645CC:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// addi r5,r11,-13728
	ctx.r5.s64 = r11.s64 + -13728;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825645E4:
	// stw r31,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_825645F0"))) PPC_WEAK_FUNC(sub_825645F0);
PPC_FUNC_IMPL(__imp__sub_825645F0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,36
	ctx.r4.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x824a2ba8
	sub_824A2BA8(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r30,r11,-13880
	r30.s64 = r11.s64 + -13880;
	// beq cr6,0x8256465c
	if (cr6.eq) goto loc_8256465C;
	// cmplwi cr6,r29,17
	cr6.compare<uint32_t>(r29.u32, 17, xer);
	// blt cr6,0x82564678
	if (cr6.lt) goto loc_82564678;
loc_8256465C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,553
	ctx.r7.s64 = 553;
	// addi r5,r11,-11764
	ctx.r5.s64 = r11.s64 + -11764;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564678:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// rlwinm r10,r29,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bne cr6,0x825646b4
	if (!cr6.eq) goto loc_825646B4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-14768
	r11.s64 = r11.s64 + -14768;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bne 0x8256471c
	if (!cr0.eq) goto loc_8256471C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,564
	ctx.r7.s64 = 564;
	// addi r5,r11,-11780
	ctx.r5.s64 = r11.s64 + -11780;
	// b 0x8256470c
	goto loc_8256470C;
loc_825646B4:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-14768
	r11.s64 = r11.s64 + -14768;
	// bne cr6,0x825646e8
	if (!cr6.eq) goto loc_825646E8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bne 0x8256471c
	if (!cr0.eq) goto loc_8256471C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,572
	ctx.r7.s64 = 572;
	// addi r5,r11,-11780
	ctx.r5.s64 = r11.s64 + -11780;
	// b 0x8256470c
	goto loc_8256470C;
loc_825646E8:
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bne 0x8256471c
	if (!cr0.eq) goto loc_8256471C;
	// cmplwi cr6,r29,1
	cr6.compare<uint32_t>(r29.u32, 1, xer);
	// beq cr6,0x8256471c
	if (cr6.eq) goto loc_8256471C;
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r7,585
	ctx.r7.s64 = 585;
	// addi r5,r11,-21448
	ctx.r5.s64 = r11.s64 + -21448;
loc_8256470C:
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256471C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82564724"))) PPC_WEAK_FUNC(sub_82564724);
PPC_FUNC_IMPL(__imp__sub_82564724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564728"))) PPC_WEAK_FUNC(sub_82564728);
PPC_FUNC_IMPL(__imp__sub_82564728) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82564770
	if (!cr6.eq) goto loc_82564770;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,244
	ctx.r7.s64 = 244;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-11676
	ctx.r5.s64 = r11.s64 + -11676;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564770:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825828f0
	sub_825828F0(ctx, base);
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82564788"))) PPC_WEAK_FUNC(sub_82564788);
PPC_FUNC_IMPL(__imp__sub_82564788) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2144(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2144);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564790"))) PPC_WEAK_FUNC(sub_82564790);
PPC_FUNC_IMPL(__imp__sub_82564790) {
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
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x825748a8
	sub_825748A8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,370(r11)
	PPC_STORE_U8(r11.u32 + 370, ctx.r10.u8);
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

__attribute__((alias("__imp__sub_825647CC"))) PPC_WEAK_FUNC(sub_825647CC);
PPC_FUNC_IMPL(__imp__sub_825647CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825647D0"))) PPC_WEAK_FUNC(sub_825647D0);
PPC_FUNC_IMPL(__imp__sub_825647D0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r11,0
	r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
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

__attribute__((alias("__imp__sub_82564824"))) PPC_WEAK_FUNC(sub_82564824);
PPC_FUNC_IMPL(__imp__sub_82564824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564828"))) PPC_WEAK_FUNC(sub_82564828);
PPC_FUNC_IMPL(__imp__sub_82564828) {
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
	// addi r31,r3,184
	r31.s64 = ctx.r3.s64 + 184;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580ed0
	sub_82580ED0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82580f50
	sub_82580F50(ctx, base);
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

__attribute__((alias("__imp__sub_82564870"))) PPC_WEAK_FUNC(sub_82564870);
PPC_FUNC_IMPL(__imp__sub_82564870) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2072(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2072);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564878"))) PPC_WEAK_FUNC(sub_82564878);
PPC_FUNC_IMPL(__imp__sub_82564878) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,2076(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2076);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564880"))) PPC_WEAK_FUNC(sub_82564880);
PPC_FUNC_IMPL(__imp__sub_82564880) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,2073(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2073);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82564888"))) PPC_WEAK_FUNC(sub_82564888);
PPC_FUNC_IMPL(__imp__sub_82564888) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-11504
	r11.s64 = r11.s64 + -11504;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x825648bc
	if (cr0.eq) goto loc_825648BC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825648BC:
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

__attribute__((alias("__imp__sub_825648D4"))) PPC_WEAK_FUNC(sub_825648D4);
PPC_FUNC_IMPL(__imp__sub_825648D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825648D8"))) PPC_WEAK_FUNC(sub_825648D8);
PPC_FUNC_IMPL(__imp__sub_825648D8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82564908
	if (!cr6.lt) goto loc_82564908;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8256490c
	goto loc_8256490C;
loc_82564908:
	// li r11,0
	r11.s64 = 0;
loc_8256490C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
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

__attribute__((alias("__imp__sub_82564934"))) PPC_WEAK_FUNC(sub_82564934);
PPC_FUNC_IMPL(__imp__sub_82564934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564938"))) PPC_WEAK_FUNC(sub_82564938);
PPC_FUNC_IMPL(__imp__sub_82564938) {
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256497c
	if (!cr0.eq) goto loc_8256497C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1902
	ctx.r7.s64 = 1902;
	// addi r6,r11,-11472
	ctx.r6.s64 = r11.s64 + -11472;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-11500
	ctx.r5.s64 = r11.s64 + -11500;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256497C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,58
	r11.s64 = r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
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

__attribute__((alias("__imp__sub_825649A0"))) PPC_WEAK_FUNC(sub_825649A0);
PPC_FUNC_IMPL(__imp__sub_825649A0) {
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825649e4
	if (!cr0.eq) goto loc_825649E4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1909
	ctx.r7.s64 = 1909;
	// addi r6,r11,-11472
	ctx.r6.s64 = r11.s64 + -11472;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-11500
	ctx.r5.s64 = r11.s64 + -11500;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825649E4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,58
	r11.s64 = r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r10,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r10,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82564A24"))) PPC_WEAK_FUNC(sub_82564A24);
PPC_FUNC_IMPL(__imp__sub_82564A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564A28"))) PPC_WEAK_FUNC(sub_82564A28);
PPC_FUNC_IMPL(__imp__sub_82564A28) {
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
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82564a70
	if (!cr6.eq) goto loc_82564A70;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1919
	ctx.r7.s64 = 1919;
	// addi r6,r11,-11472
	ctx.r6.s64 = r11.s64 + -11472;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-11392
	ctx.r5.s64 = r11.s64 + -11392;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564A70:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// beq 0x82564aac
	if (cr0.eq) goto loc_82564AAC;
	// addi r10,r11,57
	ctx.r10.s64 = r11.s64 + 57;
	// addi r11,r11,58
	r11.s64 = r11.s64 + 58;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,57
	r11.s64 = r11.s64 + 57;
	// b 0x82564ab0
	goto loc_82564AB0;
loc_82564AAC:
	// addi r11,r11,58
	r11.s64 = r11.s64 + 58;
loc_82564AB0:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r30.u32);
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

__attribute__((alias("__imp__sub_82564AD0"))) PPC_WEAK_FUNC(sub_82564AD0);
PPC_FUNC_IMPL(__imp__sub_82564AD0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,-11472
	r29.s64 = r11.s64 + -11472;
	// ble cr6,0x82564b20
	if (!cr6.gt) goto loc_82564B20;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1945
	ctx.r7.s64 = 1945;
	// addi r5,r11,-11304
	ctx.r5.s64 = r11.s64 + -11304;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564B20:
	// lwz r11,952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// lbz r11,369(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 369);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82564b64
	if (cr0.eq) goto loc_82564B64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bne cr6,0x82564b64
	if (!cr6.eq) goto loc_82564B64;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82564b64
	if (cr0.eq) goto loc_82564B64;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1948
	ctx.r7.s64 = 1948;
	// addi r5,r11,-11376
	ctx.r5.s64 = r11.s64 + -11376;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564B64:
	// addi r11,r28,58
	r11.s64 = r28.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, r27.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82564B78"))) PPC_WEAK_FUNC(sub_82564B78);
PPC_FUNC_IMPL(__imp__sub_82564B78) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82564bb4
	if (cr0.eq) goto loc_82564BB4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82564BB4:
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

__attribute__((alias("__imp__sub_82564BD0"))) PPC_WEAK_FUNC(sub_82564BD0);
PPC_FUNC_IMPL(__imp__sub_82564BD0) {
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
	// lwz r3,2068(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2068);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
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

__attribute__((alias("__imp__sub_82564C08"))) PPC_WEAK_FUNC(sub_82564C08);
PPC_FUNC_IMPL(__imp__sub_82564C08) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 2068);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82564c84
	if (!cr6.gt) goto loc_82564C84;
	// li r30,0
	r30.s64 = 0;
loc_82564C34:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82564c4c
	if (!cr6.lt) goto loc_82564C4C;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x82564c54
	goto loc_82564C54;
loc_82564C4C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82564C54:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82564c6c
	if (!cr6.eq) goto loc_82564C6C;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 2068);
	// bl 0x82582b08
	sub_82582B08(ctx, base);
loc_82564C6C:
	// lwz r3,2068(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 2068);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82564c34
	if (cr6.lt) goto loc_82564C34;
loc_82564C84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82564C8C"))) PPC_WEAK_FUNC(sub_82564C8C);
PPC_FUNC_IMPL(__imp__sub_82564C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82564C90"))) PPC_WEAK_FUNC(sub_82564C90);
PPC_FUNC_IMPL(__imp__sub_82564C90) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r24,136(r25)
	r24.u64 = PPC_LOAD_U32(r25.u32 + 136);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82564e30
	if (cr6.eq) goto loc_82564E30;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,-11284
	r27.s64 = r11.s64 + -11284;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r11,-11648
	r26.s64 = r11.s64 + -11648;
loc_82564CC8:
	// lwz r31,28(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 28);
	// b 0x82564e14
	goto loc_82564E14;
loc_82564CD0:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82564e10
	if (cr0.eq) goto loc_82564E10;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r29,1
	r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82564d88
	if (cr6.lt) goto loc_82564D88;
	// addi r30,r31,84
	r30.s64 = r31.s64 + 84;
loc_82564D00:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,35
	cr6.compare<int32_t>(r11.s32, 35, xer);
	// beq cr6,0x82564d4c
	if (cr6.eq) goto loc_82564D4C;
	// cmpwi cr6,r11,36
	cr6.compare<int32_t>(r11.s32, 36, xer);
	// beq cr6,0x82564d4c
	if (cr6.eq) goto loc_82564D4C;
	// cmpwi cr6,r11,37
	cr6.compare<int32_t>(r11.s32, 37, xer);
	// beq cr6,0x82564d4c
	if (cr6.eq) goto loc_82564D4C;
	// cmpwi cr6,r11,38
	cr6.compare<int32_t>(r11.s32, 38, xer);
	// beq cr6,0x82564d4c
	if (cr6.eq) goto loc_82564D4C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// ble cr6,0x82564d00
	if (!cr6.gt) goto loc_82564D00;
	// b 0x82564d88
	goto loc_82564D88;
loc_82564D4C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,172(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x825740f0
	sub_825740F0(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82564d7c
	if (!cr0.eq) goto loc_82564D7C;
	// li r7,306
	ctx.r7.s64 = 306;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82564D7C:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825865e8
	sub_825865E8(ctx, base);
loc_82564D88:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82564dc8
	if (cr0.eq) goto loc_82564DC8;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// bl 0x825860d0
	sub_825860D0(ctx, base);
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bne cr6,0x82564dc8
	if (!cr6.eq) goto loc_82564DC8;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,172(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x825740f0
	sub_825740F0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82564dc8
	if (cr0.eq) goto loc_82564DC8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825865e8
	sub_825865E8(ctx, base);
loc_82564DC8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82564e10
	if (cr6.eq) goto loc_82564E10;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825855c8
	sub_825855C8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82564e10
	if (cr0.eq) goto loc_82564E10;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(r11.s32, 42, xer);
	// beq cr6,0x82564e10
	if (cr6.eq) goto loc_82564E10;
	// lwz r30,28(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x825865e8
	sub_825865E8(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x82583568
	sub_82583568(ctx, base);
loc_82564E10:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82564E14:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82564cd0
	if (!cr6.eq) goto loc_82564CD0;
	// lwz r24,8(r24)
	r24.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// lwz r11,8(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82564cc8
	if (!cr6.eq) goto loc_82564CC8;
loc_82564E30:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82564E38"))) PPC_WEAK_FUNC(sub_82564E38);
PPC_FUNC_IMPL(__imp__sub_82564E38) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82564e68
	if (cr0.eq) goto loc_82564E68;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82564E68:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r3,152(r31)
	PPC_STORE_U32(r31.u32 + 152, ctx.r3.u32);
	// addi r10,r30,1
	ctx.r10.s64 = r30.s64 + 1;
loc_82564E88:
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r8,152(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// stwx r9,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82564e88
	if (!cr0.eq) goto loc_82564E88;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82564EA8"))) PPC_WEAK_FUNC(sub_82564EA8);
PPC_FUNC_IMPL(__imp__sub_82564EA8) {
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
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,0
	r28.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82564f2c
	if (cr6.lt) goto loc_82564F2C;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
loc_82564ED4:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82564f08
	if (cr0.eq) goto loc_82564F08;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x82564f0c
	goto loc_82564F0C;
loc_82564F08:
	// li r30,0
	r30.s64 = 0;
loc_82564F0C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// stw r30,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r30.u32);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// ble cr6,0x82564ed4
	if (!cr6.gt) goto loc_82564ED4;
loc_82564F2C:
	// lwz r30,136(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// b 0x82564f54
	goto loc_82564F54;
loc_82564F34:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_82564F54:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82564f34
	if (!cr6.eq) goto loc_82564F34;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r3,160(r31)
	PPC_STORE_U32(r31.u32 + 160, ctx.r3.u32);
	// addi r29,r30,-1
	r29.s64 = r30.s64 + -1;
	// li r25,0
	r25.s64 = 0;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82564ffc
	if (cr6.lt) goto loc_82564FFC;
	// addi r27,r1,80
	r27.s64 = ctx.r1.s64 + 80;
loc_82564FA4:
	// lwz r26,0(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82564fe0
	if (cr6.eq) goto loc_82564FE0;
	// rotlwi r28,r26,0
	r28.u64 = __builtin_rotateleft32(r26.u32, 0);
	// rlwinm r30,r29,2,0,29
	r30.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
loc_82564FBC:
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825648d8
	sub_825648D8(ctx, base);
	// lwz r11,160(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// addi r29,r29,-1
	r29.s64 = r29.s64 + -1;
	// stwx r3,r30,r11
	PPC_STORE_U32(r30.u32 + r11.u32, ctx.r3.u32);
	// addi r30,r30,-4
	r30.s64 = r30.s64 + -4;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82564fbc
	if (!cr6.eq) goto loc_82564FBC;
loc_82564FE0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// ble cr6,0x82564fa4
	if (!cr6.gt) goto loc_82564FA4;
loc_82564FFC:
	// lwz r3,160(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82565008"))) PPC_WEAK_FUNC(sub_82565008);
PPC_FUNC_IMPL(__imp__sub_82565008) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,18
	ctx.r4.s64 = 18;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stb r11,2072(r31)
	PPC_STORE_U8(r31.u32 + 2072, r11.u8);
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,2076(r31)
	PPC_STORE_U32(r31.u32 + 2076, r11.u32);
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

__attribute__((alias("__imp__sub_82565050"))) PPC_WEAK_FUNC(sub_82565050);
PPC_FUNC_IMPL(__imp__sub_82565050) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82565008
	sub_82565008(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stb r11,2073(r30)
	PPC_STORE_U8(r30.u32 + 2073, r11.u8);
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x825831a8
	sub_825831A8(ctx, base);
	// b 0x82565160
	goto loc_82565160;
loc_82565084:
	// li r26,0
	r26.s64 = 0;
	// addi r25,r11,32
	r25.s64 = r11.s64 + 32;
loc_8256508C:
	// cntlzw r11,r26
	r11.u64 = r26.u32 == 0 ? 32 : __builtin_clz(r26.u32);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r27,r11,21
	r27.s64 = r11.s64 + 21;
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x8256514c
	if (!cr6.eq) goto loc_8256514C;
	// lwz r11,12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 12);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8256514c
	if (!cr6.eq) goto loc_8256514C;
	// li r3,38
	ctx.r3.s64 = 38;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_825650E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x825650e4
	if (cr6.lt) goto loc_825650E4;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
loc_8256514C:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// blt cr6,0x8256508c
	if (cr6.lt) goto loc_8256508C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825830e8
	sub_825830E8(ctx, base);
loc_82565160:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// mr r28,r11
	r28.u64 = r11.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// bne cr6,0x82565084
	if (!cr6.eq) goto loc_82565084;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_8256517C"))) PPC_WEAK_FUNC(sub_8256517C);
PPC_FUNC_IMPL(__imp__sub_8256517C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565180"))) PPC_WEAK_FUNC(sub_82565180);
PPC_FUNC_IMPL(__imp__sub_82565180) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,8972
	r21.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r20,r11,-11648
	r20.s64 = r11.s64 + -11648;
	// beq cr6,0x8256524c
	if (cr6.eq) goto loc_8256524C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x825740b8
	sub_825740B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825651f4
	if (!cr0.eq) goto loc_825651F4;
	// lwz r5,56(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// lwz r4,80(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574110
	sub_82574110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,128(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 128);
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x8256520c
	goto loc_8256520C;
loc_825651F4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,128(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 128);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_8256520C:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82565230
	if (!cr6.eq) goto loc_82565230;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,649
	ctx.r7.s64 = 649;
	// addi r5,r11,-11256
	ctx.r5.s64 = r11.s64 + -11256;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82565230:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
loc_8256524C:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// li r24,1
	r24.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82565504
	if (cr6.lt) goto loc_82565504;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r27,84
	r26.s64 = r27.s64 + 84;
	// addi r25,r11,-11688
	r25.s64 = r11.s64 + -11688;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// addi r22,r11,-3664
	r22.s64 = r11.s64 + -3664;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r23,r11,-11272
	r23.s64 = r11.s64 + -11272;
loc_82565278:
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// cmpwi cr6,r9,26
	cr6.compare<int32_t>(ctx.r9.s32, 26, xer);
	// beq cr6,0x8256528c
	if (cr6.eq) goto loc_8256528C;
	// cmpwi cr6,r9,27
	cr6.compare<int32_t>(ctx.r9.s32, 27, xer);
	// bne cr6,0x825652a4
	if (!cr6.eq) goto loc_825652A4;
loc_8256528C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r10.u32);
	// stw r10,-24(r26)
	PPC_STORE_U32(r26.u32 + -24, ctx.r10.u32);
	// stw r9,0(r26)
	PPC_STORE_U32(r26.u32 + 0, ctx.r9.u32);
loc_825652A4:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x825740b8
	sub_825740B8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825652ec
	if (!cr0.eq) goto loc_825652EC;
	// lwz r5,-24(r26)
	ctx.r5.u64 = PPC_LOAD_U32(r26.u32 + -24);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574110
	sub_82574110(ctx, base);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,-16(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -16);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82565304
	goto loc_82565304;
loc_825652EC:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// lwz r4,-16(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + -16);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82565304:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82583568
	sub_82583568(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,26
	cr6.compare<int32_t>(r11.s32, 26, xer);
	// bne cr6,0x825653a8
	if (!cr6.eq) goto loc_825653A8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565008
	sub_82565008(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,62
	ctx.r3.s64 = 62;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stb r11,2073(r31)
	PPC_STORE_U8(r31.u32 + 2073, r11.u8);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82565468
	if (!cr0.eq) goto loc_82565468;
	// li r7,704
	ctx.r7.s64 = 704;
	// b 0x82565454
	goto loc_82565454;
loc_825653A8:
	// cmpwi cr6,r11,27
	cr6.compare<int32_t>(r11.s32, 27, xer);
	// bne cr6,0x82565468
	if (!cr6.eq) goto loc_82565468;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565008
	sub_82565008(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82565468
	if (!cr0.eq) goto loc_82565468;
	// li r7,718
	ctx.r7.s64 = 718;
loc_82565454:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82565468:
	// lwz r11,24(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r22
	r11.u64 = PPC_LOAD_U32(r11.u32 + r22.u32);
	// rlwinm. r10,r11,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825654f0
	if (!cr0.eq) goto loc_825654F0;
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825654f0
	if (cr0.eq) goto loc_825654F0;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// beq cr6,0x825654f0
	if (cr6.eq) goto loc_825654F0;
	// lbz r11,128(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 128);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x825654a4
	if (cr6.eq) goto loc_825654A4;
	// lbz r11,48(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 48);
loc_825654A4:
	// stb r11,48(r26)
	PPC_STORE_U8(r26.u32 + 48, r11.u8);
	// lbz r11,129(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 129);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x825654bc
	if (cr6.eq) goto loc_825654BC;
	// lbz r11,49(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 49);
loc_825654BC:
	// stb r11,49(r26)
	PPC_STORE_U8(r26.u32 + 49, r11.u8);
	// lbz r11,130(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 130);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r11,2
	r11.s64 = 2;
	// beq cr6,0x825654d4
	if (cr6.eq) goto loc_825654D4;
	// lbz r11,50(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 50);
loc_825654D4:
	// stb r11,50(r26)
	PPC_STORE_U8(r26.u32 + 50, r11.u8);
	// lbz r11,131(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 131);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r11,3
	r11.s64 = 3;
	// beq cr6,0x825654ec
	if (cr6.eq) goto loc_825654EC;
	// lbz r11,51(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 51);
loc_825654EC:
	// stb r11,51(r26)
	PPC_STORE_U8(r26.u32 + 51, r11.u8);
loc_825654F0:
	// lwz r11,20(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 20);
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// ble cr6,0x82565278
	if (!cr6.gt) goto loc_82565278;
loc_82565504:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8256550C"))) PPC_WEAK_FUNC(sub_8256550C);
PPC_FUNC_IMPL(__imp__sub_8256550C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565510"))) PPC_WEAK_FUNC(sub_82565510);
PPC_FUNC_IMPL(__imp__sub_82565510) {
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
	// lwz r31,136(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// b 0x8256553c
	goto loc_8256553C;
loc_82565528:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82589588
	sub_82589588(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82565560
	if (cr0.eq) goto loc_82565560;
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_8256553C:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82565528
	if (!cr6.eq) goto loc_82565528;
	// li r3,1
	ctx.r3.s64 = 1;
loc_8256554C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_82565560:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8256554c
	goto loc_8256554C;
}

__attribute__((alias("__imp__sub_82565568"))) PPC_WEAK_FUNC(sub_82565568);
PPC_FUNC_IMPL(__imp__sub_82565568) {
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
	// addi r11,r30,31
	r11.s64 = r30.s64 + 31;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r31,r11,27,5,31
	r31.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// addi r11,r31,3
	r11.s64 = r31.s64 + 3;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// beq cr6,0x825655d0
	if (cr6.eq) goto loc_825655D0;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
loc_825655B4:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x825655b4
	if (cr6.lt) goto loc_825655B4;
loc_825655D0:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825655DC"))) PPC_WEAK_FUNC(sub_825655DC);
PPC_FUNC_IMPL(__imp__sub_825655DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825655E0"))) PPC_WEAK_FUNC(sub_825655E0);
PPC_FUNC_IMPL(__imp__sub_825655E0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,23
	ctx.r4.s64 = 23;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,428(r10)
	r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 428);
	// lwz r27,28(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r28,32(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82565644
	if (cr0.eq) goto loc_82565644;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82587640
	sub_82587640(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82565648
	goto loc_82565648;
loc_82565644:
	// li r30,0
	r30.s64 = 0;
loc_82565648:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_8256567C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8256567c
	if (cr6.lt) goto loc_8256567C;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825838d0
	sub_825838D0(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x82585fe0
	sub_82585FE0(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82565714
	if (!cr0.eq) goto loc_82565714;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1198
	ctx.r7.s64 = 1198;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-11248
	ctx.r5.s64 = r11.s64 + -11248;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82565714:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82565730"))) PPC_WEAK_FUNC(sub_82565730);
PPC_FUNC_IMPL(__imp__sub_82565730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82561eb0
	sub_82561EB0(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82561f50
	sub_82561F50(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82561ff0
	sub_82561FF0(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82562740
	sub_82562740(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,32(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x825886d0
	sub_825886D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,1
	r11.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r11,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r11.u8);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82588740
	sub_82588740(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r28,0
	r28.s64 = 0;
loc_82565880:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmpwi cr6,r28,4
	cr6.compare<int32_t>(r28.s32, 4, xer);
	// blt cr6,0x82565880
	if (cr6.lt) goto loc_82565880;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82565914"))) PPC_WEAK_FUNC(sub_82565914);
PPC_FUNC_IMPL(__imp__sub_82565914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565918"))) PPC_WEAK_FUNC(sub_82565918);
PPC_FUNC_IMPL(__imp__sub_82565918) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce0
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f278
	sub_8255F278(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f390
	sub_8255F390(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r28,r11,-15800
	r28.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f4a0
	sub_8255F4A0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82589a30
	sub_82589A30(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r23,r11,8972
	r23.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r22,r11,-11648
	r22.s64 = r11.s64 + -11648;
	// beq cr6,0x82565a38
	if (cr6.eq) goto loc_82565A38;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1338
	ctx.r7.s64 = 1338;
	// addi r5,r11,-11180
	ctx.r5.s64 = r11.s64 + -11180;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82565A38:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r25,0
	r25.s64 = 0;
	// lwz r28,84(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// mr r11,r25
	r11.u64 = r25.u64;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_82565A58:
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// ble cr6,0x82565a68
	if (!cr6.gt) goto loc_82565A68;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// b 0x82565a74
	goto loc_82565A74;
loc_82565A68:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_82565A74:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82565a8c
	if (cr0.eq) goto loc_82565A8C;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82565a58
	goto loc_82565A58;
loc_82565A8C:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// lwz r27,32(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bne cr6,0x82565cd4
	if (!cr6.eq) goto loc_82565CD4;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f5b8
	sub_8255F5B8(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82565c54
	if (!cr0.eq) goto loc_82565C54;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82562350
	sub_82562350(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82562458
	sub_82562458(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x825886d0
	sub_825886D0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r29,r11,-11684
	r29.s64 = r11.s64 + -11684;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,153(r30)
	PPC_STORE_U8(r30.u32 + 153, r11.u8);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82565bc4
	if (!cr0.eq) goto loc_82565BC4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1372
	ctx.r7.s64 = 1372;
	// addi r5,r11,-11196
	ctx.r5.s64 = r11.s64 + -11196;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82565BC4:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x825886d0
	sub_825886D0(ctx, base);
	// lwz r11,-16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r10,23
	ctx.r10.s64 = 23;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r25.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,-4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82565ebc
	if (!cr0.eq) goto loc_82565EBC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1383
	ctx.r7.s64 = 1383;
	// addi r5,r11,-11212
	ctx.r5.s64 = r11.s64 + -11212;
	// b 0x82565eac
	goto loc_82565EAC;
loc_82565C54:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r29,r11,-11684
	r29.s64 = r11.s64 + -11684;
	// li r10,23
	ctx.r10.s64 = 23;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r25.u32);
	// lwz r11,-16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -16);
	// stw r10,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82565ebc
	if (!cr0.eq) goto loc_82565EBC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1394
	ctx.r7.s64 = 1394;
	// addi r5,r11,-11272
	ctx.r5.s64 = r11.s64 + -11272;
	// b 0x82565eac
	goto loc_82565EAC;
loc_82565CD4:
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82565e98
	if (cr6.eq) goto loc_82565E98;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82562658
	sub_82562658(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825625b8
	sub_825625B8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82588618
	sub_82588618(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,23
	r29.s64 = 23;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r25,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r25.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r26,r11,-11684
	r26.s64 = r11.s64 + -11684;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r24,r11,-11212
	r24.s64 = r11.s64 + -11212;
	// bne 0x82565d94
	if (!cr0.eq) goto loc_82565D94;
	// li r7,1412
	ctx.r7.s64 = 1412;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82565D94:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x825886d0
	sub_825886D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r25,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r25.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// stw r25,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r25.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82565e10
	if (!cr0.eq) goto loc_82565E10;
	// li r7,1420
	ctx.r7.s64 = 1420;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82565E10:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82588740
	sub_82588740(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r25,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r25.u32);
	// stw r29,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r29.u32);
	// stw r25,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r25.u32);
	// stw r29,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r29.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82565ebc
	if (!cr0.eq) goto loc_82565EBC;
	// li r7,1430
	ctx.r7.s64 = 1430;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// b 0x82565eac
	goto loc_82565EAC;
loc_82565E98:
	// cmpwi cr6,r24,0
	cr6.compare<int32_t>(r24.s32, 0, xer);
	// bne cr6,0x82565ebc
	if (!cr6.eq) goto loc_82565EBC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// addi r5,r11,-11228
	ctx.r5.s64 = r11.s64 + -11228;
loc_82565EAC:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82565EBC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82565EC4"))) PPC_WEAK_FUNC(sub_82565EC4);
PPC_FUNC_IMPL(__imp__sub_82565EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82565EC8"))) PPC_WEAK_FUNC(sub_82565EC8);
PPC_FUNC_IMPL(__imp__sub_82565EC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,23
	ctx.r9.s64 = 23;
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f4,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r9.u32);
	// lfs f3,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82565f70
	if (!cr0.eq) goto loc_82565F70;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1445
	ctx.r7.s64 = 1445;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-11272
	ctx.r5.s64 = r11.s64 + -11272;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82565F70:
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

__attribute__((alias("__imp__sub_82565F88"))) PPC_WEAK_FUNC(sub_82565F88);
PPC_FUNC_IMPL(__imp__sub_82565F88) {
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
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r19,136(r24)
	r19.u64 = PPC_LOAD_U32(r24.u32 + 136);
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82566164
	if (cr6.eq) goto loc_82566164;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,8972
	r22.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r21,r11,-11144
	r21.s64 = r11.s64 + -11144;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r20,r11,-11648
	r20.s64 = r11.s64 + -11648;
loc_82565FC0:
	// lwz r30,28(r19)
	r30.u64 = PPC_LOAD_U32(r19.u32 + 28);
	// b 0x82566148
	goto loc_82566148;
loc_82565FC8:
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82566144
	if (cr0.eq) goto loc_82566144;
	// lwz r23,20(r30)
	r23.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi r23,0
	cr0.compare<int32_t>(r23.s32, 0, xer);
	// ble 0x82566144
	if (!cr0.gt) goto loc_82566144;
	// addi r10,r30,84
	ctx.r10.s64 = r30.s64 + 84;
	// mr r9,r23
	ctx.r9.u64 = r23.u64;
loc_82565FF0:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x8256601c
	if (cr6.eq) goto loc_8256601C;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x8256601c
	if (cr6.eq) goto loc_8256601C;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x8256601c
	if (cr6.eq) goto loc_8256601C;
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x82566020
	if (!cr6.eq) goto loc_82566020;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// b 0x82566020
	goto loc_82566020;
loc_8256601C:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82566020:
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82565ff0
	if (!cr0.eq) goto loc_82565FF0;
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq cr6,0x82566144
	if (cr6.eq) goto loc_82566144;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq cr6,0x82566144
	if (cr6.eq) goto loc_82566144;
	// cmpw cr6,r7,r8
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, xer);
	// li r25,0
	r25.s64 = 0;
	// bgt cr6,0x8256604c
	if (cr6.gt) goto loc_8256604C;
	// li r25,1
	r25.s64 = 1;
loc_8256604C:
	// cmpwi cr6,r8,1
	cr6.compare<int32_t>(ctx.r8.s32, 1, xer);
	// beq cr6,0x82566074
	if (cr6.eq) goto loc_82566074;
	// cmpwi cr6,r7,1
	cr6.compare<int32_t>(ctx.r7.s32, 1, xer);
	// beq cr6,0x82566074
	if (cr6.eq) goto loc_82566074;
	// li r7,1915
	ctx.r7.s64 = 1915;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82566074:
	// li r26,0
	r26.s64 = 0;
	// addi r27,r30,32
	r27.s64 = r30.s64 + 32;
loc_8256607C:
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82566098
	if (cr6.eq) goto loc_82566098;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82566098
	if (cr6.eq) goto loc_82566098;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// bne cr6,0x825660a0
	if (!cr6.eq) goto loc_825660A0;
loc_82566098:
	// clrlwi. r10,r25,24
	ctx.r10.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825660b0
	if (!cr0.eq) goto loc_825660B0;
loc_825660A0:
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x82566134
	if (!cr6.eq) goto loc_82566134;
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82566134
	if (!cr0.eq) goto loc_82566134;
loc_825660B0:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lwz r11,12(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// lwz r29,0(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825838d0
	sub_825838D0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// addi r4,r26,1
	ctx.r4.s64 = r26.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,948(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
loc_82566134:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmpw cr6,r26,r23
	cr6.compare<int32_t>(r26.s32, r23.s32, xer);
	// blt cr6,0x8256607c
	if (cr6.lt) goto loc_8256607C;
loc_82566144:
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
loc_82566148:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82565fc8
	if (!cr6.eq) goto loc_82565FC8;
	// lwz r19,8(r19)
	r19.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// lwz r11,8(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82565fc0
	if (!cr6.eq) goto loc_82565FC0;
loc_82566164:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8256616C"))) PPC_WEAK_FUNC(sub_8256616C);
PPC_FUNC_IMPL(__imp__sub_8256616C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566170"))) PPC_WEAK_FUNC(sub_82566170);
PPC_FUNC_IMPL(__imp__sub_82566170) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r30,184
	ctx.r3.s64 = r30.s64 + 184;
	// bl 0x82581388
	sub_82581388(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82566634
	if (cr0.eq) goto loc_82566634;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8972
	r23.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r22,r11,-11648
	r22.s64 = r11.s64 + -11648;
	// bne 0x825661f4
	if (!cr0.eq) goto loc_825661F4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1977
	ctx.r7.s64 = 1977;
	// addi r5,r11,-11048
	ctx.r5.s64 = r11.s64 + -11048;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825661F4:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,428(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x8256622c
	if (cr0.eq) goto loc_8256622C;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,428(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r21,r31
	r21.u64 = r31.u64;
	// b 0x82566230
	goto loc_82566230;
loc_8256622C:
	// li r21,0
	r21.s64 = 0;
loc_82566230:
	// li r24,1
	r24.s64 = 1;
	// li r31,0
	r31.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// mr r25,r24
	r25.u64 = r24.u64;
loc_82566240:
	// lwz r11,36(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 36);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r25,r10
	cr6.compare<uint32_t>(r25.u32, ctx.r10.u32, xer);
	// ble cr6,0x82566258
	if (!cr6.gt) goto loc_82566258;
	// li r11,0
	r11.s64 = 0;
	// b 0x82566264
	goto loc_82566264;
loc_82566258:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r24
	r11.u64 = r24.u64;
	// lwzx r31,r10,r26
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
loc_82566264:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825662c8
	if (cr0.eq) goto loc_825662C8;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825662bc
	if (cr0.eq) goto loc_825662BC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r29,0
	r29.s64 = 0;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x825662bc
	if (!cr6.gt) goto loc_825662BC;
	// addi r28,r31,84
	r28.s64 = r31.s64 + 84;
loc_8256628C:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x825662a8
	if (!cr6.eq) goto loc_825662A8;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// lwz r4,4(r21)
	ctx.r4.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_825662A8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8256628c
	if (cr6.lt) goto loc_8256628C;
loc_825662BC:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// b 0x82566240
	goto loc_82566240;
loc_825662C8:
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r24,2073(r30)
	PPC_STORE_U8(r30.u32 + 2073, r24.u8);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r11,52(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 52);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,48(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// beq cr6,0x82566318
	if (cr6.eq) goto loc_82566318;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1996
	ctx.r7.s64 = 1996;
	// addi r5,r11,-11088
	ctx.r5.s64 = r11.s64 + -11088;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82566318:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825663c8
	if (!cr0.eq) goto loc_825663C8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2008
	ctx.r7.s64 = 2008;
	// addi r5,r11,-11272
	ctx.r5.s64 = r11.s64 + -11272;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825663C8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565008
	sub_82565008(ctx, base);
	// lwz r11,48(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 48);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8256652c
	if (cr6.eq) goto loc_8256652C;
	// li r3,18
	ctx.r3.s64 = 18;
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r24,159(r31)
	PPC_STORE_U8(r31.u32 + 159, r24.u8);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// bl 0x82561d90
	sub_82561D90(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82561da8
	sub_82561DA8(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r24,154(r31)
	PPC_STORE_U8(r31.u32 + 154, r24.u8);
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// stb r24,153(r31)
	PPC_STORE_U8(r31.u32 + 153, r24.u8);
	// b 0x82566598
	goto loc_82566598;
loc_8256652C:
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r24,159(r31)
	PPC_STORE_U8(r31.u32 + 159, r24.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
loc_82566598:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82566634
	if (cr0.eq) goto loc_82566634;
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x825665cc
	if (!cr6.lt) goto loc_825665CC;
loc_825665C0:
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// b 0x825665d8
	goto loc_825665D8;
loc_825665CC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825665D8:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r24
	r30.u64 = r24.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82566620
	if (cr6.lt) goto loc_82566620;
	// addi r29,r31,84
	r29.s64 = r31.s64 + 84;
loc_825665F0:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,32
	cr6.compare<int32_t>(r11.s32, 32, xer);
	// bne cr6,0x8256660c
	if (!cr6.eq) goto loc_8256660C;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
loc_8256660C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x825665f0
	if (!cr6.gt) goto loc_825665F0;
loc_82566620:
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// blt cr6,0x825665c0
	if (cr6.lt) goto loc_825665C0;
loc_82566634:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_8256663C"))) PPC_WEAK_FUNC(sub_8256663C);
PPC_FUNC_IMPL(__imp__sub_8256663C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566640"))) PPC_WEAK_FUNC(sub_82566640);
PPC_FUNC_IMPL(__imp__sub_82566640) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// bl 0x82581388
	sub_82581388(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256694c
	if (cr0.eq) goto loc_8256694C;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82589a30
	sub_82589A30(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r23,r11,8972
	r23.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r22,r11,-11648
	r22.s64 = r11.s64 + -11648;
	// beq cr6,0x825666a8
	if (cr6.eq) goto loc_825666A8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2104
	ctx.r7.s64 = 2104;
	// addi r5,r11,-11180
	ctx.r5.s64 = r11.s64 + -11180;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825666A8:
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r26,0
	r26.s64 = 0;
	// lwz r25,88(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_825666C8:
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// ble cr6,0x825666d8
	if (!cr6.gt) goto loc_825666D8;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// b 0x825666e4
	goto loc_825666E4;
loc_825666D8:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_825666E4:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825666fc
	if (cr0.eq) goto loc_825666FC;
	// mr r25,r9
	r25.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x825666c8
	goto loc_825666C8;
loc_825666FC:
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r27,32(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// bl 0x82562658
	sub_82562658(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825625b8
	sub_825625B8(ctx, base);
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82588618
	sub_82588618(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r28,32
	r28.s64 = 32;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r26,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r26.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r28.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r29,r11,-11696
	r29.s64 = r11.s64 + -11696;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r24,r11,-11212
	r24.s64 = r11.s64 + -11212;
	// bne 0x825667bc
	if (!cr0.eq) goto loc_825667BC;
	// li r7,2130
	ctx.r7.s64 = 2130;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825667BC:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x825886d0
	sub_825886D0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r26,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r26.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r28.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r28,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r28.u32);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82566838
	if (!cr0.eq) goto loc_82566838;
	// li r7,2139
	ctx.r7.s64 = 2139;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82566838:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82588740
	sub_82588740(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,-4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -4);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r26,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r26.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r28.u32);
	// stw r26,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r26.u32);
	// stw r28,84(r30)
	PPC_STORE_U32(r30.u32 + 84, r28.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825668d4
	if (!cr0.eq) goto loc_825668D4;
	// li r7,2151
	ctx.r7.s64 = 2151;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825668D4:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r26,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r26.u32);
	// stw r28,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r28.u32);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256694c
	if (!cr0.eq) goto loc_8256694C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2161
	ctx.r7.s64 = 2161;
	// addi r5,r11,-11272
	ctx.r5.s64 = r11.s64 + -11272;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256694C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_82566954"))) PPC_WEAK_FUNC(sub_82566954);
PPC_FUNC_IMPL(__imp__sub_82566954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566958"))) PPC_WEAK_FUNC(sub_82566958);
PPC_FUNC_IMPL(__imp__sub_82566958) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82560cf8
	sub_82560CF8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82566b48
	if (!cr6.eq) goto loc_82566B48;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// addi r5,r11,-15800
	ctx.r5.s64 = r11.s64 + -15800;
	// bl 0x825612c0
	sub_825612C0(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,-11648
	r27.s64 = r11.s64 + -11648;
	// beq cr6,0x825669f4
	if (cr6.eq) goto loc_825669F4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2364
	ctx.r7.s64 = 2364;
	// addi r5,r11,-11020
	ctx.r5.s64 = r11.s64 + -11020;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825669F4:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,164(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r6,-11708(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + -11708);
	// oris r11,r10,5
	r11.u64 = ctx.r10.u64 | 327680;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x8258d260
	sub_8258D260(ctx, base);
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,6
	r11.s64 = 6;
	// li r29,0
	r29.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,25
	ctx.r10.s64 = 25;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
loc_82566AD0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x82566ad0
	if (cr6.lt) goto loc_82566AD0;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x82589438
	sub_82589438(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82566b40
	if (!cr0.eq) goto loc_82566B40;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2382
	ctx.r7.s64 = 2382;
	// addi r5,r11,-11272
	ctx.r5.s64 = r11.s64 + -11272;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82566B40:
	// li r11,1
	r11.s64 = 1;
	// stb r11,124(r30)
	PPC_STORE_U8(r30.u32 + 124, r11.u8);
loc_82566B48:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82566B50"))) PPC_WEAK_FUNC(sub_82566B50);
PPC_FUNC_IMPL(__imp__sub_82566B50) {
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
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// li r28,0
	r28.s64 = 0;
	// li r30,0
	r30.s64 = 0;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82566B7C:
	// lwz r29,12(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r26,r11,-15800
	r26.s64 = r11.s64 + -15800;
	// lwz r3,464(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82563068
	sub_82563068(ctx, base);
	// addi r10,r3,-1
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// clrlwi r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r30,5
	cr6.compare<int32_t>(r30.s32, 5, xer);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// blt cr6,0x82566b7c
	if (cr6.lt) goto loc_82566B7C;
	// lbz r11,126(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 126);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82566d74
	if (cr0.eq) goto loc_82566D74;
	// lwz r11,4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 4);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82566d74
	if (cr6.eq) goto loc_82566D74;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82566d74
	if (cr0.eq) goto loc_82566D74;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82561c50
	sub_82561C50(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82561c50
	sub_82561C50(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,32(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,-11648
	r27.s64 = r11.s64 + -11648;
	// bne 0x82566ce0
	if (!cr0.eq) goto loc_82566CE0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2421
	ctx.r7.s64 = 2421;
	// addi r5,r11,-10980
	ctx.r5.s64 = r11.s64 + -10980;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82566CE0:
	// li r3,25
	ctx.r3.s64 = 25;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lfs f4,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f4.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r4,120(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82566d74
	if (!cr0.eq) goto loc_82566D74;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2429
	ctx.r7.s64 = 2429;
	// addi r5,r11,-10996
	ctx.r5.s64 = r11.s64 + -10996;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82566D74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82566D7C"))) PPC_WEAK_FUNC(sub_82566D7C);
PPC_FUNC_IMPL(__imp__sub_82566D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82566D80"))) PPC_WEAK_FUNC(sub_82566D80);
PPC_FUNC_IMPL(__imp__sub_82566D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82565008
	sub_82565008(ctx, base);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r29,r30,1096
	r29.s64 = r30.s64 + 1096;
	// addi r11,r11,-24612
	r11.s64 = r11.s64 + -24612;
	// li r28,16
	r28.s64 = 16;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r15,0
	r15.s64 = 0;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// li r17,1
	r17.s64 = 1;
	// addi r11,r11,-11272
	r11.s64 = r11.s64 + -11272;
	// lfs f30,2552(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2552);
	f30.f64 = double(temp.f32);
	// lfs f31,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f31.f64 = double(temp.f32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-10940
	r11.s64 = r11.s64 + -10940;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r21,r11,8972
	r21.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-10964
	r11.s64 = r11.s64 + -10964;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r20,r11,-11648
	r20.s64 = r11.s64 + -11648;
loc_82566E08:
	// lwz r24,0(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r24,0
	cr0.compare<uint32_t>(r24.u32, 0, xer);
	// beq 0x825673f8
	if (cr0.eq) goto loc_825673F8;
	// lwz r11,32(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 32);
	// cmpwi cr6,r11,20
	cr6.compare<int32_t>(r11.s32, 20, xer);
	// bne cr6,0x825673f8
	if (!cr6.eq) goto loc_825673F8;
	// lwz r23,36(r24)
	r23.u64 = PPC_LOAD_U32(r24.u32 + 36);
	// li r26,0
	r26.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// mr r16,r17
	r16.u64 = r17.u64;
	// lwz r18,4(r23)
	r18.u64 = PPC_LOAD_U32(r23.u32 + 4);
loc_82566E34:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// cmplw cr6,r16,r11
	cr6.compare<uint32_t>(r16.u32, r11.u32, xer);
	// ble cr6,0x82566e48
	if (!cr6.gt) goto loc_82566E48;
	// li r11,0
	r11.s64 = 0;
	// b 0x82566e54
	goto loc_82566E54;
loc_82566E48:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// mr r11,r17
	r11.u64 = r17.u64;
	// lwzx r26,r10,r19
	r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + r19.u32);
loc_82566E54:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825673a8
	if (cr0.eq) goto loc_825673A8;
	// lwz r11,228(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256739c
	if (cr0.eq) goto loc_8256739C;
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// mr r25,r17
	r25.u64 = r17.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x8256739c
	if (cr6.lt) goto loc_8256739C;
	// addi r22,r26,32
	r22.s64 = r26.s64 + 32;
loc_82566E7C:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// cmplw cr6,r24,r11
	cr6.compare<uint32_t>(r24.u32, r11.u32, xer);
	// bne cr6,0x82567380
	if (!cr6.eq) goto loc_82567380;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r28,12(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 12);
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82563300
	sub_82563300(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82567098
	if (!cr6.eq) goto loc_82567098;
	// cmplwi cr6,r15,0
	cr6.compare<uint32_t>(r15.u32, 0, xer);
	// bne cr6,0x82567064
	if (!cr6.eq) goto loc_82567064;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r17,159(r31)
	PPC_STORE_U8(r31.u32 + 159, r17.u8);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82566fa8
	if (!cr0.eq) goto loc_82566FA8;
	// li r7,2501
	ctx.r7.s64 = 2501;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82566FA8:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// fmr f4,f30
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f30.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567064
	if (!cr0.eq) goto loc_82567064;
	// li r7,2511
	ctx.r7.s64 = 2511;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82567064:
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567380
	if (!cr0.eq) goto loc_82567380;
	// li r7,2516
	ctx.r7.s64 = 2516;
	// b 0x8256736c
	goto loc_8256736C;
loc_82567098:
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x82563190
	sub_82563190(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82567380
	if (!cr0.eq) goto loc_82567380;
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r17,159(r31)
	PPC_STORE_U8(r31.u32 + 159, r17.u8);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825671ac
	if (!cr0.eq) goto loc_825671AC;
	// li r7,2536
	ctx.r7.s64 = 2536;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825671AC:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r14,r11,-15800
	r14.s64 = r11.s64 + -15800;
	// lwz r3,464(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82563490
	sub_82563490(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x82567260
	if (!cr6.eq) goto loc_82567260;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x825672a4
	goto loc_825672A4;
loc_82567260:
	// lwz r29,12(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r14,r11,-15800
	r14.s64 = r11.s64 + -15800;
	// lwz r3,464(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r6,r14
	ctx.r6.u64 = r14.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// bl 0x82563620
	sub_82563620(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825672e4
	if (!cr6.eq) goto loc_825672E4;
	// li r6,2
	ctx.r6.s64 = 2;
loc_825672A4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x825672fc
	goto loc_825672FC;
loc_825672E4:
	// li r7,2565
	ctx.r7.s64 = 2565;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825672FC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256733c
	if (!cr0.eq) goto loc_8256733C;
	// li r7,2570
	ctx.r7.s64 = 2570;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256733C:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567380
	if (!cr0.eq) goto loc_82567380;
	// li r7,2575
	ctx.r7.s64 = 2575;
loc_8256736C:
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82567380:
	// lwz r11,20(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 20);
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// ble cr6,0x82566e7c
	if (!cr6.gt) goto loc_82566E7C;
	// lwz r28,96(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r29,100(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_8256739C:
	// addi r16,r16,1
	r16.s64 = r16.s64 + 1;
	// addi r19,r19,4
	r19.s64 = r19.s64 + 4;
	// b 0x82566e34
	goto loc_82566E34;
loc_825673A8:
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// beq cr6,0x825673f8
	if (cr6.eq) goto loc_825673F8;
	// rlwinm r31,r18,2,0,29
	r31.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 2) & 0xFFFFFFFC;
loc_825673B4:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r18,r18,-1
	r18.s64 = r18.s64 + -1;
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
	// cmplw cr6,r18,r11
	cr6.compare<uint32_t>(r18.u32, r11.u32, xer);
	// bge cr6,0x825673d4
	if (!cr6.lt) goto loc_825673D4;
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// b 0x825673e4
	goto loc_825673E4;
loc_825673D4:
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_825673E4:
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82583978
	sub_82583978(ctx, base);
	// cmpwi cr6,r18,0
	cr6.compare<int32_t>(r18.s32, 0, xer);
	// bne cr6,0x825673b4
	if (!cr6.eq) goto loc_825673B4;
loc_825673F8:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r28.u32);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r29.u32);
	// bne 0x82566e08
	if (!cr0.eq) goto loc_82566E08;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8256741C"))) PPC_WEAK_FUNC(sub_8256741C);
PPC_FUNC_IMPL(__imp__sub_8256741C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567420"))) PPC_WEAK_FUNC(sub_82567420);
PPC_FUNC_IMPL(__imp__sub_82567420) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256754c
	if (!cr6.eq) goto loc_8256754C;
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x82589a30
	sub_82589A30(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,-11648
	r27.s64 = r11.s64 + -11648;
	// beq cr6,0x82567478
	if (cr6.eq) goto loc_82567478;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2604
	ctx.r7.s64 = 2604;
	// addi r5,r11,-11180
	ctx.r5.s64 = r11.s64 + -11180;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82567478:
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r11,60(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_82567494:
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// ble cr6,0x825674a4
	if (!cr6.gt) goto loc_825674A4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x825674b0
	goto loc_825674B0;
loc_825674A4:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
loc_825674B0:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825674c8
	if (cr0.eq) goto loc_825674C8;
	// mr r29,r9
	r29.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// b 0x82567494
	goto loc_82567494;
loc_825674C8:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lfs f4,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f4.f64 = double(temp.f32);
	// li r11,5
	r11.s64 = 5;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256754c
	if (!cr0.eq) goto loc_8256754C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2616
	ctx.r7.s64 = 2616;
	// addi r5,r11,-11272
	ctx.r5.s64 = r11.s64 + -11272;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256754C:
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// b 0x82567574
	goto loc_82567574;
loc_82567558:
	// lwz r9,228(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82567570
	if (cr0.eq) goto loc_82567570;
	// lwz r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmpwi cr6,r9,5
	cr6.compare<int32_t>(ctx.r9.s32, 5, xer);
	// beq cr6,0x82567584
	if (cr6.eq) goto loc_82567584;
loc_82567570:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82567574:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82567558
	if (!cr0.eq) goto loc_82567558;
	// b 0x82567588
	goto loc_82567588;
loc_82567584:
	// stw r11,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r11.u32);
loc_82567588:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82567590"))) PPC_WEAK_FUNC(sub_82567590);
PPC_FUNC_IMPL(__imp__sub_82567590) {
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
	// lis r11,-32138
	r11.s64 = -2106195968;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r10,r10,8704
	ctx.r10.s64 = ctx.r10.s64 + 8704;
	// li r3,142
	ctx.r3.s64 = 142;
	// lwz r11,7432(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 7432);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// lbz r11,2144(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256766c
	if (cr0.eq) goto loc_8256766C;
	// lwz r11,116(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256766c
	if (cr0.eq) goto loc_8256766C;
	// lwz r29,948(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 948);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82589438
	sub_82589438(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// bl 0x82564a28
	sub_82564A28(ctx, base);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256766c
	if (cr6.eq) goto loc_8256766C;
	// li r11,1
	r11.s64 = 1;
	// stw r11,168(r31)
	PPC_STORE_U32(r31.u32 + 168, r11.u32);
	// lwz r11,120(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// lwz r11,948(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 948);
	// cmplw cr6,r11,r29
	cr6.compare<uint32_t>(r11.u32, r29.u32, xer);
	// beq cr6,0x82567660
	if (cr6.eq) goto loc_82567660;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2823
	ctx.r7.s64 = 2823;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-10924
	ctx.r5.s64 = r11.s64 + -10924;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82567660:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,120(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 120);
	// bl 0x82564a28
	sub_82564A28(ctx, base);
loc_8256766C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82567674"))) PPC_WEAK_FUNC(sub_82567674);
PPC_FUNC_IMPL(__imp__sub_82567674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567678"))) PPC_WEAK_FUNC(sub_82567678);
PPC_FUNC_IMPL(__imp__sub_82567678) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// rlwinm. r30,r11,29,31,31
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x825676d0
	if (cr0.eq) goto loc_825676D0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825676d0
	if (cr0.eq) goto loc_825676D0;
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// lwz r10,948(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 948);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
loc_825676D0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825676DC"))) PPC_WEAK_FUNC(sub_825676DC);
PPC_FUNC_IMPL(__imp__sub_825676DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825676E0"))) PPC_WEAK_FUNC(sub_825676E0);
PPC_FUNC_IMPL(__imp__sub_825676E0) {
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
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r11,2148(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 2148);
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,2148(r25)
	PPC_STORE_U32(r25.u32 + 2148, r11.u32);
	// lwz r31,432(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// beq 0x82567734
	if (cr0.eq) goto loc_82567734;
	// lwz r11,12(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r24,r30
	r24.u64 = r30.u64;
	// b 0x82567738
	goto loc_82567738;
loc_82567734:
	// li r24,0
	r24.s64 = 0;
loc_82567738:
	// lwz r11,96(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 96);
	// lwz r22,4(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r22,0
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// ble 0x82567cec
	if (!cr0.gt) goto loc_82567CEC;
	// rlwinm r11,r22,2,0,29
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r23,r22,-1
	r23.s64 = r22.s64 + -1;
	// addi r21,r11,-4
	r21.s64 = r11.s64 + -4;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r20,r11,8972
	r20.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r19,r11,-10872
	r19.s64 = r11.s64 + -10872;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r18,r11,-11648
	r18.s64 = r11.s64 + -11648;
loc_8256776C:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82567790
	if (cr6.eq) goto loc_82567790;
	// li r7,2864
	ctx.r7.s64 = 2864;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82567790:
	// lwz r3,96(r25)
	ctx.r3.u64 = PPC_LOAD_U32(r25.u32 + 96);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r23,r11
	cr6.compare<uint32_t>(r23.u32, r11.u32, xer);
	// bge cr6,0x825677ac
	if (!cr6.lt) goto loc_825677AC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r21
	ctx.r3.u64 = r11.u64 + r21.u64;
	// b 0x825677b4
	goto loc_825677B4;
loc_825677AC:
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825677B4:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bgt cr6,0x82567cd0
	if (cr6.gt) goto loc_82567CD0;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82567cd0
	if (cr0.eq) goto loc_82567CD0;
	// lwz r11,228(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// rlwinm. r11,r11,29,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567cd0
	if (!cr0.eq) goto loc_82567CD0;
	// lwz r3,236(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 236);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567cd0
	if (!cr0.eq) goto loc_82567CD0;
	// lwz r31,236(r27)
	r31.u64 = PPC_LOAD_U32(r27.u32 + 236);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82586060
	sub_82586060(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567a34
	if (cr0.eq) goto loc_82567A34;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// bl 0x82567678
	sub_82567678(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567a34
	if (cr0.eq) goto loc_82567A34;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8256799c
	if (cr0.eq) goto loc_8256799C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r26,1
	r26.s64 = 1;
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82567904
	if (cr6.lt) goto loc_82567904;
	// addi r29,r31,236
	r29.s64 = r31.s64 + 236;
loc_82567878:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x825678ec
	if (!cr0.eq) goto loc_825678EC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// bl 0x82567678
	sub_82567678(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825678ec
	if (cr0.eq) goto loc_825678EC;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// beq cr6,0x825678ec
	if (cr6.eq) goto loc_825678EC;
	// lwz r11,20(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x825678ec
	if (cr6.eq) goto loc_825678EC;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825678ec
	if (!cr0.eq) goto loc_825678EC;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// bne cr6,0x825678f0
	if (!cr6.eq) goto loc_825678F0;
loc_825678EC:
	// li r26,0
	r26.s64 = 0;
loc_825678F0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// ble cr6,0x82567878
	if (!cr6.gt) goto loc_82567878;
loc_82567904:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567cd0
	if (cr0.eq) goto loc_82567CD0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82567964
	if (cr6.lt) goto loc_82567964;
	// addi r29,r31,236
	r29.s64 = r31.s64 + 236;
loc_82567920:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,2148(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82567950
	if (!cr0.eq) goto loc_82567950;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,892(r30)
	PPC_STORE_U32(r30.u32 + 892, r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_82567950:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// ble cr6,0x82567920
	if (!cr6.gt) goto loc_82567920;
loc_82567964:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82564c08
	sub_82564C08(ctx, base);
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
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82567a34
	goto loc_82567A34;
loc_8256799C:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// beq cr6,0x82567cd0
	if (cr6.eq) goto loc_82567CD0;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82567cd0
	if (cr6.eq) goto loc_82567CD0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567cd0
	if (!cr0.eq) goto loc_82567CD0;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// beq cr6,0x82567cd0
	if (cr6.eq) goto loc_82567CD0;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567cd0
	if (!cr0.eq) goto loc_82567CD0;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x82564c08
	sub_82564C08(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,2148(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 2148);
	// lwz r10,892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82567a34
	if (!cr0.eq) goto loc_82567A34;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,892(r31)
	PPC_STORE_U32(r31.u32 + 892, r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82567A34:
	// lwz r26,80(r27)
	r26.u64 = PPC_LOAD_U32(r27.u32 + 80);
	// lwz r27,56(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 56);
	// b 0x82567cc0
	goto loc_82567CC0;
loc_82567A40:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82567a50
	if (cr6.eq) goto loc_82567A50;
	// lwz r3,8(r24)
	ctx.r3.u64 = PPC_LOAD_U32(r24.u32 + 8);
	// b 0x82567a5c
	goto loc_82567A5C;
loc_82567A50:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82567A5C:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82567cdc
	if (cr0.eq) goto loc_82567CDC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82586060
	sub_82586060(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567be4
	if (cr0.eq) goto loc_82567BE4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// bl 0x82567678
	sub_82567678(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567be4
	if (cr0.eq) goto loc_82567BE4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// beq cr6,0x82567be4
	if (cr6.eq) goto loc_82567BE4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82567be4
	if (cr6.eq) goto loc_82567BE4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567be4
	if (!cr0.eq) goto loc_82567BE4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,128
	cr6.compare<int32_t>(r11.s32, 128, xer);
	// beq cr6,0x82567be4
	if (cr6.eq) goto loc_82567BE4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82567b68
	if (cr0.eq) goto loc_82567B68;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r28,1
	r28.s64 = 1;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82567b50
	if (cr6.lt) goto loc_82567B50;
	// addi r29,r31,236
	r29.s64 = r31.s64 + 236;
loc_82567B0C:
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,2148(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82567b3c
	if (!cr0.eq) goto loc_82567B3C;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,892(r30)
	PPC_STORE_U32(r30.u32 + 892, r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_82567B3C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// ble cr6,0x82567b0c
	if (!cr6.gt) goto loc_82567B0C;
loc_82567B50:
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
	// b 0x82567cc0
	goto loc_82567CC0;
loc_82567B68:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567bb4
	if (cr0.eq) goto loc_82567BB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,2148(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 2148);
	// lwz r10,892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 892);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82567bac
	if (!cr0.eq) goto loc_82567BAC;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,892(r30)
	PPC_STORE_U32(r30.u32 + 892, r11.u32);
	// lwz r4,4(r24)
	ctx.r4.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
loc_82567BAC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825649a0
	sub_825649A0(ctx, base);
loc_82567BB4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// bl 0x82564a28
	sub_82564A28(ctx, base);
	// b 0x82567cc0
	goto loc_82567CC0;
loc_82567BE4:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r4,12(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 12);
	// bl 0x82588680
	sub_82588680(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,100(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 100);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// bl 0x82564a28
	sub_82564A28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// bl 0x82567678
	sub_82567678(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567cb0
	if (cr0.eq) goto loc_82567CB0;
	// lwz r11,100(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// lwz r11,948(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 948);
	// cmpw cr6,r3,r11
	cr6.compare<int32_t>(ctx.r3.s32, r11.s32, xer);
	// bne cr6,0x82567ca8
	if (!cr6.eq) goto loc_82567CA8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r31
	r28.u64 = r31.u64;
	// mr r29,r31
	r29.u64 = r31.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// b 0x82567c80
	goto loc_82567C80;
loc_82567C68:
	// lwz r11,100(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// beq cr6,0x82567c98
	if (cr6.eq) goto loc_82567C98;
	// lwz r29,8(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
loc_82567C80:
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567c68
	if (cr0.eq) goto loc_82567C68;
	// b 0x82567c9c
	goto loc_82567C9C;
loc_82567C98:
	// mr r28,r29
	r28.u64 = r29.u64;
loc_82567C9C:
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// b 0x82567cb8
	goto loc_82567CB8;
loc_82567CA8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// b 0x82567cb8
	goto loc_82567CB8;
loc_82567CB0:
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
loc_82567CB8:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82589480
	sub_82589480(ctx, base);
loc_82567CC0:
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82567a40
	if (!cr0.eq) goto loc_82567A40;
	// b 0x82567cdc
	goto loc_82567CDC;
loc_82567CD0:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,100(r25)
	ctx.r4.u64 = PPC_LOAD_U32(r25.u32 + 100);
	// bl 0x82564a28
	sub_82564A28(ctx, base);
loc_82567CDC:
	// addic. r22,r22,-1
	xer.ca = r22.u32 > 0;
	r22.s64 = r22.s64 + -1;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// addi r21,r21,-4
	r21.s64 = r21.s64 + -4;
	// addi r23,r23,-1
	r23.s64 = r23.s64 + -1;
	// bgt 0x8256776c
	if (cr0.gt) goto loc_8256776C;
loc_82567CEC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_82567CF4"))) PPC_WEAK_FUNC(sub_82567CF4);
PPC_FUNC_IMPL(__imp__sub_82567CF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82567CF8"))) PPC_WEAK_FUNC(sub_82567CF8);
PPC_FUNC_IMPL(__imp__sub_82567CF8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lbz r11,2144(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 2144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// beq 0x82567d24
	if (cr0.eq) goto loc_82567D24;
	// lwz r10,7588(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 7588);
	// b 0x82567d28
	goto loc_82567D28;
loc_82567D24:
	// lwz r10,7536(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 7536);
loc_82567D28:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,8704
	r11.s64 = r11.s64 + 8704;
	// li r3,144
	ctx.r3.s64 = 144;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,45
	r11.s64 = 45;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,100(r27)
	PPC_STORE_U32(r27.u32 + 100, ctx.r3.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r11,96(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567d70
	if (cr0.eq) goto loc_82567D70;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
loc_82567D70:
	// lwz r10,100(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// stw r11,168(r10)
	PPC_STORE_U32(ctx.r10.u32 + 168, r11.u32);
	// lwz r25,168(r27)
	r25.u64 = PPC_LOAD_U32(r27.u32 + 168);
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,132(r25)
	PPC_STORE_U32(r25.u32 + 132, r11.u32);
	// lwz r29,84(r25)
	r29.u64 = PPC_LOAD_U32(r25.u32 + 84);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// beq 0x82567fe4
	if (cr0.eq) goto loc_82567FE4;
loc_82567D94:
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,132(r25)
	PPC_STORE_U32(r25.u32 + 132, r11.u32);
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82567dcc
	if (!cr0.eq) goto loc_82567DCC;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82567dcc
	if (!cr0.eq) goto loc_82567DCC;
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567dcc
	if (!cr0.eq) goto loc_82567DCC;
	// mr r25,r29
	r25.u64 = r29.u64;
	// lwz r29,84(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 84);
	// cmplwi r29,0
	cr0.compare<uint32_t>(r29.u32, 0, xer);
	// bne 0x82567d94
	if (!cr0.eq) goto loc_82567D94;
loc_82567DCC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82567fe4
	if (cr6.eq) goto loc_82567FE4;
	// lwz r11,60(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 60);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82567fe4
	if (!cr6.eq) goto loc_82567FE4;
	// lwz r11,132(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 132);
	// mr r25,r29
	r25.u64 = r29.u64;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// lwz r3,352(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 352);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// lwz r31,36(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// b 0x82567e7c
	goto loc_82567E7C;
loc_82567E0C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82567e34
	if (!cr0.eq) goto loc_82567E34;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,19,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567e78
	if (cr0.eq) goto loc_82567E78;
loc_82567E34:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// cmpwi cr6,r9,1
	cr6.compare<int32_t>(ctx.r9.s32, 1, xer);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// blt cr6,0x82567e78
	if (cr6.lt) goto loc_82567E78;
	// addi r11,r31,236
	r11.s64 = r31.s64 + 236;
loc_82567E54:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,228(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// ori r8,r8,8192
	ctx.r8.u64 = ctx.r8.u64 | 8192;
	// stw r8,228(r9)
	PPC_STORE_U32(ctx.r9.u32 + 228, ctx.r8.u32);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x82567e54
	if (!cr6.gt) goto loc_82567E54;
loc_82567E78:
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82567E7C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82567e0c
	if (!cr6.eq) goto loc_82567E0C;
	// lwz r31,28(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r26,112(r29)
	r26.u64 = PPC_LOAD_U32(r29.u32 + 112);
	// b 0x82567ee0
	goto loc_82567EE0;
loc_82567E94:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567edc
	if (cr0.eq) goto loc_82567EDC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82567ed8
	if (!cr0.eq) goto loc_82567ED8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567eec
	if (cr0.eq) goto loc_82567EEC;
loc_82567ED8:
	// mr r26,r31
	r26.u64 = r31.u64;
loc_82567EDC:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82567EE0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82567e94
	if (!cr6.eq) goto loc_82567E94;
loc_82567EEC:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,432(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// beq 0x82567f20
	if (cr0.eq) goto loc_82567F20;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x82567f24
	goto loc_82567F24;
loc_82567F20:
	// li r30,0
	r30.s64 = 0;
loc_82567F24:
	// lwz r31,36(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// b 0x82567f40
	goto loc_82567F40;
loc_82567F2C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// lwz r31,4(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82567F40:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82567f2c
	if (!cr6.eq) goto loc_82567F2C;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82567fd0
	if (cr0.eq) goto loc_82567FD0;
loc_82567F5C:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82567f6c
	if (cr6.eq) goto loc_82567F6C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x82567f78
	goto loc_82567F78;
loc_82567F6C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82567F78:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,19,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82567fb8
	if (cr0.eq) goto loc_82567FB8;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82567fa0
	if (!cr6.eq) goto loc_82567FA0;
	// mr r28,r31
	r28.u64 = r31.u64;
loc_82567FA0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82589480
	sub_82589480(ctx, base);
loc_82567FB8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82567f5c
	if (!cr0.eq) goto loc_82567F5C;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bne cr6,0x82567fd4
	if (!cr6.eq) goto loc_82567FD4;
loc_82567FD0:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
loc_82567FD4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,100(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// bl 0x82589480
	sub_82589480(ctx, base);
	// b 0x82568054
	goto loc_82568054;
loc_82567FE4:
	// lwz r31,28(r25)
	r31.u64 = PPC_LOAD_U32(r25.u32 + 28);
	// b 0x82568034
	goto loc_82568034;
loc_82567FEC:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82568030
	if (cr0.eq) goto loc_82568030;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82568030
	if (!cr0.eq) goto loc_82568030;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82568044
	if (cr0.eq) goto loc_82568044;
loc_82568030:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
loc_82568034:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82567fec
	if (!cr6.eq) goto loc_82567FEC;
	// b 0x82568054
	goto loc_82568054;
loc_82568044:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r5,100(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825894e0
	sub_825894E0(ctx, base);
loc_82568054:
	// lwz r11,132(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 132);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,132(r25)
	PPC_STORE_U32(r25.u32 + 132, r11.u32);
	// lwz r4,104(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 104);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82568074
	if (cr0.eq) goto loc_82568074;
	// lwz r3,100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// bl 0x82564a28
	sub_82564A28(ctx, base);
loc_82568074:
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,432(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// beq 0x825680a8
	if (cr0.eq) goto loc_825680A8;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x825680ac
	goto loc_825680AC;
loc_825680A8:
	// li r30,0
	r30.s64 = 0;
loc_825680AC:
	// li r28,0
	r28.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r29,1
	r29.s64 = 1;
loc_825680B8:
	// lwz r11,88(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x825680d0
	if (!cr6.gt) goto loc_825680D0;
	// li r11,0
	r11.s64 = 0;
	// b 0x825680dc
	goto loc_825680DC;
loc_825680D0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r28,r10,r31
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
loc_825680DC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256818c
	if (cr0.eq) goto loc_8256818C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// b 0x825680b8
	goto loc_825680B8;
loc_82568100:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82568110
	if (cr6.eq) goto loc_82568110;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// b 0x8256811c
	goto loc_8256811C;
loc_82568110:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8256811C:
	// lwz r27,0(r3)
	r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
	// lwz r11,132(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 132);
	// li r28,0
	r28.s64 = 0;
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// li r31,0
	r31.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// stw r11,132(r27)
	PPC_STORE_U32(r27.u32 + 132, r11.u32);
loc_82568144:
	// lwz r11,88(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 88);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x8256815c
	if (!cr6.gt) goto loc_8256815C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82568168
	goto loc_82568168;
loc_8256815C:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r28,r10,r31
	r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
loc_82568168:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256818c
	if (cr0.eq) goto loc_8256818C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// b 0x82568144
	goto loc_82568144;
loc_8256818C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82568100
	if (!cr0.eq) goto loc_82568100;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_825681A0"))) PPC_WEAK_FUNC(sub_825681A0);
PPC_FUNC_IMPL(__imp__sub_825681A0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r26,r31,128
	r26.s64 = r31.s64 + 128;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r5,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r5.u32);
	// stb r30,0(r31)
	PPC_STORE_U8(r31.u32 + 0, r30.u8);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// stw r30,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r30.u8);
	// stb r30,125(r31)
	PPC_STORE_U8(r31.u32 + 125, r30.u8);
	// stb r30,126(r31)
	PPC_STORE_U8(r31.u32 + 126, r30.u8);
	// bl 0x82582930
	sub_82582930(ctx, base);
	// addi r3,r31,184
	ctx.r3.s64 = r31.s64 + 184;
	// stw r30,152(r31)
	PPC_STORE_U32(r31.u32 + 152, r30.u32);
	// li r5,1880
	ctx.r5.s64 = 1880;
	// stw r30,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r30.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// stw r30,160(r31)
	PPC_STORE_U32(r31.u32 + 160, r30.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r31,24
	r11.s64 = r31.s64 + 24;
	// stw r30,2064(r31)
	PPC_STORE_U32(r31.u32 + 2064, r30.u32);
	// stb r30,2072(r31)
	PPC_STORE_U8(r31.u32 + 2072, r30.u8);
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stb r30,2073(r31)
	PPC_STORE_U8(r31.u32 + 2073, r30.u8);
	// stw r30,2076(r31)
	PPC_STORE_U32(r31.u32 + 2076, r30.u32);
	// stw r10,2080(r31)
	PPC_STORE_U32(r31.u32 + 2080, ctx.r10.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r30,2084(r31)
	PPC_STORE_U32(r31.u32 + 2084, r30.u32);
	// stw r30,2088(r31)
	PPC_STORE_U32(r31.u32 + 2088, r30.u32);
	// stw r30,2092(r31)
	PPC_STORE_U32(r31.u32 + 2092, r30.u32);
	// stw r30,2096(r31)
	PPC_STORE_U32(r31.u32 + 2096, r30.u32);
	// stw r30,2148(r31)
	PPC_STORE_U32(r31.u32 + 2148, r30.u32);
	// stw r30,2152(r31)
	PPC_STORE_U32(r31.u32 + 2152, r30.u32);
	// stw r30,2156(r31)
	PPC_STORE_U32(r31.u32 + 2156, r30.u32);
	// stw r30,2160(r31)
	PPC_STORE_U32(r31.u32 + 2160, r30.u32);
	// stw r30,2164(r31)
	PPC_STORE_U32(r31.u32 + 2164, r30.u32);
	// stw r30,2168(r31)
	PPC_STORE_U32(r31.u32 + 2168, r30.u32);
	// stw r30,2172(r31)
	PPC_STORE_U32(r31.u32 + 2172, r30.u32);
	// stw r29,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r29.u32);
	// mtctr r10
	ctr.u64 = ctx.r10.u64;
loc_8256826C:
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bdnz 0x8256826c
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8256826C;
	// lwz r28,428(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// li r4,48
	ctx.r4.s64 = 48;
	// stw r31,1712(r29)
	PPC_STORE_U32(r29.u32 + 1712, r31.u32);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x825682ac
	if (cr0.eq) goto loc_825682AC;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82573e28
	sub_82573E28(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// b 0x825682b0
	goto loc_825682B0;
loc_825682AC:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_825682B0:
	// li r3,1024
	ctx.r3.s64 = 1024;
	// stw r11,172(r31)
	PPC_STORE_U32(r31.u32 + 172, r11.u32);
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// stw r3,176(r31)
	PPC_STORE_U32(r31.u32 + 176, ctx.r3.u32);
	// lwz r28,428(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// li r4,144
	ctx.r4.s64 = 144;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x825682f0
	if (cr0.eq) goto loc_825682F0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8258a1b0
	sub_8258A1B0(ctx, base);
	// b 0x825682f4
	goto loc_825682F4;
loc_825682F0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825682F4:
	// stw r3,164(r31)
	PPC_STORE_U32(r31.u32 + 164, ctx.r3.u32);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r28,428(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82568324
	if (cr0.eq) goto loc_82568324;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8258a208
	sub_8258A208(ctx, base);
	// b 0x82568328
	goto loc_82568328;
loc_82568324:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82568328:
	// stw r3,168(r31)
	PPC_STORE_U32(r31.u32 + 168, ctx.r3.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r28,428(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r27,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r27.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x82568358
	if (cr0.eq) goto loc_82568358;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8256835c
	goto loc_8256835C;
loc_82568358:
	// mr r27,r30
	r27.u64 = r30.u64;
loc_8256835C:
	// stw r27,2068(r31)
	PPC_STORE_U32(r31.u32 + 2068, r27.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r28,428(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r27,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r27.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8256838c
	if (cr0.eq) goto loc_8256838C;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x82568390
	goto loc_82568390;
loc_8256838C:
	// mr r27,r30
	r27.u64 = r30.u64;
loc_82568390:
	// stw r27,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r27.u32);
	// lbz r4,356(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 356);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// stb r4,2144(r31)
	PPC_STORE_U8(r31.u32 + 2144, ctx.r4.u8);
	// bl 0x82574638
	sub_82574638(ctx, base);
	// lwz r28,164(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x825829b8
	sub_825829B8(ctx, base);
	// stw r31,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r31.u32);
	// lwz r28,168(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82582990
	sub_82582990(ctx, base);
	// stw r31,16(r28)
	PPC_STORE_U32(r28.u32 + 16, r31.u32);
	// lbz r11,2144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825683e4
	if (cr0.eq) goto loc_825683E4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,6336
	r11.s64 = r11.s64 + 6336;
	// b 0x825683ec
	goto loc_825683EC;
loc_825683E4:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,6072
	r11.s64 = r11.s64 + 6072;
loc_825683EC:
	// stw r11,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r11.u32);
	// lwz r11,336(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 336);
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// lwz r28,4(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82565568
	sub_82565568(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,2136(r31)
	PPC_STORE_U32(r31.u32 + 2136, r11.u32);
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// bl 0x82565568
	sub_82565568(ctx, base);
	// lwz r11,2136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2136);
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r3,2140(r31)
	PPC_STORE_U32(r31.u32 + 2140, ctx.r3.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x82568450
	if (!cr6.gt) goto loc_82568450;
	// addi r9,r11,8
	ctx.r9.s64 = r11.s64 + 8;
loc_82568438:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82568438
	if (cr6.lt) goto loc_82568438;
loc_82568450:
	// lwz r10,2140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2140);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8256847c
	if (!cr6.gt) goto loc_8256847C;
	// addi r11,r10,8
	r11.s64 = ctx.r10.s64 + 8;
loc_82568464:
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmplw cr6,r30,r9
	cr6.compare<uint32_t>(r30.u32, ctx.r9.u32, xer);
	// blt cr6,0x82568464
	if (cr6.lt) goto loc_82568464;
loc_8256847C:
	// lwz r11,336(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 336);
	// lwz r3,428(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825684A4"))) PPC_WEAK_FUNC(sub_825684A4);
PPC_FUNC_IMPL(__imp__sub_825684A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825684A8"))) PPC_WEAK_FUNC(sub_825684A8);
PPC_FUNC_IMPL(__imp__sub_825684A8) {
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
	// lwz r11,2140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2140);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825684d8
	if (cr0.eq) goto loc_825684D8;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825684D8:
	// lwz r11,2136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2136);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825684f0
	if (cr0.eq) goto loc_825684F0;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825684F0:
	// lwz r3,2068(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 2068);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82568504
	if (cr0.eq) goto loc_82568504;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82564b78
	sub_82564B78(ctx, base);
loc_82568504:
	// lwz r30,172(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82568524
	if (cr0.eq) goto loc_82568524;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82576590
	sub_82576590(ctx, base);
	// addi r4,r30,-4
	ctx.r4.s64 = r30.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82568524:
	// addi r30,r31,128
	r30.s64 = r31.s64 + 128;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825829d8
	sub_825829D8(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,152(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,160(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 160);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-11504
	r11.s64 = r11.s64 + -11504;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_82568588"))) PPC_WEAK_FUNC(sub_82568588);
PPC_FUNC_IMPL(__imp__sub_82568588) {
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
	// lwz r11,152(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82568614
	if (!cr6.eq) goto loc_82568614;
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// li r4,44
	ctx.r4.s64 = 44;
	// lwz r31,432(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// beq 0x825685e0
	if (cr0.eq) goto loc_825685E0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82588950
	sub_82588950(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825685e4
	goto loc_825685E4;
loc_825685E0:
	// li r31,0
	r31.s64 = 0;
loc_825685E4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,164(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 164);
	// bl 0x82588f28
	sub_82588F28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82564e38
	sub_82564E38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82588a48
	sub_82588A48(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82568614:
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
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

__attribute__((alias("__imp__sub_82568630"))) PPC_WEAK_FUNC(sub_82568630);
PPC_FUNC_IMPL(__imp__sub_82568630) {
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
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825686b4
	if (!cr6.eq) goto loc_825686B4;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwinm r29,r30,2,0,29
	r29.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r29,4
	ctx.r4.s64 = r29.s64 + 4;
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(r31.u32 + 156, r11.u32);
	// bl 0x82568588
	sub_82568588(ctx, base);
	// lwz r11,156(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// cmpwi cr6,r30,1
	cr6.compare<int32_t>(r30.s32, 1, xer);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// blt cr6,0x825686b4
	if (cr6.lt) goto loc_825686B4;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r29,r3
	r11.u64 = r29.u64 + ctx.r3.u64;
loc_82568698:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// lwz r8,156(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// stwx r9,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82568698
	if (!cr0.eq) goto loc_82568698;
loc_825686B4:
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 156);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825686C0"))) PPC_WEAK_FUNC(sub_825686C0);
PPC_FUNC_IMPL(__imp__sub_825686C0) {
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
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255fa18
	sub_8255FA18(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82568740
	if (cr6.eq) goto loc_82568740;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82568748
	if (!cr6.eq) goto loc_82568748;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,553
	ctx.r7.s64 = 553;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82568748
	goto loc_82568748;
loc_82568740:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565050
	sub_82565050(ctx, base);
loc_82568748:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82568750"))) PPC_WEAK_FUNC(sub_82568750);
PPC_FUNC_IMPL(__imp__sub_82568750) {
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
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255eb48
	sub_8255EB48(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x825687d0
	if (cr6.eq) goto loc_825687D0;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82568820
	if (!cr6.eq) goto loc_82568820;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1013
	ctx.r7.s64 = 1013;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82568820
	goto loc_82568820;
loc_825687D0:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255ec78
	sub_8255EC78(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bne cr6,0x8256881c
	if (!cr6.eq) goto loc_8256881C;
	// bl 0x825655e0
	sub_825655E0(ctx, base);
	// b 0x82568820
	goto loc_82568820;
loc_8256881C:
	// bl 0x82565730
	sub_82565730(ctx, base);
loc_82568820:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82568828"))) PPC_WEAK_FUNC(sub_82568828);
PPC_FUNC_IMPL(__imp__sub_82568828) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcdc
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82565008
	sub_82565008(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82589a30
	sub_82589A30(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r24,r11,8972
	r24.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r23,r11,-11648
	r23.s64 = r11.s64 + -11648;
	// beq cr6,0x825688b8
	if (cr6.eq) goto loc_825688B8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1083
	ctx.r7.s64 = 1083;
	// addi r5,r11,-11180
	ctx.r5.s64 = r11.s64 + -11180;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825688B8:
	// lwz r22,168(r31)
	r22.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r21,80(r1)
	r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,0
	r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r10,60(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_825688D4:
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// ble cr6,0x825688e4
	if (!cr6.gt) goto loc_825688E4;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x825688f0
	goto loc_825688F0;
loc_825688E4:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
loc_825688F0:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82568908
	if (cr0.eq) goto loc_82568908;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x825688d4
	goto loc_825688D4;
loc_82568908:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r11,4
	r11.s64 = 4;
	// li r29,0
	r29.s64 = 0;
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
loc_82568930:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x82568930
	if (cr6.lt) goto loc_82568930;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,164
	ctx.r4.s64 = 164;
	// lwz r29,428(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x825689a8
	if (cr0.eq) goto loc_825689A8;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8258a6d0
	sub_8258A6D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x825689ac
	goto loc_825689AC;
loc_825689A8:
	// li r27,0
	r27.s64 = 0;
loc_825689AC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825689d8
	if (!cr0.eq) goto loc_825689D8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// addi r5,r11,-10836
	ctx.r5.s64 = r11.s64 + -10836;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825689D8:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r28,144(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b638
	sub_8254B638(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r11,-10856
	r26.s64 = r11.s64 + -10856;
	// bne 0x82568b20
	if (!cr0.eq) goto loc_82568B20;
	// li r7,1121
	ctx.r7.s64 = 1121;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82568B20:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,2
	r11.s64 = 2;
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82568b8c
	if (!cr0.eq) goto loc_82568B8C;
	// li r7,1129
	ctx.r7.s64 = 1129;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82568B8C:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,32(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_82568C54:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x82568c54
	if (cr6.lt) goto loc_82568C54;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82568ce0
	if (!cr0.eq) goto loc_82568CE0;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82568CE0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x82568d14
	if (cr0.eq) goto loc_82568D14;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82589610
	sub_82589610(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x82568d18
	goto loc_82568D18;
loc_82568D14:
	// li r30,0
	r30.s64 = 0;
loc_82568D18:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,148(r27)
	PPC_STORE_U32(r27.u32 + 148, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82589ec0
	sub_82589EC0(ctx, base);
	// lwz r29,152(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82589ec0
	sub_82589EC0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82589ec0
	sub_82589EC0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// bl 0x8258a450
	sub_8258A450(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82568DA0"))) PPC_WEAK_FUNC(sub_82568DA0);
PPC_FUNC_IMPL(__imp__sub_82568DA0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r3,464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// bl 0x8255eb48
	sub_8255EB48(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82568e20
	if (cr6.eq) goto loc_82568E20;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82568e9c
	if (!cr6.eq) goto loc_82568E9C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1282
	ctx.r7.s64 = 1282;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82568e9c
	goto loc_82568E9C;
loc_82568E20:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// li r28,0
	r28.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x82568e8c
	if (!cr6.gt) goto loc_82568E8C;
	// li r29,0
	r29.s64 = 0;
loc_82568E3C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82568e54
	if (!cr6.lt) goto loc_82568E54;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x82568e5c
	goto loc_82568E5C;
loc_82568E54:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82568E5C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// cmpwi cr6,r11,23
	cr6.compare<int32_t>(r11.s32, 23, xer);
	// beq cr6,0x82568e88
	if (cr6.eq) goto loc_82568E88;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// blt cr6,0x82568e3c
	if (cr6.lt) goto loc_82568E3C;
	// b 0x82568e8c
	goto loc_82568E8C;
loc_82568E88:
	// li r28,1
	r28.s64 = 1;
loc_82568E8C:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82568e9c
	if (!cr0.eq) goto loc_82568E9C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82565ec8
	sub_82565EC8(ctx, base);
loc_82568E9C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82568EA4"))) PPC_WEAK_FUNC(sub_82568EA4);
PPC_FUNC_IMPL(__imp__sub_82568EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82568EA8"))) PPC_WEAK_FUNC(sub_82568EA8);
PPC_FUNC_IMPL(__imp__sub_82568EA8) {
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
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255ef28
	sub_8255EF28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82568f28
	if (cr6.eq) goto loc_82568F28;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x82568f30
	if (!cr6.eq) goto loc_82568F30;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1307
	ctx.r7.s64 = 1307;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82568f30
	goto loc_82568F30;
loc_82568F28:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565918
	sub_82565918(ctx, base);
loc_82568F30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82568F38"))) PPC_WEAK_FUNC(sub_82568F38);
PPC_FUNC_IMPL(__imp__sub_82568F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82560fe0
	sub_82560FE0(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f278
	sub_8255F278(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f390
	sub_8255F390(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f4a0
	sub_8255F4A0(ctx, base);
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82589a30
	sub_82589A30(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r23,r11,8972
	r23.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r22,r11,-11648
	r22.s64 = r11.s64 + -11648;
	// beq cr6,0x82569088
	if (cr6.eq) goto loc_82569088;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1505
	ctx.r7.s64 = 1505;
	// addi r5,r11,-11180
	ctx.r5.s64 = r11.s64 + -11180;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569088:
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r29,0
	r29.s64 = 0;
	// li r20,1
	r20.s64 = 1;
	// lwz r25,92(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r8,r20
	ctx.r8.u64 = r20.u64;
	// lwz r9,60(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
loc_825690AC:
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// ble cr6,0x825690bc
	if (!cr6.gt) goto loc_825690BC;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// b 0x825690c8
	goto loc_825690C8;
loc_825690BC:
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_825690C8:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825690e0
	if (cr0.eq) goto loc_825690E0;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x825690ac
	goto loc_825690AC;
loc_825690E0:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r28,r11,-15800
	r28.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f5b8
	sub_8255F5B8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r21,r11,-10856
	r21.s64 = r11.s64 + -10856;
	// bne 0x825691a8
	if (!cr0.eq) goto loc_825691A8;
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r9,23
	ctx.r9.s64 = 23;
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// addi r11,r11,-11688
	r11.s64 = r11.s64 + -11688;
	// stw r9,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r9.u32);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,128(r30)
	PPC_STORE_U32(r30.u32 + 128, ctx.r10.u32);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b6a0
	sub_8254B6A0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256970c
	if (!cr0.eq) goto loc_8256970C;
	// li r7,1527
	ctx.r7.s64 = 1527;
	// b 0x82569410
	goto loc_82569410;
loc_825691A8:
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r28,r11,-15800
	r28.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f6d0
	sub_8255F6D0(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r27,r11,-15800
	r27.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f7e8
	sub_8255F7E8(ctx, base);
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r26,r11,-15800
	r26.s64 = r11.s64 + -15800;
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f900
	sub_8255F900(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// bne cr6,0x82569428
	if (!cr6.eq) goto loc_82569428;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82562958
	sub_82562958(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r30,r11,-11020
	r30.s64 = r11.s64 + -11020;
	// beq cr6,0x825692a8
	if (cr6.eq) goto loc_825692A8;
	// li r7,1554
	ctx.r7.s64 = 1554;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825692A8:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x825629f8
	sub_825629F8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x825692e4
	if (cr6.eq) goto loc_825692E4;
	// li r7,1558
	ctx.r7.s64 = 1558;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825692E4:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// li r3,18
	ctx.r3.s64 = 18;
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 - ctx.f13.f64));
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// fdivs f31,f0,f13
	f31.f64 = double(float(f0.f64 / ctx.f13.f64));
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r29,64(r30)
	PPC_STORE_U32(r30.u32 + 64, r29.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r20,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r20.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,-11688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -11688);
	// stw r10,88(r30)
	PPC_STORE_U32(r30.u32 + 88, ctx.r10.u32);
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82569394
	if (!cr0.eq) goto loc_82569394;
	// li r7,1570
	ctx.r7.s64 = 1570;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569394:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r20,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r20.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256970c
	if (!cr0.eq) goto loc_8256970C;
	// li r7,1579
	ctx.r7.s64 = 1579;
loc_82569410:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8256970c
	goto loc_8256970C;
loc_82569428:
	// cmpwi cr6,r27,1
	cr6.compare<int32_t>(r27.s32, 1, xer);
	// beq cr6,0x82569438
	if (cr6.eq) goto loc_82569438;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x82569708
	if (!cr6.eq) goto loc_82569708;
loc_82569438:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82562a98
	sub_82562A98(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82569478
	if (cr6.eq) goto loc_82569478;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1588
	ctx.r7.s64 = 1588;
	// addi r5,r11,-11020
	ctx.r5.s64 = r11.s64 + -11020;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569478:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r10,23
	ctx.r10.s64 = 23;
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-11688(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -11688);
	// stw r10,84(r30)
	PPC_STORE_U32(r30.u32 + 84, ctx.r10.u32);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lfs f4,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256950c
	if (!cr0.eq) goto loc_8256950C;
	// li r7,1596
	ctx.r7.s64 = 1596;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256950C:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x82569590
	if (!cr6.eq) goto loc_82569590;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82569590
	if (!cr0.eq) goto loc_82569590;
	// li r7,1605
	ctx.r7.s64 = 1605;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569590:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfd f1,-10792(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + -10792);
	// bl 0x8239ebe8
	sub_8239EBE8(ctx, base);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// lfd f1,264(r11)
	ctx.f1.u64 = PPC_LOAD_U64(r11.u32 + 264);
	// bl 0x8239ebe8
	sub_8239EBE8(ctx, base);
	// fdiv f0,f31,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = f31.f64 / ctx.f1.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f4,f31
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = f31.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f3,f31
	ctx.f3.f64 = f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = f31.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82569640
	if (!cr0.eq) goto loc_82569640;
	// li r7,1634
	ctx.r7.s64 = 1634;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569640:
	// li r3,55
	ctx.r3.s64 = 55;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x825696ac
	if (!cr0.eq) goto loc_825696AC;
	// li r7,1642
	ctx.r7.s64 = 1642;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825696AC:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256970c
	if (!cr0.eq) goto loc_8256970C;
	// li r7,1649
	ctx.r7.s64 = 1649;
	// b 0x82569410
	goto loc_82569410;
loc_82569708:
	// lwz r30,92(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8256970C:
	// lwz r28,12(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r27,r11,-15800
	r27.s64 = r11.s64 + -15800;
	// lwz r3,464(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// bl 0x8255ec78
	sub_8255EC78(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8256983c
	if (!cr6.eq) goto loc_8256983C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r28,428(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r26,28(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// lwz r27,32(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// beq 0x82569788
	if (cr0.eq) goto loc_82569788;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82587640
	sub_82587640(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82569788:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x825838d0
	sub_825838D0(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x82585fe0
	sub_82585FE0(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82569824
	if (!cr0.eq) goto loc_82569824;
	// li r7,1672
	ctx.r7.s64 = 1672;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r21
	ctx.r5.u64 = r21.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569824:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// stw r29,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r29.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// b 0x82569a30
	goto loc_82569A30;
loc_8256983C:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82561eb0
	sub_82561EB0(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82561f50
	sub_82561F50(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82561ff0
	sub_82561FF0(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82562740
	sub_82562740(ctx, base);
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,32(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x825886d0
	sub_825886D0(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r20,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r20.u8);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256996c
	if (!cr0.eq) goto loc_8256996C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1706
	ctx.r7.s64 = 1706;
	// addi r5,r11,-11196
	ctx.r5.s64 = r11.s64 + -11196;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256996C:
	// li r3,20
	ctx.r3.s64 = 20;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82588740
	sub_82588740(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// lwz r4,108(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// lwz r3,948(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82569a30
	if (!cr0.eq) goto loc_82569A30;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1720
	ctx.r7.s64 = 1720;
	// addi r5,r11,-10816
	ctx.r5.s64 = r11.s64 + -10816;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569A30:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82569A3C"))) PPC_WEAK_FUNC(sub_82569A3C);
PPC_FUNC_IMPL(__imp__sub_82569A3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82569A40"))) PPC_WEAK_FUNC(sub_82569A40);
PPC_FUNC_IMPL(__imp__sub_82569A40) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82565008
	sub_82565008(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r20,r3
	r20.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82589a30
	sub_82589A30(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r22,r11,8972
	r22.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r21,r11,-11648
	r21.s64 = r11.s64 + -11648;
	// beq cr6,0x82569ad4
	if (cr6.eq) goto loc_82569AD4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1765
	ctx.r7.s64 = 1765;
	// addi r5,r11,-11180
	ctx.r5.s64 = r11.s64 + -11180;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569AD4:
	// lwz r18,168(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r25,1
	r25.s64 = 1;
	// lwz r19,80(r1)
	r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	r11.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r10,60(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_82569AF4:
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// ble cr6,0x82569b04
	if (!cr6.gt) goto loc_82569B04;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82569b10
	goto loc_82569B10;
loc_82569B04:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
loc_82569B10:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82569b28
	if (cr0.eq) goto loc_82569B28;
	// mr r19,r9
	r19.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82569af4
	goto loc_82569AF4;
loc_82569B28:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stb r25,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r25.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-11700(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -11700);
	// stw r11,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r11.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_82569B68:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x82569b68
	if (cr6.lt) goto loc_82569B68;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r24,r11,-10856
	r24.s64 = r11.s64 + -10856;
	// bne 0x82569bdc
	if (!cr0.eq) goto loc_82569BDC;
	// li r7,1783
	ctx.r7.s64 = 1783;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569BDC:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// li r4,164
	ctx.r4.s64 = 164;
	// stw r11,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,428(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x82569c40
	if (cr0.eq) goto loc_82569C40;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8258a6d0
	sub_8258A6D0(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x82569c44
	goto loc_82569C44;
loc_82569C40:
	// li r27,0
	r27.s64 = 0;
loc_82569C44:
	// li r29,0
	r29.s64 = 0;
loc_82569C48:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x82569c48
	if (cr6.lt) goto loc_82569C48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82569cac
	if (!cr0.eq) goto loc_82569CAC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1794
	ctx.r7.s64 = 1794;
	// addi r5,r11,-10784
	ctx.r5.s64 = r11.s64 + -10784;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569CAC:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r28,144(r27)
	r28.u64 = PPC_LOAD_U32(r27.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r25,159(r30)
	PPC_STORE_U8(r30.u32 + 159, r25.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82569de0
	if (!cr0.eq) goto loc_82569DE0;
	// li r7,1810
	ctx.r7.s64 = 1810;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569DE0:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b708
	sub_8254B708(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82569edc
	if (!cr0.eq) goto loc_82569EDC;
	// li r7,1825
	ctx.r7.s64 = 1825;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569EDC:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,2
	r11.s64 = 2;
	// li r10,31
	ctx.r10.s64 = 31;
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// stw r10,80(r30)
	PPC_STORE_U32(r30.u32 + 80, ctx.r10.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82569f48
	if (!cr0.eq) goto loc_82569F48;
	// li r7,1833
	ctx.r7.s64 = 1833;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82569F48:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,32(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r20
	ctx.r5.u64 = r20.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_8256A010:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8256a010
	if (cr6.lt) goto loc_8256A010;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256a09c
	if (!cr0.eq) goto loc_8256A09C;
	// li r7,1856
	ctx.r7.s64 = 1856;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256A09C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8256a0d0
	if (cr0.eq) goto loc_8256A0D0;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82589610
	sub_82589610(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8256a0d4
	goto loc_8256A0D4;
loc_8256A0D0:
	// li r30,0
	r30.s64 = 0;
loc_8256A0D4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,148(r27)
	PPC_STORE_U32(r27.u32 + 148, r30.u32);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82589ec0
	sub_82589EC0(ctx, base);
	// lwz r29,152(r27)
	r29.u64 = PPC_LOAD_U32(r27.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82589ec0
	sub_82589EC0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82589ec0
	sub_82589EC0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r19
	ctx.r3.u64 = r19.u64;
	// bl 0x8258a450
	sub_8258A450(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8256A15C"))) PPC_WEAK_FUNC(sub_8256A15C);
PPC_FUNC_IMPL(__imp__sub_8256A15C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256A160"))) PPC_WEAK_FUNC(sub_8256A160);
PPC_FUNC_IMPL(__imp__sub_8256A160) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82565008
	sub_82565008(ctx, base);
	// li r25,1
	r25.s64 = 1;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// stb r25,2073(r31)
	PPC_STORE_U8(r31.u32 + 2073, r25.u8);
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// lwz r10,484(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 484);
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// stw r5,484(r11)
	PPC_STORE_U32(r11.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// bl 0x82589a30
	sub_82589A30(ctx, base);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r22,r11,8972
	r22.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r21,r11,-11648
	r21.s64 = r11.s64 + -11648;
	// beq cr6,0x8256a1fc
	if (cr6.eq) goto loc_8256A1FC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2205
	ctx.r7.s64 = 2205;
	// addi r5,r11,-11180
	ctx.r5.s64 = r11.s64 + -11180;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256A1FC:
	// lwz r18,168(r31)
	r18.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r20,84(r1)
	r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	r11.s64 = 0;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r10,60(r18)
	ctx.r10.u64 = PPC_LOAD_U32(r18.u32 + 60);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_8256A218:
	// cmplw cr6,r8,r6
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, xer);
	// ble cr6,0x8256a228
	if (!cr6.gt) goto loc_8256A228;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x8256a234
	goto loc_8256A234;
loc_8256A228:
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
loc_8256A234:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x8256a24c
	if (cr0.eq) goto loc_8256A24C;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8256a218
	goto loc_8256A218;
loc_8256A24C:
	// li r3,64
	ctx.r3.s64 = 64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_8256A2FC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8256a2fc
	if (cr6.lt) goto loc_8256A2FC;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stb r25,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r25.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256a370
	if (!cr0.eq) goto loc_8256A370;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2226
	ctx.r7.s64 = 2226;
	// addi r5,r11,-10700
	ctx.r5.s64 = r11.s64 + -10700;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256A370:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r29,0
	r29.s64 = 0;
loc_8256A440:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8256a440
	if (cr6.lt) goto loc_8256A440;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256a4f0
	if (!cr0.eq) goto loc_8256A4F0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2245
	ctx.r7.s64 = 2245;
	// addi r5,r11,-10720
	ctx.r5.s64 = r11.s64 + -10720;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256A4F0:
	// li r3,135
	ctx.r3.s64 = 135;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r23,2
	r23.s64 = 2;
	// li r4,164
	ctx.r4.s64 = 164;
	// stw r23,168(r30)
	PPC_STORE_U32(r30.u32 + 168, r23.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r29,428(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// beq 0x8256a554
	if (cr0.eq) goto loc_8256A554;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x8258a6d0
	sub_8258A6D0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// b 0x8256a558
	goto loc_8256A558;
loc_8256A554:
	// li r26,0
	r26.s64 = 0;
loc_8256A558:
	// li r29,0
	r29.s64 = 0;
loc_8256A55C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8256a55c
	if (cr6.lt) goto loc_8256A55C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256a5c0
	if (!cr0.eq) goto loc_8256A5C0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2256
	ctx.r7.s64 = 2256;
	// addi r5,r11,-10836
	ctx.r5.s64 = r11.s64 + -10836;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256A5C0:
	// li r3,49
	ctx.r3.s64 = 49;
	// lwz r28,144(r26)
	r28.u64 = PPC_LOAD_U32(r26.u32 + 144);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r25,159(r30)
	PPC_STORE_U8(r30.u32 + 159, r25.u8);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256a638
	if (!cr0.eq) goto loc_8256A638;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2266
	ctx.r7.s64 = 2266;
	// addi r5,r11,-11272
	ctx.r5.s64 = r11.s64 + -11272;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256A638:
	// li r3,18
	ctx.r3.s64 = 18;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stb r25,153(r30)
	PPC_STORE_U8(r30.u32 + 153, r25.u8);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// bl 0x82561d90
	sub_82561D90(ctx, base);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82561da8
	sub_82561DA8(ctx, base);
	// lfs f4,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f3.f64 = double(temp.f32);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256a784
	if (!cr0.eq) goto loc_8256A784;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2291
	ctx.r7.s64 = 2291;
	// addi r5,r11,-11196
	ctx.r5.s64 = r11.s64 + -11196;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256A784:
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// li r5,2
	ctx.r5.s64 = 2;
	// stb r25,159(r30)
	PPC_STORE_U8(r30.u32 + 159, r25.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lfs f4,-11704(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11704);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f4
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256a89c
	if (!cr0.eq) goto loc_8256A89C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2305
	ctx.r7.s64 = 2305;
	// addi r5,r11,-11212
	ctx.r5.s64 = r11.s64 + -11212;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256A89C:
	// li r3,105
	ctx.r3.s64 = 105;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b838
	sub_8254B838(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,172(r30)
	PPC_STORE_U32(r30.u32 + 172, r11.u32);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256a99c
	if (!cr0.eq) goto loc_8256A99C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2318
	ctx.r7.s64 = 2318;
	// addi r5,r11,-10740
	ctx.r5.s64 = r11.s64 + -10740;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256A99C:
	// li r3,78
	ctx.r3.s64 = 78;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,31
	r11.s64 = 31;
	// li r29,0
	r29.s64 = 0;
	// stw r23,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r23.u32);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
loc_8256A9BC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8256a9bc
	if (cr6.lt) goto loc_8256A9BC;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82565180
	sub_82565180(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825856b0
	sub_825856B0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256aa3c
	if (!cr0.eq) goto loc_8256AA3C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2329
	ctx.r7.s64 = 2329;
	// addi r5,r11,-10760
	ctx.r5.s64 = r11.s64 + -10760;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256AA3C:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r4,140
	ctx.r4.s64 = 140;
	// lwz r30,428(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8256aa70
	if (cr0.eq) goto loc_8256AA70;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x82589610
	sub_82589610(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8256aa74
	goto loc_8256AA74;
loc_8256AA70:
	// li r30,0
	r30.s64 = 0;
loc_8256AA74:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r30,148(r26)
	PPC_STORE_U32(r26.u32 + 148, r30.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82589ec0
	sub_82589EC0(ctx, base);
	// lwz r29,152(r26)
	r29.u64 = PPC_LOAD_U32(r26.u32 + 152);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x82589ec0
	sub_82589EC0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82589ec0
	sub_82589EC0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x8258a450
	sub_8258A450(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564728
	sub_82564728(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8256AAFC"))) PPC_WEAK_FUNC(sub_8256AAFC);
PPC_FUNC_IMPL(__imp__sub_8256AAFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256AB00"))) PPC_WEAK_FUNC(sub_8256AB00);
PPC_FUNC_IMPL(__imp__sub_8256AB00) {
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
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255ea30
	sub_8255EA30(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8256ab80
	if (cr6.eq) goto loc_8256AB80;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8256ab88
	if (!cr6.eq) goto loc_8256AB88;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2453
	ctx.r7.s64 = 2453;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8256ab88
	goto loc_8256AB88;
loc_8256AB80:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82566d80
	sub_82566D80(ctx, base);
loc_8256AB88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256AB90"))) PPC_WEAK_FUNC(sub_8256AB90);
PPC_FUNC_IMPL(__imp__sub_8256AB90) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82568630
	sub_82568630(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r27,r31,128
	r27.s64 = r31.s64 + 128;
loc_8256ABAC:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// li r30,0
	r30.s64 = 0;
	// li r29,1
	r29.s64 = 1;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x8256ac70
	if (cr6.lt) goto loc_8256AC70;
	// addi r28,r26,4
	r28.s64 = r26.s64 + 4;
loc_8256ABC8:
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256ac58
	if (!cr0.eq) goto loc_8256AC58;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r6,132(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_8256ABFC:
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// ble cr6,0x8256ac10
	if (!cr6.gt) goto loc_8256AC10;
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x8256ac1c
	goto loc_8256AC1C;
loc_8256AC10:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
loc_8256AC1C:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x8256ac40
	if (cr0.eq) goto loc_8256AC40;
	// lwz r8,132(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r5,132(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// or r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 | ctx.r5.u64;
	// stw r8,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r8.u32);
	// b 0x8256abfc
	goto loc_8256ABFC;
loc_8256AC40:
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// subf r11,r11,r6
	r11.s64 = ctx.r6.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// xori r30,r11,1
	r30.u64 = r11.u64 ^ 1;
loc_8256AC58:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// cmpw cr6,r29,r3
	cr6.compare<int32_t>(r29.s32, ctx.r3.s32, xer);
	// ble cr6,0x8256abc8
	if (!cr6.gt) goto loc_8256ABC8;
loc_8256AC70:
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256abac
	if (!cr0.eq) goto loc_8256ABAC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8256AC80"))) PPC_WEAK_FUNC(sub_8256AC80);
PPC_FUNC_IMPL(__imp__sub_8256AC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// lwz r16,136(r21)
	r16.u64 = PPC_LOAD_U32(r21.u32 + 136);
	// lwz r11,8(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8256b188
	if (cr6.eq) goto loc_8256B188;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r19,-32245
	r19.s64 = -2113208320;
	// addi r14,r11,-10648
	r14.s64 = r11.s64 + -10648;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r22,0
	r22.s64 = 0;
	// addi r11,r11,-10664
	r11.s64 = r11.s64 + -10664;
	// li r20,1
	r20.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r18,r11,8972
	r18.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r15,r11,-10680
	r15.s64 = r11.s64 + -10680;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r17,r11,-11648
	r17.s64 = r11.s64 + -11648;
loc_8256ACD8:
	// lwz r31,28(r16)
	r31.u64 = PPC_LOAD_U32(r16.u32 + 28);
	// mr r25,r22
	r25.u64 = r22.u64;
	// mr r23,r22
	r23.u64 = r22.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8256b178
	if (cr6.eq) goto loc_8256B178;
loc_8256ACF0:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256aecc
	if (cr0.eq) goto loc_8256AECC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256aecc
	if (cr0.eq) goto loc_8256AECC;
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
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256aecc
	if (cr0.eq) goto loc_8256AECC;
	// cmpwi cr6,r27,30
	cr6.compare<int32_t>(r27.s32, 30, xer);
	// beq cr6,0x8256ad58
	if (cr6.eq) goto loc_8256AD58;
	// cmpwi cr6,r27,12
	cr6.compare<int32_t>(r27.s32, 12, xer);
	// beq cr6,0x8256ad58
	if (cr6.eq) goto loc_8256AD58;
	// cmpwi cr6,r27,13
	cr6.compare<int32_t>(r27.s32, 13, xer);
	// beq cr6,0x8256ad58
	if (cr6.eq) goto loc_8256AD58;
	// cmpwi cr6,r27,14
	cr6.compare<int32_t>(r27.s32, 14, xer);
	// bne cr6,0x8256aecc
	if (!cr6.eq) goto loc_8256AECC;
loc_8256AD58:
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 12);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// addi r29,r11,4
	r29.s64 = r11.s64 + 4;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
	// mr r23,r29
	r23.u64 = r29.u64;
	// stw r10,16(r29)
	PPC_STORE_U32(r29.u32 + 16, ctx.r10.u32);
	// stb r20,176(r31)
	PPC_STORE_U8(r31.u32 + 176, r20.u8);
	// lwz r28,132(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// bl 0x82586320
	sub_82586320(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,12(r29)
	PPC_STORE_U32(r29.u32 + 12, r11.u32);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// ble cr6,0x8256add8
	if (!cr6.gt) goto loc_8256ADD8;
	// li r7,3304
	ctx.r7.s64 = 3304;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256ADD8:
	// mr r11,r25
	r11.u64 = r25.u64;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8256ae28
	if (cr6.eq) goto loc_8256AE28;
loc_8256ADE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bne cr6,0x8256ae14
	if (!cr6.eq) goto loc_8256AE14;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r10,r27
	cr6.compare<int32_t>(ctx.r10.s32, r27.s32, xer);
	// bne cr6,0x8256ae14
	if (!cr6.eq) goto loc_8256AE14;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// subf r10,r10,r28
	ctx.r10.s64 = r28.s64 - ctx.r10.s64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256ae20
	if (!cr0.eq) goto loc_8256AE20;
loc_8256AE14:
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256ade4
	if (!cr0.eq) goto loc_8256ADE4;
loc_8256AE20:
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256ae84
	if (!cr6.eq) goto loc_8256AE84;
loc_8256AE28:
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 12);
	// li r4,52
	ctx.r4.s64 = 52;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r25,r11
	r25.u64 = r11.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r27.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r28.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r20,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r20.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(r11.u32 + 44, ctx.r8.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
	// b 0x8256aec8
	goto loc_8256AEC8;
loc_8256AE84:
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// bge cr6,0x8256aea0
	if (!cr6.lt) goto loc_8256AEA0;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
loc_8256AEA0:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// ble cr6,0x8256aebc
	if (!cr6.gt) goto loc_8256AEBC;
	// stw r10,24(r11)
	PPC_STORE_U32(r11.u32 + 24, ctx.r10.u32);
loc_8256AEBC:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
loc_8256AEC8:
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_8256AECC:
	// lwz r31,8(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8256acf0
	if (!cr6.eq) goto loc_8256ACF0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x8256b178
	if (cr6.eq) goto loc_8256B178;
loc_8256AEE4:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8256af04
	if (!cr6.eq) goto loc_8256AF04;
	// li r7,3348
	ctx.r7.s64 = 3348;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256AF04:
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r3,172(r21)
	ctx.r3.u64 = PPC_LOAD_U32(r21.u32 + 172);
	// li r4,31
	ctx.r4.s64 = 31;
	// mr r24,r22
	r24.u64 = r22.u64;
	// bl 0x82574968
	sub_82574968(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// b 0x8256b064
	goto loc_8256B064;
loc_8256AF20:
	// mr r31,r25
	r31.u64 = r25.u64;
	// addi r26,r25,44
	r26.s64 = r25.s64 + 44;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r25,0(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// stw r22,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r22.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8256af54
	if (cr6.gt) goto loc_8256AF54;
	// li r7,3359
	ctx.r7.s64 = 3359;
	// mr r6,r17
	ctx.r6.u64 = r17.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256AF54:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,28(r31)
	PPC_STORE_U32(r31.u32 + 28, ctx.r3.u32);
	// lwz r29,28(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r28,128(r3)
	r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,-11708(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + -11708);
	// stw r11,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, r11.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82583518
	sub_82583518(ctx, base);
	// lwz r11,12(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 12);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,428(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8256afc0
	if (cr0.eq) goto loc_8256AFC0;
	// li r4,128
	ctx.r4.s64 = 128;
	// lwz r5,12(r21)
	ctx.r5.u64 = PPC_LOAD_U32(r21.u32 + 12);
	// bl 0x82586fd0
	sub_82586FD0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8256afc4
	goto loc_8256AFC4;
loc_8256AFC0:
	// mr r30,r22
	r30.u64 = r22.u64;
loc_8256AFC4:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,128(r30)
	PPC_STORE_U32(r30.u32 + 128, r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82583568
	sub_82583568(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r3,r16
	ctx.r3.u64 = r16.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// bl 0x82589480
	sub_82589480(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r30,180(r11)
	PPC_STORE_U32(r11.u32 + 180, r30.u32);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r22,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r22.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r22,184(r11)
	PPC_STORE_U32(r11.u32 + 184, r22.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// ble cr6,0x8256b064
	if (!cr6.gt) goto loc_8256B064;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r24,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r24.u32);
	// mr r24,r31
	r24.u64 = r31.u64;
	// stw r22,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r22.u32);
	// stw r22,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r22.u32);
	// stw r22,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r22.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8256B064:
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// bne cr6,0x8256af20
	if (!cr6.eq) goto loc_8256AF20;
	// mr r29,r22
	r29.u64 = r22.u64;
	// b 0x8256b160
	goto loc_8256B160;
loc_8256B074:
	// addi r10,r23,16
	ctx.r10.s64 = r23.s64 + 16;
	// lwz r31,0(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r30,r23
	r30.u64 = r23.u64;
	// lwz r23,0(r10)
	r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r22,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r22.u32);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// subf r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r7,r8
	cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, xer);
	// beq cr6,0x8256b14c
	if (cr6.eq) goto loc_8256B14C;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bgt cr6,0x8256b0fc
	if (cr6.gt) goto loc_8256B0FC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8256b0c8
	if (!cr6.lt) goto loc_8256B0C8;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, r11.u32);
loc_8256B0C8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x82582910
	sub_82582910(ctx, base);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x825828f0
	sub_825828F0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// bl 0x825865e8
	sub_825865E8(ctx, base);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,20(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// bl 0x82583568
	sub_82583568(ctx, base);
	// b 0x8256b160
	goto loc_8256B160;
loc_8256B0FC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// bge cr6,0x8256b114
	if (!cr6.lt) goto loc_8256B114;
	// stw r7,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r7.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8256B114:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// ble cr6,0x8256b130
	if (!cr6.gt) goto loc_8256B130;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
loc_8256B130:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// mr r29,r30
	r29.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x8256b160
	goto loc_8256B160;
loc_8256B14C:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x8256b160
	if (!cr6.lt) goto loc_8256B160;
	// stw r11,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r11.u32);
	// stw r11,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, r11.u32);
loc_8256B160:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x8256b074
	if (!cr6.eq) goto loc_8256B074;
	// mr r25,r24
	r25.u64 = r24.u64;
	// mr r23,r29
	r23.u64 = r29.u64;
	// cmplwi cr6,r24,0
	cr6.compare<uint32_t>(r24.u32, 0, xer);
	// bne cr6,0x8256aee4
	if (!cr6.eq) goto loc_8256AEE4;
loc_8256B178:
	// lwz r16,8(r16)
	r16.u64 = PPC_LOAD_U32(r16.u32 + 8);
	// lwz r11,8(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 8);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8256acd8
	if (!cr6.eq) goto loc_8256ACD8;
loc_8256B188:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8256B190"))) PPC_WEAK_FUNC(sub_8256B190);
PPC_FUNC_IMPL(__imp__sub_8256B190) {
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
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f058
	sub_8255F058(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8256b210
	if (cr6.eq) goto loc_8256B210;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8256b218
	if (!cr6.eq) goto loc_8256B218;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1054
	ctx.r7.s64 = 1054;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8256b218
	goto loc_8256B218;
loc_8256B210:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568828
	sub_82568828(ctx, base);
loc_8256B218:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256B220"))) PPC_WEAK_FUNC(sub_8256B220);
PPC_FUNC_IMPL(__imp__sub_8256B220) {
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
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255ef28
	sub_8255EF28(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8256b2a0
	if (cr6.eq) goto loc_8256B2A0;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8256b2a8
	if (!cr6.eq) goto loc_8256B2A8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1465
	ctx.r7.s64 = 1465;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8256b2a8
	goto loc_8256B2A8;
loc_8256B2A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568f38
	sub_82568F38(ctx, base);
loc_8256B2A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256B2B0"))) PPC_WEAK_FUNC(sub_8256B2B0);
PPC_FUNC_IMPL(__imp__sub_8256B2B0) {
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
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255f168
	sub_8255F168(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8256b330
	if (cr6.eq) goto loc_8256B330;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8256b338
	if (!cr6.eq) goto loc_8256B338;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1741
	ctx.r7.s64 = 1741;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8256b338
	goto loc_8256B338;
loc_8256B330:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82569a40
	sub_82569A40(ctx, base);
loc_8256B338:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256B340"))) PPC_WEAK_FUNC(sub_8256B340);
PPC_FUNC_IMPL(__imp__sub_8256B340) {
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
	// lis r11,-32171
	r11.s64 = -2108358656;
	// addi r29,r11,-15800
	r29.s64 = r11.s64 + -15800;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x8255fea8
	sub_8255FEA8(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8256b3c0
	if (cr6.eq) goto loc_8256B3C0;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// bne cr6,0x8256b3c8
	if (!cr6.eq) goto loc_8256B3C8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2182
	ctx.r7.s64 = 2182;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8256b3c8
	goto loc_8256B3C8;
loc_8256B3C0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256a160
	sub_8256A160(ctx, base);
loc_8256B3C8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256B3D0"))) PPC_WEAK_FUNC(sub_8256B3D0);
PPC_FUNC_IMPL(__imp__sub_8256B3D0) {
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
	// bl 0x8256ab90
	sub_8256AB90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82567cf8
	sub_82567CF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82567590
	sub_82567590(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825676e0
	sub_825676E0(ctx, base);
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

__attribute__((alias("__imp__sub_8256B414"))) PPC_WEAK_FUNC(sub_8256B414);
PPC_FUNC_IMPL(__imp__sub_8256B414) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B418"))) PPC_WEAK_FUNC(sub_8256B418);
PPC_FUNC_IMPL(__imp__sub_8256B418) {
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
	// bl 0x8256b190
	sub_8256B190(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b2b0
	sub_8256B2B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b340
	sub_8256B340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568750
	sub_82568750(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b220
	sub_8256B220(ctx, base);
	// lwz r8,2068(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 2068);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8256B460:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r7,r11
	cr6.compare<uint32_t>(ctx.r7.u32, r11.u32, xer);
	// ble cr6,0x8256b474
	if (!cr6.gt) goto loc_8256B474;
	// li r11,0
	r11.s64 = 0;
	// b 0x8256b480
	goto loc_8256B480;
loc_8256B474:
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r11,1
	r11.s64 = 1;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
loc_8256B480:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256b4c0
	if (cr0.eq) goto loc_8256B4C0;
	// lwz r11,228(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256b4b4
	if (cr0.eq) goto loc_8256B4B4;
	// lwz r11,80(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x8256b4b4
	if (!cr6.eq) goto loc_8256B4B4;
	// lwz r11,56(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lwz r6,2096(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 2096);
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// ble cr6,0x8256b4b4
	if (!cr6.gt) goto loc_8256B4B4;
	// stw r11,2096(r31)
	PPC_STORE_U32(r31.u32 + 2096, r11.u32);
loc_8256B4B4:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x8256b460
	goto loc_8256B460;
loc_8256B4C0:
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

__attribute__((alias("__imp__sub_8256B4D4"))) PPC_WEAK_FUNC(sub_8256B4D4);
PPC_FUNC_IMPL(__imp__sub_8256B4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B4D8"))) PPC_WEAK_FUNC(sub_8256B4D8);
PPC_FUNC_IMPL(__imp__sub_8256B4D8) {
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
	// bl 0x8258dc68
	sub_8258DC68(ctx, base);
	// lbz r11,2144(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 2144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256b570
	if (cr0.eq) goto loc_8256B570;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lbz r11,1004(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 1004);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256b51c
	if (cr0.eq) goto loc_8256B51C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82567420
	sub_82567420(ctx, base);
loc_8256B51C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568da0
	sub_82568DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82568ea8
	sub_82568EA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82566640
	sub_82566640(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82566958
	sub_82566958(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,1112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1112);
	// rlwinm. r11,r11,17,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256b554
	if (cr0.eq) goto loc_8256B554;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256ac80
	sub_8256AC80(ctx, base);
loc_8256B554:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,380(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 380);
	// stw r11,2088(r31)
	PPC_STORE_U32(r31.u32 + 2088, r11.u32);
	// bl 0x82566b50
	sub_82566B50(ctx, base);
	// b 0x8256b5cc
	goto loc_8256B5CC;
loc_8256B570:
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256b5ac
	if (!cr6.eq) goto loc_8256B5AC;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256b5ac
	if (!cr6.eq) goto loc_8256B5AC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,532
	ctx.r7.s64 = 532;
	// addi r6,r11,-11648
	ctx.r6.s64 = r11.s64 + -11648;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-11568
	ctx.r5.s64 = r11.s64 + -11568;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256B5AC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825686c0
	sub_825686C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b418
	sub_8256B418(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82566170
	sub_82566170(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256ab00
	sub_8256AB00(ctx, base);
loc_8256B5CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8258b4e8
	sub_8258B4E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82564c90
	sub_82564C90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82594248
	sub_82594248(ctx, base);
	// lwz r5,2156(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 2156);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8256b600
	if (cr0.eq) goto loc_8256B600;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-10624
	ctx.r4.s64 = r11.s64 + -10624;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8256B600:
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

__attribute__((alias("__imp__sub_8256B618"))) PPC_WEAK_FUNC(sub_8256B618);
PPC_FUNC_IMPL(__imp__sub_8256B618) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x8256b660
	if (cr0.eq) goto loc_8256B660;
loc_8256B63C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r30,0(r4)
	r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// lwz r11,412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x8256b63c
	if (!cr6.eq) goto loc_8256B63C;
loc_8256B660:
	// li r11,0
	r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
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

__attribute__((alias("__imp__sub_8256B690"))) PPC_WEAK_FUNC(sub_8256B690);
PPC_FUNC_IMPL(__imp__sub_8256B690) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x8256b6d4
	if (cr6.eq) goto loc_8256B6D4;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// b 0x8256b6c8
	goto loc_8256B6C8;
loc_8256B6BC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_8256B6C8:
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256b6bc
	if (!cr0.eq) goto loc_8256B6BC;
	// blr 
	return;
loc_8256B6D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B6DC"))) PPC_WEAK_FUNC(sub_8256B6DC);
PPC_FUNC_IMPL(__imp__sub_8256B6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B6E0"))) PPC_WEAK_FUNC(sub_8256B6E0);
PPC_FUNC_IMPL(__imp__sub_8256B6E0) {
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
	// cmpwi cr6,r4,12248
	cr6.compare<int32_t>(ctx.r4.s32, 12248, xer);
	// bge cr6,0x8256b6fc
	if (!cr6.lt) goto loc_8256B6FC;
	// li r4,12248
	ctx.r4.s64 = 12248;
loc_8256B6FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r4,8
	r30.s64 = ctx.r4.s64 + 8;
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// lwz r11,416(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 416);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r3.u32);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r11,8
	ctx.r10.s64 = r11.s64 + 8;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256B74C"))) PPC_WEAK_FUNC(sub_8256B74C);
PPC_FUNC_IMPL(__imp__sub_8256B74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B750"))) PPC_WEAK_FUNC(sub_8256B750);
PPC_FUNC_IMPL(__imp__sub_8256B750) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,424(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 424);
	// b 0x8254b8a0
	sub_8254B8A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8256B768"))) PPC_WEAK_FUNC(sub_8256B768);
PPC_FUNC_IMPL(__imp__sub_8256B768) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B76C"))) PPC_WEAK_FUNC(sub_8256B76C);
PPC_FUNC_IMPL(__imp__sub_8256B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B770"))) PPC_WEAK_FUNC(sub_8256B770);
PPC_FUNC_IMPL(__imp__sub_8256B770) {
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
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r29,4
	r29.s64 = 4;
	// lbz r11,5(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 5);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256b79c
	if (cr0.eq) goto loc_8256B79C;
	// li r29,2
	r29.s64 = 2;
loc_8256B79C:
	// lwz r31,424(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 424);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// beq 0x8256b7d8
	if (cr0.eq) goto loc_8256B7D8;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// b 0x8256b7dc
	goto loc_8256B7DC;
loc_8256B7D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256B7DC:
	// li r11,0
	r11.s64 = 0;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r28.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8256B7F4"))) PPC_WEAK_FUNC(sub_8256B7F4);
PPC_FUNC_IMPL(__imp__sub_8256B7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B7F8"))) PPC_WEAK_FUNC(sub_8256B7F8);
PPC_FUNC_IMPL(__imp__sub_8256B7F8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8256b878
	if (cr6.eq) goto loc_8256B878;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x8256b878
	if (cr6.eq) goto loc_8256B878;
	// lwz r31,424(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 424);
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// beq 0x8256b860
	if (cr0.eq) goto loc_8256B860;
	// li r10,14
	ctx.r10.s64 = 14;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// b 0x8256b864
	goto loc_8256B864;
loc_8256B860:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256B864:
	// li r11,2
	r11.s64 = 2;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r29.u32);
	// stw r28,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r28.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// b 0x8256b884
	goto loc_8256B884;
loc_8256B878:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8256b770
	sub_8256B770(ctx, base);
loc_8256B884:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8256B88C"))) PPC_WEAK_FUNC(sub_8256B88C);
PPC_FUNC_IMPL(__imp__sub_8256B88C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B890"))) PPC_WEAK_FUNC(sub_8256B890);
PPC_FUNC_IMPL(__imp__sub_8256B890) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_8256B898:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r4
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// beq cr6,0x8256b8e0
	if (cr6.eq) goto loc_8256B8E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// blt cr6,0x8256b898
	if (cr6.lt) goto loc_8256B898;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,214
	ctx.r7.s64 = 214;
	// addi r6,r11,-10544
	ctx.r6.s64 = r11.s64 + -10544;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// b 0x8249d0e0
	sub_8249D0E0(ctx, base);
	return;
loc_8256B8E0:
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r4,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B8EC"))) PPC_WEAK_FUNC(sub_8256B8EC);
PPC_FUNC_IMPL(__imp__sub_8256B8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B8F0"))) PPC_WEAK_FUNC(sub_8256B8F0);
PPC_FUNC_IMPL(__imp__sub_8256B8F0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lbz r11,1(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 1);
	// lwz r3,336(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256b930
	if (!cr0.eq) goto loc_8256B930;
	// li r11,1
	r11.s64 = 1;
	// stb r11,356(r31)
	PPC_STORE_U8(r31.u32 + 356, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x8256b940
	goto loc_8256B940;
loc_8256B930:
	// li r11,0
	r11.s64 = 0;
	// stb r11,356(r31)
	PPC_STORE_U8(r31.u32 + 356, r11.u8);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_8256B940:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,0(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 0);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// stb r11,1004(r31)
	PPC_STORE_U8(r31.u32 + 1004, r11.u8);
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

__attribute__((alias("__imp__sub_8256B96C"))) PPC_WEAK_FUNC(sub_8256B96C);
PPC_FUNC_IMPL(__imp__sub_8256B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B970"))) PPC_WEAK_FUNC(sub_8256B970);
PPC_FUNC_IMPL(__imp__sub_8256B970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256b988
	if (!cr6.lt) goto loc_8256B988;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8256B988:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256b994
	if (!cr0.eq) goto loc_8256B994;
	// li r11,0
	r11.s64 = 0;
loc_8256B994:
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x8256b9c4
	if (cr6.eq) goto loc_8256B9C4;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x8256b9bc
	if (cr6.eq) goto loc_8256B9BC;
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(r11.s32, 113, xer);
	// beq cr6,0x8256b9c4
	if (cr6.eq) goto loc_8256B9C4;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(r11.s32, 114, xer);
	// beq cr6,0x8256b9bc
	if (cr6.eq) goto loc_8256B9BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8256B9BC:
	// lhz r3,10(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// blr 
	return;
loc_8256B9C4:
	// lhz r3,6(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256B9CC"))) PPC_WEAK_FUNC(sub_8256B9CC);
PPC_FUNC_IMPL(__imp__sub_8256B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256B9D0"))) PPC_WEAK_FUNC(sub_8256B9D0);
PPC_FUNC_IMPL(__imp__sub_8256B9D0) {
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
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r29,r10,16
	r29.u64 = ctx.r10.u32 & 0xFFFF;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,100
	cr6.compare<int32_t>(r29.s32, 100, xer);
	// bge cr6,0x8256b9fc
	if (!cr6.lt) goto loc_8256B9FC;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8256B9FC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256ba08
	if (!cr0.eq) goto loc_8256BA08;
	// li r29,0
	r29.s64 = 0;
loc_8256BA08:
	// cmpwi cr6,r29,15
	cr6.compare<int32_t>(r29.s32, 15, xer);
	// beq cr6,0x8256bb6c
	if (cr6.eq) goto loc_8256BB6C;
	// cmpwi cr6,r29,79
	cr6.compare<int32_t>(r29.s32, 79, xer);
	// beq cr6,0x8256bb18
	if (cr6.eq) goto loc_8256BB18;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,0
	r30.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x8258ace0
	sub_8258ACE0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8256ba80
	if (!cr0.gt) goto loc_8256BA80;
loc_8256BA34:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8256ba54
	if (cr0.eq) goto loc_8256BA54;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
loc_8256BA54:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256ba6c
	if (cr0.eq) goto loc_8256BA6C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8256BA6C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x8258ace0
	sub_8258ACE0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x8256ba34
	if (cr6.lt) goto loc_8256BA34;
loc_8256BA80:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x8258ad60
	sub_8258AD60(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8256bae0
	if (!cr0.gt) goto loc_8256BAE0;
loc_8256BA94:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r9,r9,0,9,9
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x8256bab4
	if (cr0.eq) goto loc_8256BAB4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
loc_8256BAB4:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256bacc
	if (cr0.eq) goto loc_8256BACC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8256BACC:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// bl 0x8258ad60
	sub_8258AD60(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x8256ba94
	if (cr6.lt) goto loc_8256BA94;
loc_8256BAE0:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// li r30,0
	r30.s64 = 0;
	// bl 0x8258add0
	sub_8258ADD0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x8256bbbc
	if (!cr0.gt) goto loc_8256BBBC;
loc_8256BAF4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x8258add0
	sub_8258ADD0(ctx, base);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// blt cr6,0x8256baf4
	if (cr6.lt) goto loc_8256BAF4;
	// b 0x8256bbbc
	goto loc_8256BBBC;
loc_8256BB18:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,79
	cr6.compare<uint32_t>(ctx.r10.u32, 79, xer);
	// beq cr6,0x8256bb2c
	if (cr6.eq) goto loc_8256BB2C;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8256BB2C:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8256bbbc
	if (cr0.eq) goto loc_8256BBBC;
loc_8256BB50:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x8256bb50
	if (cr6.lt) goto loc_8256BB50;
	// b 0x8256bbbc
	goto loc_8256BBBC;
loc_8256BB6C:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// beq cr6,0x8256bb80
	if (cr6.eq) goto loc_8256BB80;
	// li r8,0
	ctx.r8.s64 = 0;
loc_8256BB80:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x8256bbbc
	if (cr0.eq) goto loc_8256BBBC;
loc_8256BBA4:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lhz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 2);
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// blt cr6,0x8256bba4
	if (cr6.lt) goto loc_8256BBA4;
loc_8256BBBC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256BBC4"))) PPC_WEAK_FUNC(sub_8256BBC4);
PPC_FUNC_IMPL(__imp__sub_8256BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BBC8"))) PPC_WEAK_FUNC(sub_8256BBC8);
PPC_FUNC_IMPL(__imp__sub_8256BBC8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stb r29,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, r29.u8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256BC14"))) PPC_WEAK_FUNC(sub_8256BC14);
PPC_FUNC_IMPL(__imp__sub_8256BC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BC18"))) PPC_WEAK_FUNC(sub_8256BC18);
PPC_FUNC_IMPL(__imp__sub_8256BC18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256bc30
	if (!cr6.lt) goto loc_8256BC30;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8256BC30:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256bc3c
	if (!cr0.eq) goto loc_8256BC3C;
	// li r11,0
	r11.s64 = 0;
loc_8256BC3C:
	// cmpwi cr6,r11,40
	cr6.compare<int32_t>(r11.s32, 40, xer);
	// beq cr6,0x8256bc70
	if (cr6.eq) goto loc_8256BC70;
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x8256bc70
	if (cr6.eq) goto loc_8256BC70;
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(r11.s32, 41, xer);
	// beq cr6,0x8256bc70
	if (cr6.eq) goto loc_8256BC70;
	// cmpwi cr6,r11,42
	cr6.compare<int32_t>(r11.s32, 42, xer);
	// beq cr6,0x8256bc70
	if (cr6.eq) goto loc_8256BC70;
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(r11.s32, 39, xer);
	// beq cr6,0x8256bc70
	if (cr6.eq) goto loc_8256BC70;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8256bc74
	if (!cr6.eq) goto loc_8256BC74;
loc_8256BC70:
	// li r11,1
	r11.s64 = 1;
loc_8256BC74:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256BC7C"))) PPC_WEAK_FUNC(sub_8256BC7C);
PPC_FUNC_IMPL(__imp__sub_8256BC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BC80"))) PPC_WEAK_FUNC(sub_8256BC80);
PPC_FUNC_IMPL(__imp__sub_8256BC80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256bc98
	if (!cr6.lt) goto loc_8256BC98;
	// li r10,1
	ctx.r10.s64 = 1;
loc_8256BC98:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256bca4
	if (!cr0.eq) goto loc_8256BCA4;
	// li r11,0
	r11.s64 = 0;
loc_8256BCA4:
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(r11.s32, 53, xer);
	// beq cr6,0x8256bcd0
	if (cr6.eq) goto loc_8256BCD0;
	// cmpwi cr6,r11,52
	cr6.compare<int32_t>(r11.s32, 52, xer);
	// beq cr6,0x8256bcd0
	if (cr6.eq) goto loc_8256BCD0;
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(r11.s32, 39, xer);
	// beq cr6,0x8256bcd0
	if (cr6.eq) goto loc_8256BCD0;
	// cmpwi cr6,r11,62
	cr6.compare<int32_t>(r11.s32, 62, xer);
	// beq cr6,0x8256bcd0
	if (cr6.eq) goto loc_8256BCD0;
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// li r11,0
	r11.s64 = 0;
	// bne cr6,0x8256bcd4
	if (!cr6.eq) goto loc_8256BCD4;
loc_8256BCD0:
	// li r11,1
	r11.s64 = 1;
loc_8256BCD4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256BCDC"))) PPC_WEAK_FUNC(sub_8256BCDC);
PPC_FUNC_IMPL(__imp__sub_8256BCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BCE0"))) PPC_WEAK_FUNC(sub_8256BCE0);
PPC_FUNC_IMPL(__imp__sub_8256BCE0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r30.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r29,432(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r28,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x8256bd48
	if (cr0.eq) goto loc_8256BD48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8256bd4c
	goto loc_8256BD4C;
loc_8256BD48:
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8256BD4C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r28,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r28.u32);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8256bd84
	if (cr0.eq) goto loc_8256BD84;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8256bd88
	goto loc_8256BD88;
loc_8256BD84:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8256BD88:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r29,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r29.u32);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8256bdc4
	if (cr0.eq) goto loc_8256BDC4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r11,r29
	r11.u64 = r29.u64;
	// b 0x8256bdc8
	goto loc_8256BDC8;
loc_8256BDC4:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_8256BDC8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// stw r3,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r3.u32);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// addi r29,r10,8972
	r29.s64 = ctx.r10.s64 + 8972;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r27,r10,-24612
	r27.s64 = ctx.r10.s64 + -24612;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r28,r10,-10544
	r28.s64 = ctx.r10.s64 + -10544;
	// stb r30,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r30.u8);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r30.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r11.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// beq 0x8256be3c
	if (cr0.eq) goto loc_8256BE3C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8256be54
	goto loc_8256BE54;
loc_8256BE3C:
	// li r7,132
	ctx.r7.s64 = 132;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256BE54:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x8256be78
	if (!cr0.eq) goto loc_8256BE78;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8256be7c
	if (cr0.eq) goto loc_8256BE7C;
loc_8256BE78:
	// mr r30,r11
	r30.u64 = r11.u64;
loc_8256BE7C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// beq cr6,0x8256bed8
	if (cr6.eq) goto loc_8256BED8;
	// lbz r11,3(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 3);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256bea0
	if (!cr0.eq) goto loc_8256BEA0;
	// lbz r11,2(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 2);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x8256bebc
	if (cr6.eq) goto loc_8256BEBC;
loc_8256BEA0:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,139
	ctx.r7.s64 = 139;
	// addi r5,r11,-10456
	ctx.r5.s64 = r11.s64 + -10456;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256BEBC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8256b8f0
	sub_8256B8F0(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8256bef0
	goto loc_8256BEF0;
loc_8256BED8:
	// li r7,144
	ctx.r7.s64 = 144;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256BEF0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256BF04"))) PPC_WEAK_FUNC(sub_8256BF04);
PPC_FUNC_IMPL(__imp__sub_8256BF04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256BF08"))) PPC_WEAK_FUNC(sub_8256BF08);
PPC_FUNC_IMPL(__imp__sub_8256BF08) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256bf44
	if (cr0.eq) goto loc_8256BF44;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8256BF44:
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

__attribute__((alias("__imp__sub_8256BF60"))) PPC_WEAK_FUNC(sub_8256BF60);
PPC_FUNC_IMPL(__imp__sub_8256BF60) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256bf9c
	if (cr0.eq) goto loc_8256BF9C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8256BF9C:
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

__attribute__((alias("__imp__sub_8256BFB8"))) PPC_WEAK_FUNC(sub_8256BFB8);
PPC_FUNC_IMPL(__imp__sub_8256BFB8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8256bfe8
	if (!cr6.lt) goto loc_8256BFE8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8256bfec
	goto loc_8256BFEC;
loc_8256BFE8:
	// li r11,0
	r11.s64 = 0;
loc_8256BFEC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
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

__attribute__((alias("__imp__sub_8256C014"))) PPC_WEAK_FUNC(sub_8256C014);
PPC_FUNC_IMPL(__imp__sub_8256C014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256C018"))) PPC_WEAK_FUNC(sub_8256C018);
PPC_FUNC_IMPL(__imp__sub_8256C018) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8256c048
	if (!cr6.lt) goto loc_8256C048;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8256c04c
	goto loc_8256C04C;
loc_8256C048:
	// li r11,0
	r11.s64 = 0;
loc_8256C04C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
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

__attribute__((alias("__imp__sub_8256C074"))) PPC_WEAK_FUNC(sub_8256C074);
PPC_FUNC_IMPL(__imp__sub_8256C074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256C078"))) PPC_WEAK_FUNC(sub_8256C078);
PPC_FUNC_IMPL(__imp__sub_8256C078) {
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
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8256c0a0
	if (cr0.eq) goto loc_8256C0A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8256bf08
	sub_8256BF08(ctx, base);
loc_8256C0A0:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8256c0b4
	if (cr0.eq) goto loc_8256C0B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8256bf60
	sub_8256BF60(ctx, base);
loc_8256C0B4:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8256c0c8
	if (cr0.eq) goto loc_8256C0C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8256bf60
	sub_8256BF60(ctx, base);
loc_8256C0C8:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r4,r11,-10372
	ctx.r4.s64 = r11.s64 + -10372;
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

__attribute__((alias("__imp__sub_8256C0F0"))) PPC_WEAK_FUNC(sub_8256C0F0);
PPC_FUNC_IMPL(__imp__sub_8256C0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r20,1
	r20.s64 = 1;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256c124
	if (!cr6.lt) goto loc_8256C124;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C124:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c130
	if (!cr0.eq) goto loc_8256C130;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256C130:
	// clrlwi r10,r11,27
	ctx.r10.u64 = r11.u32 & 0x1F;
	// srawi r9,r11,5
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1F) != 0);
	ctx.r9.s64 = r11.s32 >> 5;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r11,r11,-10568
	r11.s64 = r11.s64 + -10568;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r8,r20,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r20.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// and. r11,r8,r11
	r11.u64 = ctx.r8.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256c16c
	if (!cr0.eq) goto loc_8256C16C;
loc_8256C164:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256d1b4
	goto loc_8256D1B4;
loc_8256C16C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// beq cr6,0x8256c184
	if (cr6.eq) goto loc_8256C184;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C184:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8256c1a8
	if (cr6.eq) goto loc_8256C1A8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8256c16c
	goto loc_8256C16C;
loc_8256C1A8:
	// lis r11,-32253
	r11.s64 = -2113732608;
	// lwz r14,80(r1)
	r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r21,-1
	r21.s64 = -1;
	// addi r17,r11,-24612
	r17.s64 = r11.s64 + -24612;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r16,r11,-10296
	r16.s64 = r11.s64 + -10296;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r19,r11,8972
	r19.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r15,r11,-10312
	r15.s64 = r11.s64 + -10312;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r18,r11,-10544
	r18.s64 = r11.s64 + -10544;
loc_8256C1D8:
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256c1f4
	if (!cr6.lt) goto loc_8256C1F4;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C1F4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8256c204
	if (!cr0.eq) goto loc_8256C204;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C204:
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// beq cr6,0x8256c218
	if (cr6.eq) goto loc_8256C218;
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bne cr6,0x8256c21c
	if (!cr6.eq) goto loc_8256C21C;
loc_8256C218:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C21C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c394
	if (!cr0.eq) goto loc_8256C394;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bge cr6,0x8256c234
	if (!cr6.lt) goto loc_8256C234;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C234:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8256c244
	if (!cr0.eq) goto loc_8256C244;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C244:
	// addi r10,r10,-83
	ctx.r10.s64 = ctx.r10.s64 + -83;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c394
	if (!cr0.eq) goto loc_8256C394;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bge cr6,0x8256c264
	if (!cr6.lt) goto loc_8256C264;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C264:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8256c274
	if (!cr0.eq) goto loc_8256C274;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C274:
	// cmpwi cr6,r10,113
	cr6.compare<int32_t>(ctx.r10.s32, 113, xer);
	// beq cr6,0x8256c288
	if (cr6.eq) goto loc_8256C288;
	// cmpwi cr6,r10,114
	cr6.compare<int32_t>(ctx.r10.s32, 114, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bne cr6,0x8256c28c
	if (!cr6.eq) goto loc_8256C28C;
loc_8256C288:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C28C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c394
	if (!cr0.eq) goto loc_8256C394;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bge cr6,0x8256c2a4
	if (!cr6.lt) goto loc_8256C2A4;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C2A4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8256c2b4
	if (!cr0.eq) goto loc_8256C2B4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C2B4:
	// addi r10,r10,-132
	ctx.r10.s64 = ctx.r10.s64 + -132;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c394
	if (!cr0.eq) goto loc_8256C394;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bge cr6,0x8256c2d4
	if (!cr6.lt) goto loc_8256C2D4;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C2D4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8256c2e4
	if (!cr0.eq) goto loc_8256C2E4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C2E4:
	// cmpwi cr6,r10,52
	cr6.compare<int32_t>(ctx.r10.s32, 52, xer);
	// beq cr6,0x8256c2f8
	if (cr6.eq) goto loc_8256C2F8;
	// cmpwi cr6,r10,53
	cr6.compare<int32_t>(ctx.r10.s32, 53, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bne cr6,0x8256c2fc
	if (!cr6.eq) goto loc_8256C2FC;
loc_8256C2F8:
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C2FC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c394
	if (!cr0.eq) goto loc_8256C394;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bge cr6,0x8256c314
	if (!cr6.lt) goto loc_8256C314;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C314:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8256c324
	if (!cr0.eq) goto loc_8256C324;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C324:
	// addi r10,r10,-39
	ctx.r10.s64 = ctx.r10.s64 + -39;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c394
	if (!cr0.eq) goto loc_8256C394;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bge cr6,0x8256c344
	if (!cr6.lt) goto loc_8256C344;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C344:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8256c354
	if (!cr0.eq) goto loc_8256C354;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C354:
	// addi r10,r10,-41
	ctx.r10.s64 = ctx.r10.s64 + -41;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c394
	if (!cr0.eq) goto loc_8256C394;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bge cr6,0x8256c374
	if (!cr6.lt) goto loc_8256C374;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C374:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8256c384
	if (!cr0.eq) goto loc_8256C384;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256C384:
	// addi r10,r10,-29
	ctx.r10.s64 = ctx.r10.s64 + -29;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8256d0d0
	if (cr0.eq) goto loc_8256D0D0;
loc_8256C394:
	// mr r22,r29
	r22.u64 = r29.u64;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bge cr6,0x8256c3a8
	if (!cr6.lt) goto loc_8256C3A8;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C3A8:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c3b4
	if (!cr0.eq) goto loc_8256C3B4;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256C3B4:
	// cmpwi cr6,r11,52
	cr6.compare<int32_t>(r11.s32, 52, xer);
	// bgt cr6,0x8256c90c
	if (cr6.gt) goto loc_8256C90C;
	// beq cr6,0x8256d078
	if (cr6.eq) goto loc_8256D078;
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// beq cr6,0x8256c828
	if (cr6.eq) goto loc_8256C828;
	// cmpwi cr6,r11,9
	cr6.compare<int32_t>(r11.s32, 9, xer);
	// beq cr6,0x8256c58c
	if (cr6.eq) goto loc_8256C58C;
	// cmpwi cr6,r11,29
	cr6.compare<int32_t>(r11.s32, 29, xer);
	// beq cr6,0x8256c560
	if (cr6.eq) goto loc_8256C560;
	// cmpwi cr6,r11,39
	cr6.compare<int32_t>(r11.s32, 39, xer);
	// beq cr6,0x8256c44c
	if (cr6.eq) goto loc_8256C44C;
	// cmpwi cr6,r11,41
	cr6.compare<int32_t>(r11.s32, 41, xer);
	// beq cr6,0x8256c438
	if (cr6.eq) goto loc_8256C438;
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// bne cr6,0x8256d08c
	if (!cr6.eq) goto loc_8256D08C;
	// addi r11,r28,8
	r11.s64 = r28.s64 + 8;
loc_8256C3F4:
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(r11.u32, 0);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256c414
	if (!cr6.lt) goto loc_8256C414;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C414:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c420
	if (!cr0.eq) goto loc_8256C420;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256C420:
	// addi r11,r11,-83
	r11.s64 = r11.s64 + -83;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256ce64
	if (!cr0.eq) goto loc_8256CE64;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// b 0x8256c3f4
	goto loc_8256C3F4;
loc_8256C438:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// bl 0x8256c018
	sub_8256C018(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8256d088
	if (cr0.eq) goto loc_8256D088;
	// b 0x8256c580
	goto loc_8256C580;
loc_8256C44C:
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x8256c470
	if (!cr6.lt) goto loc_8256C470;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// b 0x8256c474
	goto loc_8256C474;
loc_8256C470:
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256C474:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256d088
	if (cr0.eq) goto loc_8256D088;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x8256c580
	if (!cr6.eq) goto loc_8256C580;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8256C48C:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8256c4cc
	if (!cr6.eq) goto loc_8256C4CC;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256c4b0
	if (!cr6.lt) goto loc_8256C4B0;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256C4B0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256c4bc
	if (!cr0.eq) goto loc_8256C4BC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256C4BC:
	// addi r11,r11,-41
	r11.s64 = r11.s64 + -41;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256d08c
	if (!cr0.eq) goto loc_8256D08C;
loc_8256C4CC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x8256c4e8
	if (!cr6.lt) goto loc_8256C4E8;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256C4E8:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x8256c4f8
	if (!cr0.eq) goto loc_8256C4F8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256C4F8:
	// cmpwi cr6,r11,52
	cr6.compare<int32_t>(r11.s32, 52, xer);
	// beq cr6,0x8256c50c
	if (cr6.eq) goto loc_8256C50C;
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(r11.s32, 53, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne cr6,0x8256c510
	if (!cr6.eq) goto loc_8256C510;
loc_8256C50C:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256C510:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256c520
	if (cr0.eq) goto loc_8256C520;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8256c554
	goto loc_8256C554;
loc_8256C520:
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bge cr6,0x8256c530
	if (!cr6.lt) goto loc_8256C530;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256C530:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x8256c540
	if (!cr0.eq) goto loc_8256C540;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256C540:
	// addi r11,r11,-41
	r11.s64 = r11.s64 + -41;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256c554
	if (cr0.eq) goto loc_8256C554;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_8256C554:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// b 0x8256c48c
	goto loc_8256C48C;
loc_8256C560:
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// clrlwi r4,r10,16
	ctx.r4.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// bl 0x8256bbc8
	sub_8256BBC8(ctx, base);
loc_8256C580:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// b 0x8256d08c
	goto loc_8256D08C;
loc_8256C58C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x8256d13c
	if (cr6.gt) goto loc_8256D13C;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8256C5B8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x8256c6e8
	if (cr6.eq) goto loc_8256C6E8;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x8256c5dc
	if (cr6.eq) goto loc_8256C5DC;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256c5b8
	if (!cr0.eq) goto loc_8256C5B8;
loc_8256C5DC:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256C5E0:
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_8256C5F4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x8256c6f0
	if (cr6.eq) goto loc_8256C6F0;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x8256c618
	if (cr6.eq) goto loc_8256C618;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256c5f4
	if (!cr0.eq) goto loc_8256C5F4;
loc_8256C618:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256C61C:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256c6f8
	if (cr0.eq) goto loc_8256C6F8;
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256c580
	if (cr0.eq) goto loc_8256C580;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// stb r29,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(r30.u32 + 3, r29.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r11,r30,4
	r11.s64 = r30.s64 + 4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r9,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r9,2(r11)
	PPC_STORE_U8(r11.u32 + 2, ctx.r9.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3(r11)
	PPC_STORE_U8(r11.u32 + 3, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r29,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r29.u8);
	// stb r29,5(r11)
	PPC_STORE_U8(r11.u32 + 5, r29.u8);
	// stb r29,6(r11)
	PPC_STORE_U8(r11.u32 + 6, r29.u8);
	// stb r29,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r29.u8);
	// b 0x8256c814
	goto loc_8256C814;
loc_8256C6E8:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// b 0x8256c5e0
	goto loc_8256C5E0;
loc_8256C6F0:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// b 0x8256c61c
	goto loc_8256C61C;
loc_8256C6F8:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r30,20(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r9,r30,4
	ctx.r9.s64 = r30.s64 + 4;
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// stb r29,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(r30.u32 + 3, r29.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,53
	r11.u64 = r11.u64 | 53;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lbz r8,1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// stb r8,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r8.u8);
	// lbz r8,2(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 2);
	// stb r8,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r8.u8);
	// lbz r10,3(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 3);
	// stb r10,3(r9)
	PPC_STORE_U8(ctx.r9.u32 + 3, ctx.r10.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// stb r29,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r29.u8);
	// stb r29,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r29.u8);
	// stb r29,3(r11)
	PPC_STORE_U8(r11.u32 + 3, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// addi r11,r10,4
	r11.s64 = ctx.r10.s64 + 4;
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stb r29,0(r11)
	PPC_STORE_U8(r11.u32 + 0, r29.u8);
	// stb r29,1(r11)
	PPC_STORE_U8(r11.u32 + 1, r29.u8);
	// stb r29,2(r11)
	PPC_STORE_U8(r11.u32 + 2, r29.u8);
	// stb r29,3(r11)
	PPC_STORE_U8(r11.u32 + 3, r29.u8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// ori r10,r10,41
	ctx.r10.u64 = ctx.r10.u64 | 41;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stb r29,4(r11)
	PPC_STORE_U8(r11.u32 + 4, r29.u8);
	// stb r29,5(r11)
	PPC_STORE_U8(r11.u32 + 5, r29.u8);
	// stb r29,6(r11)
	PPC_STORE_U8(r11.u32 + 6, r29.u8);
	// stb r29,7(r11)
	PPC_STORE_U8(r11.u32 + 7, r29.u8);
loc_8256C814:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// ori r10,r10,83
	ctx.r10.u64 = ctx.r10.u64 | 83;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// b 0x8256d08c
	goto loc_8256D08C;
loc_8256C828:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,336(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bgt cr6,0x8256d154
	if (cr6.gt) goto loc_8256D154;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256b970
	sub_8256B970(ctx, base);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_8256C874:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x8256c890
	if (!cr6.lt) goto loc_8256C890;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256C890:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x8256c8a0
	if (!cr0.eq) goto loc_8256C8A0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256C8A0:
	// addi r11,r11,-40
	r11.s64 = r11.s64 + -40;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256d08c
	if (!cr0.eq) goto loc_8256D08C;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bge cr6,0x8256c8c0
	if (!cr6.lt) goto loc_8256C8C0;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256C8C0:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x8256c8d0
	if (!cr0.eq) goto loc_8256C8D0;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256C8D0:
	// addi r11,r11,-50
	r11.s64 = r11.s64 + -50;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256c900
	if (cr0.eq) goto loc_8256C900;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmpw cr6,r10,r30
	cr6.compare<int32_t>(ctx.r10.s32, r30.s32, xer);
	// beq cr6,0x8256ce64
	if (cr6.eq) goto loc_8256CE64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8256C900:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// b 0x8256c874
	goto loc_8256C874;
loc_8256C90C:
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(r11.s32, 53, xer);
	// beq cr6,0x8256cea0
	if (cr6.eq) goto loc_8256CEA0;
	// cmpwi cr6,r11,83
	cr6.compare<int32_t>(r11.s32, 83, xer);
	// beq cr6,0x8256cdd0
	if (cr6.eq) goto loc_8256CDD0;
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(r11.s32, 113, xer);
	// beq cr6,0x8256ccf0
	if (cr6.eq) goto loc_8256CCF0;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(r11.s32, 114, xer);
	// beq cr6,0x8256c938
	if (cr6.eq) goto loc_8256C938;
	// cmpwi cr6,r11,132
	cr6.compare<int32_t>(r11.s32, 132, xer);
	// bne cr6,0x8256d08c
	if (!cr6.eq) goto loc_8256D08C;
	// b 0x8256c580
	goto loc_8256C580;
loc_8256C938:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r9,336(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 336);
	// lwz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// bgt cr6,0x8256d16c
	if (cr6.gt) goto loc_8256D16C;
	// li r4,20000
	ctx.r4.s64 = 20000;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// mr r23,r30
	r23.u64 = r30.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256b970
	sub_8256B970(ctx, base);
	// addi r11,r28,4
	r11.s64 = r28.s64 + 4;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// stb r29,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(r30.u32 + 3, r29.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,53
	r11.u64 = r11.u64 | 53;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r30,r10,4
	r30.s64 = ctx.r10.s64 + 4;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, r11.u8);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r3,432(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 432);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// li r11,64
	r11.s64 = 64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
loc_8256CA08:
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8256ca08
	--ctr.u64;
	if (ctr.u32 != 0) goto loc_8256CA08;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8256b890
	sub_8256B890(ctx, base);
	// lwz r24,20(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_8256CA24:
	// lwz r27,20(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// clrlwi r28,r11,16
	r28.u64 = r11.u32 & 0xFFFF;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r28,100
	cr6.compare<int32_t>(r28.s32, 100, xer);
	// bge cr6,0x8256ca40
	if (!cr6.lt) goto loc_8256CA40;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256CA40:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bne 0x8256ca50
	if (!cr0.eq) goto loc_8256CA50;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256CA50:
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(r11.s32, 113, xer);
	// beq cr6,0x8256ca64
	if (cr6.eq) goto loc_8256CA64;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(r11.s32, 114, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne cr6,0x8256ca68
	if (!cr6.eq) goto loc_8256CA68;
loc_8256CA64:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256CA68:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256cac4
	if (cr0.eq) goto loc_8256CAC4;
	// cmpwi cr6,r28,100
	cr6.compare<int32_t>(r28.s32, 100, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bge cr6,0x8256ca80
	if (!cr6.lt) goto loc_8256CA80;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256CA80:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256ca8c
	if (!cr0.eq) goto loc_8256CA8C;
	// mr r28,r29
	r28.u64 = r29.u64;
loc_8256CA8C:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8256b970
	sub_8256B970(ctx, base);
	// addi r11,r27,4
	r11.s64 = r27.s64 + 4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,114
	cr6.compare<int32_t>(r28.s32, 114, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bne cr6,0x8256cab0
	if (!cr6.eq) goto loc_8256CAB0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_8256CAB0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bl 0x8256b890
	sub_8256B890(ctx, base);
loc_8256CAC4:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256cae0
	if (!cr6.lt) goto loc_8256CAE0;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256CAE0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256caec
	if (!cr0.eq) goto loc_8256CAEC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256CAEC:
	// addi r11,r11,-132
	r11.s64 = r11.s64 + -132;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256cb84
	if (cr0.eq) goto loc_8256CB84;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r7,r11,16
	ctx.r7.u64 = r11.u32 & 0xFFFF;
	// cmpw cr6,r7,r25
	cr6.compare<int32_t>(ctx.r7.s32, r25.s32, xer);
	// bne cr6,0x8256cb10
	if (!cr6.eq) goto loc_8256CB10;
	// lwz r14,20(r31)
	r14.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_8256CB10:
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// mr r11,r26
	r11.u64 = r26.u64;
loc_8256CB1C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r8,-1
	cr6.compare<int32_t>(ctx.r8.s32, -1, xer);
	// beq cr6,0x8256cb34
	if (cr6.eq) goto loc_8256CB34;
	// cmpwi cr6,r9,-1
	cr6.compare<int32_t>(ctx.r9.s32, -1, xer);
	// bne cr6,0x8256cb48
	if (!cr6.eq) goto loc_8256CB48;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_8256CB34:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpwi cr6,r10,64
	cr6.compare<int32_t>(ctx.r10.s32, 64, xer);
	// blt cr6,0x8256cb1c
	if (cr6.lt) goto loc_8256CB1C;
	// b 0x8256cb4c
	goto loc_8256CB4C;
loc_8256CB48:
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
loc_8256CB4C:
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// beq cr6,0x8256cb90
	if (cr6.eq) goto loc_8256CB90;
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
loc_8256CB5C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// beq cr6,0x8256cb7c
	if (cr6.eq) goto loc_8256CB7C;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r11,64
	cr6.compare<int32_t>(r11.s32, 64, xer);
	// blt cr6,0x8256cb5c
	if (cr6.lt) goto loc_8256CB5C;
	// b 0x8256cb84
	goto loc_8256CB84;
loc_8256CB7C:
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r21,r11,r26
	PPC_STORE_U32(r11.u32 + r26.u32, r21.u32);
loc_8256CB84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// b 0x8256ca24
	goto loc_8256CA24;
loc_8256CB90:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// stw r24,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r24.u32);
	// addi r27,r11,8
	r27.s64 = r11.s64 + 8;
	// cmplw cr6,r24,r27
	cr6.compare<uint32_t>(r24.u32, r27.u32, xer);
	// beq cr6,0x8256cbfc
	if (cr6.eq) goto loc_8256CBFC;
loc_8256CBA4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// b 0x8256cbe4
	goto loc_8256CBE4;
loc_8256CBB4:
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, r11.u8);
loc_8256CBE4:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x8256cbb4
	if (!cr6.eq) goto loc_8256CBB4;
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x8256cba4
	if (!cr6.eq) goto loc_8256CBA4;
loc_8256CBFC:
	// cmplw cr6,r27,r14
	cr6.compare<uint32_t>(r27.u32, r14.u32, xer);
	// beq cr6,0x8256cc8c
	if (cr6.eq) goto loc_8256CC8C;
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r29,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(r30.u32 + 3, r29.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,39
	r11.u64 = r11.u64 | 39;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// stw r14,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r14.u32);
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// b 0x8256cc80
	goto loc_8256CC80;
loc_8256CC34:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// b 0x8256cc74
	goto loc_8256CC74;
loc_8256CC44:
	// mr r11,r28
	r11.u64 = r28.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// lbz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 2);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// lbz r11,3(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 3);
	// stb r11,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, r11.u8);
loc_8256CC74:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bne cr6,0x8256cc44
	if (!cr6.eq) goto loc_8256CC44;
loc_8256CC80:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplw cr6,r11,r27
	cr6.compare<uint32_t>(r11.u32, r27.u32, xer);
	// bne cr6,0x8256cc34
	if (!cr6.eq) goto loc_8256CC34;
loc_8256CC8C:
	// stb r29,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r29.u8);
	// stb r29,1(r30)
	PPC_STORE_U8(r30.u32 + 1, r29.u8);
	// stb r29,2(r30)
	PPC_STORE_U8(r30.u32 + 2, r29.u8);
	// stb r29,3(r30)
	PPC_STORE_U8(r30.u32 + 3, r29.u8);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// ori r11,r11,41
	r11.u64 = r11.u64 | 41;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// stb r29,4(r30)
	PPC_STORE_U8(r30.u32 + 4, r29.u8);
	// stb r29,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r29.u8);
	// stb r29,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r29.u8);
	// stb r29,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r29.u8);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// ori r11,r11,83
	r11.u64 = r11.u64 | 83;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r27,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r27.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r23,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r23.u32);
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// b 0x8256d08c
	goto loc_8256D08C;
loc_8256CCF0:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256b970
	sub_8256B970(ctx, base);
	// addi r11,r28,8
	r11.s64 = r28.s64 + 8;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8256cdc0
	goto loc_8256CDC0;
loc_8256CD0C:
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256cd28
	if (!cr6.lt) goto loc_8256CD28;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256CD28:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256cd34
	if (!cr0.eq) goto loc_8256CD34;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256CD34:
	// addi r11,r11,-132
	r11.s64 = r11.s64 + -132;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256cd64
	if (cr0.eq) goto loc_8256CD64;
	// addi r11,r9,4
	r11.s64 = ctx.r9.s64 + 4;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpw cr6,r11,r27
	cr6.compare<int32_t>(r11.s32, r27.s32, xer);
	// beq cr6,0x8256d08c
	if (cr6.eq) goto loc_8256D08C;
loc_8256CD64:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x8256bc80
	sub_8256BC80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256cdb4
	if (cr0.eq) goto loc_8256CDB4;
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8256CD78:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// lwz r28,20(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256bc80
	sub_8256BC80(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256cd98
	if (cr0.eq) goto loc_8256CD98;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_8256CD98:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256bc18
	sub_8256BC18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256cdac
	if (cr0.eq) goto loc_8256CDAC;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_8256CDAC:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// ble cr6,0x8256cd78
	if (!cr6.gt) goto loc_8256CD78;
loc_8256CDB4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 20);
loc_8256CDC0:
	// bl 0x8256bc18
	sub_8256BC18(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256cd0c
	if (cr0.eq) goto loc_8256CD0C;
	// b 0x8256d08c
	goto loc_8256D08C;
loc_8256CDD0:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256cdf4
	if (!cr6.eq) goto loc_8256CDF4;
	// li r7,794
	ctx.r7.s64 = 794;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256CDF4:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// bl 0x8256bfb8
	sub_8256BFB8(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r3.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x8256ce18
	if (!cr6.lt) goto loc_8256CE18;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256CE18:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256ce24
	if (!cr0.eq) goto loc_8256CE24;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256CE24:
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
	// cmpwi cr6,r10,8
	cr6.compare<int32_t>(ctx.r10.s32, 8, xer);
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// bne cr6,0x8256ce70
	if (!cr6.eq) goto loc_8256CE70;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x8256ce58
	if (cr6.gt) goto loc_8256CE58;
	// li r7,801
	ctx.r7.s64 = 801;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256CE58:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_8256CE64:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x8256d0c0
	goto loc_8256D0C0;
loc_8256CE70:
	// cmpwi cr6,r10,9
	cr6.compare<int32_t>(ctx.r10.s32, 9, xer);
	// bne cr6,0x8256ce84
	if (!cr6.eq) goto loc_8256CE84;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8256ce64
	goto loc_8256CE64;
loc_8256CE84:
	// li r7,806
	ctx.r7.s64 = 806;
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// mr r5,r17
	ctx.r5.u64 = r17.u64;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8256ce64
	goto loc_8256CE64;
loc_8256CEA0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_8256CEB4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r8,r9
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, xer);
	// beq cr6,0x8256d01c
	if (cr6.eq) goto loc_8256D01C;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// beq cr6,0x8256ced8
	if (cr6.eq) goto loc_8256CED8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256ceb4
	if (!cr0.eq) goto loc_8256CEB4;
loc_8256CED8:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256CEDC:
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// cntlzw r10,r8
	ctx.r10.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi r30,r10,24
	r30.u64 = ctx.r10.u32 & 0xFF;
loc_8256CEF0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x8256d024
	if (cr6.eq) goto loc_8256D024;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256cf14
	if (cr6.eq) goto loc_8256CF14;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256cef0
	if (!cr0.eq) goto loc_8256CEF0;
loc_8256CF14:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_8256CF18:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256d078
	if (cr0.eq) goto loc_8256D078;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi. r11,r30,24
	r11.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256d06c
	if (!cr0.eq) goto loc_8256D06C;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// li r11,2
	r11.s64 = 2;
	// mr r30,r29
	r30.u64 = r29.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_8256CF58:
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// bne cr6,0x8256cfc8
	if (!cr6.eq) goto loc_8256CFC8;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bge cr6,0x8256cf7c
	if (!cr6.lt) goto loc_8256CF7C;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256CF7C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// bne 0x8256cf8c
	if (!cr0.eq) goto loc_8256CF8C;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256CF8C:
	// addi r10,r10,-39
	ctx.r10.s64 = ctx.r10.s64 + -39;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256d08c
	if (!cr0.eq) goto loc_8256D08C;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// bge cr6,0x8256cfac
	if (!cr6.lt) goto loc_8256CFAC;
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
loc_8256CFAC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256cfb8
	if (!cr0.eq) goto loc_8256CFB8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256CFB8:
	// addi r11,r11,-41
	r11.s64 = r11.s64 + -41;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256d08c
	if (!cr0.eq) goto loc_8256D08C;
loc_8256CFC8:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x8256cfe4
	if (!cr6.lt) goto loc_8256CFE4;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256CFE4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x8256cff4
	if (!cr0.eq) goto loc_8256CFF4;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256CFF4:
	// cmpwi cr6,r11,52
	cr6.compare<int32_t>(r11.s32, 52, xer);
	// beq cr6,0x8256d008
	if (cr6.eq) goto loc_8256D008;
	// cmpwi cr6,r11,53
	cr6.compare<int32_t>(r11.s32, 53, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bne cr6,0x8256d00c
	if (!cr6.eq) goto loc_8256D00C;
loc_8256D008:
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256D00C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256d02c
	if (cr0.eq) goto loc_8256D02C;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// b 0x8256d060
	goto loc_8256D060;
loc_8256D01C:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// b 0x8256cedc
	goto loc_8256CEDC;
loc_8256D024:
	// lbz r11,4(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 4);
	// b 0x8256cf18
	goto loc_8256CF18;
loc_8256D02C:
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bge cr6,0x8256d03c
	if (!cr6.lt) goto loc_8256D03C;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256D03C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x8256d04c
	if (!cr0.eq) goto loc_8256D04C;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256D04C:
	// addi r11,r11,-41
	r11.s64 = r11.s64 + -41;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256d060
	if (cr0.eq) goto loc_8256D060;
	// addi r30,r30,-1
	r30.s64 = r30.s64 + -1;
loc_8256D060:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256b9d0
	sub_8256B9D0(ctx, base);
	// b 0x8256cf58
	goto loc_8256CF58;
loc_8256D06C:
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r20.u32);
	// b 0x8256d08c
	goto loc_8256D08C;
loc_8256D078:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
loc_8256D088:
	// mr r22,r20
	r22.u64 = r20.u64;
loc_8256D08C:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// beq cr6,0x8256d0a4
	if (cr6.eq) goto loc_8256D0A4;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
loc_8256D0A4:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x8256d0c8
	if (cr6.eq) goto loc_8256D0C8;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r10,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_8256D0C0:
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// b 0x8256d08c
	goto loc_8256D08C;
loc_8256D0C8:
	// clrlwi. r11,r22,24
	r11.u64 = r22.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256c1d8
	if (cr0.eq) goto loc_8256C1D8;
loc_8256D0D0:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// clrlwi r10,r11,16
	ctx.r10.u64 = r11.u32 & 0xFFFF;
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// bge cr6,0x8256d0ec
	if (!cr6.lt) goto loc_8256D0EC;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256D0EC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// bne 0x8256d0fc
	if (!cr0.eq) goto loc_8256D0FC;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_8256D0FC:
	// addi r11,r11,-40
	r11.s64 = r11.s64 + -40;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256d19c
	if (!cr0.eq) goto loc_8256D19C;
	// cmpwi cr6,r10,100
	cr6.compare<int32_t>(ctx.r10.s32, 100, xer);
	// mr r11,r29
	r11.u64 = r29.u64;
	// bge cr6,0x8256d11c
	if (!cr6.lt) goto loc_8256D11C;
	// mr r11,r20
	r11.u64 = r20.u64;
loc_8256D11C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256d128
	if (cr0.eq) goto loc_8256D128;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_8256D128:
	// addi r11,r29,-43
	r11.s64 = r29.s64 + -43;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256d19c
	if (!cr0.eq) goto loc_8256D19C;
	// b 0x8256c164
	goto loc_8256C164;
loc_8256D13C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(r11.u32 + 340, ctx.r10.u32);
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_8256D154:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(r11.u32 + 340, ctx.r10.u32);
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_8256D16C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// stw r10,340(r11)
	PPC_STORE_U32(r11.u32 + 340, ctx.r10.u32);
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_8256D184:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// bl 0x8256bfb8
	sub_8256BFB8(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,432(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8256D19C:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256d184
	if (cr0.eq) goto loc_8256D184;
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256D1B4:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_8256D1BC"))) PPC_WEAK_FUNC(sub_8256D1BC);
PPC_FUNC_IMPL(__imp__sub_8256D1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D1C0"))) PPC_WEAK_FUNC(sub_8256D1C0);
PPC_FUNC_IMPL(__imp__sub_8256D1C0) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r9,2160(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 2160);
	// lwz r10,76(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r11,2164(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2164);
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r9,2168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 2168);
	// lwz r10,2172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2172);
	// stw r8,2160(r31)
	PPC_STORE_U32(r31.u32 + 2160, ctx.r8.u32);
	// lwz r8,80(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// stw r11,2164(r31)
	PPC_STORE_U32(r31.u32 + 2164, r11.u32);
	// lwz r11,84(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// stw r11,2168(r31)
	PPC_STORE_U32(r31.u32 + 2168, r11.u32);
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,2172(r31)
	PPC_STORE_U32(r31.u32 + 2172, r11.u32);
	// lwz r11,76(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// ble cr6,0x8256d23c
	if (!cr6.gt) goto loc_8256D23C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,76(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 76);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-9904
	ctx.r4.s64 = r11.s64 + -9904;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8256D23C:
	// lwz r5,80(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x8256d258
	if (!cr0.gt) goto loc_8256D258;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-9968
	ctx.r4.s64 = r11.s64 + -9968;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8256D258:
	// lwz r5,84(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 84);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x8256d274
	if (!cr0.gt) goto loc_8256D274;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-10012
	ctx.r4.s64 = r11.s64 + -10012;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8256D274:
	// lwz r5,88(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// ble 0x8256d290
	if (!cr0.gt) goto loc_8256D290;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-10048
	ctx.r4.s64 = r11.s64 + -10048;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8256D290:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r6,64(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 64);
	// srawi r10,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-10120
	ctx.r4.s64 = r11.s64 + -10120;
	// lwz r11,60(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r7,r6,r11
	ctx.r7.s64 = r11.s64 - ctx.r6.s64;
	// add r8,r11,r5
	ctx.r8.u64 = r11.u64 + ctx.r5.u64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r4,r11,-10176
	ctx.r4.s64 = r11.s64 + -10176;
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// srawi r11,r10,1
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	r11.s64 = ctx.r10.s32 >> 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addze r5,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r5.s64 = temp.s64;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lbz r11,0(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256d330
	if (!cr0.eq) goto loc_8256D330;
	// lwz r5,72(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 72);
	// cmpwi r5,0
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x8256d318
	if (cr0.eq) goto loc_8256D318;
	// lwz r11,68(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// twllei r5,0
	// mulli r10,r11,100
	ctx.r10.s64 = r11.s64 * 100;
	// rotlwi r11,r10,1
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r7,r10,r5
	ctx.r7.s32 = ctx.r10.s32 / ctx.r5.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// andc r11,r5,r11
	r11.u64 = ctx.r5.u64 & ~r11.u64;
	// twlgei r11,-1
	// b 0x8256d31c
	goto loc_8256D31C;
loc_8256D318:
	// li r7,0
	ctx.r7.s64 = 0;
loc_8256D31C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r6,68(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 68);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r4,r11,-10248
	ctx.r4.s64 = r11.s64 + -10248;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
loc_8256D330:
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

__attribute__((alias("__imp__sub_8256D348"))) PPC_WEAK_FUNC(sub_8256D348);
PPC_FUNC_IMPL(__imp__sub_8256D348) {
	PPC_FUNC_PROLOGUE();
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
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r9,r11,6
	ctx.r9.s64 = r11.s64 + 6;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r9.u32);
	// stw r10,56(r30)
	PPC_STORE_U32(r30.u32 + 56, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256D41C"))) PPC_WEAK_FUNC(sub_8256D41C);
PPC_FUNC_IMPL(__imp__sub_8256D41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D420"))) PPC_WEAK_FUNC(sub_8256D420);
PPC_FUNC_IMPL(__imp__sub_8256D420) {
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
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmpwi cr6,r29,3
	cr6.compare<int32_t>(r29.s32, 3, xer);
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// beq cr6,0x8256d448
	if (cr6.eq) goto loc_8256D448;
	// li r6,0
	ctx.r6.s64 = 0;
loc_8256D448:
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,68(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r11,12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// stw r11,12(r30)
	PPC_STORE_U32(r30.u32 + 12, r11.u32);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256D4D0"))) PPC_WEAK_FUNC(sub_8256D4D0);
PPC_FUNC_IMPL(__imp__sub_8256D4D0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,11
	ctx.r5.s64 = 11;
	// li r4,33
	ctx.r4.s64 = 33;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
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

__attribute__((alias("__imp__sub_8256D574"))) PPC_WEAK_FUNC(sub_8256D574);
PPC_FUNC_IMPL(__imp__sub_8256D574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D578"))) PPC_WEAK_FUNC(sub_8256D578);
PPC_FUNC_IMPL(__imp__sub_8256D578) {
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
	// lwz r4,952(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x825860d0
	sub_825860D0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8256d5d0
	if (cr6.eq) goto loc_8256D5D0;
	// ble cr6,0x8256d5c8
	if (!cr6.gt) goto loc_8256D5C8;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// ble cr6,0x8256d5c0
	if (!cr6.gt) goto loc_8256D5C0;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// ble cr6,0x8256d5d0
	if (!cr6.gt) goto loc_8256D5D0;
	// addi r11,r3,-43
	r11.s64 = ctx.r3.s64 + -43;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bgt cr6,0x8256d5c8
	if (cr6.gt) goto loc_8256D5C8;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8256d5d4
	goto loc_8256D5D4;
loc_8256D5C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256d5d4
	goto loc_8256D5D4;
loc_8256D5C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8256d5d4
	goto loc_8256D5D4;
loc_8256D5D0:
	// li r3,2
	ctx.r3.s64 = 2;
loc_8256D5D4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256D5E4"))) PPC_WEAK_FUNC(sub_8256D5E4);
PPC_FUNC_IMPL(__imp__sub_8256D5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D5E8"))) PPC_WEAK_FUNC(sub_8256D5E8);
PPC_FUNC_IMPL(__imp__sub_8256D5E8) {
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
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8256d680
	if (cr6.eq) goto loc_8256D680;
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x8256d678
	if (cr6.eq) goto loc_8256D678;
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// beq cr6,0x8256d670
	if (cr6.eq) goto loc_8256D670;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8256d650
	if (cr6.eq) goto loc_8256D650;
	// cmpwi cr6,r3,5
	cr6.compare<int32_t>(ctx.r3.s32, 5, xer);
	// beq cr6,0x8256d668
	if (cr6.eq) goto loc_8256D668;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// beq cr6,0x8256d660
	if (cr6.eq) goto loc_8256D660;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x8256d658
	if (cr6.eq) goto loc_8256D658;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2874
	ctx.r7.s64 = 2874;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256D650:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8256d684
	goto loc_8256D684;
loc_8256D658:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8256d684
	goto loc_8256D684;
loc_8256D660:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8256d684
	goto loc_8256D684;
loc_8256D668:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256d684
	goto loc_8256D684;
loc_8256D670:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8256d684
	goto loc_8256D684;
loc_8256D678:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8256d684
	goto loc_8256D684;
loc_8256D680:
	// li r3,7
	ctx.r3.s64 = 7;
loc_8256D684:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256D694"))) PPC_WEAK_FUNC(sub_8256D694);
PPC_FUNC_IMPL(__imp__sub_8256D694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D698"))) PPC_WEAK_FUNC(sub_8256D698);
PPC_FUNC_IMPL(__imp__sub_8256D698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// cmplwi cr6,r4,7
	cr6.compare<uint32_t>(ctx.r4.u32, 7, xer);
	// bgt cr6,0x8256d704
	if (cr6.gt) goto loc_8256D704;
	// lis r12,-32245
	r12.s64 = -2113208320;
	// addi r12,r12,-10256
	r12.s64 = r12.s64 + -10256;
	// lbzx r0,r12,r4
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r4.u32);
	// lis r12,-32169
	r12.s64 = -2108227584;
	// addi r12,r12,-10540
	r12.s64 = r12.s64 + -10540;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_8256D72C;
	case 1:
		goto loc_8256D6EC;
	case 2:
		goto loc_8256D6F4;
	case 3:
		goto loc_8256D6FC;
	case 4:
		goto loc_8256D728;
	case 5:
		goto loc_8256D6D4;
	case 6:
		goto loc_8256D6DC;
	case 7:
		goto loc_8256D6E4;
	default:
		__builtin_unreachable();
	}
loc_8256D6D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256d72c
	goto loc_8256D72C;
loc_8256D6DC:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8256d72c
	goto loc_8256D72C;
loc_8256D6E4:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x8256d72c
	goto loc_8256D72C;
loc_8256D6EC:
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x8256d72c
	goto loc_8256D72C;
loc_8256D6F4:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x8256d72c
	goto loc_8256D72C;
loc_8256D6FC:
	// li r3,5
	ctx.r3.s64 = 5;
	// b 0x8256d72c
	goto loc_8256D72C;
loc_8256D704:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2894
	ctx.r7.s64 = 2894;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256D728:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256D72C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256D73C"))) PPC_WEAK_FUNC(sub_8256D73C);
PPC_FUNC_IMPL(__imp__sub_8256D73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D740"))) PPC_WEAK_FUNC(sub_8256D740);
PPC_FUNC_IMPL(__imp__sub_8256D740) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,28(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// lbz r11,48(r4)
	r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 48);
	// stw r10,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,44(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r11,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, r11.u32);
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// stw r8,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r8.u32);
	// stb r9,48(r4)
	PPC_STORE_U8(ctx.r4.u32 + 48, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256D780"))) PPC_WEAK_FUNC(sub_8256D780);
PPC_FUNC_IMPL(__imp__sub_8256D780) {
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
	// li r11,6
	r11.s64 = 6;
	// li r5,13
	ctx.r5.s64 = 13;
	// divw r6,r4,r11
	ctx.r6.s32 = ctx.r4.s32 / r11.s32;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
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

__attribute__((alias("__imp__sub_8256D814"))) PPC_WEAK_FUNC(sub_8256D814);
PPC_FUNC_IMPL(__imp__sub_8256D814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D818"))) PPC_WEAK_FUNC(sub_8256D818);
PPC_FUNC_IMPL(__imp__sub_8256D818) {
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
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 60);
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
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

__attribute__((alias("__imp__sub_8256D874"))) PPC_WEAK_FUNC(sub_8256D874);
PPC_FUNC_IMPL(__imp__sub_8256D874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D878"))) PPC_WEAK_FUNC(sub_8256D878);
PPC_FUNC_IMPL(__imp__sub_8256D878) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8256d8a8
	if (!cr6.lt) goto loc_8256D8A8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8256d8ac
	goto loc_8256D8AC;
loc_8256D8A8:
	// li r11,0
	r11.s64 = 0;
loc_8256D8AC:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
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

__attribute__((alias("__imp__sub_8256D8D4"))) PPC_WEAK_FUNC(sub_8256D8D4);
PPC_FUNC_IMPL(__imp__sub_8256D8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D8D8"))) PPC_WEAK_FUNC(sub_8256D8D8);
PPC_FUNC_IMPL(__imp__sub_8256D8D8) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8256d908
	if (!cr6.lt) goto loc_8256D908;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8256d90c
	goto loc_8256D90C;
loc_8256D908:
	// li r11,0
	r11.s64 = 0;
loc_8256D90C:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
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

__attribute__((alias("__imp__sub_8256D934"))) PPC_WEAK_FUNC(sub_8256D934);
PPC_FUNC_IMPL(__imp__sub_8256D934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256D938"))) PPC_WEAK_FUNC(sub_8256D938);
PPC_FUNC_IMPL(__imp__sub_8256D938) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,228(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256d994
	if (!cr0.eq) goto loc_8256D994;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256d994
	if (!cr0.eq) goto loc_8256D994;
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,31
	cr6.compare<int32_t>(r11.s32, 31, xer);
	// beq cr6,0x8256d994
	if (cr6.eq) goto loc_8256D994;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,128(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r11,-10280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10280);
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256d994
	if (cr0.eq) goto loc_8256D994;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,43
	cr6.compare<int32_t>(r11.s32, 43, xer);
	// beq cr6,0x8256d994
	if (cr6.eq) goto loc_8256D994;
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// beq cr6,0x8256d994
	if (cr6.eq) goto loc_8256D994;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x8256d998
	if (!cr6.eq) goto loc_8256D998;
loc_8256D994:
	// li r11,0
	r11.s64 = 0;
loc_8256D998:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256D9A0"))) PPC_WEAK_FUNC(sub_8256D9A0);
PPC_FUNC_IMPL(__imp__sub_8256D9A0) {
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
	PPCRegister temp{};
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
	// li r28,1
	r28.s64 = 1;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x8256da38
	if (cr6.lt) goto loc_8256DA38;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r30,r31,236
	r30.s64 = r31.s64 + 236;
	// addi r29,r11,26496
	r29.s64 = r11.s64 + 26496;
loc_8256D9DC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// cmpw cr6,r27,r10
	cr6.compare<int32_t>(r27.s32, ctx.r10.s32, xer);
	// bne cr6,0x8256da14
	if (!cr6.eq) goto loc_8256DA14;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// addi r10,r29,6
	ctx.r10.s64 = r29.s64 + 6;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256da44
	if (cr0.eq) goto loc_8256DA44;
loc_8256DA14:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// ble cr6,0x8256d9dc
	if (!cr6.gt) goto loc_8256D9DC;
loc_8256DA38:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256DA3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
loc_8256DA44:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256da3c
	goto loc_8256DA3C;
}

__attribute__((alias("__imp__sub_8256DA4C"))) PPC_WEAK_FUNC(sub_8256DA4C);
PPC_FUNC_IMPL(__imp__sub_8256DA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256DA50"))) PPC_WEAK_FUNC(sub_8256DA50);
PPC_FUNC_IMPL(__imp__sub_8256DA50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,16(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8256da8c
	if (cr6.eq) goto loc_8256DA8C;
	// lwz r11,228(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256da8c
	if (!cr0.eq) goto loc_8256DA8C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r11,r11,26496
	r11.s64 = r11.s64 + 26496;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8256da90
	if (!cr0.eq) goto loc_8256DA90;
loc_8256DA8C:
	// li r11,0
	r11.s64 = 0;
loc_8256DA90:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256dac0
	if (cr0.eq) goto loc_8256DAC0;
	// li r11,0
	r11.s64 = 0;
	// addi r9,r3,128
	ctx.r9.s64 = ctx.r3.s64 + 128;
loc_8256DAA0:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + r11.u32);
	// cmpwi cr6,r10,2
	cr6.compare<int32_t>(ctx.r10.s32, 2, xer);
	// blt cr6,0x8256dab4
	if (cr6.lt) goto loc_8256DAB4;
	// cmpwi cr6,r10,3
	cr6.compare<int32_t>(ctx.r10.s32, 3, xer);
	// ble cr6,0x8256dac8
	if (!cr6.gt) goto loc_8256DAC8;
loc_8256DAB4:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x8256daa0
	if (cr6.lt) goto loc_8256DAA0;
loc_8256DAC0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_8256DAC8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8256DAD0"))) PPC_WEAK_FUNC(sub_8256DAD0);
PPC_FUNC_IMPL(__imp__sub_8256DAD0) {
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
	// lwz r11,128(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8256db3c
	if (!cr6.eq) goto loc_8256DB3C;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x82576968
	sub_82576968(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addic. r3,r11,4
	xer.ca = r11.u32 > 4294967291;
	ctx.r3.s64 = r11.s64 + 4;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// beq 0x8256db28
	if (cr0.eq) goto loc_8256DB28;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82586e10
	sub_82586E10(ctx, base);
	// b 0x8256db2c
	goto loc_8256DB2C;
loc_8256DB28:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256DB2C:
	// li r11,0
	r11.s64 = 0;
	// stw r3,128(r31)
	PPC_STORE_U32(r31.u32 + 128, ctx.r3.u32);
	// stw r29,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r29.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
loc_8256DB3C:
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 128);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256DB48"))) PPC_WEAK_FUNC(sub_8256DB48);
PPC_FUNC_IMPL(__imp__sub_8256DB48) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r12,783
	r12.s64 = 51314688;
	// ori r12,r12,49279
	r12.u64 = r12.u64 | 49279;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & r12.u64;
	// oris r9,r9,57344
	ctx.r9.u64 = ctx.r9.u64 | 3758096384;
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r8,r10,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// rlwinm r8,r8,0,17,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF07FFF;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r29,r10,5600
	r29.s64 = ctx.r10.s64 + 5600;
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// rlwimi r7,r10,24,3,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x1F000000) | (ctx.r7.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r11.u32);
	// lwz r10,352(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 352);
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x8256dbe8
	if (!cr6.gt) goto loc_8256DBE8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,109
	ctx.r7.s64 = 109;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-9748
	ctx.r5.s64 = r11.s64 + -9748;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256DBE8:
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r27,12
	r27.s64 = 12;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r10,r10,r11
	ctx.r10.s64 = r11.s64 - ctx.r10.s64;
	// li r4,0
	ctx.r4.s64 = 0;
	// divw r10,r10,r27
	ctx.r10.s32 = ctx.r10.s32 / r27.s32;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r6,r10,-1
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// bl 0x8256d348
	sub_8256D348(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r6,28(r29)
	ctx.r6.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256dcdc
	if (cr0.eq) goto loc_8256DCDC;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256dcdc
	if (cr6.eq) goto loc_8256DCDC;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r9,r30,r11
	ctx.r9.s64 = r11.s64 - r30.s64;
	// divw r28,r9,r10
	r28.s32 = ctx.r9.s32 / ctx.r10.s32;
	// b 0x8256dca8
	goto loc_8256DCA8;
loc_8256DC60:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// lwz r11,56(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x8256dca0
	if (!cr6.eq) goto loc_8256DCA0;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// add r6,r3,r28
	ctx.r6.u64 = ctx.r3.u64 + r28.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
loc_8256DCA0:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
loc_8256DCA8:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8256dc60
	if (cr6.lt) goto loc_8256DC60;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r5,r4,r11
	ctx.r5.s64 = r11.s64 - ctx.r4.s64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_8256DCDC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256dcfc
	if (cr0.eq) goto loc_8256DCFC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256d4d0
	sub_8256D4D0(ctx, base);
loc_8256DCFC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r30,r11
	r30.u64 = r11.u64;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// divwu r28,r11,r27
	r28.u32 = r11.u32 / r27.u32;
	// bge cr6,0x8256dda4
	if (!cr6.lt) goto loc_8256DDA4;
loc_8256DD18:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8256dd70
	if (cr6.eq) goto loc_8256DD70;
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8256dd70
	if (cr6.eq) goto loc_8256DD70;
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8256dd70
	if (cr6.eq) goto loc_8256DD70;
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8256dd70
	if (cr6.eq) goto loc_8256DD70;
	// lwz r11,40(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 40);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x8256dd70
	if (cr6.eq) goto loc_8256DD70;
	// lwz r11,44(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 44);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// bne cr6,0x8256dd94
	if (!cr6.eq) goto loc_8256DD94;
loc_8256DD70:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// add r6,r3,r28
	ctx.r6.u64 = ctx.r3.u64 + r28.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
loc_8256DD94:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r30,r30,6
	r30.s64 = r30.s64 + 6;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x8256dd18
	if (cr6.lt) goto loc_8256DD18;
loc_8256DDA4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256DDAC"))) PPC_WEAK_FUNC(sub_8256DDAC);
PPC_FUNC_IMPL(__imp__sub_8256DDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256DDB0"))) PPC_WEAK_FUNC(sub_8256DDB0);
PPC_FUNC_IMPL(__imp__sub_8256DDB0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8256de38
	if (cr0.eq) goto loc_8256DE38;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8256de38
	if (!cr6.gt) goto loc_8256DE38;
	// li r30,0
	r30.s64 = 0;
loc_8256DDE4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x8256ddfc
	if (!cr6.lt) goto loc_8256DDFC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x8256de04
	goto loc_8256DE04;
loc_8256DDFC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8256DE04:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,92(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x8256dde4
	if (cr6.lt) goto loc_8256DDE4;
loc_8256DE38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8256DE40"))) PPC_WEAK_FUNC(sub_8256DE40);
PPC_FUNC_IMPL(__imp__sub_8256DE40) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8256de80
	if (cr6.gt) goto loc_8256DE80;
	// li r11,0
	r11.s64 = 0;
loc_8256DE80:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256df8c
	if (!cr0.eq) goto loc_8256DF8C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// addi r3,r11,20
	ctx.r3.s64 = r11.s64 + 20;
	// bl 0x82582968
	sub_82582968(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt cr6,0x8256dea4
	if (cr6.gt) goto loc_8256DEA4;
	// li r11,0
	r11.s64 = 0;
loc_8256DEA4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256df8c
	if (!cr0.eq) goto loc_8256DF8C;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// bl 0x82589a20
	sub_82589A20(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8256df8c
	if (!cr6.eq) goto loc_8256DF8C;
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8256ded8
	if (!cr6.gt) goto loc_8256DED8;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8256dedc
	goto loc_8256DEDC;
loc_8256DED8:
	// li r11,0
	r11.s64 = 0;
loc_8256DEDC:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,152(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 152);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x8256df8c
	if (!cr6.eq) goto loc_8256DF8C;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// bl 0x82589a20
	sub_82589A20(ctx, base);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8256df8c
	if (!cr6.eq) goto loc_8256DF8C;
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8256df18
	if (!cr6.gt) goto loc_8256DF18;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8256df1c
	goto loc_8256DF1C;
loc_8256DF18:
	// li r11,0
	r11.s64 = 0;
loc_8256DF1C:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
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
	// beq 0x8256df40
	if (cr0.eq) goto loc_8256DF40;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256df90
	goto loc_8256DF90;
loc_8256DF40:
	// lwz r11,144(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 144);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// ble cr6,0x8256df5c
	if (!cr6.gt) goto loc_8256DF5C;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x8256df60
	goto loc_8256DF60;
loc_8256DF5C:
	// li r11,0
	r11.s64 = 0;
loc_8256DF60:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256df8c
	if (cr0.eq) goto loc_8256DF8C;
	// li r11,1
	r11.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(r30.u32 + 0, r11.u8);
	// b 0x8256df90
	goto loc_8256DF90;
loc_8256DF8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256DF90:
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

__attribute__((alias("__imp__sub_8256DFA8"))) PPC_WEAK_FUNC(sub_8256DFA8);
PPC_FUNC_IMPL(__imp__sub_8256DFA8) {
	PPC_FUNC_PROLOGUE();
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
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r27,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r27.u32);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// rlwinm r11,r11,0,25,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r27,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r27.u32);
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8256E008"))) PPC_WEAK_FUNC(sub_8256E008);
PPC_FUNC_IMPL(__imp__sub_8256E008) {
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
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// li r11,0
	r11.s64 = 0;
loc_8256E028:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// blt cr6,0x8256e028
	if (cr6.lt) goto loc_8256E028;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256E090"))) PPC_WEAK_FUNC(sub_8256E090);
PPC_FUNC_IMPL(__imp__sub_8256E090) {
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
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e0dc
	if (!cr0.eq) goto loc_8256E0DC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,945
	ctx.r7.s64 = 945;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-11500
	ctx.r5.s64 = r11.s64 + -11500;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256E0DC:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,952(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// addi r11,r11,58
	r11.s64 = r11.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,1712(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1712);
	// lwzx r4,r11,r31
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// subf r11,r30,r3
	r11.s64 = ctx.r3.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8256E11C"))) PPC_WEAK_FUNC(sub_8256E11C);
PPC_FUNC_IMPL(__imp__sub_8256E11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E120"))) PPC_WEAK_FUNC(sub_8256E120);
PPC_FUNC_IMPL(__imp__sub_8256E120) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r30,0(r20)
	r30.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// beq cr6,0x8256e154
	if (cr6.eq) goto loc_8256E154;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,228(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e894
	if (!cr0.eq) goto loc_8256E894;
loc_8256E154:
	// lis r11,-32246
	r11.s64 = -2113273856;
	// li r18,0
	r18.s64 = 0;
	// addi r22,r11,8972
	r22.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r25,r18
	r25.u64 = r18.u64;
	// mr r19,r18
	r19.u64 = r18.u64;
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// addi r21,r11,-9848
	r21.s64 = r11.s64 + -9848;
	// beq 0x8256e260
	if (cr0.eq) goto loc_8256E260;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r28,r1,88
	r28.s64 = ctx.r1.s64 + 88;
	// addi r26,r11,26496
	r26.s64 = r11.s64 + 26496;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,-9668
	r27.s64 = r11.s64 + -9668;
loc_8256E190:
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e260
	if (!cr0.eq) goto loc_8256E260;
	// addi r29,r30,228
	r29.s64 = r30.s64 + 228;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x8256e248
	if (cr0.eq) goto loc_8256E248;
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r18,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r18.u32);
	// beq 0x8256e204
	if (cr0.eq) goto loc_8256E204;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256e090
	sub_8256E090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e204
	if (!cr0.eq) goto loc_8256E204;
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(r19.s32, 2, xer);
	// blt cr6,0x8256e1f8
	if (cr6.lt) goto loc_8256E1F8;
	// li r7,1171
	ctx.r7.s64 = 1171;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256E1F8:
	// stw r30,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r30.u32);
	// addi r19,r19,1
	r19.s64 = r19.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
loc_8256E204:
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8256e238
	if (cr6.eq) goto loc_8256E238;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e238
	if (!cr0.eq) goto loc_8256E238;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// addi r10,r26,4
	ctx.r10.s64 = r26.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8256e23c
	if (!cr0.eq) goto loc_8256E23C;
loc_8256E238:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_8256E23C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256e248
	if (cr0.eq) goto loc_8256E248;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
loc_8256E248:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r30,8(r30)
	r30.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// rlwinm r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// bne 0x8256e190
	if (!cr0.eq) goto loc_8256E190;
loc_8256E260:
	// lwz r23,0(r20)
	r23.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// cmpwi cr6,r19,0
	cr6.compare<int32_t>(r19.s32, 0, xer);
	// lwz r29,4(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// beq cr6,0x8256e894
	if (cr6.eq) goto loc_8256E894;
	// lwz r28,92(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r19,1
	cr6.compare<int32_t>(r19.s32, 1, xer);
	// lwz r30,88(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bne cr6,0x8256e454
	if (!cr6.eq) goto loc_8256E454;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// bne cr6,0x8256e2dc
	if (!cr6.eq) goto loc_8256E2DC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rotlwi r30,r30,0
	r30.u64 = __builtin_rotateleft32(r30.u32, 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
loc_8256E2B0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
loc_8256E2C0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_8256E2C4:
	// lwz r3,948(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 948);
	// bl 0x82589480
	sub_82589480(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// b 0x8256e894
	goto loc_8256E894;
loc_8256E2DC:
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8256e73c
	if (!cr6.eq) goto loc_8256E73C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// lwz r27,0(r20)
	r27.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r24,r18
	r24.u64 = r18.u64;
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x8256e368
	goto loc_8256E368;
loc_8256E328:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e378
	if (!cr0.eq) goto loc_8256E378;
	// addi r22,r27,228
	r22.s64 = r27.s64 + 228;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256e358
	if (cr0.eq) goto loc_8256E358;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// cmpw cr6,r26,r3
	cr6.compare<int32_t>(r26.s32, ctx.r3.s32, xer);
	// beq cr6,0x8256e374
	if (cr6.eq) goto loc_8256E374;
loc_8256E358:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
loc_8256E368:
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x8256e328
	if (!cr0.eq) goto loc_8256E328;
	// b 0x8256e378
	goto loc_8256E378;
loc_8256E374:
	// li r24,1
	r24.s64 = 1;
loc_8256E378:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e38c
	if (!cr0.eq) goto loc_8256E38C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// b 0x8256e2b0
	goto loc_8256E2B0;
loc_8256E38C:
	// lwz r27,0(r20)
	r27.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// mr r24,r18
	r24.u64 = r18.u64;
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x8256e3f8
	goto loc_8256E3F8;
loc_8256E39C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e408
	if (!cr0.eq) goto loc_8256E408;
	// addi r26,r27,228
	r26.s64 = r27.s64 + 228;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256e3e8
	if (cr0.eq) goto loc_8256E3E8;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8256d9a0
	sub_8256D9A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e404
	if (!cr0.eq) goto loc_8256E404;
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256e3e8
	if (cr0.eq) goto loc_8256E3E8;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8256e090
	sub_8256E090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e404
	if (!cr0.eq) goto loc_8256E404;
loc_8256E3E8:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// lwz r27,8(r27)
	r27.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
loc_8256E3F8:
	// cmplwi r27,0
	cr0.compare<uint32_t>(r27.u32, 0, xer);
	// bne 0x8256e39c
	if (!cr0.eq) goto loc_8256E39C;
	// b 0x8256e408
	goto loc_8256E408;
loc_8256E404:
	// li r24,1
	r24.s64 = 1;
loc_8256E408:
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e73c
	if (!cr0.eq) goto loc_8256E73C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 948);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x825649a0
	sub_825649A0(ctx, base);
	// stw r29,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r29.u32);
	// b 0x8256e894
	goto loc_8256E894;
loc_8256E454:
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(r19.s32, 2, xer);
	// bne cr6,0x8256e73c
	if (!cr6.eq) goto loc_8256E73C;
	// cmpwi cr6,r25,2
	cr6.compare<int32_t>(r25.s32, 2, xer);
	// bne cr6,0x8256e73c
	if (!cr6.eq) goto loc_8256E73C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256e090
	sub_8256E090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e51c
	if (!cr0.eq) goto loc_8256E51C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256e090
	sub_8256E090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e51c
	if (!cr0.eq) goto loc_8256E51C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,948(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 948);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82589480
	sub_82589480(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// b 0x8256e2c0
	goto loc_8256E2C0;
loc_8256E51C:
	// cmpw cr6,r26,r27
	cr6.compare<int32_t>(r26.s32, r27.s32, xer);
	// bne cr6,0x8256e5e4
	if (!cr6.eq) goto loc_8256E5E4;
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lwz r11,128(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 128);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// mr r11,r18
	r11.u64 = r18.u64;
loc_8256E538:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8256e558
	if (cr6.eq) goto loc_8256E558;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// bne cr6,0x8256e5dc
	if (!cr6.eq) goto loc_8256E5DC;
loc_8256E558:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x8256e538
	if (cr6.lt) goto loc_8256E538;
	// li r11,1
	r11.s64 = 1;
loc_8256E568:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e58c
	if (!cr0.eq) goto loc_8256E58C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1282
	ctx.r7.s64 = 1282;
	// addi r5,r11,-9684
	ctx.r5.s64 = r11.s64 + -9684;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256E58C:
	// mr r11,r18
	r11.u64 = r18.u64;
loc_8256E590:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// beq cr6,0x8256e5a8
	if (cr6.eq) goto loc_8256E5A8;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stbx r10,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r10.u8);
loc_8256E5A8:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x8256e590
	if (cr6.lt) goto loc_8256E590;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r11,128(r5)
	PPC_STORE_U32(ctx.r5.u32 + 128, r11.u32);
	// b 0x8256e2c4
	goto loc_8256E2C4;
loc_8256E5DC:
	// mr r11,r18
	r11.u64 = r18.u64;
	// b 0x8256e568
	goto loc_8256E568;
loc_8256E5E4:
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256e090
	sub_8256E090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256e69c
	if (cr0.eq) goto loc_8256E69C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256d9a0
	sub_8256D9A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e69c
	if (!cr0.eq) goto loc_8256E69C;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256d9a0
	sub_8256D9A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e69c
	if (!cr0.eq) goto loc_8256E69C;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 948);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x825649a0
	sub_825649A0(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,948(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 948);
	// bl 0x82589480
	sub_82589480(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x825649a0
	sub_825649A0(ctx, base);
	// stw r27,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r27.u32);
	// b 0x8256e894
	goto loc_8256E894;
loc_8256E69C:
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256e090
	sub_8256E090(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256e73c
	if (cr0.eq) goto loc_8256E73C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256d9a0
	sub_8256D9A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e73c
	if (!cr0.eq) goto loc_8256E73C;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256d9a0
	sub_8256D9A0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256e73c
	if (!cr0.eq) goto loc_8256E73C;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 948);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x825649a0
	sub_825649A0(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,948(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 948);
	// bl 0x82589480
	sub_82589480(ctx, base);
	// b 0x8256e87c
	goto loc_8256E87C;
loc_8256E73C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// lwz r11,132(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x8256e774
	if (!cr6.lt) goto loc_8256E774;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x82576968
	sub_82576968(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r3.u32);
loc_8256E774:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// lwz r4,132(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x8256dfa8
	sub_8256DFA8(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// lwz r3,948(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 948);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r19,2
	cr6.compare<int32_t>(r19.s32, 2, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// bne cr6,0x8256e80c
	if (!cr6.eq) goto loc_8256E80C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82564938
	sub_82564938(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256e008
	sub_8256E008(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,948(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 948);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// bl 0x82589480
	sub_82589480(ctx, base);
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x825649a0
	sub_825649A0(ctx, base);
	// mr r29,r27
	r29.u64 = r27.u64;
loc_8256E80C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82585638
	sub_82585638(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bl 0x825828d0
	sub_825828D0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bne cr6,0x8256e838
	if (!cr6.eq) goto loc_8256E838;
	// mr r29,r28
	r29.u64 = r28.u64;
loc_8256E838:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x8256e854
	if (cr6.eq) goto loc_8256E854;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825868f0
	sub_825868F0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x8256e858
	goto loc_8256E858;
loc_8256E854:
	// mr r30,r18
	r30.u64 = r18.u64;
loc_8256E858:
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r25,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r25.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r18,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r18.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825828f0
	sub_825828F0(ctx, base);
loc_8256E87C:
	// lwz r11,76(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 76);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r11.u32);
	// bl 0x825649a0
	sub_825649A0(ctx, base);
	// stw r26,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r26.u32);
loc_8256E894:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_8256E89C"))) PPC_WEAK_FUNC(sub_8256E89C);
PPC_FUNC_IMPL(__imp__sub_8256E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256E8A0"))) PPC_WEAK_FUNC(sub_8256E8A0);
PPC_FUNC_IMPL(__imp__sub_8256E8A0) {
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
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// stw r11,140(r31)
	PPC_STORE_U32(r31.u32 + 140, r11.u32);
	// rotlwi r9,r10,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stb r30,48(r31)
	PPC_STORE_U8(r31.u32 + 48, r30.u8);
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(r31.u32 + 76, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(r31.u32 + 108, r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r30.u8);
	// stb r30,125(r31)
	PPC_STORE_U8(r31.u32 + 125, r30.u8);
	// stw r30,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r30.u32);
	// stw r10,132(r31)
	PPC_STORE_U32(r31.u32 + 132, ctx.r10.u32);
	// stw r10,136(r31)
	PPC_STORE_U32(r31.u32 + 136, ctx.r10.u32);
	// lwz r29,432(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r28,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r28.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x8256e944
	if (cr0.eq) goto loc_8256E944;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8256e948
	goto loc_8256E948;
loc_8256E944:
	// mr r28,r30
	r28.u64 = r30.u64;
loc_8256E948:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r28,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r28.u32);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8256e980
	if (cr0.eq) goto loc_8256E980;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8256e984
	goto loc_8256E984;
loc_8256E980:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8256E984:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r29,116(r31)
	PPC_STORE_U32(r31.u32 + 116, r29.u32);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8256e9bc
	if (cr0.eq) goto loc_8256E9BC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8256e9c0
	goto loc_8256E9C0;
loc_8256E9BC:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8256E9C0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r29,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r29.u32);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8256e9f8
	if (cr0.eq) goto loc_8256E9F8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x8256e9fc
	goto loc_8256E9FC;
loc_8256E9F8:
	// mr r29,r30
	r29.u64 = r30.u64;
loc_8256E9FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// stw r29,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r29.u32);
	// lwz r28,432(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r29,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r29.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x8256ea34
	if (cr0.eq) goto loc_8256EA34;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r30,r29
	r30.u64 = r29.u64;
loc_8256EA34:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r30.u32);
	// lwz r11,352(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// mulli r30,r11,3
	r30.s64 = r11.s64 * 3;
	// mulli r29,r30,12
	r29.s64 = r30.s64 * 12;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x8254be80
	sub_8254BE80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8254be80
	sub_8254BE80(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r4,r30,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// bl 0x8254be80
	sub_8254BE80(ctx, base);
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r9,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8256EA9C"))) PPC_WEAK_FUNC(sub_8256EA9C);
PPC_FUNC_IMPL(__imp__sub_8256EA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256EAA0"))) PPC_WEAK_FUNC(sub_8256EAA0);
PPC_FUNC_IMPL(__imp__sub_8256EAA0) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256eadc
	if (cr0.eq) goto loc_8256EADC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8256EADC:
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

__attribute__((alias("__imp__sub_8256EAF8"))) PPC_WEAK_FUNC(sub_8256EAF8);
PPC_FUNC_IMPL(__imp__sub_8256EAF8) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256eb34
	if (cr0.eq) goto loc_8256EB34;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8256EB34:
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

__attribute__((alias("__imp__sub_8256EB50"))) PPC_WEAK_FUNC(sub_8256EB50);
PPC_FUNC_IMPL(__imp__sub_8256EB50) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256eb8c
	if (cr0.eq) goto loc_8256EB8C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8256EB8C:
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

__attribute__((alias("__imp__sub_8256EBA8"))) PPC_WEAK_FUNC(sub_8256EBA8);
PPC_FUNC_IMPL(__imp__sub_8256EBA8) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256ebe4
	if (cr0.eq) goto loc_8256EBE4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8256EBE4:
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

__attribute__((alias("__imp__sub_8256EC00"))) PPC_WEAK_FUNC(sub_8256EC00);
PPC_FUNC_IMPL(__imp__sub_8256EC00) {
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
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256ec3c
	if (cr0.eq) goto loc_8256EC3C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8256EC3C:
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

__attribute__((alias("__imp__sub_8256EC58"))) PPC_WEAK_FUNC(sub_8256EC58);
PPC_FUNC_IMPL(__imp__sub_8256EC58) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x825860d0
	sub_825860D0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8256ece8
	if (cr6.eq) goto loc_8256ECE8;
	// ble cr6,0x8256ec94
	if (!cr6.gt) goto loc_8256EC94;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// ble cr6,0x8256ecac
	if (!cr6.gt) goto loc_8256ECAC;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// ble cr6,0x8256ece8
	if (!cr6.gt) goto loc_8256ECE8;
loc_8256EC94:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8256EC98:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8256ECAC:
	// lbz r11,125(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 125);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256ec94
	if (!cr0.eq) goto loc_8256EC94;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,1712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// lwz r11,2084(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2084);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x8256ecdc
	if (!cr6.eq) goto loc_8256ECDC;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256d420
	sub_8256D420(ctx, base);
loc_8256ECDC:
	// li r11,1
	r11.s64 = 1;
	// stb r11,125(r31)
	PPC_STORE_U8(r31.u32 + 125, r11.u8);
	// b 0x8256ecfc
	goto loc_8256ECFC;
loc_8256ECE8:
	// lbz r11,124(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8256ec94
	if (!cr0.eq) goto loc_8256EC94;
	// li r11,1
	r11.s64 = 1;
	// stb r11,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r11.u8);
loc_8256ECFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8256ec98
	goto loc_8256EC98;
}

__attribute__((alias("__imp__sub_8256ED04"))) PPC_WEAK_FUNC(sub_8256ED04);
PPC_FUNC_IMPL(__imp__sub_8256ED04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256ED08"))) PPC_WEAK_FUNC(sub_8256ED08);
PPC_FUNC_IMPL(__imp__sub_8256ED08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8256ed4c
	if (cr6.eq) goto loc_8256ED4C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2011
	ctx.r7.s64 = 2011;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-9648
	ctx.r5.s64 = r11.s64 + -9648;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256ED4C:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r16,r3
	r16.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r18,r3
	r18.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r15,r3
	r15.u64 = ctx.r3.u64;
	// lbz r17,164(r31)
	r17.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// lwz r26,236(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// li r3,18
	ctx.r3.s64 = 18;
	// lbz r24,159(r31)
	r24.u64 = PPC_LOAD_U8(r31.u32 + 159);
	// lbz r20,153(r31)
	r20.u64 = PPC_LOAD_U8(r31.u32 + 153);
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r23,56(r28)
	PPC_STORE_U32(r28.u32 + 56, r23.u32);
	// stw r11,80(r28)
	PPC_STORE_U32(r28.u32 + 80, r11.u32);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r24,159(r28)
	PPC_STORE_U8(r28.u32 + 159, r24.u8);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stb r24,160(r28)
	PPC_STORE_U8(r28.u32 + 160, r24.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stb r11,154(r28)
	PPC_STORE_U8(r28.u32 + 154, r11.u8);
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,228(r28)
	PPC_STORE_U32(r28.u32 + 228, r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// li r3,59
	ctx.r3.s64 = 59;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// stw r11,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r11.u32);
	// stw r23,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r23.u32);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,228(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// stb r24,159(r29)
	PPC_STORE_U8(r29.u32 + 159, r24.u8);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r20,153(r29)
	PPC_STORE_U8(r29.u32 + 153, r20.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,228(r29)
	PPC_STORE_U32(r29.u32 + 228, r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// li r3,39
	ctx.r3.s64 = 39;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r6,r16
	ctx.r6.u64 = r16.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r11,80(r27)
	PPC_STORE_U32(r27.u32 + 80, r11.u32);
	// stw r23,56(r27)
	PPC_STORE_U32(r27.u32 + 56, r23.u32);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mr r6,r15
	ctx.r6.u64 = r15.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r24,159(r27)
	PPC_STORE_U8(r27.u32 + 159, r24.u8);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,228(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 228);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// stb r24,160(r27)
	PPC_STORE_U8(r27.u32 + 160, r24.u8);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,228(r27)
	PPC_STORE_U32(r27.u32 + 228, r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// li r3,97
	ctx.r3.s64 = 97;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// stw r23,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r23.u32);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r24,159(r30)
	PPC_STORE_U8(r30.u32 + 159, r24.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r20,153(r30)
	PPC_STORE_U8(r30.u32 + 153, r20.u8);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// stb r24,160(r30)
	PPC_STORE_U8(r30.u32 + 160, r24.u8);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stb r20,154(r30)
	PPC_STORE_U8(r30.u32 + 154, r20.u8);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// stw r23,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r23.u32);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r18
	ctx.r6.u64 = r18.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r17,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r17.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,88(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 88);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// stb r24,159(r30)
	PPC_STORE_U8(r30.u32 + 159, r24.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r20,153(r30)
	PPC_STORE_U8(r30.u32 + 153, r20.u8);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r27,r11,-10268
	r27.s64 = r11.s64 + -10268;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,-4(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + -4);
	// stw r11,136(r30)
	PPC_STORE_U32(r30.u32 + 136, r11.u32);
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// li r3,55
	ctx.r3.s64 = 55;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r23.u32);
	// lwz r11,84(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stb r17,164(r30)
	PPC_STORE_U8(r30.u32 + 164, r17.u8);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r30)
	PPC_STORE_U32(r30.u32 + 228, r11.u32);
	// lwz r3,948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// bl 0x825894e0
	sub_825894E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582910
	sub_82582910(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x8239bd14
	return;
}

__attribute__((alias("__imp__sub_8256F5B0"))) PPC_WEAK_FUNC(sub_8256F5B0);
PPC_FUNC_IMPL(__imp__sub_8256F5B0) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r29,58
	r11.s64 = r29.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	r31.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// bne 0x8256f5fc
	if (!cr0.eq) goto loc_8256F5FC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2151
	ctx.r7.s64 = 2151;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-9608
	ctx.r5.s64 = r11.s64 + -9608;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256F5FC:
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
	// beq 0x8256f66c
	if (cr0.eq) goto loc_8256F66C;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x8256f66c
	if (!cr6.eq) goto loc_8256F66C;
	// addi r11,r29,32
	r11.s64 = r29.s64 + 32;
	// lwz r10,944(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 944);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
loc_8256F640:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lbzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbx r9,r10,r7
	PPC_STORE_U8(ctx.r10.u32 + ctx.r7.u32, ctx.r9.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// blt cr6,0x8256f640
	if (cr6.lt) goto loc_8256F640;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
loc_8256F66C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8256F674"))) PPC_WEAK_FUNC(sub_8256F674);
PPC_FUNC_IMPL(__imp__sub_8256F674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256F678"))) PPC_WEAK_FUNC(sub_8256F678);
PPC_FUNC_IMPL(__imp__sub_8256F678) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// addi r11,r20,58
	r11.s64 = r20.s64 + 58;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// lwzx r22,r11,r23
	r22.u64 = PPC_LOAD_U32(r11.u32 + r23.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r25,r11,8972
	r25.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmplwi r22,0
	cr0.compare<uint32_t>(r22.u32, 0, xer);
	// addi r24,r11,-9848
	r24.s64 = r11.s64 + -9848;
	// bne 0x8256f6d4
	if (!cr0.eq) goto loc_8256F6D4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2188
	ctx.r7.s64 = 2188;
	// addi r5,r11,-9608
	ctx.r5.s64 = r11.s64 + -9608;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256F6D4:
	// lwz r11,952(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 952);
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bge 0x8256f708
	if (!cr0.lt) goto loc_8256F708;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2190
	ctx.r7.s64 = 2190;
	// addi r5,r11,-9188
	ctx.r5.s64 = r11.s64 + -9188;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256F708:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,80(r22)
	ctx.r10.u64 = PPC_LOAD_U32(r22.u32 + 80);
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// addi r11,r11,26496
	r11.s64 = r11.s64 + 26496;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// addi r11,r11,6
	r11.s64 = r11.s64 + 6;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lbzx r11,r10,r11
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + r11.u32);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// subfic r11,r11,3
	xer.ca = r11.u32 <= 3;
	r11.s64 = 3 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// cntlzw r31,r11
	r31.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// bl 0x825858d0
	sub_825858D0(ctx, base);
	// addi r11,r20,50
	r11.s64 = r20.s64 + 50;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm. r29,r31,27,31,31
	r29.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// lwzx r31,r11,r23
	r31.u64 = PPC_LOAD_U32(r11.u32 + r23.u32);
	// beq 0x8256f790
	if (cr0.eq) goto loc_8256F790;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x8256f790
	if (!cr6.eq) goto loc_8256F790;
	// lwz r11,952(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 952);
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82564788
	sub_82564788(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,952(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 952);
	// lwz r11,1712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// beq 0x8256f788
	if (cr0.eq) goto loc_8256F788;
	// lwz r11,2112(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2112);
	// b 0x8256f78c
	goto loc_8256F78C;
loc_8256F788:
	// lwz r11,2132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2132);
loc_8256F78C:
	// add r31,r11,r31
	r31.u64 = r11.u64 + r31.u64;
loc_8256F790:
	// lis r11,-32138
	r11.s64 = -2106195968;
	// addi r27,r11,-3664
	r27.s64 = r11.s64 + -3664;
	// lwz r11,24(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// bne 0x8256f830
	if (!cr0.eq) goto loc_8256F830;
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// bne cr6,0x8256f7f0
	if (!cr6.eq) goto loc_8256F7F0;
	// rlwimi r11,r29,31,0,0
	r11.u64 = (__builtin_rotateleft32(r29.u32, 31) & 0x80000000) | (r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
	// beq cr6,0x8256f7d0
	if (cr6.eq) goto loc_8256F7D0;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8256F7D0:
	// add r31,r20,r23
	r31.u64 = r20.u64 + r23.u64;
	// stb r11,9(r30)
	PPC_STORE_U8(r30.u32 + 9, r11.u8);
	// lbz r11,152(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 152);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256f868
	if (cr0.eq) goto loc_8256F868;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// b 0x8256f864
	goto loc_8256F864;
loc_8256F7F0:
	// cmpwi cr6,r21,2
	cr6.compare<int32_t>(r21.s32, 2, xer);
	// bne cr6,0x8256f830
	if (!cr6.eq) goto loc_8256F830;
	// rlwimi r11,r29,30,1,1
	r11.u64 = (__builtin_rotateleft32(r29.u32, 30) & 0x40000000) | (r11.u64 & 0xFFFFFFFFBFFFFFFF);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
	// beq cr6,0x8256f810
	if (cr6.eq) goto loc_8256F810;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8256F810:
	// add r31,r20,r23
	r31.u64 = r20.u64 + r23.u64;
	// stb r11,10(r30)
	PPC_STORE_U8(r30.u32 + 10, r11.u8);
	// lbz r11,152(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 152);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256f868
	if (cr0.eq) goto loc_8256F868;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// b 0x8256f864
	goto loc_8256F864;
loc_8256F830:
	// rlwimi r11,r29,29,2,2
	r11.u64 = (__builtin_rotateleft32(r29.u32, 29) & 0x20000000) | (r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// cmpwi cr6,r26,0
	cr6.compare<int32_t>(r26.s32, 0, xer);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// mr r11,r28
	r11.u64 = r28.u64;
	// beq cr6,0x8256f848
	if (cr6.eq) goto loc_8256F848;
	// mr r11,r31
	r11.u64 = r31.u64;
loc_8256F848:
	// add r31,r20,r23
	r31.u64 = r20.u64 + r23.u64;
	// stb r11,11(r30)
	PPC_STORE_U8(r30.u32 + 11, r11.u8);
	// lbz r11,152(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 152);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256f868
	if (cr0.eq) goto loc_8256F868;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
loc_8256F864:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_8256F868:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x8256f94c
	if (cr6.eq) goto loc_8256F94C;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8256f894
	if (!cr6.eq) goto loc_8256F894;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,2228
	ctx.r7.s64 = 2228;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256F894:
	// lwz r11,24(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256f918
	if (!cr0.eq) goto loc_8256F918;
	// cmpwi cr6,r21,1
	cr6.compare<int32_t>(r21.s32, 1, xer);
	// bne cr6,0x8256f8e0
	if (!cr6.eq) goto loc_8256F8E0;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x8256f8c4
	if (!cr6.eq) goto loc_8256F8C4;
	// lbz r11,9(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stb r11,9(r30)
	PPC_STORE_U8(r30.u32 + 9, r11.u8);
loc_8256F8C4:
	// lbz r11,158(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 158);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256fbdc
	if (cr0.eq) goto loc_8256FBDC;
	// lbz r11,9(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 9);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stb r11,9(r30)
	PPC_STORE_U8(r30.u32 + 9, r11.u8);
	// b 0x8256fbdc
	goto loc_8256FBDC;
loc_8256F8E0:
	// cmpwi cr6,r21,2
	cr6.compare<int32_t>(r21.s32, 2, xer);
	// bne cr6,0x8256f918
	if (!cr6.eq) goto loc_8256F918;
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x8256f8fc
	if (!cr6.eq) goto loc_8256F8FC;
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stb r11,10(r30)
	PPC_STORE_U8(r30.u32 + 10, r11.u8);
loc_8256F8FC:
	// lbz r11,158(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 158);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256fbdc
	if (cr0.eq) goto loc_8256FBDC;
	// lbz r11,10(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stb r11,10(r30)
	PPC_STORE_U8(r30.u32 + 10, r11.u8);
	// b 0x8256fbdc
	goto loc_8256FBDC;
loc_8256F918:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x8256f92c
	if (!cr6.eq) goto loc_8256F92C;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// stb r11,11(r30)
	PPC_STORE_U8(r30.u32 + 11, r11.u8);
loc_8256F92C:
	// lbz r11,158(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 158);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256fbdc
	if (cr0.eq) goto loc_8256FBDC;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,7,0,24
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 7) & 0xFFFFFF80) | (r11.u64 & 0xFFFFFFFF0000007F);
	// stb r11,11(r30)
	PPC_STORE_U8(r30.u32 + 11, r11.u8);
	// b 0x8256fbdc
	goto loc_8256FBDC;
loc_8256F94C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwinm r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0x1;
	// rlwinm r9,r11,3,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0x1;
	// subfic r10,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r10.s64;
	// rlwinm r11,r11,1,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0x1;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf. r29,r11,r10
	r29.s64 = ctx.r10.s64 - r11.s64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bgt 0x8256f988
	if (cr0.gt) goto loc_8256F988;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2267
	ctx.r7.s64 = 2267;
	// addi r5,r11,-9204
	ctx.r5.s64 = r11.s64 + -9204;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256F988:
	// lbz r11,158(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 158);
	// lis r31,8192
	r31.s64 = 536870912;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8256f9d8
	if (cr0.eq) goto loc_8256F9D8;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8256f9b0
	if (!cr6.eq) goto loc_8256F9B0;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// b 0x8256fa50
	goto loc_8256FA50;
loc_8256F9B0:
	// rlwinm r11,r11,0,24,24
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,128
	cr6.compare<uint32_t>(r11.u32, 128, xer);
	// beq cr6,0x8256f9d8
	if (cr6.eq) goto loc_8256F9D8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2273
	ctx.r7.s64 = 2273;
	// addi r5,r11,-9228
	ctx.r5.s64 = r11.s64 + -9228;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256F9D8:
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// ble cr6,0x8256fa50
	if (!cr6.gt) goto loc_8256FA50;
	// lwz r11,80(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 80);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	// bne cr6,0x8256fa1c
	if (!cr6.eq) goto loc_8256FA1C;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x8256fa0c
	if (!cr6.eq) goto loc_8256FA0C;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256fa0c
	if (!cr0.eq) goto loc_8256FA0C;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256fa50
	if (cr0.eq) goto loc_8256FA50;
loc_8256FA0C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2281
	ctx.r7.s64 = 2281;
	// addi r5,r11,-9304
	ctx.r5.s64 = r11.s64 + -9304;
	// b 0x8256fa40
	goto loc_8256FA40;
loc_8256FA1C:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x8256fa50
	if (!cr6.eq) goto loc_8256FA50;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x8256fa50
	if (!cr0.eq) goto loc_8256FA50;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8256fa50
	if (!cr0.eq) goto loc_8256FA50;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2285
	ctx.r7.s64 = 2285;
	// addi r5,r11,-9384
	ctx.r5.s64 = r11.s64 + -9384;
loc_8256FA40:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256FA50:
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// bne cr6,0x8256fad8
	if (!cr6.eq) goto loc_8256FAD8;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8256fa6c
	if (!cr6.eq) goto loc_8256FA6C;
	// oris r11,r11,40960
	r11.u64 = r11.u64 | 2684354560;
	// b 0x8256fbb0
	goto loc_8256FBB0;
loc_8256FA6C:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// rlwinm r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	// bne cr6,0x8256fab0
	if (!cr6.eq) goto loc_8256FAB0;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// beq cr6,0x8256faa4
	if (cr6.eq) goto loc_8256FAA4;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256faa4
	if (cr0.eq) goto loc_8256FAA4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2292
	ctx.r7.s64 = 2292;
	// addi r5,r11,-9432
	ctx.r5.s64 = r11.s64 + -9432;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256FAA4:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,24576
	r11.u64 = r11.u64 | 1610612736;
	// b 0x8256fbb0
	goto loc_8256FBB0;
loc_8256FAB0:
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// bne cr6,0x8256fac8
	if (!cr6.eq) goto loc_8256FAC8;
	// rlwinm r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256fbdc
	if (cr6.eq) goto loc_8256FBDC;
loc_8256FAC8:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2296
	ctx.r7.s64 = 2296;
	// addi r5,r11,-9480
	ctx.r5.s64 = r11.s64 + -9480;
	// b 0x8256fbcc
	goto loc_8256FBCC;
loc_8256FAD8:
	// cmpwi cr6,r26,1
	cr6.compare<int32_t>(r26.s32, 1, xer);
	// bne cr6,0x8256fb68
	if (!cr6.eq) goto loc_8256FB68;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8256fafc
	if (!cr6.eq) goto loc_8256FAFC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// rlwimi r10,r11,31,0,0
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 31) & 0x80000000) | (ctx.r10.u64 & 0xFFFFFFFF7FFFFFFF);
	// rlwimi r10,r11,31,2,2
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 31) & 0x20000000) | (ctx.r10.u64 & 0xFFFFFFFFDFFFFFFF);
	// b 0x8256fb88
	goto loc_8256FB88;
loc_8256FAFC:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x8256fb44
	if (!cr6.eq) goto loc_8256FB44;
	// beq 0x8256fb34
	if (cr0.eq) goto loc_8256FB34;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256fb34
	if (cr0.eq) goto loc_8256FB34;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2303
	ctx.r7.s64 = 2303;
	// addi r5,r11,-9528
	ctx.r5.s64 = r11.s64 + -9528;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256FB34:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,30,1,2
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x60000000) | (r11.u64 & 0xFFFFFFFF9FFFFFFF);
	// b 0x8256fbb0
	goto loc_8256FBB0;
loc_8256FB44:
	// beq 0x8256fbdc
	if (cr0.eq) goto loc_8256FBDC;
	// rlwinm r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8256fbdc
	if (cr6.eq) goto loc_8256FBDC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2307
	ctx.r7.s64 = 2307;
	// addi r5,r11,-9576
	ctx.r5.s64 = r11.s64 + -9576;
	// b 0x8256fbcc
	goto loc_8256FBCC;
loc_8256FB68:
	// lwz r11,80(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 80);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x8256fb90
	if (!cr6.eq) goto loc_8256FB90;
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8256fbdc
	if (!cr6.eq) goto loc_8256FBDC;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// rlwimi r10,r11,29,0,2
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 29) & 0xE0000000) | (ctx.r10.u64 & 0xFFFFFFFF1FFFFFFF);
loc_8256FB88:
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// b 0x8256fbdc
	goto loc_8256FBDC;
loc_8256FB90:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmpwi cr6,r29,1
	cr6.compare<int32_t>(r29.s32, 1, xer);
	// bne cr6,0x8256fba4
	if (!cr6.eq) goto loc_8256FBA4;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// b 0x8256fbb0
	goto loc_8256FBB0;
loc_8256FBA4:
	// cmpwi cr6,r29,2
	cr6.compare<int32_t>(r29.s32, 2, xer);
	// bne cr6,0x8256fbb8
	if (!cr6.eq) goto loc_8256FBB8;
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
loc_8256FBB0:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// b 0x8256fbdc
	goto loc_8256FBDC;
loc_8256FBB8:
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256fbdc
	if (cr0.eq) goto loc_8256FBDC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2325
	ctx.r7.s64 = 2325;
	// addi r5,r11,-9600
	ctx.r5.s64 = r11.s64 + -9600;
loc_8256FBCC:
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256FBDC:
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8256f5b0
	sub_8256F5B0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_8256FBF0"))) PPC_WEAK_FUNC(sub_8256FBF0);
PPC_FUNC_IMPL(__imp__sub_8256FBF0) {
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
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// addi r20,r11,-3664
	r20.s64 = r11.s64 + -3664;
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lbz r11,164(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 164);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// beq 0x8256fc3c
	if (cr0.eq) goto loc_8256FC3C;
	// rlwimi r10,r11,25,6,6
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 25) & 0x2000000) | (ctx.r10.u64 & 0xFFFFFFFFFDFFFFFF);
	// b 0x8256fc40
	goto loc_8256FC40;
loc_8256FC3C:
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
loc_8256FC40:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// li r23,1
	r23.s64 = 1;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r19,r11,-24612
	r19.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,8972
	r22.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r21,r11,-9848
	r21.s64 = r11.s64 + -9848;
	// beq 0x8256fda4
	if (cr0.eq) goto loc_8256FDA4;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r28,0
	r28.s64 = 0;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// li r27,0
	r27.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// addi r24,r30,128
	r24.s64 = r30.s64 + 128;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r11,-9148
	r26.s64 = r11.s64 + -9148;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r25,r11,-9176
	r25.s64 = r11.s64 + -9176;
loc_8256FC98:
	// lbzx r11,r24,r29
	r11.u64 = PPC_LOAD_U8(r24.u32 + r29.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x8256fd58
	if (cr6.lt) goto loc_8256FD58;
	// beq cr6,0x8256fd24
	if (cr6.eq) goto loc_8256FD24;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8256fcf4
	if (cr6.lt) goto loc_8256FCF4;
	// beq cr6,0x8256fcd0
	if (cr6.eq) goto loc_8256FCD0;
	// li r7,2370
	ctx.r7.s64 = 2370;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x8256fd94
	goto loc_8256FD94;
loc_8256FCD0:
	// slw r11,r23,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,20,0,11
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// or r11,r8,r10
	r11.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwimi r11,r9,0,12,7
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFF0FFFFF) | (r11.u64 & 0xF00000);
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | r11.u64;
	// b 0x8256fd8c
	goto loc_8256FD8C;
loc_8256FCF4:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256fd14
	if (cr0.eq) goto loc_8256FD14;
	// li r7,2361
	ctx.r7.s64 = 2361;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256FD14:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r27,r23
	r27.u64 = r23.u64;
	// ori r11,r11,16384
	r11.u64 = r11.u64 | 16384;
	// b 0x8256fd50
	goto loc_8256FD50;
loc_8256FD24:
	// clrlwi. r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256fd44
	if (cr0.eq) goto loc_8256FD44;
	// li r7,2356
	ctx.r7.s64 = 2356;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256FD44:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r28,r23
	r28.u64 = r23.u64;
	// rlwinm r11,r11,0,18,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFBFFF;
loc_8256FD50:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8256fd94
	goto loc_8256FD94;
loc_8256FD58:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// slw r10,r23,r29
	ctx.r10.u64 = r29.u8 & 0x20 ? 0 : (r23.u32 << (r29.u8 & 0x3F));
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// beq 0x8256fd84
	if (cr0.eq) goto loc_8256FD84;
	// rlwinm r10,r10,20,0,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xFFF00000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,12,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFF0FFFFF) | (ctx.r10.u64 & 0xF00000);
	// b 0x8256fd90
	goto loc_8256FD90;
loc_8256FD84:
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
loc_8256FD8C:
	// rlwimi r10,r11,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
loc_8256FD90:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8256FD94:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x8256fc98
	if (cr6.lt) goto loc_8256FC98;
	// b 0x8256fdf0
	goto loc_8256FDF0;
loc_8256FDA4:
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// addi r11,r30,128
	r11.s64 = r30.s64 + 128;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwbrx r11,0,r11
	r11.u64 = __builtin_bswap32(PPC_LOAD_U32(r11.u32));
	// lwzx r10,r10,r20
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r20.u32);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,25,14,14
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 25) & 0x20000) | (ctx.r10.u64 & 0xFFFFFFFFFFFDFFFF);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// rlwimi r9,r10,25,21,22
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x600) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF9FF);
	// rlwinm r10,r9,25,28,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0xE;
	// nor r11,r10,r11
	r11.u64 = ~(ctx.r10.u64 | r11.u64);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// beq 0x8256fde8
	if (cr0.eq) goto loc_8256FDE8;
	// rlwimi r10,r11,20,8,11
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 20) & 0xF00000) | (ctx.r10.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x8256fdec
	goto loc_8256FDEC;
loc_8256FDE8:
	// rlwimi r10,r11,16,12,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xF0000) | (ctx.r10.u64 & 0xFFFFFFFFFFF0FFFF);
loc_8256FDEC:
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
loc_8256FDF0:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// lwz r4,952(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 952);
	// bl 0x825860d0
	sub_825860D0(ctx, base);
	// lwz r11,952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 952);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r3,1712(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// lwz r11,952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 952);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// lwz r10,200(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 200);
	// cmpwi cr6,r29,48
	cr6.compare<int32_t>(r29.s32, 48, xer);
	// lwz r11,1712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// lwz r11,2132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2132);
	// add r27,r11,r10
	r27.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x8256febc
	if (cr6.eq) goto loc_8256FEBC;
	// cmpwi cr6,r29,5
	cr6.compare<int32_t>(r29.s32, 5, xer);
	// bne cr6,0x8256fe48
	if (!cr6.eq) goto loc_8256FE48;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,31
	ctx.r10.s64 = 31;
	// rlwimi r11,r10,1,26,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x3F) | (r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x8256ff44
	goto loc_8256FF44;
loc_8256FE48:
	// cmpwi cr6,r29,6
	cr6.compare<int32_t>(r29.s32, 6, xer);
	// bne cr6,0x8256fe5c
	if (!cr6.eq) goto loc_8256FE5C;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,63
	r11.u64 = r11.u64 | 63;
	// b 0x8256ff44
	goto loc_8256FF44;
loc_8256FE5C:
	// cmpwi cr6,r29,7
	cr6.compare<int32_t>(r29.s32, 7, xer);
	// bne cr6,0x8256fe6c
	if (!cr6.eq) goto loc_8256FE6C;
	// li r10,61
	ctx.r10.s64 = 61;
	// b 0x8256fe8c
	goto loc_8256FE8C;
loc_8256FE6C:
	// cmpwi cr6,r29,43
	cr6.compare<int32_t>(r29.s32, 43, xer);
	// bne cr6,0x8256fe80
	if (!cr6.eq) goto loc_8256FE80;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r23,5,26,31
	r11.u64 = (__builtin_rotateleft32(r23.u32, 5) & 0x3F) | (r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x8256ff44
	goto loc_8256FF44;
loc_8256FE80:
	// cmpwi cr6,r29,44
	cr6.compare<int32_t>(r29.s32, 44, xer);
	// bne cr6,0x8256fe98
	if (!cr6.eq) goto loc_8256FE98;
	// li r10,33
	ctx.r10.s64 = 33;
loc_8256FE8C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r10,0,26,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3F) | (r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x8256ff44
	goto loc_8256FF44;
loc_8256FE98:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x825858d0
	sub_825858D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8256ff24
	if (cr0.eq) goto loc_8256FF24;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x8256ff38
	if (cr6.eq) goto loc_8256FF38;
	// li r7,2426
	ctx.r7.s64 = 2426;
	// b 0x8256ff50
	goto loc_8256FF50;
loc_8256FEBC:
	// lwz r11,24(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8256ff18
	if (cr0.eq) goto loc_8256FF18;
	// bl 0x825858d0
	sub_825858D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8256fef0
	if (!cr0.eq) goto loc_8256FEF0;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r28,8,18,23
	r11.u64 = (__builtin_rotateleft32(r28.u32, 8) & 0x3F00) | (r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// b 0x8256ff44
	goto loc_8256FF44;
loc_8256FEF0:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8256ff10
	if (!cr6.eq) goto loc_8256FF10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,16384
	r11.s64 = 16384;
	// rlwimi r11,r27,8,18,23
	r11.u64 = (__builtin_rotateleft32(r27.u32, 8) & 0x3F00) | (r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwinm r10,r10,0,24,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFC0FF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// b 0x8256ff44
	goto loc_8256FF44;
loc_8256FF10:
	// li r7,2439
	ctx.r7.s64 = 2439;
	// b 0x8256ff50
	goto loc_8256FF50;
loc_8256FF18:
	// bl 0x825858d0
	sub_825858D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x8256ff30
	if (!cr0.eq) goto loc_8256FF30;
loc_8256FF24:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r28,0,26,31
	r11.u64 = (__builtin_rotateleft32(r28.u32, 0) & 0x3F) | (r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// b 0x8256ff44
	goto loc_8256FF44;
loc_8256FF30:
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x8256ff4c
	if (!cr6.eq) goto loc_8256FF4C;
loc_8256FF38:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwimi r11,r27,0,26,31
	r11.u64 = (__builtin_rotateleft32(r27.u32, 0) & 0x3F) | (r11.u64 & 0xFFFFFFFFFFFFFFC0);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_8256FF44:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x8256ff64
	goto loc_8256FF64;
loc_8256FF4C:
	// li r7,2451
	ctx.r7.s64 = 2451;
loc_8256FF50:
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8256FF64:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_8256FF6C"))) PPC_WEAK_FUNC(sub_8256FF6C);
PPC_FUNC_IMPL(__imp__sub_8256FF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FF70"))) PPC_WEAK_FUNC(sub_8256FF70);
PPC_FUNC_IMPL(__imp__sub_8256FF70) {
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
	// lwz r4,952(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 952);
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// bl 0x825860d0
	sub_825860D0(ctx, base);
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x8256ffd8
	if (cr6.eq) goto loc_8256FFD8;
	// ble cr6,0x8256ffd0
	if (!cr6.gt) goto loc_8256FFD0;
	// cmpwi cr6,r3,6
	cr6.compare<int32_t>(ctx.r3.s32, 6, xer);
	// ble cr6,0x8256ffc8
	if (!cr6.gt) goto loc_8256FFC8;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// bgt cr6,0x8256ffd0
	if (cr6.gt) goto loc_8256FFD0;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,2096(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 2096);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8256ffe0
	goto loc_8256FFE0;
loc_8256FFC8:
	// lwz r11,2088(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2088);
	// b 0x8256ffdc
	goto loc_8256FFDC;
loc_8256FFD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8256ffe0
	goto loc_8256FFE0;
loc_8256FFD8:
	// lwz r11,2084(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 2084);
loc_8256FFDC:
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
loc_8256FFE0:
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

__attribute__((alias("__imp__sub_8256FFF4"))) PPC_WEAK_FUNC(sub_8256FFF4);
PPC_FUNC_IMPL(__imp__sub_8256FFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8256FFF8"))) PPC_WEAK_FUNC(sub_8256FFF8);
PPC_FUNC_IMPL(__imp__sub_8256FFF8) {
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
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r30,184(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 184);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82570050
	if (!cr6.eq) goto loc_82570050;
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x82570054
	goto loc_82570054;
loc_82570050:
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
loc_82570054:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r4,176(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 176);
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
	// lwz r3,512(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 512);
	// addi r6,r11,-15800
	ctx.r6.s64 = r11.s64 + -15800;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x825612d0
	sub_825612D0(ctx, base);
	// lwz r9,24(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// rlwimi r11,r10,0,0,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFE0) | (r11.u64 & 0xFFFFFFFF0000001F);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,1712(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1712);
	// lwz r4,236(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 236);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// rlwimi r11,r3,5,21,26
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 5) & 0x7E0) | (r11.u64 & 0xFFFFFFFFFFFFF81F);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,108(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 108);
	// rlwimi r10,r11,11,20,20
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 11) & 0x800) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,1712(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwimi r11,r3,12,14,19
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x3F000) | (r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r9,104(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 104);
	// rlwimi r9,r10,1,30,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x2) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwimi r11,r9,18,12,13
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xC0000) | (r11.u64 & 0xFFFFFFFFFFF3FFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,172(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 172);
	// rlwimi r11,r10,20,7,11
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x1F00000) | (r11.u64 & 0xFFFFFFFFFE0FFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r10,180(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 180);
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82570104
	if (!cr0.eq) goto loc_82570104;
	// rlwinm r11,r11,0,7,5
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFDFFFFFF;
	// b 0x8257011c
	goto loc_8257011C;
loc_82570104:
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x82570114
	if (!cr6.eq) goto loc_82570114;
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// b 0x8257011c
	goto loc_8257011C;
loc_82570114:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,25,6,6
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0x2000000) | (r11.u64 & 0xFFFFFFFFFDFFFFFF);
loc_8257011C:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lbz r10,132(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 132);
	// rlwimi r11,r10,26,4,5
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0xC000000) | (r11.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r10,133(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 133);
	// rlwimi r11,r10,28,2,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x30000000) | (r11.u64 & 0xFFFFFFFFCFFFFFFF);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lbz r11,134(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 134);
	// rlwimi r10,r11,30,0,1
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 30) & 0xC0000000) | (ctx.r10.u64 & 0xFFFFFFFF3FFFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r11,24(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 24);
	// cmpwi cr6,r11,113
	cr6.compare<int32_t>(r11.s32, 113, xer);
	// beq cr6,0x825701dc
	if (cr6.eq) goto loc_825701DC;
	// cmpwi cr6,r11,114
	cr6.compare<int32_t>(r11.s32, 114, xer);
	// beq cr6,0x825701dc
	if (cr6.eq) goto loc_825701DC;
	// cmpwi cr6,r11,115
	cr6.compare<int32_t>(r11.s32, 115, xer);
	// beq cr6,0x825701dc
	if (cr6.eq) goto loc_825701DC;
	// cmpwi cr6,r11,116
	cr6.compare<int32_t>(r11.s32, 116, xer);
	// beq cr6,0x825701dc
	if (cr6.eq) goto loc_825701DC;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbz r4,128(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 128);
	// bl 0x8256d698
	sub_8256D698(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// rlwimi r10,r11,0,29,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x7) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lbz r4,129(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 129);
	// bl 0x8256d698
	sub_8256D698(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// rlwimi r10,r11,3,26,28
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 3) & 0x38) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC7);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lbz r4,130(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 130);
	// bl 0x8256d698
	sub_8256D698(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwimi r10,r11,6,23,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0x1C0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFE3F);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// lbz r4,131(r29)
	ctx.r4.u64 = PPC_LOAD_U8(r29.u32 + 131);
	// bl 0x8256d698
	sub_8256D698(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r3,9,20,22
	r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 9) & 0xE00) | (r11.u64 & 0xFFFFFFFFFFFFF1FF);
	// b 0x825701e4
	goto loc_825701E4;
loc_825701DC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// ori r11,r11,4095
	r11.u64 = r11.u64 | 4095;
loc_825701E4:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// rlwimi r11,r10,12,18,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3000) | (r11.u64 & 0xFFFFFFFFFFFFCFFF);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lhz r9,2(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 2);
	// rlwimi r11,r9,14,16,17
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 14) & 0xC000) | (r11.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lhz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// rlwimi r11,r9,16,14,15
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x30000) | (r11.u64 & 0xFFFFFFFFFFFCFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lhz r9,6(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 6);
	// rlwimi r11,r9,18,11,13
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0x1C0000) | (r11.u64 & 0xFFFFFFFFFFE3FFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lhz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 8);
	// rlwimi r11,r9,21,8,10
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0xE00000) | (r11.u64 & 0xFFFFFFFFFF1FFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lhz r9,10(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 10);
	// rlwimi r11,r9,24,6,7
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0x3000000) | (r11.u64 & 0xFFFFFFFFFCFFFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 12);
	// rlwimi r11,r9,26,4,5
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 26) & 0xC000000) | (r11.u64 & 0xFFFFFFFFF3FFFFFF);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lhz r9,14(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 14);
	// rlwimi r11,r9,28,3,3
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 28) & 0x10000000) | (r11.u64 & 0xFFFFFFFFEFFFFFFF);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lhz r11,16(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 16);
	// rlwimi r9,r11,29,1,2
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 29) & 0x60000000) | (ctx.r9.u64 & 0xFFFFFFFF9FFFFFFF);
	// stw r9,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r9.u32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lhz r11,20(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 20);
	// rlwimi r11,r10,0,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// lfs f29,6732(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 6732);
	f29.f64 = double(temp.f32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lhz r11,18(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 18);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// rlwinm r11,r10,0,30,15
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0003;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lhz r11,24(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// lfs f30,5736(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5736);
	f30.f64 = double(temp.f32);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,-9848
	r27.s64 = r11.s64 + -9848;
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x825702f4
	if (cr6.eq) goto loc_825702F4;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// beq cr6,0x825702f4
	if (cr6.eq) goto loc_825702F4;
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x825702f4
	if (cr6.eq) goto loc_825702F4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3057
	ctx.r7.s64 = 3057;
	// addi r5,r11,-8952
	ctx.r5.s64 = r11.s64 + -8952;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825702F4:
	// lhz r11,26(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 26);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x82570340
	if (cr6.eq) goto loc_82570340;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// beq cr6,0x82570340
	if (cr6.eq) goto loc_82570340;
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x82570340
	if (cr6.eq) goto loc_82570340;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3059
	ctx.r7.s64 = 3059;
	// addi r5,r11,-9040
	ctx.r5.s64 = r11.s64 + -9040;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82570340:
	// lhz r11,28(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 28);
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// beq cr6,0x8257038c
	if (cr6.eq) goto loc_8257038C;
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// beq cr6,0x8257038c
	if (cr6.eq) goto loc_8257038C;
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// beq cr6,0x8257038c
	if (cr6.eq) goto loc_8257038C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,3061
	ctx.r7.s64 = 3061;
	// addi r5,r11,-9128
	ctx.r5.s64 = r11.s64 + -9128;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257038C:
	// lhz r11,24(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// li r11,17
	r11.s64 = 17;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x825703c0
	if (!cr6.eq) goto loc_825703C0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,0,16,10
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFE0FFFF;
	// b 0x825703e4
	goto loc_825703E4;
loc_825703C0:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x825703d4
	if (!cr6.eq) goto loc_825703D4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r10,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x825703e4
	goto loc_825703E4;
loc_825703D4:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bne cr6,0x825703e8
	if (!cr6.eq) goto loc_825703E8;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r11,16,11,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x1F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFE0FFFF);
loc_825703E4:
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_825703E8:
	// lhz r9,26(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 26);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82570414
	if (!cr6.eq) goto loc_82570414;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r9,r9,0,11,5
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFC1FFFFF;
	// b 0x82570438
	goto loc_82570438;
loc_82570414:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82570428
	if (!cr6.eq) goto loc_82570428;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r10,21,6,10
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x3E00000) | (ctx.r9.u64 & 0xFFFFFFFFFC1FFFFF);
	// b 0x82570438
	goto loc_82570438;
loc_82570428:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bne cr6,0x8257043c
	if (!cr6.eq) goto loc_8257043C;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r9,r11,21,6,10
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 21) & 0x3E00000) | (ctx.r9.u64 & 0xFFFFFFFFFC1FFFFF);
loc_82570438:
	// stw r9,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r9.u32);
loc_8257043C:
	// lhz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 28);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// bne cr6,0x82570468
	if (!cr6.eq) goto loc_82570468;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r11,0,6,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFF83FFFFFF;
	// b 0x82570478
	goto loc_82570478;
loc_82570468:
	// fcmpu cr6,f0,f30
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82570480
	if (!cr6.eq) goto loc_82570480;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r11,r10,26,1,5
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x7C000000) | (r11.u64 & 0xFFFFFFFF83FFFFFF);
loc_82570478:
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82570494
	goto loc_82570494;
loc_82570480:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	cr6.compare(f0.f64, f29.f64);
	// bne cr6,0x82570494
	if (!cr6.eq) goto loc_82570494;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwimi r10,r11,26,1,5
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0x7C000000) | (ctx.r10.u64 & 0xFFFFFFFF83FFFFFF);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82570494:
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825704f0
	if (cr0.eq) goto loc_825704F0;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x825704e4
	if (cr6.eq) goto loc_825704E4;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x825704d0
	if (cr6.eq) goto loc_825704D0;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,3099
	ctx.r7.s64 = 3099;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82570508
	goto loc_82570508;
loc_825704D0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// oris r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 2147483648;
	// b 0x82570500
	goto loc_82570500;
loc_825704E4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// b 0x825704f8
	goto loc_825704F8;
loc_825704F0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r11,r11,1
	r11.u64 = r11.u32 & 0x7FFFFFFF;
loc_825704F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r10,r10,1
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFFFFF;
loc_82570500:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
loc_82570508:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_8257051C"))) PPC_WEAK_FUNC(sub_8257051C);
PPC_FUNC_IMPL(__imp__sub_8257051C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82570520"))) PPC_WEAK_FUNC(sub_82570520);
PPC_FUNC_IMPL(__imp__sub_82570520) {
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
	// lwz r11,1712(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1712);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// blt cr6,0x82570598
	if (cr6.lt) goto loc_82570598;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x8256d780
	sub_8256D780(ctx, base);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stb r10,48(r31)
	PPC_STORE_U8(r31.u32 + 48, ctx.r10.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// stw r10,36(r31)
	PPC_STORE_U32(r31.u32 + 36, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82570598:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825705A0"))) PPC_WEAK_FUNC(sub_825705A0);
PPC_FUNC_IMPL(__imp__sub_825705A0) {
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
	// lbz r11,48(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 48);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825705e0
	if (cr0.eq) goto loc_825705E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256d818
	sub_8256D818(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stb r10,48(r31)
	PPC_STORE_U8(r31.u32 + 48, ctx.r10.u8);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
loc_825705E0:
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

__attribute__((alias("__imp__sub_825705F4"))) PPC_WEAK_FUNC(sub_825705F4);
PPC_FUNC_IMPL(__imp__sub_825705F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825705F8"))) PPC_WEAK_FUNC(sub_825705F8);
PPC_FUNC_IMPL(__imp__sub_825705F8) {
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
	// lwz r11,1712(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1712);
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r29,8(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
	// stw r10,40(r31)
	PPC_STORE_U32(r31.u32 + 40, ctx.r10.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,172(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// blt cr6,0x82570694
	if (cr6.lt) goto loc_82570694;
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// subf r4,r10,r11
	ctx.r4.s64 = r11.s64 - ctx.r10.s64;
	// bl 0x8256d780
	sub_8256D780(ctx, base);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stb r10,48(r31)
	PPC_STORE_U8(r31.u32 + 48, ctx.r10.u8);
	// stw r9,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r9.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r11.u32);
	// lwz r11,168(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82570694:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8257069C"))) PPC_WEAK_FUNC(sub_8257069C);
PPC_FUNC_IMPL(__imp__sub_8257069C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825706A0"))) PPC_WEAK_FUNC(sub_825706A0);
PPC_FUNC_IMPL(__imp__sub_825706A0) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x825706d0
	if (!cr6.lt) goto loc_825706D0;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x825706d4
	goto loc_825706D4;
loc_825706D0:
	// li r11,0
	r11.s64 = 0;
loc_825706D4:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
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

__attribute__((alias("__imp__sub_825706FC"))) PPC_WEAK_FUNC(sub_825706FC);
PPC_FUNC_IMPL(__imp__sub_825706FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82570700"))) PPC_WEAK_FUNC(sub_82570700);
PPC_FUNC_IMPL(__imp__sub_82570700) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82570730
	if (!cr6.lt) goto loc_82570730;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82570734
	goto loc_82570734;
loc_82570730:
	// li r11,0
	r11.s64 = 0;
loc_82570734:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
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

__attribute__((alias("__imp__sub_8257075C"))) PPC_WEAK_FUNC(sub_8257075C);
PPC_FUNC_IMPL(__imp__sub_8257075C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82570760"))) PPC_WEAK_FUNC(sub_82570760);
PPC_FUNC_IMPL(__imp__sub_82570760) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r10,-1
	r11.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82570790
	if (!cr6.lt) goto loc_82570790;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82570794
	goto loc_82570794;
loc_82570790:
	// li r11,0
	r11.s64 = 0;
loc_82570794:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r4,r10,-1
	ctx.r4.s64 = ctx.r10.s64 + -1;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
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

__attribute__((alias("__imp__sub_825707BC"))) PPC_WEAK_FUNC(sub_825707BC);
PPC_FUNC_IMPL(__imp__sub_825707BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825707C0"))) PPC_WEAK_FUNC(sub_825707C0);
PPC_FUNC_IMPL(__imp__sub_825707C0) {
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
	// li r30,1
	r30.s64 = 1;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// blt cr6,0x82570824
	if (cr6.lt) goto loc_82570824;
	// addi r29,r31,152
	r29.s64 = r31.s64 + 152;
loc_825707E4:
	// lbzx r11,r29,r30
	r11.u64 = PPC_LOAD_U8(r29.u32 + r30.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82570864
	if (cr6.eq) goto loc_82570864;
	// add r11,r30,r31
	r11.u64 = r30.u64 + r31.u64;
	// lbz r11,158(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 158);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82570864
	if (cr6.eq) goto loc_82570864;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82586088
	sub_82586088(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570864
	if (!cr0.eq) goto loc_82570864;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// ble cr6,0x825707e4
	if (!cr6.gt) goto loc_825707E4;
loc_82570824:
	// lbz r11,164(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82570864
	if (cr6.eq) goto loc_82570864;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570864
	if (!cr0.eq) goto loc_82570864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256da50
	sub_8256DA50(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570864
	if (!cr0.eq) goto loc_82570864;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825858d0
	sub_825858D0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq 0x82570868
	if (cr0.eq) goto loc_82570868;
loc_82570864:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82570868:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82570870"))) PPC_WEAK_FUNC(sub_82570870);
PPC_FUNC_IMPL(__imp__sub_82570870) {
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
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,76(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 76);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825708bc
	if (cr0.eq) goto loc_825708BC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825707c0
	sub_825707C0(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825708bc
	if (cr0.eq) goto loc_825708BC;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq 0x825708c0
	if (cr0.eq) goto loc_825708C0;
loc_825708BC:
	// li r11,0
	r11.s64 = 0;
loc_825708C0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_825708D8"))) PPC_WEAK_FUNC(sub_825708D8);
PPC_FUNC_IMPL(__imp__sub_825708D8) {
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
	// bl 0x82570870
	sub_82570870(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825709ac
	if (cr0.eq) goto loc_825709AC;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r10,r11,26496
	ctx.r10.s64 = r11.s64 + 26496;
	// beq cr6,0x82570930
	if (cr6.eq) goto loc_82570930;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570930
	if (!cr0.eq) goto loc_82570930;
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r9
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82570934
	if (!cr0.eq) goto loc_82570934;
loc_82570930:
	// li r11,0
	r11.s64 = 0;
loc_82570934:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825709ac
	if (cr0.eq) goto loc_825709AC;
	// lwz r4,236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// lwz r11,16(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82570974
	if (cr6.eq) goto loc_82570974;
	// lwz r11,228(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570974
	if (!cr0.eq) goto loc_82570974;
	// lwz r11,80(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x82570978
	if (!cr0.eq) goto loc_82570978;
loc_82570974:
	// li r11,0
	r11.s64 = 0;
loc_82570978:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825709ac
	if (cr0.eq) goto loc_825709AC;
	// lwz r11,952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 952);
	// lwz r31,1712(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82595078
	sub_82595078(ctx, base);
	// cmpw cr6,r3,r29
	cr6.compare<int32_t>(ctx.r3.s32, r29.s32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x825709b0
	if (cr6.eq) goto loc_825709B0;
loc_825709AC:
	// li r11,0
	r11.s64 = 0;
loc_825709B0:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825709BC"))) PPC_WEAK_FUNC(sub_825709BC);
PPC_FUNC_IMPL(__imp__sub_825709BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825709C0"))) PPC_WEAK_FUNC(sub_825709C0);
PPC_FUNC_IMPL(__imp__sub_825709C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r29,r11,r4
	r29.u64 = r11.u64 + ctx.r4.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// addi r4,r11,-8864
	ctx.r4.s64 = r11.s64 + -8864;
	// bl 0x822f5468
	sub_822F5468(ctx, base);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82570A24"))) PPC_WEAK_FUNC(sub_82570A24);
PPC_FUNC_IMPL(__imp__sub_82570A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82570A28"))) PPC_WEAK_FUNC(sub_82570A28);
PPC_FUNC_IMPL(__imp__sub_82570A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stb r5,295(r1)
	PPC_STORE_U8(ctx.r1.u32 + 295, ctx.r5.u8);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r19,0
	r19.s64 = 0;
	// lwz r28,8(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// li r27,0
	r27.s64 = 0;
	// stw r30,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, r30.u32);
	// li r23,0
	r23.s64 = 0;
	// li r18,0
	r18.s64 = 0;
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x8257108c
	if (cr6.eq) goto loc_8257108C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r25,1
	r25.s64 = 1;
	// addi r17,r11,5600
	r17.s64 = r11.s64 + 5600;
	// lis r11,-32138
	r11.s64 = -2106195968;
	// addi r20,r11,-3664
	r20.s64 = r11.s64 + -3664;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r16,r11,-9748
	r16.s64 = r11.s64 + -9748;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r15,r11,-8680
	r15.s64 = r11.s64 + -8680;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r14,r11,-8704
	r14.s64 = r11.s64 + -8704;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-8756
	r11.s64 = r11.s64 + -8756;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r22,r11,8972
	r22.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,-8800
	r11.s64 = r11.s64 + -8800;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r21,r11,-9848
	r21.s64 = r11.s64 + -9848;
loc_82570AC4:
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82571078
	if (cr0.eq) goto loc_82571078;
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,50
	cr6.compare<int32_t>(r11.s32, 50, xer);
	// bne cr6,0x82570af0
	if (!cr6.eq) goto loc_82570AF0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256ed08
	sub_8256ED08(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
loc_82570AF0:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// beq 0x82570c5c
	if (cr0.eq) goto loc_82570C5C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// lwz r11,56(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570c34
	if (cr0.eq) goto loc_82570C34;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r10,295(r1)
	PPC_STORE_U8(ctx.r1.u32 + 295, ctx.r10.u8);
	// beq 0x82570b74
	if (cr0.eq) goto loc_82570B74;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// subf r6,r27,r11
	ctx.r6.s64 = r11.s64 - r27.s64;
	// bl 0x8256d348
	sub_8256D348(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r19,0
	r19.s64 = 0;
loc_82570B74:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// cmpwi cr6,r11,142
	cr6.compare<int32_t>(r11.s32, 142, xer);
	// bne cr6,0x82570bbc
	if (!cr6.eq) goto loc_82570BBC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,1712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// lwz r11,2084(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2084);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82570bb4
	if (!cr6.eq) goto loc_82570BB4;
	// lbz r11,124(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82570bb4
	if (!cr0.eq) goto loc_82570BB4;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256d420
	sub_8256D420(ctx, base);
	// stb r25,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r25.u8);
loc_82570BB4:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x82570bfc
	goto loc_82570BFC;
loc_82570BBC:
	// cmpwi cr6,r11,143
	cr6.compare<int32_t>(r11.s32, 143, xer);
	// bne cr6,0x82570c10
	if (!cr6.eq) goto loc_82570C10;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,1712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// lwz r11,2084(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 2084);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82570bf8
	if (!cr6.eq) goto loc_82570BF8;
	// lbz r11,124(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82570bf8
	if (!cr0.eq) goto loc_82570BF8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256d420
	sub_8256D420(ctx, base);
	// stb r25,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r25.u8);
loc_82570BF8:
	// li r5,3
	ctx.r5.s64 = 3;
loc_82570BFC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,168(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// bl 0x8256d420
	sub_8256D420(ctx, base);
	// stb r25,125(r31)
	PPC_STORE_U8(r31.u32 + 125, r25.u8);
	// b 0x82570c34
	goto loc_82570C34;
loc_82570C10:
	// cmpwi cr6,r11,144
	cr6.compare<int32_t>(r11.s32, 144, xer);
	// beq cr6,0x82570c20
	if (cr6.eq) goto loc_82570C20;
	// cmpwi cr6,r11,145
	cr6.compare<int32_t>(r11.s32, 145, xer);
	// bne cr6,0x82570c34
	if (!cr6.eq) goto loc_82570C34;
loc_82570C20:
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,168(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 168);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256d420
	sub_8256D420(ctx, base);
	// stb r25,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r25.u8);
loc_82570C34:
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,20,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570f44
	if (cr0.eq) goto loc_82570F44;
	// li r7,1466
	ctx.r7.s64 = 1466;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82570f44
	goto loc_82570F44;
loc_82570C5C:
	// bl 0x825708d8
	sub_825708D8(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570ca8
	if (cr0.eq) goto loc_82570CA8;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570c90
	if (cr0.eq) goto loc_82570C90;
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570ca8
	if (!cr0.eq) goto loc_82570CA8;
loc_82570C90:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,96(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// b 0x82571078
	goto loc_82571078;
loc_82570CA8:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256d938
	sub_8256D938(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570cc4
	if (cr0.eq) goto loc_82570CC4;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
loc_82570CC4:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82570cf4
	if (!cr6.eq) goto loc_82570CF4;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570cf4
	if (cr0.eq) goto loc_82570CF4;
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// stw r25,2092(r11)
	PPC_STORE_U32(r11.u32 + 2092, r25.u32);
loc_82570CF4:
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570d7c
	if (cr0.eq) goto loc_82570D7C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,80(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 80);
	// bl 0x8256ec58
	sub_8256EC58(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570d7c
	if (cr0.eq) goto loc_82570D7C;
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570d54
	if (cr0.eq) goto loc_82570D54;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// subf r6,r27,r11
	ctx.r6.s64 = r11.s64 - r27.s64;
	// bl 0x8256d348
	sub_8256D348(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
loc_82570D54:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8256d578
	sub_8256D578(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// bl 0x8256ff70
	sub_8256FF70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// bl 0x8256d420
	sub_8256D420(ctx, base);
loc_82570D7C:
	// clrlwi. r29,r23,24
	r29.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// mr r19,r25
	r19.u64 = r25.u64;
	// bne 0x82570dd4
	if (!cr0.eq) goto loc_82570DD4;
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570dd4
	if (!cr0.eq) goto loc_82570DD4;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lis r12,783
	r12.s64 = 51314688;
	// ori r12,r12,49279
	r12.u64 = r12.u64 | 49279;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// and r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 & r12.u64;
	// oris r9,r9,57344
	ctx.r9.u64 = ctx.r9.u64 | 3758096384;
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// rlwinm r8,r10,0,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// rlwinm r8,r8,0,17,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF07FFF;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r10,92(r17)
	ctx.r10.u64 = PPC_LOAD_U32(r17.u32 + 92);
	// rlwimi r7,r10,24,3,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0x1F000000) | (ctx.r7.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
loc_82570DD4:
	// lwz r11,140(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82570df8
	if (!cr0.eq) goto loc_82570DF8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256e120
	sub_8256E120(ctx, base);
	// lwz r28,80(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82570DF8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570ea8
	if (cr0.eq) goto loc_82570EA8;
	// rlwinm r30,r27,1,0,30
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// slw r10,r25,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r25.u32 << (r30.u8 & 0x3F));
	// or r26,r10,r26
	r26.u64 = ctx.r10.u64 | r26.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570e68
	if (cr0.eq) goto loc_82570E68;
	// lbz r11,176(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 176);
	// slw r11,r11,r27
	r11.u64 = r27.u8 & 0x20 ? 0 : (r11.u32 << (r27.u8 & 0x3F));
	// or r24,r11,r24
	r24.u64 = r11.u64 | r24.u64;
loc_82570E68:
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570e78
	if (!cr0.eq) goto loc_82570E78;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82570e90
	if (cr6.eq) goto loc_82570E90;
loc_82570E78:
	// li r7,1551
	ctx.r7.s64 = 1551;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82570E90:
	// lwz r11,64(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 64);
	// mr r23,r25
	r23.u64 = r25.u64;
	// mr r18,r25
	r18.u64 = r25.u64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,64(r31)
	PPC_STORE_U32(r31.u32 + 64, r11.u32);
	// b 0x82570f18
	goto loc_82570F18;
loc_82570EA8:
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570ee4
	if (cr0.eq) goto loc_82570EE4;
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570edc
	if (cr0.eq) goto loc_82570EDC;
	// li r7,1558
	ctx.r7.s64 = 1558;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r14
	ctx.r5.u64 = r14.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82570EDC:
	// mr r18,r25
	r18.u64 = r25.u64;
	// b 0x82570f08
	goto loc_82570F08;
loc_82570EE4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82570f04
	if (cr6.eq) goto loc_82570F04;
	// li r7,1561
	ctx.r7.s64 = 1561;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r15
	ctx.r5.u64 = r15.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82570F04:
	// mr r23,r25
	r23.u64 = r25.u64;
loc_82570F08:
	// rlwinm r30,r27,1,0,30
	r30.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFFFE;
	// li r11,0
	r11.s64 = 0;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// or r26,r11,r26
	r26.u64 = r11.u64 | r26.u64;
loc_82570F18:
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,20,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570f30
	if (!cr0.eq) goto loc_82570F30;
	// lbz r11,295(r1)
	r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 295);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82570f44
	if (cr0.eq) goto loc_82570F44;
loc_82570F30:
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,295(r1)
	PPC_STORE_U8(ctx.r1.u32 + 295, ctx.r10.u8);
	// slw r11,r25,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// or r26,r11,r26
	r26.u64 = r11.u64 | r26.u64;
loc_82570F44:
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82570ffc
	if (!cr0.eq) goto loc_82570FFC;
	// clrlwi. r8,r23,24
	ctx.r8.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x82570f60
	if (!cr0.eq) goto loc_82570F60;
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570ffc
	if (cr0.eq) goto loc_82570FFC;
loc_82570F60:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// addi r11,r10,12
	r11.s64 = ctx.r10.s64 + 12;
	// stw r9,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r9.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,24(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 24);
	// mulli r11,r11,52
	r11.s64 = r11.s64 * 52;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// rlwinm. r10,r11,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82570fc8
	if (cr0.eq) goto loc_82570FC8;
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82570fa0
	if (!cr0.eq) goto loc_82570FA0;
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570fc8
	if (cr0.eq) goto loc_82570FC8;
loc_82570FA0:
	// lwz r11,72(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 72);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,72(r31)
	PPC_STORE_U32(r31.u32 + 72, r11.u32);
	// beq cr6,0x82570fc8
	if (cr6.eq) goto loc_82570FC8;
	// clrlwi. r11,r18,24
	r11.u64 = r18.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82570fc8
	if (cr0.eq) goto loc_82570FC8;
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,68(r31)
	PPC_STORE_U32(r31.u32 + 68, r11.u32);
loc_82570FC8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,352(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 352);
	// mulli r11,r11,3
	r11.s64 = r11.s64 * 3;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// ble cr6,0x82570ff4
	if (!cr6.gt) goto loc_82570FF4;
	// li r7,1586
	ctx.r7.s64 = 1586;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r16
	ctx.r5.u64 = r16.u64;
	// mr r4,r22
	ctx.r4.u64 = r22.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82570FF4:
	// li r23,0
	r23.s64 = 0;
	// li r18,0
	r18.s64 = 0;
loc_82570FFC:
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,24,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82571010
	if (cr0.eq) goto loc_82571010;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// bgt cr6,0x82571018
	if (cr6.gt) goto loc_82571018;
loc_82571010:
	// cmpwi cr6,r27,6
	cr6.compare<int32_t>(r27.s32, 6, xer);
	// bne cr6,0x82571054
	if (!cr6.eq) goto loc_82571054;
loc_82571018:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// subf r6,r27,r11
	ctx.r6.s64 = r11.s64 - r27.s64;
	// bl 0x8256d348
	sub_8256D348(ctx, base);
	// li r27,0
	r27.s64 = 0;
	// li r26,0
	r26.s64 = 0;
	// li r24,0
	r24.s64 = 0;
	// li r19,0
	r19.s64 = 0;
loc_82571054:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r30,284(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
loc_82571078:
	// lwz r28,8(r28)
	r28.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82570ac4
	if (!cr6.eq) goto loc_82570AC4;
loc_8257108C:
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825710c8
	if (cr0.eq) goto loc_825710C8;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// ble cr6,0x825710c8
	if (!cr6.gt) goto loc_825710C8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// subf r6,r27,r11
	ctx.r6.s64 = r11.s64 - r27.s64;
	// bl 0x8256d348
	sub_8256D348(ctx, base);
loc_825710C8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_825710D0"))) PPC_WEAK_FUNC(sub_825710D0);
PPC_FUNC_IMPL(__imp__sub_825710D0) {
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
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// bl 0x825706a0
	sub_825706A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x8249cff0
	sub_8249CFF0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82571140
	if (cr0.eq) goto loc_82571140;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r10,6
	ctx.r10.s64 = 6;
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// divw r11,r11,r10
	r11.s32 = r11.s32 / ctx.r10.s32;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// bgt cr6,0x82571140
	if (cr6.gt) goto loc_82571140;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1677
	ctx.r7.s64 = 1677;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-8656
	ctx.r5.s64 = r11.s64 + -8656;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82571140:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8257115C"))) PPC_WEAK_FUNC(sub_8257115C);
PPC_FUNC_IMPL(__imp__sub_8257115C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571160"))) PPC_WEAK_FUNC(sub_82571160);
PPC_FUNC_IMPL(__imp__sub_82571160) {
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
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257118c
	if (cr0.eq) goto loc_8257118C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8256eaa0
	sub_8256EAA0(ctx, base);
loc_8257118C:
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825711a0
	if (cr0.eq) goto loc_825711A0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8256eaf8
	sub_8256EAF8(ctx, base);
loc_825711A0:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825711b4
	if (cr0.eq) goto loc_825711B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8256eb50
	sub_8256EB50(ctx, base);
loc_825711B4:
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825711c8
	if (cr0.eq) goto loc_825711C8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8256eba8
	sub_8256EBA8(ctx, base);
loc_825711C8:
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x825711dc
	if (cr0.eq) goto loc_825711DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8256ec00
	sub_8256EC00(ctx, base);
loc_825711DC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// lwz r11,412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// lwz r11,412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// lwz r11,412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82571244
	if (cr0.eq) goto loc_82571244;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,420(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 420);
	// lwz r11,412(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 412);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82571244:
	// lis r30,-32126
	r30.s64 = -2105409536;
	// lwz r4,-25300(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + -25300);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82571268
	if (cr6.eq) goto loc_82571268;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r3,428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 428);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,-25300(r30)
	PPC_STORE_U32(r30.u32 + -25300, r11.u32);
loc_82571268:
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

__attribute__((alias("__imp__sub_82571280"))) PPC_WEAK_FUNC(sub_82571280);
PPC_FUNC_IMPL(__imp__sub_82571280) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825712d0
	if (cr0.eq) goto loc_825712D0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// b 0x825712e4
	goto loc_825712E4;
loc_825712D0:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// li r4,43
	ctx.r4.s64 = 43;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r6,r11,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
loc_825712E4:
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,64(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 64);
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82571348"))) PPC_WEAK_FUNC(sub_82571348);
PPC_FUNC_IMPL(__imp__sub_82571348) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,12(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r3,116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r10.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82571428"))) PPC_WEAK_FUNC(sub_82571428);
PPC_FUNC_IMPL(__imp__sub_82571428) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 112);
	// bl 0x82570700
	sub_82570700(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 116);
	// bl 0x82570760
	sub_82570760(ctx, base);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r6,r11,1
	ctx.r6.s64 = r11.s64 + 1;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r31,12(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r6,52(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// bl 0x8249d048
	sub_8249D048(ctx, base);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r10,12(r30)
	PPC_STORE_U32(r30.u32 + 12, ctx.r10.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82571560"))) PPC_WEAK_FUNC(sub_82571560);
PPC_FUNC_IMPL(__imp__sub_82571560) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x825715a4
	if (!cr6.eq) goto loc_825715A4;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// b 0x825715a8
	goto loc_825715A8;
loc_825715A4:
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_825715A8:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r27,r11,8972
	r27.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r11,-9848
	r26.s64 = r11.s64 + -9848;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// beq 0x8257177c
	if (cr0.eq) goto loc_8257177C;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x8257161c
	if (!cr6.gt) goto loc_8257161C;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r10,240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 240);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8257161c
	if (cr6.eq) goto loc_8257161C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2470
	ctx.r7.s64 = 2470;
	// addi r5,r11,-8300
	ctx.r5.s64 = r11.s64 + -8300;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257161C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82571758
	if (cr6.lt) goto loc_82571758;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// lbz r10,133(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 133);
	// lbz r11,132(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 132);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82571674
	if (!cr6.eq) goto loc_82571674;
	// lbz r10,134(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 134);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82571674
	if (!cr6.eq) goto loc_82571674;
	// lbz r10,135(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 135);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82571690
	if (cr6.eq) goto loc_82571690;
loc_82571674:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2475
	ctx.r7.s64 = 2475;
	// addi r5,r11,-8448
	ctx.r5.s64 = r11.s64 + -8448;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82571690:
	// lbz r11,132(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 132);
	// addic. r11,r11,-3
	xer.ca = r11.u32 > 2;
	r11.s64 = r11.s64 + -3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x825716a0
	if (!cr0.lt) goto loc_825716A0;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_825716A0:
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r11.u8);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// ble cr6,0x82571728
	if (!cr6.gt) goto loc_82571728;
	// lbz r11,136(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 136);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x825716d4
	if (!cr0.lt) goto loc_825716D4;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_825716D4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r11.u8);
	// lbz r11,136(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 136);
	// lbz r10,137(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 137);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82571708
	if (!cr6.eq) goto loc_82571708;
	// lbz r10,138(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 138);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82571708
	if (!cr6.eq) goto loc_82571708;
	// lbz r10,139(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 139);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82571758
	if (cr6.eq) goto loc_82571758;
loc_82571708:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2480
	ctx.r7.s64 = 2480;
	// addi r5,r11,-8600
	ctx.r5.s64 = r11.s64 + -8600;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82571758
	goto loc_82571758;
loc_82571728:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,99
	cr6.compare<int32_t>(r11.s32, 99, xer);
	// beq cr6,0x8257173c
	if (cr6.eq) goto loc_8257173C;
	// cmpwi cr6,r11,100
	cr6.compare<int32_t>(r11.s32, 100, xer);
	// bne cr6,0x82571758
	if (!cr6.eq) goto loc_82571758;
loc_8257173C:
	// lbz r11,132(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 132);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x8257174c
	if (!cr0.lt) goto loc_8257174C;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_8257174C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r11.u8);
loc_82571758:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwimi r9,r11,26,0,5
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0xFC000000) | (ctx.r9.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// b 0x825718e4
	goto loc_825718E4;
loc_8257177C:
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r28,256
	r28.s64 = 16777216;
	// lis r29,2
	r29.s64 = 131072;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x825717e4
	if (cr6.lt) goto loc_825717E4;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r10,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r29,r11
	ctx.r8.s64 = r11.s64 - r29.s64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
loc_825717E4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// blt cr6,0x82571854
	if (cr6.lt) goto loc_82571854;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// rlwinm r11,r10,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r29,r11
	ctx.r8.s64 = r11.s64 - r29.s64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r11.u8);
loc_82571854:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x825718c4
	if (cr6.lt) goto loc_825718C4;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 140);
	// rlwinm r11,r10,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r28
	ctx.r10.u64 = r11.u64 + r28.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r29,r11
	ctx.r8.s64 = r11.s64 - r29.s64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r11.u8);
loc_825718C4:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwimi r10,r11,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
loc_825718E4:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256fbf0
	sub_8256FBF0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82571924
	if (cr0.eq) goto loc_82571924;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82571924
	if (cr6.eq) goto loc_82571924;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2519
	ctx.r7.s64 = 2519;
	// addi r5,r11,-8628
	ctx.r5.s64 = r11.s64 + -8628;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82571924:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwimi r10,r11,27,3,4
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 27) & 0x18000000) | (ctx.r10.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_8257193C"))) PPC_WEAK_FUNC(sub_8257193C);
PPC_FUNC_IMPL(__imp__sub_8257193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571940"))) PPC_WEAK_FUNC(sub_82571940);
PPC_FUNC_IMPL(__imp__sub_82571940) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82571984
	if (!cr6.eq) goto loc_82571984;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// b 0x82571988
	goto loc_82571988;
loc_82571984:
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_82571988:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r29,r11,8972
	r29.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r28,r11,-9848
	r28.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// beq 0x82571a88
	if (cr0.eq) goto loc_82571A88;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82571b20
	if (cr6.lt) goto loc_82571B20;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stb r11,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r11.u8);
	// lbz r11,132(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 132);
	// lbz r10,133(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 133);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82571a2c
	if (!cr6.eq) goto loc_82571A2C;
	// lbz r10,134(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 134);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82571a2c
	if (!cr6.eq) goto loc_82571A2C;
	// lbz r10,135(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 135);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82571a48
	if (cr6.eq) goto loc_82571A48;
loc_82571A2C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2621
	ctx.r7.s64 = 2621;
	// addi r5,r11,-8448
	ctx.r5.s64 = r11.s64 + -8448;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82571A48:
	// lbz r11,132(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 132);
	// addic. r11,r11,-3
	xer.ca = r11.u32 > 2;
	r11.s64 = r11.s64 + -3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82571a58
	if (!cr0.lt) goto loc_82571A58;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82571A58:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,6,0,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0xFFFFFFC0;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stb r11,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r11.u8);
	// lbz r11,132(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 132);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82571a78
	if (!cr0.lt) goto loc_82571A78;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_82571A78:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r11.u8);
	// b 0x82571b20
	goto loc_82571B20;
loc_82571A88:
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// rlwimi r10,r11,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// blt cr6,0x82571b20
	if (cr6.lt) goto loc_82571B20;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r10,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// addis r10,r11,256
	ctx.r10.s64 = r11.s64 + 16777216;
	// addi r9,r11,-256
	ctx.r9.s64 = r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// addis r8,r11,-2
	ctx.r8.s64 = r11.s64 + -131072;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// stb r11,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r11.u8);
loc_82571B20:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256fbf0
	sub_8256FBF0(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82571b60
	if (cr0.eq) goto loc_82571B60;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82571b60
	if (cr6.eq) goto loc_82571B60;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2648
	ctx.r7.s64 = 2648;
	// addi r5,r11,-8628
	ctx.r5.s64 = r11.s64 + -8628;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82571B60:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwimi r10,r11,27,3,4
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 27) & 0x18000000) | (ctx.r10.u64 & 0xFFFFFFFFE7FFFFFF);
	// ori r11,r9,32768
	r11.u64 = ctx.r9.u64 | 32768;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82571B84"))) PPC_WEAK_FUNC(sub_82571B84);
PPC_FUNC_IMPL(__imp__sub_82571B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82571B88"))) PPC_WEAK_FUNC(sub_82571B88);
PPC_FUNC_IMPL(__imp__sub_82571B88) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// subf r11,r11,r31
	r11.s64 = r31.s64 - r11.s64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82571bd0
	if (!cr6.eq) goto loc_82571BD0;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// b 0x82571bd4
	goto loc_82571BD4;
loc_82571BD0:
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
loc_82571BD4:
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r29,r11,5600
	r29.s64 = r11.s64 + 5600;
	// rlwinm r11,r7,0,16,11
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// li r25,1
	r25.s64 = 1;
	// lwz r9,92(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 92);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// rlwimi r7,r9,24,3,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0x1F000000) | (ctx.r7.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r7,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r7.u32);
loc_82571C2C:
	// slw r9,r25,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// cmpwi cr6,r10,4
	cr6.compare<int32_t>(ctx.r10.s32, 4, xer);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwimi r9,r11,0,16,11
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r9.u64 & 0xF0000);
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
	// blt cr6,0x82571c2c
	if (cr6.lt) goto loc_82571C2C;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r26,256
	r26.s64 = 16777216;
	// stb r8,5(r31)
	PPC_STORE_U8(r31.u32 + 5, ctx.r8.u8);
	// lis r27,2
	r27.s64 = 131072;
	// stb r8,6(r31)
	PPC_STORE_U8(r31.u32 + 6, ctx.r8.u8);
	// lwz r4,236(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x82571cc4
	if (cr0.eq) goto loc_82571CC4;
	// lwz r3,1712(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82571cc4
	if (cr0.lt) goto loc_82571CC4;
	// lwz r10,132(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 132);
	// rlwinm r11,r10,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r27,r11
	ctx.r8.s64 = r11.s64 - r27.s64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lhz r11,4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 4);
	// stb r11,6(r31)
	PPC_STORE_U8(r31.u32 + 6, r11.u8);
loc_82571CC4:
	// lwz r10,128(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r10,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwinm r10,r11,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r8,r11,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10000;
	// rlwinm r10,r10,0,18,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFE3FFF;
	// rlwinm r7,r11,0,23,23
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// nor r11,r10,r11
	r11.u64 = ~(ctx.r10.u64 | r11.u64);
	// rlwimi r9,r11,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// lwz r3,1712(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwimi r11,r10,0,0,25
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFC0) | (r11.u64 & 0xFFFFFFFF0000003F);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 240);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r10.u32);
	// lwz r3,1712(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 1712);
	// lwz r4,240(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 240);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82571da4
	if (cr0.lt) goto loc_82571DA4;
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// rlwinm r11,r10,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r26
	ctx.r10.u64 = r11.u64 + r26.u64;
	// addi r9,r11,-256
	ctx.r9.s64 = r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// subf r8,r27,r11
	ctx.r8.s64 = r11.s64 - r27.s64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,7(r31)
	PPC_STORE_U8(r31.u32 + 7, r11.u8);
loc_82571DA4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r10,8193
	ctx.r10.s64 = 8193;
	// rlwimi r11,r10,12,18,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3F00) | (r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwimi r11,r10,12,8,11
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF00000) | (r11.u64 & 0xFFFFFFFFFF0FFFFF);
	// rlwimi r11,r10,12,6,6
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x2000000) | (r11.u64 & 0xFFFFFFFFFDFFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82571e88
	if (cr0.eq) goto loc_82571E88;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82571e44
	if (cr6.eq) goto loc_82571E44;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82571e00
	if (cr6.eq) goto loc_82571E00;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2722
	ctx.r7.s64 = 2722;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82571ec4
	goto loc_82571EC4;
loc_82571E00:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82571e38
	if (cr0.eq) goto loc_82571E38;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82571e38
	if (cr6.eq) goto loc_82571E38;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2718
	ctx.r7.s64 = 2718;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-8192
	ctx.r5.s64 = r11.s64 + -8192;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82571E38:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// oris r11,r11,6144
	r11.u64 = r11.u64 | 402653184;
	// b 0x82571ec0
	goto loc_82571EC0;
loc_82571E44:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82571e7c
	if (cr0.eq) goto loc_82571E7C;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82571e7c
	if (cr6.eq) goto loc_82571E7C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2714
	ctx.r7.s64 = 2714;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-8232
	ctx.r5.s64 = r11.s64 + -8232;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82571E7C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwimi r11,r25,28,3,4
	r11.u64 = (__builtin_rotateleft32(r25.u32, 28) & 0x18000000) | (r11.u64 & 0xFFFFFFFFE7FFFFFF);
	// b 0x82571ec0
	goto loc_82571EC0;
loc_82571E88:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm. r11,r11,0,3,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x18000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82571eb8
	if (cr0.eq) goto loc_82571EB8;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2710
	ctx.r7.s64 = 2710;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-8252
	ctx.r5.s64 = r11.s64 + -8252;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82571EB8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,0,5,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
loc_82571EC0:
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82571EC4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82571ED8"))) PPC_WEAK_FUNC(sub_82571ED8);
PPC_FUNC_IMPL(__imp__sub_82571ED8) {
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
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// subf r11,r11,r30
	r11.s64 = r30.s64 - r11.s64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// divw r11,r11,r9
	r11.s32 = r11.s32 / ctx.r9.s32;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82571f20
	if (!cr6.eq) goto loc_82571F20;
	// stw r31,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r31.u32);
	// b 0x82571f24
	goto loc_82571F24;
loc_82571F20:
	// stw r31,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r31.u32);
loc_82571F24:
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,-9848
	r27.s64 = r11.s64 + -9848;
	// beq 0x82572004
	if (cr0.eq) goto loc_82572004;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// rlwimi r10,r11,26,0,5
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 26) & 0xFC000000) | (ctx.r10.u64 & 0xFFFFFFFF03FFFFFF);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
	// lbz r10,133(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 133);
	// lbz r11,132(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 132);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82571fa4
	if (!cr6.eq) goto loc_82571FA4;
	// lbz r10,134(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 134);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82571fa4
	if (!cr6.eq) goto loc_82571FA4;
	// lbz r10,135(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 135);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82571fc0
	if (cr6.eq) goto loc_82571FC0;
loc_82571FA4:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2755
	ctx.r7.s64 = 2755;
	// addi r5,r11,-8448
	ctx.r5.s64 = r11.s64 + -8448;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82571FC0:
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r10,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// addis r10,r11,256
	ctx.r10.s64 = r11.s64 + 16777216;
	// addi r9,r11,-256
	ctx.r9.s64 = r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// addis r8,r11,-2
	ctx.r8.s64 = r11.s64 + -131072;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,7(r30)
	PPC_STORE_U8(r30.u32 + 7, r11.u8);
	// b 0x82572090
	goto loc_82572090;
loc_82572004:
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256f678
	sub_8256F678(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,5600
	r11.s64 = r11.s64 + 5600;
	// lwz r11,92(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 92);
	// rlwimi r10,r11,24,3,7
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0x1F000000) | (ctx.r10.u64 & 0xFFFFFFFFE0FFFFFF);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// lwz r3,1712(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1712);
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82572090
	if (cr0.lt) goto loc_82572090;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 132);
	// rlwinm r11,r10,8,24,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r11,r10,24,16,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (r11.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r11,r10,8,8,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (r11.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r11,r10,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// addis r10,r11,256
	ctx.r10.s64 = r11.s64 + 16777216;
	// addi r9,r11,-256
	ctx.r9.s64 = r11.s64 + -256;
	// rlwinm r10,r10,14,24,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0xC0;
	// rlwinm r9,r9,26,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0xC;
	// addis r8,r11,-2
	ctx.r8.s64 = r11.s64 + -131072;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r9,r8,20,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0x30;
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// lhz r11,4(r30)
	r11.u64 = PPC_LOAD_U16(r30.u32 + 4);
	// stb r11,6(r30)
	PPC_STORE_U8(r30.u32 + 6, r11.u8);
loc_82572090:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8256fbf0
	sub_8256FBF0(ctx, base);
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82572154
	if (cr0.eq) goto loc_82572154;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82572114
	if (cr6.eq) goto loc_82572114;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x825720d8
	if (cr6.eq) goto loc_825720D8;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,2784
	ctx.r7.s64 = 2784;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82572188
	goto loc_82572188;
loc_825720D8:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82572108
	if (cr0.eq) goto loc_82572108;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82572108
	if (cr6.eq) goto loc_82572108;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2780
	ctx.r7.s64 = 2780;
	// addi r5,r11,-8192
	ctx.r5.s64 = r11.s64 + -8192;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82572108:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// oris r11,r11,6144
	r11.u64 = r11.u64 | 402653184;
	// b 0x82572184
	goto loc_82572184;
loc_82572114:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,5,30,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82572144
	if (cr0.eq) goto loc_82572144;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82572144
	if (cr6.eq) goto loc_82572144;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2776
	ctx.r7.s64 = 2776;
	// addi r5,r11,-8232
	ctx.r5.s64 = r11.s64 + -8232;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82572144:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,28,3,4
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x18000000) | (r11.u64 & 0xFFFFFFFFE7FFFFFF);
	// b 0x82572184
	goto loc_82572184;
loc_82572154:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,3,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x18000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8257217c
	if (cr0.eq) goto loc_8257217C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2772
	ctx.r7.s64 = 2772;
	// addi r5,r11,-8252
	ctx.r5.s64 = r11.s64 + -8252;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8257217C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r11,r11,0,5,2
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFE7FFFFFF;
loc_82572184:
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82572188:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82572190"))) PPC_WEAK_FUNC(sub_82572190);
PPC_FUNC_IMPL(__imp__sub_82572190) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r30,172(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x82572214
	if (cr0.eq) goto loc_82572214;
	// lwz r11,228(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 228);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82572214
	if (cr0.eq) goto loc_82572214;
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// lwz r11,80(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// rlwinm. r10,r10,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x825721fc
	if (cr0.eq) goto loc_825721FC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,2813
	ctx.r7.s64 = 2813;
	// addi r6,r11,-9848
	ctx.r6.s64 = r11.s64 + -9848;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-8152
	ctx.r5.s64 = r11.s64 + -8152;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825721FC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,1712(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// lwz r11,128(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 128);
	// b 0x82572228
	goto loc_82572228;
loc_82572214:
	// li r11,0
	r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r11,-10280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10280);
loc_82572228:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82571560
	sub_82571560(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82572248"))) PPC_WEAK_FUNC(sub_82572248);
PPC_FUNC_IMPL(__imp__sub_82572248) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,168(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82572278
	if (cr0.eq) goto loc_82572278;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82572278
	if (cr0.eq) goto loc_82572278;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// stw r10,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r10.u32);
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// b 0x8257228c
	goto loc_8257228C;
loc_82572278:
	// li r11,0
	r11.s64 = 0;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r11,-10280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10280);
loc_8257228C:
	// stw r11,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, r11.u32);
	// b 0x82571560
	sub_82571560(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82572294"))) PPC_WEAK_FUNC(sub_82572294);
PPC_FUNC_IMPL(__imp__sub_82572294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82572298"))) PPC_WEAK_FUNC(sub_82572298);
PPC_FUNC_IMPL(__imp__sub_82572298) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825722fc
	if (!cr6.eq) goto loc_825722FC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r29,432(r11)
	r29.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r30,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r30.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x825722f4
	if (cr0.eq) goto loc_825722F4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,432(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x825722f8
	goto loc_825722F8;
loc_825722F4:
	// li r30,0
	r30.s64 = 0;
loc_825722F8:
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
loc_825722FC:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r30,432(r11)
	r30.u64 = PPC_LOAD_U32(r11.u32 + 432);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82572344
	if (cr0.eq) goto loc_82572344;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r28.u32);
	// addi r10,r10,-8868
	ctx.r10.s64 = ctx.r10.s64 + -8868;
	// stw r26,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r26.u32);
	// subf r9,r9,r27
	ctx.r9.s64 = r27.s64 - ctx.r9.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// b 0x82572348
	goto loc_82572348;
loc_82572344:
	// li r30,0
	r30.s64 = 0;
loc_82572348:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82572360"))) PPC_WEAK_FUNC(sub_82572360);
PPC_FUNC_IMPL(__imp__sub_82572360) {
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
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x8257238c
	if (cr0.eq) goto loc_8257238C;
	// bl 0x82582910
	sub_82582910(ctx, base);
loc_8257238C:
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// lbz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825723bc
	if (cr0.eq) goto loc_825723BC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lbz r4,168(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 168);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82571280
	sub_82571280(ctx, base);
loc_825723BC:
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

__attribute__((alias("__imp__sub_825723D4"))) PPC_WEAK_FUNC(sub_825723D4);
PPC_FUNC_IMPL(__imp__sub_825723D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825723D8"))) PPC_WEAK_FUNC(sub_825723D8);
PPC_FUNC_IMPL(__imp__sub_825723D8) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8257270c
	if (!cr0.eq) goto loc_8257270C;
	// lwz r3,136(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// addi r26,r11,8972
	r26.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r25,r11,-9848
	r25.s64 = r11.s64 + -9848;
	// beq cr6,0x82572444
	if (cr6.eq) goto loc_82572444;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,427
	ctx.r7.s64 = 427;
	// addi r5,r11,-8016
	ctx.r5.s64 = r11.s64 + -8016;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82572444:
	// lwz r10,100(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 100);
	// li r29,1
	r29.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r11,-1
	ctx.r9.s64 = r11.s64 + -1;
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// bge cr6,0x82572470
	if (!cr6.lt) goto loc_82572470;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82572474
	goto loc_82572474;
loc_82572470:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82572474:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpwi cr6,r31,3
	cr6.compare<int32_t>(r31.s32, 3, xer);
	// beq cr6,0x825724a4
	if (cr6.eq) goto loc_825724A4;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// beq cr6,0x825724ac
	if (cr6.eq) goto loc_825724AC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,432
	ctx.r7.s64 = 432;
	// addi r5,r11,-8076
	ctx.r5.s64 = r11.s64 + -8076;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825724A4:
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x825724dc
	if (!cr6.eq) goto loc_825724DC;
loc_825724AC:
	// lwz r11,100(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 100);
	// mr r29,r30
	r29.u64 = r30.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825724dc
	if (cr6.eq) goto loc_825724DC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,435
	ctx.r7.s64 = 435;
	// addi r5,r11,-8112
	ctx.r5.s64 = r11.s64 + -8112;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825724DC:
	// lwz r11,136(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// lwz r11,168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 168);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82572574
	if (cr6.lt) goto loc_82572574;
	// beq cr6,0x82572558
	if (cr6.eq) goto loc_82572558;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// blt cr6,0x8257253c
	if (cr6.lt) goto loc_8257253C;
	// beq cr6,0x82572520
	if (cr6.eq) goto loc_82572520;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,457
	ctx.r7.s64 = 457;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8257258c
	goto loc_8257258C;
loc_82572520:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r11,86
	ctx.r3.s64 = r11.s64 + 86;
	// b 0x8257258c
	goto loc_8257258C;
loc_8257253C:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r11,85
	ctx.r3.s64 = r11.s64 + 85;
	// b 0x8257258c
	goto loc_8257258C;
loc_82572558:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r11,84
	ctx.r3.s64 = r11.s64 + 84;
	// b 0x8257258c
	goto loc_8257258C;
loc_82572574:
	// clrlwi r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r11,r11,0,27,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// addi r3,r11,83
	ctx.r3.s64 = r11.s64 + 83;
loc_8257258C:
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r24,r29,24
	r24.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq 0x82572608
	if (cr0.eq) goto loc_82572608;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x825725cc
	if (!cr0.eq) goto loc_825725CC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,463
	ctx.r7.s64 = 463;
	// addi r5,r11,-8128
	ctx.r5.s64 = r11.s64 + -8128;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825725CC:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,56(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 56);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r29,r11,-10280
	r29.s64 = r11.s64 + -10280;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// b 0x82572674
	goto loc_82572674;
loc_82572608:
	// lbz r11,140(r27)
	r11.u64 = PPC_LOAD_U8(r27.u32 + 140);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82572628
	if (cr0.eq) goto loc_82572628;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r30,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// lwz r11,-10280(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -10280);
	// b 0x8257266c
	goto loc_8257266C;
loc_82572628:
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82572654
	if (!cr0.eq) goto loc_82572654;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,477
	ctx.r7.s64 = 477;
	// addi r5,r11,-8128
	ctx.r5.s64 = r11.s64 + -8128;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82572654:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// addi r11,r11,-10280
	r11.s64 = r11.s64 + -10280;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
loc_8257266C:
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
loc_82572674:
	// lwz r11,136(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// cntlzw r11,r24
	r11.u64 = r24.u32 == 0 ? 32 : __builtin_clz(r24.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
loc_82572694:
	// lwz r3,136(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// li r5,3
	ctx.r5.s64 = 3;
	// lwz r28,0(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r11,88(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 88);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82572694
	if (cr6.lt) goto loc_82572694;
	// lwz r11,136(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// lbz r11,153(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 153);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825726f8
	if (cr0.eq) goto loc_825726F8;
	// add r11,r29,r31
	r11.u64 = r29.u64 + r31.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,152(r11)
	PPC_STORE_U8(r11.u32 + 152, ctx.r10.u8);
loc_825726F8:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r3,136(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// bl 0x825828a0
	sub_825828A0(ctx, base);
loc_8257270C:
	// addi r4,r27,20
	ctx.r4.s64 = r27.s64 + 20;
	// lbz r5,124(r27)
	ctx.r5.u64 = PPC_LOAD_U8(r27.u32 + 124);
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// lwz r3,100(r23)
	ctx.r3.u64 = PPC_LOAD_U32(r23.u32 + 100);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// li r11,3
	r11.s64 = 3;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82572738"))) PPC_WEAK_FUNC(sub_82572738);
PPC_FUNC_IMPL(__imp__sub_82572738) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce8
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,16(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825729f8
	if (!cr0.eq) goto loc_825729F8;
	// lwz r11,100(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 100);
	// li r24,0
	r24.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// bge cr6,0x82572788
	if (!cr6.lt) goto loc_82572788;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// rlwinm r11,r9,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x8257278c
	goto loc_8257278C;
loc_82572788:
	// mr r11,r24
	r11.u64 = r24.u64;
loc_8257278C:
	// lwz r25,0(r11)
	r25.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r31,r11,8972
	r31.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmpwi cr6,r25,3
	cr6.compare<int32_t>(r25.s32, 3, xer);
	// addi r29,r11,-9848
	r29.s64 = r11.s64 + -9848;
	// beq cr6,0x825727c4
	if (cr6.eq) goto loc_825727C4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,535
	ctx.r7.s64 = 535;
	// addi r5,r11,-7976
	ctx.r5.s64 = r11.s64 + -7976;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825727C4:
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x825727fc
	if (cr6.eq) goto loc_825727FC;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,538
	ctx.r7.s64 = 538;
	// addi r5,r11,-8016
	ctx.r5.s64 = r11.s64 + -8016;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825727FC:
	// lwz r10,136(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r11,168(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 168);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// bne cr6,0x82572814
	if (!cr6.eq) goto loc_82572814;
	// lwz r29,236(r10)
	r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// b 0x825728e4
	goto loc_825728E4;
loc_82572814:
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82572860
	if (cr0.eq) goto loc_82572860;
	// cmpwi cr6,r11,2
	cr6.compare<int32_t>(r11.s32, 2, xer);
	// beq cr6,0x82572858
	if (cr6.eq) goto loc_82572858;
	// cmpwi cr6,r11,3
	cr6.compare<int32_t>(r11.s32, 3, xer);
	// beq cr6,0x82572850
	if (cr6.eq) goto loc_82572850;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// li r7,556
	ctx.r7.s64 = 556;
	// addi r5,r11,-24612
	ctx.r5.s64 = r11.s64 + -24612;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// lwz r29,80(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82572870
	goto loc_82572870;
loc_82572850:
	// li r3,93
	ctx.r3.s64 = 93;
	// b 0x82572864
	goto loc_82572864;
loc_82572858:
	// li r3,92
	ctx.r3.s64 = 92;
	// b 0x82572864
	goto loc_82572864;
loc_82572860:
	// li r3,91
	ctx.r3.s64 = 91;
loc_82572864:
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82572870:
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,132(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 132);
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lbz r11,153(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 153);
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stb r10,152(r11)
	PPC_STORE_U8(r11.u32 + 152, ctx.r10.u8);
	// lwz r11,136(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// lwz r5,236(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,136(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x825728bc
	if (!cr6.lt) goto loc_825728BC;
	// lwz r3,140(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 140);
	// bl 0x82576968
	sub_82576968(ctx, base);
	// stw r3,136(r27)
	PPC_STORE_U32(r27.u32 + 136, ctx.r3.u32);
loc_825728BC:
	// lwz r11,136(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r24,80(r29)
	PPC_STORE_U32(r29.u32 + 80, r24.u32);
	// stw r25,52(r29)
	PPC_STORE_U32(r29.u32 + 52, r25.u32);
	// stw r11,56(r29)
	PPC_STORE_U32(r29.u32 + 56, r11.u32);
	// lwz r11,228(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 228);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r29)
	PPC_STORE_U32(r29.u32 + 228, r11.u32);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
loc_825728E4:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r3,19
	ctx.r3.s64 = 19;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// lwz r26,56(r11)
	r26.u64 = PPC_LOAD_U32(r11.u32 + 56);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lbz r11,0(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 0);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 16);
	// li r5,2
	ctx.r5.s64 = 2;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// beq 0x82572934
	if (cr0.eq) goto loc_82572934;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f4,29188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 29188);
	ctx.f4.f64 = double(temp.f32);
	// b 0x8257293c
	goto loc_8257293C;
loc_82572934:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfs f4,-7980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -7980);
	ctx.f4.f64 = double(temp.f32);
loc_8257293C:
	// fmr f3,f4
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f4.f64;
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// fmr f1,f4
	ctx.f1.f64 = ctx.f4.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r26,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r26.u32);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r28,r11,-10264
	r28.s64 = r11.s64 + -10264;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,-12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -12);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// stw r25,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r25.u32);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// li r3,90
	ctx.r3.s64 = 90;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// lwz r11,136(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x825729a8
	if (!cr6.lt) goto loc_825729A8;
	// lwz r3,140(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 140);
	// bl 0x82576968
	sub_82576968(ctx, base);
	// stw r3,136(r27)
	PPC_STORE_U32(r27.u32 + 136, ctx.r3.u32);
loc_825729A8:
	// lwz r10,136(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 136);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r11,-12(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -12);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// stw r25,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r25.u32);
	// rlwinm r11,r11,0,30,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r3,136(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 136);
	// bl 0x825828a0
	sub_825828A0(ctx, base);
loc_825729F8:
	// addi r4,r30,20
	ctx.r4.s64 = r30.s64 + 20;
	// lbz r5,124(r30)
	ctx.r5.u64 = PPC_LOAD_U8(r30.u32 + 124);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r3,152(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 152);
	// bl 0x82572360
	sub_82572360(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82572A1C"))) PPC_WEAK_FUNC(sub_82572A1C);
PPC_FUNC_IMPL(__imp__sub_82572A1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82572A20"))) PPC_WEAK_FUNC(sub_82572A20);
PPC_FUNC_IMPL(__imp__sub_82572A20) {
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
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// lwz r3,100(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 100);
	// bl 0x8256d878
	sub_8256D878(ctx, base);
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// lbz r11,0(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82572b48
	if (!cr0.eq) goto loc_82572B48;
	// lwz r9,100(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 100);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r11,-1
	ctx.r10.s64 = r11.s64 + -1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82572a70
	if (!cr6.lt) goto loc_82572A70;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r11,r10,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r8
	r11.u64 = r11.u64 + ctx.r8.u64;
	// b 0x82572a74
	goto loc_82572A74;
loc_82572A70:
	// li r11,0
	r11.s64 = 0;
loc_82572A74:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// li r31,1
	r31.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r28,r11,-9848
	r28.s64 = r11.s64 + -9848;
	// bne cr6,0x82572ac0
	if (!cr6.eq) goto loc_82572AC0;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82572ac0
	if (cr6.eq) goto loc_82572AC0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,635
	ctx.r7.s64 = 635;
	// addi r5,r11,-8112
	ctx.r5.s64 = r11.s64 + -8112;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82572AC0:
	// clrlwi. r11,r31,24
	r11.u64 = r31.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82572b48
	if (cr0.eq) goto loc_82572B48;
	// li r3,88
	ctx.r3.s64 = 88;
	// lwz r4,12(r27)
	ctx.r4.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// bl 0x82585608
	sub_82585608(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x8256dad0
	sub_8256DAD0(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82572b04
	if (!cr0.eq) goto loc_82572B04;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,642
	ctx.r7.s64 = 642;
	// addi r5,r11,-8128
	ctx.r5.s64 = r11.s64 + -8128;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82572B04:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 56);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// addi r30,r11,-10264
	r30.s64 = r11.s64 + -10264;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,-12(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -12);
	// stw r10,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r10.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// bl 0x82589438
	sub_82589438(ctx, base);
loc_82572B48:
	// addi r4,r27,20
	ctx.r4.s64 = r27.s64 + 20;
	// lbz r5,124(r27)
	ctx.r5.u64 = PPC_LOAD_U8(r27.u32 + 124);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82572B60"))) PPC_WEAK_FUNC(sub_82572B60);
PPC_FUNC_IMPL(__imp__sub_82572B60) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,136(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 136);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r4,236(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 236);
	// lwz r3,1712(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1712);
	// bl 0x82595078
	sub_82595078(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lbz r5,124(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// addi r4,r31,20
	ctx.r4.s64 = r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82570a28
	sub_82570A28(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82571280
	sub_82571280(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

