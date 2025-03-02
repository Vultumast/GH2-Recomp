#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82581C70"))) PPC_WEAK_FUNC(sub_82581C70);
PPC_FUNC_IMPL(__imp__sub_82581C70) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581C78"))) PPC_WEAK_FUNC(sub_82581C78);
PPC_FUNC_IMPL(__imp__sub_82581C78) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581C80"))) PPC_WEAK_FUNC(sub_82581C80);
PPC_FUNC_IMPL(__imp__sub_82581C80) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581C88"))) PPC_WEAK_FUNC(sub_82581C88);
PPC_FUNC_IMPL(__imp__sub_82581C88) {
	PPC_FUNC_PROLOGUE();
	// li r3,12
	ctx.r3.s64 = 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581C90"))) PPC_WEAK_FUNC(sub_82581C90);
PPC_FUNC_IMPL(__imp__sub_82581C90) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581C98"))) PPC_WEAK_FUNC(sub_82581C98);
PPC_FUNC_IMPL(__imp__sub_82581C98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// addi r11,r3,-2
	r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(r11.u32, 36, xer);
	// bgt cr6,0x82581cf4
	if (cr6.gt) {
		sub_82581CF4(ctx, base);
		return;
	}
	// lis r12,-32245
	r12.s64 = -2113208320;
	// addi r12,r12,-2416
	r12.s64 = r12.s64 + -2416;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32168
	r12.s64 = -2108162048;
	// addi r12,r12,7372
	r12.s64 = r12.s64 + 7372;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x82581CCC
		return;
	case 1:
		// ERROR: 0x82581CD4
		return;
	case 2:
		// ERROR: 0x82581CD4
		return;
	case 3:
		// ERROR: 0x82581CD4
		return;
	case 4:
		// ERROR: 0x82581CDC
		return;
	case 5:
		// ERROR: 0x82581CDC
		return;
	case 6:
		// ERROR: 0x82581CCC
		return;
	case 7:
		// ERROR: 0x82581CCC
		return;
	case 8:
		// ERROR: 0x82581CD4
		return;
	case 9:
		// ERROR: 0x82581CF4
		return;
	case 10:
		// ERROR: 0x82581CF4
		return;
	case 11:
		// ERROR: 0x82581CF4
		return;
	case 12:
		// ERROR: 0x82581CDC
		return;
	case 13:
		// ERROR: 0x82581CD4
		return;
	case 14:
		// ERROR: 0x82581CDC
		return;
	case 15:
		// ERROR: 0x82581CDC
		return;
	case 16:
		// ERROR: 0x82581CF4
		return;
	case 17:
		// ERROR: 0x82581CF4
		return;
	case 18:
		// ERROR: 0x82581CF4
		return;
	case 19:
		// ERROR: 0x82581CF4
		return;
	case 20:
		// ERROR: 0x82581CF4
		return;
	case 21:
		// ERROR: 0x82581CF4
		return;
	case 22:
		// ERROR: 0x82581CD4
		return;
	case 23:
		// ERROR: 0x82581CDC
		return;
	case 24:
		// ERROR: 0x82581CE4
		return;
	case 25:
		// ERROR: 0x82581CF4
		return;
	case 26:
		// ERROR: 0x82581CF4
		return;
	case 27:
		// ERROR: 0x82581CF4
		return;
	case 28:
		// ERROR: 0x82581CD4
		return;
	case 29:
		// ERROR: 0x82581CDC
		return;
	case 30:
		// ERROR: 0x82581CE4
		return;
	case 31:
		// ERROR: 0x82581CF4
		return;
	case 32:
		// ERROR: 0x82581CF4
		return;
	case 33:
		// ERROR: 0x82581CF4
		return;
	case 34:
		// ERROR: 0x82581CDC
		return;
	case 35:
		// ERROR: 0x82581CE4
		return;
	case 36:
		// ERROR: 0x82581CEC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82581CCC"))) PPC_WEAK_FUNC(sub_82581CCC);
PPC_FUNC_IMPL(__imp__sub_82581CCC) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581CD4"))) PPC_WEAK_FUNC(sub_82581CD4);
PPC_FUNC_IMPL(__imp__sub_82581CD4) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581CDC"))) PPC_WEAK_FUNC(sub_82581CDC);
PPC_FUNC_IMPL(__imp__sub_82581CDC) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581CE4"))) PPC_WEAK_FUNC(sub_82581CE4);
PPC_FUNC_IMPL(__imp__sub_82581CE4) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581CEC"))) PPC_WEAK_FUNC(sub_82581CEC);
PPC_FUNC_IMPL(__imp__sub_82581CEC) {
	PPC_FUNC_PROLOGUE();
	// li r3,16
	ctx.r3.s64 = 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581CF4"))) PPC_WEAK_FUNC(sub_82581CF4);
PPC_FUNC_IMPL(__imp__sub_82581CF4) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581CFC"))) PPC_WEAK_FUNC(sub_82581CFC);
PPC_FUNC_IMPL(__imp__sub_82581CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581D00"))) PPC_WEAK_FUNC(sub_82581D00);
PPC_FUNC_IMPL(__imp__sub_82581D00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// addi r11,r3,-2
	r11.s64 = ctx.r3.s64 + -2;
	// cmplwi cr6,r11,36
	cr6.compare<uint32_t>(r11.u32, 36, xer);
	// bgt cr6,0x82581d54
	if (cr6.gt) {
		sub_82581D54(ctx, base);
		return;
	}
	// lis r12,-32245
	r12.s64 = -2113208320;
	// addi r12,r12,-2312
	r12.s64 = r12.s64 + -2312;
	// lbzx r0,r12,r11
	r0.u64 = PPC_LOAD_U8(r12.u32 + r11.u32);
	// lis r12,-32168
	r12.s64 = -2108162048;
	// addi r12,r12,7476
	r12.s64 = r12.s64 + 7476;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (r11.u64) {
	case 0:
		// ERROR: 0x82581D4C
		return;
	case 1:
		// ERROR: 0x82581D34
		return;
	case 2:
		// ERROR: 0x82581D3C
		return;
	case 3:
		// ERROR: 0x82581D3C
		return;
	case 4:
		// ERROR: 0x82581D34
		return;
	case 5:
		// ERROR: 0x82581D34
		return;
	case 6:
		// ERROR: 0x82581D4C
		return;
	case 7:
		// ERROR: 0x82581D4C
		return;
	case 8:
		// ERROR: 0x82581D44
		return;
	case 9:
		// ERROR: 0x82581D54
		return;
	case 10:
		// ERROR: 0x82581D54
		return;
	case 11:
		// ERROR: 0x82581D54
		return;
	case 12:
		// ERROR: 0x82581D34
		return;
	case 13:
		// ERROR: 0x82581D34
		return;
	case 14:
		// ERROR: 0x82581D3C
		return;
	case 15:
		// ERROR: 0x82581D3C
		return;
	case 16:
		// ERROR: 0x82581D54
		return;
	case 17:
		// ERROR: 0x82581D54
		return;
	case 18:
		// ERROR: 0x82581D54
		return;
	case 19:
		// ERROR: 0x82581D54
		return;
	case 20:
		// ERROR: 0x82581D54
		return;
	case 21:
		// ERROR: 0x82581D54
		return;
	case 22:
		// ERROR: 0x82581D4C
		return;
	case 23:
		// ERROR: 0x82581D44
		return;
	case 24:
		// ERROR: 0x82581D34
		return;
	case 25:
		// ERROR: 0x82581D54
		return;
	case 26:
		// ERROR: 0x82581D54
		return;
	case 27:
		// ERROR: 0x82581D54
		return;
	case 28:
		// ERROR: 0x82581D4C
		return;
	case 29:
		// ERROR: 0x82581D44
		return;
	case 30:
		// ERROR: 0x82581D34
		return;
	case 31:
		// ERROR: 0x82581D54
		return;
	case 32:
		// ERROR: 0x82581D54
		return;
	case 33:
		// ERROR: 0x82581D54
		return;
	case 34:
		// ERROR: 0x82581D4C
		return;
	case 35:
		// ERROR: 0x82581D44
		return;
	case 36:
		// ERROR: 0x82581D34
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82581D34"))) PPC_WEAK_FUNC(sub_82581D34);
PPC_FUNC_IMPL(__imp__sub_82581D34) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581D3C"))) PPC_WEAK_FUNC(sub_82581D3C);
PPC_FUNC_IMPL(__imp__sub_82581D3C) {
	PPC_FUNC_PROLOGUE();
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581D44"))) PPC_WEAK_FUNC(sub_82581D44);
PPC_FUNC_IMPL(__imp__sub_82581D44) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581D4C"))) PPC_WEAK_FUNC(sub_82581D4C);
PPC_FUNC_IMPL(__imp__sub_82581D4C) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581D54"))) PPC_WEAK_FUNC(sub_82581D54);
PPC_FUNC_IMPL(__imp__sub_82581D54) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581D5C"))) PPC_WEAK_FUNC(sub_82581D5C);
PPC_FUNC_IMPL(__imp__sub_82581D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82581D60"))) PPC_WEAK_FUNC(sub_82581D60);
PPC_FUNC_IMPL(__imp__sub_82581D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,61
	cr6.compare<uint32_t>(ctx.r4.u32, 61, xer);
	// bgt cr6,0x82581edc
	if (cr6.gt) {
		sub_82581EDC(ctx, base);
		return;
	}
	// lis r12,-32245
	r12.s64 = -2113208320;
	// addi r12,r12,-2272
	r12.s64 = r12.s64 + -2272;
	// lbzx r0,r12,r4
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32168
	r12.s64 = -2108162048;
	// addi r12,r12,7572
	r12.s64 = r12.s64 + 7572;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x82581E8C
		return;
	case 1:
		// ERROR: 0x82581E8C
		return;
	case 2:
		// ERROR: 0x82581D94
		return;
	case 3:
		// ERROR: 0x82581DA8
		return;
	case 4:
		// ERROR: 0x82581DC0
		return;
	case 5:
		// ERROR: 0x82581DE0
		return;
	case 6:
		// ERROR: 0x82581E34
		return;
	case 7:
		// ERROR: 0x82581E50
		return;
	case 8:
		// ERROR: 0x82581D94
		return;
	case 9:
		// ERROR: 0x82581D94
		return;
	case 10:
		// ERROR: 0x82581E04
		return;
	case 11:
		// ERROR: 0x82581E34
		return;
	case 12:
		// ERROR: 0x82581E34
		return;
	case 13:
		// ERROR: 0x82581EDC
		return;
	case 14:
		// ERROR: 0x82581E34
		return;
	case 15:
		// ERROR: 0x82581E20
		return;
	case 16:
		// ERROR: 0x82581E5C
		return;
	case 17:
		// ERROR: 0x82581E68
		return;
	case 18:
		// ERROR: 0x82581EAC
		return;
	case 19:
		// ERROR: 0x82581EB4
		return;
	case 20:
		// ERROR: 0x82581EB4
		return;
	case 21:
		// ERROR: 0x82581EDC
		return;
	case 22:
		// ERROR: 0x82581E94
		return;
	case 23:
		// ERROR: 0x82581E94
		return;
	case 24:
		// ERROR: 0x82581E2C
		return;
	case 25:
		// ERROR: 0x82581E84
		return;
	case 26:
		// ERROR: 0x82581EA4
		return;
	case 27:
		// ERROR: 0x82581E2C
		return;
	case 28:
		// ERROR: 0x82581E84
		return;
	case 29:
		// ERROR: 0x82581EA4
		return;
	case 30:
		// ERROR: 0x82581E2C
		return;
	case 31:
		// ERROR: 0x82581E84
		return;
	case 32:
		// ERROR: 0x82581EA4
		return;
	case 33:
		// ERROR: 0x82581E8C
		return;
	case 34:
		// ERROR: 0x82581EAC
		return;
	case 35:
		// ERROR: 0x82581EB4
		return;
	case 36:
		// ERROR: 0x82581E8C
		return;
	case 37:
		// ERROR: 0x82581EAC
		return;
	case 38:
		// ERROR: 0x82581EB4
		return;
	case 39:
		// ERROR: 0x82581E34
		return;
	case 40:
		// ERROR: 0x82581E34
		return;
	case 41:
		// ERROR: 0x82581E2C
		return;
	case 42:
		// ERROR: 0x82581E84
		return;
	case 43:
		// ERROR: 0x82581D94
		return;
	case 44:
		// ERROR: 0x82581E34
		return;
	case 45:
		// ERROR: 0x82581E34
		return;
	case 46:
		// ERROR: 0x82581E2C
		return;
	case 47:
		// ERROR: 0x82581E2C
		return;
	case 48:
		// ERROR: 0x82581E84
		return;
	case 49:
		// ERROR: 0x82581EB4
		return;
	case 50:
		// ERROR: 0x82581E34
		return;
	case 51:
		// ERROR: 0x82581EAC
		return;
	case 52:
		// ERROR: 0x82581EB4
		return;
	case 53:
		// ERROR: 0x82581EB4
		return;
	case 54:
		// ERROR: 0x82581E50
		return;
	case 55:
		// ERROR: 0x82581E5C
		return;
	case 56:
		// ERROR: 0x82581E68
		return;
	case 57:
		// ERROR: 0x82581EBC
		return;
	case 58:
		// ERROR: 0x82581EAC
		return;
	case 59:
		// ERROR: 0x82581EAC
		return;
	case 60:
		// ERROR: 0x82581EAC
		return;
	case 61:
		// ERROR: 0x82581EAC
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82581D94"))) PPC_WEAK_FUNC(sub_82581D94);
PPC_FUNC_IMPL(__imp__sub_82581D94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82581ee8
	// ERROR 82581EE8
	return;
}

__attribute__((alias("__imp__sub_82581DA8"))) PPC_WEAK_FUNC(sub_82581DA8);
PPC_FUNC_IMPL(__imp__sub_82581DA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// b 0x82581eec
	// ERROR 82581EEC
	return;
}

__attribute__((alias("__imp__sub_82581DC0"))) PPC_WEAK_FUNC(sub_82581DC0);
PPC_FUNC_IMPL(__imp__sub_82581DC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// b 0x82581ef0
	// ERROR 82581EF0
	return;
}

__attribute__((alias("__imp__sub_82581DE0"))) PPC_WEAK_FUNC(sub_82581DE0);
PPC_FUNC_IMPL(__imp__sub_82581DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581E04"))) PPC_WEAK_FUNC(sub_82581E04);
PPC_FUNC_IMPL(__imp__sub_82581E04) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x82581ef0
	// ERROR 82581EF0
	return;
}

__attribute__((alias("__imp__sub_82581E20"))) PPC_WEAK_FUNC(sub_82581E20);
PPC_FUNC_IMPL(__imp__sub_82581E20) {
	PPC_FUNC_PROLOGUE();
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82581ee4
	// ERROR 82581EE4
	return;
}

__attribute__((alias("__imp__sub_82581E2C"))) PPC_WEAK_FUNC(sub_82581E2C);
PPC_FUNC_IMPL(__imp__sub_82581E2C) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x82581d98
	// ERROR 82581D98
	return;
}

__attribute__((alias("__imp__sub_82581E34"))) PPC_WEAK_FUNC(sub_82581E34);
PPC_FUNC_IMPL(__imp__sub_82581E34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,8
	ctx.r9.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581E50"))) PPC_WEAK_FUNC(sub_82581E50);
PPC_FUNC_IMPL(__imp__sub_82581E50) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82581db0
	// ERROR 82581DB0
	return;
}

__attribute__((alias("__imp__sub_82581E5C"))) PPC_WEAK_FUNC(sub_82581E5C);
PPC_FUNC_IMPL(__imp__sub_82581E5C) {
	PPC_FUNC_PROLOGUE();
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,10
	ctx.r9.s64 = 10;
	// b 0x82581de8
	// ERROR 82581DE8
	return;
}

__attribute__((alias("__imp__sub_82581E68"))) PPC_WEAK_FUNC(sub_82581E68);
PPC_FUNC_IMPL(__imp__sub_82581E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// b 0x82581eec
	// ERROR 82581EEC
	return;
}

__attribute__((alias("__imp__sub_82581E84"))) PPC_WEAK_FUNC(sub_82581E84);
PPC_FUNC_IMPL(__imp__sub_82581E84) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x82581e08
	// ERROR 82581E08
	return;
}

__attribute__((alias("__imp__sub_82581E8C"))) PPC_WEAK_FUNC(sub_82581E8C);
PPC_FUNC_IMPL(__imp__sub_82581E8C) {
	PPC_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x82581d98
	// ERROR 82581D98
	return;
}

__attribute__((alias("__imp__sub_82581E94"))) PPC_WEAK_FUNC(sub_82581E94);
PPC_FUNC_IMPL(__imp__sub_82581E94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r8,24
	ctx.r8.s64 = 24;
	// li r9,8
	ctx.r9.s64 = 8;
	// stw r8,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r8.u32);
	// b 0x82581e0c
	// ERROR 82581E0C
	return;
}

__attribute__((alias("__imp__sub_82581EA4"))) PPC_WEAK_FUNC(sub_82581EA4);
PPC_FUNC_IMPL(__imp__sub_82581EA4) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x82581e38
	// ERROR 82581E38
	return;
}

__attribute__((alias("__imp__sub_82581EAC"))) PPC_WEAK_FUNC(sub_82581EAC);
PPC_FUNC_IMPL(__imp__sub_82581EAC) {
	PPC_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x82581e08
	// ERROR 82581E08
	return;
}

__attribute__((alias("__imp__sub_82581EB4"))) PPC_WEAK_FUNC(sub_82581EB4);
PPC_FUNC_IMPL(__imp__sub_82581EB4) {
	PPC_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x82581e38
	// ERROR 82581E38
	return;
}

__attribute__((alias("__imp__sub_82581EBC"))) PPC_WEAK_FUNC(sub_82581EBC);
PPC_FUNC_IMPL(__imp__sub_82581EBC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,32
	ctx.r9.s64 = 32;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581EDC"))) PPC_WEAK_FUNC(sub_82581EDC);
PPC_FUNC_IMPL(__imp__sub_82581EDC) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581EF8"))) PPC_WEAK_FUNC(sub_82581EF8);
PPC_FUNC_IMPL(__imp__sub_82581EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// addi r10,r4,-2
	ctx.r10.s64 = ctx.r4.s64 + -2;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,36
	cr6.compare<uint32_t>(ctx.r10.u32, 36, xer);
	// bgt cr6,0x82582048
	if (cr6.gt) {
		sub_82582048(ctx, base);
		return;
	}
	// lis r12,-32245
	r12.s64 = -2113208320;
	// addi r12,r12,-2208
	r12.s64 = r12.s64 + -2208;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32168
	r12.s64 = -2108162048;
	// addi r12,r12,7984
	r12.s64 = r12.s64 + 7984;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x82581F30
		return;
	case 1:
		// ERROR: 0x82581F44
		return;
	case 2:
		// ERROR: 0x82581F5C
		return;
	case 3:
		// ERROR: 0x82581F7C
		return;
	case 4:
		// ERROR: 0x82581FD0
		return;
	case 5:
		// ERROR: 0x82581FEC
		return;
	case 6:
		// ERROR: 0x82581F30
		return;
	case 7:
		// ERROR: 0x82581F30
		return;
	case 8:
		// ERROR: 0x82581FA0
		return;
	case 9:
		// ERROR: 0x82582048
		return;
	case 10:
		// ERROR: 0x82582048
		return;
	case 11:
		// ERROR: 0x82582048
		return;
	case 12:
		// ERROR: 0x82581FD0
		return;
	case 13:
		// ERROR: 0x82581FBC
		return;
	case 14:
		// ERROR: 0x82581FF8
		return;
	case 15:
		// ERROR: 0x82582004
		return;
	case 16:
		// ERROR: 0x82582048
		return;
	case 17:
		// ERROR: 0x82582048
		return;
	case 18:
		// ERROR: 0x82582048
		return;
	case 19:
		// ERROR: 0x82582048
		return;
	case 20:
		// ERROR: 0x82582048
		return;
	case 21:
		// ERROR: 0x82582048
		return;
	case 22:
		// ERROR: 0x82581FC8
		return;
	case 23:
		// ERROR: 0x82582020
		return;
	case 24:
		// ERROR: 0x82582030
		return;
	case 25:
		// ERROR: 0x82582048
		return;
	case 26:
		// ERROR: 0x82582048
		return;
	case 27:
		// ERROR: 0x82582048
		return;
	case 28:
		// ERROR: 0x82581FC8
		return;
	case 29:
		// ERROR: 0x82582020
		return;
	case 30:
		// ERROR: 0x82582030
		return;
	case 31:
		// ERROR: 0x82582048
		return;
	case 32:
		// ERROR: 0x82582048
		return;
	case 33:
		// ERROR: 0x82582048
		return;
	case 34:
		// ERROR: 0x82582028
		return;
	case 35:
		// ERROR: 0x82582038
		return;
	case 36:
		// ERROR: 0x82582040
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82581F30"))) PPC_WEAK_FUNC(sub_82581F30);
PPC_FUNC_IMPL(__imp__sub_82581F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82582054
	// ERROR 82582054
	return;
}

__attribute__((alias("__imp__sub_82581F44"))) PPC_WEAK_FUNC(sub_82581F44);
PPC_FUNC_IMPL(__imp__sub_82581F44) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// b 0x82582058
	// ERROR 82582058
	return;
}

__attribute__((alias("__imp__sub_82581F5C"))) PPC_WEAK_FUNC(sub_82581F5C);
PPC_FUNC_IMPL(__imp__sub_82581F5C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// b 0x8258205c
	// ERROR 8258205C
	return;
}

__attribute__((alias("__imp__sub_82581F7C"))) PPC_WEAK_FUNC(sub_82581F7C);
PPC_FUNC_IMPL(__imp__sub_82581F7C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581FA0"))) PPC_WEAK_FUNC(sub_82581FA0);
PPC_FUNC_IMPL(__imp__sub_82581FA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,8
	ctx.r9.s64 = 8;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// b 0x8258205c
	// ERROR 8258205C
	return;
}

__attribute__((alias("__imp__sub_82581FBC"))) PPC_WEAK_FUNC(sub_82581FBC);
PPC_FUNC_IMPL(__imp__sub_82581FBC) {
	PPC_FUNC_PROLOGUE();
	// li r10,4
	ctx.r10.s64 = 4;
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82582050
	// ERROR 82582050
	return;
}

__attribute__((alias("__imp__sub_82581FC8"))) PPC_WEAK_FUNC(sub_82581FC8);
PPC_FUNC_IMPL(__imp__sub_82581FC8) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x82581f34
	// ERROR 82581F34
	return;
}

__attribute__((alias("__imp__sub_82581FD0"))) PPC_WEAK_FUNC(sub_82581FD0);
PPC_FUNC_IMPL(__imp__sub_82581FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,8
	ctx.r9.s64 = 8;
	// li r3,4
	ctx.r3.s64 = 4;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82581FEC"))) PPC_WEAK_FUNC(sub_82581FEC);
PPC_FUNC_IMPL(__imp__sub_82581FEC) {
	PPC_FUNC_PROLOGUE();
	// li r10,10
	ctx.r10.s64 = 10;
	// li r9,2
	ctx.r9.s64 = 2;
	// b 0x82581f4c
	// ERROR 82581F4C
	return;
}

__attribute__((alias("__imp__sub_82581FF8"))) PPC_WEAK_FUNC(sub_82581FF8);
PPC_FUNC_IMPL(__imp__sub_82581FF8) {
	PPC_FUNC_PROLOGUE();
	// li r10,11
	ctx.r10.s64 = 11;
	// li r9,10
	ctx.r9.s64 = 10;
	// b 0x82581f84
	// ERROR 82581F84
	return;
}

__attribute__((alias("__imp__sub_82582004"))) PPC_WEAK_FUNC(sub_82582004);
PPC_FUNC_IMPL(__imp__sub_82582004) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r9,10
	ctx.r9.s64 = 10;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,11
	ctx.r10.s64 = 11;
	// li r3,3
	ctx.r3.s64 = 3;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// b 0x82582058
	// ERROR 82582058
	return;
}

__attribute__((alias("__imp__sub_82582020"))) PPC_WEAK_FUNC(sub_82582020);
PPC_FUNC_IMPL(__imp__sub_82582020) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x82581fa4
	// ERROR 82581FA4
	return;
}

__attribute__((alias("__imp__sub_82582028"))) PPC_WEAK_FUNC(sub_82582028);
PPC_FUNC_IMPL(__imp__sub_82582028) {
	PPC_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x82581f34
	// ERROR 82581F34
	return;
}

__attribute__((alias("__imp__sub_82582030"))) PPC_WEAK_FUNC(sub_82582030);
PPC_FUNC_IMPL(__imp__sub_82582030) {
	PPC_FUNC_PROLOGUE();
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x82581fd4
	// ERROR 82581FD4
	return;
}

__attribute__((alias("__imp__sub_82582038"))) PPC_WEAK_FUNC(sub_82582038);
PPC_FUNC_IMPL(__imp__sub_82582038) {
	PPC_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x82581fa4
	// ERROR 82581FA4
	return;
}

__attribute__((alias("__imp__sub_82582040"))) PPC_WEAK_FUNC(sub_82582040);
PPC_FUNC_IMPL(__imp__sub_82582040) {
	PPC_FUNC_PROLOGUE();
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x82581fd4
	// ERROR 82581FD4
	return;
}

__attribute__((alias("__imp__sub_82582048"))) PPC_WEAK_FUNC(sub_82582048);
PPC_FUNC_IMPL(__imp__sub_82582048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582064"))) PPC_WEAK_FUNC(sub_82582064);
PPC_FUNC_IMPL(__imp__sub_82582064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582068"))) PPC_WEAK_FUNC(sub_82582068);
PPC_FUNC_IMPL(__imp__sub_82582068) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82581c30
	sub_82581C30(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82582094
	if (!cr0.eq) goto loc_82582094;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825821d4
	goto loc_825821D4;
loc_82582094:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82581d60
	sub_82581D60(ctx, base);
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// ble cr6,0x82582110
	if (!cr6.gt) goto loc_82582110;
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x8258219c
	if (!cr6.gt) goto loc_8258219C;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// subf r30,r7,r11
	r30.s64 = r11.s64 - ctx.r7.s64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_825820C4:
	// lwzx r10,r30,r8
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + ctx.r8.u32);
	// li r11,0
	r11.s64 = 0;
	// lwz r5,0(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// srawi. r9,r10,3
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// ble 0x825820fc
	if (!cr0.gt) goto loc_825820FC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r7,r31,r7
	ctx.r7.u64 = r31.u64 + ctx.r7.u64;
loc_825820E4:
	// sraw r27,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	r27.s64 = ctx.r5.s32 >> temp.u32;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stbx r27,r7,r11
	PPC_STORE_U8(ctx.r7.u32 + r11.u32, r27.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r9
	cr6.compare<int32_t>(r11.s32, ctx.r9.s32, xer);
	// blt cr6,0x825820e4
	if (cr6.lt) goto loc_825820E4;
loc_825820FC:
	// addic. r4,r4,-1
	xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// add r31,r9,r31
	r31.u64 = ctx.r9.u64 + r31.u64;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x825820c4
	if (!cr0.eq) goto loc_825820C4;
	// b 0x8258219c
	goto loc_8258219C;
loc_82582110:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble cr6,0x82582170
	if (!cr6.gt) goto loc_82582170;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// subf r4,r7,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82582130:
	// lwzx r9,r11,r4
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,32
	cr6.compare<int32_t>(ctx.r9.s32, 32, xer);
	// bge cr6,0x8258214c
	if (!cr6.lt) goto loc_8258214C;
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r7,r7,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// b 0x82582150
	goto loc_82582150;
loc_8258214C:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82582150:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// and r7,r31,r7
	ctx.r7.u64 = r31.u64 & ctx.r7.u64;
	// slw r7,r7,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// or r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 | ctx.r5.u64;
	// bne 0x82582130
	if (!cr0.eq) goto loc_82582130;
loc_82582170:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// ble cr6,0x8258219c
	if (!cr6.gt) goto loc_8258219C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82582180:
	// sraw r8,r5,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r8.s64 = ctx.r5.s32 >> temp.u32;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stbx r8,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// blt cr6,0x82582180
	if (cr6.lt) goto loc_82582180;
loc_8258219C:
	// lis r11,-32138
	r11.s64 = -2106195968;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r11,-9696
	ctx.r10.s64 = r11.s64 + -9696;
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// ble cr6,0x825821d4
	if (!cr6.gt) goto loc_825821D4;
loc_825821B8:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ r11.u64;
	// lbzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + ctx.r9.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r29
	cr6.compare<int32_t>(r11.s32, r29.s32, xer);
	// stbx r9,r8,r28
	PPC_STORE_U8(ctx.r8.u32 + r28.u32, ctx.r9.u8);
	// blt cr6,0x825821b8
	if (cr6.lt) goto loc_825821B8;
loc_825821D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825821DC"))) PPC_WEAK_FUNC(sub_825821DC);
PPC_FUNC_IMPL(__imp__sub_825821DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825821E0"))) PPC_WEAK_FUNC(sub_825821E0);
PPC_FUNC_IMPL(__imp__sub_825821E0) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82581c98
	sub_82581C98(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82582208
	if (cr0.eq) goto loc_82582208;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82582068
	sub_82582068(ctx, base);
loc_82582208:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582218"))) PPC_WEAK_FUNC(sub_82582218);
PPC_FUNC_IMPL(__imp__sub_82582218) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,1
	cr6.compare<int32_t>(ctx.r5.s32, 1, xer);
	// bne cr6,0x8258226c
	if (!cr6.eq) goto loc_8258226C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82581d00
	sub_82581D00(ctx, base);
	// cmpwi cr6,r3,3
	cr6.compare<int32_t>(ctx.r3.s32, 3, xer);
	// blt cr6,0x82582254
	if (cr6.lt) goto loc_82582254;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// b 0x8258226c
	goto loc_8258226C;
loc_82582254:
	// rlwinm r11,r3,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// stw r8,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r8.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
loc_8258226C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258227C"))) PPC_WEAK_FUNC(sub_8258227C);
PPC_FUNC_IMPL(__imp__sub_8258227C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582280"))) PPC_WEAK_FUNC(sub_82582280);
PPC_FUNC_IMPL(__imp__sub_82582280) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// extsw r11,r4
	r11.s64 = ctx.r4.s32;
	// lis r10,20096
	ctx.r10.s64 = 1317011456;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7F800000;
	// cmpw cr6,r9,r10
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, xer);
	// ble cr6,0x825822cc
	if (!cr6.gt) goto loc_825822CC;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825822c0
	if (cr0.eq) goto loc_825822C0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// blr 
	return;
loc_825822C0:
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_825822CC:
	// addi r11,r1,-16
	r11.s64 = ctx.r1.s64 + -16;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825822E0"))) PPC_WEAK_FUNC(sub_825822E0);
PPC_FUNC_IMPL(__imp__sub_825822E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,-27448(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -27448);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// blt cr6,0x825822fc
	if (cr6.lt) goto loc_825822FC;
	// lis r3,2047
	ctx.r3.s64 = 134152192;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// blr 
	return;
loc_825822FC:
	// lis r11,-32254
	r11.s64 = -2113798144;
	// lfs f0,-8784(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -8784);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82582314
	if (cr6.gt) goto loc_82582314;
	// lis r3,2048
	ctx.r3.s64 = 134217728;
	// blr 
	return;
loc_82582314:
	// stfs f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r11,r11,23
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFF) != 0);
	r11.s64 = r11.s32 >> 23;
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	// subfic r11,r11,129
	xer.ca = r11.u32 <= 129;
	r11.s64 = 129 - r11.s64;
	// cmpwi cr6,r11,15
	cr6.compare<int32_t>(r11.s32, 15, xer);
	// ble cr6,0x82582334
	if (!cr6.gt) goto loc_82582334;
	// li r11,15
	r11.s64 = 15;
loc_82582334:
	// addi r10,r11,25
	ctx.r10.s64 = r11.s64 + 25;
	// li r9,1
	ctx.r9.s64 = 1;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// rlwinm r10,r11,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF0000000;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// sld r11,r9,r8
	r11.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r7
	PPC_STORE_U32(ctx.r7.u32, f0.u32);
	// lwz r11,-16(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// srawi r11,r11,1
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1) != 0);
	r11.s64 = r11.s32 >> 1;
	// clrlwi r11,r11,4
	r11.u64 = r11.u32 & 0xFFFFFFF;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582380"))) PPC_WEAK_FUNC(sub_82582380);
PPC_FUNC_IMPL(__imp__sub_82582380) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
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
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	r31.u64 = ctx.r5.u64;
	// fmr f31,f1
	f31.f64 = ctx.f1.f64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r31,1
	cr6.compare<int32_t>(r31.s32, 1, xer);
	// bgt cr6,0x825823f0
	if (cr6.gt) goto loc_825823F0;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// bne cr6,0x825823bc
	if (!cr6.eq) goto loc_825823BC;
loc_825823B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82582864
	goto loc_82582864;
loc_825823BC:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// li r3,1
	ctx.r3.s64 = 1;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,-26592(r11)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(r11.u32 + -26592);
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,-31360(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -31360);
	// fnmsub f0,f12,f0,f13
	f0.f64 = -(ctx.f12.f64 * f0.f64 - ctx.f13.f64);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x82582864
	if (!cr6.lt) goto loc_82582864;
	// b 0x825823b4
	goto loc_825823B4;
loc_825823F0:
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x82582590
	if (cr6.lt) goto loc_82582590;
	// beq cr6,0x82582768
	if (cr6.eq) goto loc_82582768;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// blt cr6,0x825826fc
	if (cr6.lt) goto loc_825826FC;
	// beq cr6,0x8258263c
	if (cr6.eq) goto loc_8258263C;
	// cmplwi cr6,r6,5
	cr6.compare<uint32_t>(ctx.r6.u32, 5, xer);
	// blt cr6,0x82582570
	if (cr6.lt) goto loc_82582570;
	// beq cr6,0x8258251c
	if (cr6.eq) goto loc_8258251C;
	// cmplwi cr6,r6,7
	cr6.compare<uint32_t>(ctx.r6.u32, 7, xer);
	// bne cr6,0x825823b4
	if (!cr6.eq) goto loc_825823B4;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// cmpwi cr6,r31,32
	cr6.compare<int32_t>(r31.s32, 32, xer);
	// bne cr6,0x82582430
	if (!cr6.eq) goto loc_82582430;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82582864
	goto loc_82582864;
loc_82582430:
	// cmpwi cr6,r31,16
	cr6.compare<int32_t>(r31.s32, 16, xer);
	// bne cr6,0x8258249c
	if (!cr6.eq) goto loc_8258249C;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rlwinm r11,r30,5,0,26
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 5) & 0xFFFFFFE0;
	// lfd f0,-2080(r10)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -2080);
	// fmul f0,f31,f0
	f0.f64 = f31.f64 * f0.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm. r10,r11,0,1,3
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x70000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82582484
	if (cr0.eq) goto loc_82582484;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x8258247c
	if (!cr6.lt) goto loc_8258247C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82582864
	goto loc_82582864;
loc_8258247C:
	// li r3,32767
	ctx.r3.s64 = 32767;
	// b 0x82582864
	goto loc_82582864;
loc_82582484:
	// srawi. r11,r11,13
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFF) != 0);
	r11.s64 = r11.s32 >> 13;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82582494
	if (!cr0.lt) goto loc_82582494;
	// clrlwi r11,r11,17
	r11.u64 = r11.u32 & 0x7FFF;
	// ori r11,r11,32768
	r11.u64 = r11.u64 | 32768;
loc_82582494:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x82582864
	goto loc_82582864;
loc_8258249C:
	// cmpwi cr6,r31,10
	cr6.compare<int32_t>(r31.s32, 10, xer);
	// blt cr6,0x825823b4
	if (cr6.lt) goto loc_825823B4;
	// li r4,-124
	ctx.r4.s64 = -124;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// bl 0x823b1a70
	sub_823B1A70(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,80(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// subfic r11,r31,18
	xer.ca = r31.u32 <= 18;
	r11.s64 = 18 - r31.s64;
	// slw r11,r30,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r30.u32 << (r11.u8 & 0x3F));
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7C000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82582500
	if (cr0.eq) goto loc_82582500;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f0,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// bge cr6,0x825824ec
	if (!cr6.lt) goto loc_825824EC;
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 << (r31.u8 & 0x3F));
	// b 0x825824f8
	goto loc_825824F8;
loc_825824EC:
	// addi r11,r31,-1
	r11.s64 = r31.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
loc_825824F8:
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// b 0x82582864
	goto loc_82582864;
loc_82582500:
	// li r10,1
	ctx.r10.s64 = 1;
	// subfic r9,r31,26
	xer.ca = r31.u32 <= 26;
	ctx.r9.s64 = 26 - r31.s64;
	// slw r10,r10,r31
	ctx.r10.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// sraw r11,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	xer.ca = (r11.s32 < 0) & (((r11.s32 >> temp.u32) << temp.u32) != r11.s32);
	r11.s64 = r11.s32 >> temp.u32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r3,r11,r10
	ctx.r3.u64 = r11.u64 & ctx.r10.u64;
	// b 0x82582864
	goto loc_82582864;
loc_8258251C:
	// lis r11,-32250
	r11.s64 = -2113536000;
	// lfs f0,-5824(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -5824);
	f0.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// fmuls f0,f31,f0
	f0.f64 = double(float(f31.f64 * f0.f64));
	// lfs f13,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32254
	r11.s64 = -2113798144;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// lfd f13,-28592(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -28592);
	// ble cr6,0x82582558
	if (!cr6.gt) goto loc_82582558;
	// fadd f0,f0,f13
	f0.f64 = f0.f64 + ctx.f13.f64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82582864
	goto loc_82582864;
loc_82582558:
	// fsub f0,f0,f13
	ctx.fpscr.disableFlushMode();
	f0.f64 = f0.f64 - ctx.f13.f64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82582864
	goto loc_82582864;
loc_82582570:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = f31.f64;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfd f0,-2056(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -2056);
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// bgt cr6,0x82582610
	if (cr6.gt) goto loc_82582610;
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfs f0,-18832(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -18832);
	f0.f64 = double(temp.f32);
	// fmuls f31,f31,f0
	f31.f64 = double(float(f31.f64 * f0.f64));
loc_82582590:
	// extsw r10,r30
	ctx.r10.s64 = r30.s32;
	// li r11,1
	r11.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// slw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 << (r31.u8 & 0x3F));
	// addi r8,r11,-1
	ctx.r8.s64 = r11.s64 + -1;
	// lis r11,-32248
	r11.s64 = -2113404928;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f0
	ctx.f13.f64 = double(f0.s64);
	// lfd f0,-26592(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -26592);
	// extsw r11,r8
	r11.s64 = ctx.r8.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// fmul f0,f13,f0
	f0.f64 = ctx.f13.f64 * f0.f64;
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f13,f31,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * f31.f64 + f0.f64));
	// bl 0x82582280
	sub_82582280(ctx, base);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f12,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f12.f64 = double(temp.f32);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fcmpu cr6,f0,f12
	cr6.compare(f0.f64, ctx.f12.f64);
	// ble cr6,0x825823b4
	if (!cr6.gt) goto loc_825823B4;
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// blt cr6,0x82582854
	if (cr6.lt) goto loc_82582854;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// b 0x82582864
	goto loc_82582864;
loc_82582610:
	// lis r11,-32249
	r11.s64 = -2113470464;
	// lfd f2,-18840(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(r11.u32 + -18840);
	// bl 0x8239e6a0
	sub_8239E6A0(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lfd f0,-2064(r11)
	f0.u64 = PPC_LOAD_U64(r11.u32 + -2064);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lfd f13,-2088(r11)
	ctx.f13.u64 = PPC_LOAD_U64(r11.u32 + -2088);
	// fmsub f0,f12,f0,f13
	f0.f64 = ctx.f12.f64 * f0.f64 - ctx.f13.f64;
	// frsp f31,f0
	f31.f64 = double(float(f0.f64));
	// b 0x82582590
	goto loc_82582590;
loc_8258263C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// srawi r10,r30,8
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	ctx.r10.s64 = r30.s32 >> 8;
	// blt cr6,0x825826ac
	if (cr6.lt) goto loc_825826AC;
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82582864
	if (!cr6.lt) goto loc_82582864;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82582864
	goto loc_82582864;
loc_825826AC:
	// neg r3,r11
	ctx.r3.s64 = -r11.s64;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	r11.s64 = temp.s64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
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
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x82582864
	if (!cr6.gt) goto loc_82582864;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82582864
	goto loc_82582864;
loc_825826FC:
	// srawi r11,r30,8
	xer.ca = (r30.s32 < 0) & ((r30.u32 & 0xFF) != 0);
	r11.s64 = r30.s32 >> 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// addze r11,r11
	temp.s64 = r11.s64 + xer.ca;
	xer.ca = temp.u32 < r11.u32;
	r11.s64 = temp.s64;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// slw r11,r10,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r31.u8 & 0x3F));
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// ble cr6,0x825823b4
	if (!cr6.gt) goto loc_825823B4;
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82582864
	if (!cr6.lt) goto loc_82582864;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82582864
	goto loc_82582864;
loc_82582768:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r10,r31,-1
	ctx.r10.s64 = r31.s64 + -1;
	// lfs f0,2480(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	f0.f64 = double(temp.f32);
	// li r11,1
	r11.s64 = 1;
	// fcmpu cr6,f31,f0
	cr6.compare(f31.f64, f0.f64);
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// rotlwi r11,r30,1
	r11.u64 = __builtin_rotateleft32(r30.u32, 1);
	// divw r10,r30,r3
	ctx.r10.s32 = r30.s32 / ctx.r3.s32;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// srawi r10,r10,8
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 8;
	// andc r11,r3,r11
	r11.u64 = ctx.r3.u64 & ~r11.u64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// twllei r3,0
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// twlgei r11,-1
	// blt cr6,0x825827fc
	if (cr6.lt) goto loc_825827FC;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f13,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fadds f0,f0,f31
	f0.f64 = double(float(f0.f64 + f31.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bge cr6,0x82582864
	if (!cr6.lt) goto loc_82582864;
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82582864
	goto loc_82582864;
loc_825827FC:
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lis r11,-32255
	r11.s64 = -2113863680;
	// lfs f13,-25364(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + -25364);
	ctx.f13.f64 = double(temp.f32);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fsubs f0,f31,f0
	f0.f64 = double(float(f31.f64 - f0.f64));
	// fcmpu cr6,f0,f13
	cr6.compare(f0.f64, ctx.f13.f64);
	// bgt cr6,0x82582828
	if (cr6.gt) goto loc_82582828;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// b 0x82582864
	goto loc_82582864;
loc_82582828:
	// extsw r11,r3
	r11.s64 = ctx.r3.s32;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r10
	PPC_STORE_U32(ctx.r10.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82582864
	goto loc_82582864;
loc_82582854:
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82582864:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82582880"))) PPC_WEAK_FUNC(sub_82582880);
PPC_FUNC_IMPL(__imp__sub_82582880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258289C"))) PPC_WEAK_FUNC(sub_8258289C);
PPC_FUNC_IMPL(__imp__sub_8258289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825828A0"))) PPC_WEAK_FUNC(sub_825828A0);
PPC_FUNC_IMPL(__imp__sub_825828A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825828CC"))) PPC_WEAK_FUNC(sub_825828CC);
PPC_FUNC_IMPL(__imp__sub_825828CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825828D0"))) PPC_WEAK_FUNC(sub_825828D0);
PPC_FUNC_IMPL(__imp__sub_825828D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,4(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// beq 0x825828e4
	if (cr0.eq) goto loc_825828E4;
	// stw r3,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r3.u32);
loc_825828E4:
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825828F0"))) PPC_WEAK_FUNC(sub_825828F0);
PPC_FUNC_IMPL(__imp__sub_825828F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,8(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// beq 0x82582904
	if (cr0.eq) goto loc_82582904;
	// stw r3,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r3.u32);
loc_82582904:
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r3,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582910"))) PPC_WEAK_FUNC(sub_82582910);
PPC_FUNC_IMPL(__imp__sub_82582910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258292C"))) PPC_WEAK_FUNC(sub_8258292C);
PPC_FUNC_IMPL(__imp__sub_8258292C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582930"))) PPC_WEAK_FUNC(sub_82582930);
PPC_FUNC_IMPL(__imp__sub_82582930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r3,12
	r11.s64 = ctx.r3.s64 + 12;
	// addi r9,r10,-11504
	ctx.r9.s64 = ctx.r10.s64 + -11504;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r3,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r3.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582964"))) PPC_WEAK_FUNC(sub_82582964);
PPC_FUNC_IMPL(__imp__sub_82582964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582968"))) PPC_WEAK_FUNC(sub_82582968);
PPC_FUNC_IMPL(__imp__sub_82582968) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82582980
	goto loc_82582980;
loc_82582978:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82582980:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82582978
	if (!cr6.eq) goto loc_82582978;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258298C"))) PPC_WEAK_FUNC(sub_8258298C);
PPC_FUNC_IMPL(__imp__sub_8258298C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582990"))) PPC_WEAK_FUNC(sub_82582990);
PPC_FUNC_IMPL(__imp__sub_82582990) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// beq 0x825829a8
	if (cr0.eq) goto loc_825829A8;
	// stw r4,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r4.u32);
loc_825829A8:
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825829B4"))) PPC_WEAK_FUNC(sub_825829B4);
PPC_FUNC_IMPL(__imp__sub_825829B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825829B8"))) PPC_WEAK_FUNC(sub_825829B8);
PPC_FUNC_IMPL(__imp__sub_825829B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// beq 0x825829cc
	if (cr0.eq) goto loc_825829CC;
	// stw r4,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r4.u32);
loc_825829CC:
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825829D8"))) PPC_WEAK_FUNC(sub_825829D8);
PPC_FUNC_IMPL(__imp__sub_825829D8) {
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
	// addi r30,r31,12
	r30.s64 = r31.s64 + 12;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r3,r30
	cr6.compare<uint32_t>(ctx.r3.u32, r30.u32, xer);
	// beq cr6,0x82582a1c
	if (cr6.eq) goto loc_82582A1C;
loc_825829F8:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r29,8(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// cmplw cr6,r29,r30
	cr6.compare<uint32_t>(r29.u32, r30.u32, xer);
	// bne cr6,0x825829f8
	if (!cr6.eq) goto loc_825829F8;
loc_82582A1C:
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// stw r31,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82582A2C"))) PPC_WEAK_FUNC(sub_82582A2C);
PPC_FUNC_IMPL(__imp__sub_82582A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582A30"))) PPC_WEAK_FUNC(sub_82582A30);
PPC_FUNC_IMPL(__imp__sub_82582A30) {
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
	uint32_t ea{};
	// mflr r12
	// bl 0x8239bcd4
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	r21.u64 = ctx.r3.u64;
	// mr r19,r4
	r19.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r22,8(r21)
	r22.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
loc_82582A50:
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82582a50
	if (cr6.lt) goto loc_82582A50;
	// li r20,3
	r20.s64 = 3;
	// divwu. r31,r10,r20
	r31.u32 = ctx.r10.u32 / r20.u32;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82582afc
	if (cr0.eq) goto loc_82582AFC;
loc_82582A6C:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82582af4
	if (!cr6.lt) goto loc_82582AF4;
	// rlwinm r23,r31,2,0,29
	r23.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,0
	r30.s64 = 0;
	// mr r26,r22
	r26.u64 = r22.u64;
	// add r29,r23,r22
	r29.u64 = r23.u64 + r22.u64;
loc_82582A84:
	// lwz r24,0(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r27,r30
	r27.u64 = r30.u64;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// blt cr6,0x82582acc
	if (cr6.lt) goto loc_82582ACC;
	// mr r28,r26
	r28.u64 = r26.u64;
	// mr r25,r29
	r25.u64 = r29.u64;
loc_82582A9C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mtctr r19
	ctr.u64 = r19.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// ble 0x82582acc
	if (!cr0.gt) goto loc_82582ACC;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// subf. r27,r31,r27
	r27.s64 = r27.s64 - r31.s64;
	cr0.compare<int32_t>(r27.s32, 0, xer);
	// subf r28,r23,r28
	r28.s64 = r28.s64 - r23.s64;
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// subf r25,r23,r25
	r25.s64 = r25.s64 - r23.s64;
	// bge 0x82582a9c
	if (!cr0.lt) goto loc_82582A9C;
loc_82582ACC:
	// add r11,r27,r31
	r11.u64 = r27.u64 + r31.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// stwx r24,r11,r22
	PPC_STORE_U32(r11.u32 + r22.u32, r24.u32);
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82582a84
	if (cr6.lt) goto loc_82582A84;
loc_82582AF4:
	// divwu. r31,r31,r20
	r31.u32 = r31.u32 / r20.u32;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82582a6c
	if (!cr0.eq) goto loc_82582A6C;
loc_82582AFC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd24
	return;
}

__attribute__((alias("__imp__sub_82582B04"))) PPC_WEAK_FUNC(sub_82582B04);
PPC_FUNC_IMPL(__imp__sub_82582B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582B08"))) PPC_WEAK_FUNC(sub_82582B08);
PPC_FUNC_IMPL(__imp__sub_82582B08) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bgelr cr6
	if (!cr6.lt) return;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// subf r9,r4,r11
	ctx.r9.s64 = r11.s64 - ctx.r4.s64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// b 0x8239ce50
	sub_8239CE50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82582B3C"))) PPC_WEAK_FUNC(sub_82582B3C);
PPC_FUNC_IMPL(__imp__sub_82582B3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82582B40"))) PPC_WEAK_FUNC(sub_82582B40);
PPC_FUNC_IMPL(__imp__sub_82582B40) {
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
	// li r11,0
	r11.s64 = 0;
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82582b88
	if (cr0.eq) goto loc_82582B88;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82582B68:
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r4,r6
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r6.u32, xer);
	// beq cr6,0x82582b9c
	if (cr6.eq) goto loc_82582B9C;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// blt cr6,0x82582b68
	if (cr6.lt) goto loc_82582B68;
loc_82582B88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82582B8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_82582B9C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82582bc4
	if (!cr6.lt) goto loc_82582BC4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r11,r10
	r11.s64 = ctx.r10.s64 - r11.s64;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_82582BC4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82582b8c
	goto loc_82582B8C;
}

__attribute__((alias("__imp__sub_82582BCC"))) PPC_WEAK_FUNC(sub_82582BCC);
PPC_FUNC_IMPL(__imp__sub_82582BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582BD0"))) PPC_WEAK_FUNC(sub_82582BD0);
PPC_FUNC_IMPL(__imp__sub_82582BD0) {
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
	// addi r11,r29,1
	r11.s64 = r29.s64 + 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82582c04
	if (!cr6.gt) goto loc_82582C04;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// b 0x82582c04
	goto loc_82582C04;
loc_82582BFC:
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82582C04:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bge cr6,0x82582bfc
	if (!cr6.lt) goto loc_82582BFC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,8(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// stw r3,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r3.u32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r11,r29,2,0,29
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82582C54"))) PPC_WEAK_FUNC(sub_82582C54);
PPC_FUNC_IMPL(__imp__sub_82582C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582C58"))) PPC_WEAK_FUNC(sub_82582C58);
PPC_FUNC_IMPL(__imp__sub_82582C58) {
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
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82582c84
	if (!cr6.gt) goto loc_82582C84;
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_82582C84:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// ble cr6,0x82582ca8
	if (!cr6.gt) goto loc_82582CA8;
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82582CA8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// subf r11,r30,r11
	r11.s64 = r11.s64 - r30.s64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// beq 0x82582ce4
	if (cr0.eq) goto loc_82582CE4;
loc_82582CCC:
	// addi r9,r10,-4
	ctx.r9.s64 = ctx.r10.s64 + -4;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne 0x82582ccc
	if (!cr0.eq) goto loc_82582CCC;
loc_82582CE4:
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
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

__attribute__((alias("__imp__sub_82582D04"))) PPC_WEAK_FUNC(sub_82582D04);
PPC_FUNC_IMPL(__imp__sub_82582D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82582D08"))) PPC_WEAK_FUNC(sub_82582D08);
PPC_FUNC_IMPL(__imp__sub_82582D08) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// lwz r21,0(r29)
	r21.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// rlwinm r11,r21,1,0,30
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8239cd50
	sub_8239CD50(ctx, base);
	// li r20,0
	r20.s64 = 0;
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// ble cr6,0x82582e74
	if (!cr6.gt) goto loc_82582E74;
	// rlwinm r11,r21,2,0,29
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,0
	r25.s64 = 0;
	// add r22,r11,r24
	r22.u64 = r11.u64 + r24.u64;
loc_82582D5C:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// lwzx r23,r25,r11
	r23.u64 = PPC_LOAD_U32(r25.u32 + r11.u32);
	// cmplwi r23,0
	cr0.compare<uint32_t>(r23.u32, 0, xer);
	// beq 0x82582e60
	if (cr0.eq) goto loc_82582E60;
	// lwz r30,20(r29)
	r30.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r31,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r31.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// beq 0x82582d98
	if (cr0.eq) goto loc_82582D98;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x82582d9c
	goto loc_82582D9C;
loc_82582D98:
	// li r31,0
	r31.s64 = 0;
loc_82582D9C:
	// stwx r31,r25,r24
	PPC_STORE_U32(r25.u32 + r24.u32, r31.u32);
	// li r4,20
	ctx.r4.s64 = 20;
	// lwz r31,20(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 20);
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
	// beq 0x82582dcc
	if (cr0.eq) goto loc_82582DCC;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 20);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x82582dd0
	goto loc_82582DD0;
loc_82582DCC:
	// li r30,0
	r30.s64 = 0;
loc_82582DD0:
	// stw r30,0(r22)
	PPC_STORE_U32(r22.u32 + 0, r30.u32);
	// lwz r28,4(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwzx r26,r25,r24
	r26.u64 = PPC_LOAD_U32(r25.u32 + r24.u32);
	// cmpwi r28,0
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82582e60
	if (cr0.eq) goto loc_82582E60;
	// rlwinm r27,r28,2,0,29
	r27.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
loc_82582DE8:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// addi r28,r28,-1
	r28.s64 = r28.s64 + -1;
	// addi r27,r27,-4
	r27.s64 = r27.s64 + -4;
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bge cr6,0x82582e08
	if (!cr6.lt) goto loc_82582E08;
	// lwz r11,8(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 8);
	// add r3,r11,r27
	ctx.r3.u64 = r11.u64 + r27.u64;
	// b 0x82582e14
	goto loc_82582E14;
loc_82582E08:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82582E14:
	// lwz r31,0(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r3,r11
	r11.u64 = ctx.r3.u64 & r11.u64;
	// cmplw cr6,r11,r20
	cr6.compare<uint32_t>(r11.u32, r20.u32, xer);
	// bne cr6,0x82582e48
	if (!cr6.eq) goto loc_82582E48;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// b 0x82582e50
	goto loc_82582E50;
loc_82582E48:
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82582E50:
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
	// cmpwi cr6,r28,0
	cr6.compare<int32_t>(r28.s32, 0, xer);
	// bne cr6,0x82582de8
	if (!cr6.eq) goto loc_82582DE8;
loc_82582E60:
	// addi r20,r20,1
	r20.s64 = r20.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpw cr6,r20,r21
	cr6.compare<int32_t>(r20.s32, r21.s32, xer);
	// blt cr6,0x82582d5c
	if (cr6.lt) goto loc_82582D5C;
loc_82582E74:
	// stw r24,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r24.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd28
	return;
}

__attribute__((alias("__imp__sub_82582E80"))) PPC_WEAK_FUNC(sub_82582E80);
PPC_FUNC_IMPL(__imp__sub_82582E80) {
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
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r3
	r11.u64 = r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x82582f2c
	if (cr0.eq) goto loc_82582F2C;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82582f2c
	if (cr0.eq) goto loc_82582F2C;
	// li r28,0
	r28.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82582eec
	if (!cr6.lt) goto loc_82582EEC;
loc_82582EE0:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x82582ef8
	goto loc_82582EF8;
loc_82582EEC:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82582EF8:
	// lwz r29,0(r3)
	r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// lwz r11,12(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82582f38
	if (cr0.eq) goto loc_82582F38;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82582ee0
	if (cr6.lt) goto loc_82582EE0;
loc_82582F2C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82582F30:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
loc_82582F38:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// b 0x82582f30
	goto loc_82582F30;
}

__attribute__((alias("__imp__sub_82582F40"))) PPC_WEAK_FUNC(sub_82582F40);
PPC_FUNC_IMPL(__imp__sub_82582F40) {
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
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r3
	r11.u64 = r11.u64 & ctx.r3.u64;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r28
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r28.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82582fbc
	if (!cr6.eq) goto loc_82582FBC;
	// lwz r29,20(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// li r4,20
	ctx.r4.s64 = 20;
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
	// beq 0x82582fb0
	if (cr0.eq) goto loc_82582FB0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x82582fb4
	goto loc_82582FB4;
loc_82582FB0:
	// li r30,0
	r30.s64 = 0;
loc_82582FB4:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stwx r30,r11,r28
	PPC_STORE_U32(r11.u32 + r28.u32, r30.u32);
loc_82582FBC:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r30,r11,r28
	r30.u64 = PPC_LOAD_U32(r11.u32 + r28.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82582c58
	sub_82582C58(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82582fec
	if (!cr6.gt) goto loc_82582FEC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582d08
	sub_82582D08(ctx, base);
loc_82582FEC:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82583000"))) PPC_WEAK_FUNC(sub_82583000);
PPC_FUNC_IMPL(__imp__sub_82583000) {
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
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r11,16(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r11,r11,r3
	r11.u64 = r11.u64 & ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r10
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// beq 0x825830dc
	if (cr0.eq) goto loc_825830DC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825830dc
	if (!cr6.gt) goto loc_825830DC;
	// li r28,0
	r28.s64 = 0;
loc_82583058:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82583070
	if (!cr6.lt) goto loc_82583070;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// b 0x8258307c
	goto loc_8258307C;
loc_82583070:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_8258307C:
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x825830b0
	if (cr0.eq) goto loc_825830B0;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,4
	r28.s64 = r28.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82583058
	if (cr6.lt) goto loc_82583058;
	// b 0x825830dc
	goto loc_825830DC;
loc_825830B0:
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x825830dc
	if (!cr6.lt) goto loc_825830DC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r30,r11
	ctx.r10.s64 = r11.s64 - r30.s64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
loc_825830DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_825830E4"))) PPC_WEAK_FUNC(sub_825830E4);
PPC_FUNC_IMPL(__imp__sub_825830E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825830E8"))) PPC_WEAK_FUNC(sub_825830E8);
PPC_FUNC_IMPL(__imp__sub_825830E8) {
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
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// cmpwi r4,0
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// blt 0x8258313c
	if (cr0.lt) goto loc_8258313C;
loc_82583108:
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bge cr6,0x82583130
	if (!cr6.lt) goto loc_82583130;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82583134
	goto loc_82583134;
loc_82583130:
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82583134:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82583190
	goto loc_82583190;
loc_8258313C:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
loc_82583144:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x8258318c
	if (!cr6.lt) goto loc_8258318C;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r10,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r10.u32);
	// beq 0x82583144
	if (cr0.eq) goto loc_82583144;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82583144
	if (cr6.eq) goto loc_82583144;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// addi r4,r11,-1
	ctx.r4.s64 = r11.s64 + -1;
	// b 0x82583108
	goto loc_82583108;
loc_8258318C:
	// li r11,0
	r11.s64 = 0;
loc_82583190:
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

__attribute__((alias("__imp__sub_825831A8"))) PPC_WEAK_FUNC(sub_825831A8);
PPC_FUNC_IMPL(__imp__sub_825831A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,-1
	r11.s64 = -1;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// b 0x825830e8
	sub_825830E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825831C0"))) PPC_WEAK_FUNC(sub_825831C0);
PPC_FUNC_IMPL(__imp__sub_825831C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// addi r11,r11,26496
	r11.s64 = r11.s64 + 26496;
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_825831DC"))) PPC_WEAK_FUNC(sub_825831DC);
PPC_FUNC_IMPL(__imp__sub_825831DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825831E0"))) PPC_WEAK_FUNC(sub_825831E0);
PPC_FUNC_IMPL(__imp__sub_825831E0) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r31,0
	r31.s64 = 0;
loc_82583200:
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82583230
	if (!cr0.eq) goto loc_82583230;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 48);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82583230:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82583200
	if (cr6.lt) goto loc_82583200;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 52);
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

__attribute__((alias("__imp__sub_82583258"))) PPC_WEAK_FUNC(sub_82583258);
PPC_FUNC_IMPL(__imp__sub_82583258) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82564788
	sub_82564788(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825832cc
	if (cr0.eq) goto loc_825832CC;
	// li r31,0
	r31.s64 = 0;
loc_82583288:
	// addi r11,r1,140
	r11.s64 = ctx.r1.s64 + 140;
	// lbzx r11,r31,r11
	r11.u64 = PPC_LOAD_U8(r31.u32 + r11.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825832b8
	if (!cr0.eq) goto loc_825832B8;
	// lwz r3,56(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 56);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_825832B8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82583288
	if (cr6.lt) goto loc_82583288;
	// lwz r3,60(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 60);
	// b 0x825832d0
	goto loc_825832D0;
loc_825832CC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_825832D0:
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

__attribute__((alias("__imp__sub_825832E8"))) PPC_WEAK_FUNC(sub_825832E8);
PPC_FUNC_IMPL(__imp__sub_825832E8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r31,428(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 428);
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
	// beq 0x82583334
	if (cr0.eq) goto loc_82583334;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r28.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r29.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// b 0x82583338
	goto loc_82583338;
loc_82583334:
	// li r11,0
	r11.s64 = 0;
loc_82583338:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_8258334C"))) PPC_WEAK_FUNC(sub_8258334C);
PPC_FUNC_IMPL(__imp__sub_8258334C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583350"))) PPC_WEAK_FUNC(sub_82583350);
PPC_FUNC_IMPL(__imp__sub_82583350) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8254b8a0
	sub_8254B8A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82583374"))) PPC_WEAK_FUNC(sub_82583374);
PPC_FUNC_IMPL(__imp__sub_82583374) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583378"))) PPC_WEAK_FUNC(sub_82583378);
PPC_FUNC_IMPL(__imp__sub_82583378) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82583390
	if (cr0.eq) goto loc_82583390;
	// b 0x825832e8
	sub_825832E8(ctx, base);
	return;
loc_82583390:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bne cr6,0x825833a8
	if (!cr6.eq) goto loc_825833A8;
	// stw r5,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r5.u32);
	// blr 
	return;
loc_825833A8:
	// b 0x825832e8
	sub_825832E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825833AC"))) PPC_WEAK_FUNC(sub_825833AC);
PPC_FUNC_IMPL(__imp__sub_825833AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825833B0"))) PPC_WEAK_FUNC(sub_825833B0);
PPC_FUNC_IMPL(__imp__sub_825833B0) {
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
	// b 0x825833e8
	goto loc_825833E8;
loc_825833C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825833e8
	if (cr0.eq) goto loc_825833E8;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825833E8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825833c8
	if (cr0.eq) goto loc_825833C8;
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

__attribute__((alias("__imp__sub_8258340C"))) PPC_WEAK_FUNC(sub_8258340C);
PPC_FUNC_IMPL(__imp__sub_8258340C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583410"))) PPC_WEAK_FUNC(sub_82583410);
PPC_FUNC_IMPL(__imp__sub_82583410) {
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
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r11,r11,6756
	r11.s64 = r11.s64 + 6756;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// stw r4,12(r31)
	PPC_STORE_U32(r31.u32 + 12, ctx.r4.u32);
	// li r4,12
	ctx.r4.s64 = 12;
	// stb r30,4(r31)
	PPC_STORE_U8(r31.u32 + 4, r30.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stb r30,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r30.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// stb r30,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r30.u8);
	// stb r30,29(r31)
	PPC_STORE_U8(r31.u32 + 29, r30.u8);
	// stw r5,32(r31)
	PPC_STORE_U32(r31.u32 + 32, ctx.r5.u32);
	// lwz r28,428(r29)
	r28.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r28.u32);
	// beq 0x82583484
	if (cr0.eq) goto loc_82583484;
	// stw r30,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r30.u32);
	// stw r29,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r29.u32);
	// b 0x82583488
	goto loc_82583488;
loc_82583484:
	// mr r11,r30
	r11.u64 = r30.u64;
loc_82583488:
	// stw r11,44(r31)
	PPC_STORE_U32(r31.u32 + 44, r11.u32);
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
	// beq 0x825834b8
	if (cr0.eq) goto loc_825834B8;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// b 0x825834bc
	goto loc_825834BC;
loc_825834B8:
	// mr r27,r30
	r27.u64 = r30.u64;
loc_825834BC:
	// stw r27,36(r31)
	PPC_STORE_U32(r31.u32 + 36, r27.u32);
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
	// beq 0x825834ec
	if (cr0.eq) goto loc_825834EC;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r4,428(r29)
	ctx.r4.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// bl 0x825647d0
	sub_825647D0(ctx, base);
	// mr r30,r27
	r30.u64 = r27.u64;
loc_825834EC:
	// stw r30,40(r31)
	PPC_STORE_U32(r31.u32 + 40, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,408(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 408);
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// lwz r11,408(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 408);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,408(r29)
	PPC_STORE_U32(r29.u32 + 408, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82583510"))) PPC_WEAK_FUNC(sub_82583510);
PPC_FUNC_IMPL(__imp__sub_82583510) {
	PPC_FUNC_PROLOGUE();
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82583518"))) PPC_WEAK_FUNC(sub_82583518);
PPC_FUNC_IMPL(__imp__sub_82583518) {
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
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 40);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
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

__attribute__((alias("__imp__sub_82583568"))) PPC_WEAK_FUNC(sub_82583568);
PPC_FUNC_IMPL(__imp__sub_82583568) {
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
	// li r10,1
	ctx.r10.s64 = 1;
	// cmpwi cr6,r4,1
	cr6.compare<int32_t>(ctx.r4.s32, 1, xer);
	// ble cr6,0x825835b0
	if (!cr6.gt) goto loc_825835B0;
	// addi r11,r30,32
	r11.s64 = r30.s64 + 32;
loc_82583594:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// beq cr6,0x825835cc
	if (cr6.eq) goto loc_825835CC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// cmpw cr6,r10,r4
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, xer);
	// blt cr6,0x82583594
	if (cr6.lt) goto loc_82583594;
loc_825835B0:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 36);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
loc_825835CC:
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

__attribute__((alias("__imp__sub_825835E4"))) PPC_WEAK_FUNC(sub_825835E4);
PPC_FUNC_IMPL(__imp__sub_825835E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825835E8"))) PPC_WEAK_FUNC(sub_825835E8);
PPC_FUNC_IMPL(__imp__sub_825835E8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r23,r4
	r23.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,44(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 44);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm. r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82583620
	if (!cr0.eq) goto loc_82583620;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// b 0x825838c4
	goto loc_825838C4;
loc_82583620:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r24,0
	r24.s64 = 0;
	// li r25,3
	r25.s64 = 3;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82583758
	if (cr0.eq) goto loc_82583758;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82588680
	sub_82588680(ctx, base);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1712(r28)
	ctx.r4.u64 = PPC_LOAD_U32(r28.u32 + 1712);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lfs f4,2552(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	ctx.f4.f64 = double(temp.f32);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfs f3,2480(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2480);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f3
	ctx.f2.f64 = ctx.f3.f64;
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// bl 0x82586698
	sub_82586698(ctx, base);
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
	// lwz r3,40(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8258369c
	if (!cr6.gt) goto loc_8258369C;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x825836a4
	goto loc_825836A4;
loc_8258369C:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825836A4:
	// lwz r30,0(r3)
	r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// lwz r27,28(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r11,44(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825837d0
	if (cr0.eq) goto loc_825837D0;
	// lwz r29,432(r28)
	r29.u64 = PPC_LOAD_U32(r28.u32 + 432);
	// li r4,272
	ctx.r4.s64 = 272;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// addic. r11,r3,4
	xer.ca = ctx.r3.u32 > 4294967291;
	r11.s64 = ctx.r3.s64 + 4;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r29,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r29.u32);
	// beq 0x82583710
	if (cr0.eq) goto loc_82583710;
	// stw r30,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r30.u32);
	// mr r30,r11
	r30.u64 = r11.u64;
	// stw r28,260(r11)
	PPC_STORE_U32(r11.u32 + 260, r28.u32);
	// stb r24,264(r11)
	PPC_STORE_U8(r11.u32 + 264, r24.u8);
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r25.u32);
	// b 0x82583714
	goto loc_82583714;
loc_82583710:
	// mr r30,r24
	r30.u64 = r24.u64;
loc_82583714:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82577d78
	sub_82577D78(ctx, base);
	// lwz r3,44(r27)
	ctx.r3.u64 = PPC_LOAD_U32(r27.u32 + 44);
	// lwz r4,48(r23)
	ctx.r4.u64 = PPC_LOAD_U32(r23.u32 + 48);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8258374c
	if (!cr0.eq) goto loc_8258374C;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// cmpw cr6,r4,r10
	cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, xer);
	// bne cr6,0x8258374c
	if (!cr6.eq) goto loc_8258374C;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// b 0x825837d0
	goto loc_825837D0;
loc_8258374C:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// bl 0x825832e8
	sub_825832E8(ctx, base);
	// b 0x825837d0
	goto loc_825837D0;
loc_82583758:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82583798
	if (!cr0.eq) goto loc_82583798;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,236
	ctx.r7.s64 = 236;
	// addi r6,r11,6608
	ctx.r6.s64 = r11.s64 + 6608;
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
loc_82583798:
	// lwz r31,428(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 428);
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x825837cc
	if (cr0.eq) goto loc_825837CC;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82586eb8
	sub_82586EB8(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x825837d0
	goto loc_825837D0;
loc_825837CC:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_825837D0:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r26,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r26.u32);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lbz r11,5(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 5);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82583824
	if (cr0.eq) goto loc_82583824;
	// lwz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// lwz r11,32(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 32);
	// stw r10,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r10.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// stw r11,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r11.u32);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// stw r10,228(r31)
	PPC_STORE_U32(r31.u32 + 228, ctx.r10.u32);
	// b 0x8258384c
	goto loc_8258384C;
loc_82583824:
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258384c
	if (cr0.eq) goto loc_8258384C;
	// lwz r11,224(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 224);
	// stw r24,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r24.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r11.u32);
loc_8258384C:
	// lbz r11,4(r26)
	r11.u64 = PPC_LOAD_U8(r26.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82583864
	if (cr0.eq) goto loc_82583864;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
loc_82583864:
	// lwz r30,432(r28)
	r30.u64 = PPC_LOAD_U32(r28.u32 + 432);
	// li r4,272
	ctx.r4.s64 = 272;
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
	// beq 0x825838a4
	if (cr0.eq) goto loc_825838A4;
	// stw r31,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r31.u32);
	// mr r31,r11
	r31.u64 = r11.u64;
	// stw r28,260(r11)
	PPC_STORE_U32(r11.u32 + 260, r28.u32);
	// stb r24,264(r11)
	PPC_STORE_U8(r11.u32 + 264, r24.u8);
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(r11.u32 + 4, r25.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(r11.u32 + 8, r25.u32);
	// stw r25,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r25.u32);
	// b 0x825838a8
	goto loc_825838A8;
loc_825838A4:
	// mr r31,r24
	r31.u64 = r24.u64;
loc_825838A8:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82577d78
	sub_82577D78(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r23
	ctx.r3.u64 = r23.u64;
	// bl 0x8258a150
	sub_8258A150(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_825838C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd34
	return;
}

__attribute__((alias("__imp__sub_825838CC"))) PPC_WEAK_FUNC(sub_825838CC);
PPC_FUNC_IMPL(__imp__sub_825838CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825838D0"))) PPC_WEAK_FUNC(sub_825838D0);
PPC_FUNC_IMPL(__imp__sub_825838D0) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// li r31,0
	r31.s64 = 0;
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x8258396c
	if (!cr6.gt) goto loc_8258396C;
	// li r30,0
	r30.s64 = 0;
loc_82583900:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82583918
	if (!cr6.lt) goto loc_82583918;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x82583920
	goto loc_82583920;
loc_82583918:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82583920:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// beq cr6,0x82583948
	if (cr6.eq) goto loc_82583948;
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82583900
	if (cr6.lt) goto loc_82583900;
	// b 0x8258396c
	goto loc_8258396C;
loc_82583948:
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x82583960
	if (!cr6.lt) goto loc_82583960;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82583968
	goto loc_82583968;
loc_82583960:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82583968:
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r27.u32);
loc_8258396C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82583974"))) PPC_WEAK_FUNC(sub_82583974);
PPC_FUNC_IMPL(__imp__sub_82583974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583978"))) PPC_WEAK_FUNC(sub_82583978);
PPC_FUNC_IMPL(__imp__sub_82583978) {
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
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x825839f4
	if (!cr6.gt) goto loc_825839F4;
	// li r30,0
	r30.s64 = 0;
loc_825839A4:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bge cr6,0x825839bc
	if (!cr6.lt) goto loc_825839BC;
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r3,r11,r30
	ctx.r3.u64 = r11.u64 + r30.u64;
	// b 0x825839c4
	goto loc_825839C4;
loc_825839BC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_825839C4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r3,36(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 36);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// beq cr6,0x825839ec
	if (cr6.eq) goto loc_825839EC;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x825839a4
	if (cr6.lt) goto loc_825839A4;
	// b 0x825839f4
	goto loc_825839F4;
loc_825839EC:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
loc_825839F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825839FC"))) PPC_WEAK_FUNC(sub_825839FC);
PPC_FUNC_IMPL(__imp__sub_825839FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583A00"))) PPC_WEAK_FUNC(sub_82583A00);
PPC_FUNC_IMPL(__imp__sub_82583A00) {
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
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// lwz r11,52(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 52);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82583a44
	if (!cr6.eq) goto loc_82583A44;
	// lwz r11,484(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 484);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,484(r31)
	PPC_STORE_U32(r31.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// bl 0x82574110
	sub_82574110(ctx, base);
	// stw r3,52(r29)
	PPC_STORE_U32(r29.u32 + 52, ctx.r3.u32);
loc_82583A44:
	// lwz r31,428(r31)
	r31.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r24,52(r29)
	r24.u64 = PPC_LOAD_U32(r29.u32 + 52);
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
	// beq 0x82583a78
	if (cr0.eq) goto loc_82583A78;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82586a28
	sub_82586A28(ctx, base);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// b 0x82583a7c
	goto loc_82583A7C;
loc_82583A78:
	// li r31,0
	r31.s64 = 0;
loc_82583A7C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// stw r31,48(r29)
	PPC_STORE_U32(r29.u32 + 48, r31.u32);
	// cmpwi cr6,r11,5
	cr6.compare<int32_t>(r11.s32, 5, xer);
	// bne cr6,0x82583aa0
	if (!cr6.eq) goto loc_82583AA0;
	// stw r31,116(r30)
	PPC_STORE_U32(r30.u32 + 116, r31.u32);
loc_82583AA0:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,6
	cr6.compare<int32_t>(r11.s32, 6, xer);
	// bne cr6,0x82583ab8
	if (!cr6.eq) goto loc_82583AB8;
	// li r11,1
	r11.s64 = 1;
	// stw r31,120(r30)
	PPC_STORE_U32(r30.u32 + 120, r31.u32);
	// stb r11,126(r30)
	PPC_STORE_U8(r30.u32 + 126, r11.u8);
loc_82583AB8:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r28,r11,6600
	r28.s64 = r11.s64 + 6600;
	// bne cr6,0x82583ae8
	if (!cr6.eq) goto loc_82583AE8;
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r31,112(r30)
	PPC_STORE_U32(r30.u32 + 112, r31.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82583AE8:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// cmpwi cr6,r11,8
	cr6.compare<int32_t>(r11.s32, 8, xer);
	// bne cr6,0x82583b08
	if (!cr6.eq) goto loc_82583B08;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// stw r31,108(r30)
	PPC_STORE_U32(r30.u32 + 108, r31.u32);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r31.u32);
loc_82583B08:
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
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
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r27.u32);
	// li r30,0
	r30.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,6724
	r29.s64 = r11.s64 + 6724;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,6692
	r27.s64 = r11.s64 + 6692;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r11,6608
	r26.s64 = r11.s64 + 6608;
loc_82583B60:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lbzx r25,r30,r11
	r25.u64 = PPC_LOAD_U8(r30.u32 + r11.u32);
	// cmplwi cr6,r25,8
	cr6.compare<uint32_t>(r25.u32, 8, xer);
	// blt cr6,0x82583b88
	if (cr6.lt) goto loc_82583B88;
	// li r7,361
	ctx.r7.s64 = 361;
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
loc_82583B88:
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r29
	r11.u64 = PPC_LOAD_U32(r11.u32 + r29.u32);
	// stbx r11,r30,r10
	PPC_STORE_U8(r30.u32 + ctx.r10.u32, r11.u8);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// blt cr6,0x82583b60
	if (cr6.lt) goto loc_82583B60;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82583BB8"))) PPC_WEAK_FUNC(sub_82583BB8);
PPC_FUNC_IMPL(__imp__sub_82583BB8) {
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
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// lwz r11,60(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 60);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82583bfc
	if (!cr6.eq) goto loc_82583BFC;
	// lwz r11,484(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 484);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-1
	ctx.r5.s64 = r11.s64 + -1;
	// stw r5,484(r29)
	PPC_STORE_U32(r29.u32 + 484, ctx.r5.u32);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// bl 0x82574110
	sub_82574110(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(r31.u32 + 60, ctx.r3.u32);
loc_82583BFC:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82564788
	sub_82564788(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82583d18
	if (cr0.eq) goto loc_82583D18;
	// lwz r29,428(r29)
	r29.u64 = PPC_LOAD_U32(r29.u32 + 428);
	// li r4,964
	ctx.r4.s64 = 964;
	// lwz r24,60(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 60);
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
	// beq 0x82583c3c
	if (cr0.eq) goto loc_82583C3C;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// bl 0x82586a28
	sub_82586A28(ctx, base);
	// b 0x82583c40
	goto loc_82583C40;
loc_82583C3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82583C40:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// stw r3,56(r31)
	PPC_STORE_U32(r31.u32 + 56, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// bl 0x82565180
	sub_82565180(ctx, base);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,168(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 168);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 96);
	// lwz r30,56(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r30.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r28.u32);
	// li r29,0
	r29.s64 = 0;
	// lwz r11,6600(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 6600);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r30,r11,6724
	r30.s64 = r11.s64 + 6724;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,6692
	r27.s64 = r11.s64 + 6692;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r11,6608
	r26.s64 = r11.s64 + 6608;
loc_82583CC0:
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// lbzx r25,r29,r11
	r25.u64 = PPC_LOAD_U8(r29.u32 + r11.u32);
	// cmplwi cr6,r25,8
	cr6.compare<uint32_t>(r25.u32, 8, xer);
	// blt cr6,0x82583ce8
	if (cr6.lt) goto loc_82583CE8;
	// li r7,361
	ctx.r7.s64 = 361;
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
loc_82583CE8:
	// rlwinm r11,r25,2,0,29
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r11,r30
	r11.u64 = PPC_LOAD_U32(r11.u32 + r30.u32);
	// stbx r11,r29,r10
	PPC_STORE_U8(r29.u32 + ctx.r10.u32, r11.u8);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmpwi cr6,r29,4
	cr6.compare<int32_t>(r29.s32, 4, xer);
	// blt cr6,0x82583cc0
	if (cr6.lt) goto loc_82583CC0;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,128(r11)
	PPC_STORE_U32(r11.u32 + 128, ctx.r10.u32);
	// b 0x82583d1c
	goto loc_82583D1C;
loc_82583D18:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82583D1C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_82583D24"))) PPC_WEAK_FUNC(sub_82583D24);
PPC_FUNC_IMPL(__imp__sub_82583D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583D28"))) PPC_WEAK_FUNC(sub_82583D28);
PPC_FUNC_IMPL(__imp__sub_82583D28) {
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
	// lwz r31,44(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// addi r11,r11,6756
	r11.s64 = r11.s64 + 6756;
	// cmplwi r31,0
	cr0.compare<uint32_t>(r31.u32, 0, xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// beq 0x82583d64
	if (cr0.eq) goto loc_82583D64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x825833b0
	sub_825833B0(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82583D64:
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

__attribute__((alias("__imp__sub_82583D78"))) PPC_WEAK_FUNC(sub_82583D78);
PPC_FUNC_IMPL(__imp__sub_82583D78) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r29,16(r30)
	PPC_STORE_U32(r30.u32 + 16, r29.u32);
	// cmpwi cr6,r28,1
	cr6.compare<int32_t>(r28.s32, 1, xer);
	// addi r11,r11,6792
	r11.s64 = r11.s64 + 6792;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lwz r11,392(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 392);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,392(r31)
	PPC_STORE_U32(r31.u32 + 392, r11.u32);
	// beq cr6,0x82583e14
	if (cr6.eq) goto loc_82583E14;
	// cmpwi cr6,r28,2
	cr6.compare<int32_t>(r28.s32, 2, xer);
	// beq cr6,0x82583df0
	if (cr6.eq) goto loc_82583DF0;
	// cmpwi cr6,r28,3
	cr6.compare<int32_t>(r28.s32, 3, xer);
	// bne cr6,0x82583e38
	if (!cr6.eq) goto loc_82583E38;
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r11,36(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 36);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82583e38
	if (cr6.lt) goto loc_82583E38;
	// li r11,30
	r11.s64 = 30;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_82583DF0:
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82583e38
	if (cr6.lt) goto loc_82583E38;
	// li r11,28
	r11.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_82583E14:
	// lwz r11,336(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x82583e38
	if (cr6.lt) goto loc_82583E38;
	// li r11,29
	r11.s64 = 29;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r11,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r11.u32);
	// bl 0x826a70b0
	longjmp(*reinterpret_cast<jmp_buf*>(base + ctx.r3.u32), ctx.r4.s32);
loc_82583E38:
	// lwz r29,428(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x82583e6c
	if (cr0.eq) goto loc_82583E6C;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82586da8
	sub_82586DA8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82583e70
	goto loc_82583E70;
loc_82583E6C:
	// li r29,0
	r29.s64 = 0;
loc_82583E70:
	// lwz r11,1712(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 1712);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82583EB4"))) PPC_WEAK_FUNC(sub_82583EB4);
PPC_FUNC_IMPL(__imp__sub_82583EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583EB8"))) PPC_WEAK_FUNC(sub_82583EB8);
PPC_FUNC_IMPL(__imp__sub_82583EB8) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,6828
	r11.s64 = r11.s64 + 6828;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// lwz r11,388(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 388);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,388(r30)
	PPC_STORE_U32(r30.u32 + 388, r11.u32);
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

__attribute__((alias("__imp__sub_82583F18"))) PPC_WEAK_FUNC(sub_82583F18);
PPC_FUNC_IMPL(__imp__sub_82583F18) {
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
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,6864
	r11.s64 = r11.s64 + 6864;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,52(r31)
	PPC_STORE_U32(r31.u32 + 52, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82583F5C"))) PPC_WEAK_FUNC(sub_82583F5C);
PPC_FUNC_IMPL(__imp__sub_82583F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82583F60"))) PPC_WEAK_FUNC(sub_82583F60);
PPC_FUNC_IMPL(__imp__sub_82583F60) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r29,0
	r29.s64 = 0;
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// addi r11,r11,6900
	r11.s64 = r11.s64 + 6900;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// stw r29,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r29.u32);
	// stw r29,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r29.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r29.u32);
	// lwz r11,1712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1712);
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x82580cd0
	sub_82580CD0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lbz r11,356(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 356);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x8258402c
	if (!cr0.eq) goto loc_8258402C;
	// lwz r28,428(r30)
	r28.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x82583ff4
	if (cr0.eq) goto loc_82583FF4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82586f20
	sub_82586F20(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
loc_82583FF4:
	// lwz r11,1712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1712);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
loc_8258402C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82584038"))) PPC_WEAK_FUNC(sub_82584038);
PPC_FUNC_IMPL(__imp__sub_82584038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
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
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r27,r6
	r27.u64 = ctx.r6.u64;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// li r28,0
	r28.s64 = 0;
	// addi r11,r11,6900
	r11.s64 = r11.s64 + 6900;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stw r28,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r28.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// stw r28,52(r31)
	PPC_STORE_U32(r31.u32 + 52, r28.u32);
	// stw r28,56(r31)
	PPC_STORE_U32(r31.u32 + 56, r28.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(r31.u32 + 60, r28.u32);
	// lwz r11,1712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1712);
	// addi r3,r11,184
	ctx.r3.s64 = r11.s64 + 184;
	// bl 0x82580dc0
	sub_82580DC0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r3,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r3.u32);
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// lbz r11,356(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 356);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825840d4
	if (cr0.eq) goto loc_825840D4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,497
	ctx.r7.s64 = 497;
	// addi r6,r11,6608
	ctx.r6.s64 = r11.s64 + 6608;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,6936
	ctx.r5.s64 = r11.s64 + 6936;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825840D4:
	// lwz r29,428(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x82584100
	if (cr0.eq) goto loc_82584100;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82586f20
	sub_82586F20(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
loc_82584100:
	// lwz r11,1712(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 1712);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,164(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 164);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 40);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82584144"))) PPC_WEAK_FUNC(sub_82584144);
PPC_FUNC_IMPL(__imp__sub_82584144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584148"))) PPC_WEAK_FUNC(sub_82584148);
PPC_FUNC_IMPL(__imp__sub_82584148) {
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
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r11,r11,6964
	r11.s64 = r11.s64 + 6964;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r3,1712(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 1712);
	// bl 0x825767a0
	sub_825767A0(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// stb r11,29(r31)
	PPC_STORE_U8(r31.u32 + 29, r11.u8);
	// stb r11,28(r31)
	PPC_STORE_U8(r31.u32 + 28, r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_8258419C"))) PPC_WEAK_FUNC(sub_8258419C);
PPC_FUNC_IMPL(__imp__sub_8258419C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825841A0"))) PPC_WEAK_FUNC(sub_825841A0);
PPC_FUNC_IMPL(__imp__sub_825841A0) {
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
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7036
	r11.s64 = r11.s64 + 7036;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// cmpw cr6,r30,r10
	cr6.compare<int32_t>(r30.s32, ctx.r10.s32, xer);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,6608
	r27.s64 = r11.s64 + 6608;
	// blt cr6,0x82584204
	if (cr6.lt) goto loc_82584204;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,577
	ctx.r7.s64 = 577;
	// addi r5,r11,7020
	ctx.r5.s64 = r11.s64 + 7020;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82584204:
	// lis r11,1
	r11.s64 = 65536;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x8258422c
	if (cr6.lt) goto loc_8258422C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,578
	ctx.r7.s64 = 578;
	// addi r5,r11,7000
	ctx.r5.s64 = r11.s64 + 7000;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8258422C:
	// rlwinm r11,r30,16,0,15
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 16) & 0xFFFF0000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82584244"))) PPC_WEAK_FUNC(sub_82584244);
PPC_FUNC_IMPL(__imp__sub_82584244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584248"))) PPC_WEAK_FUNC(sub_82584248);
PPC_FUNC_IMPL(__imp__sub_82584248) {
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
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82583eb8
	sub_82583EB8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r11,r11,7072
	r11.s64 = r11.s64 + 7072;
	// addi r28,r10,-15800
	r28.s64 = ctx.r10.s64 + -15800;
	// stw r11,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r11.u32);
	// lwz r3,464(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 464);
	// lwz r31,1712(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 1712);
	// lwz r29,512(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 512);
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
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// bl 0x82560c10
	sub_82560C10(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82584368
	if (!cr0.eq) goto loc_82584368;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r5,7592(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 7592);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	r11.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82584344
	if (!cr0.eq) goto loc_82584344;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r29,428(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x82584310
	if (cr0.eq) goto loc_82584310;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82586eb8
	sub_82586EB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82584314
	goto loc_82584314;
loc_82584310:
	// li r29,0
	r29.s64 = 0;
loc_82584314:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82589438
	sub_82589438(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// stwx r29,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r29.u32);
	// b 0x82584348
	goto loc_82584348;
loc_82584344:
	// lwz r28,28(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_82584348:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82588680
	sub_82588680(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// b 0x82584664
	goto loc_82584664;
loc_82584368:
	// lis r11,-32171
	r11.s64 = -2108358656;
	// lwz r3,512(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 512);
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// addi r5,r11,-15800
	ctx.r5.s64 = r11.s64 + -15800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x825611a8
	sub_825611A8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r21,r11,7760
	r21.s64 = r11.s64 + 7760;
	// rlwinm r11,r10,4,0,27
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r21
	r11.u64 = PPC_LOAD_U32(r11.u32 + r21.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// blt 0x82584584
	if (cr0.lt) goto loc_82584584;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r27,r10,8064
	r27.s64 = ctx.r10.s64 + 8064;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r9,r27,8
	ctx.r9.s64 = r27.s64 + 8;
	// addi r10,r10,7592
	ctx.r10.s64 = ctx.r10.s64 + 7592;
	// lwzx r8,r11,r27
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// rlwinm r9,r8,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r9,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r25,r11,r10
	r25.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// addi r10,r25,6
	ctx.r10.s64 = r25.s64 + 6;
	// rlwinm r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r22,r10,2,0,29
	r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r28,r31
	r11.u64 = PPC_LOAD_U32(r28.u32 + r31.u32);
	// lwzx r23,r22,r31
	r23.u64 = PPC_LOAD_U32(r22.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82584464
	if (!cr0.eq) goto loc_82584464;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r29,428(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x82584430
	if (cr0.eq) goto loc_82584430;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82586eb8
	sub_82586EB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82584434
	goto loc_82584434;
loc_82584430:
	// li r29,0
	r29.s64 = 0;
loc_82584434:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82589438
	sub_82589438(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// stwx r29,r28,r31
	PPC_STORE_U32(r28.u32 + r31.u32, r29.u32);
	// b 0x82584468
	goto loc_82584468;
loc_82584464:
	// lwz r24,28(r11)
	r24.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_82584468:
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// bne cr6,0x825844ec
	if (!cr6.eq) goto loc_825844EC;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r29,428(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x825844b8
	if (cr0.eq) goto loc_825844B8;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82586eb8
	sub_82586EB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x825844bc
	goto loc_825844BC;
loc_825844B8:
	// li r29,0
	r29.s64 = 0;
loc_825844BC:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82589438
	sub_82589438(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// stwx r29,r22,r31
	PPC_STORE_U32(r22.u32 + r31.u32, r29.u32);
	// b 0x825844f0
	goto loc_825844F0;
loc_825844EC:
	// lwz r28,28(r23)
	r28.u64 = PPC_LOAD_U32(r23.u32 + 28);
loc_825844F0:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82588680
	sub_82588680(ctx, base);
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwzx r11,r11,r21
	r11.u64 = PPC_LOAD_U32(r11.u32 + r21.u32);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,132(r29)
	PPC_STORE_U32(r29.u32 + 132, r11.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82588680
	sub_82588680(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r27,12
	ctx.r10.s64 = r27.s64 + 12;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r11,r21
	r11.u64 = PPC_LOAD_U32(r11.u32 + r21.u32);
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// b 0x8258465c
	goto loc_8258465C;
loc_82584584:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// addi r25,r11,8096
	r25.s64 = r11.s64 + 8096;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,7592
	r11.s64 = r11.s64 + 7592;
	// lwzx r10,r10,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r25.u32);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r27,r31
	r11.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82584630
	if (!cr0.eq) goto loc_82584630;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r29,428(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 428);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x825845fc
	if (cr0.eq) goto loc_825845FC;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// bl 0x82586eb8
	sub_82586EB8(ctx, base);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// b 0x82584600
	goto loc_82584600;
loc_825845FC:
	// li r29,0
	r29.s64 = 0;
loc_82584600:
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x82589438
	sub_82589438(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// stwx r29,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r29.u32);
	// b 0x82584634
	goto loc_82584634;
loc_82584630:
	// lwz r28,28(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_82584634:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82588680
	sub_82588680(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r10,r25,4
	ctx.r10.s64 = r25.s64 + 4;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
loc_8258465C:
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,132(r30)
	PPC_STORE_U32(r30.u32 + 132, r11.u32);
loc_82584664:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_82584698"))) PPC_WEAK_FUNC(sub_82584698);
PPC_FUNC_IMPL(__imp__sub_82584698) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82583eb8
	sub_82583EB8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r11,r11,7108
	r11.s64 = r11.s64 + 7108;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lwz r29,1712(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 1712);
	// addi r11,r11,7592
	r11.s64 = r11.s64 + 7592;
	// lwz r5,160(r11)
	ctx.r5.u64 = PPC_LOAD_U32(r11.u32 + 160);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r26,r11,2,0,29
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r26,r29
	r11.u64 = PPC_LOAD_U32(r26.u32 + r29.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82584758
	if (!cr0.eq) goto loc_82584758;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r28,428(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x82584724
	if (cr0.eq) goto loc_82584724;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x82586eb8
	sub_82586EB8(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// b 0x82584728
	goto loc_82584728;
loc_82584724:
	// li r28,0
	r28.s64 = 0;
loc_82584728:
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// lwz r3,164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 164);
	// bl 0x82589438
	sub_82589438(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// stwx r28,r26,r29
	PPC_STORE_U32(r26.u32 + r29.u32, r28.u32);
	// b 0x8258475c
	goto loc_8258475C;
loc_82584758:
	// lwz r27,28(r11)
	r27.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_8258475C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82588680
	sub_82588680(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(r29.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd40
	return;
}

__attribute__((alias("__imp__sub_825847AC"))) PPC_WEAK_FUNC(sub_825847AC);
PPC_FUNC_IMPL(__imp__sub_825847AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825847B0"))) PPC_WEAK_FUNC(sub_825847B0);
PPC_FUNC_IMPL(__imp__sub_825847B0) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r31,r6
	r31.u64 = ctx.r6.u64;
	// bl 0x82583eb8
	sub_82583EB8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r11,r11,7144
	r11.s64 = r11.s64 + 7144;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// addi r5,r10,-15800
	ctx.r5.s64 = ctx.r10.s64 + -15800;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r27)
	PPC_STORE_U32(r27.u32 + 0, r11.u32);
	// lwz r26,1712(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 1712);
	// lwz r3,512(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 512);
	// bl 0x825611a8
	sub_825611A8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmpwi cr6,r29,12
	cr6.compare<int32_t>(r29.s32, 12, xer);
	// addi r24,r11,8096
	r24.s64 = r11.s64 + 8096;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r23,r11,8972
	r23.s64 = r11.s64 + 8972;
	// lis r11,-32253
	r11.s64 = -2113732608;
	// addi r22,r11,-24612
	r22.s64 = r11.s64 + -24612;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r21,r11,6608
	r21.s64 = r11.s64 + 6608;
	// beq cr6,0x8258485c
	if (cr6.eq) goto loc_8258485C;
	// cmpwi cr6,r29,13
	cr6.compare<int32_t>(r29.s32, 13, xer);
	// beq cr6,0x82584854
	if (cr6.eq) goto loc_82584854;
	// cmpwi cr6,r29,14
	cr6.compare<int32_t>(r29.s32, 14, xer);
	// beq cr6,0x8258484c
	if (cr6.eq) goto loc_8258484C;
	// li r7,757
	ctx.r7.s64 = 757;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8258486c
	goto loc_8258486C;
loc_8258484C:
	// addi r10,r24,8
	ctx.r10.s64 = r24.s64 + 8;
	// b 0x82584860
	goto loc_82584860;
loc_82584854:
	// addi r10,r24,24
	ctx.r10.s64 = r24.s64 + 24;
	// b 0x82584860
	goto loc_82584860;
loc_8258485C:
	// addi r10,r24,16
	ctx.r10.s64 = r24.s64 + 16;
loc_82584860:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
loc_8258486C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,7592
	r11.s64 = r11.s64 + 7592;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// addi r11,r5,6
	r11.s64 = ctx.r5.s64 + 6;
	// rlwinm r25,r11,2,0,29
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r25,r26
	r11.u64 = PPC_LOAD_U32(r25.u32 + r26.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82584908
	if (!cr0.eq) goto loc_82584908;
	// li r4,15
	ctx.r4.s64 = 15;
	// lwz r3,172(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 172);
	// bl 0x82574968
	sub_82574968(ctx, base);
	// lwz r30,428(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r4,964
	ctx.r4.s64 = 964;
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
	// beq 0x825848d4
	if (cr0.eq) goto loc_825848D4;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x82586eb8
	sub_82586EB8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// b 0x825848d8
	goto loc_825848D8;
loc_825848D4:
	// li r30,0
	r30.s64 = 0;
loc_825848D8:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r3,164(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 164);
	// bl 0x82589438
	sub_82589438(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// stwx r30,r25,r26
	PPC_STORE_U32(r25.u32 + r26.u32, r30.u32);
	// b 0x8258490c
	goto loc_8258490C;
loc_82584908:
	// lwz r28,28(r11)
	r28.u64 = PPC_LOAD_U32(r11.u32 + 28);
loc_8258490C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// li r3,49
	ctx.r3.s64 = 49;
	// bl 0x82588680
	sub_82588680(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// cmpwi cr6,r29,12
	cr6.compare<int32_t>(r29.s32, 12, xer);
	// beq cr6,0x8258496c
	if (cr6.eq) goto loc_8258496C;
	// cmpwi cr6,r29,13
	cr6.compare<int32_t>(r29.s32, 13, xer);
	// beq cr6,0x82584964
	if (cr6.eq) goto loc_82584964;
	// cmpwi cr6,r29,14
	cr6.compare<int32_t>(r29.s32, 14, xer);
	// beq cr6,0x8258495c
	if (cr6.eq) goto loc_8258495C;
	// li r7,788
	ctx.r7.s64 = 788;
	// mr r6,r21
	ctx.r6.u64 = r21.u64;
	// mr r5,r22
	ctx.r5.u64 = r22.u64;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
	// b 0x82584980
	goto loc_82584980;
loc_8258495C:
	// addi r10,r24,12
	ctx.r10.s64 = r24.s64 + 12;
	// b 0x82584970
	goto loc_82584970;
loc_82584964:
	// addi r10,r24,28
	ctx.r10.s64 = r24.s64 + 28;
	// b 0x82584970
	goto loc_82584970;
loc_8258496C:
	// addi r10,r24,20
	ctx.r10.s64 = r24.s64 + 20;
loc_82584970:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(r31.u32 + 132, r11.u32);
loc_82584980:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82583518
	sub_82583518(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r3,164(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 164);
	// bl 0x825893f0
	sub_825893F0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x8239bd2c
	return;
}

__attribute__((alias("__imp__sub_825849B4"))) PPC_WEAK_FUNC(sub_825849B4);
PPC_FUNC_IMPL(__imp__sub_825849B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825849B8"))) PPC_WEAK_FUNC(sub_825849B8);
PPC_FUNC_IMPL(__imp__sub_825849B8) {
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
	// bl 0x82583eb8
	sub_82583EB8(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,7180
	r11.s64 = r11.s64 + 7180;
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

__attribute__((alias("__imp__sub_825849F4"))) PPC_WEAK_FUNC(sub_825849F4);
PPC_FUNC_IMPL(__imp__sub_825849F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825849F8"))) PPC_WEAK_FUNC(sub_825849F8);
PPC_FUNC_IMPL(__imp__sub_825849F8) {
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
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,7216
	r11.s64 = r11.s64 + 7216;
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

__attribute__((alias("__imp__sub_82584A44"))) PPC_WEAK_FUNC(sub_82584A44);
PPC_FUNC_IMPL(__imp__sub_82584A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584A48"))) PPC_WEAK_FUNC(sub_82584A48);
PPC_FUNC_IMPL(__imp__sub_82584A48) {
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
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r30,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r30.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,7252
	r11.s64 = r11.s64 + 7252;
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

__attribute__((alias("__imp__sub_82584A94"))) PPC_WEAK_FUNC(sub_82584A94);
PPC_FUNC_IMPL(__imp__sub_82584A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584A98"))) PPC_WEAK_FUNC(sub_82584A98);
PPC_FUNC_IMPL(__imp__sub_82584A98) {
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
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmpwi cr6,r31,0
	cr6.compare<int32_t>(r31.s32, 0, xer);
	// addi r11,r11,7300
	r11.s64 = r11.s64 + 7300;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// beq cr6,0x82584af0
	if (cr6.eq) goto loc_82584AF0;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,851
	ctx.r7.s64 = 851;
	// addi r6,r11,6608
	ctx.r6.s64 = r11.s64 + 6608;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,7288
	ctx.r5.s64 = r11.s64 + 7288;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82584AF0:
	// li r11,1
	r11.s64 = 1;
	// li r10,32
	ctx.r10.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stb r11,5(r30)
	PPC_STORE_U8(r30.u32 + 5, r11.u8);
	// stw r10,16(r30)
	PPC_STORE_U32(r30.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82584B1C"))) PPC_WEAK_FUNC(sub_82584B1C);
PPC_FUNC_IMPL(__imp__sub_82584B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584B20"))) PPC_WEAK_FUNC(sub_82584B20);
PPC_FUNC_IMPL(__imp__sub_82584B20) {
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
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// cmpwi cr6,r30,0
	cr6.compare<int32_t>(r30.s32, 0, xer);
	// addi r11,r11,7368
	r11.s64 = r11.s64 + 7368;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// blt cr6,0x82584b5c
	if (cr6.lt) goto loc_82584B5C;
	// cmpwi cr6,r30,4
	cr6.compare<int32_t>(r30.s32, 4, xer);
	// ble cr6,0x82584b80
	if (!cr6.gt) goto loc_82584B80;
loc_82584B5C:
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,862
	ctx.r7.s64 = 862;
	// addi r6,r11,6608
	ctx.r6.s64 = r11.s64 + 6608;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,7336
	ctx.r5.s64 = r11.s64 + 7336;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82584B80:
	// li r11,1
	r11.s64 = 1;
	// addi r10,r30,33
	ctx.r10.s64 = r30.s64 + 33;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stb r11,5(r31)
	PPC_STORE_U8(r31.u32 + 5, r11.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82584BAC"))) PPC_WEAK_FUNC(sub_82584BAC);
PPC_FUNC_IMPL(__imp__sub_82584BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82584BB0"))) PPC_WEAK_FUNC(sub_82584BB0);
PPC_FUNC_IMPL(__imp__sub_82584BB0) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584bec
	if (cr0.eq) goto loc_82584BEC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584bec
	if (cr6.eq) goto loc_82584BEC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584BEC:
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

__attribute__((alias("__imp__sub_82584C08"))) PPC_WEAK_FUNC(sub_82584C08);
PPC_FUNC_IMPL(__imp__sub_82584C08) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584c44
	if (cr0.eq) goto loc_82584C44;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584c44
	if (cr6.eq) goto loc_82584C44;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584C44:
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

__attribute__((alias("__imp__sub_82584C60"))) PPC_WEAK_FUNC(sub_82584C60);
PPC_FUNC_IMPL(__imp__sub_82584C60) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584c9c
	if (cr0.eq) goto loc_82584C9C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584c9c
	if (cr6.eq) goto loc_82584C9C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584C9C:
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

__attribute__((alias("__imp__sub_82584CB8"))) PPC_WEAK_FUNC(sub_82584CB8);
PPC_FUNC_IMPL(__imp__sub_82584CB8) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584cf4
	if (cr0.eq) goto loc_82584CF4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584cf4
	if (cr6.eq) goto loc_82584CF4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584CF4:
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

__attribute__((alias("__imp__sub_82584D10"))) PPC_WEAK_FUNC(sub_82584D10);
PPC_FUNC_IMPL(__imp__sub_82584D10) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584d4c
	if (cr0.eq) goto loc_82584D4C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584d4c
	if (cr6.eq) goto loc_82584D4C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584D4C:
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

__attribute__((alias("__imp__sub_82584D68"))) PPC_WEAK_FUNC(sub_82584D68);
PPC_FUNC_IMPL(__imp__sub_82584D68) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584da4
	if (cr0.eq) goto loc_82584DA4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584da4
	if (cr6.eq) goto loc_82584DA4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584DA4:
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

__attribute__((alias("__imp__sub_82584DC0"))) PPC_WEAK_FUNC(sub_82584DC0);
PPC_FUNC_IMPL(__imp__sub_82584DC0) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584dfc
	if (cr0.eq) goto loc_82584DFC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584dfc
	if (cr6.eq) goto loc_82584DFC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584DFC:
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

__attribute__((alias("__imp__sub_82584E18"))) PPC_WEAK_FUNC(sub_82584E18);
PPC_FUNC_IMPL(__imp__sub_82584E18) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584e54
	if (cr0.eq) goto loc_82584E54;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584e54
	if (cr6.eq) goto loc_82584E54;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584E54:
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

__attribute__((alias("__imp__sub_82584E70"))) PPC_WEAK_FUNC(sub_82584E70);
PPC_FUNC_IMPL(__imp__sub_82584E70) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584eac
	if (cr0.eq) goto loc_82584EAC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584eac
	if (cr6.eq) goto loc_82584EAC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584EAC:
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

__attribute__((alias("__imp__sub_82584EC8"))) PPC_WEAK_FUNC(sub_82584EC8);
PPC_FUNC_IMPL(__imp__sub_82584EC8) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584f04
	if (cr0.eq) goto loc_82584F04;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584f04
	if (cr6.eq) goto loc_82584F04;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584F04:
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

__attribute__((alias("__imp__sub_82584F20"))) PPC_WEAK_FUNC(sub_82584F20);
PPC_FUNC_IMPL(__imp__sub_82584F20) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584f5c
	if (cr0.eq) goto loc_82584F5C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584f5c
	if (cr6.eq) goto loc_82584F5C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584F5C:
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

__attribute__((alias("__imp__sub_82584F78"))) PPC_WEAK_FUNC(sub_82584F78);
PPC_FUNC_IMPL(__imp__sub_82584F78) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82584fb4
	if (cr0.eq) goto loc_82584FB4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82584fb4
	if (cr6.eq) goto loc_82584FB4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82584FB4:
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

__attribute__((alias("__imp__sub_82584FD0"))) PPC_WEAK_FUNC(sub_82584FD0);
PPC_FUNC_IMPL(__imp__sub_82584FD0) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258500c
	if (cr0.eq) goto loc_8258500C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8258500c
	if (cr6.eq) goto loc_8258500C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8258500C:
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

__attribute__((alias("__imp__sub_82585028"))) PPC_WEAK_FUNC(sub_82585028);
PPC_FUNC_IMPL(__imp__sub_82585028) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7404
	r11.s64 = r11.s64 + 7404;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,396(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 396);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,396(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 396);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,396(r30)
	PPC_STORE_U32(r30.u32 + 396, r11.u32);
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

__attribute__((alias("__imp__sub_8258508C"))) PPC_WEAK_FUNC(sub_8258508C);
PPC_FUNC_IMPL(__imp__sub_8258508C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585090"))) PPC_WEAK_FUNC(sub_82585090);
PPC_FUNC_IMPL(__imp__sub_82585090) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7440
	r11.s64 = r11.s64 + 7440;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,400(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 400);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,400(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 400);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,400(r30)
	PPC_STORE_U32(r30.u32 + 400, r11.u32);
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

__attribute__((alias("__imp__sub_825850F4"))) PPC_WEAK_FUNC(sub_825850F4);
PPC_FUNC_IMPL(__imp__sub_825850F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825850F8"))) PPC_WEAK_FUNC(sub_825850F8);
PPC_FUNC_IMPL(__imp__sub_825850F8) {
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
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// bl 0x82583410
	sub_82583410(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,7476
	r11.s64 = r11.s64 + 7476;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,404(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 404);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// lwz r11,404(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 404);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,404(r30)
	PPC_STORE_U32(r30.u32 + 404, r11.u32);
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

__attribute__((alias("__imp__sub_8258515C"))) PPC_WEAK_FUNC(sub_8258515C);
PPC_FUNC_IMPL(__imp__sub_8258515C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585160"))) PPC_WEAK_FUNC(sub_82585160);
PPC_FUNC_IMPL(__imp__sub_82585160) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258519c
	if (cr0.eq) goto loc_8258519C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8258519c
	if (cr6.eq) goto loc_8258519C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8258519C:
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

__attribute__((alias("__imp__sub_825851B8"))) PPC_WEAK_FUNC(sub_825851B8);
PPC_FUNC_IMPL(__imp__sub_825851B8) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825851f4
	if (cr0.eq) goto loc_825851F4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825851f4
	if (cr6.eq) goto loc_825851F4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825851F4:
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

__attribute__((alias("__imp__sub_82585210"))) PPC_WEAK_FUNC(sub_82585210);
PPC_FUNC_IMPL(__imp__sub_82585210) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258524c
	if (cr0.eq) goto loc_8258524C;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x8258524c
	if (cr6.eq) goto loc_8258524C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8258524C:
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

__attribute__((alias("__imp__sub_82585268"))) PPC_WEAK_FUNC(sub_82585268);
PPC_FUNC_IMPL(__imp__sub_82585268) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825852a4
	if (cr0.eq) goto loc_825852A4;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825852a4
	if (cr6.eq) goto loc_825852A4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825852A4:
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

__attribute__((alias("__imp__sub_825852C0"))) PPC_WEAK_FUNC(sub_825852C0);
PPC_FUNC_IMPL(__imp__sub_825852C0) {
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
	// bl 0x82583d28
	sub_82583D28(ctx, base);
	// clrlwi. r11,r30,31
	r11.u64 = r30.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x825852fc
	if (cr0.eq) goto loc_825852FC;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x825852fc
	if (cr6.eq) goto loc_825852FC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825852FC:
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

__attribute__((alias("__imp__sub_82585318"))) PPC_WEAK_FUNC(sub_82585318);
PPC_FUNC_IMPL(__imp__sub_82585318) {
	PPC_FUNC_PROLOGUE();
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r5,-1
	ctx.r9.s64 = ctx.r5.s64 + -1;
	// addi r11,r4,-1
	r11.s64 = ctx.r4.s64 + -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.r9.u64);
	// slw r9,r10,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// slw r11,r8,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (r11.u8 & 0x3F));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r9,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r9.u64);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lfd f0,-32(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(f0.f64));
	// lfs f0,2552(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + 2552);
	f0.f64 = double(temp.f32);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fdivs f0,f0,f13
	f0.f64 = double(float(f0.f64 / ctx.f13.f64));
	// lfd f13,-24(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f11,f13
	ctx.f11.f64 = double(float(ctx.f13.f64));
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// fsubs f0,f11,f0
	f0.f64 = double(float(ctx.f11.f64 - f0.f64));
	// fcmpu cr6,f1,f0
	cr6.compare(ctx.f1.f64, f0.f64);
	// ble cr6,0x8258538c
	if (!cr6.gt) goto loc_8258538C;
	// fmr f1,f0
	ctx.f1.f64 = f0.f64;
loc_8258538C:
	// fcmpu cr6,f1,f13
	ctx.fpscr.disableFlushMode();
	cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82585398
	if (!cr6.lt) goto loc_82585398;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_82585398:
	// slw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// addi r11,r1,-32
	r11.s64 = ctx.r1.s64 + -32;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f0,f0
	f0.f64 = double(float(f0.f64));
	// fmuls f0,f0,f1
	f0.f64 = double(float(f0.f64 * ctx.f1.f64));
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r11
	PPC_STORE_U32(r11.u32, f0.u32);
	// lwz r3,-32(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825853C8"))) PPC_WEAK_FUNC(sub_825853C8);
PPC_FUNC_IMPL(__imp__sub_825853C8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// lbz r10,164(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 164);
	// lbz r11,164(r28)
	r11.u64 = PPC_LOAD_U8(r28.u32 + 164);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x825853f4
	if (cr6.eq) goto loc_825853F4;
loc_825853EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8258546c
	goto loc_8258546C;
loc_825853F4:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r30,1
	r30.s64 = 1;
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
	// blt cr6,0x82585468
	if (cr6.lt) goto loc_82585468;
	// addi r29,r31,153
	r29.s64 = r31.s64 + 153;
	// subf r27,r31,r28
	r27.s64 = r28.s64 - r31.s64;
loc_8258541C:
	// lbzx r11,r27,r29
	r11.u64 = PPC_LOAD_U8(r27.u32 + r29.u32);
	// lbz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U8(r29.u32 + 0);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825853ec
	if (!cr6.eq) goto loc_825853EC;
	// add r11,r30,r28
	r11.u64 = r30.u64 + r28.u64;
	// add r10,r30,r31
	ctx.r10.u64 = r30.u64 + r31.u64;
	// lbz r11,158(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 158);
	// lbz r10,158(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 158);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x825853ec
	if (!cr6.eq) goto loc_825853EC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x8258541c
	if (!cr6.gt) goto loc_8258541C;
loc_82585468:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8258546C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82585474"))) PPC_WEAK_FUNC(sub_82585474);
PPC_FUNC_IMPL(__imp__sub_82585474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585478"))) PPC_WEAK_FUNC(sub_82585478);
PPC_FUNC_IMPL(__imp__sub_82585478) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
loc_82585490:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x825854d8
	if (cr6.eq) goto loc_825854D8;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// bne cr6,0x825854f0
	if (!cr6.eq) goto loc_825854F0;
loc_825854D8:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82585490
	if (cr6.lt) goto loc_82585490;
	// li r3,1
	ctx.r3.s64 = 1;
loc_825854E8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
loc_825854F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x825854e8
	goto loc_825854E8;
}

__attribute__((alias("__imp__sub_825854F8"))) PPC_WEAK_FUNC(sub_825854F8);
PPC_FUNC_IMPL(__imp__sub_825854F8) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r29,0
	r29.s64 = 0;
	// li r31,0
	r31.s64 = 0;
loc_82585510:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// beq cr6,0x82585538
	if (cr6.eq) goto loc_82585538;
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
loc_82585538:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82585510
	if (cr6.lt) goto loc_82585510;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82585550"))) PPC_WEAK_FUNC(sub_82585550);
PPC_FUNC_IMPL(__imp__sub_82585550) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// li r31,0
	r31.s64 = 0;
loc_82585568:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r3,1
	cr6.compare<int32_t>(ctx.r3.s32, 1, xer);
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,84(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 84);
	// li r6,1
	ctx.r6.s64 = 1;
	// bne cr6,0x825855a8
	if (!cr6.eq) goto loc_825855A8;
	// li r6,0
	ctx.r6.s64 = 0;
loc_825855A8:
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// cmpwi cr6,r31,4
	cr6.compare<int32_t>(r31.s32, 4, xer);
	// blt cr6,0x82585568
	if (cr6.lt) goto loc_82585568;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_825855C4"))) PPC_WEAK_FUNC(sub_825855C4);
PPC_FUNC_IMPL(__imp__sub_825855C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825855C8"))) PPC_WEAK_FUNC(sub_825855C8);
PPC_FUNC_IMPL(__imp__sub_825855C8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lbz r11,128(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825855fc
	if (cr6.eq) goto loc_825855FC;
	// lbz r11,129(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 129);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825855fc
	if (cr6.eq) goto loc_825855FC;
	// lbz r11,130(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 130);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x825855fc
	if (cr6.eq) goto loc_825855FC;
	// lbz r11,131(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 131);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_825855FC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82585604"))) PPC_WEAK_FUNC(sub_82585604);
PPC_FUNC_IMPL(__imp__sub_82585604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585608"))) PPC_WEAK_FUNC(sub_82585608);
PPC_FUNC_IMPL(__imp__sub_82585608) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCRegister r11{};
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mulli r9,r3,52
	ctx.r9.s64 = ctx.r3.s64 * 52;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// addi r11,r11,48
	r11.s64 = r11.s64 + 48;
	// addi r10,r10,8704
	ctx.r10.s64 = ctx.r10.s64 + 8704;
	// lwzx r11,r9,r11
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r10
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r10.u32);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82585634"))) PPC_WEAK_FUNC(sub_82585634);
PPC_FUNC_IMPL(__imp__sub_82585634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585638"))) PPC_WEAK_FUNC(sub_82585638);
PPC_FUNC_IMPL(__imp__sub_82585638) {
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
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// li r4,964
	ctx.r4.s64 = 964;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r3,428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// bl 0x8254b770
	sub_8254B770(ctx, base);
	// lwz r11,428(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 428);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r30,r3,4
	r30.s64 = ctx.r3.s64 + 4;
	// li r5,960
	ctx.r5.s64 = 960;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x8239ce50
	sub_8239CE50(ctx, base);
	// lwz r11,352(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// stw r11,224(r30)
	PPC_STORE_U32(r30.u32 + 224, r11.u32);
	// lwz r11,352(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 352);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,352(r31)
	PPC_STORE_U32(r31.u32 + 352, r11.u32);
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

__attribute__((alias("__imp__sub_825856AC"))) PPC_WEAK_FUNC(sub_825856AC);
PPC_FUNC_IMPL(__imp__sub_825856AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825856B0"))) PPC_WEAK_FUNC(sub_825856B0);
PPC_FUNC_IMPL(__imp__sub_825856B0) {
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
	// li r29,0
	r29.s64 = 0;
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r26,r11,9048
	r26.s64 = r11.s64 + 9048;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r25,r11,9008
	r25.s64 = r11.s64 + 9008;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r28,r11,8972
	r28.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r24,r11,8996
	r24.s64 = r11.s64 + 8996;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r27,r11,8896
	r27.s64 = r11.s64 + 8896;
	// ble cr6,0x825857ac
	if (!cr6.gt) goto loc_825857AC;
	// addi r30,r31,28
	r30.s64 = r31.s64 + 28;
loc_825856FC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82585720
	if (!cr6.eq) goto loc_82585720;
	// li r7,136
	ctx.r7.s64 = 136;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82585720:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x8258574c
	if (cr6.eq) goto loc_8258574C;
	// li r7,137
	ctx.r7.s64 = 137;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8258574C:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82585784
	if (cr6.eq) goto loc_82585784;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82585784
	if (cr6.eq) goto loc_82585784;
	// li r7,139
	ctx.r7.s64 = 139;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82585784:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,16(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x825856fc
	if (cr6.lt) goto loc_825856FC;
loc_825857AC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// li r29,1
	r29.s64 = 1;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// ble cr6,0x8258589c
	if (!cr6.gt) goto loc_8258589C;
	// addi r30,r31,32
	r30.s64 = r31.s64 + 32;
loc_825857C8:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825857ec
	if (!cr6.eq) goto loc_825857EC;
	// li r7,145
	ctx.r7.s64 = 145;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825857EC:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 52);
	// lwz r11,32(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 32);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82585818
	if (cr6.eq) goto loc_82585818;
	// li r7,146
	ctx.r7.s64 = 146;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82585818:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// cmpw cr6,r10,r9
	cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, xer);
	// beq cr6,0x82585850
	if (cr6.eq) goto loc_82585850;
	// lwz r11,12(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// beq cr6,0x82585850
	if (cr6.eq) goto loc_82585850;
	// li r7,148
	ctx.r7.s64 = 148;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82585850:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82585880
	if (!cr0.eq) goto loc_82585880;
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
loc_82585880:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r30,4
	r30.s64 = r30.s64 + 4;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmpw cr6,r29,r11
	cr6.compare<int32_t>(r29.s32, r11.s32, xer);
	// blt cr6,0x825857c8
	if (cr6.lt) goto loc_825857C8;
loc_8258589C:
	// lwz r11,948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 948);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x825858c4
	if (!cr6.eq) goto loc_825858C4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,153
	ctx.r7.s64 = 153;
	// addi r5,r11,8976
	ctx.r5.s64 = r11.s64 + 8976;
	// mr r6,r27
	ctx.r6.u64 = r27.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_825858C4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd38
	return;
}

__attribute__((alias("__imp__sub_825858D0"))) PPC_WEAK_FUNC(sub_825858D0);
PPC_FUNC_IMPL(__imp__sub_825858D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,58
	r11.s64 = ctx.r4.s64 + 58;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x825858ec
	if (cr0.eq) goto loc_825858EC;
	// lwz r11,80(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 80);
	// b 0x825858f8
	goto loc_825858F8;
loc_825858EC:
	// addi r11,r4,20
	r11.s64 = ctx.r4.s64 + 20;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
loc_825858F8:
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// addi r10,r10,26496
	ctx.r10.s64 = ctx.r10.s64 + 26496;
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// lbzx r11,r11,r10
	r11.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	cr6.compare<int32_t>(r11.s32, 1, xer);
	// beq cr6,0x82585924
	if (cr6.eq) goto loc_82585924;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82585924:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258592C"))) PPC_WEAK_FUNC(sub_8258592C);
PPC_FUNC_IMPL(__imp__sub_8258592C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585930"))) PPC_WEAK_FUNC(sub_82585930);
PPC_FUNC_IMPL(__imp__sub_82585930) {
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
	// mflr r12
	// bl 0x8239bcf4
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// li r11,0
	r11.s64 = 0;
	// li r31,-1
	r31.s64 = -1;
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r9,r10,8888
	ctx.r9.s64 = ctx.r10.s64 + 8888;
	// addi r30,r3,12
	r30.s64 = ctx.r3.s64 + 12;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, r11.u32);
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, r11.u32);
	// addi r6,r3,152
	ctx.r6.s64 = ctx.r3.s64 + 152;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, r11.u32);
	// addi r5,r3,158
	ctx.r5.s64 = ctx.r3.s64 + 158;
	// stw r31,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// lwz r8,-8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r28,4(r9)
	r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r29,0(r9)
	r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r8,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r8.u32);
	// lwz r8,-16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// stwbrx r7,0,r30
	PPC_STORE_U32(r30.u32, __builtin_bswap32(ctx.r7.u32));
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, r11.u32);
	// stw r11,200(r3)
	PPC_STORE_U32(ctx.r3.u32 + 200, r11.u32);
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, r11.u8);
	// stw r8,944(r3)
	PPC_STORE_U32(ctx.r3.u32 + 944, ctx.r8.u32);
	// lis r8,-32138
	ctx.r8.s64 = -2106195968;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, r11.u8);
	// addi r30,r8,-3664
	r30.s64 = ctx.r8.s64 + -3664;
loc_825859A8:
	// addi r7,r10,14
	ctx.r7.s64 = ctx.r10.s64 + 14;
	// addi r27,r10,20
	r27.s64 = ctx.r10.s64 + 20;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r27,r27,2,0,29
	r27.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r31,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, r31.u32);
	// stwx r4,r27,r3
	PPC_STORE_U32(r27.u32 + ctx.r3.u32, ctx.r4.u32);
	// lwz r7,-16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -16);
	// stwx r7,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r7.u32);
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mulli r7,r7,52
	ctx.r7.s64 = ctx.r7.s64 * 52;
	// lwzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r30.u32);
	// rlwinm. r7,r7,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x825859f8
	if (cr0.eq) goto loc_825859F8;
	// cmpwi cr6,r10,1
	cr6.compare<int32_t>(ctx.r10.s32, 1, xer);
	// bne cr6,0x825859f4
	if (!cr6.eq) goto loc_825859F4;
	// stw r28,132(r3)
	PPC_STORE_U32(ctx.r3.u32 + 132, r28.u32);
	// b 0x825859f8
	goto loc_825859F8;
loc_825859F4:
	// stwx r29,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r29.u32);
loc_825859F8:
	// addi r8,r10,7
	ctx.r8.s64 = ctx.r10.s64 + 7;
	// stbx r11,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, r11.u8);
	// addi r7,r10,50
	ctx.r7.s64 = ctx.r10.s64 + 50;
	// stbx r11,r5,r10
	PPC_STORE_U8(ctx.r5.u32 + ctx.r10.u32, r11.u8);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,6
	cr6.compare<int32_t>(ctx.r10.s32, 6, xer);
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r11.u32);
	// stwx r11,r7,r3
	PPC_STORE_U32(ctx.r7.u32 + ctx.r3.u32, r11.u32);
	// blt cr6,0x825859a8
	if (cr6.lt) goto loc_825859A8;
	// addi r7,r3,364
	ctx.r7.s64 = ctx.r3.s64 + 364;
	// stb r11,164(r3)
	PPC_STORE_U8(ctx.r3.u32 + 164, r11.u8);
	// addi r6,r3,232
	ctx.r6.s64 = ctx.r3.s64 + 232;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r9,3
	ctx.r9.s64 = 3;
loc_82585A38:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r9,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r9.u32);
	// bne 0x82585a38
	if (!cr0.eq) goto loc_82585A38;
	// addi r8,r3,928
	ctx.r8.s64 = ctx.r3.s64 + 928;
	// addi r10,r3,900
	ctx.r10.s64 = ctx.r3.s64 + 900;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82585A6C:
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, r11.u32);
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82585a6c
	if (!cr0.eq) goto loc_82585A6C;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82585A8C"))) PPC_WEAK_FUNC(sub_82585A8C);
PPC_FUNC_IMPL(__imp__sub_82585A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585A90"))) PPC_WEAK_FUNC(sub_82585A90);
PPC_FUNC_IMPL(__imp__sub_82585A90) {
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
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r31,6
	cr6.compare<int32_t>(r31.s32, 6, xer);
	// blt cr6,0x82585ad4
	if (cr6.lt) goto loc_82585AD4;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,251
	ctx.r7.s64 = 251;
	// addi r6,r11,8896
	ctx.r6.s64 = r11.s64 + 8896;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,9132
	ctx.r5.s64 = r11.s64 + 9132;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82585AD4:
	// addi r11,r31,20
	r11.s64 = r31.s64 + 20;
	// lwz r10,32(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// addi r9,r31,14
	ctx.r9.s64 = r31.s64 + 14;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,7
	ctx.r8.s64 = r31.s64 + 7;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r10.u32);
	// lwz r11,12(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 12);
	// stwx r29,r8,r30
	PPC_STORE_U32(ctx.r8.u32 + r30.u32, r29.u32);
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + r30.u32, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82585B08"))) PPC_WEAK_FUNC(sub_82585B08);
PPC_FUNC_IMPL(__imp__sub_82585B08) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// std r7,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r7.u64);
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// std r8,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r8.u64);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// std r6,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r6.u64);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// addi r11,r11,7584
	r11.s64 = r11.s64 + 7584;
	// lwz r3,8872(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8872);
	// addi r10,r1,216
	ctx.r10.s64 = ctx.r1.s64 + 216;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_82585B84:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// blt cr6,0x82585c0c
	if (cr6.lt) goto loc_82585C0C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
loc_82585B94:
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// beq cr6,0x82585be8
	if (cr6.eq) goto loc_82585BE8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r27,0(r10)
	r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r27,r31
	cr6.compare<uint32_t>(r27.u32, r31.u32, xer);
	// bne cr6,0x82585bc8
	if (!cr6.eq) goto loc_82585BC8;
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82585bcc
	if (cr6.eq) goto loc_82585BCC;
loc_82585BC8:
	// li r11,0
	r11.s64 = 0;
loc_82585BCC:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82585c04
	if (!cr0.eq) goto loc_82585C04;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r7,r6
	cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, xer);
	// ble cr6,0x82585b94
	if (!cr6.gt) goto loc_82585B94;
	// b 0x82585c0c
	goto loc_82585C0C;
loc_82585BE8:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stbx r10,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r10.u8);
	// b 0x82585c0c
	goto loc_82585C0C;
loc_82585C04:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stbx r7,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u8);
loc_82585C0C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpwi cr6,r8,4
	cr6.compare<int32_t>(ctx.r8.s32, 4, xer);
	// blt cr6,0x82585b84
	if (cr6.lt) goto loc_82585B84;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82585cb0
	if (!cr6.gt) goto loc_82585CB0;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
loc_82585C30:
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// ble cr6,0x82585ca4
	if (!cr6.gt) goto loc_82585CA4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
loc_82585C40:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// bne cr6,0x82585c60
	if (!cr6.eq) goto loc_82585C60;
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
loc_82585C60:
	// subfc r11,r7,r11
	xer.ca = r11.u32 >= ctx.r7.u32;
	r11.s64 = r11.s64 - ctx.r7.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82585c94
	if (cr0.eq) goto loc_82585C94;
	// addi r11,r1,84
	r11.s64 = ctx.r1.s64 + 84;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// add r11,r5,r11
	r11.u64 = ctx.r5.u64 + r11.u64;
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 1);
	// stb r7,1(r11)
	PPC_STORE_U8(r11.u32 + 1, ctx.r7.u8);
	// stb r9,0(r11)
	PPC_STORE_U8(r11.u32 + 0, ctx.r9.u8);
loc_82585C94:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r4
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, xer);
	// blt cr6,0x82585c40
	if (cr6.lt) goto loc_82585C40;
loc_82585CA4:
	// addic. r3,r3,-1
	xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// bne 0x82585c30
	if (!cr0.eq) goto loc_82585C30;
loc_82585CB0:
	// li r11,0
	r11.s64 = 0;
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// ble cr6,0x82585cdc
	if (!cr6.gt) goto loc_82585CDC;
loc_82585CBC:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpw cr6,r11,r6
	cr6.compare<int32_t>(r11.s32, ctx.r6.s32, xer);
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// blt cr6,0x82585cbc
	if (cr6.lt) goto loc_82585CBC;
loc_82585CDC:
	// li r11,0
	r11.s64 = 0;
loc_82585CE0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r10.u32);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmpwi cr6,r11,4
	cr6.compare<int32_t>(r11.s32, 4, xer);
	// blt cr6,0x82585ce0
	if (cr6.lt) goto loc_82585CE0;
	// lwz r11,952(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 952);
	// li r31,0
	r31.s64 = 0;
	// cmpwi cr6,r6,1
	cr6.compare<int32_t>(ctx.r6.s32, 1, xer);
	// lbz r11,369(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 369);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82585df4
	if (cr0.eq) goto loc_82585DF4;
	// beq cr6,0x82585dcc
	if (cr6.eq) goto loc_82585DCC;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// beq cr6,0x82585db0
	if (cr6.eq) goto loc_82585DB0;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// beq cr6,0x82585d8c
	if (cr6.eq) goto loc_82585D8C;
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// beq cr6,0x82585d60
	if (cr6.eq) goto loc_82585D60;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,385
	ctx.r7.s64 = 385;
	// addi r6,r11,8896
	ctx.r6.s64 = r11.s64 + 8896;
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
	// b 0x82585de0
	goto loc_82585DE0;
loc_82585D60:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x82574cc8
	sub_82574CC8(ctx, base);
	// b 0x82585ddc
	goto loc_82585DDC;
loc_82585D8C:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x82574ca8
	sub_82574CA8(ctx, base);
	// b 0x82585ddc
	goto loc_82585DDC;
loc_82585DB0:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x82574c88
	sub_82574C88(ctx, base);
	// b 0x82585ddc
	goto loc_82585DDC;
loc_82585DCC:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x82574c68
	sub_82574C68(ctx, base);
loc_82585DDC:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82585DE0:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82564ad0
	sub_82564AD0(ctx, base);
	// b 0x82585ec8
	goto loc_82585EC8;
loc_82585DF4:
	// beq cr6,0x82585ea4
	if (cr6.eq) goto loc_82585EA4;
	// cmpwi cr6,r6,2
	cr6.compare<int32_t>(ctx.r6.s32, 2, xer);
	// beq cr6,0x82585e88
	if (cr6.eq) goto loc_82585E88;
	// cmpwi cr6,r6,3
	cr6.compare<int32_t>(ctx.r6.s32, 3, xer);
	// beq cr6,0x82585e64
	if (cr6.eq) goto loc_82585E64;
	// cmpwi cr6,r6,4
	cr6.compare<int32_t>(ctx.r6.s32, 4, xer);
	// beq cr6,0x82585e38
	if (cr6.eq) goto loc_82585E38;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,410
	ctx.r7.s64 = 410;
	// addi r6,r11,8896
	ctx.r6.s64 = r11.s64 + 8896;
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
	// b 0x82585eb8
	goto loc_82585EB8;
loc_82585E38:
	// lwz r11,108(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// ld r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x82576630
	sub_82576630(ctx, base);
	// b 0x82585eb4
	goto loc_82585EB4;
loc_82585E64:
	// lwz r11,104(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x82576610
	sub_82576610(ctx, base);
	// b 0x82585eb4
	goto loc_82585EB4;
loc_82585E88:
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// ld r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x825765f0
	sub_825765F0(ctx, base);
	// b 0x82585eb4
	goto loc_82585EB4;
loc_82585EA4:
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 172);
	// ld r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// bl 0x825765d0
	sub_825765D0(ctx, base);
loc_82585EB4:
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
loc_82585EB8:
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
loc_82585EC8:
	// addi r11,r28,32
	r11.s64 = r28.s64 + 32;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r29
	PPC_STORE_U32(r11.u32 + r29.u32, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x8239bd44
	return;
}

__attribute__((alias("__imp__sub_82585EE0"))) PPC_WEAK_FUNC(sub_82585EE0);
PPC_FUNC_IMPL(__imp__sub_82585EE0) {
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
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r28)
	PPC_STORE_U32(r28.u32 + 228, r11.u32);
	// bl 0x82582910
	sub_82582910(ctx, base);
	// lwz r11,228(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 228);
	// rlwinm. r11,r11,31,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82585f78
	if (cr0.eq) goto loc_82585F78;
	// lwz r11,952(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 952);
	// li r30,0
	r30.s64 = 0;
	// lwz r11,1712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// lwz r31,96(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82585f78
	if (cr0.eq) goto loc_82585F78;
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bge cr6,0x82585f40
	if (!cr6.lt) goto loc_82585F40;
loc_82585F34:
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r3,r11,r29
	ctx.r3.u64 = r11.u64 + r29.u64;
	// b 0x82585f4c
	goto loc_82585F4C;
loc_82585F40:
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582bd0
	sub_82582BD0(ctx, base);
loc_82585F4C:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r28
	cr6.compare<uint32_t>(r11.u32, r28.u32, xer);
	// bne cr6,0x82585f64
	if (!cr6.eq) goto loc_82585F64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82582b08
	sub_82582B08(ctx, base);
loc_82585F64:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// blt cr6,0x82585f34
	if (cr6.lt) goto loc_82585F34;
loc_82585F78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82585F80"))) PPC_WEAK_FUNC(sub_82585F80);
PPC_FUNC_IMPL(__imp__sub_82585F80) {
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
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// cmpwi cr6,r11,11
	cr6.compare<int32_t>(r11.s32, 11, xer);
	// bne cr6,0x82585fb4
	if (!cr6.eq) goto loc_82585FB4;
	// lwz r11,952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// lwz r11,1712(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1712);
	// lwz r3,172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 172);
	// bl 0x825745c0
	sub_825745C0(ctx, base);
loc_82585FB4:
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// bl 0x82582910
	sub_82582910(ctx, base);
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

__attribute__((alias("__imp__sub_82585FDC"))) PPC_WEAK_FUNC(sub_82585FDC);
PPC_FUNC_IMPL(__imp__sub_82585FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82585FE0"))) PPC_WEAK_FUNC(sub_82585FE0);
PPC_FUNC_IMPL(__imp__sub_82585FE0) {
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
	// bl 0x82582910
	sub_82582910(ctx, base);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// rlwinm r11,r11,0,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
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

__attribute__((alias("__imp__sub_82586018"))) PPC_WEAK_FUNC(sub_82586018);
PPC_FUNC_IMPL(__imp__sub_82586018) {
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
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-137
	r11.s64 = r11.s64 + -137;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82586048
	if (cr0.eq) goto loc_82586048;
	// bl 0x82577898
	sub_82577898(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne 0x8258604c
	if (!cr0.eq) goto loc_8258604C;
loc_82586048:
	// li r11,0
	r11.s64 = 0;
loc_8258604C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586060"))) PPC_WEAK_FUNC(sub_82586060);
PPC_FUNC_IMPL(__imp__sub_82586060) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,956(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 956);
	// lwz r10,2152(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2152);
	// subf. r11,r10,r11
	r11.s64 = r11.s64 - ctx.r10.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bge 0x82586074
	if (!cr0.lt) goto loc_82586074;
	// li r11,0
	r11.s64 = 0;
loc_82586074:
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586084"))) PPC_WEAK_FUNC(sub_82586084);
PPC_FUNC_IMPL(__imp__sub_82586084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586088"))) PPC_WEAK_FUNC(sub_82586088);
PPC_FUNC_IMPL(__imp__sub_82586088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// lis r10,-32245
	ctx.r10.s64 = -2113208320;
	// bne cr6,0x825860a4
	if (!cr6.eq) goto loc_825860A4;
	// addi r10,r10,8872
	ctx.r10.s64 = ctx.r10.s64 + 8872;
	// lwz r11,128(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825860b4
	goto loc_825860B4;
loc_825860A4:
	// addi r11,r4,32
	r11.s64 = ctx.r4.s64 + 32;
	// lwz r10,8872(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8872);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
loc_825860B4:
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

__attribute__((alias("__imp__sub_825860CC"))) PPC_WEAK_FUNC(sub_825860CC);
PPC_FUNC_IMPL(__imp__sub_825860CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825860D0"))) PPC_WEAK_FUNC(sub_825860D0);
PPC_FUNC_IMPL(__imp__sub_825860D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,1712(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1712);
	// lbz r11,2144(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 2144);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82586168
	if (cr0.eq) goto loc_82586168;
	// cmpwi cr6,r3,20
	cr6.compare<int32_t>(ctx.r3.s32, 20, xer);
	// bgt cr6,0x82586118
	if (cr6.gt) goto loc_82586118;
	// cmpwi cr6,r3,19
	cr6.compare<int32_t>(ctx.r3.s32, 19, xer);
	// bge cr6,0x82586140
	if (!cr6.lt) goto loc_82586140;
	// cmpwi cr6,r3,4
	cr6.compare<int32_t>(ctx.r3.s32, 4, xer);
	// beq cr6,0x82586140
	if (cr6.eq) goto loc_82586140;
	// ble cr6,0x82586160
	if (!cr6.gt) goto loc_82586160;
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x82586148
	if (cr6.eq) goto loc_82586148;
	// cmpwi cr6,r3,9
	cr6.compare<int32_t>(ctx.r3.s32, 9, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// b 0x82586160
	goto loc_82586160;
loc_82586118:
	// cmpwi cr6,r3,33
	cr6.compare<int32_t>(ctx.r3.s32, 33, xer);
	// bgt cr6,0x82586150
	if (cr6.gt) goto loc_82586150;
	// cmpwi cr6,r3,32
	cr6.compare<int32_t>(ctx.r3.s32, 32, xer);
	// bge cr6,0x82586140
	if (!cr6.lt) goto loc_82586140;
	// cmpwi cr6,r3,21
	cr6.compare<int32_t>(ctx.r3.s32, 21, xer);
	// blt cr6,0x82586160
	if (cr6.lt) goto loc_82586160;
	// cmpwi cr6,r3,22
	cr6.compare<int32_t>(ctx.r3.s32, 22, xer);
	// ble cr6,0x82586148
	if (!cr6.gt) goto loc_82586148;
	// cmpwi cr6,r3,24
	cr6.compare<int32_t>(ctx.r3.s32, 24, xer);
	// bgt cr6,0x82586160
	if (cr6.gt) goto loc_82586160;
loc_82586140:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82586148:
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
loc_82586150:
	// cmpwi cr6,r3,43
	cr6.compare<int32_t>(ctx.r3.s32, 43, xer);
	// blt cr6,0x82586160
	if (cr6.lt) goto loc_82586160;
	// cmpwi cr6,r3,44
	cr6.compare<int32_t>(ctx.r3.s32, 44, xer);
	// blelr cr6
	if (!cr6.gt) return;
loc_82586160:
	// li r3,48
	ctx.r3.s64 = 48;
	// blr 
	return;
loc_82586168:
	// cmpwi cr6,r3,7
	cr6.compare<int32_t>(ctx.r3.s32, 7, xer);
	// beq cr6,0x8258617c
	if (cr6.eq) goto loc_8258617C;
	// cmpwi cr6,r3,8
	cr6.compare<int32_t>(ctx.r3.s32, 8, xer);
	// beq cr6,0x82586148
	if (cr6.eq) goto loc_82586148;
	// b 0x82586160
	goto loc_82586160;
loc_8258617C:
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586184"))) PPC_WEAK_FUNC(sub_82586184);
PPC_FUNC_IMPL(__imp__sub_82586184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586188"))) PPC_WEAK_FUNC(sub_82586188);
PPC_FUNC_IMPL(__imp__sub_82586188) {
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
	// addi r8,r4,58
	ctx.r8.s64 = ctx.r4.s64 + 58;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// beq cr6,0x825861e4
	if (cr6.eq) goto loc_825861E4;
loc_825861B4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x825861e4
	if (!cr0.eq) goto loc_825861E4;
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x825861d0
	if (cr0.eq) goto loc_825861D0;
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// beq cr6,0x825861f8
	if (cr6.eq) goto loc_825861F8;
loc_825861D0:
	// lwz r11,8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x825861b4
	if (!cr0.eq) goto loc_825861B4;
loc_825861E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825861E8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
loc_825861F8:
	// lwz r11,20(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bne cr6,0x82586210
	if (!cr6.eq) goto loc_82586210;
	// lwz r11,228(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8258624c
	if (!cr0.eq) goto loc_8258624C;
loc_82586210:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,52(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 52);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x8258624c
	if (!cr0.eq) goto loc_8258624C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,647
	ctx.r7.s64 = 647;
	// addi r6,r11,8896
	ctx.r6.s64 = r11.s64 + 8896;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,9152
	ctx.r5.s64 = r11.s64 + 9152;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8258624C:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x825861e8
	goto loc_825861E8;
}

__attribute__((alias("__imp__sub_82586254"))) PPC_WEAK_FUNC(sub_82586254);
PPC_FUNC_IMPL(__imp__sub_82586254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586258"))) PPC_WEAK_FUNC(sub_82586258);
PPC_FUNC_IMPL(__imp__sub_82586258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
	// stw r6,56(r11)
	PPC_STORE_U32(r11.u32 + 56, ctx.r6.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// lwz r10,228(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 228);
	// stw r5,80(r11)
	PPC_STORE_U32(r11.u32 + 80, ctx.r5.u32);
	// ori r10,r10,66
	ctx.r10.u64 = ctx.r10.u64 | 66;
	// stw r10,228(r11)
	PPC_STORE_U32(r11.u32 + 228, ctx.r10.u32);
	// b 0x82564bd0
	sub_82564BD0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82586284"))) PPC_WEAK_FUNC(sub_82586284);
PPC_FUNC_IMPL(__imp__sub_82586284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586288"))) PPC_WEAK_FUNC(sub_82586288);
PPC_FUNC_IMPL(__imp__sub_82586288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// stw r4,168(r3)
	PPC_STORE_U32(ctx.r3.u32 + 168, ctx.r4.u32);
	// stb r11,132(r3)
	PPC_STORE_U8(ctx.r3.u32 + 132, r11.u8);
	// stb r11,133(r3)
	PPC_STORE_U8(ctx.r3.u32 + 133, r11.u8);
	// stb r11,134(r3)
	PPC_STORE_U8(ctx.r3.u32 + 134, r11.u8);
	// stb r11,135(r3)
	PPC_STORE_U8(ctx.r3.u32 + 135, r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825862A4"))) PPC_WEAK_FUNC(sub_825862A4);
PPC_FUNC_IMPL(__imp__sub_825862A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825862A8"))) PPC_WEAK_FUNC(sub_825862A8);
PPC_FUNC_IMPL(__imp__sub_825862A8) {
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
	// lwz r3,180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 180);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82586308
	if (!cr0.eq) goto loc_82586308;
	// lwz r31,236(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 236);
	// b 0x825862f4
	goto loc_825862F4;
loc_825862D4:
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,68(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 68);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82586300
	if (cr0.eq) goto loc_82586300;
	// lwz r11,236(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// lwz r31,236(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 236);
loc_825862F4:
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 236);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x825862d4
	if (!cr0.eq) goto loc_825862D4;
loc_82586300:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r31,180(r30)
	PPC_STORE_U32(r30.u32 + 180, r31.u32);
loc_82586308:
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

__attribute__((alias("__imp__sub_82586320"))) PPC_WEAK_FUNC(sub_82586320);
PPC_FUNC_IMPL(__imp__sub_82586320) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r11,-32171
	r11.s64 = -2108358656;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r7,r11,-15800
	ctx.r7.s64 = r11.s64 + -15800;
	// lwz r8,952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// lwz r6,360(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 360);
	// lwz r3,512(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 512);
	// bl 0x825613c0
	sub_825613C0(ctx, base);
	// lwz r8,952(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// lis r11,-32171
	r11.s64 = -2108358656;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r4,172(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 172);
	// addi r7,r11,-15800
	ctx.r7.s64 = r11.s64 + -15800;
	// lwz r6,360(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 360);
	// lwz r3,512(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 512);
	// bl 0x82561860
	sub_82561860(ctx, base);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// srawi r10,r10,2
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + xer.ca;
	xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// lwz r11,168(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 168);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_825863A4"))) PPC_WEAK_FUNC(sub_825863A4);
PPC_FUNC_IMPL(__imp__sub_825863A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825863A8"))) PPC_WEAK_FUNC(sub_825863A8);
PPC_FUNC_IMPL(__imp__sub_825863A8) {
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
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lis r11,-32138
	r11.s64 = -2106195968;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// cmpwi r11,0
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,8896
	r29.s64 = r11.s64 + 8896;
	// bne 0x82586428
	if (!cr0.eq) goto loc_82586428;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1432
	ctx.r7.s64 = 1432;
	// addi r5,r11,9280
	ctx.r5.s64 = r11.s64 + 9280;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82586428:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258649c
	if (cr0.eq) goto loc_8258649C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmpwi cr6,r11,52
	cr6.compare<int32_t>(r11.s32, 52, xer);
	// beq cr6,0x82586458
	if (cr6.eq) goto loc_82586458;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1434
	ctx.r7.s64 = 1434;
	// addi r5,r11,9256
	ctx.r5.s64 = r11.s64 + 9256;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82586458:
	// li r11,53
	r11.s64 = 53;
	// lbz r10,153(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 153);
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// lbz r11,154(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 154);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// stb r11,154(r31)
	PPC_STORE_U8(r31.u32 + 154, r11.u8);
	// beq cr6,0x8258649c
	if (cr6.eq) goto loc_8258649C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1438
	ctx.r7.s64 = 1438;
	// addi r5,r11,9220
	ctx.r5.s64 = r11.s64 + 9220;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8258649C:
	// clrlwi r11,r27,24
	r11.u64 = r27.u32 & 0xFF;
	// cmpwi cr6,r26,2
	cr6.compare<int32_t>(r26.s32, 2, xer);
	// stb r11,132(r31)
	PPC_STORE_U8(r31.u32 + 132, r11.u8);
	// stb r11,133(r31)
	PPC_STORE_U8(r31.u32 + 133, r11.u8);
	// stb r11,134(r31)
	PPC_STORE_U8(r31.u32 + 134, r11.u8);
	// stb r11,135(r31)
	PPC_STORE_U8(r31.u32 + 135, r11.u8);
	// bne cr6,0x825864cc
	if (!cr6.eq) goto loc_825864CC;
	// clrlwi r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	// stb r11,136(r31)
	PPC_STORE_U8(r31.u32 + 136, r11.u8);
	// stb r11,137(r31)
	PPC_STORE_U8(r31.u32 + 137, r11.u8);
	// stb r11,138(r31)
	PPC_STORE_U8(r31.u32 + 138, r11.u8);
	// stb r11,139(r31)
	PPC_STORE_U8(r31.u32 + 139, r11.u8);
loc_825864CC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x8239bd3c
	return;
}

__attribute__((alias("__imp__sub_825864D4"))) PPC_WEAK_FUNC(sub_825864D4);
PPC_FUNC_IMPL(__imp__sub_825864D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825864D8"))) PPC_WEAK_FUNC(sub_825864D8);
PPC_FUNC_IMPL(__imp__sub_825864D8) {
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
	// lis r11,-32138
	r11.s64 = -2106195968;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3664
	r11.s64 = r11.s64 + -3664;
	// addi r10,r11,4
	ctx.r10.s64 = r11.s64 + 4;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// mulli r9,r11,52
	ctx.r9.s64 = r11.s64 * 52;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,-53
	r11.s64 = r11.s64 + -53;
	// cmpwi r10,0
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// clrlwi r28,r11,24
	r28.u64 = r11.u32 & 0xFF;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r30,r11,8972
	r30.s64 = r11.s64 + 8972;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r29,r11,8896
	r29.s64 = r11.s64 + 8896;
	// bne 0x82586548
	if (!cr0.eq) goto loc_82586548;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1465
	ctx.r7.s64 = 1465;
	// addi r5,r11,9280
	ctx.r5.s64 = r11.s64 + 9280;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82586548:
	// clrlwi. r11,r28,24
	r11.u64 = r28.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x8258658c
	if (cr0.eq) goto loc_8258658C;
	// lbz r11,153(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 153);
	// lbz r10,154(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 154);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x8258657c
	if (cr6.eq) goto loc_8258657C;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,1468
	ctx.r7.s64 = 1468;
	// addi r5,r11,9220
	ctx.r5.s64 = r11.s64 + 9220;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_8258657C:
	// lbz r11,154(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 154);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// stb r11,154(r31)
	PPC_STORE_U8(r31.u32 + 154, r11.u8);
loc_8258658C:
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x8239bd48
	return;
}

__attribute__((alias("__imp__sub_82586598"))) PPC_WEAK_FUNC(sub_82586598);
PPC_FUNC_IMPL(__imp__sub_82586598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,-4384
	ctx.r10.s64 = r11.s64 + -4384;
	// li r11,0
	r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, r11.u32);
	// lwz r10,352(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 352);
	// stw r10,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r10.u32);
	// lwz r10,352(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 352);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,352(r5)
	PPC_STORE_U32(ctx.r5.u32 + 352, ctx.r10.u32);
	// stw r11,892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 892, r11.u32);
	// stw r11,948(r3)
	PPC_STORE_U32(ctx.r3.u32 + 948, r11.u32);
	// stw r5,952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 952, ctx.r5.u32);
	// stw r11,956(r3)
	PPC_STORE_U32(ctx.r3.u32 + 956, r11.u32);
	// stw r9,228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 228, ctx.r9.u32);
	// b 0x82585930
	sub_82585930(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825865E4"))) PPC_WEAK_FUNC(sub_825865E4);
PPC_FUNC_IMPL(__imp__sub_825865E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825865E8"))) PPC_WEAK_FUNC(sub_825865E8);
PPC_FUNC_IMPL(__imp__sub_825865E8) {
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
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r11,952(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 952);
	// lbz r11,369(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 369);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82586630
	if (cr0.eq) goto loc_82586630;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r7,184
	ctx.r7.s64 = 184;
	// addi r6,r11,8896
	ctx.r6.s64 = r11.s64 + 8896;
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r5,r11,-7584
	ctx.r5.s64 = r11.s64 + -7584;
	// lis r11,-32246
	r11.s64 = -2113273856;
	// addi r4,r11,8972
	ctx.r4.s64 = r11.s64 + 8972;
	// bl 0x8249d0e0
	sub_8249D0E0(ctx, base);
loc_82586630:
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 16);
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// ble cr6,0x82586690
	if (!cr6.gt) goto loc_82586690;
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// bne cr6,0x82586690
	if (!cr6.eq) goto loc_82586690;
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
	// cmpw cr6,r30,r3
	cr6.compare<int32_t>(r30.s32, ctx.r3.s32, xer);
	// ble cr6,0x82586690
	if (!cr6.gt) goto loc_82586690;
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
loc_82586690:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82586698"))) PPC_WEAK_FUNC(sub_82586698);
PPC_FUNC_IMPL(__imp__sub_82586698) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// stfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f2,92(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f3,100(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82585b08
	sub_82585B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825866EC"))) PPC_WEAK_FUNC(sub_825866EC);
PPC_FUNC_IMPL(__imp__sub_825866EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825866F0"))) PPC_WEAK_FUNC(sub_825866F0);
PPC_FUNC_IMPL(__imp__sub_825866F0) {
	PPC_FUNC_PROLOGUE();
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
	// li r11,1
	r11.s64 = 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// ld r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82585b08
	sub_82585B08(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586744"))) PPC_WEAK_FUNC(sub_82586744);
PPC_FUNC_IMPL(__imp__sub_82586744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586748"))) PPC_WEAK_FUNC(sub_82586748);
PPC_FUNC_IMPL(__imp__sub_82586748) {
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
	// beq 0x8258677c
	if (cr0.eq) goto loc_8258677C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_8258677C:
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

__attribute__((alias("__imp__sub_82586794"))) PPC_WEAK_FUNC(sub_82586794);
PPC_FUNC_IMPL(__imp__sub_82586794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586798"))) PPC_WEAK_FUNC(sub_82586798);
PPC_FUNC_IMPL(__imp__sub_82586798) {
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
	// beq 0x825867cc
	if (cr0.eq) goto loc_825867CC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825867CC:
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

__attribute__((alias("__imp__sub_825867E4"))) PPC_WEAK_FUNC(sub_825867E4);
PPC_FUNC_IMPL(__imp__sub_825867E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825867E8"))) PPC_WEAK_FUNC(sub_825867E8);
PPC_FUNC_IMPL(__imp__sub_825867E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825867F0"))) PPC_WEAK_FUNC(sub_825867F0);
PPC_FUNC_IMPL(__imp__sub_825867F0) {
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
	// beq 0x82586824
	if (cr0.eq) goto loc_82586824;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82586824:
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

__attribute__((alias("__imp__sub_8258683C"))) PPC_WEAK_FUNC(sub_8258683C);
PPC_FUNC_IMPL(__imp__sub_8258683C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586840"))) PPC_WEAK_FUNC(sub_82586840);
PPC_FUNC_IMPL(__imp__sub_82586840) {
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
	// bl 0x82586598
	sub_82586598(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,9616
	ctx.r10.s64 = r11.s64 + 9616;
	// addi r11,r3,80
	r11.s64 = ctx.r3.s64 + 80;
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
loc_82586870:
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// stw r10,-24(r11)
	PPC_STORE_U32(r11.u32 + -24, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82586870
	if (!cr0.eq) goto loc_82586870;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8258689C"))) PPC_WEAK_FUNC(sub_8258689C);
PPC_FUNC_IMPL(__imp__sub_8258689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825868A0"))) PPC_WEAK_FUNC(sub_825868A0);
PPC_FUNC_IMPL(__imp__sub_825868A0) {
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
	// beq 0x825868d4
	if (cr0.eq) goto loc_825868D4;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_825868D4:
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

__attribute__((alias("__imp__sub_825868EC"))) PPC_WEAK_FUNC(sub_825868EC);
PPC_FUNC_IMPL(__imp__sub_825868EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825868F0"))) PPC_WEAK_FUNC(sub_825868F0);
PPC_FUNC_IMPL(__imp__sub_825868F0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,49
	ctx.r4.s64 = 49;
	// bl 0x82586840
	sub_82586840(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,9720
	r11.s64 = r11.s64 + 9720;
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586930"))) PPC_WEAK_FUNC(sub_82586930);
PPC_FUNC_IMPL(__imp__sub_82586930) {
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
	// beq 0x82586964
	if (cr0.eq) goto loc_82586964;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82586964:
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

__attribute__((alias("__imp__sub_8258697C"))) PPC_WEAK_FUNC(sub_8258697C);
PPC_FUNC_IMPL(__imp__sub_8258697C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586980"))) PPC_WEAK_FUNC(sub_82586980);
PPC_FUNC_IMPL(__imp__sub_82586980) {
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
	// bl 0x82586598
	sub_82586598(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r10,r11,9824
	ctx.r10.s64 = r11.s64 + 9824;
	// li r11,0
	r11.s64 = 0;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, r11.u32);
	// stw r11,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, r11.u32);
	// stw r11,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, r11.u32);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825869C8"))) PPC_WEAK_FUNC(sub_825869C8);
PPC_FUNC_IMPL(__imp__sub_825869C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32245
	r11.s64 = -2113208320;
	// addi r3,r11,9928
	ctx.r3.s64 = r11.s64 + 9928;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825869D4"))) PPC_WEAK_FUNC(sub_825869D4);
PPC_FUNC_IMPL(__imp__sub_825869D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825869D8"))) PPC_WEAK_FUNC(sub_825869D8);
PPC_FUNC_IMPL(__imp__sub_825869D8) {
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
	// beq 0x82586a0c
	if (cr0.eq) goto loc_82586A0C;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82586A0C:
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

__attribute__((alias("__imp__sub_82586A24"))) PPC_WEAK_FUNC(sub_82586A24);
PPC_FUNC_IMPL(__imp__sub_82586A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586A28"))) PPC_WEAK_FUNC(sub_82586A28);
PPC_FUNC_IMPL(__imp__sub_82586A28) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82586598
	sub_82586598(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// li r29,1
	r29.s64 = 1;
	// addi r11,r11,9936
	r11.s64 = r11.s64 + 9936;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// stw r29,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lwz r11,228(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 228);
	// ori r11,r11,18
	r11.u64 = r11.u64 | 18;
	// stw r11,228(r31)
	PPC_STORE_U32(r31.u32 + 228, r11.u32);
	// lwz r3,1712(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 1712);
	// bl 0x82564bd0
	sub_82564BD0(ctx, base);
	// li r11,48
	r11.s64 = 48;
	// stw r29,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r11.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(r31.u32 + 16, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82586A94"))) PPC_WEAK_FUNC(sub_82586A94);
PPC_FUNC_IMPL(__imp__sub_82586A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586A98"))) PPC_WEAK_FUNC(sub_82586A98);
PPC_FUNC_IMPL(__imp__sub_82586A98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lis r11,-32248
	r11.s64 = -2113404928;
	// addi r3,r11,-4644
	ctx.r3.s64 = r11.s64 + -4644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82586AA4"))) PPC_WEAK_FUNC(sub_82586AA4);
PPC_FUNC_IMPL(__imp__sub_82586AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586AA8"))) PPC_WEAK_FUNC(sub_82586AA8);
PPC_FUNC_IMPL(__imp__sub_82586AA8) {
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
	// beq 0x82586adc
	if (cr0.eq) goto loc_82586ADC;
	// addi r4,r31,-4
	ctx.r4.s64 = r31.s64 + -4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x8254b8a0
	sub_8254B8A0(ctx, base);
loc_82586ADC:
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

__attribute__((alias("__imp__sub_82586AF4"))) PPC_WEAK_FUNC(sub_82586AF4);
PPC_FUNC_IMPL(__imp__sub_82586AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82586AF8"))) PPC_WEAK_FUNC(sub_82586AF8);
PPC_FUNC_IMPL(__imp__sub_82586AF8) {
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
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82586a28
	sub_82586A28(ctx, base);
	// lis r11,-32245
	r11.s64 = -2113208320;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// addi r11,r11,10040
	r11.s64 = r11.s64 + 10040;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// bl 0x82585a90
	sub_82585A90(ctx, base);
	// li r11,0
	r11.s64 = 0;
	// stw r29,128(r31)
	PPC_STORE_U32(r31.u32 + 128, r29.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x8239bd4c
	return;
}

__attribute__((alias("__imp__sub_82586B4C"))) PPC_WEAK_FUNC(sub_82586B4C);
PPC_FUNC_IMPL(__imp__sub_82586B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

