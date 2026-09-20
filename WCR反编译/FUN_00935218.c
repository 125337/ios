// FUN_00935218 @ 00935218

void FUN_00935218(int param_1,char *param_2)

{
  ssize_t sVar1;
  int *piVar2;
  size_t local_28;
  char *local_20;
  
  if ((-1 < param_1) && (param_2 != (char *)0x0)) {
    local_28 = _strlen(param_2);
    local_20 = param_2;
    do {
      while( true ) {
        if (local_28 == 0) {
          return;
        }
        sVar1 = _write(param_1,local_20,local_28);
        if (sVar1 < 0) break;
        if (sVar1 == 0) {
          return;
        }
        local_20 = local_20 + sVar1;
        local_28 = local_28 - sVar1;
      }
      piVar2 = ___error();
    } while (*piVar2 == 4);
  }
  return;
}

