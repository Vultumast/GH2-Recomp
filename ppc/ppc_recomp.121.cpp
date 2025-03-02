#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82380460"))) PPC_WEAK_FUNC(sub_82380460);
PPC_FUNC_IMPL(__imp__sub_82380460) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8238047c
	if (cr0.eq) goto loc_8238047C;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r3,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r3.s64 = temp.s64;
	// blr 
	return;
loc_8238047C:
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380484"))) PPC_WEAK_FUNC(sub_82380484);
PPC_FUNC_IMPL(__imp__sub_82380484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380488"))) PPC_WEAK_FUNC(sub_82380488);
PPC_FUNC_IMPL(__imp__sub_82380488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
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

__attribute__((alias("__imp__sub_823804A8"))) PPC_WEAK_FUNC(sub_823804A8);
PPC_FUNC_IMPL(__imp__sub_823804A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823804B0"))) PPC_WEAK_FUNC(sub_823804B0);
PPC_FUNC_IMPL(__imp__sub_823804B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823804B8"))) PPC_WEAK_FUNC(sub_823804B8);
PPC_FUNC_IMPL(__imp__sub_823804B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823804C0"))) PPC_WEAK_FUNC(sub_823804C0);
PPC_FUNC_IMPL(__imp__sub_823804C0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82379bd8
	sub_82379BD8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,7260
	r11.s64 = r11.s64 + 7260;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82380510"))) PPC_WEAK_FUNC(sub_82380510);
PPC_FUNC_IMPL(__imp__sub_82380510) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82379c60
	sub_82379C60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x821426c8
	sub_821426C8(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,7268
	r11.s64 = r11.s64 + 7268;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82380560"))) PPC_WEAK_FUNC(sub_82380560);
PPC_FUNC_IMPL(__imp__sub_82380560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8238059c
	if (cr0.eq) goto loc_8238059C;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// beq cr6,0x8238059c
	if (cr6.eq) goto loc_8238059C;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8238059C:
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823805b8
	if (cr0.eq) goto loc_823805B8;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r3,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	ctx.r3.s64 = temp.s64;
	// blr 
	return;
loc_823805B8:
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823805C0"))) PPC_WEAK_FUNC(sub_823805C0);
PPC_FUNC_IMPL(__imp__sub_823805C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
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
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// srawi r31,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r31.s64 = r11.s32 >> 2;
	// lwz r11,24(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// subf r3,r31,r3
	ctx.r3.s64 = ctx.r3.s64 - r31.s64;
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

__attribute__((alias("__imp__sub_82380610"))) PPC_WEAK_FUNC(sub_82380610);
PPC_FUNC_IMPL(__imp__sub_82380610) {
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
	// bl 0x823805c0
	sub_823805C0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x8238066c
	if (cr0.eq) goto loc_8238066C;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823805c0
	sub_823805C0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// rotlwi r10,r31,1
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 1);
	// divw r9,r31,r11
	ctx.r9.s32 = r31.s32 / r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(r11.s32);
	// andc r10,r11,r10
	ctx.r10.u64 = r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	// subf. r3,r9,r31
	ctx.r3.s64 = r31.s64 - ctx.r9.s64;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// twlgei r10,-1
	// bge 0x8238066c
	if (!cr0.lt) goto loc_8238066C;
	// add r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 + r11.u64;
loc_8238066C:
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

__attribute__((alias("__imp__sub_82380684"))) PPC_WEAK_FUNC(sub_82380684);
PPC_FUNC_IMPL(__imp__sub_82380684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380688"))) PPC_WEAK_FUNC(sub_82380688);
PPC_FUNC_IMPL(__imp__sub_82380688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// b 0x82380610
	sub_82380610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82380694"))) PPC_WEAK_FUNC(sub_82380694);
PPC_FUNC_IMPL(__imp__sub_82380694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380698"))) PPC_WEAK_FUNC(sub_82380698);
PPC_FUNC_IMPL(__imp__sub_82380698) {
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
	// bl 0x82380610
	sub_82380610(ctx, base);
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// b 0x823806d0
	goto loc_823806D0;
loc_823806BC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpw cr6,r9,r3
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r3.s32, xer);
	// bgt cr6,0x823806cc
	if (cr6.gt) goto loc_823806CC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_823806CC:
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
loc_823806D0:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823806bc
	if (!cr6.eq) goto loc_823806BC;
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

__attribute__((alias("__imp__sub_823806EC"))) PPC_WEAK_FUNC(sub_823806EC);
PPC_FUNC_IMPL(__imp__sub_823806EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823806F0"))) PPC_WEAK_FUNC(sub_823806F0);
PPC_FUNC_IMPL(__imp__sub_823806F0) {
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
	// bl 0x823805c0
	sub_823805C0(ctx, base);
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// subf. r11,r11,r3
	r11.s64 = ctx.r3.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// bgt 0x82380728
	if (cr0.gt) goto loc_82380728;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82380728:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
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

__attribute__((alias("__imp__sub_82380740"))) PPC_WEAK_FUNC(sub_82380740);
PPC_FUNC_IMPL(__imp__sub_82380740) {
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
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r31,r11,-1
	r31.s64 = r11.s64 + -1;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r31.u32);
	// bl 0x823805c0
	sub_823805C0(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// cmpw cr6,r31,r11
	cr6.compare<int32_t>(r31.s32, r11.s32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x82380778
	if (cr6.lt) goto loc_82380778;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
loc_82380778:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
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

__attribute__((alias("__imp__sub_82380790"))) PPC_WEAK_FUNC(sub_82380790);
PPC_FUNC_IMPL(__imp__sub_82380790) {
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
	// bl 0x82380610
	sub_82380610(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, r30.u32);
	// beq 0x823807e0
	if (cr0.eq) goto loc_823807E0;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// subf r4,r11,r30
	ctx.r4.s64 = r30.s64 - r11.s64;
	// bl 0x82380610
	sub_82380610(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r3.u32);
	// b 0x82380808
	goto loc_82380808;
loc_823807E0:
	// bl 0x823806f0
	sub_823806F0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmpw cr6,r3,r30
	cr6.compare<int32_t>(ctx.r3.s32, r30.s32, xer);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// blt cr6,0x823807f8
	if (cr6.lt) goto loc_823807F8;
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
loc_823807F8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// subf r10,r11,r30
	ctx.r10.s64 = r30.s64 - r11.s64;
	// stw r11,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r11.u32);
	// stw r10,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r10.u32);
loc_82380808:
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
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

__attribute__((alias("__imp__sub_82380828"))) PPC_WEAK_FUNC(sub_82380828);
PPC_FUNC_IMPL(__imp__sub_82380828) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, r11.u32);
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// subf. r11,r11,r4
	r11.s64 = ctx.r4.s64 - r11.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, r11.u32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// bgt 0x82380848
	if (cr0.gt) goto loc_82380848;
	// addi r11,r1,-12
	r11.s64 = ctx.r1.s64 + -12;
loc_82380848:
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380860"))) PPC_WEAK_FUNC(sub_82380860);
PPC_FUNC_IMPL(__imp__sub_82380860) {
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
	// lwz r11,52(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lbz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// subf r31,r11,r4
	r31.s64 = ctx.r4.s64 - r11.s64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x823808c8
	if (cr0.eq) goto loc_823808C8;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// ble cr6,0x82380898
	if (!cr6.gt) goto loc_82380898;
	// bl 0x823805c0
	sub_823805C0(ctx, base);
	// subf r3,r3,r31
	ctx.r3.s64 = r31.s64 - ctx.r3.s64;
	// b 0x823808a0
	goto loc_823808A0;
loc_82380898:
	// bl 0x823805c0
	sub_823805C0(ctx, base);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + r31.u64;
loc_823808A0:
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
	// srawi r9,r11,31
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = r11.s32 >> 31;
	// srawi r8,r10,31
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 31;
	// xor r11,r11,r9
	r11.u64 = r11.u64 ^ ctx.r9.u64;
	// xor r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// subf r11,r9,r11
	r11.s64 = r11.s64 - ctx.r9.s64;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x823808cc
	if (cr6.lt) goto loc_823808CC;
loc_823808C8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_823808CC:
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

__attribute__((alias("__imp__sub_823808E0"))) PPC_WEAK_FUNC(sub_823808E0);
PPC_FUNC_IMPL(__imp__sub_823808E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// lbz r11,24(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823808fc
	if (cr0.eq) goto loc_823808FC;
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// b 0x82380900
	goto loc_82380900;
loc_823808FC:
	// lwz r11,60(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
loc_82380900:
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// b 0x82380610
	sub_82380610(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238090C"))) PPC_WEAK_FUNC(sub_8238090C);
PPC_FUNC_IMPL(__imp__sub_8238090C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380910"))) PPC_WEAK_FUNC(sub_82380910);
PPC_FUNC_IMPL(__imp__sub_82380910) {
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
	// lwz r11,52(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// add r4,r11,r4
	ctx.r4.u64 = r11.u64 + ctx.r4.u64;
	// bl 0x82380610
	sub_82380610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82380698
	sub_82380698(ctx, base);
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

__attribute__((alias("__imp__sub_82380950"))) PPC_WEAK_FUNC(sub_82380950);
PPC_FUNC_IMPL(__imp__sub_82380950) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,56(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// b 0x82380860
	sub_82380860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82380958"))) PPC_WEAK_FUNC(sub_82380958);
PPC_FUNC_IMPL(__imp__sub_82380958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// beqlr 
	if (cr0.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82380790
	sub_82380790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238096C"))) PPC_WEAK_FUNC(sub_8238096C);
PPC_FUNC_IMPL(__imp__sub_8238096C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380970"))) PPC_WEAK_FUNC(sub_82380970);
PPC_FUNC_IMPL(__imp__sub_82380970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stb r4,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r4.u8);
	// beqlr 
	if (cr0.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82380790
	sub_82380790(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82380984"))) PPC_WEAK_FUNC(sub_82380984);
PPC_FUNC_IMPL(__imp__sub_82380984) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380988"))) PPC_WEAK_FUNC(sub_82380988);
PPC_FUNC_IMPL(__imp__sub_82380988) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,11560(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11560);
	// mflr r12
	// bl 0x8239bcf8
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// beq 0x82380b7c
	if (cr0.eq) goto loc_82380B7C;
	// lfs f30,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// addi r28,r11,18572
	r28.s64 = r11.s64 + 18572;
	// bne cr6,0x82380a2c
	if (!cr6.eq) goto loc_82380A2C;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stfs f31,68(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// bl 0x823804c0
	sub_823804C0(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82380a20
	if (cr0.eq) goto loc_82380A20;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82380A20:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82380A2C:
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x82380b30
	if (cr6.lt) goto loc_82380B30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82380860
	sub_82380860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt 0x82380a5c
	if (cr0.gt) goto loc_82380A5C;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82380A5C:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82380610
	sub_82380610(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// bl 0x82380510
	sub_82380510(ctx, base);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82380aa8
	if (cr0.eq) goto loc_82380AA8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82380AA8:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r28,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r28.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380b2c
	if (cr0.eq) goto loc_82380B2C;
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// bl 0x823804c0
	sub_823804C0(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82380b1c
	if (cr0.eq) goto loc_82380B1C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82380B1C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stw r28,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r28.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82380b30
	goto loc_82380B30;
loc_82380B2C:
	// stfs f30,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
loc_82380B30:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x82380b74
	if (cr0.eq) goto loc_82380B74;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82380b74
	if (cr6.eq) goto loc_82380B74;
	// lfs f13,68(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x82380b8c
	goto loc_82380B8C;
loc_82380B74:
	// stfs f13,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// b 0x82380b90
	goto loc_82380B90;
loc_82380B7C:
	// lfs f0,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_82380B8C:
	// stfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
loc_82380B90:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82380990"))) PPC_WEAK_FUNC(sub_82380990);
PPC_FUNC_IMPL(__imp__sub_82380990) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
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
	// lis r11,-32255
	r11.s64 = -2113863680;
	// beq 0x82380b7c
	if (cr0.eq) goto loc_82380B7C;
	// lfs f30,-25364(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f30.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,68(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// addi r28,r11,18572
	r28.s64 = r11.s64 + 18572;
	// bne cr6,0x82380a2c
	if (!cr6.eq) goto loc_82380A2C;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// stfs f31,68(r30)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// bl 0x823804c0
	sub_823804C0(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82380a20
	if (cr0.eq) goto loc_82380A20;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82380A20:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r28,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r28.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82380A2C:
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// blt cr6,0x82380b30
	if (cr6.lt) goto loc_82380B30;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82380860
	sub_82380860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bgt 0x82380a5c
	if (cr0.gt) goto loc_82380A5C;
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82380A5C:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82380610
	sub_82380610(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r3,r31,104
	ctx.r3.s64 = r31.s64 + 104;
	// stw r11,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r11.u32);
	// bl 0x82380510
	sub_82380510(ctx, base);
	// addi r29,r30,28
	r29.s64 = r30.s64 + 28;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82380aa8
	if (cr0.eq) goto loc_82380AA8;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82380AA8:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// stw r28,104(r31)
	PPC_STORE_U32(r31.u32 + 104, r28.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380b2c
	if (cr0.eq) goto loc_82380B2C;
	// lfs f0,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	f0.f64 = double(temp.f32);
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// lfs f13,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	f0.f64 = double(float(f0.f64 + ctx.f13.f64));
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// bl 0x823804c0
	sub_823804C0(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,112
	ctx.r3.s64 = r31.s64 + 112;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82380b1c
	if (cr0.eq) goto loc_82380B1C;
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_82380B1C:
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 124);
	// stw r28,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r28.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
	// b 0x82380b30
	goto loc_82380B30;
loc_82380B2C:
	// stfs f30,68(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
loc_82380B30:
	// lwz r11,52(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// beq 0x82380b74
	if (cr0.eq) goto loc_82380B74;
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 32);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// beq cr6,0x82380b74
	if (cr6.eq) goto loc_82380B74;
	// lfs f13,68(r30)
	temp.u32 = PPC_LOAD_U32(r30.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f31,f13
	ctx.f13.f64 = double(float(f31.f64 - ctx.f13.f64));
	// fdivs f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 / f0.f64));
	// b 0x82380b8c
	goto loc_82380B8C;
loc_82380B74:
	// stfs f13,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// b 0x82380b90
	goto loc_82380B90;
loc_82380B7C:
	// lfs f0,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f0,68(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
loc_82380B8C:
	// stfs f0,64(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
loc_82380B90:
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82380BA0"))) PPC_WEAK_FUNC(sub_82380BA0);
PPC_FUNC_IMPL(__imp__sub_82380BA0) {
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
	// bl 0x82273620
	sub_82273620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380BC8"))) PPC_WEAK_FUNC(sub_82380BC8);
PPC_FUNC_IMPL(__imp__sub_82380BC8) {
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
	// bl 0x82273620
	sub_82273620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380BF0"))) PPC_WEAK_FUNC(sub_82380BF0);
PPC_FUNC_IMPL(__imp__sub_82380BF0) {
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
	// addi r3,r31,120
	ctx.r3.s64 = r31.s64 + 120;
	// bl 0x82273620
	sub_82273620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380C18"))) PPC_WEAK_FUNC(sub_82380C18);
PPC_FUNC_IMPL(__imp__sub_82380C18) {
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
	// mr r31,r7
	r31.u64 = ctx.r7.u64;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r5.u32);
	// stw r6,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r6.u32);
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmpw cr6,r11,r5
	cr6.compare<int32_t>(r11.s32, ctx.r5.s32, xer);
	// beq cr6,0x82380c78
	if (cr6.eq) goto loc_82380C78;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// li r28,1
	r28.s64 = 1;
	// bgt cr6,0x82380c54
	if (cr6.gt) goto loc_82380C54;
	// li r28,-1
	r28.s64 = -1;
loc_82380C54:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82380860
	sub_82380860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt 0x82380c70
	if (cr0.gt) goto loc_82380C70;
	// li r11,-1
	r11.s64 = -1;
loc_82380C70:
	// cmpw cr6,r28,r11
	cr6.compare<int32_t>(r28.s32, r11.s32, xer);
	// bne cr6,0x82380da8
	if (!cr6.eq) goto loc_82380DA8;
loc_82380C78:
	// lbz r11,24(r29)
	r11.u64 = PPC_LOAD_U8(r29.u32 + 24);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380ce8
	if (cr0.eq) goto loc_82380CE8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x82380610
	sub_82380610(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82380860
	sub_82380860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82380ce0
	if (cr0.eq) goto loc_82380CE0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r30,1
	r30.s64 = 1;
	// bgt cr6,0x82380cbc
	if (cr6.gt) goto loc_82380CBC;
	// li r30,-1
	r30.s64 = -1;
loc_82380CBC:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82380860
	sub_82380860(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bgt 0x82380cd8
	if (cr0.gt) goto loc_82380CD8;
	// li r11,-1
	r11.s64 = -1;
loc_82380CD8:
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// bne cr6,0x82380da8
	if (!cr6.eq) goto loc_82380DA8;
loc_82380CE0:
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// b 0x82380da0
	goto loc_82380DA0;
loc_82380CE8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// addi r30,r11,-1
	r30.s64 = r11.s64 + -1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// bl 0x823805c0
	sub_823805C0(ctx, base);
	// addi r11,r3,-1
	r11.s64 = ctx.r3.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// cmpw cr6,r30,r11
	cr6.compare<int32_t>(r30.s32, r11.s32, xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// blt cr6,0x82380d1c
	if (cr6.lt) goto loc_82380D1C;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
loc_82380D1C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82380d3c
	if (!cr0.lt) goto loc_82380D3C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// b 0x82380d50
	goto loc_82380D50;
loc_82380D3C:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82380da8
	if (!cr6.gt) goto loc_82380DA8;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82380D50:
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82380d6c
	if (!cr0.lt) goto loc_82380D6C;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// b 0x82380d78
	goto loc_82380D78;
loc_82380D6C:
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// ble cr6,0x82380d78
	if (!cr6.gt) goto loc_82380D78;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
loc_82380D78:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823806f0
	sub_823806F0(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82380d94
	if (!cr0.lt) goto loc_82380D94;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// b 0x82380da0
	goto loc_82380DA0;
loc_82380D94:
	// cmpw cr6,r11,r3
	cr6.compare<int32_t>(r11.s32, ctx.r3.s32, xer);
	// ble cr6,0x82380da0
	if (!cr6.gt) goto loc_82380DA0;
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
loc_82380DA0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82380dac
	goto loc_82380DAC;
loc_82380DA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82380DAC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82380DB4"))) PPC_WEAK_FUNC(sub_82380DB4);
PPC_FUNC_IMPL(__imp__sub_82380DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380DB8"))) PPC_WEAK_FUNC(sub_82380DB8);
PPC_FUNC_IMPL(__imp__sub_82380DB8) {
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
loc_82380DC8:
	// srawi r10,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	ctx.r10.s64 = r11.s32 >> 1;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r8,r7
	cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// blt cr6,0x82380de8
	if (cr6.lt) goto loc_82380DE8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82380DE8:
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82380e00
	if (cr0.eq) goto loc_82380E00;
	// subf r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	// addi r3,r9,4
	ctx.r3.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// b 0x82380e04
	goto loc_82380E04;
loc_82380E00:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82380E04:
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bgt cr6,0x82380dc8
	if (cr6.gt) goto loc_82380DC8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82380E10"))) PPC_WEAK_FUNC(sub_82380E10);
PPC_FUNC_IMPL(__imp__sub_82380E10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// lbz r11,24(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380e40
	if (cr0.eq) goto loc_82380E40;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// b 0x82380e44
	goto loc_82380E44;
loc_82380E40:
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
loc_82380E44:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82380610
	sub_82380610(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82380698
	sub_82380698(ctx, base);
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

__attribute__((alias("__imp__sub_82380E74"))) PPC_WEAK_FUNC(sub_82380E74);
PPC_FUNC_IMPL(__imp__sub_82380E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82380E78"))) PPC_WEAK_FUNC(sub_82380E78);
PPC_FUNC_IMPL(__imp__sub_82380E78) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,11664(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11664);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82380c18
	sub_82380C18(ctx, base);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380f5c
	if (cr0.eq) goto loc_82380F5C;
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82380EBC:
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380edc
	if (cr0.eq) goto loc_82380EDC;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// b 0x82380ee0
	goto loc_82380EE0;
loc_82380EDC:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82380EE0:
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380698
	sub_82380698(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82380f54
	if (!cr0.eq) goto loc_82380F54;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x823810a0
	if (cr6.eq) goto loc_823810A0;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bgt cr6,0x82380f30
	if (cr6.gt) goto loc_82380F30;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82380F30:
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380c18
	sub_82380C18(ctx, base);
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(r28.s32, r29.s32, xer);
	// bne cr6,0x82380ebc
	if (!cr6.eq) goto loc_82380EBC;
	// b 0x823810a0
	goto loc_823810A0;
loc_82380F54:
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// b 0x823810a0
	goto loc_823810A0;
loc_82380F5C:
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82380F68:
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380f84
	if (cr0.eq) goto loc_82380F84;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// b 0x82380f88
	goto loc_82380F88;
loc_82380F84:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82380F88:
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380698
	sub_82380698(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8238104c
	if (!cr0.eq) goto loc_8238104C;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823810a0
	if (!cr0.eq) goto loc_823810A0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// li r25,1
	r25.s64 = 1;
	// bgt cr6,0x82380fd0
	if (cr6.gt) goto loc_82380FD0;
	// li r25,-1
	r25.s64 = -1;
loc_82380FD0:
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380c18
	sub_82380C18(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// bne cr6,0x82381024
	if (!cr6.eq) goto loc_82381024;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823806f0
	sub_823806F0(ctx, base);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// bne cr6,0x82381040
	if (!cr6.eq) goto loc_82381040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380740
	sub_82380740(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// bne cr6,0x82381040
	if (!cr6.eq) goto loc_82381040;
	// li r11,1
	r11.s64 = 1;
	// b 0x82381044
	goto loc_82381044;
loc_82381024:
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82381040
	if (!cr6.eq) goto loc_82381040;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82381044
	if (cr6.eq) goto loc_82381044;
loc_82381040:
	// li r11,0
	r11.s64 = 0;
loc_82381044:
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// b 0x82380f68
	goto loc_82380F68;
loc_8238104C:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r28.u32);
	// stw r27,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r27.u32);
	// bne 0x823810a0
	if (!cr0.eq) goto loc_823810A0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82380510
	sub_82380510(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8238108c
	if (cr0.eq) goto loc_8238108C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8238108C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_823810A0:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_82380E80"))) PPC_WEAK_FUNC(sub_82380E80);
PPC_FUNC_IMPL(__imp__sub_82380E80) {
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
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// lwz r6,60(r30)
	ctx.r6.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// lwz r5,56(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// bl 0x82380c18
	sub_82380C18(ctx, base);
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380f5c
	if (cr0.eq) goto loc_82380F5C;
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82380EBC:
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380edc
	if (cr0.eq) goto loc_82380EDC;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// b 0x82380ee0
	goto loc_82380EE0;
loc_82380EDC:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82380EE0:
	// add r4,r11,r29
	ctx.r4.u64 = r11.u64 + r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380698
	sub_82380698(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82380f54
	if (!cr0.eq) goto loc_82380F54;
	// lwz r11,56(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// beq cr6,0x823810a0
	if (cr6.eq) goto loc_823810A0;
	// mr r28,r29
	r28.u64 = r29.u64;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bgt cr6,0x82380f30
	if (cr6.gt) goto loc_82380F30;
	// li r4,-1
	ctx.r4.s64 = -1;
loc_82380F30:
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380c18
	sub_82380C18(ctx, base);
	// lwz r29,80(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpw cr6,r28,r29
	cr6.compare<int32_t>(r28.s32, r29.s32, xer);
	// bne cr6,0x82380ebc
	if (!cr6.eq) goto loc_82380EBC;
	// b 0x823810a0
	goto loc_823810A0;
loc_82380F54:
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// b 0x823810a0
	goto loc_823810A0;
loc_82380F5C:
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// li r29,0
	r29.s64 = 0;
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
loc_82380F68:
	// lbz r11,24(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 24);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82380f84
	if (cr0.eq) goto loc_82380F84;
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// b 0x82380f88
	goto loc_82380F88;
loc_82380F84:
	// mr r11,r27
	r11.u64 = r27.u64;
loc_82380F88:
	// add r4,r11,r28
	ctx.r4.u64 = r11.u64 + r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380698
	sub_82380698(ctx, base);
	// lwz r11,36(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,28(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8238104c
	if (!cr0.eq) goto loc_8238104C;
	// clrlwi. r11,r29,24
	r11.u64 = r29.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823810a0
	if (!cr0.eq) goto loc_823810A0;
	// cmpwi cr6,r25,0
	cr6.compare<int32_t>(r25.s32, 0, xer);
	// li r25,1
	r25.s64 = 1;
	// bgt cr6,0x82380fd0
	if (cr6.gt) goto loc_82380FD0;
	// li r25,-1
	r25.s64 = -1;
loc_82380FD0:
	// addi r7,r31,80
	ctx.r7.s64 = r31.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380c18
	sub_82380C18(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmpwi cr6,r25,1
	cr6.compare<int32_t>(r25.s32, 1, xer);
	// bne cr6,0x82381024
	if (!cr6.eq) goto loc_82381024;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x823806f0
	sub_823806F0(ctx, base);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpw cr6,r28,r3
	cr6.compare<int32_t>(r28.s32, ctx.r3.s32, xer);
	// bne cr6,0x82381040
	if (!cr6.eq) goto loc_82381040;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82380740
	sub_82380740(ctx, base);
	// cmpw cr6,r27,r3
	cr6.compare<int32_t>(r27.s32, ctx.r3.s32, xer);
	// bne cr6,0x82381040
	if (!cr6.eq) goto loc_82381040;
	// li r11,1
	r11.s64 = 1;
	// b 0x82381044
	goto loc_82381044;
loc_82381024:
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// lwz r27,84(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82381040
	if (!cr6.eq) goto loc_82381040;
	// cmpwi cr6,r27,0
	cr6.compare<int32_t>(r27.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82381044
	if (cr6.eq) goto loc_82381044;
loc_82381040:
	// li r11,0
	r11.s64 = 0;
loc_82381044:
	// clrlwi r29,r11,24
	r29.u64 = r11.u32 & 0xFF;
	// b 0x82380f68
	goto loc_82380F68;
loc_8238104C:
	// clrlwi. r11,r26,24
	r11.u64 = r26.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r28.u32);
	// stw r27,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r27.u32);
	// bne 0x823810a0
	if (!cr0.eq) goto loc_823810A0;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82380510
	sub_82380510(ctx, base);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r30,28
	ctx.r4.s64 = r30.s64 + 28;
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x823267b8
	sub_823267B8(ctx, base);
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm. r11,r11,0,27,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8238108c
	if (cr0.eq) goto loc_8238108C;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_8238108C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,18572
	r11.s64 = r11.s64 + 18572;
	// stw r11,96(r31)
	PPC_STORE_U32(r31.u32 + 96, r11.u32);
	// bl 0x82120818
	sub_82120818(ctx, base);
loc_823810A0:
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823810A8"))) PPC_WEAK_FUNC(sub_823810A8);
PPC_FUNC_IMPL(__imp__sub_823810A8) {
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
	// bl 0x82273620
	sub_82273620(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823810D0"))) PPC_WEAK_FUNC(sub_823810D0);
PPC_FUNC_IMPL(__imp__sub_823810D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r4,r11,r4
	ctx.r4.s64 = int64_t(r11.s32) * int64_t(ctx.r4.s32);
	// b 0x82380e80
	sub_82380E80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823810DC"))) PPC_WEAK_FUNC(sub_823810DC);
PPC_FUNC_IMPL(__imp__sub_823810DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823810E0"))) PPC_WEAK_FUNC(sub_823810E0);
PPC_FUNC_IMPL(__imp__sub_823810E0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// stw r30,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r30.u32);
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x8218fdf8
	sub_8218FDF8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82380790
	sub_82380790(ctx, base);
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

__attribute__((alias("__imp__sub_8238114C"))) PPC_WEAK_FUNC(sub_8238114C);
PPC_FUNC_IMPL(__imp__sub_8238114C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381150"))) PPC_WEAK_FUNC(sub_82381150);
PPC_FUNC_IMPL(__imp__sub_82381150) {
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
	// lwz r16,11808(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11808);
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
	// li r29,0
	r29.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x823811a0
	if (cr6.eq) goto loc_823811A0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// addi r11,r11,11792
	r11.s64 = r11.s64 + 11792;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823811A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r10,r10,11732
	ctx.r10.s64 = ctx.r10.s64 + 11732;
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// lfs f0,22976(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22976);
	f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,-25364(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25364);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r10,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-76
	ctx.r9.s64 = ctx.r10.s64 + -76;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r9.u32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// stb r29,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r29.u8);
	// stw r7,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r7.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stfs f13,64(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// stfs f12,68(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82381158"))) PPC_WEAK_FUNC(sub_82381158);
PPC_FUNC_IMPL(__imp__sub_82381158) {
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r29,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r29.u32);
	// beq cr6,0x823811a0
	if (cr6.eq) goto loc_823811A0;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r3,r30,76
	ctx.r3.s64 = r30.s64 + 76;
	// addi r11,r11,11792
	r11.s64 = r11.s64 + 11792;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
loc_823811A0:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821bb3f0
	sub_821BB3F0(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r7,5
	ctx.r7.s64 = 5;
	// addi r10,r10,11732
	ctx.r10.s64 = ctx.r10.s64 + 11732;
	// addi r11,r30,40
	r11.s64 = r30.s64 + 40;
	// lfs f0,22976(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 22976);
	f0.f64 = double(temp.f32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,2480(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f12,-25364(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25364);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stwx r10,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,-76
	ctx.r9.s64 = ctx.r10.s64 + -76;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + r30.u64;
	// stw r9,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r9.u32);
	// stfs f0,32(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 32, temp.u32);
	// stb r29,24(r30)
	PPC_STORE_U8(r30.u32 + 24, r29.u8);
	// stw r7,28(r30)
	PPC_STORE_U32(r30.u32 + 28, ctx.r7.u32);
	// stw r28,36(r30)
	PPC_STORE_U32(r30.u32 + 36, r28.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r29,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r29.u32);
	// stfs f13,64(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r30.u32 + 64, temp.u32);
	// stfs f12,68(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r30.u32 + 68, temp.u32);
	// stw r29,52(r30)
	PPC_STORE_U32(r30.u32 + 52, r29.u32);
	// stw r29,56(r30)
	PPC_STORE_U32(r30.u32 + 56, r29.u32);
	// stw r29,60(r30)
	PPC_STORE_U32(r30.u32 + 60, r29.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82381230"))) PPC_WEAK_FUNC(sub_82381230);
PPC_FUNC_IMPL(__imp__sub_82381230) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82381264
	if (cr0.eq) goto loc_82381264;
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// lwz r11,148(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 148);
	// addi r3,r11,76
	ctx.r3.s64 = r11.s64 + 76;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_82381264:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381274"))) PPC_WEAK_FUNC(sub_82381274);
PPC_FUNC_IMPL(__imp__sub_82381274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381278"))) PPC_WEAK_FUNC(sub_82381278);
PPC_FUNC_IMPL(__imp__sub_82381278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-48
	ctx.r4.s64 = ctx.r4.s64 + -48;
	// b 0x823267b8
	sub_823267B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82381288"))) PPC_WEAK_FUNC(sub_82381288);
PPC_FUNC_IMPL(__imp__sub_82381288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x823812a8
	sub_823812A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82381294"))) PPC_WEAK_FUNC(sub_82381294);
PPC_FUNC_IMPL(__imp__sub_82381294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381298"))) PPC_WEAK_FUNC(sub_82381298);
PPC_FUNC_IMPL(__imp__sub_82381298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x82325ac8
	sub_82325AC8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823812A8"))) PPC_WEAK_FUNC(sub_823812A8);
PPC_FUNC_IMPL(__imp__sub_823812A8) {
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
	// addi r30,r3,-76
	r30.s64 = ctx.r3.s64 + -76;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,76
	r31.s64 = r30.s64 + 76;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x8237bda0
	sub_8237BDA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823812e0
	if (cr0.eq) goto loc_823812E0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823812E0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823812EC"))) PPC_WEAK_FUNC(sub_823812EC);
PPC_FUNC_IMPL(__imp__sub_823812EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823812F0"))) PPC_WEAK_FUNC(sub_823812F0);
PPC_FUNC_IMPL(__imp__sub_823812F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,11860
	r11.s64 = r11.s64 + 11860;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381300"))) PPC_WEAK_FUNC(sub_82381300);
PPC_FUNC_IMPL(__imp__sub_82381300) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,11860
	r11.s64 = r11.s64 + 11860;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x8238132c
	if (cr0.eq) goto loc_8238132C;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_8238132C:
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

__attribute__((alias("__imp__sub_82381344"))) PPC_WEAK_FUNC(sub_82381344);
PPC_FUNC_IMPL(__imp__sub_82381344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381348"))) PPC_WEAK_FUNC(sub_82381348);
PPC_FUNC_IMPL(__imp__sub_82381348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 192, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381350"))) PPC_WEAK_FUNC(sub_82381350);
PPC_FUNC_IMPL(__imp__sub_82381350) {
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
	// beq 0x82381390
	if (cr0.eq) goto loc_82381390;
	// lis r11,-32127
	r11.s64 = -2105475072;
	// addi r4,r11,17100
	ctx.r4.s64 = r11.s64 + 17100;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// addi r3,r11,-26868
	ctx.r3.s64 = r11.s64 + -26868;
	// bl 0x8239bd70
	sub_8239BD70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82381398
	goto loc_82381398;
loc_82381390:
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r4,-28964(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + -28964);
loc_82381398:
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

__attribute__((alias("__imp__sub_823813B4"))) PPC_WEAK_FUNC(sub_823813B4);
PPC_FUNC_IMPL(__imp__sub_823813B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823813B8"))) PPC_WEAK_FUNC(sub_823813B8);
PPC_FUNC_IMPL(__imp__sub_823813B8) {
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
	// b 0x823813f8
	goto loc_823813F8;
loc_823813D4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823813f4
	if (cr0.eq) goto loc_823813F4;
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
loc_823813F4:
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_823813F8:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x823813d4
	if (!cr6.eq) goto loc_823813D4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8238140C"))) PPC_WEAK_FUNC(sub_8238140C);
PPC_FUNC_IMPL(__imp__sub_8238140C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381410"))) PPC_WEAK_FUNC(sub_82381410);
PPC_FUNC_IMPL(__imp__sub_82381410) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,11920(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11920);
	// mflr r12
	// bl 0x8239bcf8
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, f31.u64);
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,11888
	r11.s64 = r11.s64 + 11888;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x821425d0
	sub_821425D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x8212e060
	sub_8212E060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8238147c
	if (!cr0.eq) goto loc_8238147C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8238148c
	goto loc_8238148C;
loc_8238147C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8238148C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,18972(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// bl 0x821d1710
	sub_821D1710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82381418"))) PPC_WEAK_FUNC(sub_82381418);
PPC_FUNC_IMPL(__imp__sub_82381418) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,11888
	r11.s64 = r11.s64 + 11888;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x821425d0
	sub_821425D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// stfs f31,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r30.u32 + 8, temp.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x8212e060
	sub_8212E060(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x8238147c
	if (!cr0.eq) goto loc_8238147C;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8238148c
	goto loc_8238148C;
loc_8238147C:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_8238148C:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32140
	r11.s64 = -2106327040;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r4,18972(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 18972);
	// bl 0x821d1710
	sub_821D1710(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823814D4"))) PPC_WEAK_FUNC(sub_823814D4);
PPC_FUNC_IMPL(__imp__sub_823814D4) {
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
	// bl 0x823812f0
	sub_823812F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823814FC"))) PPC_WEAK_FUNC(sub_823814FC);
PPC_FUNC_IMPL(__imp__sub_823814FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381500"))) PPC_WEAK_FUNC(sub_82381500);
PPC_FUNC_IMPL(__imp__sub_82381500) {
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
	// lwz r16,11976(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 11976);
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,11888
	r11.s64 = r11.s64 + 11888;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82381564
	if (cr0.eq) goto loc_82381564;
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
loc_82381564:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,11860
	r11.s64 = r11.s64 + 11860;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82381508"))) PPC_WEAK_FUNC(sub_82381508);
PPC_FUNC_IMPL(__imp__sub_82381508) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,11888
	r11.s64 = r11.s64 + 11888;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82381564
	if (cr0.eq) goto loc_82381564;
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
loc_82381564:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,11860
	r11.s64 = r11.s64 + 11860;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82381588"))) PPC_WEAK_FUNC(sub_82381588);
PPC_FUNC_IMPL(__imp__sub_82381588) {
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
	// bl 0x823812f0
	sub_823812F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823815B0"))) PPC_WEAK_FUNC(sub_823815B0);
PPC_FUNC_IMPL(__imp__sub_823815B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,312(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 312);
	// b 0x821c5f60
	sub_821C5F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823815BC"))) PPC_WEAK_FUNC(sub_823815BC);
PPC_FUNC_IMPL(__imp__sub_823815BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823815C0"))) PPC_WEAK_FUNC(sub_823815C0);
PPC_FUNC_IMPL(__imp__sub_823815C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// bl 0x821d1710
	sub_821D1710(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	cr6.compare(f0.f64, f31.f64);
	// ble cr6,0x823816a8
	if (!cr6.gt) goto loc_823816A8;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
	// stfs f30,80(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// bl 0x821cff50
	sub_821CFF50(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 8);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x82381688
	if (!cr6.gt) goto loc_82381688;
	// fdivs f0,f0,f1
	f0.f64 = double(float(f0.f64 / ctx.f1.f64));
	// stfs f31,96(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f30,100(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f31,104(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stfs f31,112(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f31,116(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f30,120(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmuls f13,f0,f31
	ctx.f13.f64 = double(float(f0.f64 * f31.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
loc_82381688:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r31,r11,36
	r31.s64 = r11.s64 + 36;
	// addi r3,r31,28
	ctx.r3.s64 = r31.s64 + 28;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821af800
	sub_821AF800(ctx, base);
loc_823816A8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// lfd f30,-32(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823816C4"))) PPC_WEAK_FUNC(sub_823816C4);
PPC_FUNC_IMPL(__imp__sub_823816C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823816C8"))) PPC_WEAK_FUNC(sub_823816C8);
PPC_FUNC_IMPL(__imp__sub_823816C8) {
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
	// bl 0x82381508
	sub_82381508(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823816f8
	if (cr0.eq) goto loc_823816F8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_823816F8:
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

__attribute__((alias("__imp__sub_82381714"))) PPC_WEAK_FUNC(sub_82381714);
PPC_FUNC_IMPL(__imp__sub_82381714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381718"))) PPC_WEAK_FUNC(sub_82381718);
PPC_FUNC_IMPL(__imp__sub_82381718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,240(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 240);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 48);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381728"))) PPC_WEAK_FUNC(sub_82381728);
PPC_FUNC_IMPL(__imp__sub_82381728) {
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
	// lwz r16,12064(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12064);
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,12028
	r11.s64 = r11.s64 + 12028;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82381788
	if (!cr0.eq) goto loc_82381788;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82381798
	goto loc_82381798;
loc_82381788:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82381798:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82381730"))) PPC_WEAK_FUNC(sub_82381730);
PPC_FUNC_IMPL(__imp__sub_82381730) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,12028
	r11.s64 = r11.s64 + 12028;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// bl 0x82140908
	sub_82140908(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// bl 0x821412f0
	sub_821412F0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82381788
	if (!cr0.eq) goto loc_82381788;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82381798
	goto loc_82381798;
loc_82381788:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r4,r11,4
	ctx.r4.s64 = r11.s64 + 4;
loc_82381798:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = r11.s64 + 4;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823817CC"))) PPC_WEAK_FUNC(sub_823817CC);
PPC_FUNC_IMPL(__imp__sub_823817CC) {
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
	// bl 0x823812f0
	sub_823812F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823817F4"))) PPC_WEAK_FUNC(sub_823817F4);
PPC_FUNC_IMPL(__imp__sub_823817F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823817F8"))) PPC_WEAK_FUNC(sub_823817F8);
PPC_FUNC_IMPL(__imp__sub_823817F8) {
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
	// lwz r16,12120(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12120);
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,12028
	r11.s64 = r11.s64 + 12028;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8238185c
	if (cr0.eq) goto loc_8238185C;
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
loc_8238185C:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,11860
	r11.s64 = r11.s64 + 11860;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82381800"))) PPC_WEAK_FUNC(sub_82381800);
PPC_FUNC_IMPL(__imp__sub_82381800) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,12028
	r11.s64 = r11.s64 + 12028;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8238185c
	if (cr0.eq) goto loc_8238185C;
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
loc_8238185C:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,11860
	r11.s64 = r11.s64 + 11860;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82381880"))) PPC_WEAK_FUNC(sub_82381880);
PPC_FUNC_IMPL(__imp__sub_82381880) {
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
	// bl 0x823812f0
	sub_823812F0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823818A8"))) PPC_WEAK_FUNC(sub_823818A8);
PPC_FUNC_IMPL(__imp__sub_823818A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// addi r3,r11,36
	ctx.r3.s64 = r11.s64 + 36;
	// bnelr 
	if (!cr0.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823818C0"))) PPC_WEAK_FUNC(sub_823818C0);
PPC_FUNC_IMPL(__imp__sub_823818C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x821c5f60
	sub_821C5F60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823818C8"))) PPC_WEAK_FUNC(sub_823818C8);
PPC_FUNC_IMPL(__imp__sub_823818C8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x821bd9e8
	sub_821BD9E8(ctx, base);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
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

__attribute__((alias("__imp__sub_8238193C"))) PPC_WEAK_FUNC(sub_8238193C);
PPC_FUNC_IMPL(__imp__sub_8238193C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381940"))) PPC_WEAK_FUNC(sub_82381940);
PPC_FUNC_IMPL(__imp__sub_82381940) {
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
	// bl 0x82381800
	sub_82381800(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82381970
	if (cr0.eq) goto loc_82381970;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82381970:
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

__attribute__((alias("__imp__sub_8238198C"))) PPC_WEAK_FUNC(sub_8238198C);
PPC_FUNC_IMPL(__imp__sub_8238198C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381990"))) PPC_WEAK_FUNC(sub_82381990);
PPC_FUNC_IMPL(__imp__sub_82381990) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,180
	r29.s64 = ctx.r3.s64 + 180;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r30,0
	r30.s64 = 0;
	// lwz r31,0(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// b 0x823819e4
	goto loc_823819E4;
loc_823819B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_823819E4:
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x823819b8
	if (!cr0.eq) goto loc_823819B8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_82381A08"))) PPC_WEAK_FUNC(sub_82381A08);
PPC_FUNC_IMPL(__imp__sub_82381A08) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bce4
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// addi r23,r29,180
	r23.s64 = r29.s64 + 180;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// lwz r27,0(r23)
	r27.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82381b80
	if (cr0.eq) goto loc_82381B80;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r28,0
	r28.s64 = 0;
	// lfs f30,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f30.f64 = double(temp.f32);
loc_82381A5C:
	// lwz r24,0(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f30,84(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fmr f31,f30
	f31.f64 = f30.f64;
	// stfs f30,88(r1)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82381b14
	if (cr0.eq) goto loc_82381B14;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 52);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r3,r28,r10
	ctx.r3.u64 = r28.u64 + ctx.r10.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lfs f31,60(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 60);
	f31.f64 = double(temp.f32);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// bl 0x82319530
	sub_82319530(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x823199b8
	sub_823199B8(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// stfs f13,52(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// ori r10,r11,1
	ctx.r10.u64 = r11.u64 | 1;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
	// lfs f0,192(r29)
	temp.u32 = PPC_LOAD_U32(r29.u32 + 192);
	f0.f64 = double(temp.f32);
	// stfs f0,60(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// stw r10,260(r31)
	PPC_STORE_U32(r31.u32 + 260, ctx.r10.u32);
loc_82381B14:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// bl 0x821b2800
	sub_821B2800(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82381b5c
	if (cr6.eq) goto loc_82381B5C;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 48, temp.u32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// stfs f31,60(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 60, temp.u32);
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stw r11,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r11.u32);
loc_82381B5C:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r27,r27,4
	r27.s64 = r27.s64 + 4;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// subf r11,r27,r11
	r11.s64 = r11.s64 - r27.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82381a5c
	if (!cr0.eq) goto loc_82381A5C;
loc_82381B80:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_82381B90"))) PPC_WEAK_FUNC(sub_82381B90);
PPC_FUNC_IMPL(__imp__sub_82381B90) {
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
	// b 0x82381bc0
	goto loc_82381BC0;
loc_82381BB0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r31,0(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82355020
	sub_82355020(ctx, base);
loc_82381BC0:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82381bb0
	if (!cr6.eq) goto loc_82381BB0;
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

__attribute__((alias("__imp__sub_82381BE8"))) PPC_WEAK_FUNC(sub_82381BE8);
PPC_FUNC_IMPL(__imp__sub_82381BE8) {
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
	// blt cr6,0x82381c30
	if (cr6.lt) goto loc_82381C30;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
loc_82381C30:
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
	// bl 0x82381350
	sub_82381350(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// subf. r30,r4,r26
	r30.s64 = r26.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82381c68
	if (cr0.eq) goto loc_82381C68;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + r30.u64;
loc_82381C68:
	// mr r11,r28
	r11.u64 = r28.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82381c88
	if (cr6.eq) goto loc_82381C88;
loc_82381C74:
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
	// bne 0x82381c74
	if (!cr0.eq) goto loc_82381C74;
loc_82381C88:
	// clrlwi. r11,r23,24
	r11.u64 = r23.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// bne 0x82381cb0
	if (!cr0.eq) goto loc_82381CB0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// subf. r30,r26,r11
	r30.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82381cb0
	if (cr0.eq) goto loc_82381CB0;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r28,r3,r30
	r28.u64 = ctx.r3.u64 + r30.u64;
loc_82381CB0:
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

__attribute__((alias("__imp__sub_82381CE4"))) PPC_WEAK_FUNC(sub_82381CE4);
PPC_FUNC_IMPL(__imp__sub_82381CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381CE8"))) PPC_WEAK_FUNC(sub_82381CE8);
PPC_FUNC_IMPL(__imp__sub_82381CE8) {
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
	// beq cr6,0x82381d28
	if (cr6.eq) goto loc_82381D28;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82381d18
	if (cr0.eq) goto loc_82381D18;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
loc_82381D18:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// b 0x82381d3c
	goto loc_82381D3C;
loc_82381D28:
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// bl 0x82381be8
	sub_82381BE8(ctx, base);
loc_82381D3C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82381D4C"))) PPC_WEAK_FUNC(sub_82381D4C);
PPC_FUNC_IMPL(__imp__sub_82381D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381D50"))) PPC_WEAK_FUNC(sub_82381D50);
PPC_FUNC_IMPL(__imp__sub_82381D50) {
	PPC_FUNC_PROLOGUE();
	// b 0x82381b90
	sub_82381B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82381D54"))) PPC_WEAK_FUNC(sub_82381D54);
PPC_FUNC_IMPL(__imp__sub_82381D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381D58"))) PPC_WEAK_FUNC(sub_82381D58);
PPC_FUNC_IMPL(__imp__sub_82381D58) {
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
	// beq cr6,0x82381da0
	if (cr6.eq) goto loc_82381DA0;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf. r31,r4,r11
	r31.s64 = r11.s64 - ctx.r4.s64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82381d98
	if (cr0.eq) goto loc_82381D98;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239d800
	sub_8239D800(ctx, base);
	// add r11,r3,r31
	r11.u64 = ctx.r3.u64 + r31.u64;
	// b 0x82381d9c
	goto loc_82381D9C;
loc_82381D98:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82381D9C:
	// stw r11,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r11.u32);
loc_82381DA0:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82381DAC"))) PPC_WEAK_FUNC(sub_82381DAC);
PPC_FUNC_IMPL(__imp__sub_82381DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82381DB0"))) PPC_WEAK_FUNC(sub_82381DB0);
PPC_FUNC_IMPL(__imp__sub_82381DB0) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,12328(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12328);
	// mflr r12
	// bl 0x8239bcd0
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// beq cr6,0x82381e40
	if (cr6.eq) goto loc_82381E40;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,12272
	r11.s64 = r11.s64 + 12272;
	// addi r10,r10,12264
	ctx.r10.s64 = ctx.r10.s64 + 12264;
	// addi r3,r30,200
	ctx.r3.s64 = r30.s64 + 200;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,244
	r11.s64 = r30.s64 + 244;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
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
loc_82381E40:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,12260
	r11.s64 = r11.s64 + 12260;
	// addi r10,r10,12196
	ctx.r10.s64 = ctx.r10.s64 + 12196;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r27,r30,180
	r27.s64 = r30.s64 + 180;
	// addi r9,r9,12184
	ctx.r9.s64 = ctx.r9.s64 + 12184;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-196
	ctx.r10.s64 = r11.s64 + -196;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-240
	ctx.r10.s64 = r11.s64 + -240;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
	// stw r25,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r25.u32);
	// stw r25,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r25.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r22,r25
	r22.u64 = r25.u64;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,192(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// lha r11,8(r24)
	r11.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82382044
	if (!cr0.gt) goto loc_82382044;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r19,r11,30544
	r19.s64 = r11.s64 + 30544;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r23,r25
	r23.u64 = r25.u64;
	// addi r20,r11,12168
	r20.s64 = r11.s64 + 12168;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// addi r21,r11,7116
	r21.s64 = r11.s64 + 7116;
loc_82381EF8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r3,r23,r11
	ctx.r3.u64 = r23.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82381fc0
	if (cr0.eq) goto loc_82381FC0;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82381f88
	if (cr0.eq) goto loc_82381F88;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_82381F88:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82381fb0
	if (cr0.eq) goto loc_82381FB0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82381418
	sub_82381418(ctx, base);
	// b 0x82381fb4
	goto loc_82381FB4;
loc_82381FB0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82381FB4:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// b 0x82382004
	goto loc_82382004;
loc_82381FC0:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82382004
	if (cr0.eq) goto loc_82382004;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82381ff8
	if (cr0.eq) goto loc_82381FF8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82381730
	sub_82381730(ctx, base);
	// b 0x82381ffc
	goto loc_82381FFC;
loc_82381FF8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82381FFC:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_82382004:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82381ce8
	sub_82381CE8(ctx, base);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// lha r11,8(r24)
	r11.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82381ef8
	if (cr6.lt) goto loc_82381EF8;
loc_82382044:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_82381DB8"))) PPC_WEAK_FUNC(sub_82381DB8);
PPC_FUNC_IMPL(__imp__sub_82381DB8) {
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
	PPCRegister f0{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// stfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -136, f30.u64);
	// stfd f31,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// addi r31,r1,-240
	r31.s64 = ctx.r1.s64 + -240;
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r25,0
	r25.s64 = 0;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// stw r25,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r25.u32);
	// beq cr6,0x82381e40
	if (cr6.eq) goto loc_82381E40;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,12272
	r11.s64 = r11.s64 + 12272;
	// addi r10,r10,12264
	ctx.r10.s64 = ctx.r10.s64 + 12264;
	// addi r3,r30,200
	ctx.r3.s64 = r30.s64 + 200;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// stw r10,248(r30)
	PPC_STORE_U32(r30.u32 + 248, ctx.r10.u32);
	// bl 0x823176f8
	sub_823176F8(ctx, base);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r11,r30,244
	r11.s64 = r30.s64 + 244;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r10,r10,5260
	ctx.r10.s64 = ctx.r10.s64 + 5260;
	// stw r8,88(r31)
	PPC_STORE_U32(r31.u32 + 88, ctx.r8.u32);
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
loc_82381E40:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x821b21a0
	sub_821B21A0(ctx, base);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r11,r11,12260
	r11.s64 = r11.s64 + 12260;
	// addi r10,r10,12196
	ctx.r10.s64 = ctx.r10.s64 + 12196;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r27,r30,180
	r27.s64 = r30.s64 + 180;
	// addi r9,r9,12184
	ctx.r9.s64 = ctx.r9.s64 + 12184;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-196
	ctx.r10.s64 = r11.s64 + -196;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-240
	ctx.r10.s64 = r11.s64 + -240;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// stw r25,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r25.u32);
	// stw r25,4(r27)
	PPC_STORE_U32(r27.u32 + 4, r25.u32);
	// stw r25,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r25.u32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// mr r22,r25
	r22.u64 = r25.u64;
	// lfs f0,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,192(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 192, temp.u32);
	// lha r11,8(r24)
	r11.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// ble 0x82382044
	if (!cr0.gt) goto loc_82382044;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r19,r11,30544
	r19.s64 = r11.s64 + 30544;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r23,r25
	r23.u64 = r25.u64;
	// addi r20,r11,12168
	r20.s64 = r11.s64 + 12168;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f30,2480(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2480);
	f30.f64 = double(temp.f32);
	// addi r21,r11,7116
	r21.s64 = r11.s64 + 7116;
loc_82381EF8:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// add r3,r23,r11
	ctx.r3.u64 = r23.u64 + r11.u64;
	// bl 0x823181a0
	sub_823181A0(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// bl 0x82318010
	sub_82318010(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180a8
	sub_823180A8(ctx, base);
	// mr r28,r25
	r28.u64 = r25.u64;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = r21.u64;
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82381fc0
	if (cr0.eq) goto loc_82381FC0;
	// addi r3,r31,92
	ctx.r3.s64 = r31.s64 + 92;
	// fmr f31,f30
	ctx.fpscr.disableFlushMode();
	f31.f64 = f30.f64;
	// mr r4,r20
	ctx.r4.u64 = r20.u64;
	// bl 0x82355da8
	sub_82355DA8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// bl 0x82319530
	sub_82319530(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82381f88
	if (cr0.eq) goto loc_82381F88;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// bl 0x823180e8
	sub_823180E8(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
loc_82381F88:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82381fb0
	if (cr0.eq) goto loc_82381FB0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82381418
	sub_82381418(ctx, base);
	// b 0x82381fb4
	goto loc_82381FB4;
loc_82381FB0:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82381FB4:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
	// b 0x82382004
	goto loc_82382004;
loc_82381FC0:
	// addi r3,r31,84
	ctx.r3.s64 = r31.s64 + 84;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// bl 0x82120690
	sub_82120690(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82382004
	if (cr0.eq) goto loc_82382004;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82354fd8
	sub_82354FD8(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(r31.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82381ff8
	if (cr0.eq) goto loc_82381FF8;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// bl 0x82381730
	sub_82381730(ctx, base);
	// b 0x82381ffc
	goto loc_82381FFC;
loc_82381FF8:
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
loc_82381FFC:
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// stw r28,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r28.u32);
loc_82382004:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x821b0628
	sub_821B0628(ctx, base);
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82381ce8
	sub_82381CE8(ctx, base);
	// addi r22,r22,1
	r22.s64 = r22.s64 + 1;
	// addi r23,r23,8
	r23.s64 = r23.s64 + 8;
	// lha r11,8(r24)
	r11.s64 = int16_t(PPC_LOAD_U16(r24.u32 + 8));
	// cmpw cr6,r22,r11
	cr6.compare<int32_t>(r22.s32, r11.s32, xer);
	// blt cr6,0x82381ef8
	if (cr6.lt) goto loc_82381EF8;
loc_82382044:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,240
	ctx.r1.s64 = r31.s64 + 240;
	// lfd f30,-136(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// lfd f31,-128(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_82382058"))) PPC_WEAK_FUNC(sub_82382058);
PPC_FUNC_IMPL(__imp__sub_82382058) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
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
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8238208c
	if (cr0.eq) goto loc_8238208C;
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r3,r11,200
	ctx.r3.s64 = r11.s64 + 200;
	// bl 0x82317760
	sub_82317760(ctx, base);
loc_8238208C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238209C"))) PPC_WEAK_FUNC(sub_8238209C);
PPC_FUNC_IMPL(__imp__sub_8238209C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
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

__attribute__((alias("__imp__sub_823820C8"))) PPC_WEAK_FUNC(sub_823820C8);
PPC_FUNC_IMPL(__imp__sub_823820C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
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
	// lwz r11,260(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 260);
	// addi r3,r11,180
	ctx.r3.s64 = r11.s64 + 180;
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

__attribute__((alias("__imp__sub_823820F4"))) PPC_WEAK_FUNC(sub_823820F4);
PPC_FUNC_IMPL(__imp__sub_823820F4) {
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

__attribute__((alias("__imp__sub_8238211C"))) PPC_WEAK_FUNC(sub_8238211C);
PPC_FUNC_IMPL(__imp__sub_8238211C) {
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

__attribute__((alias("__imp__sub_82382144"))) PPC_WEAK_FUNC(sub_82382144);
PPC_FUNC_IMPL(__imp__sub_82382144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382148"))) PPC_WEAK_FUNC(sub_82382148);
PPC_FUNC_IMPL(__imp__sub_82382148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821afb80
	sub_821AFB80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382158"))) PPC_WEAK_FUNC(sub_82382158);
PPC_FUNC_IMPL(__imp__sub_82382158) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// b 0x821b1158
	sub_821B1158(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382168"))) PPC_WEAK_FUNC(sub_82382168);
PPC_FUNC_IMPL(__imp__sub_82382168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821b0908
	sub_821B0908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382178"))) PPC_WEAK_FUNC(sub_82382178);
PPC_FUNC_IMPL(__imp__sub_82382178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821aec48
	sub_821AEC48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382188"))) PPC_WEAK_FUNC(sub_82382188);
PPC_FUNC_IMPL(__imp__sub_82382188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x821b0a28
	sub_821B0A28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382198"))) PPC_WEAK_FUNC(sub_82382198);
PPC_FUNC_IMPL(__imp__sub_82382198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// b 0x82382540
	sub_82382540(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823821A4"))) PPC_WEAK_FUNC(sub_823821A4);
PPC_FUNC_IMPL(__imp__sub_823821A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823821A8"))) PPC_WEAK_FUNC(sub_823821A8);
PPC_FUNC_IMPL(__imp__sub_823821A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	// subf r4,r11,r4
	ctx.r4.s64 = ctx.r4.s64 - r11.s64;
	// addi r4,r4,-16
	ctx.r4.s64 = ctx.r4.s64 + -16;
	// b 0x82151460
	sub_82151460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823821B8"))) PPC_WEAK_FUNC(sub_823821B8);
PPC_FUNC_IMPL(__imp__sub_823821B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,-4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - r11.s64;
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82151528
	sub_82151528(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823821C8"))) PPC_WEAK_FUNC(sub_823821C8);
PPC_FUNC_IMPL(__imp__sub_823821C8) {
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
	// lwz r16,12432(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12432);
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r25,0
	r25.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r29,r3,180
	r29.s64 = ctx.r3.s64 + 180;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82382280
	if (cr0.eq) goto loc_82382280;
loc_82382234:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x821b2c18
	sub_821B2C18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82382288
	if (!cr0.eq) goto loc_82382288;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82382234
	if (!cr0.eq) goto loc_82382234;
loc_82382280:
	// mr r30,r25
	r30.u64 = r25.u64;
	// b 0x8238228c
	goto loc_8238228C;
loc_82382288:
	// li r30,1
	r30.s64 = 1;
loc_8238228C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82381b90
	sub_82381B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823821D0"))) PPC_WEAK_FUNC(sub_823821D0);
PPC_FUNC_IMPL(__imp__sub_823821D0) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcec
	// addi r31,r1,-160
	r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r25,0
	r25.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// std r25,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r25.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r29,r3,180
	r29.s64 = ctx.r3.s64 + 180;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82382280
	if (cr0.eq) goto loc_82382280;
loc_82382234:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r6,r26
	ctx.r6.u64 = r26.u64;
	// bl 0x821b2c18
	sub_821B2C18(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82382288
	if (!cr0.eq) goto loc_82382288;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82382234
	if (!cr0.eq) goto loc_82382234;
loc_82382280:
	// mr r30,r25
	r30.u64 = r25.u64;
	// b 0x8238228c
	goto loc_8238228C;
loc_82382288:
	// li r30,1
	r30.s64 = 1;
loc_8238228C:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82381b90
	sub_82381B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,160
	ctx.r1.s64 = r31.s64 + 160;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_823822A0"))) PPC_WEAK_FUNC(sub_823822A0);
PPC_FUNC_IMPL(__imp__sub_823822A0) {
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82381d50
	sub_82381D50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823822C8"))) PPC_WEAK_FUNC(sub_823822C8);
PPC_FUNC_IMPL(__imp__sub_823822C8) {
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
	// lwz r16,12520(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12520);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-128
	r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r29,r3,180
	r29.s64 = ctx.r3.s64 + 180;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8238237c
	if (cr0.eq) goto loc_8238237C;
loc_8238232C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82382384
	if (!cr0.eq) goto loc_82382384;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8238232c
	if (!cr0.eq) goto loc_8238232C;
loc_8238237C:
	// li r30,-1
	r30.s64 = -1;
	// b 0x82382388
	goto loc_82382388;
loc_82382384:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82382388:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82381b90
	sub_82381B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823822D0"))) PPC_WEAK_FUNC(sub_823822D0);
PPC_FUNC_IMPL(__imp__sub_823822D0) {
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
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// std r10,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r10.u64);
	// ld r11,80(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 80);
	// std r11,80(r31)
	PPC_STORE_U64(r31.u32 + 80, r11.u64);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// addi r11,r31,80
	r11.s64 = r31.s64 + 80;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// addi r29,r3,180
	r29.s64 = ctx.r3.s64 + 180;
	// lwz r30,0(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x8238237c
	if (cr0.eq) goto loc_8238237C;
loc_8238232C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r11,28(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82382384
	if (!cr0.eq) goto loc_82382384;
	// lwz r11,4(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8238232c
	if (!cr0.eq) goto loc_8238232C;
loc_8238237C:
	// li r30,-1
	r30.s64 = -1;
	// b 0x82382388
	goto loc_82382388;
loc_82382384:
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82382388:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82381b90
	sub_82381B90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8238239C"))) PPC_WEAK_FUNC(sub_8238239C);
PPC_FUNC_IMPL(__imp__sub_8238239C) {
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
	// bl 0x82381d50
	sub_82381D50(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823823C4"))) PPC_WEAK_FUNC(sub_823823C4);
PPC_FUNC_IMPL(__imp__sub_823823C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823823C8"))) PPC_WEAK_FUNC(sub_823823C8);
PPC_FUNC_IMPL(__imp__sub_823823C8) {
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
	// bl 0x823813b8
	sub_823813B8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x82381d58
	sub_82381D58(ctx, base);
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

__attribute__((alias("__imp__sub_8238241C"))) PPC_WEAK_FUNC(sub_8238241C);
PPC_FUNC_IMPL(__imp__sub_8238241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382420"))) PPC_WEAK_FUNC(sub_82382420);
PPC_FUNC_IMPL(__imp__sub_82382420) {
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
	// lwz r16,12616(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12616);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,12260
	r11.s64 = r11.s64 + 12260;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r10,r10,12196
	ctx.r10.s64 = ctx.r10.s64 + 12196;
	// addi r9,r9,12184
	ctx.r9.s64 = ctx.r9.s64 + 12184;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-200(r30)
	PPC_STORE_U32(r30.u32 + -200, r11.u32);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-196(r11)
	PPC_STORE_U32(r11.u32 + -196, ctx.r10.u32);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-196(r11)
	PPC_STORE_U32(r11.u32 + -196, ctx.r9.u32);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-196
	ctx.r10.s64 = r11.s64 + -196;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-200(r11)
	PPC_STORE_U32(r11.u32 + -200, ctx.r10.u32);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-240
	ctx.r10.s64 = r11.s64 + -240;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-200(r11)
	PPC_STORE_U32(r11.u32 + -200, ctx.r10.u32);
	// addi r29,r30,-20
	r29.s64 = r30.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823823c8
	sub_823823C8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823824d0
	if (cr0.eq) goto loc_823824D0;
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
loc_823824D0:
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82382428"))) PPC_WEAK_FUNC(sub_82382428);
PPC_FUNC_IMPL(__imp__sub_82382428) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,12260
	r11.s64 = r11.s64 + 12260;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// addi r10,r10,12196
	ctx.r10.s64 = ctx.r10.s64 + 12196;
	// addi r9,r9,12184
	ctx.r9.s64 = ctx.r9.s64 + 12184;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,-200(r30)
	PPC_STORE_U32(r30.u32 + -200, r11.u32);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-196(r11)
	PPC_STORE_U32(r11.u32 + -196, ctx.r10.u32);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r9,-196(r11)
	PPC_STORE_U32(r11.u32 + -196, ctx.r9.u32);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r10,r11,-196
	ctx.r10.s64 = r11.s64 + -196;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-200(r11)
	PPC_STORE_U32(r11.u32 + -200, ctx.r10.u32);
	// lwz r11,-196(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -196);
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r10,r11,-240
	ctx.r10.s64 = r11.s64 + -240;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r10,-200(r11)
	PPC_STORE_U32(r11.u32 + -200, ctx.r10.u32);
	// addi r29,r30,-20
	r29.s64 = r30.s64 + -20;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823823c8
	sub_823823C8(ctx, base);
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823824d0
	if (cr0.eq) goto loc_823824D0;
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
loc_823824D0:
	// addi r3,r30,-16
	ctx.r3.s64 = r30.s64 + -16;
	// bl 0x821b24f8
	sub_821B24F8(ctx, base);
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823824E0"))) PPC_WEAK_FUNC(sub_823824E0);
PPC_FUNC_IMPL(__imp__sub_823824E0) {
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
	// addi r11,r11,-200
	r11.s64 = r11.s64 + -200;
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

__attribute__((alias("__imp__sub_82382510"))) PPC_WEAK_FUNC(sub_82382510);
PPC_FUNC_IMPL(__imp__sub_82382510) {
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
	// addi r11,r11,-200
	r11.s64 = r11.s64 + -200;
	// addi r3,r11,180
	ctx.r3.s64 = r11.s64 + 180;
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

__attribute__((alias("__imp__sub_82382540"))) PPC_WEAK_FUNC(sub_82382540);
PPC_FUNC_IMPL(__imp__sub_82382540) {
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
	// addi r30,r3,-200
	r30.s64 = ctx.r3.s64 + -200;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// addi r31,r30,200
	r31.s64 = r30.s64 + 200;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82382428
	sub_82382428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82317760
	sub_82317760(ctx, base);
	// clrlwi. r11,r29,31
	r11.u64 = r29.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82382578
	if (cr0.eq) goto loc_82382578;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82354b48
	sub_82354B48(ctx, base);
loc_82382578:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82382584"))) PPC_WEAK_FUNC(sub_82382584);
PPC_FUNC_IMPL(__imp__sub_82382584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382588"))) PPC_WEAK_FUNC(sub_82382588);
PPC_FUNC_IMPL(__imp__sub_82382588) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x8239d488
	sub_8239D488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382590"))) PPC_WEAK_FUNC(sub_82382590);
PPC_FUNC_IMPL(__imp__sub_82382590) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82354fd8
	sub_82354FD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382598"))) PPC_WEAK_FUNC(sub_82382598);
PPC_FUNC_IMPL(__imp__sub_82382598) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x821e7b68
	sub_821E7B68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823825A0"))) PPC_WEAK_FUNC(sub_823825A0);
PPC_FUNC_IMPL(__imp__sub_823825A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// lwz r10,16920(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16920);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x823825c8
	if (!cr6.eq) goto loc_823825C8;
	// lis r10,-32139
	ctx.r10.s64 = -2106261504;
	// addi r10,r10,-26756
	ctx.r10.s64 = ctx.r10.s64 + -26756;
	// stw r10,16920(r11)
	PPC_STORE_U32(r11.u32 + 16920, ctx.r10.u32);
	// blr 
	return;
loc_823825C8:
	// stw r3,16920(r11)
	PPC_STORE_U32(r11.u32 + 16920, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823825D0"))) PPC_WEAK_FUNC(sub_823825D0);
PPC_FUNC_IMPL(__imp__sub_823825D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16920(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16920);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_823825F0"))) PPC_WEAK_FUNC(sub_823825F0);
PPC_FUNC_IMPL(__imp__sub_823825F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lis r11,-32127
	r11.s64 = -2105475072;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,16920(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16920);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// lwz r11,8(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82382618"))) PPC_WEAK_FUNC(sub_82382618);
PPC_FUNC_IMPL(__imp__sub_82382618) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238261C"))) PPC_WEAK_FUNC(sub_8238261C);
PPC_FUNC_IMPL(__imp__sub_8238261C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382620"))) PPC_WEAK_FUNC(sub_82382620);
PPC_FUNC_IMPL(__imp__sub_82382620) {
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
	// bl 0x823825a0
	sub_823825A0(ctx, base);
	// bl 0x82389d20
	sub_82389D20(ctx, base);
	// bl 0x8238f268
	sub_8238F268(ctx, base);
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16984(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16984);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82382654
	if (!cr6.eq) goto loc_82382654;
	// bl 0x82390090
	sub_82390090(ctx, base);
	// stw r3,16984(r31)
	PPC_STORE_U32(r31.u32 + 16984, ctx.r3.u32);
loc_82382654:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17024(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17024);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238266c
	if (!cr6.eq) goto loc_8238266C;
	// bl 0x82395340
	sub_82395340(ctx, base);
	// stw r3,17024(r31)
	PPC_STORE_U32(r31.u32 + 17024, ctx.r3.u32);
loc_8238266C:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17028(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17028);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82382684
	if (!cr6.eq) goto loc_82382684;
	// bl 0x823956d0
	sub_823956D0(ctx, base);
	// stw r3,17028(r31)
	PPC_STORE_U32(r31.u32 + 17028, ctx.r3.u32);
loc_82382684:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16940(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16940);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238269c
	if (!cr6.eq) goto loc_8238269C;
	// bl 0x82387bb0
	sub_82387BB0(ctx, base);
	// stw r3,16940(r31)
	PPC_STORE_U32(r31.u32 + 16940, ctx.r3.u32);
loc_8238269C:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16972(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16972);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823826b4
	if (!cr6.eq) goto loc_823826B4;
	// bl 0x8238eb98
	sub_8238EB98(ctx, base);
	// stw r3,16972(r31)
	PPC_STORE_U32(r31.u32 + 16972, ctx.r3.u32);
loc_823826B4:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17000(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17000);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823826cc
	if (!cr6.eq) goto loc_823826CC;
	// bl 0x82391f98
	sub_82391F98(ctx, base);
	// stw r3,17000(r31)
	PPC_STORE_U32(r31.u32 + 17000, ctx.r3.u32);
loc_823826CC:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16996(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16996);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823826e4
	if (!cr6.eq) goto loc_823826E4;
	// bl 0x82393168
	sub_82393168(ctx, base);
	// stw r3,16996(r31)
	PPC_STORE_U32(r31.u32 + 16996, ctx.r3.u32);
loc_823826E4:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16992(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16992);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823826fc
	if (!cr6.eq) goto loc_823826FC;
	// bl 0x82391510
	sub_82391510(ctx, base);
	// stw r3,16992(r31)
	PPC_STORE_U32(r31.u32 + 16992, ctx.r3.u32);
loc_823826FC:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16980(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16980);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82382714
	if (!cr6.eq) goto loc_82382714;
	// bl 0x8238fde0
	sub_8238FDE0(ctx, base);
	// stw r3,16980(r31)
	PPC_STORE_U32(r31.u32 + 16980, ctx.r3.u32);
loc_82382714:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16968(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16968);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238272c
	if (!cr6.eq) goto loc_8238272C;
	// bl 0x8238d4c8
	sub_8238D4C8(ctx, base);
	// stw r3,16968(r31)
	PPC_STORE_U32(r31.u32 + 16968, ctx.r3.u32);
loc_8238272C:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17036);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82382744
	if (!cr6.eq) goto loc_82382744;
	// bl 0x82396108
	sub_82396108(ctx, base);
	// stw r3,17036(r31)
	PPC_STORE_U32(r31.u32 + 17036, ctx.r3.u32);
loc_82382744:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17020(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17020);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238275c
	if (!cr6.eq) goto loc_8238275C;
	// bl 0x82394fc0
	sub_82394FC0(ctx, base);
	// stw r3,17020(r31)
	PPC_STORE_U32(r31.u32 + 17020, ctx.r3.u32);
loc_8238275C:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17004(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17004);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82382774
	if (!cr6.eq) goto loc_82382774;
	// bl 0x823938a8
	sub_823938A8(ctx, base);
	// stw r3,17004(r31)
	PPC_STORE_U32(r31.u32 + 17004, ctx.r3.u32);
loc_82382774:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17008(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17008);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238278c
	if (!cr6.eq) goto loc_8238278C;
	// bl 0x823939c0
	sub_823939C0(ctx, base);
	// stw r3,17008(r31)
	PPC_STORE_U32(r31.u32 + 17008, ctx.r3.u32);
loc_8238278C:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17032(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17032);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823827a4
	if (!cr6.eq) goto loc_823827A4;
	// bl 0x82395d10
	sub_82395D10(ctx, base);
	// stw r3,17032(r31)
	PPC_STORE_U32(r31.u32 + 17032, ctx.r3.u32);
loc_823827A4:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16964(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16964);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823827bc
	if (!cr6.eq) goto loc_823827BC;
	// bl 0x8238cf78
	sub_8238CF78(ctx, base);
	// stw r3,16964(r31)
	PPC_STORE_U32(r31.u32 + 16964, ctx.r3.u32);
loc_823827BC:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17012(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17012);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823827d4
	if (!cr6.eq) goto loc_823827D4;
	// bl 0x82394658
	sub_82394658(ctx, base);
	// stw r3,17012(r31)
	PPC_STORE_U32(r31.u32 + 17012, ctx.r3.u32);
loc_823827D4:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16988(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16988);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823827ec
	if (!cr6.eq) goto loc_823827EC;
	// bl 0x82390cb0
	sub_82390CB0(ctx, base);
	// stw r3,16988(r31)
	PPC_STORE_U32(r31.u32 + 16988, ctx.r3.u32);
loc_823827EC:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16928(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16928);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82382804
	if (!cr6.eq) goto loc_82382804;
	// bl 0x82384b28
	sub_82384B28(ctx, base);
	// stw r3,16928(r31)
	PPC_STORE_U32(r31.u32 + 16928, ctx.r3.u32);
loc_82382804:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,17016(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 17016);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238281c
	if (!cr6.eq) goto loc_8238281C;
	// bl 0x82394ad0
	sub_82394AD0(ctx, base);
	// stw r3,17016(r31)
	PPC_STORE_U32(r31.u32 + 17016, ctx.r3.u32);
loc_8238281C:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16924(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16924);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82382834
	if (!cr6.eq) goto loc_82382834;
	// bl 0x82384fd0
	sub_82384FD0(ctx, base);
	// stw r3,16924(r31)
	PPC_STORE_U32(r31.u32 + 16924, ctx.r3.u32);
loc_82382834:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16960(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16960);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x8238284c
	if (!cr6.eq) goto loc_8238284C;
	// bl 0x8238b2a0
	sub_8238B2A0(ctx, base);
	// stw r3,16960(r31)
	PPC_STORE_U32(r31.u32 + 16960, ctx.r3.u32);
loc_8238284C:
	// lis r31,-32127
	r31.s64 = -2105475072;
	// lwz r11,16944(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16944);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82382864
	if (!cr6.eq) goto loc_82382864;
	// bl 0x82389040
	sub_82389040(ctx, base);
	// stw r3,16944(r31)
	PPC_STORE_U32(r31.u32 + 16944, ctx.r3.u32);
loc_82382864:
	// bl 0x8239a7d8
	sub_8239A7D8(ctx, base);
	// bl 0x82386c58
	sub_82386C58(ctx, base);
	// bl 0x8238b408
	sub_8238B408(ctx, base);
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

__attribute__((alias("__imp__sub_82382884"))) PPC_WEAK_FUNC(sub_82382884);
PPC_FUNC_IMPL(__imp__sub_82382884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382888"))) PPC_WEAK_FUNC(sub_82382888);
PPC_FUNC_IMPL(__imp__sub_82382888) {
	PPC_FUNC_PROLOGUE();
	// li r3,1500
	ctx.r3.s64 = 1500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82382890"))) PPC_WEAK_FUNC(sub_82382890);
PPC_FUNC_IMPL(__imp__sub_82382890) {
	PPC_FUNC_PROLOGUE();
	// li r3,1000
	ctx.r3.s64 = 1000;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82382898"))) PPC_WEAK_FUNC(sub_82382898);
PPC_FUNC_IMPL(__imp__sub_82382898) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12692
	ctx.r4.s64 = r11.s64 + 12692;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
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

__attribute__((alias("__imp__sub_823828DC"))) PPC_WEAK_FUNC(sub_823828DC);
PPC_FUNC_IMPL(__imp__sub_823828DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823828E0"))) PPC_WEAK_FUNC(sub_823828E0);
PPC_FUNC_IMPL(__imp__sub_823828E0) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r11,12704
	ctx.r4.s64 = r11.s64 + 12704;
	// li r11,0
	r11.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x8218ecc0
	sub_8218ECC0(ctx, base);
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

__attribute__((alias("__imp__sub_82382924"))) PPC_WEAK_FUNC(sub_82382924);
PPC_FUNC_IMPL(__imp__sub_82382924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382928"))) PPC_WEAK_FUNC(sub_82382928);
PPC_FUNC_IMPL(__imp__sub_82382928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32250
	r11.s64 = -2113536000;
	// addi r11,r11,12748
	r11.s64 = r11.s64 + 12748;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82382938"))) PPC_WEAK_FUNC(sub_82382938);
PPC_FUNC_IMPL(__imp__sub_82382938) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,12748
	r11.s64 = r11.s64 + 12748;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// beq 0x82382964
	if (cr0.eq) goto loc_82382964;
	// bl 0x821e7b68
	sub_821E7B68(ctx, base);
loc_82382964:
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

__attribute__((alias("__imp__sub_8238297C"))) PPC_WEAK_FUNC(sub_8238297C);
PPC_FUNC_IMPL(__imp__sub_8238297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382980"))) PPC_WEAK_FUNC(sub_82382980);
PPC_FUNC_IMPL(__imp__sub_82382980) {
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
	// li r11,0
	r11.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// bl 0x82389ed8
	sub_82389ED8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82386318
	sub_82386318(ctx, base);
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

__attribute__((alias("__imp__sub_823829E0"))) PPC_WEAK_FUNC(sub_823829E0);
PPC_FUNC_IMPL(__imp__sub_823829E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lfs f1,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
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

__attribute__((alias("__imp__sub_82382A20"))) PPC_WEAK_FUNC(sub_82382A20);
PPC_FUNC_IMPL(__imp__sub_82382A20) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82382a4c
	if (!cr6.eq) goto loc_82382A4C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82382a58
	goto loc_82382A58;
loc_82382A4C:
	// mulli r3,r30,36
	ctx.r3.s64 = r30.s64 * 36;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82382A58:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_82382A84"))) PPC_WEAK_FUNC(sub_82382A84);
PPC_FUNC_IMPL(__imp__sub_82382A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382A88"))) PPC_WEAK_FUNC(sub_82382A88);
PPC_FUNC_IMPL(__imp__sub_82382A88) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82382ab4
	if (!cr6.eq) goto loc_82382AB4;
	// li r11,0
	r11.s64 = 0;
	// b 0x82382ac0
	goto loc_82382AC0;
loc_82382AB4:
	// mulli r3,r30,24
	ctx.r3.s64 = r30.s64 * 24;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82382AC0:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_82382AEC"))) PPC_WEAK_FUNC(sub_82382AEC);
PPC_FUNC_IMPL(__imp__sub_82382AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382AF0"))) PPC_WEAK_FUNC(sub_82382AF0);
PPC_FUNC_IMPL(__imp__sub_82382AF0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82382b1c
	if (!cr6.eq) goto loc_82382B1C;
	// li r11,0
	r11.s64 = 0;
	// b 0x82382b28
	goto loc_82382B28;
loc_82382B1C:
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82382B28:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_82382B54"))) PPC_WEAK_FUNC(sub_82382B54);
PPC_FUNC_IMPL(__imp__sub_82382B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382B58"))) PPC_WEAK_FUNC(sub_82382B58);
PPC_FUNC_IMPL(__imp__sub_82382B58) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82382b84
	if (!cr6.eq) goto loc_82382B84;
	// li r11,0
	r11.s64 = 0;
	// b 0x82382b90
	goto loc_82382B90;
loc_82382B84:
	// mulli r3,r30,116
	ctx.r3.s64 = r30.s64 * 116;
	// bl 0x823825d0
	sub_823825D0(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82382B90:
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// li r11,0
	r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
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

__attribute__((alias("__imp__sub_82382BBC"))) PPC_WEAK_FUNC(sub_82382BBC);
PPC_FUNC_IMPL(__imp__sub_82382BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382BC0"))) PPC_WEAK_FUNC(sub_82382BC0);
PPC_FUNC_IMPL(__imp__sub_82382BC0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82389a98
	sub_82389A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82382BC4"))) PPC_WEAK_FUNC(sub_82382BC4);
PPC_FUNC_IMPL(__imp__sub_82382BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382BC8"))) PPC_WEAK_FUNC(sub_82382BC8);
PPC_FUNC_IMPL(__imp__sub_82382BC8) {
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
	// lwz r16,12768(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12768);
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
	// beq cr6,0x82382bf8
	if (cr6.eq) goto loc_82382BF8;
	// bl 0x823908a0
	sub_823908A0(ctx, base);
loc_82382BF8:
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

__attribute__((alias("__imp__sub_82382BD0"))) PPC_WEAK_FUNC(sub_82382BD0);
PPC_FUNC_IMPL(__imp__sub_82382BD0) {
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
	// beq cr6,0x82382bf8
	if (cr6.eq) goto loc_82382BF8;
	// bl 0x823908a0
	sub_823908A0(ctx, base);
loc_82382BF8:
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

__attribute__((alias("__imp__sub_82382C0C"))) PPC_WEAK_FUNC(sub_82382C0C);
PPC_FUNC_IMPL(__imp__sub_82382C0C) {
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

__attribute__((alias("__imp__sub_82382C38"))) PPC_WEAK_FUNC(sub_82382C38);
PPC_FUNC_IMPL(__imp__sub_82382C38) {
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
	// lwz r16,12824(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12824);
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
	// beq cr6,0x82382c68
	if (cr6.eq) goto loc_82382C68;
	// bl 0x82394480
	sub_82394480(ctx, base);
loc_82382C68:
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

__attribute__((alias("__imp__sub_82382C40"))) PPC_WEAK_FUNC(sub_82382C40);
PPC_FUNC_IMPL(__imp__sub_82382C40) {
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
	// beq cr6,0x82382c68
	if (cr6.eq) goto loc_82382C68;
	// bl 0x82394480
	sub_82394480(ctx, base);
loc_82382C68:
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

__attribute__((alias("__imp__sub_82382C7C"))) PPC_WEAK_FUNC(sub_82382C7C);
PPC_FUNC_IMPL(__imp__sub_82382C7C) {
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

__attribute__((alias("__imp__sub_82382CA8"))) PPC_WEAK_FUNC(sub_82382CA8);
PPC_FUNC_IMPL(__imp__sub_82382CA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// ble cr6,0x82382cd4
	if (!cr6.gt) goto loc_82382CD4;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82382d54
	goto loc_82382D54;
loc_82382CD4:
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82382d0c
	if (!cr6.gt) goto loc_82382D0C;
	// li r30,0
	r30.s64 = 0;
loc_82382CE8:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82390318
	sub_82390318(ctx, base);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82382ce8
	if (cr6.lt) goto loc_82382CE8;
loc_82382D0C:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82382d50
	if (!cr6.gt) goto loc_82382D50;
	// li r30,0
	r30.s64 = 0;
loc_82382D20:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x82393d28
	sub_82393D28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8238eab8
	sub_8238EAB8(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82382d20
	if (cr6.lt) goto loc_82382D20;
loc_82382D50:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82382D54:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82382D60"))) PPC_WEAK_FUNC(sub_82382D60);
PPC_FUNC_IMPL(__imp__sub_82382D60) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 76);
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

__attribute__((alias("__imp__sub_82382DA0"))) PPC_WEAK_FUNC(sub_82382DA0);
PPC_FUNC_IMPL(__imp__sub_82382DA0) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// addi r3,r31,8
	ctx.r3.s64 = r31.s64 + 8;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,68(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 68);
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_82382DF4"))) PPC_WEAK_FUNC(sub_82382DF4);
PPC_FUNC_IMPL(__imp__sub_82382DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382DF8"))) PPC_WEAK_FUNC(sub_82382DF8);
PPC_FUNC_IMPL(__imp__sub_82382DF8) {
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
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82382e44
	if (!cr6.gt) goto loc_82382E44;
	// li r30,0
	r30.s64 = 0;
loc_82382E20:
	// lwz r11,28(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 28);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x823901e8
	sub_823901E8(ctx, base);
	// lwz r11,36(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82382e20
	if (cr6.lt) goto loc_82382E20;
loc_82382E44:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82382E4C"))) PPC_WEAK_FUNC(sub_82382E4C);
PPC_FUNC_IMPL(__imp__sub_82382E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82382E50"))) PPC_WEAK_FUNC(sub_82382E50);
PPC_FUNC_IMPL(__imp__sub_82382E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
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
	// bl 0x8239bcfc
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// lfs f30,-11132(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11132);
	f30.f64 = double(temp.f32);
	// lis r11,-32250
	r11.s64 = -2113536000;
	// stfs f30,52(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f29,12872(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 12872);
	f29.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f29,56(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lfs f31,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// stfs f31,80(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82382f00
	if (!cr6.gt) goto loc_82382F00;
	// li r30,0
	r30.s64 = 0;
loc_82382EA8:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// bl 0x823904e0
	sub_823904E0(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82382ed0
	if (cr6.lt) goto loc_82382ED0;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_82382ED0:
	// stfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82382ee8
	if (!cr6.gt) goto loc_82382EE8;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82382EE8:
	// stfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r11,36(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82382ea8
	if (cr6.lt) goto loc_82382EA8;
loc_82382F00:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// li r29,0
	r29.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82382f6c
	if (!cr6.gt) goto loc_82382F6C;
	// li r30,0
	r30.s64 = 0;
loc_82382F14:
	// lwz r11,40(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82393fe8
	sub_82393FE8(ctx, base);
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// blt cr6,0x82382f3c
	if (cr6.lt) goto loc_82382F3C;
	// fmr f13,f0
	ctx.f13.f64 = f0.f64;
loc_82382F3C:
	// stfs f13,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	cr6.compare(ctx.f13.f64, f0.f64);
	// ble cr6,0x82382f54
	if (!cr6.gt) goto loc_82382F54;
	// fmr f0,f13
	f0.f64 = ctx.f13.f64;
loc_82382F54:
	// stfs f0,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82382f14
	if (cr6.lt) goto loc_82382F14;
loc_82382F6C:
	// lfs f0,52(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 52);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	cr6.compare(f0.f64, f30.f64);
	// bne cr6,0x82382f94
	if (!cr6.eq) goto loc_82382F94;
	// lfs f0,56(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 56);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	cr6.compare(f0.f64, f29.f64);
	// bne cr6,0x82382f94
	if (!cr6.eq) goto loc_82382F94;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// stfs f31,52(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 52, temp.u32);
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 56, temp.u32);
loc_82382F94:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f30,-48(r1)
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82382FA8"))) PPC_WEAK_FUNC(sub_82382FA8);
PPC_FUNC_IMPL(__imp__sub_82382FA8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// li r29,0
	r29.s64 = 0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8238300c
	if (!cr6.gt) goto loc_8238300C;
	// li r30,0
	r30.s64 = 0;
loc_82382FD0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82389398
	sub_82389398(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82383018
	if (!cr0.eq) goto loc_82383018;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82382fd0
	if (cr6.lt) goto loc_82382FD0;
loc_8238300C:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82383010:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
loc_82383018:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82383010
	goto loc_82383010;
}

__attribute__((alias("__imp__sub_82383020"))) PPC_WEAK_FUNC(sub_82383020);
PPC_FUNC_IMPL(__imp__sub_82383020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mulli r11,r4,116
	r11.s64 = ctx.r4.s64 * 116;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383030"))) PPC_WEAK_FUNC(sub_82383030);
PPC_FUNC_IMPL(__imp__sub_82383030) {
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
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8238307c
	if (!cr6.gt) goto loc_8238307C;
	// li r30,0
	r30.s64 = 0;
loc_82383058:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// bl 0x82382df8
	sub_82382DF8(ctx, base);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,116
	r30.s64 = r30.s64 + 116;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82383058
	if (cr6.lt) goto loc_82383058;
loc_8238307C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82383084"))) PPC_WEAK_FUNC(sub_82383084);
PPC_FUNC_IMPL(__imp__sub_82383084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383088"))) PPC_WEAK_FUNC(sub_82383088);
PPC_FUNC_IMPL(__imp__sub_82383088) {
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
	// b 0x823830cc
	goto loc_823830CC;
loc_823830A8:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x823830c8
	if (cr6.eq) goto loc_823830C8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_823830C8:
	// addi r31,r31,36
	r31.s64 = r31.s64 + 36;
loc_823830CC:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x823830a8
	if (!cr6.eq) goto loc_823830A8;
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

__attribute__((alias("__imp__sub_823830EC"))) PPC_WEAK_FUNC(sub_823830EC);
PPC_FUNC_IMPL(__imp__sub_823830EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823830F0"))) PPC_WEAK_FUNC(sub_823830F0);
PPC_FUNC_IMPL(__imp__sub_823830F0) {
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
	// b 0x82383134
	goto loc_82383134;
loc_82383110:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82383130
	if (cr6.eq) goto loc_82383130;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82383130:
	// addi r31,r31,24
	r31.s64 = r31.s64 + 24;
loc_82383134:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82383110
	if (!cr6.eq) goto loc_82383110;
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

__attribute__((alias("__imp__sub_82383154"))) PPC_WEAK_FUNC(sub_82383154);
PPC_FUNC_IMPL(__imp__sub_82383154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383158"))) PPC_WEAK_FUNC(sub_82383158);
PPC_FUNC_IMPL(__imp__sub_82383158) {
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
	// b 0x8238319c
	goto loc_8238319C;
loc_82383178:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82383198
	if (cr6.eq) goto loc_82383198;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82383198:
	// addi r31,r31,116
	r31.s64 = r31.s64 + 116;
loc_8238319C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82383178
	if (!cr6.eq) goto loc_82383178;
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

__attribute__((alias("__imp__sub_823831BC"))) PPC_WEAK_FUNC(sub_823831BC);
PPC_FUNC_IMPL(__imp__sub_823831BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823831C0"))) PPC_WEAK_FUNC(sub_823831C0);
PPC_FUNC_IMPL(__imp__sub_823831C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r25{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,12888(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12888);
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823831fc
	if (cr6.eq) goto loc_823831FC;
	// bl 0x82389350
	sub_82389350(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
loc_823831FC:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823831C8"))) PPC_WEAK_FUNC(sub_823831C8);
PPC_FUNC_IMPL(__imp__sub_823831C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
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
	// stw r30,148(r31)
	PPC_STORE_U32(r31.u32 + 148, r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823831fc
	if (cr6.eq) goto loc_823831FC;
	// bl 0x82389350
	sub_82389350(ctx, base);
	// lfs f0,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r29.u32 + 4);
	f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r30.u32 + 4, temp.u32);
loc_823831FC:
	// addi r1,r31,128
	ctx.r1.s64 = r31.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82383204"))) PPC_WEAK_FUNC(sub_82383204);
PPC_FUNC_IMPL(__imp__sub_82383204) {
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
	// lwz r4,148(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 148);
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

__attribute__((alias("__imp__sub_82383230"))) PPC_WEAK_FUNC(sub_82383230);
PPC_FUNC_IMPL(__imp__sub_82383230) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82385738
	sub_82385738(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82383288
	if (cr0.eq) goto loc_82383288;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// beq 0x8238327c
	if (cr0.eq) goto loc_8238327C;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// b 0x82383280
	goto loc_82383280;
loc_8238327C:
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
loc_82383280:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82383288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82383290"))) PPC_WEAK_FUNC(sub_82383290);
PPC_FUNC_IMPL(__imp__sub_82383290) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,36
	r11.s64 = r11.s64 * 36;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x82383088
	sub_82383088(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_823832E4"))) PPC_WEAK_FUNC(sub_823832E4);
PPC_FUNC_IMPL(__imp__sub_823832E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823832E8"))) PPC_WEAK_FUNC(sub_823832E8);
PPC_FUNC_IMPL(__imp__sub_823832E8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x823830f0
	sub_823830F0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_8238333C"))) PPC_WEAK_FUNC(sub_8238333C);
PPC_FUNC_IMPL(__imp__sub_8238333C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383340"))) PPC_WEAK_FUNC(sub_82383340);
PPC_FUNC_IMPL(__imp__sub_82383340) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,116
	r11.s64 = r11.s64 * 116;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x82383158
	sub_82383158(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82383394"))) PPC_WEAK_FUNC(sub_82383394);
PPC_FUNC_IMPL(__imp__sub_82383394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383398"))) PPC_WEAK_FUNC(sub_82383398);
PPC_FUNC_IMPL(__imp__sub_82383398) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,12944(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12944);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82382a20
	sub_82382A20(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8238340c
	if (!cr6.lt) goto loc_8238340C;
loc_823833D4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,36
	r11.s64 = r11.s64 * 36;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823833d4
	if (cr6.lt) goto loc_823833D4;
loc_8238340C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823833A0"))) PPC_WEAK_FUNC(sub_823833A0);
PPC_FUNC_IMPL(__imp__sub_823833A0) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82382a20
	sub_82382A20(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x8238340c
	if (!cr6.lt) goto loc_8238340C;
loc_823833D4:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,36
	r11.s64 = r11.s64 * 36;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823833d4
	if (cr6.lt) goto loc_823833D4;
loc_8238340C:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82383418"))) PPC_WEAK_FUNC(sub_82383418);
PPC_FUNC_IMPL(__imp__sub_82383418) {
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
	// bl 0x82383290
	sub_82383290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383440"))) PPC_WEAK_FUNC(sub_82383440);
PPC_FUNC_IMPL(__imp__sub_82383440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,13000(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13000);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238350c
	if (cr6.lt) goto loc_8238350C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82383480
	if (cr6.eq) goto loc_82383480;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82383480:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382a20
	sub_82382A20(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823834c4
	if (!cr6.lt) goto loc_823834C4;
loc_8238349C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,36
	r11.s64 = r29.s64 * 36;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x8238349c
	if (cr6.lt) goto loc_8238349C;
loc_823834C4:
	// mulli r11,r29,36
	r11.s64 = r29.s64 * 36;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82383290
	sub_82383290(ctx, base);
	// b 0x8238352c
	goto loc_8238352C;
loc_8238350C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,36
	r11.s64 = r11.s64 * 36;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_8238352C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82383448"))) PPC_WEAK_FUNC(sub_82383448);
PPC_FUNC_IMPL(__imp__sub_82383448) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238350c
	if (cr6.lt) goto loc_8238350C;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82383480
	if (cr6.eq) goto loc_82383480;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82383480:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382a20
	sub_82382A20(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823834c4
	if (!cr6.lt) goto loc_823834C4;
loc_8238349C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,36
	r11.s64 = r29.s64 * 36;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x8238349c
	if (cr6.lt) goto loc_8238349C;
loc_823834C4:
	// mulli r11,r29,36
	r11.s64 = r29.s64 * 36;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82383290
	sub_82383290(ctx, base);
	// b 0x8238352c
	goto loc_8238352C;
loc_8238350C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,36
	r11.s64 = r11.s64 * 36;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_8238352C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82383534"))) PPC_WEAK_FUNC(sub_82383534);
PPC_FUNC_IMPL(__imp__sub_82383534) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82383290
	sub_82383290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238355C"))) PPC_WEAK_FUNC(sub_8238355C);
PPC_FUNC_IMPL(__imp__sub_8238355C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383560"))) PPC_WEAK_FUNC(sub_82383560);
PPC_FUNC_IMPL(__imp__sub_82383560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,13072(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13072);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82382a88
	sub_82382A88(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x823835d4
	if (!cr6.lt) goto loc_823835D4;
loc_8238359C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238359c
	if (cr6.lt) goto loc_8238359C;
loc_823835D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82383568"))) PPC_WEAK_FUNC(sub_82383568);
PPC_FUNC_IMPL(__imp__sub_82383568) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82382a88
	sub_82382A88(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x823835d4
	if (!cr6.lt) goto loc_823835D4;
loc_8238359C:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x8238359c
	if (cr6.lt) goto loc_8238359C;
loc_823835D4:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823835E0"))) PPC_WEAK_FUNC(sub_823835E0);
PPC_FUNC_IMPL(__imp__sub_823835E0) {
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
	// bl 0x823832e8
	sub_823832E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383608"))) PPC_WEAK_FUNC(sub_82383608);
PPC_FUNC_IMPL(__imp__sub_82383608) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,13128(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13128);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823836d4
	if (cr6.lt) goto loc_823836D4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82383648
	if (cr6.eq) goto loc_82383648;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82383648:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382a88
	sub_82382A88(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8238368c
	if (!cr6.lt) goto loc_8238368C;
loc_82383664:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,24
	r11.s64 = r29.s64 * 24;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82383664
	if (cr6.lt) goto loc_82383664;
loc_8238368C:
	// mulli r11,r29,24
	r11.s64 = r29.s64 * 24;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823832e8
	sub_823832E8(ctx, base);
	// b 0x823836f4
	goto loc_823836F4;
loc_823836D4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_823836F4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82383610"))) PPC_WEAK_FUNC(sub_82383610);
PPC_FUNC_IMPL(__imp__sub_82383610) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x823836d4
	if (cr6.lt) goto loc_823836D4;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82383648
	if (cr6.eq) goto loc_82383648;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82383648:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382a88
	sub_82382A88(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8238368c
	if (!cr6.lt) goto loc_8238368C;
loc_82383664:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,24
	r11.s64 = r29.s64 * 24;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82383664
	if (cr6.lt) goto loc_82383664;
loc_8238368C:
	// mulli r11,r29,24
	r11.s64 = r29.s64 * 24;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823832e8
	sub_823832E8(ctx, base);
	// b 0x823836f4
	goto loc_823836F4;
loc_823836D4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_823836F4:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823836FC"))) PPC_WEAK_FUNC(sub_823836FC);
PPC_FUNC_IMPL(__imp__sub_823836FC) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823832e8
	sub_823832E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383724"))) PPC_WEAK_FUNC(sub_82383724);
PPC_FUNC_IMPL(__imp__sub_82383724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383728"))) PPC_WEAK_FUNC(sub_82383728);
PPC_FUNC_IMPL(__imp__sub_82383728) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// b 0x8238375c
	goto loc_8238375C;
loc_82383748:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82383758
	if (cr6.eq) goto loc_82383758;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82389a98
	sub_82389A98(ctx, base);
loc_82383758:
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
loc_8238375C:
	// cmplw cr6,r31,r30
	cr6.compare<uint32_t>(r31.u32, r30.u32, xer);
	// bne cr6,0x82383748
	if (!cr6.eq) goto loc_82383748;
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

__attribute__((alias("__imp__sub_8238377C"))) PPC_WEAK_FUNC(sub_8238377C);
PPC_FUNC_IMPL(__imp__sub_8238377C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383780"))) PPC_WEAK_FUNC(sub_82383780);
PPC_FUNC_IMPL(__imp__sub_82383780) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,13200(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13200);
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
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8238381c
	if (!cr6.gt) goto loc_8238381C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382a20
	sub_82382A20(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823837ec
	if (!cr6.lt) goto loc_823837EC;
loc_823837C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,36
	r11.s64 = r29.s64 * 36;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x823837c4
	if (cr6.lt) goto loc_823837C4;
loc_823837EC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82383290
	sub_82383290(ctx, base);
loc_8238381C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82383788"))) PPC_WEAK_FUNC(sub_82383788);
PPC_FUNC_IMPL(__imp__sub_82383788) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8238381c
	if (!cr6.gt) goto loc_8238381C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382a20
	sub_82382A20(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823837ec
	if (!cr6.lt) goto loc_823837EC;
loc_823837C4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,36
	r11.s64 = r29.s64 * 36;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82382bd0
	sub_82382BD0(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x823837c4
	if (cr6.lt) goto loc_823837C4;
loc_823837EC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82383290
	sub_82383290(ctx, base);
loc_8238381C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82383824"))) PPC_WEAK_FUNC(sub_82383824);
PPC_FUNC_IMPL(__imp__sub_82383824) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82383290
	sub_82383290(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238384C"))) PPC_WEAK_FUNC(sub_8238384C);
PPC_FUNC_IMPL(__imp__sub_8238384C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383850"))) PPC_WEAK_FUNC(sub_82383850);
PPC_FUNC_IMPL(__imp__sub_82383850) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,13272(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13272);
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
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823838ec
	if (!cr6.gt) goto loc_823838EC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382a88
	sub_82382A88(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823838bc
	if (!cr6.lt) goto loc_823838BC;
loc_82383894:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,24
	r11.s64 = r29.s64 * 24;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82383894
	if (cr6.lt) goto loc_82383894;
loc_823838BC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823832e8
	sub_823832E8(ctx, base);
loc_823838EC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82383858"))) PPC_WEAK_FUNC(sub_82383858);
PPC_FUNC_IMPL(__imp__sub_82383858) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x823838ec
	if (!cr6.gt) goto loc_823838EC;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382a88
	sub_82382A88(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x823838bc
	if (!cr6.lt) goto loc_823838BC;
loc_82383894:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r29,24
	r11.s64 = r29.s64 * 24;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x82382c40
	sub_82382C40(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82383894
	if (cr6.lt) goto loc_82383894;
loc_823838BC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823832e8
	sub_823832E8(ctx, base);
loc_823838EC:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_823838F4"))) PPC_WEAK_FUNC(sub_823838F4);
PPC_FUNC_IMPL(__imp__sub_823838F4) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823832e8
	sub_823832E8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238391C"))) PPC_WEAK_FUNC(sub_8238391C);
PPC_FUNC_IMPL(__imp__sub_8238391C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383920"))) PPC_WEAK_FUNC(sub_82383920);
PPC_FUNC_IMPL(__imp__sub_82383920) {
	PPC_FUNC_PROLOGUE();
	// b 0x82383290
	sub_82383290(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82383924"))) PPC_WEAK_FUNC(sub_82383924);
PPC_FUNC_IMPL(__imp__sub_82383924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383928"))) PPC_WEAK_FUNC(sub_82383928);
PPC_FUNC_IMPL(__imp__sub_82383928) {
	PPC_FUNC_PROLOGUE();
	// b 0x823832e8
	sub_823832E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8238392C"))) PPC_WEAK_FUNC(sub_8238392C);
PPC_FUNC_IMPL(__imp__sub_8238392C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383930"))) PPC_WEAK_FUNC(sub_82383930);
PPC_FUNC_IMPL(__imp__sub_82383930) {
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
	// lwz r16,13368(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13368);
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,13340
	r11.s64 = r11.s64 + 13340;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82383340
	sub_82383340(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82387a00
	sub_82387A00(ctx, base);
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

__attribute__((alias("__imp__sub_82383938"))) PPC_WEAK_FUNC(sub_82383938);
PPC_FUNC_IMPL(__imp__sub_82383938) {
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
	// lis r11,-32250
	r11.s64 = -2113536000;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r11,13340
	r11.s64 = r11.s64 + 13340;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addi r3,r30,8
	ctx.r3.s64 = r30.s64 + 8;
	// bl 0x82383340
	sub_82383340(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82387a00
	sub_82387A00(ctx, base);
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

__attribute__((alias("__imp__sub_8238398C"))) PPC_WEAK_FUNC(sub_8238398C);
PPC_FUNC_IMPL(__imp__sub_8238398C) {
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
	// bl 0x82387a00
	sub_82387A00(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823839B4"))) PPC_WEAK_FUNC(sub_823839B4);
PPC_FUNC_IMPL(__imp__sub_823839B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823839B8"))) PPC_WEAK_FUNC(sub_823839B8);
PPC_FUNC_IMPL(__imp__sub_823839B8) {
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
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r3
	ctx.r4.u64 = r11.u64 + ctx.r3.u64;
	// bl 0x82383728
	sub_82383728(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
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

__attribute__((alias("__imp__sub_82383A0C"))) PPC_WEAK_FUNC(sub_82383A0C);
PPC_FUNC_IMPL(__imp__sub_82383A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383A10"))) PPC_WEAK_FUNC(sub_82383A10);
PPC_FUNC_IMPL(__imp__sub_82383A10) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82383290
	sub_82383290(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383A60"))) PPC_WEAK_FUNC(sub_82383A60);
PPC_FUNC_IMPL(__imp__sub_82383A60) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x823832e8
	sub_823832E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383AB0"))) PPC_WEAK_FUNC(sub_82383AB0);
PPC_FUNC_IMPL(__imp__sub_82383AB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,13432(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13432);
	// mflr r12
	// bl 0x8239bcfc
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82382af0
	sub_82382AF0(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82383b24
	if (!cr6.lt) goto loc_82383B24;
loc_82383AEC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82383aec
	if (cr6.lt) goto loc_82383AEC;
loc_82383B24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82383AB8"))) PPC_WEAK_FUNC(sub_82383AB8);
PPC_FUNC_IMPL(__imp__sub_82383AB8) {
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
	// addi r31,r1,-112
	r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r30,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r30.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// bl 0x82382af0
	sub_82382AF0(ctx, base);
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bge cr6,0x82383b24
	if (!cr6.lt) goto loc_82383B24;
loc_82383AEC:
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// rotlwi r11,r11,0
	r11.u64 = __builtin_rotateleft32(r11.u32, 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82383aec
	if (cr6.lt) goto loc_82383AEC;
loc_82383B24:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r31,112
	ctx.r1.s64 = r31.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82383B30"))) PPC_WEAK_FUNC(sub_82383B30);
PPC_FUNC_IMPL(__imp__sub_82383B30) {
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
	// bl 0x823839b8
	sub_823839B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383B58"))) PPC_WEAK_FUNC(sub_82383B58);
PPC_FUNC_IMPL(__imp__sub_82383B58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// lwz r16,13488(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13488);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82383c24
	if (cr6.lt) goto loc_82383C24;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82383b98
	if (cr6.eq) goto loc_82383B98;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82383B98:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382af0
	sub_82382AF0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82383bdc
	if (!cr6.lt) goto loc_82383BDC;
loc_82383BB4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82383bb4
	if (cr6.lt) goto loc_82383BB4;
loc_82383BDC:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823839b8
	sub_823839B8(ctx, base);
	// b 0x82383c44
	goto loc_82383C44;
loc_82383C24:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82383C44:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82383B60"))) PPC_WEAK_FUNC(sub_82383B60);
PPC_FUNC_IMPL(__imp__sub_82383B60) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// blt cr6,0x82383c24
	if (cr6.lt) goto loc_82383C24;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// beq cr6,0x82383b98
	if (cr6.eq) goto loc_82383B98;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82383B98:
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382af0
	sub_82382AF0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82383bdc
	if (!cr6.lt) goto loc_82383BDC;
loc_82383BB4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82383bb4
	if (cr6.lt) goto loc_82383BB4;
loc_82383BDC:
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r8,84(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r10,r29,1
	ctx.r10.s64 = r29.s64 + 1;
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r30)
	PPC_STORE_U32(r30.u32 + 8, ctx.r10.u32);
	// stw r9,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r9.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823839b8
	sub_823839B8(ctx, base);
	// b 0x82383c44
	goto loc_82383C44;
loc_82383C24:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
loc_82383C44:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82383C4C"))) PPC_WEAK_FUNC(sub_82383C4C);
PPC_FUNC_IMPL(__imp__sub_82383C4C) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823839b8
	sub_823839B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383C74"))) PPC_WEAK_FUNC(sub_82383C74);
PPC_FUNC_IMPL(__imp__sub_82383C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383C78"))) PPC_WEAK_FUNC(sub_82383C78);
PPC_FUNC_IMPL(__imp__sub_82383C78) {
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
	// lwz r16,13568(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13568);
	// mflr r12
	// bl 0x8239bcf8
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	r11.s64 = 1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82383ce4
	if (cr0.eq) goto loc_82383CE4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82383230
	sub_82383230(ctx, base);
	// b 0x82383d2c
	goto loc_82383D2C;
loc_82383CE4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x8218e578
	sub_8218E578(ctx, base);
	// lwz r28,88(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82383230
	sub_82383230(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82383D2C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82383C80"))) PPC_WEAK_FUNC(sub_82383C80);
PPC_FUNC_IMPL(__imp__sub_82383C80) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	r11.s64 = 1;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// sth r11,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r11.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82383ce4
	if (cr0.eq) goto loc_82383CE4;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// bl 0x82383230
	sub_82383230(ctx, base);
	// b 0x82383d2c
	goto loc_82383D2C;
loc_82383CE4:
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x8218e578
	sub_8218E578(ctx, base);
	// lwz r28,88(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r5,84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x82383230
	sub_82383230(ctx, base);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// bl 0x823825f0
	sub_823825F0(ctx, base);
loc_82383D2C:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82383D38"))) PPC_WEAK_FUNC(sub_82383D38);
PPC_FUNC_IMPL(__imp__sub_82383D38) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,88
	ctx.r3.s64 = r31.s64 + 88;
	// bl 0x8218ec78
	sub_8218EC78(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383D60"))) PPC_WEAK_FUNC(sub_82383D60);
PPC_FUNC_IMPL(__imp__sub_82383D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,13640(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13640);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82383dfc
	if (cr0.eq) goto loc_82383DFC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82383e60
	if (cr6.eq) goto loc_82383E60;
loc_82383DC8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82383dc8
	if (cr6.lt) goto loc_82383DC8;
	// b 0x82383e60
	goto loc_82383E60;
loc_82383DFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82383a10
	sub_82383A10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82383788
	sub_82383788(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82383e60
	if (cr6.eq) goto loc_82383E60;
loc_82383E1C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82390b40
	sub_82390B40(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82383448
	sub_82383448(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82390948
	sub_82390948(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82383e1c
	if (cr6.lt) goto loc_82383E1C;
loc_82383E60:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82383D68"))) PPC_WEAK_FUNC(sub_82383D68);
PPC_FUNC_IMPL(__imp__sub_82383D68) {
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
	// addi r31,r1,-192
	r31.s64 = ctx.r1.s64 + -192;
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82383dfc
	if (cr0.eq) goto loc_82383DFC;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82383e60
	if (cr6.eq) goto loc_82383E60;
loc_82383DC8:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,36
	r30.s64 = r30.s64 + 36;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82383dc8
	if (cr6.lt) goto loc_82383DC8;
	// b 0x82383e60
	goto loc_82383E60;
loc_82383DFC:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82383a10
	sub_82383A10(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82383788
	sub_82383788(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82383e60
	if (cr6.eq) goto loc_82383E60;
loc_82383E1C:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82390b40
	sub_82390B40(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82383448
	sub_82383448(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82390948
	sub_82390948(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82383e1c
	if (cr6.lt) goto loc_82383E1C;
loc_82383E60:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,192
	ctx.r1.s64 = r31.s64 + 192;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82383E6C"))) PPC_WEAK_FUNC(sub_82383E6C);
PPC_FUNC_IMPL(__imp__sub_82383E6C) {
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
	// bl 0x82390948
	sub_82390948(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383E94"))) PPC_WEAK_FUNC(sub_82383E94);
PPC_FUNC_IMPL(__imp__sub_82383E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383E98"))) PPC_WEAK_FUNC(sub_82383E98);
PPC_FUNC_IMPL(__imp__sub_82383E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// lwz r16,13712(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13712);
	// mflr r12
	// bl 0x8239bcf4
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82383f34
	if (cr0.eq) goto loc_82383F34;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82383f98
	if (cr6.eq) goto loc_82383F98;
loc_82383F00:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82383f00
	if (cr6.lt) goto loc_82383F00;
	// b 0x82383f98
	goto loc_82383F98;
loc_82383F34:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82383a60
	sub_82383A60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82383858
	sub_82383858(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82383f98
	if (cr6.eq) goto loc_82383F98;
loc_82383F54:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823943a8
	sub_823943A8(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82383610
	sub_82383610(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82394558
	sub_82394558(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82383f54
	if (cr6.lt) goto loc_82383F54;
loc_82383F98:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82383EA0"))) PPC_WEAK_FUNC(sub_82383EA0);
PPC_FUNC_IMPL(__imp__sub_82383EA0) {
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
	// addi r31,r1,-176
	r31.s64 = ctx.r1.s64 + -176;
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	r30.s64 = 0;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// addi r4,r31,80
	ctx.r4.s64 = r31.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// sth r30,80(r31)
	PPC_STORE_U16(r31.u32 + 80, r30.u16);
	// bl 0x82386168
	sub_82386168(ctx, base);
	// lwz r11,8(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// addi r4,r31,84
	ctx.r4.s64 = r31.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r11.u32);
	// bl 0x82386288
	sub_82386288(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82385760
	sub_82385760(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82383f34
	if (cr0.eq) goto loc_82383F34;
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// mr r29,r30
	r29.u64 = r30.u64;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82383f98
	if (cr6.eq) goto loc_82383F98;
loc_82383F00:
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// add r3,r30,r11
	ctx.r3.u64 = r30.u64 + r11.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,24
	r30.s64 = r30.s64 + 24;
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// blt cr6,0x82383f00
	if (cr6.lt) goto loc_82383F00;
	// b 0x82383f98
	goto loc_82383F98;
loc_82383F34:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82383a60
	sub_82383A60(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// bl 0x82383858
	sub_82383858(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82383f98
	if (cr6.eq) goto loc_82383F98;
loc_82383F54:
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x823943a8
	sub_823943A8(ctx, base);
	// lwz r11,96(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r4,r31,96
	ctx.r4.s64 = r31.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82383610
	sub_82383610(ctx, base);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82394558
	sub_82394558(ctx, base);
	// lwz r11,84(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82383f54
	if (cr6.lt) goto loc_82383F54;
loc_82383F98:
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r31,176
	ctx.r1.s64 = r31.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82383FA4"))) PPC_WEAK_FUNC(sub_82383FA4);
PPC_FUNC_IMPL(__imp__sub_82383FA4) {
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
	// bl 0x82394558
	sub_82394558(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82383FCC"))) PPC_WEAK_FUNC(sub_82383FCC);
PPC_FUNC_IMPL(__imp__sub_82383FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82383FD0"))) PPC_WEAK_FUNC(sub_82383FD0);
PPC_FUNC_IMPL(__imp__sub_82383FD0) {
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
	uint32_t ea{};
	// lwz r17,-18368(r25)
	r17.u64 = PPC_LOAD_U32(r25.u32 + -18368);
	// lwz r16,13784(r6)
	r16.u64 = PPC_LOAD_U32(ctx.r6.u32 + 13784);
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
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8238406c
	if (!cr6.gt) goto loc_8238406C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382af0
	sub_82382AF0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8238403c
	if (!cr6.lt) goto loc_8238403C;
loc_82384014:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82384014
	if (cr6.lt) goto loc_82384014;
loc_8238403C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823839b8
	sub_823839B8(ctx, base);
loc_8238406C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82383FD8"))) PPC_WEAK_FUNC(sub_82383FD8);
PPC_FUNC_IMPL(__imp__sub_82383FD8) {
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
	// addi r31,r1,-144
	r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x8238406c
	if (!cr6.gt) goto loc_8238406C;
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x82382af0
	sub_82382AF0(ctx, base);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r29,88(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r28,80(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x8238403c
	if (!cr6.lt) goto loc_8238403C;
loc_82384014:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r11,r29,3,0,28
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = r11.u64 + ctx.r10.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x823831c8
	sub_823831C8(ctx, base);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// stw r29,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r29.u32);
	// blt cr6,0x82384014
	if (cr6.lt) goto loc_82384014;
loc_8238403C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 84);
	// stw r28,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r28.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// stw r9,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r9.u32);
	// lwz r11,8(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r29,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r29.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(r31.u32 + 84, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r11.u32);
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823839b8
	sub_823839B8(ctx, base);
loc_8238406C:
	// addi r1,r31,144
	ctx.r1.s64 = r31.s64 + 144;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82384074"))) PPC_WEAK_FUNC(sub_82384074);
PPC_FUNC_IMPL(__imp__sub_82384074) {
	PPC_FUNC_PROLOGUE();
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
	// addi r3,r31,80
	ctx.r3.s64 = r31.s64 + 80;
	// bl 0x823839b8
	sub_823839B8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8238409C"))) PPC_WEAK_FUNC(sub_8238409C);
PPC_FUNC_IMPL(__imp__sub_8238409C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

