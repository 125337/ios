// FUN_003fbae0 @ 003fbae0

void FUN_003fbae0(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028ca5f8)(param_1,param_2,param_3 & 1);
  FUN_003fbf38();
  if ((uVar1 & 1) != 0) {
    FUN_003fc050(param_1);
  }
  return;
}

