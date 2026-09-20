// FUN_021fc190 @ 021fc190

/* WARNING: Removing unreachable block (ram,0x021fc270) */
/* WARNING: Removing unreachable block (ram,0x021fc244) */
/* WARNING: Removing unreachable block (ram,0x021fc2f0) */
/* WARNING: Removing unreachable block (ram,0x021fc310) */
/* WARNING: Removing unreachable block (ram,0x021fc330) */
/* WARNING: Removing unreachable block (ram,0x021fc31c) */
/* WARNING: Removing unreachable block (ram,0x021fc20c) */
/* WARNING: Removing unreachable block (ram,0x021fc200) */
/* WARNING: Removing unreachable block (ram,0x021fc21c) */
/* WARNING: Removing unreachable block (ram,0x021fc238) */
/* WARNING: Removing unreachable block (ram,0x021fc228) */
/* WARNING: Removing unreachable block (ram,0x021fc2fc) */

void FUN_021fc190(ulong *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
  }
  else {
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}

