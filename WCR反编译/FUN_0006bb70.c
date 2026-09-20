// FUN_0006bb70 @ 0006bb70

void FUN_0006bb70(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  (*DAT_028c7e20)(param_1,param_2,param_3 & 1);
  uVar1 = param_1;
  FUN_0008e560();
  if ((uVar1 & 1) != 0) {
    FUN_0007f6bc(param_1,0);
  }
  return;
}

