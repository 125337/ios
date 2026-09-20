// FUN_0221bcd0 @ 0221bcd0

/* WARNING: Removing unreachable block (ram,0x0221bd54) */
/* WARNING: Removing unreachable block (ram,0x0221bd30) */
/* WARNING: Removing unreachable block (ram,0x0221bd4c) */
/* WARNING: Removing unreachable block (ram,0x0221bd68) */
/* WARNING: Removing unreachable block (ram,0x0221bd38) */
/* WARNING: Removing unreachable block (ram,0x0221bd04) */

int FUN_0221bcd0(int *param_1,int param_2)

{
  int local_24;
  int local_20;
  
  if (param_2 == 0) {
    local_20 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
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

