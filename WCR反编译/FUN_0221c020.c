// FUN_0221c020 @ 0221c020

/* WARNING: Removing unreachable block (ram,0x0221c04c) */
/* WARNING: Removing unreachable block (ram,0x0221c080) */
/* WARNING: Removing unreachable block (ram,0x0221c078) */
/* WARNING: Removing unreachable block (ram,0x0221c094) */
/* WARNING: Removing unreachable block (ram,0x0221c0b0) */
/* WARNING: Removing unreachable block (ram,0x0221c09c) */
/* WARNING: Removing unreachable block (ram,0x0221c0e8) */

int FUN_0221c020(undefined8 *param_1,int param_2)

{
  int local_1c;
  
  if (param_2 == 0) {
    local_1c = -1;
  }
  else if ((param_2 == 0) || (*(char *)(param_1 + 4) == '\0')) {
    local_1c = -1;
  }
  else {
    local_1c = (int)*param_1;
  }
  return local_1c + 1;
}

