// FUN_0221b200 @ 0221b200

/* WARNING: Removing unreachable block (ram,0x0221b284) */
/* WARNING: Removing unreachable block (ram,0x0221b260) */
/* WARNING: Removing unreachable block (ram,0x0221b27c) */
/* WARNING: Removing unreachable block (ram,0x0221b298) */
/* WARNING: Removing unreachable block (ram,0x0221b268) */
/* WARNING: Removing unreachable block (ram,0x0221b234) */

int FUN_0221b200(int *param_1,int param_2)

{
  int local_24;
  int local_20;
  
  if (param_2 == 0) {
    local_20 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    local_20 = *param_1 + 0x7fffffff;
  }
  else {
    local_24 = -1;
    if (*(ulong *)(param_1 + 2) >> 0x20 == 0) {
      local_24 = (int)*(ulong *)(param_1 + 2);
    }
    local_20 = local_24;
  }
  return local_20 + 1;
}

