// FUN_0221ae38 @ 0221ae38

/* WARNING: Removing unreachable block (ram,0x0221af38) */
/* WARNING: Removing unreachable block (ram,0x0221afb8) */
/* WARNING: Removing unreachable block (ram,0x0221afd8) */
/* WARNING: Removing unreachable block (ram,0x0221aff8) */
/* WARNING: Removing unreachable block (ram,0x0221afe4) */
/* WARNING: Removing unreachable block (ram,0x0221aebc) */
/* WARNING: Removing unreachable block (ram,0x0221aeb0) */
/* WARNING: Removing unreachable block (ram,0x0221aecc) */
/* WARNING: Removing unreachable block (ram,0x0221aee8) */
/* WARNING: Removing unreachable block (ram,0x0221aed8) */
/* WARNING: Removing unreachable block (ram,0x0221afc4) */

void FUN_0221ae38(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x80000000) {
    if (0x7fffffff < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
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
    if (0x7fffffff < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}

