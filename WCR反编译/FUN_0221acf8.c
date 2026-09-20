// FUN_0221acf8 @ 0221acf8

/* WARNING: Removing unreachable block (ram,0x0221ad28) */
/* WARNING: Removing unreachable block (ram,0x0221ad5c) */
/* WARNING: Removing unreachable block (ram,0x0221ad54) */
/* WARNING: Removing unreachable block (ram,0x0221ad70) */
/* WARNING: Removing unreachable block (ram,0x0221ad8c) */
/* WARNING: Removing unreachable block (ram,0x0221ad78) */
/* WARNING: Removing unreachable block (ram,0x0221adc4) */

int FUN_0221acf8(undefined8 *param_1,uint param_2)

{
  int local_20;
  int local_1c;
  
  if (param_2 == 0) {
    local_1c = -1;
  }
  else if ((param_2 < 0x80000000) || (*(char *)(param_1 + 4) == '\0')) {
    local_20 = -1;
    if ((ulong)param_1[1] < 0x100000000) {
      local_20 = (int)param_1[1];
    }
    local_1c = local_20;
  }
  else {
    local_1c = (int)*param_1 + 0x7fffffff;
  }
  return local_1c + 1;
}

