// FUN_003311a4 @ 003311a4

void FUN_003311a4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_00331804();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9e28)(param_1,param_2,param_3);
  }
  else {
    (*DAT_028c9e28)(param_1,param_2,0);
  }
  return;
}

