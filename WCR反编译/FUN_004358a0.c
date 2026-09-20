// FUN_004358a0 @ 004358a0

/* WARNING: Removing unreachable block (ram,0x00435944) */
/* WARNING: Removing unreachable block (ram,0x00435924) */

void FUN_004358a0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  
  bVar1 = DAT_028ca9a0 & 1;
  DAT_028ca9a0 = 1;
  (*DAT_028ca938)(param_1,param_2);
  DAT_028ca9a0 = bVar1;
  return;
}

