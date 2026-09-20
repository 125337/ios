// FUN_000c0ed4 @ 000c0ed4

void FUN_000c0ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  (*DAT_028c8170)(local_18,local_20,local_28,param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_000c1924();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

