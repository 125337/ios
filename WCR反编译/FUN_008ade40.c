// FUN_008ade40 @ 008ade40

void FUN_008ade40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  uVar1 = local_18;
  (*DAT_028cdea8)(local_18,local_20,local_28);
  _objc_retainAutoreleasedReturnValue();
  FUN_008b4a70();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_18;
  FUN_008b4d8c(local_18,local_30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_30 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

