// FUN_0221b570 @ 0221b570

/* WARNING: Removing unreachable block (ram,0x0221b5f4) */
/* WARNING: Removing unreachable block (ram,0x0221b5d0) */
/* WARNING: Removing unreachable block (ram,0x0221b5ec) */
/* WARNING: Removing unreachable block (ram,0x0221b608) */
/* WARNING: Removing unreachable block (ram,0x0221b5d8) */
/* WARNING: Removing unreachable block (ram,0x0221b5a4) */

int FUN_0221b570(int *param_1,int param_2)

{
  int local_20;
  
  if (param_2 == 0) {
    local_20 = -1;
  }
  else if ((param_2 == 0) || ((char)param_1[10] == '\0')) {
    local_20 = -1;
  }
  else {
    local_20 = *param_1;
  }
  return local_20 + 1;
}

