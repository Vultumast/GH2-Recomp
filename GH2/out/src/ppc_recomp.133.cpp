#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823BE7EC"))) PPC_WEAK_FUNC(sub_823BE7EC);
PPC_FUNC_IMPL(__imp__sub_823BE7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE7F0"))) PPC_WEAK_FUNC(sub_823BE7F0);
PPC_FUNC_IMPL(__imp__sub_823BE7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11756(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11756);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE800"))) PPC_WEAK_FUNC(sub_823BE800);
PPC_FUNC_IMPL(__imp__sub_823BE800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,53,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,-21452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21452);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,11760(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11760, temp.u32);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10474(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10474, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE844"))) PPC_WEAK_FUNC(sub_823BE844);
PPC_FUNC_IMPL(__imp__sub_823BE844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE848"))) PPC_WEAK_FUNC(sub_823BE848);
PPC_FUNC_IMPL(__imp__sub_823BE848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11760(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11760);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE858"))) PPC_WEAK_FUNC(sub_823BE858);
PPC_FUNC_IMPL(__imp__sub_823BE858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lis r11,-32251
	r11.s64 = -2113601536;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,53,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// lfs f13,-21452(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -21452);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// lfs f0,28(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(f0.f64 * ctx.f13.f64));
	// stfs f0,11764(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 11764, temp.u32);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// sth r11,10472(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10472, r11.u16);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE89C"))) PPC_WEAK_FUNC(sub_823BE89C);
PPC_FUNC_IMPL(__imp__sub_823BE89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE8A0"))) PPC_WEAK_FUNC(sub_823BE8A0);
PPC_FUNC_IMPL(__imp__sub_823BE8A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,11764(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 11764);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE8B0"))) PPC_WEAK_FUNC(sub_823BE8B0);
PPC_FUNC_IMPL(__imp__sub_823BE8B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE8D0"))) PPC_WEAK_FUNC(sub_823BE8D0);
PPC_FUNC_IMPL(__imp__sub_823BE8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE8F4"))) PPC_WEAK_FUNC(sub_823BE8F4);
PPC_FUNC_IMPL(__imp__sub_823BE8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE8F8"))) PPC_WEAK_FUNC(sub_823BE8F8);
PPC_FUNC_IMPL(__imp__sub_823BE8F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,24,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE91C"))) PPC_WEAK_FUNC(sub_823BE91C);
PPC_FUNC_IMPL(__imp__sub_823BE91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE920"))) PPC_WEAK_FUNC(sub_823BE920);
PPC_FUNC_IMPL(__imp__sub_823BE920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,12,0,19
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE944"))) PPC_WEAK_FUNC(sub_823BE944);
PPC_FUNC_IMPL(__imp__sub_823BE944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE948"))) PPC_WEAK_FUNC(sub_823BE948);
PPC_FUNC_IMPL(__imp__sub_823BE948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,16,0,15
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE96C"))) PPC_WEAK_FUNC(sub_823BE96C);
PPC_FUNC_IMPL(__imp__sub_823BE96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE970"))) PPC_WEAK_FUNC(sub_823BE970);
PPC_FUNC_IMPL(__imp__sub_823BE970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,20,0,11
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE994"))) PPC_WEAK_FUNC(sub_823BE994);
PPC_FUNC_IMPL(__imp__sub_823BE994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE998"))) PPC_WEAK_FUNC(sub_823BE998);
PPC_FUNC_IMPL(__imp__sub_823BE998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10412(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r11,r4,24,0,7
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r10,r10,0,8,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE9BC"))) PPC_WEAK_FUNC(sub_823BE9BC);
PPC_FUNC_IMPL(__imp__sub_823BE9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE9C0"))) PPC_WEAK_FUNC(sub_823BE9C0);
PPC_FUNC_IMPL(__imp__sub_823BE9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwimi r11,r4,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10412, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,8192
	r11.u64 = r11.u64 | 8192;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BE9DC"))) PPC_WEAK_FUNC(sub_823BE9DC);
PPC_FUNC_IMPL(__imp__sub_823BE9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BE9E0"))) PPC_WEAK_FUNC(sub_823BE9E0);
PPC_FUNC_IMPL(__imp__sub_823BE9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// or r11,r11,r4
	r11.u64 = r11.u64 | ctx.r4.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEA00"))) PPC_WEAK_FUNC(sub_823BEA00);
PPC_FUNC_IMPL(__imp__sub_823BEA00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,0,28,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEA24"))) PPC_WEAK_FUNC(sub_823BEA24);
PPC_FUNC_IMPL(__imp__sub_823BEA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEA28"))) PPC_WEAK_FUNC(sub_823BEA28);
PPC_FUNC_IMPL(__imp__sub_823BEA28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,8,0,23
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,0,24,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF0FF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEA4C"))) PPC_WEAK_FUNC(sub_823BEA4C);
PPC_FUNC_IMPL(__imp__sub_823BEA4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEA50"))) PPC_WEAK_FUNC(sub_823BEA50);
PPC_FUNC_IMPL(__imp__sub_823BEA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,12,0,19
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// rlwinm r10,r10,0,20,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF0FFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEA74"))) PPC_WEAK_FUNC(sub_823BEA74);
PPC_FUNC_IMPL(__imp__sub_823BEA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEA78"))) PPC_WEAK_FUNC(sub_823BEA78);
PPC_FUNC_IMPL(__imp__sub_823BEA78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,16,0,15
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEA9C"))) PPC_WEAK_FUNC(sub_823BEA9C);
PPC_FUNC_IMPL(__imp__sub_823BEA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEAA0"))) PPC_WEAK_FUNC(sub_823BEAA0);
PPC_FUNC_IMPL(__imp__sub_823BEAA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,20,0,11
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0xFFF00000;
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEAC4"))) PPC_WEAK_FUNC(sub_823BEAC4);
PPC_FUNC_IMPL(__imp__sub_823BEAC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEAC8"))) PPC_WEAK_FUNC(sub_823BEAC8);
PPC_FUNC_IMPL(__imp__sub_823BEAC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,10416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r11,r4,24,0,7
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 24) & 0xFF000000;
	// rlwinm r10,r10,0,8,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFF0FFFFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEAEC"))) PPC_WEAK_FUNC(sub_823BEAEC);
PPC_FUNC_IMPL(__imp__sub_823BEAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEAF0"))) PPC_WEAK_FUNC(sub_823BEAF0);
PPC_FUNC_IMPL(__imp__sub_823BEAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwimi r11,r4,28,0,3
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 28) & 0xF0000000) | (r11.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,10416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10416, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,4096
	r11.u64 = r11.u64 | 4096;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB0C"))) PPC_WEAK_FUNC(sub_823BEB0C);
PPC_FUNC_IMPL(__imp__sub_823BEB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEB10"))) PPC_WEAK_FUNC(sub_823BEB10);
PPC_FUNC_IMPL(__imp__sub_823BEB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB1C"))) PPC_WEAK_FUNC(sub_823BEB1C);
PPC_FUNC_IMPL(__imp__sub_823BEB1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEB20"))) PPC_WEAK_FUNC(sub_823BEB20);
PPC_FUNC_IMPL(__imp__sub_823BEB20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB2C"))) PPC_WEAK_FUNC(sub_823BEB2C);
PPC_FUNC_IMPL(__imp__sub_823BEB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEB30"))) PPC_WEAK_FUNC(sub_823BEB30);
PPC_FUNC_IMPL(__imp__sub_823BEB30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB3C"))) PPC_WEAK_FUNC(sub_823BEB3C);
PPC_FUNC_IMPL(__imp__sub_823BEB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEB40"))) PPC_WEAK_FUNC(sub_823BEB40);
PPC_FUNC_IMPL(__imp__sub_823BEB40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB4C"))) PPC_WEAK_FUNC(sub_823BEB4C);
PPC_FUNC_IMPL(__imp__sub_823BEB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEB50"))) PPC_WEAK_FUNC(sub_823BEB50);
PPC_FUNC_IMPL(__imp__sub_823BEB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,10412(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB5C"))) PPC_WEAK_FUNC(sub_823BEB5C);
PPC_FUNC_IMPL(__imp__sub_823BEB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEB60"))) PPC_WEAK_FUNC(sub_823BEB60);
PPC_FUNC_IMPL(__imp__sub_823BEB60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB6C"))) PPC_WEAK_FUNC(sub_823BEB6C);
PPC_FUNC_IMPL(__imp__sub_823BEB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEB70"))) PPC_WEAK_FUNC(sub_823BEB70);
PPC_FUNC_IMPL(__imp__sub_823BEB70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10412(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10412);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB7C"))) PPC_WEAK_FUNC(sub_823BEB7C);
PPC_FUNC_IMPL(__imp__sub_823BEB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEB80"))) PPC_WEAK_FUNC(sub_823BEB80);
PPC_FUNC_IMPL(__imp__sub_823BEB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10412(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10412);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB8C"))) PPC_WEAK_FUNC(sub_823BEB8C);
PPC_FUNC_IMPL(__imp__sub_823BEB8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEB90"))) PPC_WEAK_FUNC(sub_823BEB90);
PPC_FUNC_IMPL(__imp__sub_823BEB90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEB9C"))) PPC_WEAK_FUNC(sub_823BEB9C);
PPC_FUNC_IMPL(__imp__sub_823BEB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEBA0"))) PPC_WEAK_FUNC(sub_823BEBA0);
PPC_FUNC_IMPL(__imp__sub_823BEBA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,28,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEBAC"))) PPC_WEAK_FUNC(sub_823BEBAC);
PPC_FUNC_IMPL(__imp__sub_823BEBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEBB0"))) PPC_WEAK_FUNC(sub_823BEBB0);
PPC_FUNC_IMPL(__imp__sub_823BEBB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEBBC"))) PPC_WEAK_FUNC(sub_823BEBBC);
PPC_FUNC_IMPL(__imp__sub_823BEBBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEBC0"))) PPC_WEAK_FUNC(sub_823BEBC0);
PPC_FUNC_IMPL(__imp__sub_823BEBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,20,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEBCC"))) PPC_WEAK_FUNC(sub_823BEBCC);
PPC_FUNC_IMPL(__imp__sub_823BEBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEBD0"))) PPC_WEAK_FUNC(sub_823BEBD0);
PPC_FUNC_IMPL(__imp__sub_823BEBD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lhz r11,10416(r3)
	r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEBDC"))) PPC_WEAK_FUNC(sub_823BEBDC);
PPC_FUNC_IMPL(__imp__sub_823BEBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEBE0"))) PPC_WEAK_FUNC(sub_823BEBE0);
PPC_FUNC_IMPL(__imp__sub_823BEBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,12,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEBEC"))) PPC_WEAK_FUNC(sub_823BEBEC);
PPC_FUNC_IMPL(__imp__sub_823BEBEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEBF0"))) PPC_WEAK_FUNC(sub_823BEBF0);
PPC_FUNC_IMPL(__imp__sub_823BEBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10416(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10416);
	// clrlwi r3,r11,28
	ctx.r3.u64 = r11.u32 & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEBFC"))) PPC_WEAK_FUNC(sub_823BEBFC);
PPC_FUNC_IMPL(__imp__sub_823BEBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEC00"))) PPC_WEAK_FUNC(sub_823BEC00);
PPC_FUNC_IMPL(__imp__sub_823BEC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10416(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10416);
	// rlwinm r3,r11,4,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEC0C"))) PPC_WEAK_FUNC(sub_823BEC0C);
PPC_FUNC_IMPL(__imp__sub_823BEC0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEC10"))) PPC_WEAK_FUNC(sub_823BEC10);
PPC_FUNC_IMPL(__imp__sub_823BEC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r11,1087
	r11.s64 = 1087;
	// bne cr6,0x823bec20
	if (!cr6.eq) goto loc_823BEC20;
	// li r11,1024
	r11.s64 = 1024;
loc_823BEC20:
	// stw r11,10444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10444, r11.u32);
	// cntlzw r11,r4
	r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,10436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwimi r10,r11,16,15,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x10000) | (ctx.r10.u64 & 0xFFFFFFFFFFFEFFFF);
	// stw r10,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, ctx.r10.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEC50"))) PPC_WEAK_FUNC(sub_823BEC50);
PPC_FUNC_IMPL(__imp__sub_823BEC50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10444(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10444);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEC5C"))) PPC_WEAK_FUNC(sub_823BEC5C);
PPC_FUNC_IMPL(__imp__sub_823BEC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEC60"))) PPC_WEAK_FUNC(sub_823BEC60);
PPC_FUNC_IMPL(__imp__sub_823BEC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r8,12304(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12304);
	// stw r4,11892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11892, ctx.r4.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x823bec98
	if (cr6.eq) goto loc_823BEC98;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x823bec98
	if (cr6.eq) goto loc_823BEC98;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823bec98
	if (cr6.eq) goto loc_823BEC98;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_823BEC98:
	// rlwinm r11,r10,13,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	r11.u64 = r11.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,28(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r11,16,12,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10244(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10244);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10244(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10244, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BED04"))) PPC_WEAK_FUNC(sub_823BED04);
PPC_FUNC_IMPL(__imp__sub_823BED04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BED08"))) PPC_WEAK_FUNC(sub_823BED08);
PPC_FUNC_IMPL(__imp__sub_823BED08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11892(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11892);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BED10"))) PPC_WEAK_FUNC(sub_823BED10);
PPC_FUNC_IMPL(__imp__sub_823BED10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r8,12308(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12308);
	// stw r4,11896(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11896, ctx.r4.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x823bed48
	if (cr6.eq) goto loc_823BED48;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x823bed48
	if (cr6.eq) goto loc_823BED48;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823bed48
	if (cr6.eq) goto loc_823BED48;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_823BED48:
	// rlwinm r11,r10,13,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	r11.u64 = r11.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,28(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,54,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r11,16,12,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10252(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10252);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10252(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10252, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEDB4"))) PPC_WEAK_FUNC(sub_823BEDB4);
PPC_FUNC_IMPL(__imp__sub_823BEDB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEDB8"))) PPC_WEAK_FUNC(sub_823BEDB8);
PPC_FUNC_IMPL(__imp__sub_823BEDB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11896(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEDC0"))) PPC_WEAK_FUNC(sub_823BEDC0);
PPC_FUNC_IMPL(__imp__sub_823BEDC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r8,12312(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12312);
	// stw r4,11900(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11900, ctx.r4.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x823bedf8
	if (cr6.eq) goto loc_823BEDF8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x823bedf8
	if (cr6.eq) goto loc_823BEDF8;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823bedf8
	if (cr6.eq) goto loc_823BEDF8;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_823BEDF8:
	// rlwinm r11,r10,13,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	r11.u64 = r11.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,28(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,53,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r11,16,12,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10256(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10256);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10256(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10256, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEE64"))) PPC_WEAK_FUNC(sub_823BEE64);
PPC_FUNC_IMPL(__imp__sub_823BEE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEE68"))) PPC_WEAK_FUNC(sub_823BEE68);
PPC_FUNC_IMPL(__imp__sub_823BEE68) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11900(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11900);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEE70"))) PPC_WEAK_FUNC(sub_823BEE70);
PPC_FUNC_IMPL(__imp__sub_823BEE70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r8,12316(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12316);
	// stw r4,11904(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11904, ctx.r4.u32);
	// cmplwi r8,0
	cr0.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r10,28(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r11,r10,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x823beea8
	if (cr6.eq) goto loc_823BEEA8;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x823beea8
	if (cr6.eq) goto loc_823BEEA8;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x823beea8
	if (cr6.eq) goto loc_823BEEA8;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_823BEEA8:
	// rlwinm r11,r10,13,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r4
	r11.u64 = r11.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// lwz r11,28(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// li r12,1
	r12.s64 = 1;
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// rlwinm r7,r11,0,16,11
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// rlwinm r11,r9,31,1,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// addi r11,r11,-3
	r11.s64 = r11.s64 + -3;
	// rlwinm r9,r6,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// and r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rldicr r12,r12,52,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r11,r11,16,12,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF0000;
	// or r10,r7,r11
	ctx.r10.u64 = ctx.r7.u64 | r11.u64;
	// stw r10,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r10.u32);
	// lwz r10,10260(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10260);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,10260(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10260, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEF14"))) PPC_WEAK_FUNC(sub_823BEF14);
PPC_FUNC_IMPL(__imp__sub_823BEF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEF18"))) PPC_WEAK_FUNC(sub_823BEF18);
PPC_FUNC_IMPL(__imp__sub_823BEF18) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,11904(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11904);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEF20"))) PPC_WEAK_FUNC(sub_823BEF20);
PPC_FUNC_IMPL(__imp__sub_823BEF20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,47,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10496(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10496, temp.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEF44"))) PPC_WEAK_FUNC(sub_823BEF44);
PPC_FUNC_IMPL(__imp__sub_823BEF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEF48"))) PPC_WEAK_FUNC(sub_823BEF48);
PPC_FUNC_IMPL(__imp__sub_823BEF48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10496(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10496);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEF58"))) PPC_WEAK_FUNC(sub_823BEF58);
PPC_FUNC_IMPL(__imp__sub_823BEF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,48,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10492(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10492, temp.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEF7C"))) PPC_WEAK_FUNC(sub_823BEF7C);
PPC_FUNC_IMPL(__imp__sub_823BEF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEF80"))) PPC_WEAK_FUNC(sub_823BEF80);
PPC_FUNC_IMPL(__imp__sub_823BEF80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10492(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10492);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEF90"))) PPC_WEAK_FUNC(sub_823BEF90);
PPC_FUNC_IMPL(__imp__sub_823BEF90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10488(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10488);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r4,r11,0,0,29
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// rldicr r12,r12,49,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10488, ctx.r4.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEFB4"))) PPC_WEAK_FUNC(sub_823BEFB4);
PPC_FUNC_IMPL(__imp__sub_823BEFB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEFB8"))) PPC_WEAK_FUNC(sub_823BEFB8);
PPC_FUNC_IMPL(__imp__sub_823BEFB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10488(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10488);
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEFC4"))) PPC_WEAK_FUNC(sub_823BEFC4);
PPC_FUNC_IMPL(__imp__sub_823BEFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEFC8"))) PPC_WEAK_FUNC(sub_823BEFC8);
PPC_FUNC_IMPL(__imp__sub_823BEFC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, ctx.r4.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEFEC"))) PPC_WEAK_FUNC(sub_823BEFEC);
PPC_FUNC_IMPL(__imp__sub_823BEFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BEFF0"))) PPC_WEAK_FUNC(sub_823BEFF0);
PPC_FUNC_IMPL(__imp__sub_823BEFF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BEFFC"))) PPC_WEAK_FUNC(sub_823BEFFC);
PPC_FUNC_IMPL(__imp__sub_823BEFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF000"))) PPC_WEAK_FUNC(sub_823BF000);
PPC_FUNC_IMPL(__imp__sub_823BF000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r4,21,10,10
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (r11.u64 & 0xFFFFFFFFFFDFFFFF);
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

__attribute__((alias("__imp__sub_823BF01C"))) PPC_WEAK_FUNC(sub_823BF01C);
PPC_FUNC_IMPL(__imp__sub_823BF01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF020"))) PPC_WEAK_FUNC(sub_823BF020);
PPC_FUNC_IMPL(__imp__sub_823BF020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10440(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF02C"))) PPC_WEAK_FUNC(sub_823BF02C);
PPC_FUNC_IMPL(__imp__sub_823BF02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF030"))) PPC_WEAK_FUNC(sub_823BF030);
PPC_FUNC_IMPL(__imp__sub_823BF030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// li r12,1
	r12.s64 = 1;
	// stw r4,10328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10328, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicr r12,r12,38,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF04C"))) PPC_WEAK_FUNC(sub_823BF04C);
PPC_FUNC_IMPL(__imp__sub_823BF04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF050"))) PPC_WEAK_FUNC(sub_823BF050);
PPC_FUNC_IMPL(__imp__sub_823BF050) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10328(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10328);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF058"))) PPC_WEAK_FUNC(sub_823BF058);
PPC_FUNC_IMPL(__imp__sub_823BF058) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10428(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r11,r4,4,27,27
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x10) | (r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF074"))) PPC_WEAK_FUNC(sub_823BF074);
PPC_FUNC_IMPL(__imp__sub_823BF074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF078"))) PPC_WEAK_FUNC(sub_823BF078);
PPC_FUNC_IMPL(__imp__sub_823BF078) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10428(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF084"))) PPC_WEAK_FUNC(sub_823BF084);
PPC_FUNC_IMPL(__imp__sub_823BF084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF088"))) PPC_WEAK_FUNC(sub_823BF088);
PPC_FUNC_IMPL(__imp__sub_823BF088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10428(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10428);
	// rlwimi r11,r4,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10428, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF0A4"))) PPC_WEAK_FUNC(sub_823BF0A4);
PPC_FUNC_IMPL(__imp__sub_823BF0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF0A8"))) PPC_WEAK_FUNC(sub_823BF0A8);
PPC_FUNC_IMPL(__imp__sub_823BF0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10428(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10428);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r10,r11,0,24,29
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFC) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF0BC"))) PPC_WEAK_FUNC(sub_823BF0BC);
PPC_FUNC_IMPL(__imp__sub_823BF0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF0C0"))) PPC_WEAK_FUNC(sub_823BF0C0);
PPC_FUNC_IMPL(__imp__sub_823BF0C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,32,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10572(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10572, temp.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF0E4"))) PPC_WEAK_FUNC(sub_823BF0E4);
PPC_FUNC_IMPL(__imp__sub_823BF0E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF0E8"))) PPC_WEAK_FUNC(sub_823BF0E8);
PPC_FUNC_IMPL(__imp__sub_823BF0E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10572(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10572);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF0F0"))) PPC_WEAK_FUNC(sub_823BF0F0);
PPC_FUNC_IMPL(__imp__sub_823BF0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,34,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10564(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10564, temp.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF114"))) PPC_WEAK_FUNC(sub_823BF114);
PPC_FUNC_IMPL(__imp__sub_823BF114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF118"))) PPC_WEAK_FUNC(sub_823BF118);
PPC_FUNC_IMPL(__imp__sub_823BF118) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10564(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10564);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF120"))) PPC_WEAK_FUNC(sub_823BF120);
PPC_FUNC_IMPL(__imp__sub_823BF120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10576(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10576, temp.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF13C"))) PPC_WEAK_FUNC(sub_823BF13C);
PPC_FUNC_IMPL(__imp__sub_823BF13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF140"))) PPC_WEAK_FUNC(sub_823BF140);
PPC_FUNC_IMPL(__imp__sub_823BF140) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10576(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10576);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF148"))) PPC_WEAK_FUNC(sub_823BF148);
PPC_FUNC_IMPL(__imp__sub_823BF148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,33,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10568(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10568, temp.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF16C"))) PPC_WEAK_FUNC(sub_823BF16C);
PPC_FUNC_IMPL(__imp__sub_823BF16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF170"))) PPC_WEAK_FUNC(sub_823BF170);
PPC_FUNC_IMPL(__imp__sub_823BF170) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10568(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF178"))) PPC_WEAK_FUNC(sub_823BF178);
PPC_FUNC_IMPL(__imp__sub_823BF178) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwimi r11,r4,20,9,11
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,11716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11716, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF194"))) PPC_WEAK_FUNC(sub_823BF194);
PPC_FUNC_IMPL(__imp__sub_823BF194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF198"))) PPC_WEAK_FUNC(sub_823BF198);
PPC_FUNC_IMPL(__imp__sub_823BF198) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF1A4"))) PPC_WEAK_FUNC(sub_823BF1A4);
PPC_FUNC_IMPL(__imp__sub_823BF1A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF1A8"))) PPC_WEAK_FUNC(sub_823BF1A8);
PPC_FUNC_IMPL(__imp__sub_823BF1A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lbz r11,10815(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10815);
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwimi r11,r4,17,12,14
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// stw r11,11716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11716, r11.u32);
	// bne 0x823bf1e0
	if (!cr0.eq) goto loc_823BF1E0;
	// rlwinm r11,r11,0,12,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE0000;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823bf1e0
	if (!cr6.eq) goto loc_823BF1E0;
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	r12.s64 = -257;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// b 0x823bf1e8
	goto loc_823BF1E8;
loc_823BF1E0:
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
loc_823BF1E8:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r11.u64);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF1FC"))) PPC_WEAK_FUNC(sub_823BF1FC);
PPC_FUNC_IMPL(__imp__sub_823BF1FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF200"))) PPC_WEAK_FUNC(sub_823BF200);
PPC_FUNC_IMPL(__imp__sub_823BF200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF20C"))) PPC_WEAK_FUNC(sub_823BF20C);
PPC_FUNC_IMPL(__imp__sub_823BF20C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF210"))) PPC_WEAK_FUNC(sub_823BF210);
PPC_FUNC_IMPL(__imp__sub_823BF210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10432(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,3,28,28
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF22C"))) PPC_WEAK_FUNC(sub_823BF22C);
PPC_FUNC_IMPL(__imp__sub_823BF22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF230"))) PPC_WEAK_FUNC(sub_823BF230);
PPC_FUNC_IMPL(__imp__sub_823BF230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10432(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF23C"))) PPC_WEAK_FUNC(sub_823BF23C);
PPC_FUNC_IMPL(__imp__sub_823BF23C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF240"))) PPC_WEAK_FUNC(sub_823BF240);
PPC_FUNC_IMPL(__imp__sub_823BF240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10432(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,2,29,29
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF25C"))) PPC_WEAK_FUNC(sub_823BF25C);
PPC_FUNC_IMPL(__imp__sub_823BF25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF260"))) PPC_WEAK_FUNC(sub_823BF260);
PPC_FUNC_IMPL(__imp__sub_823BF260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10432(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF26C"))) PPC_WEAK_FUNC(sub_823BF26C);
PPC_FUNC_IMPL(__imp__sub_823BF26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF270"))) PPC_WEAK_FUNC(sub_823BF270);
PPC_FUNC_IMPL(__imp__sub_823BF270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10432(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwimi r11,r4,5,26,26
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,10432(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10432, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF28C"))) PPC_WEAK_FUNC(sub_823BF28C);
PPC_FUNC_IMPL(__imp__sub_823BF28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF290"))) PPC_WEAK_FUNC(sub_823BF290);
PPC_FUNC_IMPL(__imp__sub_823BF290) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10432(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10432);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF29C"))) PPC_WEAK_FUNC(sub_823BF29C);
PPC_FUNC_IMPL(__imp__sub_823BF29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF2A0"))) PPC_WEAK_FUNC(sub_823BF2A0);
PPC_FUNC_IMPL(__imp__sub_823BF2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10434(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10434, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF2B4"))) PPC_WEAK_FUNC(sub_823BF2B4);
PPC_FUNC_IMPL(__imp__sub_823BF2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF2B8"))) PPC_WEAK_FUNC(sub_823BF2B8);
PPC_FUNC_IMPL(__imp__sub_823BF2B8) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10434(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10434);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF2C0"))) PPC_WEAK_FUNC(sub_823BF2C0);
PPC_FUNC_IMPL(__imp__sub_823BF2C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13444, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF2C8"))) PPC_WEAK_FUNC(sub_823BF2C8);
PPC_FUNC_IMPL(__imp__sub_823BF2C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,13444(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13444);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF2D0"))) PPC_WEAK_FUNC(sub_823BF2D0);
PPC_FUNC_IMPL(__imp__sub_823BF2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwimi r11,r4,23,2,8
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3F800000) | (r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,11716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11716, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF2E0"))) PPC_WEAK_FUNC(sub_823BF2E0);
PPC_FUNC_IMPL(__imp__sub_823BF2E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11716(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11716);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF2EC"))) PPC_WEAK_FUNC(sub_823BF2EC);
PPC_FUNC_IMPL(__imp__sub_823BF2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF2F0"))) PPC_WEAK_FUNC(sub_823BF2F0);
PPC_FUNC_IMPL(__imp__sub_823BF2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-20400
	ctx.r9.s64 = ctx.r9.s64 + -20400;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// srd r6,r6,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lbz r7,11788(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11788);
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r7,r9,22,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 22) & 0x1;
	// rlwimi r9,r10,11,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// rlwinm r7,r7,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwimi r31,r10,21,9,10
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0x600000) | (r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r10,21,4,6
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 21) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// rlwimi r10,r7,31,13,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz r8,11866(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwimi r10,r7,31,1,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm r7,r10,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFF;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	r11.u64 = ctx.r6.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF3B0"))) PPC_WEAK_FUNC(sub_823BF3B0);
PPC_FUNC_IMPL(__imp__sub_823BF3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,1040(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1040);
	// lwz r9,1036(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1036);
	// rlwinm r11,r10,21,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF3E0"))) PPC_WEAK_FUNC(sub_823BF3E0);
PPC_FUNC_IMPL(__imp__sub_823BF3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = r11.s64 + 1024;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r7,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (r11.u8 & 0x7F));
	// lbz r11,11866(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwinm r7,r11,0,31,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r11,r5,31,13,31
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (r11.u64 & 0xFFFFFFFFFFF80000);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,1,11
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (r11.u64 & 0xFFFFFFFF800FFFFF);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r11,r11,13,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0xFFF;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// stb r31,11866(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11866, r31.u8);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	r11.u64 = ctx.r6.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF468"))) PPC_WEAK_FUNC(sub_823BF468);
PPC_FUNC_IMPL(__imp__sub_823BF468) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11866(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 11866);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF478"))) PPC_WEAK_FUNC(sub_823BF478);
PPC_FUNC_IMPL(__imp__sub_823BF478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,-20400
	ctx.r9.s64 = ctx.r9.s64 + -20400;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// srd r6,r6,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// lbz r7,11788(r8)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11788);
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rotlwi r7,r7,2
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r4,r7,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r7,r9,21,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x1;
	// rlwimi r9,r10,10,21,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 10) & 0x400) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// andc r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 & ~ctx.r7.u64;
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// rlwinm r7,r7,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwimi r31,r10,19,11,12
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0x180000) | (r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r10,19,4,6
	r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 19) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// rlwimi r10,r7,31,13,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFF80000);
	// lbz r8,11866(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwimi r10,r7,31,1,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r10.u64 & 0xFFFFFFFF800FFFFF);
	// rlwinm r7,r10,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFF;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ctx.r10.u64;
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// rlwimi r10,r9,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	r11.u64 = ctx.r6.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF538"))) PPC_WEAK_FUNC(sub_823BF538);
PPC_FUNC_IMPL(__imp__sub_823BF538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,1040(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 1040);
	// lwz r9,1036(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1036);
	// rlwinm r11,r10,22,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF568"))) PPC_WEAK_FUNC(sub_823BF568);
PPC_FUNC_IMPL(__imp__sub_823BF568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = r11.s64 + 1024;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r9,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (r11.u8 & 0x7F));
	// lbz r11,11866(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwinm r9,r11,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,13,31
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (r11.u64 & 0xFFFFFFFFFFF80000);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwimi r11,r5,31,1,11
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (r11.u64 & 0xFFFFFFFF800FFFFF);
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// rlwinm r11,r11,13,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0xFFF;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// stb r31,11866(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11866, r31.u8);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	r11.u64 = ctx.r6.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF5EC"))) PPC_WEAK_FUNC(sub_823BF5EC);
PPC_FUNC_IMPL(__imp__sub_823BF5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF5F0"))) PPC_WEAK_FUNC(sub_823BF5F0);
PPC_FUNC_IMPL(__imp__sub_823BF5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11866(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 11866);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF600"))) PPC_WEAK_FUNC(sub_823BF600);
PPC_FUNC_IMPL(__imp__sub_823BF600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwimi r9,r5,23,7,8
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r9.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF63C"))) PPC_WEAK_FUNC(sub_823BF63C);
PPC_FUNC_IMPL(__imp__sub_823BF63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF640"))) PPC_WEAK_FUNC(sub_823BF640);
PPC_FUNC_IMPL(__imp__sub_823BF640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1036(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1036);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF654"))) PPC_WEAK_FUNC(sub_823BF654);
PPC_FUNC_IMPL(__imp__sub_823BF654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF658"))) PPC_WEAK_FUNC(sub_823BF658);
PPC_FUNC_IMPL(__imp__sub_823BF658) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r8,r3,r4
	ctx.r8.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r11,1024
	ctx.r10.s64 = r11.s64 + 1024;
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// srd r6,r7,r11
	ctx.r6.u64 = r11.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (r11.u8 & 0x7F));
	// lbz r11,11866(r8)
	r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 11866);
	// rlwinm r7,r11,0,30,28
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// lwz r11,12(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mr r5,r11
	ctx.r5.u64 = r11.u64;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// rlwimi r11,r5,31,13,31
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FFFF) | (r11.u64 & 0xFFFFFFFFFFF80000);
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r11,r5,31,1,11
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 31) & 0x7FF00000) | (r11.u64 & 0xFFFFFFFF800FFFFF);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r11,r11,13,20,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0xFFF;
	// mr r31,r9
	r31.u64 = ctx.r9.u64;
	// and r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	// andc r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r7.u64;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// rlwimi r11,r4,0,0,29
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, r11.u32);
	// stb r31,11866(r8)
	PPC_STORE_U8(ctx.r8.u32 + 11866, r31.u8);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r6,r11
	r11.u64 = ctx.r6.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF6E0"))) PPC_WEAK_FUNC(sub_823BF6E0);
PPC_FUNC_IMPL(__imp__sub_823BF6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,11866(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 11866);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF6F0"))) PPC_WEAK_FUNC(sub_823BF6F0);
PPC_FUNC_IMPL(__imp__sub_823BF6F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823bf710
	if (!cr0.eq) goto loc_823BF710;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823bf74c
	if (cr0.eq) goto loc_823BF74C;
loc_823BF710:
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-20400
	ctx.r10.s64 = ctx.r10.s64 + -20400;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwimi r8,r10,25,4,6
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (ctx.r8.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_823BF74C:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11788(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11788, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF758"))) PPC_WEAK_FUNC(sub_823BF758);
PPC_FUNC_IMPL(__imp__sub_823BF758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11788(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 11788);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF764"))) PPC_WEAK_FUNC(sub_823BF764);
PPC_FUNC_IMPL(__imp__sub_823BF764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF768"))) PPC_WEAK_FUNC(sub_823BF768);
PPC_FUNC_IMPL(__imp__sub_823BF768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,-8784(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8784);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF7C8"))) PPC_WEAK_FUNC(sub_823BF7C8);
PPC_FUNC_IMPL(__imp__sub_823BF7C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1044);
	// rlwinm r11,r11,23,0,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
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
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF80C"))) PPC_WEAK_FUNC(sub_823BF80C);
PPC_FUNC_IMPL(__imp__sub_823BF80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF810"))) PPC_WEAK_FUNC(sub_823BF810);
PPC_FUNC_IMPL(__imp__sub_823BF810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lfs f0,7724(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7724);
	f0.f64 = double(temp.f32);
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,-16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwimi r8,r9,12,10,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x3FF000) | (ctx.r8.u64 & 0xFFFFFFFFFFC00FFF);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF870"))) PPC_WEAK_FUNC(sub_823BF870);
PPC_FUNC_IMPL(__imp__sub_823BF870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1040);
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFF) != 0);
	r11.s64 = r11.s32 >> 22;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,-11704(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -11704);
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

__attribute__((alias("__imp__sub_823BF8B0"))) PPC_WEAK_FUNC(sub_823BF8B0);
PPC_FUNC_IMPL(__imp__sub_823BF8B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,3102
	r11.s64 = ctx.r4.s64 + 3102;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823bf910
	if (cr0.eq) goto loc_823BF910;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// rlwinm r11,r11,30,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0xF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// bgt cr6,0x823bf8e4
	if (cr6.gt) goto loc_823BF8E4;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_823BF8E4:
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r11,2,26,29
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0x3C) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFC3);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_823BF910:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11814(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11814, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF91C"))) PPC_WEAK_FUNC(sub_823BF91C);
PPC_FUNC_IMPL(__imp__sub_823BF91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF920"))) PPC_WEAK_FUNC(sub_823BF920);
PPC_FUNC_IMPL(__imp__sub_823BF920) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11814(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 11814);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF92C"))) PPC_WEAK_FUNC(sub_823BF92C);
PPC_FUNC_IMPL(__imp__sub_823BF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF930"))) PPC_WEAK_FUNC(sub_823BF930);
PPC_FUNC_IMPL(__imp__sub_823BF930) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,3102
	r11.s64 = ctx.r4.s64 + 3102;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823bf990
	if (cr0.eq) goto loc_823BF990;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// mulli r10,r4,24
	ctx.r10.s64 = ctx.r4.s64 * 24;
	// rlwinm r11,r11,26,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// addi r10,r10,1024
	ctx.r10.s64 = ctx.r10.s64 + 1024;
	// blt cr6,0x823bf964
	if (cr6.lt) goto loc_823BF964;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_823BF964:
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwimi r8,r11,6,22,25
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0x3C0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFC3F);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_823BF990:
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11840(r10)
	PPC_STORE_U8(ctx.r10.u32 + 11840, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF99C"))) PPC_WEAK_FUNC(sub_823BF99C);
PPC_FUNC_IMPL(__imp__sub_823BF99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF9A0"))) PPC_WEAK_FUNC(sub_823BF9A0);
PPC_FUNC_IMPL(__imp__sub_823BF9A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11840(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 11840);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF9AC"))) PPC_WEAK_FUNC(sub_823BF9AC);
PPC_FUNC_IMPL(__imp__sub_823BF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BF9B0"))) PPC_WEAK_FUNC(sub_823BF9B0);
PPC_FUNC_IMPL(__imp__sub_823BF9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 ^ 1;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BF9FC"))) PPC_WEAK_FUNC(sub_823BF9FC);
PPC_FUNC_IMPL(__imp__sub_823BF9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFA00"))) PPC_WEAK_FUNC(sub_823BFA00);
PPC_FUNC_IMPL(__imp__sub_823BFA00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1044);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFA1C"))) PPC_WEAK_FUNC(sub_823BFA1C);
PPC_FUNC_IMPL(__imp__sub_823BFA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFA20"))) PPC_WEAK_FUNC(sub_823BFA20);
PPC_FUNC_IMPL(__imp__sub_823BFA20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1024);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFA58"))) PPC_WEAK_FUNC(sub_823BFA58);
PPC_FUNC_IMPL(__imp__sub_823BFA58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1024(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1024);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFA6C"))) PPC_WEAK_FUNC(sub_823BFA6C);
PPC_FUNC_IMPL(__imp__sub_823BFA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFA70"))) PPC_WEAK_FUNC(sub_823BFA70);
PPC_FUNC_IMPL(__imp__sub_823BFA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1024);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r9,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFAA8"))) PPC_WEAK_FUNC(sub_823BFAA8);
PPC_FUNC_IMPL(__imp__sub_823BFAA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1024(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1024);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFABC"))) PPC_WEAK_FUNC(sub_823BFABC);
PPC_FUNC_IMPL(__imp__sub_823BFABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFAC0"))) PPC_WEAK_FUNC(sub_823BFAC0);
PPC_FUNC_IMPL(__imp__sub_823BFAC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,1024(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 1024);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// stw r9,1024(r11)
	PPC_STORE_U32(r11.u32 + 1024, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFAF8"))) PPC_WEAK_FUNC(sub_823BFAF8);
PPC_FUNC_IMPL(__imp__sub_823BFAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lhz r11,1024(r11)
	r11.u64 = PPC_LOAD_U16(r11.u32 + 1024);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFB0C"))) PPC_WEAK_FUNC(sub_823BFB0C);
PPC_FUNC_IMPL(__imp__sub_823BFB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFB10"))) PPC_WEAK_FUNC(sub_823BFB10);
PPC_FUNC_IMPL(__imp__sub_823BFB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwimi r9,r5,3,27,28
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFB4C"))) PPC_WEAK_FUNC(sub_823BFB4C);
PPC_FUNC_IMPL(__imp__sub_823BFB4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFB50"))) PPC_WEAK_FUNC(sub_823BFB50);
PPC_FUNC_IMPL(__imp__sub_823BFB50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1044);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFB64"))) PPC_WEAK_FUNC(sub_823BFB64);
PPC_FUNC_IMPL(__imp__sub_823BFB64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFB68"))) PPC_WEAK_FUNC(sub_823BFB68);
PPC_FUNC_IMPL(__imp__sub_823BFB68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwimi r9,r5,22,5,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r9.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFBA4"))) PPC_WEAK_FUNC(sub_823BFBA4);
PPC_FUNC_IMPL(__imp__sub_823BFBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFBA8"))) PPC_WEAK_FUNC(sub_823BFBA8);
PPC_FUNC_IMPL(__imp__sub_823BFBA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1040);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r3,r11,27
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFBC0"))) PPC_WEAK_FUNC(sub_823BFBC0);
PPC_FUNC_IMPL(__imp__sub_823BFBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwimi r9,r5,27,0,4
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r9.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r9,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFBFC"))) PPC_WEAK_FUNC(sub_823BFBFC);
PPC_FUNC_IMPL(__imp__sub_823BFBFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFC00"))) PPC_WEAK_FUNC(sub_823BFC00);
PPC_FUNC_IMPL(__imp__sub_823BFC00) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1040(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1040);
	// srawi r3,r11,27
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFC14"))) PPC_WEAK_FUNC(sub_823BFC14);
PPC_FUNC_IMPL(__imp__sub_823BFC14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFC18"))) PPC_WEAK_FUNC(sub_823BFC18);
PPC_FUNC_IMPL(__imp__sub_823BFC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// rlwimi r9,r5,2,29,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r9,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFC54"))) PPC_WEAK_FUNC(sub_823BFC54);
PPC_FUNC_IMPL(__imp__sub_823BFC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFC58"))) PPC_WEAK_FUNC(sub_823BFC58);
PPC_FUNC_IMPL(__imp__sub_823BFC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1044(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1044);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFC6C"))) PPC_WEAK_FUNC(sub_823BFC6C);
PPC_FUNC_IMPL(__imp__sub_823BFC6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFC70"))) PPC_WEAK_FUNC(sub_823BFC70);
PPC_FUNC_IMPL(__imp__sub_823BFC70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// cntlzw r8,r5
	ctx.r8.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// addi r11,r11,1024
	r11.s64 = r11.s64 + 1024;
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwimi r9,r8,11,20,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 11) & 0x800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFCB4"))) PPC_WEAK_FUNC(sub_823BFCB4);
PPC_FUNC_IMPL(__imp__sub_823BFCB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFCB8"))) PPC_WEAK_FUNC(sub_823BFCB8);
PPC_FUNC_IMPL(__imp__sub_823BFCB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1028(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1028);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFCD0"))) PPC_WEAK_FUNC(sub_823BFCD0);
PPC_FUNC_IMPL(__imp__sub_823BFCD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// lfs f0,12512(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12512);
	f0.f64 = double(temp.f32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lfs f13,12516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12516);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lfs f12,12520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12520);
	ctx.f12.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stfiwx f13,0,r7
	PPC_STORE_U32(ctx.r7.u32, ctx.f13.u32);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,11720(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11720);
	// lfs f0,12524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12524);
	f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// lwz r31,12(r4)
	r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpwi cr6,r7,0
	cr6.compare<int32_t>(ctx.r7.s32, 0, xer);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfiwx f12,0,r9
	PPC_STORE_U32(ctx.r9.u32, ctx.f12.u32);
	// stw r11,12540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12540, r11.u32);
	// stw r10,12544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12544, ctx.r10.u32);
	// stw r8,12548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12548, ctx.r8.u32);
	// stw r31,12552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12552, r31.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// add r6,r9,r4
	ctx.r6.u64 = ctx.r9.u64 + ctx.r4.u64;
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, f0.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// beq cr6,0x823bfd94
	if (cr6.eq) goto loc_823BFD94;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bgt cr6,0x823bfd70
	if (cr6.gt) goto loc_823BFD70;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_823BFD70:
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bgt cr6,0x823bfd7c
	if (cr6.gt) goto loc_823BFD7C;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_823BFD7C:
	// cmpw cr6,r6,r8
	cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, xer);
	// blt cr6,0x823bfd88
	if (cr6.lt) goto loc_823BFD88;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
loc_823BFD88:
	// cmpw cr6,r7,r31
	cr6.compare<int32_t>(ctx.r7.s32, r31.s32, xer);
	// blt cr6,0x823bfd94
	if (cr6.lt) goto loc_823BFD94;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
loc_823BFD94:
	// lwz r11,10308(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10308);
	// lwz r10,10312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10312);
	// rlwimi r11,r5,16,1,15
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x7FFF0000) | (r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r10,r7,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r11,r4,0,17,31
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r10,r6,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r11,10308(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10308, r11.u32);
	// stw r10,10312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10312, ctx.r10.u32);
	// bl 0x823bd6f8
	sub_823BD6F8(ctx, base);
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

__attribute__((alias("__imp__sub_823BFDCC"))) PPC_WEAK_FUNC(sub_823BFDCC);
PPC_FUNC_IMPL(__imp__sub_823BFDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFDD0"))) PPC_WEAK_FUNC(sub_823BFDD0);
PPC_FUNC_IMPL(__imp__sub_823BFDD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12512(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12512);
	f0.f64 = double(temp.f32);
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, f0.u32);
	// lfs f0,12516(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12516);
	f0.f64 = double(temp.f32);
	// addi r10,r4,8
	ctx.r10.s64 = ctx.r4.s64 + 8;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lfs f0,12520(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12520);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lfs f0,12524(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12524);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lfs f0,12528(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12528);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,12532(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12532);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823BFE20"))) PPC_WEAK_FUNC(sub_823BFE20);
PPC_FUNC_IMPL(__imp__sub_823BFE20) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x823bfe90
	if (cr6.eq) goto loc_823BFE90;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// subfic r11,r29,17
	xer.ca = r29.u32 <= 17;
	r11.s64 = 17 - r29.s64;
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// rlwinm r6,r10,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r7,r10,3
	ctx.r7.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r10,r6,512
	ctx.r10.s64 = ctx.r6.s64 + 512;
	// addi r5,r11,206
	ctx.r5.s64 = r11.s64 + 206;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// rlwinm r6,r5,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r9,1652(r11)
	PPC_STORE_U32(r11.u32 + 1652, ctx.r9.u32);
	// stwx r10,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r10.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_823BFE90:
	// addi r11,r29,3081
	r11.s64 = r29.s64 + 3081;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	r28.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi r28,0
	cr0.compare<uint32_t>(r28.u32, 0, xer);
	// beq 0x823bff08
	if (cr0.eq) goto loc_823BFF08;
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823bfeb8
	if (cr0.eq) goto loc_823BFEB8;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x823bff08
	goto loc_823BFF08;
loc_823BFEB8:
	// lwz r11,10784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10784);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823bff08
	if (cr0.eq) goto loc_823BFF08;
	// lwz r11,13376(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13376);
	// lwz r3,13372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13372);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x823bfee0
	if (cr6.lt) goto loc_823BFEE0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0cd8
	sub_823D0CD8(ctx, base);
loc_823BFEE0:
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
loc_823BFF08:
	// rlwinm. r11,r26,30,2,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stwx r30,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r30.u32);
	// add r10,r31,r29
	ctx.r10.u64 = r31.u64 + r29.u64;
	// stb r11,12392(r10)
	PPC_STORE_U8(ctx.r10.u32 + 12392, r11.u8);
	// beq 0x823bff34
	if (cr0.eq) goto loc_823BFF34;
	// lbz r10,11696(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11696);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823bff34
	if (cr6.eq) goto loc_823BFF34;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823BFF34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823BFF3C"))) PPC_WEAK_FUNC(sub_823BFF3C);
PPC_FUNC_IMPL(__imp__sub_823BFF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFF40"))) PPC_WEAK_FUNC(sub_823BFF40);
PPC_FUNC_IMPL(__imp__sub_823BFF40) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf0
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r11,r29,3081
	r11.s64 = r29.s64 + 3081;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// li r28,0
	r28.s64 = 0;
	// lwzx r31,r11,r30
	r31.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823bffa4
	if (cr0.eq) goto loc_823BFFA4;
	// subfic r10,r29,223
	xer.ca = r29.u32 <= 223;
	ctx.r10.s64 = 223 - r29.s64;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r10,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r30.u32);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	r11.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r28,r11,r10
	r28.s64 = ctx.r10.s64 - r11.s64;
	// bl 0x823c3b70
	sub_823C3B70(ctx, base);
loc_823BFFA4:
	// add r11,r30,r29
	r11.u64 = r30.u64 + r29.u64;
	// stw r28,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r28.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lbz r11,12392(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12392);
	// rotlwi r11,r11,2
	r11.u64 = __builtin_rotateleft32(r11.u32, 2);
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_823BFFC4"))) PPC_WEAK_FUNC(sub_823BFFC4);
PPC_FUNC_IMPL(__imp__sub_823BFFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823BFFC8"))) PPC_WEAK_FUNC(sub_823BFFC8);
PPC_FUNC_IMPL(__imp__sub_823BFFC8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,12300(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12300);
	// cmplwi r30,0
	cr0.compare<uint32_t>(r30.u32, 0, xer);
	// beq 0x823c004c
	if (cr0.eq) goto loc_823C004C;
	// lwz r11,10780(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10780);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x823bfffc
	if (cr0.eq) goto loc_823BFFFC;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x823c004c
	goto loc_823C004C;
loc_823BFFFC:
	// lwz r11,10784(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10784);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c004c
	if (cr0.eq) goto loc_823C004C;
	// lwz r11,13376(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13376);
	// lwz r3,13372(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13372);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x823c0024
	if (cr6.lt) goto loc_823C0024;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d0cd8
	sub_823D0CD8(ctx, base);
loc_823C0024:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// rlwimi r11,r30,30,2,31
	r11.u64 = (__builtin_rotateleft32(r30.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
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
loc_823C004C:
	// stw r29,12300(r31)
	PPC_STORE_U32(r31.u32 + 12300, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823C0058"))) PPC_WEAK_FUNC(sub_823C0058);
PPC_FUNC_IMPL(__imp__sub_823C0058) {
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
	// addi r11,r4,3076
	r11.s64 = ctx.r4.s64 + 3076;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823c0084
	if (cr0.eq) goto loc_823C0084;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c3b70
	sub_823C3B70(ctx, base);
loc_823C0084:
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

__attribute__((alias("__imp__sub_823C009C"))) PPC_WEAK_FUNC(sub_823C009C);
PPC_FUNC_IMPL(__imp__sub_823C009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C00A0"))) PPC_WEAK_FUNC(sub_823C00A0);
PPC_FUNC_IMPL(__imp__sub_823C00A0) {
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
	// lwz r31,12320(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12320);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x823c00c4
	if (cr0.eq) goto loc_823C00C4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c3b70
	sub_823C3B70(ctx, base);
loc_823C00C4:
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

__attribute__((alias("__imp__sub_823C00DC"))) PPC_WEAK_FUNC(sub_823C00DC);
PPC_FUNC_IMPL(__imp__sub_823C00DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C00E0"))) PPC_WEAK_FUNC(sub_823C00E0);
PPC_FUNC_IMPL(__imp__sub_823C00E0) {
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d2f90
	sub_823D2F90(ctx, base);
	// addi r30,r31,14852
	r30.s64 = r31.s64 + 14852;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,1536
	ctx.r9.s64 = r11.s64 + 1536;
loc_823C0118:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823c0138
	if (!cr0.eq) goto loc_823C0138;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x823c0118
	if (!cr6.eq) goto loc_823C0118;
loc_823C0138:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823c018c
	if (cr0.eq) goto loc_823C018C;
	// lwz r3,22116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823c0164
	if (cr0.eq) goto loc_823C0164;
	// lwz r11,22120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22120);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823c0164
	if (!cr0.eq) goto loc_823C0164;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a85e8
	sub_826A85E8(ctx, base);
loc_823C0164:
	// lwz r11,22120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,22120(r31)
	PPC_STORE_U32(r31.u32 + 22120, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,16556(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16556);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,16556(r31)
	PPC_STORE_U32(r31.u32 + 16556, r11.u32);
loc_823C018C:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
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

__attribute__((alias("__imp__sub_823C01A4"))) PPC_WEAK_FUNC(sub_823C01A4);
PPC_FUNC_IMPL(__imp__sub_823C01A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C01A8"))) PPC_WEAK_FUNC(sub_823C01A8);
PPC_FUNC_IMPL(__imp__sub_823C01A8) {
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
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823d3130
	sub_823D3130(ctx, base);
	// addi r30,r31,14852
	r30.s64 = r31.s64 + 14852;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r9,r11,1536
	ctx.r9.s64 = r11.s64 + 1536;
loc_823C01E0:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// bne 0x823c0200
	if (!cr0.eq) goto loc_823C0200;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// bne cr6,0x823c01e0
	if (!cr6.eq) goto loc_823C01E0;
loc_823C0200:
	// cmpwi r8,0
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823c0254
	if (cr0.eq) goto loc_823C0254;
	// lwz r3,22116(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 22116);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x823c022c
	if (cr0.eq) goto loc_823C022C;
	// lwz r11,22120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22120);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823c022c
	if (!cr0.eq) goto loc_823C022C;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x826a85e8
	sub_826A85E8(ctx, base);
loc_823C022C:
	// lwz r11,22120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 22120);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,22120(r31)
	PPC_STORE_U32(r31.u32 + 22120, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,16556(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16556);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,16556(r31)
	PPC_STORE_U32(r31.u32 + 16556, r11.u32);
loc_823C0254:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
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

__attribute__((alias("__imp__sub_823C026C"))) PPC_WEAK_FUNC(sub_823C026C);
PPC_FUNC_IMPL(__imp__sub_823C026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0270"))) PPC_WEAK_FUNC(sub_823C0270);
PPC_FUNC_IMPL(__imp__sub_823C0270) {
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
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x823c02f8
	if (!cr6.eq) goto loc_823C02F8;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823c02a4
	if (!cr6.gt) goto loc_823C02A4;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823C02A4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,25088
	ctx.r9.u64 = ctx.r9.u64 | 25088;
	// li r8,-1
	ctx.r8.s64 = -1;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r7,r7,24832
	ctx.r7.u64 = ctx.r7.u64 | 24832;
	// ori r6,r10,25344
	ctx.r6.u64 = ctx.r10.u64 | 25344;
	// lwz r10,12572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12572);
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
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// lwz r10,12576(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12576);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_823C02F8:
	// lwz r11,10312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10312);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10308);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x823bd6f8
	sub_823BD6F8(ctx, base);
	// lwz r11,10788(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10788);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,20,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x3;
	// bl 0x823c4a88
	sub_823C4A88(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
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

__attribute__((alias("__imp__sub_823C0364"))) PPC_WEAK_FUNC(sub_823C0364);
PPC_FUNC_IMPL(__imp__sub_823C0364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0368"))) PPC_WEAK_FUNC(sub_823C0368);
PPC_FUNC_IMPL(__imp__sub_823C0368) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	f28.f64 = ctx.f1.f64;
	// fmr f27,f2
	f27.f64 = ctx.f2.f64;
	// fmr f31,f5
	f31.f64 = ctx.f5.f64;
	// fmr f26,f6
	f26.f64 = ctx.f6.f64;
	// lwz r10,12304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// mr. r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x823c03ac
	if (!cr0.eq) goto loc_823C03AC;
	// lwz r9,12320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x823c05b0
	if (cr0.eq) goto loc_823C05B0;
loc_823C03AC:
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x823c03c0
	if (cr0.eq) goto loc_823C03C0;
	// li r11,1
	r11.s64 = 1;
	// b 0x823c044c
	goto loc_823C044C;
loc_823C03C0:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c0444
	if (cr0.eq) goto loc_823C0444;
	// lwz r11,12592(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x823c03dc
	if (cr6.eq) goto loc_823C03DC;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823c0444
	if (!cr6.eq) goto loc_823C0444;
loc_823C03DC:
	// lwz r11,12308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r10,12596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c03f4
	if (cr6.eq) goto loc_823C03F4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0444
	if (!cr6.eq) goto loc_823C0444;
loc_823C03F4:
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r10,12600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c040c
	if (cr6.eq) goto loc_823C040C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0444
	if (!cr6.eq) goto loc_823C0444;
loc_823C040C:
	// lwz r11,12316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r10,12604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0424
	if (cr6.eq) goto loc_823C0424;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0444
	if (!cr6.eq) goto loc_823C0444;
loc_823C0424:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r10,12608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c043c
	if (cr6.eq) goto loc_823C043C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0444
	if (!cr6.eq) goto loc_823C0444;
loc_823C043C:
	// li r11,1
	r11.s64 = 1;
	// b 0x823c0448
	goto loc_823C0448;
loc_823C0444:
	// li r11,0
	r11.s64 = 0;
loc_823C0448:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823C044C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c0460
	if (cr0.eq) goto loc_823C0460;
	// lwz r11,13044(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13044);
	// lwz r9,13048(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13048);
	// b 0x823c0474
	goto loc_823C0474;
loc_823C0460:
	// lwz r11,36(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r9,r11,29,17,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x7FFF;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3FFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
loc_823C0474:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// fctiwz f0,f28
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f28.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f28.f64));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fctiwz f13,f27
	ctx.f13.s64 = (f27.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f27.f64));
	// fctiwz f12,f3
	ctx.f12.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfiwx f13,0,r8
	PPC_STORE_U32(ctx.r8.u32, ctx.f13.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stfiwx f12,0,r10
	PPC_STORE_U32(ctx.r10.u32, ctx.f12.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x823c04b0
	if (!cr6.lt) goto loc_823C04B0;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_823C04B0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// blt cr6,0x823c04d4
	if (cr6.lt) goto loc_823C04D4;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_823C04D4:
	// subf. r11,r7,r11
	r11.s64 = r11.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// blt 0x823c04e8
	if (cr0.lt) goto loc_823C04E8;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x823c04f0
	if (!cr6.lt) goto loc_823C04F0;
loc_823C04E8:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_823C04F0:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// stfs f28,12512(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 12512, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f27,12516(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 12516, temp.u32);
	// addi r4,r31,12540
	ctx.r4.s64 = r31.s64 + 12540;
	// stfs f31,12528(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 12528, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stfs f26,12532(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 12532, temp.u32);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, r11.u64);
	// lfd f0,96(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// li r11,0
	r11.s64 = 0;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r11,12536(r31)
	PPC_STORE_U32(r31.u32 + 12536, r11.u32);
	// frsp f30,f0
	f30.f64 = double(float(f0.f64));
	// stfs f30,12520(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 12520, temp.u32);
	// frsp f29,f13
	f29.f64 = double(float(ctx.f13.f64));
	// stfs f29,12524(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 12524, temp.u32);
	// bl 0x823bfcd0
	sub_823BFCD0(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fsubs f12,f26,f31
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(f26.f64 - f31.f64));
	// stfs f31,10396(r31)
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 10396, temp.u32);
	// stfs f12,10392(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(r31.u32 + 10392, temp.u32);
	// lfs f0,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f0.f64 = double(temp.f32);
	// fmuls f13,f30,f0
	ctx.f13.f64 = double(float(f30.f64 * f0.f64));
	// stfs f13,10376(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 10376, temp.u32);
	// fmuls f0,f29,f0
	f0.f64 = double(float(f29.f64 * f0.f64));
	// fadds f13,f13,f28
	ctx.f13.f64 = double(float(ctx.f13.f64 + f28.f64));
	// stfs f13,10380(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 10380, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,10384(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 10384, temp.u32);
	// fadds f0,f0,f27
	f0.f64 = double(float(f0.f64 + f27.f64));
	// stfs f0,10388(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 10388, temp.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823C05B0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_823C05CC"))) PPC_WEAK_FUNC(sub_823C05CC);
PPC_FUNC_IMPL(__imp__sub_823C05CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C05D0"))) PPC_WEAK_FUNC(sub_823C05D0);
PPC_FUNC_IMPL(__imp__sub_823C05D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r3,12540
	ctx.r4.s64 = ctx.r3.s64 + 12540;
	// stw r11,11720(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11720, r11.u32);
	// b 0x823bfcd0
	sub_823BFCD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823C05E0"))) PPC_WEAK_FUNC(sub_823C05E0);
PPC_FUNC_IMPL(__imp__sub_823C05E0) {
	PPC_FUNC_PROLOGUE();
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
	// lwz r11,12(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lwz r7,0(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f4,f0
	ctx.f4.f64 = double(float(f0.f64));
	// frsp f3,f13
	ctx.f3.f64 = double(float(ctx.f13.f64));
	// frsp f2,f12
	ctx.f2.f64 = double(float(ctx.f12.f64));
	// frsp f1,f11
	ctx.f1.f64 = double(float(ctx.f11.f64));
	// bl 0x823c0368
	sub_823C0368(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823C065C"))) PPC_WEAK_FUNC(sub_823C065C);
PPC_FUNC_IMPL(__imp__sub_823C065C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0660"))) PPC_WEAK_FUNC(sub_823C0660);
PPC_FUNC_IMPL(__imp__sub_823C0660) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x823c0368
	sub_823C0368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823C0680"))) PPC_WEAK_FUNC(sub_823C0680);
PPC_FUNC_IMPL(__imp__sub_823C0680) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r8,16,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823c0694
	if (!cr0.eq) goto loc_823C0694;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x823c06ac
	goto loc_823C06AC;
loc_823C0694:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lis r7,0
	ctx.r7.s64 = 0;
	// bne cr6,0x823c06a8
	if (!cr6.eq) goto loc_823C06A8;
	// ori r7,r7,32769
	ctx.r7.u64 = ctx.r7.u64 | 32769;
	// b 0x823c06ac
	goto loc_823C06AC;
loc_823C06A8:
	// ori r7,r7,49155
	ctx.r7.u64 = ctx.r7.u64 | 49155;
loc_823C06AC:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r7,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, ctx.r7.u32);
	// li r12,1
	r12.s64 = 1;
	// stw r8,10240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10240, ctx.r8.u32);
	// addi r9,r11,-20416
	ctx.r9.s64 = r11.s64 + -20416;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// addi r11,r3,12540
	r11.s64 = ctx.r3.s64 + 12540;
	// addi r4,r9,-20440
	ctx.r4.s64 = ctx.r9.s64 + -20440;
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,36,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// ld r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | r12.u64;
	// std r9,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r9.u64);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x823c05e0
	sub_823C05E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823C0718"))) PPC_WEAK_FUNC(sub_823C0718);
PPC_FUNC_IMPL(__imp__sub_823C0718) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// addi r11,r4,3076
	r11.s64 = ctx.r4.s64 + 3076;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stwx r5,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r5.u32);
	// beq cr6,0x823c0860
	if (cr6.eq) goto loc_823C0860;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x823c074c
	if (cr6.eq) goto loc_823C074C;
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
loc_823C074C:
	// lis r11,2
	r11.s64 = 131072;
	// lwz r3,28(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// li r7,1
	ctx.r7.s64 = 1;
	// ori r8,r11,263
	ctx.r8.u64 = r11.u64 | 263;
	// rldicr r7,r7,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r9,r8
	r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,2561
	ctx.r9.s64 = ctx.r9.s64 + 2561;
	// addi r10,r4,2973
	ctx.r10.s64 = ctx.r4.s64 + 2973;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + r31.u32, ctx.r3.u32);
	// clrldi r9,r11,56
	ctx.r9.u64 = r11.u64 & 0xFF;
	// srawi r11,r11,16
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFF) != 0);
	r11.s64 = r11.s32 >> 16;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U64(r11.u32 + r31.u32);
	// srd r9,r7,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r7.u64 >> (ctx.r9.u8 & 0x7F));
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// stdx r9,r11,r31
	PPC_STORE_U64(r11.u32 + r31.u32, ctx.r9.u64);
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + r31.u32);
	// lwzx r11,r6,r31
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stwx r9,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r9.u32);
	// beq 0x823c0860
	if (cr0.eq) goto loc_823C0860;
	// lwz r6,28(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// rlwinm r10,r6,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x823c07d0
	if (cr6.eq) goto loc_823C07D0;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x823c07d0
	if (cr6.eq) goto loc_823C07D0;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beq cr6,0x823c07d0
	if (cr6.eq) goto loc_823C07D0;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// bne cr6,0x823c0860
	if (!cr6.eq) goto loc_823C0860;
loc_823C07D0:
	// rlwinm r10,r6,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823c0860
	if (cr0.eq) goto loc_823C0860;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r6,0
	ctx.r6.s64 = 0;
	// beq cr6,0x823c07ec
	if (cr6.eq) goto loc_823C07EC;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
loc_823C07EC:
	// addi r3,r6,2561
	ctx.r3.s64 = ctx.r6.s64 + 2561;
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// clrldi r29,r8,56
	r29.u64 = ctx.r8.u64 & 0xFF;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// rlwinm r7,r10,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r30,r10,0,16,11
	r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// srawi r10,r8,16
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 16;
	// rlwinm r8,r7,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r8,r8,-3
	ctx.r8.s64 = ctx.r8.s64 + -3;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// srd r3,r3,r29
	ctx.r3.u64 = r29.u8 & 0x40 ? 0 : (ctx.r3.u64 >> (r29.u8 & 0x7F));
	// addi r29,r7,3
	r29.s64 = ctx.r7.s64 + 3;
	// rlwinm r7,r29,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 1) & 0xFFFFFFFE;
	// andc r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r9.u64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// or r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,16,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF0000;
	// or r8,r30,r10
	ctx.r8.u64 = r30.u64 | ctx.r10.u64;
	// stw r8,28(r11)
	PPC_STORE_U32(r11.u32 + 28, ctx.r8.u32);
	// lwzx r11,r6,r31
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + r31.u32);
	// rlwinm r11,r11,0,16,11
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwx r11,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, r11.u32);
	// ldx r11,r9,r31
	r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + r31.u32);
	// or r11,r3,r11
	r11.u64 = ctx.r3.u64 | r11.u64;
	// stdx r11,r9,r31
	PPC_STORE_U64(ctx.r9.u32 + r31.u32, r11.u64);
loc_823C0860:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x823c09dc
	if (!cr6.eq) goto loc_823C09DC;
	// lbz r11,10815(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// andi. r10,r11,251
	ctx.r10.u64 = r11.u64 & 251;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,10815(r31)
	PPC_STORE_U8(r31.u32 + 10815, ctx.r10.u8);
	// beq cr6,0x823c08b8
	if (cr6.eq) goto loc_823C08B8;
	// lhz r11,28(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 28);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x823c089c
	if (cr6.eq) goto loc_823C089C;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x823c089c
	if (cr6.eq) goto loc_823C089C;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bne cr6,0x823c08b0
	if (!cr6.eq) goto loc_823C08B0;
loc_823C089C:
	// ori r11,r10,4
	r11.u64 = ctx.r10.u64 | 4;
	// stb r11,10815(r31)
	PPC_STORE_U8(r31.u32 + 10815, r11.u8);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823C08B0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x823c08c4
	goto loc_823C08C4;
loc_823C08B8:
	// lwz r4,12320(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// cmplwi r4,0
	cr0.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq 0x823c08cc
	if (cr0.eq) goto loc_823C08CC;
loc_823C08C4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c0680
	sub_823C0680(ctx, base);
loc_823C08CC:
	// lwz r11,12580(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12580);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c09a4
	if (!cr6.eq) goto loc_823C09A4;
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823c09a4
	if (!cr0.eq) goto loc_823C09A4;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823c09a4
	if (!cr0.eq) goto loc_823C09A4;
	// lbz r10,12051(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12051);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823c09a4
	if (!cr0.eq) goto loc_823C09A4;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823c0908
	if (cr0.eq) goto loc_823C0908;
	// li r11,1
	r11.s64 = 1;
	// b 0x823c0998
	goto loc_823C0998;
loc_823C0908:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c0990
	if (cr0.eq) goto loc_823C0990;
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// lwz r10,12592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0928
	if (cr6.eq) goto loc_823C0928;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0990
	if (!cr6.eq) goto loc_823C0990;
loc_823C0928:
	// lwz r11,12308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r10,12596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0940
	if (cr6.eq) goto loc_823C0940;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0990
	if (!cr6.eq) goto loc_823C0990;
loc_823C0940:
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r10,12600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0958
	if (cr6.eq) goto loc_823C0958;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0990
	if (!cr6.eq) goto loc_823C0990;
loc_823C0958:
	// lwz r11,12316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r10,12604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0970
	if (cr6.eq) goto loc_823C0970;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0990
	if (!cr6.eq) goto loc_823C0990;
loc_823C0970:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r10,12608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0988
	if (cr6.eq) goto loc_823C0988;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0990
	if (!cr6.eq) goto loc_823C0990;
loc_823C0988:
	// li r11,1
	r11.s64 = 1;
	// b 0x823c0994
	goto loc_823C0994;
loc_823C0990:
	// li r11,0
	r11.s64 = 0;
loc_823C0994:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823C0998:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x823c09a8
	if (!cr0.eq) goto loc_823C09A8;
loc_823C09A4:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823C09A8:
	// lbz r9,10812(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// lwz r11,11724(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11724);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r9,10812(r31)
	PPC_STORE_U8(r31.u32 + 10812, ctx.r9.u8);
	// lwz r10,12304(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// stw r11,11724(r31)
	PPC_STORE_U32(r31.u32 + 11724, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823c09cc
	if (!cr6.eq) goto loc_823C09CC;
	// li r11,0
	r11.s64 = 0;
loc_823C09CC:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10332);
	// rlwimi r11,r10,0,0,27
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF0) | (r11.u64 & 0xFFFFFFFF0000000F);
	// stw r11,10332(r31)
	PPC_STORE_U32(r31.u32 + 10332, r11.u32);
	// b 0x823c0a60
	goto loc_823C0A60;
loc_823C09DC:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x823c0a08
	if (!cr6.eq) goto loc_823C0A08;
	// lwz r11,12308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,11728(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11728);
	// stw r11,11728(r31)
	PPC_STORE_U32(r31.u32 + 11728, r11.u32);
	// bne cr6,0x823c09fc
	if (!cr6.eq) goto loc_823C09FC;
	// li r11,0
	r11.s64 = 0;
loc_823C09FC:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10332);
	// rlwimi r10,r11,4,24,27
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x823c0a5c
	goto loc_823C0A5C;
loc_823C0A08:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x823c0a34
	if (!cr6.eq) goto loc_823C0A34;
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,11732(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11732);
	// stw r11,11732(r31)
	PPC_STORE_U32(r31.u32 + 11732, r11.u32);
	// bne cr6,0x823c0a28
	if (!cr6.eq) goto loc_823C0A28;
	// li r11,0
	r11.s64 = 0;
loc_823C0A28:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10332);
	// rlwimi r10,r11,8,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x823c0a5c
	goto loc_823C0A5C;
loc_823C0A34:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x823c0a74
	if (!cr6.eq) goto loc_823C0A74;
	// lwz r11,12316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwz r11,11736(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11736);
	// stw r11,11736(r31)
	PPC_STORE_U32(r31.u32 + 11736, r11.u32);
	// bne cr6,0x823c0a54
	if (!cr6.eq) goto loc_823C0A54;
	// li r11,0
	r11.s64 = 0;
loc_823C0A54:
	// lwz r10,10332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10332);
	// rlwimi r10,r11,12,16,19
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
loc_823C0A5C:
	// stw r10,10332(r31)
	PPC_STORE_U32(r31.u32 + 10332, ctx.r10.u32);
loc_823C0A60:
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823C0A74:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_823C0A7C"))) PPC_WEAK_FUNC(sub_823C0A7C);
PPC_FUNC_IMPL(__imp__sub_823C0A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0A80"))) PPC_WEAK_FUNC(sub_823C0A80);
PPC_FUNC_IMPL(__imp__sub_823C0A80) {
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
	// stw r30,12320(r31)
	PPC_STORE_U32(r31.u32 + 12320, r30.u32);
	// beq cr6,0x823c0bc4
	if (cr6.eq) goto loc_823C0BC4;
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0ab8
	if (!cr6.eq) goto loc_823C0AB8;
	// bl 0x823c0680
	sub_823C0680(ctx, base);
loc_823C0AB8:
	// lbz r10,10815(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,10248(r31)
	PPC_STORE_U32(r31.u32 + 10248, r11.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,10432(r31)
	PPC_STORE_U32(r31.u32 + 10432, r11.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lbz r10,10814(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,10814(r31)
	PPC_STORE_U8(r31.u32 + 10814, ctx.r10.u8);
	// beq 0x823c0ba0
	if (cr0.eq) goto loc_823C0BA0;
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823c0af8
	if (cr0.eq) goto loc_823C0AF8;
	// li r11,1
	r11.s64 = 1;
	// b 0x823c0b88
	goto loc_823C0B88;
loc_823C0AF8:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c0b80
	if (cr0.eq) goto loc_823C0B80;
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// lwz r10,12592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0b18
	if (cr6.eq) goto loc_823C0B18;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0b80
	if (!cr6.eq) goto loc_823C0B80;
loc_823C0B18:
	// lwz r11,12308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r10,12596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0b30
	if (cr6.eq) goto loc_823C0B30;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0b80
	if (!cr6.eq) goto loc_823C0B80;
loc_823C0B30:
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r10,12600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0b48
	if (cr6.eq) goto loc_823C0B48;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0b80
	if (!cr6.eq) goto loc_823C0B80;
loc_823C0B48:
	// lwz r11,12316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r10,12604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0b60
	if (cr6.eq) goto loc_823C0B60;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0b80
	if (!cr6.eq) goto loc_823C0B80;
loc_823C0B60:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r10,12608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0b78
	if (cr6.eq) goto loc_823C0B78;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0b80
	if (!cr6.eq) goto loc_823C0B80;
loc_823C0B78:
	// li r11,1
	r11.s64 = 1;
	// b 0x823c0b84
	goto loc_823C0B84;
loc_823C0B80:
	// li r11,0
	r11.s64 = 0;
loc_823C0B84:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823C0B88:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c0ba0
	if (cr0.eq) goto loc_823C0BA0;
	// lwz r10,10240(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10240);
	// lwz r11,13036(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13036);
	// rlwimi r10,r11,18,0,13
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 18) & 0xFFFC0000) | (ctx.r10.u64 & 0xFFFFFFFF0003FFFF);
	// stw r10,10240(r31)
	PPC_STORE_U32(r31.u32 + 10240, ctx.r10.u32);
loc_823C0BA0:
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,55,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// b 0x823c0be4
	goto loc_823C0BE4;
loc_823C0BC4:
	// lbz r10,10814(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10814);
	// lwz r11,10432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10432);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,10432(r31)
	PPC_STORE_U32(r31.u32 + 10432, r11.u32);
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,10814(r31)
	PPC_STORE_U8(r31.u32 + 10814, ctx.r10.u8);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
loc_823C0BE4:
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r11,12580(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12580);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0cc0
	if (!cr6.eq) goto loc_823C0CC0;
	// lbz r11,10812(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823c0cc0
	if (!cr0.eq) goto loc_823C0CC0;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x823c0cc0
	if (!cr0.eq) goto loc_823C0CC0;
	// lbz r10,12051(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12051);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x823c0cc0
	if (!cr0.eq) goto loc_823C0CC0;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x823c0c24
	if (cr0.eq) goto loc_823C0C24;
	// li r11,1
	r11.s64 = 1;
	// b 0x823c0cb4
	goto loc_823C0CB4;
loc_823C0C24:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c0cac
	if (cr0.eq) goto loc_823C0CAC;
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// lwz r10,12592(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0c44
	if (cr6.eq) goto loc_823C0C44;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0cac
	if (!cr6.eq) goto loc_823C0CAC;
loc_823C0C44:
	// lwz r11,12308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r10,12596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0c5c
	if (cr6.eq) goto loc_823C0C5C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0cac
	if (!cr6.eq) goto loc_823C0CAC;
loc_823C0C5C:
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r10,12600(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0c74
	if (cr6.eq) goto loc_823C0C74;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0cac
	if (!cr6.eq) goto loc_823C0CAC;
loc_823C0C74:
	// lwz r11,12316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r10,12604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0c8c
	if (cr6.eq) goto loc_823C0C8C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0cac
	if (!cr6.eq) goto loc_823C0CAC;
loc_823C0C8C:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r10,12608(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c0ca4
	if (cr6.eq) goto loc_823C0CA4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c0cac
	if (!cr6.eq) goto loc_823C0CAC;
loc_823C0CA4:
	// li r11,1
	r11.s64 = 1;
	// b 0x823c0cb0
	goto loc_823C0CB0;
loc_823C0CAC:
	// li r11,0
	r11.s64 = 0;
loc_823C0CB0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823C0CB4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x823c0cc4
	if (!cr0.eq) goto loc_823C0CC4;
loc_823C0CC0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_823C0CC4:
	// lbz r9,10812(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// lwz r11,11740(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11740);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r9,10812(r31)
	PPC_STORE_U8(r31.u32 + 10812, ctx.r9.u8);
	// lwz r10,12320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// stw r11,11740(r31)
	PPC_STORE_U32(r31.u32 + 11740, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x823c0ce8
	if (!cr6.eq) goto loc_823C0CE8;
	// li r11,0
	r11.s64 = 0;
loc_823C0CE8:
	// lwz r10,10420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10420);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10420(r31)
	PPC_STORE_U32(r31.u32 + 10420, ctx.r10.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r11,11744(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11744);
	// lwz r10,12320(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,11744(r31)
	PPC_STORE_U32(r31.u32 + 11744, r11.u32);
	// bne cr6,0x823c0d20
	if (!cr6.eq) goto loc_823C0D20;
	// li r11,0
	r11.s64 = 0;
loc_823C0D20:
	// lwz r10,10420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10420);
	// rlwimi r11,r10,0,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,10420(r31)
	PPC_STORE_U32(r31.u32 + 10420, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
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

__attribute__((alias("__imp__sub_823C0D58"))) PPC_WEAK_FUNC(sub_823C0D58);
PPC_FUNC_IMPL(__imp__sub_823C0D58) {
	PPC_FUNC_PROLOGUE();
	// b 0x823c0718
	sub_823C0718(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823C0D5C"))) PPC_WEAK_FUNC(sub_823C0D5C);
PPC_FUNC_IMPL(__imp__sub_823C0D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C0D60"))) PPC_WEAK_FUNC(sub_823C0D60);
PPC_FUNC_IMPL(__imp__sub_823C0D60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	f30.f64 = ctx.f1.f64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r8
	r29.u64 = ctx.r8.u64;
	// lwz r11,10560(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823c0dac
	if (!cr0.eq) goto loc_823C0DAC;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,5736(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 5736);
	f31.f64 = double(temp.f32);
	// b 0x823c0db4
	goto loc_823C0DB4;
loc_823C0DAC:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f31,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f31.f64 = double(temp.f32);
loc_823C0DB4:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x823c0dd0
	if (!cr6.gt) goto loc_823C0DD0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_823C0DD0:
	// mulli r27,r25,21
	r27.s64 = r25.s64 * 21;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d1618
	sub_823D1618(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x823c0df4
	if (!cr0.eq) goto loc_823C0DF4;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// b 0x823c103c
	goto loc_823C103C;
loc_823C0DF4:
	// rlwinm r11,r3,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r28.u32 + 0);
	f0.f64 = double(temp.f32);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// beq cr6,0x823c0eec
	if (cr6.eq) goto loc_823C0EEC;
	// addi r11,r24,8
	r11.s64 = r24.s64 + 8;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
loc_823C0E28:
	// lwa r5,-8(r11)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(r11.u32 + -8));
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwa r8,-4(r11)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(r11.u32 + -4));
	// lwa r7,0(r11)
	ctx.r7.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 0));
	// lwa r6,4(r11)
	ctx.r6.s64 = int32_t(PPC_LOAD_U32(r11.u32 + 4));
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f7,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfd f8,96(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// fsubs f7,f7,f31
	ctx.f7.f64 = double(float(ctx.f7.f64 - f31.f64));
	// stfs f7,0(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f10,f10,f31
	ctx.f10.f64 = double(float(ctx.f10.f64 - f31.f64));
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f30,8(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fsubs f9,f9,f31
	ctx.f9.f64 = double(float(ctx.f9.f64 - f31.f64));
	// stfs f0,12(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fsubs f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 - f31.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f11,24(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f10,32(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f30,36(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f13,44(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f12,48(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f11,52(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// stfs f9,56(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 56, temp.u32);
	// stfs f8,60(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stfs f30,64(r3)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stfs f0,68(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 68, temp.u32);
	// stfs f13,72(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// stfs f12,76(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// stfs f11,80(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// addi r3,r3,84
	ctx.r3.s64 = ctx.r3.s64 + 84;
	// bne 0x823c0e28
	if (!cr0.eq) goto loc_823C0E28;
loc_823C0EEC:
	// lis r11,5
	r11.s64 = 327680;
	// ori r9,r10,3
	ctx.r9.u64 = ctx.r10.u64 | 3;
	// ori r11,r11,18432
	r11.u64 = r11.u64 | 18432;
	// lis r10,4096
	ctx.r10.s64 = 268435456;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// rlwimi r10,r27,2,6,29
	ctx.r10.u64 = (__builtin_rotateleft32(r27.u32, 2) & 0x3FFFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFC000003);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// ori r30,r10,20480
	r30.u64 = ctx.r10.u64 | 20480;
	// li r28,0
	r28.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// li r22,8961
	r22.s64 = 8961;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// ori r24,r10,8192
	r24.u64 = ctx.r10.u64 | 8192;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// rlwinm. r10,r29,16,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r24.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r22.u32);
	r11.u32 = ea;
	// bne 0x823c0f88
	if (!cr0.eq) goto loc_823C0F88;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x823c0fa0
	goto loc_823C0FA0;
loc_823C0F88:
	// cmplwi cr6,r10,1
	cr6.compare<uint32_t>(ctx.r10.u32, 1, xer);
	// lis r10,0
	ctx.r10.s64 = 0;
	// bne cr6,0x823c0f9c
	if (!cr6.eq) goto loc_823C0F9C;
	// ori r10,r10,32769
	ctx.r10.u64 = ctx.r10.u64 | 32769;
	// b 0x823c0fa0
	goto loc_823C0FA0;
loc_823C0F9C:
	// ori r10,r10,49155
	ctx.r10.u64 = ctx.r10.u64 | 49155;
loc_823C0FA0:
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r9,8704
	ctx.r9.s64 = 8704;
	// li r8,8712
	ctx.r8.s64 = 8712;
	// lwz r7,308(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r6,3
	ctx.r6.s64 = 196608;
	// ori r10,r10,13825
	ctx.r10.u64 = ctx.r10.u64 | 13825;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r5,17
	ctx.r5.s64 = 17;
	// mullw r6,r25,r6
	ctx.r6.s64 = int64_t(r25.s32) * int64_t(ctx.r6.s32);
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// rlwimi r6,r5,3,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
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
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,36,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,8
	r11.u64 = r11.u64 | 8;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823C103C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x8239bd30
	return;
}

__attribute__((alias("__imp__sub_823C104C"))) PPC_WEAK_FUNC(sub_823C104C);
PPC_FUNC_IMPL(__imp__sub_823C104C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C1050"))) PPC_WEAK_FUNC(sub_823C1050);
PPC_FUNC_IMPL(__imp__sub_823C1050) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd8
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// mr r20,r8
	r20.u64 = ctx.r8.u64;
	// li r29,1
	r29.s64 = 1;
	// rlwinm. r11,r25,16,30,31
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823c1090
	if (!cr0.eq) goto loc_823C1090;
	// li r24,1
	r24.s64 = 1;
	// b 0x823c10a0
	goto loc_823C10A0;
loc_823C1090:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r24,0
	r24.s64 = 0;
	// beq cr6,0x823c10a0
	if (cr6.eq) goto loc_823C10A0;
	// li r29,0
	r29.s64 = 0;
loc_823C10A0:
	// li r11,40
	r11.s64 = 40;
	// li r10,8
	ctx.r10.s64 = 8;
	// slw r11,r11,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 << (r29.u8 & 0x3F));
	// slw r10,r10,r24
	ctx.r10.u64 = r24.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r24.u8 & 0x3F));
	// add r9,r11,r27
	ctx.r9.u64 = r11.u64 + r27.u64;
	// divwu r8,r26,r11
	ctx.r8.u32 = r26.u32 / r11.u32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r30,r8,r11
	r30.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// divwu r8,r9,r11
	ctx.r8.u32 = ctx.r9.u32 / r11.u32;
	// add r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 + r28.u64;
	// mullw r31,r8,r11
	r31.s64 = int64_t(ctx.r8.s32) * int64_t(r11.s32);
	// twllei r11,0
	// twllei r11,0
	// addi r11,r9,-1
	r11.s64 = ctx.r9.s64 + -1;
	// divwu r9,r7,r10
	ctx.r9.u32 = ctx.r7.u32 / ctx.r10.u32;
	// divwu r11,r11,r10
	r11.u32 = r11.u32 / ctx.r10.u32;
	// twllei r10,0
	// twllei r10,0
	// mullw r23,r9,r10
	r23.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r22,r11,r10
	r22.s64 = int64_t(r11.s32) * int64_t(ctx.r10.s32);
	// cmpw cr6,r31,r30
	cr6.compare<int32_t>(r31.s32, r30.s32, xer);
	// bge cr6,0x823c1268
	if (!cr6.lt) goto loc_823C1268;
	// cmpw cr6,r22,r23
	cr6.compare<int32_t>(r22.s32, r23.s32, xer);
	// bge cr6,0x823c1268
	if (!cr6.lt) goto loc_823C1268;
	// lis r11,-32139
	r11.s64 = -2106261504;
	// lwz r11,-17392(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -17392);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823c1268
	if (cr6.eq) goto loc_823C1268;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpw cr6,r31,r27
	cr6.compare<int32_t>(r31.s32, r27.s32, xer);
	// ble cr6,0x823c1130
	if (!cr6.gt) goto loc_823C1130;
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r27.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r28.u32);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r31.u32);
	// stw r7,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r7.u32);
loc_823C1130:
	// cmpw cr6,r30,r26
	cr6.compare<int32_t>(r30.s32, r26.s32, xer);
	// bge cr6,0x823c1160
	if (!cr6.lt) goto loc_823C1160;
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r30,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r30.u32);
	// stwx r28,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r28.u32);
	// stwx r26,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, r26.u32);
	// stwx r7,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r7.u32);
loc_823C1160:
	// cmpw cr6,r22,r28
	cr6.compare<int32_t>(r22.s32, r28.s32, xer);
	// ble cr6,0x823c1190
	if (!cr6.gt) goto loc_823C1190;
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// stwx r28,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r28.u32);
	// stwx r30,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, r30.u32);
	// stwx r22,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, r22.u32);
loc_823C1190:
	// cmpw cr6,r23,r7
	cr6.compare<int32_t>(r23.s32, ctx.r7.s32, xer);
	// bge cr6,0x823c11c0
	if (!cr6.lt) goto loc_823C11C0;
	// rlwinm r11,r4,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r31,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, r31.u32);
	// stwx r23,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, r23.u32);
	// stwx r30,r11,r8
	PPC_STORE_U32(r11.u32 + ctx.r8.u32, r30.u32);
	// stwx r7,r11,r6
	PPC_STORE_U32(r11.u32 + ctx.r6.u32, ctx.r7.u32);
loc_823C11C0:
	// lwz r28,372(r1)
	r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823c11f4
	if (cr6.eq) goto loc_823C11F4;
	// lwz r11,396(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x823c0d60
	sub_823C0D60(ctx, base);
loc_823C11F4:
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// sraw r7,r31,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r31.s32 < 0) & (((r31.s32 >> temp.u32) << temp.u32) != r31.s32);
	ctx.r7.s64 = r31.s32 >> temp.u32;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// lwz r10,388(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// li r11,1
	r11.s64 = 1;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// rlwimi r25,r11,17,14,15
	r25.u64 = (__builtin_rotateleft32(r11.u32, 17) & 0x30000) | (r25.u64 & 0xFFFFFFFFFFFCFFFF);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// clrlwi r11,r8,18
	r11.u64 = ctx.r8.u32 & 0x3FFF;
	// sraw r7,r22,r24
	temp.u32 = r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r22.s32 < 0) & (((r22.s32 >> temp.u32) << temp.u32) != r22.s32);
	ctx.r7.s64 = r22.s32 >> temp.u32;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// srw r11,r11,r29
	r11.u64 = r29.u8 & 0x20 ? 0 : (r11.u32 >> (r29.u8 & 0x3F));
	// rlwimi r11,r8,0,0,17
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFC000) | (r11.u64 & 0xFFFFFFFF00003FFF);
	// sraw r7,r30,r29
	temp.u32 = r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r30.s32 < 0) & (((r30.s32 >> temp.u32) << temp.u32) != r30.s32);
	ctx.r7.s64 = r30.s32 >> temp.u32;
	// rlwinm r8,r11,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3FFF;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// srw r8,r8,r29
	ctx.r8.u64 = r29.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (r29.u8 & 0x3F));
	// rlwimi r11,r8,18,0,13
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 18) & 0xFFFC0000) | (r11.u64 & 0xFFFFFFFF0003FFFF);
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// sraw r11,r23,r24
	temp.u32 = r24.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r23.s32 < 0) & (((r23.s32 >> temp.u32) << temp.u32) != r23.s32);
	r11.s64 = r23.s32 >> temp.u32;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x823c0d60
	sub_823C0D60(ctx, base);
	// b 0x823c12a4
	goto loc_823C12A4;
loc_823C1268:
	// lwz r11,396(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// mr r8,r25
	ctx.r8.u64 = r25.u64;
	// mr r6,r20
	ctx.r6.u64 = r20.u64;
	// lwz r10,380(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r4,1
	ctx.r4.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r21
	ctx.r3.u64 = r21.u64;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r27.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r28.u32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r26.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x823c0d60
	sub_823C0D60(ctx, base);
loc_823C12A4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_823C12B0"))) PPC_WEAK_FUNC(sub_823C12B0);
PPC_FUNC_IMPL(__imp__sub_823C12B0) {
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
	PPCRegister f0{};
	PPCRegister f31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcc0
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, f31.u64);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r21,r8
	r21.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// li r25,5
	r25.s64 = 5;
	// lwz r14,10240(r31)
	r14.u64 = PPC_LOAD_U32(r31.u32 + 10240);
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// stw r24,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, r24.u32);
	// stw r23,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, r23.u32);
	// mr r16,r10
	r16.u64 = ctx.r10.u64;
	// stw r21,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, r21.u32);
	// li r22,0
	r22.s64 = 0;
	// stw r20,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, r20.u32);
	// cmpwi cr6,r5,-1
	cr6.compare<int32_t>(ctx.r5.s32, -1, xer);
	// stw r25,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, r25.u32);
	// beq cr6,0x823c1350
	if (cr6.eq) goto loc_823C1350;
	// addi r11,r5,3076
	r11.s64 = ctx.r5.s64 + 3076;
	// li r9,4
	ctx.r9.s64 = 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,10
	ctx.r10.s64 = 655360;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// lwzx r11,r11,r31
	r11.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwz r22,28(r11)
	r22.u64 = PPC_LOAD_U32(r11.u32 + 28);
	// rlwinm r11,r22,0,12,15
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823c1338
	if (!cr6.eq) goto loc_823C1338;
	// li r11,1
	r11.s64 = 1;
	// rlwimi r22,r11,17,12,15
	r22.u64 = (__builtin_rotateleft32(r11.u32, 17) & 0xF0000) | (r22.u64 & 0xFFFFFFFFFFF0FFFF);
loc_823C1338:
	// rlwinm r11,r22,0,12,15
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0xF0000;
	// lis r10,12
	ctx.r10.s64 = 786432;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x823c1350
	if (!cr6.eq) goto loc_823C1350;
	// li r11,3
	r11.s64 = 3;
	// rlwimi r22,r11,16,12,15
	r22.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xF0000) | (r22.u64 & 0xFFFFFFFFFFF0FFFF);
loc_823C1350:
	// lwz r11,10432(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10432);
	// rlwinm. r10,r29,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r19,0
	r19.s64 = 0;
	// rlwinm r30,r11,0,0,27
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// beq 0x823c136c
	if (cr0.eq) goto loc_823C136C;
	// li r19,118
	r19.s64 = 118;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
loc_823C136C:
	// rlwinm. r11,r29,0,26,26
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r28,255
	r28.s64 = 255;
	// beq 0x823c13bc
	if (cr0.eq) goto loc_823C13BC;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// ori r19,r19,34561
	r19.u64 = r19.u64 | 34561;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// ori r30,r30,4
	r30.u64 = r30.u64 | 4;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x823c1398
	if (!cr6.gt) goto loc_823C1398;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823C1398:
	// li r11,8461
	r11.s64 = 8461;
	// lwz r10,412(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// rlwimi r10,r28,16,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
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
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823C13BC:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d37f0
	sub_823D37F0(ctx, base);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823c13e8
	if (!cr6.gt) goto loc_823C13E8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823C13E8:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r30,128(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,8320
	ctx.r10.u64 = ctx.r10.u64 | 8320;
	// li r8,0
	ctx.r8.s64 = 0;
	// lis r7,8192
	ctx.r7.s64 = 536870912;
	// rlwinm. r26,r29,0,26,27
	r26.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x30;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// ori r7,r7,8192
	ctx.r7.u64 = ctx.r7.u64 | 8192;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r17,r19
	r17.u64 = r19.u64;
	// mr r18,r30
	r18.u64 = r30.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// mr r29,r11
	r29.u64 = r11.u64;
	// bne 0x823c153c
	if (!cr0.eq) goto loc_823C153C;
	// rlwinm r3,r22,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r3,5
	cr6.compare<uint32_t>(ctx.r3.u32, 5, xer);
	// beq cr6,0x823c153c
	if (cr6.eq) goto loc_823C153C;
	// cmplwi cr6,r3,7
	cr6.compare<uint32_t>(ctx.r3.u32, 7, xer);
	// beq cr6,0x823c153c
	if (cr6.eq) goto loc_823C153C;
	// cmplwi cr6,r3,15
	cr6.compare<uint32_t>(ctx.r3.u32, 15, xer);
	// beq cr6,0x823c153c
	if (cr6.eq) goto loc_823C153C;
	// rlwinm. r11,r14,16,30,31
	r11.u64 = __builtin_rotateleft64(r14.u32 | (r14.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823c1458
	if (!cr0.eq) goto loc_823C1458;
	// li r11,80
	r11.s64 = 80;
	// li r10,16
	ctx.r10.s64 = 16;
	// b 0x823c146c
	goto loc_823C146C;
loc_823C1458:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,80
	r11.s64 = 80;
	// beq cr6,0x823c146c
	if (cr6.eq) goto loc_823C146C;
	// li r11,40
	r11.s64 = 40;
loc_823C146C:
	// subf r9,r24,r21
	ctx.r9.s64 = r21.s64 - r24.s64;
	// cmpw cr6,r9,r11
	cr6.compare<int32_t>(ctx.r9.s32, r11.s32, xer);
	// blt cr6,0x823c153c
	if (cr6.lt) goto loc_823C153C;
	// subf r11,r23,r20
	r11.s64 = r20.s64 - r23.s64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x823c153c
	if (cr6.lt) goto loc_823C153C;
	// addi r6,r1,136
	ctx.r6.s64 = ctx.r1.s64 + 136;
	// lvx128 v1,r0,r16
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r16.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// rlwinm r4,r22,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 12) & 0x3F;
	// bl 0x823c2308
	sub_823C2308(ctx, base);
	// lwz r11,132(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,8707
	ctx.r10.s64 = 8707;
	// rlwinm r9,r11,24,8,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xFFFFFF;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rlwimi r11,r28,16,0,23
	r11.u64 = (__builtin_rotateleft32(r28.u32, 16) & 0xFFFFFF00) | (r11.u64 & 0xFFFFFFFF000000FF);
	// stwu r10,4(r29)
	ea = 4 + r29.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r29.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,8194
	ctx.r7.s64 = 8194;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// clrlwi r6,r22,20
	ctx.r6.u64 = r22.u32 & 0xFFF;
	// li r5,8461
	ctx.r5.s64 = 8461;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// li r12,1
	r12.s64 = 1;
	// lis r17,0
	r17.s64 = 0;
	// rldicr r12,r12,55,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// mr r18,r25
	r18.u64 = r25.u64;
	// ori r17,r17,34679
	r17.u64 = r17.u64 | 34679;
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,-31008(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -31008);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - f0.f64;
	// lfd f0,-20144(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -20144);
	// stwu r7,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// stwu r6,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// stwu r5,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r10.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823C153C:
	// lbz r10,10812(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10812);
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// rlwinm. r11,r10,0,27,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c1554
	if (cr0.eq) goto loc_823C1554;
	// li r11,1
	r11.s64 = 1;
	// b 0x823c15e4
	goto loc_823C15E4;
loc_823C1554:
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c15dc
	if (cr0.eq) goto loc_823C15DC;
	// lwz r11,12304(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12304);
	// lwz r9,12592(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12592);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823c1574
	if (cr6.eq) goto loc_823C1574;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c15dc
	if (!cr6.eq) goto loc_823C15DC;
loc_823C1574:
	// lwz r11,12308(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12308);
	// lwz r9,12596(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12596);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823c158c
	if (cr6.eq) goto loc_823C158C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c15dc
	if (!cr6.eq) goto loc_823C15DC;
loc_823C158C:
	// lwz r11,12312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12312);
	// lwz r9,12600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12600);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823c15a4
	if (cr6.eq) goto loc_823C15A4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c15dc
	if (!cr6.eq) goto loc_823C15DC;
loc_823C15A4:
	// lwz r11,12316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12316);
	// lwz r9,12604(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12604);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823c15bc
	if (cr6.eq) goto loc_823C15BC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c15dc
	if (!cr6.eq) goto loc_823C15DC;
loc_823C15BC:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// lwz r9,12608(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12608);
	// cmplw cr6,r9,r11
	cr6.compare<uint32_t>(ctx.r9.u32, r11.u32, xer);
	// beq cr6,0x823c15d4
	if (cr6.eq) goto loc_823C15D4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c15dc
	if (!cr6.eq) goto loc_823C15DC;
loc_823C15D4:
	// li r11,1
	r11.s64 = 1;
	// b 0x823c15e0
	goto loc_823C15E0;
loc_823C15DC:
	// li r11,0
	r11.s64 = 0;
loc_823C15E0:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823C15E4:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823c1628
	if (!cr0.eq) goto loc_823C1628;
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r30.u32);
	// mr r7,r20
	ctx.r7.u64 = r20.u64;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c1050
	sub_823C1050(ctx, base);
	// b 0x823c1808
	goto loc_823C1808;
loc_823C1628:
	// lbz r11,10815(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10815);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lwz r15,12572(r31)
	r15.u64 = PPC_LOAD_U32(r31.u32 + 12572);
	// ori r27,r9,24576
	r27.u64 = ctx.r9.u64 | 24576;
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c16ec
	if (cr0.eq) goto loc_823C16EC;
	// rlwinm. r11,r10,0,25,25
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c16ec
	if (cr0.eq) goto loc_823C16EC;
	// lis r12,5461
	r12.s64 = 357892096;
	// ori r12,r12,21845
	r12.u64 = r12.u64 | 21845;
	// and. r30,r15,r12
	r30.u64 = r15.u64 & r12.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823c16ec
	if (cr0.eq) goto loc_823C16EC;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x823c16e0
	if (cr6.eq) goto loc_823C16E0;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r11,r29
	r11.u64 = r29.u64;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x823c167c
	if (!cr6.gt) goto loc_823C167C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823C167C:
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stw r19,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r19.u32);
	// mr r7,r14
	ctx.r7.u64 = r14.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r25.u32);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r25.u32);
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// lwz r10,13036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13036);
	// lwz r5,12860(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12860);
	// rlwimi r7,r10,18,0,13
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFC0000) | (ctx.r7.u64 & 0xFFFFFFFF0003FFFF);
	// lwz r6,13040(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 13040);
	// lwz r9,12856(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12856);
	// rlwinm r10,r7,0,0,17
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFC000;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// subf r7,r5,r20
	ctx.r7.s64 = r20.s64 - ctx.r5.s64;
	// rlwimi r10,r6,0,18,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x3FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFC000);
	// subf r6,r9,r21
	ctx.r6.s64 = r21.s64 - ctx.r9.s64;
	// subf r5,r5,r23
	ctx.r5.s64 = r23.s64 - ctx.r5.s64;
	// subf r4,r9,r24
	ctx.r4.s64 = r24.s64 - ctx.r9.s64;
	// bl 0x823c1050
	sub_823C1050(ctx, base);
loc_823C16E0:
	// lis r12,-5462
	r12.s64 = -357957632;
	// ori r12,r12,43690
	r12.u64 = r12.u64 | 43690;
	// and r15,r15,r12
	r15.u64 = r15.u64 & r12.u64;
loc_823C16EC:
	// lwz r11,12612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// li r20,0
	r20.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x823c1808
	if (!cr6.gt) goto loc_823C1808;
	// li r21,0
	r21.s64 = 0;
	// addi r28,r31,12860
	r28.s64 = r31.s64 + 12860;
	// addi r23,r31,12620
	r23.s64 = r31.s64 + 12620;
	// b 0x823c1710
	goto loc_823C1710;
loc_823C170C:
	// lwz r24,364(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
loc_823C1710:
	// lwz r11,-4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + -4);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// bgt cr6,0x823c1720
	if (cr6.gt) goto loc_823C1720;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_823C1720:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// lwz r25,372(r1)
	r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bgt cr6,0x823c1734
	if (cr6.gt) goto loc_823C1734;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_823C1734:
	// lwz r26,4(r23)
	r26.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r11,380(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// cmpw cr6,r11,r26
	cr6.compare<int32_t>(r11.s32, r26.s32, xer);
	// bge cr6,0x823c1748
	if (!cr6.lt) goto loc_823C1748;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_823C1748:
	// lwz r29,8(r23)
	r29.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// lwz r11,388(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// bge cr6,0x823c175c
	if (!cr6.lt) goto loc_823C175C;
	// mr r29,r11
	r29.u64 = r11.u64;
loc_823C175C:
	// cmpw cr6,r24,r26
	cr6.compare<int32_t>(r24.s32, r26.s32, xer);
	// bge cr6,0x823c17ec
	if (!cr6.lt) goto loc_823C17EC;
	// cmpw cr6,r25,r29
	cr6.compare<int32_t>(r25.s32, r29.s32, xer);
	// bge cr6,0x823c17ec
	if (!cr6.lt) goto loc_823C17EC;
	// li r11,3
	r11.s64 = 3;
	// slw r11,r11,r21
	r11.u64 = r21.u8 & 0x20 ? 0 : (r11.u32 << (r21.u8 & 0x3F));
	// and. r30,r11,r15
	r30.u64 = r11.u64 & r15.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x823c17ec
	if (cr0.eq) goto loc_823C17EC;
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823c1798
	if (!cr6.gt) goto loc_823C1798;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823C1798:
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r18.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r17,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r17.u32);
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r19.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r22.u32);
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// mr r10,r14
	ctx.r10.u64 = r14.u64;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r11,-4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + -4);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf r6,r11,r26
	ctx.r6.s64 = r26.s64 - r11.s64;
	// subf r7,r9,r29
	ctx.r7.s64 = r29.s64 - ctx.r9.s64;
	// subf r5,r9,r25
	ctx.r5.s64 = r25.s64 - ctx.r9.s64;
	// subf r4,r11,r24
	ctx.r4.s64 = r24.s64 - r11.s64;
	// bl 0x823c1050
	sub_823C1050(ctx, base);
loc_823C17EC:
	// lwz r11,12612(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12612);
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r23,r23,16
	r23.s64 = r23.s64 + 16;
	// addi r21,r21,2
	r21.s64 = r21.s64 + 2;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// cmplw cr6,r20,r11
	cr6.compare<uint32_t>(r20.u32, r11.u32, xer);
	// blt cr6,0x823c170c
	if (cr6.lt) goto loc_823C170C;
loc_823C1808:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x8239bd10
	return;
}

__attribute__((alias("__imp__sub_823C1814"))) PPC_WEAK_FUNC(sub_823C1814);
PPC_FUNC_IMPL(__imp__sub_823C1814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C1818"))) PPC_WEAK_FUNC(sub_823C1818);
PPC_FUNC_IMPL(__imp__sub_823C1818) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
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
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd0
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r22,r8
	r22.u64 = ctx.r8.u64;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x823c1860
	if (!cr6.eq) goto loc_823C1860;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r23,r1,112
	r23.s64 = ctx.r1.s64 + 112;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f0,116(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
loc_823C1860:
	// lwz r11,12320(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12320);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c1874
	if (!cr6.eq) goto loc_823C1874;
	// rlwinm. r28,r28,0,28,25
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x823c1e9c
	if (cr0.eq) goto loc_823C1E9C;
loc_823C1874:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,12512(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12512);
	f0.f64 = double(temp.f32);
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// lfs f13,12516(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12516);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,104
	ctx.r8.s64 = ctx.r1.s64 + 104;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// lfs f12,12520(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12520);
	ctx.f12.f64 = double(temp.f32);
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f11,12524(r31)
	temp.u32 = PPC_LOAD_U32(r31.u32 + 12524);
	ctx.f11.f64 = double(temp.f32);
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// fctiwz f0,f13
	f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f0,0,r9
	PPC_STORE_U32(ctx.r9.u32, f0.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fctiwz f0,f12
	f0.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f0,0,r8
	PPC_STORE_U32(ctx.r8.u32, f0.u32);
	// fctiwz f0,f11
	f0.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, f0.u32);
	// mr r24,r11
	r24.u64 = r11.u64;
	// bgt cr6,0x823c18cc
	if (cr6.gt) goto loc_823C18CC;
	// mr r24,r9
	r24.u64 = ctx.r9.u64;
loc_823C18CC:
	// lwz r11,4(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r25,r11
	r25.u64 = r11.u64;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bgt cr6,0x823c18e4
	if (cr6.gt) goto loc_823C18E4;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
loc_823C18E4:
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,8(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mr r26,r11
	r26.u64 = r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x823c1900
	if (cr6.lt) goto loc_823C1900;
	// mr r26,r10
	r26.u64 = ctx.r10.u64;
loc_823C1900:
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,12(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mr r27,r11
	r27.u64 = r11.u64;
	// cmpw cr6,r11,r10
	cr6.compare<int32_t>(r11.s32, ctx.r10.s32, xer);
	// blt cr6,0x823c191c
	if (cr6.lt) goto loc_823C191C;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_823C191C:
	// lwz r11,11720(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11720);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x823c1968
	if (cr6.eq) goto loc_823C1968;
	// lwz r11,12540(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12540);
	// cmpw cr6,r24,r11
	cr6.compare<int32_t>(r24.s32, r11.s32, xer);
	// bgt cr6,0x823c1938
	if (cr6.gt) goto loc_823C1938;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_823C1938:
	// lwz r11,12544(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12544);
	// cmpw cr6,r25,r11
	cr6.compare<int32_t>(r25.s32, r11.s32, xer);
	// bgt cr6,0x823c1948
	if (cr6.gt) goto loc_823C1948;
	// mr r25,r11
	r25.u64 = r11.u64;
loc_823C1948:
	// lwz r11,12548(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12548);
	// cmpw cr6,r26,r11
	cr6.compare<int32_t>(r26.s32, r11.s32, xer);
	// blt cr6,0x823c1958
	if (cr6.lt) goto loc_823C1958;
	// mr r26,r11
	r26.u64 = r11.u64;
loc_823C1958:
	// lwz r11,12552(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12552);
	// cmpw cr6,r27,r11
	cr6.compare<int32_t>(r27.s32, r11.s32, xer);
	// blt cr6,0x823c1968
	if (cr6.lt) goto loc_823C1968;
	// mr r27,r11
	r27.u64 = r11.u64;
loc_823C1968:
	// cmpw cr6,r26,r24
	cr6.compare<int32_t>(r26.s32, r24.s32, xer);
	// ble cr6,0x823c1e9c
	if (!cr6.gt) goto loc_823C1E9C;
	// cmpw cr6,r27,r25
	cr6.compare<int32_t>(r27.s32, r25.s32, xer);
	// ble cr6,0x823c1e9c
	if (!cr6.gt) goto loc_823C1E9C;
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// beq cr6,0x823c1a98
	if (cr6.eq) goto loc_823C1A98;
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823c19a4
	if (cr6.eq) goto loc_823C19A4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r5,10432(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10432);
	// bl 0x823d37f0
	sub_823D37F0(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(r31.u32 + 16, ctx.r3.u64);
loc_823C19A4:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823c19d4
	if (cr6.eq) goto loc_823C19D4;
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
loc_823C19D4:
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823c1a0c
	if (cr6.eq) goto loc_823C1A0C;
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
loc_823C1A0C:
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
	// beq cr6,0x823c1a54
	if (cr6.eq) goto loc_823C1A54;
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
loc_823C1A54:
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
	// beq cr6,0x823c1a98
	if (cr6.eq) goto loc_823C1A98;
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
loc_823C1A98:
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823c1ae8
	if (cr6.eq) goto loc_823C1AE8;
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
	// beq cr6,0x823c1ae8
	if (cr6.eq) goto loc_823C1AE8;
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
loc_823C1AE8:
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x823c1b20
	if (cr6.eq) goto loc_823C1B20;
	// clrldi r10,r11,26
	ctx.r10.u64 = r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x823c1b20
	if (cr6.eq) goto loc_823C1B20;
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
loc_823C1B20:
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x823c1b3c
	if (!cr6.gt) goto loc_823C1B3C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823C1B3C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r7,r9,15104
	ctx.r7.u64 = ctx.r9.u64 | 15104;
	// li r8,768
	ctx.r8.s64 = 768;
	// lis r9,-16356
	ctx.r9.s64 = -1071906816;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// ori r3,r9,11008
	ctx.r3.u64 = ctx.r9.u64 | 11008;
	// lwz r10,12572(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12572);
	// li r30,27
	r30.s64 = 27;
	// lis r9,-32249
	ctx.r9.s64 = -2113470464;
	// li r5,108
	ctx.r5.s64 = 108;
	// addi r29,r9,-20328
	r29.s64 = ctx.r9.s64 + -20328;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// addi r4,r29,40
	ctx.r4.s64 = r29.s64 + 40;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// mr r30,r11
	r30.u64 = r11.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// addi r3,r30,108
	ctx.r3.s64 = r30.s64 + 108;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// ble cr6,0x823c1bb8
	if (!cr6.gt) goto loc_823C1BB8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823C1BB8:
	// lis r11,-16374
	r11.s64 = -1073086464;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,11008
	r11.u64 = r11.u64 | 11008;
	// li r9,9
	ctx.r9.s64 = 9;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// lis r9,4097
	ctx.r9.s64 = 268500992;
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
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
	// ble cr6,0x823c1c28
	if (!cr6.gt) goto loc_823C1C28;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
loc_823C1C28:
	// lis r11,2
	r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	r11.u64 = r11.u64 | 8448;
	// ori r30,r10,65535
	r30.u64 = ctx.r10.u64 | 65535;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r7,8851
	ctx.r7.s64 = 8851;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r11,2
	r11.s64 = 131072;
	// li r29,768
	r29.s64 = 768;
	// ori r5,r11,8708
	ctx.r5.u64 = r11.u64 | 8708;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	r11.s64 = 65536;
	// li r21,8978
	r21.s64 = 8978;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// mr r19,r30
	r19.u64 = r30.u64;
	// li r20,8205
	r20.s64 = 8205;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r18,0
	r18.s64 = 0;
	// li r12,1
	r12.s64 = 1;
	// clrlwi. r10,r28,28
	ctx.r10.u64 = r28.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rldicr r12,r12,41,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
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
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r3.u32 = ea;
	// stwu r21,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r21.u32);
	ctx.r3.u32 = ea;
	// stwu r19,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r19.u32);
	ctx.r3.u32 = ea;
	// stwu r20,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r20.u32);
	ctx.r3.u32 = ea;
	// stwu r18,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r18.u32);
	ctx.r3.u32 = ea;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,40,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,39,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,35,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ld r11,32(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
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
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// bne 0x823c1d78
	if (!cr0.eq) goto loc_823C1D78;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c12b0
	sub_823C12B0(ctx, base);
	// b 0x823c1e54
	goto loc_823C1E54;
loc_823C1D78:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// ble cr6,0x823c1d94
	if (!cr6.gt) goto loc_823C1D94;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823d22b8
	sub_823D22B8(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_823C1D94:
	// li r10,8452
	ctx.r10.s64 = 8452;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
	// li r9,8706
	ctx.r9.s64 = 8706;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,8705
	ctx.r10.s64 = 8705;
	// ori r6,r6,1
	ctx.r6.u64 = ctx.r6.u64 | 1;
	// li r12,1
	r12.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// addi r29,r31,12304
	r29.s64 = r31.s64 + 12304;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
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
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,1024
	r11.u64 = r11.u64 | 1024;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823C1DF8:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and. r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c1e44
	if (cr0.eq) goto loc_823C1E44;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x823c1e44
	if (cr6.eq) goto loc_823C1E44;
	// mr r10,r23
	ctx.r10.u64 = r23.u64;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r22.u32);
	// mr r9,r27
	ctx.r9.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x823c12b0
	sub_823C12B0(ctx, base);
	// rlwinm r28,r28,0,28,25
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFFCF;
loc_823C1E44:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// blt cr6,0x823c1df8
	if (cr6.lt) goto loc_823C1DF8;
loc_823C1E54:
	// lwz r11,10312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10312);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10308);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x823bd6f8
	sub_823BD6F8(ctx, base);
	// lbz r11,10813(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10813);
	// ori r11,r11,4
	r11.u64 = r11.u64 | 4;
	// stb r11,10813(r31)
	PPC_STORE_U8(r31.u32 + 10813, r11.u8);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_823C1E9C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x8239bd20
	return;
}

__attribute__((alias("__imp__sub_823C1EA8"))) PPC_WEAK_FUNC(sub_823C1EA8);
PPC_FUNC_IMPL(__imp__sub_823C1EA8) {
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
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// bne cr6,0x823c1fb4
	if (!cr6.eq) goto loc_823C1FB4;
	// lwz r7,12304(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12304);
	// mr. r11,r7
	r11.u64 = ctx.r7.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x823c1ed0
	if (!cr0.eq) goto loc_823C1ED0;
	// lwz r11,12320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12320);
loc_823C1ED0:
	// lbz r10,10812(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10812);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// rlwinm r9,r11,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r11,r11,29,17,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x7FFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// rlwinm. r31,r10,0,27,27
	r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x823c1f0c
	if (cr0.eq) goto loc_823C1F0C;
	// li r11,1
	r11.s64 = 1;
	// b 0x823c1f98
	goto loc_823C1F98;
loc_823C1F0C:
	// rlwinm. r11,r10,0,26,26
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c1f90
	if (cr0.eq) goto loc_823C1F90;
	// lwz r11,12592(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12592);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// beq cr6,0x823c1f28
	if (cr6.eq) goto loc_823C1F28;
	// cmplwi cr6,r7,0
	cr6.compare<uint32_t>(ctx.r7.u32, 0, xer);
	// bne cr6,0x823c1f90
	if (!cr6.eq) goto loc_823C1F90;
loc_823C1F28:
	// lwz r11,12308(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12308);
	// lwz r10,12596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12596);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c1f40
	if (cr6.eq) goto loc_823C1F40;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c1f90
	if (!cr6.eq) goto loc_823C1F90;
loc_823C1F40:
	// lwz r11,12312(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12312);
	// lwz r10,12600(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12600);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c1f58
	if (cr6.eq) goto loc_823C1F58;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c1f90
	if (!cr6.eq) goto loc_823C1F90;
loc_823C1F58:
	// lwz r11,12316(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12316);
	// lwz r10,12604(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12604);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c1f70
	if (cr6.eq) goto loc_823C1F70;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c1f90
	if (!cr6.eq) goto loc_823C1F90;
loc_823C1F70:
	// lwz r11,12320(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12320);
	// lwz r10,12608(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12608);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x823c1f88
	if (cr6.eq) goto loc_823C1F88;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x823c1f90
	if (!cr6.eq) goto loc_823C1F90;
loc_823C1F88:
	// li r11,1
	r11.s64 = 1;
	// b 0x823c1f94
	goto loc_823C1F94;
loc_823C1F90:
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_823C1F94:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_823C1F98:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x823c1fb0
	if (cr0.eq) goto loc_823C1FB0;
	// lwz r11,13044(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13044);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lwz r11,13048(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13048);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
loc_823C1FB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
loc_823C1FB4:
	// bl 0x823c1818
	sub_823C1818(ctx, base);
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

__attribute__((alias("__imp__sub_823C1FCC"))) PPC_WEAK_FUNC(sub_823C1FCC);
PPC_FUNC_IMPL(__imp__sub_823C1FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823C1FD0"))) PPC_WEAK_FUNC(sub_823C1FD0);
PPC_FUNC_IMPL(__imp__sub_823C1FD0) {
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
	PPCRegister f31{};
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcf4
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// addi r10,r1,212
	ctx.r10.s64 = ctx.r1.s64 + 212;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// addi r11,r11,-20160
	r11.s64 = r11.s64 + -20160;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r9
	r27.u64 = ctx.r9.u64;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// lvx128 v13,r0,r11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r11,-32249
	r11.s64 = -2113470464;
	// vsldoi v0,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// addi r11,r11,-20176
	r11.s64 = r11.s64 + -20176;
	// vupkd3d128 v0,v0,0
	vTemp.u32[0] = ctx.v0.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v0.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v0.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v0.u8[2] | 0x3F800000;
	ctx.v0 = vTemp;
	// lvx128 v12,r0,r11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x823c2048
	if (!cr6.eq) goto loc_823C2048;
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x823c1ea8
	sub_823C1EA8(ctx, base);
	// b 0x823c2080
	goto loc_823C2080;
loc_823C2048:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x823c2080
	if (cr6.eq) goto loc_823C2080;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
loc_823C2058:
	// mr r8,r27
	ctx.r8.u64 = r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x823c1ea8
	sub_823C1EA8(ctx, base);
	// addic. r31,r31,-1
	xer.ca = r31.u32 > 0;
	r31.s64 = r31.s64 + -1;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// bne 0x823c2058
	if (!cr0.eq) goto loc_823C2058;
loc_823C2080:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_823C208C"))) PPC_WEAK_FUNC(sub_823C208C);
PPC_FUNC_IMPL(__imp__sub_823C208C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

