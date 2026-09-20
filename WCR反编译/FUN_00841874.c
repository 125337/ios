// FUN_00841874 @ 00841874

void FUN_00841874(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_00810910();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    FUN_0082e450();
    if ((uVar1 & 1) != 0) {
      FUN_00815824(param_1,0);
    }
  }
  (*DAT_028cd2f8)(param_1,param_2,param_3 & 1);
  return;
}

