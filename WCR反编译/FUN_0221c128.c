// FUN_0221c128 @ 0221c128

/* WARNING: Removing unreachable block (ram,0x0221c208) */
/* WARNING: Removing unreachable block (ram,0x0221c1dc) */
/* WARNING: Removing unreachable block (ram,0x0221c288) */
/* WARNING: Removing unreachable block (ram,0x0221c2a8) */
/* WARNING: Removing unreachable block (ram,0x0221c2c8) */
/* WARNING: Removing unreachable block (ram,0x0221c2b4) */
/* WARNING: Removing unreachable block (ram,0x0221c1a4) */
/* WARNING: Removing unreachable block (ram,0x0221c198) */
/* WARNING: Removing unreachable block (ram,0x0221c1b4) */
/* WARNING: Removing unreachable block (ram,0x0221c1d0) */
/* WARNING: Removing unreachable block (ram,0x0221c1c0) */
/* WARNING: Removing unreachable block (ram,0x0221c294) */

void FUN_0221c128(ulong *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}

