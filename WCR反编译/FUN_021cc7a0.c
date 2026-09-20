// FUN_021cc7a0 @ 021cc7a0

/* WARNING: Removing unreachable block (ram,0x021cc880) */
/* WARNING: Removing unreachable block (ram,0x021cc854) */
/* WARNING: Removing unreachable block (ram,0x021cc900) */
/* WARNING: Removing unreachable block (ram,0x021cc920) */
/* WARNING: Removing unreachable block (ram,0x021cc940) */
/* WARNING: Removing unreachable block (ram,0x021cc92c) */
/* WARNING: Removing unreachable block (ram,0x021cc81c) */
/* WARNING: Removing unreachable block (ram,0x021cc810) */
/* WARNING: Removing unreachable block (ram,0x021cc82c) */
/* WARNING: Removing unreachable block (ram,0x021cc848) */
/* WARNING: Removing unreachable block (ram,0x021cc838) */
/* WARNING: Removing unreachable block (ram,0x021cc90c) */

void FUN_021cc7a0(ulong *param_1,int param_2,int param_3)

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

