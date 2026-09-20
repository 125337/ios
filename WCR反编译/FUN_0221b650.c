// FUN_0221b650 @ 0221b650

/* WARNING: Removing unreachable block (ram,0x0221b730) */
/* WARNING: Removing unreachable block (ram,0x0221b704) */
/* WARNING: Removing unreachable block (ram,0x0221b7b4) */
/* WARNING: Removing unreachable block (ram,0x0221b7d4) */
/* WARNING: Removing unreachable block (ram,0x0221b7f4) */
/* WARNING: Removing unreachable block (ram,0x0221b7e0) */
/* WARNING: Removing unreachable block (ram,0x0221b6cc) */
/* WARNING: Removing unreachable block (ram,0x0221b6c0) */
/* WARNING: Removing unreachable block (ram,0x0221b6dc) */
/* WARNING: Removing unreachable block (ram,0x0221b6f8) */
/* WARNING: Removing unreachable block (ram,0x0221b6e8) */
/* WARNING: Removing unreachable block (ram,0x0221b7c0) */

void FUN_0221b650(ulong *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}

