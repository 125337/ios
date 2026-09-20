// FUN_008c6bfc @ 008c6bfc

void FUN_008c6bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  (*DAT_028ce0b8)(local_18,local_20,local_28,local_30);
  DAT_028ce1e9 = 1;
  DAT_028ce049 = 0;
  DAT_028ce048 = 0;
  DAT_028ce04a = 0;
  FUN_008c9608();
  uVar1 = local_28;
  FUN_008c9688(local_28,local_18);
  _objc_retainAutoreleasedReturnValue();
  FUN_008c58c4(2,0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_28;
  FUN_008c9688(local_28,local_18);
  _objc_retainAutoreleasedReturnValue();
  FUN_008c58c4(4,0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

