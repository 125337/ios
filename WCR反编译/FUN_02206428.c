// FUN_02206428 @ 02206428

/* WARNING: Removing unreachable block (ram,0x022064ac) */
/* WARNING: Removing unreachable block (ram,0x02206488) */
/* WARNING: Removing unreachable block (ram,0x022064a4) */
/* WARNING: Removing unreachable block (ram,0x022064c0) */
/* WARNING: Removing unreachable block (ram,0x02206490) */
/* WARNING: Removing unreachable block (ram,0x0220645c) */

int FUN_02206428(int *param_1,int param_2)

{
  int local_24;
  int local_20;
  
  if (param_2 == 0) {
    local_20 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    local_20 = *param_1 + 0x7fffffff;
  }
  else {
    local_24 = -1;
    if (*(ulong *)(param_1 + 4) >> 0x20 == 0) {
      local_24 = (int)*(ulong *)(param_1 + 4);
    }
    local_20 = local_24;
  }
  return local_20 + 1;
}

