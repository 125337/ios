// FUN_00563110 @ 00563110

void FUN_00563110(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  if (((param_3 & 1) != 0) && ((DAT_028cb54b & 1) == 0)) {
    FUN_005714e8(param_1);
  }
  (*DAT_028cb4d8)(param_1,param_2,param_3 & 1,param_4 & 1);
  return;
}

