// FUN_0086be88 @ 0086be88

void FUN_0086be88(ulong param_1,undefined8 param_2,byte param_3)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_00889fc4();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cd628)(param_1,param_2,param_3 & 1);
  }
  else {
    (*DAT_028cd628)(param_1,param_2,1);
  }
  return;
}

