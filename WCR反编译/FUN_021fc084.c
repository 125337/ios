// FUN_021fc084 @ 021fc084

/* WARNING: Removing unreachable block (ram,0x021fc0b0) */
/* WARNING: Removing unreachable block (ram,0x021fc0e4) */
/* WARNING: Removing unreachable block (ram,0x021fc0dc) */
/* WARNING: Removing unreachable block (ram,0x021fc0f8) */
/* WARNING: Removing unreachable block (ram,0x021fc114) */
/* WARNING: Removing unreachable block (ram,0x021fc100) */
/* WARNING: Removing unreachable block (ram,0x021fc14c) */

int FUN_021fc084(undefined8 *param_1,int param_2)

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

