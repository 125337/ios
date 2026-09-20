// FUN_021cc694 @ 021cc694

/* WARNING: Removing unreachable block (ram,0x021cc6c0) */
/* WARNING: Removing unreachable block (ram,0x021cc6f4) */
/* WARNING: Removing unreachable block (ram,0x021cc6ec) */
/* WARNING: Removing unreachable block (ram,0x021cc708) */
/* WARNING: Removing unreachable block (ram,0x021cc724) */
/* WARNING: Removing unreachable block (ram,0x021cc710) */
/* WARNING: Removing unreachable block (ram,0x021cc75c) */

int FUN_021cc694(undefined8 *param_1,int param_2)

{
  int local_1c;
  
  if (param_2 == 0) {
    local_1c = -1;
  }
  else if ((param_2 == 0) || (*(char *)(param_1 + 2) == '\0')) {
    local_1c = -1;
  }
  else {
    local_1c = (int)*param_1;
  }
  return local_1c + 1;
}

