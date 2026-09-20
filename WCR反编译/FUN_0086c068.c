// FUN_0086c068 @ 0086c068

void FUN_0086c068(ulong param_1,undefined8 param_2,byte param_3,undefined8 param_4)

{
  ulong uVar1;
  
  uVar1 = param_1;
  if ((param_3 & 1) == 0) {
    FUN_00863880();
  }
  if (((param_3 & 1) == 0) || (FUN_00889fc4(), (uVar1 & 1) == 0)) {
    (*DAT_028cd648)(param_1,param_2,param_3 & 1,param_4);
  }
  return;
}

