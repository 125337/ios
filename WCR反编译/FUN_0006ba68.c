// FUN_0006ba68 @ 0006ba68

void FUN_0006ba68(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  (*DAT_028c7e10)(param_1,param_2,param_3 & 1);
  uVar1 = param_1;
  FUN_0008e428();
  if (((uVar1 & 1) != 0) &&
     ((uVar1 = param_1, FUN_0008e560(), (uVar1 & 1) == 0 ||
      (uVar1 = param_1, FUN_0008e62c(), (uVar1 & 1) != 0)))) {
    FUN_0007bc8c(param_1);
  }
  return;
}

