// FUN_0221b318 @ 0221b318

/* WARNING: Removing unreachable block (ram,0x0221b418) */
/* WARNING: Removing unreachable block (ram,0x0221b4a4) */
/* WARNING: Removing unreachable block (ram,0x0221b4c4) */
/* WARNING: Removing unreachable block (ram,0x0221b4e4) */
/* WARNING: Removing unreachable block (ram,0x0221b4d0) */
/* WARNING: Removing unreachable block (ram,0x0221b39c) */
/* WARNING: Removing unreachable block (ram,0x0221b390) */
/* WARNING: Removing unreachable block (ram,0x0221b3ac) */
/* WARNING: Removing unreachable block (ram,0x0221b3c8) */
/* WARNING: Removing unreachable block (ram,0x0221b3b8) */
/* WARNING: Removing unreachable block (ram,0x0221b4b0) */

void FUN_0221b318(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x80000000) {
    if (0x7fffffff < param_3) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000000);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    if (0x7fffffff < param_3) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
  }
  return;
}

