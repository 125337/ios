// FUN_003e2f58 @ 003e2f58

int FUN_003e2f58(int *param_1,int param_2,long param_3,undefined8 param_4,undefined8 param_5,
                undefined8 param_6)

{
  int *piVar1;
  int local_14;
  
  if (DAT_028ca418 == (code *)0x0) {
    local_14 = -1;
  }
  else {
    piVar1 = param_1;
    (*DAT_028ca418)(param_1,param_2,param_3,param_4,param_5,param_6);
    local_14 = (int)piVar1;
    if ((((local_14 == 0) && (param_2 == 4)) && (param_1 != (int *)0x0)) &&
       (((*param_1 == 1 && (param_1[1] == 0xe)) && ((param_1[2] == 1 && (param_3 != 0)))))) {
      FUN_003e31e8(param_3);
    }
  }
  return local_14;
}

