// FUN_0071ea70 @ 0071ea70

void FUN_0071ea70(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  (*DAT_028cc360)(param_1,param_2,param_3 & 1);
  uVar1 = param_1;
  FUN_00722abc();
  if ((uVar1 & 1) != 0) {
    FUN_00722d04(param_1);
  }
  return;
}

