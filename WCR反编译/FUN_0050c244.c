// FUN_0050c244 @ 0050c244

void FUN_0050c244(ulong param_1,undefined8 param_2,byte param_3)

{
  (*DAT_028cb000)(param_1,param_2,param_3 & 1);
  FUN_0050cb64();
  FUN_0050ebd4();
  if ((param_1 & 1) != 0) {
    FUN_0050ec18();
  }
  return;
}

