// FUN_003e3058 @ 003e3058

int FUN_003e3058(char *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                )

{
  int iVar1;
  char *pcVar2;
  int local_14;
  
  if (DAT_028ca420 == (code *)0x0) {
    local_14 = -1;
  }
  else {
    pcVar2 = param_1;
    (*DAT_028ca420)(param_1,param_2,param_3,param_4,param_5);
    local_14 = (int)pcVar2;
    if ((((local_14 == 0) && (param_1 != (char *)0x0)) && (param_2 != 0)) &&
       (iVar1 = _strcmp(param_1,"kern.proc"), iVar1 == 0)) {
      FUN_003e31e8(param_2);
    }
  }
  return local_14;
}

