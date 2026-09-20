// FUN_00563350 @ 00563350

void FUN_00563350(undefined8 param_1,undefined8 param_2,byte param_3,byte param_4)

{
  undefined8 uVar1;
  
  if (((param_3 & 1) != 0) && ((DAT_028cb559 & 1) == 0)) {
    uVar1 = param_1;
    FUN_00564f08();
    _objc_retainAutoreleasedReturnValue();
    FUN_005717f4(param_1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  (*DAT_028cb4f0)(param_1,param_2,param_3 & 1,param_4 & 1);
  return;
}

