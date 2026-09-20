// FUN_021cdd90 @ 021cdd90

long * FUN_021cdd90(long *param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(*(long *)(param_2 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    return param_1;
  }
  uVar2 = (ulong)uVar1 & 0xff;
  return (long *)(*param_1 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
}

