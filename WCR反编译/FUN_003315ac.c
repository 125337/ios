// FUN_003315ac @ 003315ac

void FUN_003315ac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*DAT_028c9e60)(param_1,param_2);
  FUN_00331804();
  if ((uVar1 & 1) != 0) {
    FUN_00331828(param_1);
  }
  return;
}

