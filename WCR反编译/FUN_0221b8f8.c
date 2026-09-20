// FUN_0221b8f8 @ 0221b8f8

/* WARNING: Removing unreachable block (ram,0x0221b9d8) */
/* WARNING: Removing unreachable block (ram,0x0221b9ac) */
/* WARNING: Removing unreachable block (ram,0x0221ba54) */
/* WARNING: Removing unreachable block (ram,0x0221ba74) */
/* WARNING: Removing unreachable block (ram,0x0221ba94) */
/* WARNING: Removing unreachable block (ram,0x0221ba80) */
/* WARNING: Removing unreachable block (ram,0x0221b974) */
/* WARNING: Removing unreachable block (ram,0x0221b968) */
/* WARNING: Removing unreachable block (ram,0x0221b984) */
/* WARNING: Removing unreachable block (ram,0x0221b9a0) */
/* WARNING: Removing unreachable block (ram,0x0221b990) */
/* WARNING: Removing unreachable block (ram,0x0221ba60) */

void FUN_0221b8f8(ulong *param_1,int param_2,int param_3)

{
  if (param_2 == 0) {
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    param_1[2] = 0;
    if (param_3 != 0) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}

