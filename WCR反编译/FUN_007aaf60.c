// FUN_007aaf60 @ 007aaf60

void FUN_007aaf60(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_007ab5f4();
  if ((uVar1 & 1) == 0) {
    (*DAT_028ccbc8)(param_1,param_2,param_3);
  }
  return;
}

