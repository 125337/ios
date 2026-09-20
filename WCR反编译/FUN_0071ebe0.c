// FUN_0071ebe0 @ 0071ebe0

void FUN_0071ebe0(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  (*DAT_028cc388)(param_1,param_2,param_3 & 1);
  uVar1 = param_1;
  FUN_00722abc();
  if ((uVar1 & 1) != 0) {
    FUN_00722d04(param_1);
  }
  return;
}

