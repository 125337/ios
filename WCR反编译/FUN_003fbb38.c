// FUN_003fbb38 @ 003fbb38

void FUN_003fbb38(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028ca600)(param_1,param_2);
  FUN_003fbf38();
  if ((uVar1 & 1) != 0) {
    FUN_003fc050(param_1);
  }
  return;
}

