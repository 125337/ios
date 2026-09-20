// FUN_008c7198 @ 008c7198

void FUN_008c7198(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  local_24 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ce0d8)(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  DAT_028ce1e8 = 0;
  DAT_028ce1e9 = 1;
  DAT_028ce049 = 0;
  DAT_028ce048 = 0;
  DAT_028ce04a = 0;
  local_30 = param_1;
  FUN_008c9608();
  uVar1 = 0;
  FUN_008c9688(0,local_18);
  _objc_retainAutoreleasedReturnValue();
  FUN_008c58c4(2,0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = 0;
  FUN_008c9688(0,local_18);
  _objc_retainAutoreleasedReturnValue();
  FUN_008c58c4(4,0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

