// beautiful_katamari_recomp - ReXGlue Recompiled Project

#include <rex/ppc/hook.h>
#include "generated/default/beautiful_katamari_recomp_funcs.h"

REX_HOOK_RAW(sub_8222E438) {
  ctx.r10.s64 = -2102329344; // 0x82B10000
  ctx.r11.s64 = -2103312384; // 0x82A20000
  ctx.r11.s64 = ctx.r11.s64 + -26968; // 0x82A196A8
  ctx.r10.u64 = REX_LOAD_U32(ctx.r10.u32 + -27168); // *(u32*)0x82B095E0
  ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
  ctx.r11.u64 = REX_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
  ctx.ctr.u64 = ctx.r11.u64;
  REX_TAIL_INDIRECT_FUNC(ctx.ctr.u32);
}
