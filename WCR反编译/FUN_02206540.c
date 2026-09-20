// FUN_02206540 @ 02206540

/* WARNING: Removing unreachable block (ram,0x02206640) */
/* WARNING: Removing unreachable block (ram,0x022066bc) */
/* WARNING: Removing unreachable block (ram,0x022066dc) */
/* WARNING: Removing unreachable block (ram,0x022066fc) */
/* WARNING: Removing unreachable block (ram,0x022066e8) */
/* WARNING: Removing unreachable block (ram,0x022065c4) */
/* WARNING: Removing unreachable block (ram,0x022065b8) */
/* WARNING: Removing unreachable block (ram,0x022065d4) */
/* WARNING: Removing unreachable block (ram,0x022065f0) */
/* WARNING: Removing unreachable block (ram,0x022065e0) */
/* WARNING: Removing unreachable block (ram,0x022066c8) */

void FUN_02206540(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x80000000) {
    if (0x7fffffff < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000000);
    param_1[1] = 0;
    param_1[2] = 0;
    if (0x7fffffff < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}

