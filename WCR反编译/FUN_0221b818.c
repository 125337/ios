// FUN_0221b818 @ 0221b818

/* WARNING: Removing unreachable block (ram,0x0221b89c) */
/* WARNING: Removing unreachable block (ram,0x0221b878) */
/* WARNING: Removing unreachable block (ram,0x0221b894) */
/* WARNING: Removing unreachable block (ram,0x0221b8b0) */
/* WARNING: Removing unreachable block (ram,0x0221b880) */
/* WARNING: Removing unreachable block (ram,0x0221b84c) */

int FUN_0221b818(int *param_1,int param_2)

{
  int local_20;
  
  if (param_2 == 0) {
    local_20 = -1;
  }
  else if ((param_2 == 0) || ((char)param_1[6] == '\0')) {
    local_20 = -1;
  }
  else {
    local_20 = *param_1;
  }
  return local_20 + 1;
}

