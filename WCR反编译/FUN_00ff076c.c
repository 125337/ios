// FUN_00ff076c @ 00ff076c

/* WARNING: Removing unreachable block (ram,0x00ff07a0) */
/* WARNING: Removing unreachable block (ram,0x00ff07b4) */

undefined8 FUN_00ff076c(byte param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x10;
  if ((param_1 & 1) == 0) {
    uVar1 = 0xb;
  }
  return uVar1;
}

