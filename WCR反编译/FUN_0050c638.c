// FUN_0050c638 @ 0050c638

void FUN_0050c638(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_0050ebd4();
  if ((uVar1 & 1) != 0) {
    FUN_0050ec18();
  }
  (*DAT_028cb028)(param_1,param_2,param_3 & 1);
  return;
}

