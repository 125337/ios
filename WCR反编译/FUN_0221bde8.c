// FUN_0221bde8 @ 0221bde8

/* WARNING: Removing unreachable block (ram,0x0221bee8) */
/* WARNING: Removing unreachable block (ram,0x0221bf6c) */
/* WARNING: Removing unreachable block (ram,0x0221bf8c) */
/* WARNING: Removing unreachable block (ram,0x0221bfac) */
/* WARNING: Removing unreachable block (ram,0x0221bf98) */
/* WARNING: Removing unreachable block (ram,0x0221be6c) */
/* WARNING: Removing unreachable block (ram,0x0221be60) */
/* WARNING: Removing unreachable block (ram,0x0221be7c) */
/* WARNING: Removing unreachable block (ram,0x0221be98) */
/* WARNING: Removing unreachable block (ram,0x0221be88) */
/* WARNING: Removing unreachable block (ram,0x0221bf78) */

void FUN_0221bde8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x80000000) {
    if (0x7fffffff < param_3) {
      *(undefined1 *)(param_1 + 5) = 0;
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
    if (0x7fffffff < param_3) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}

