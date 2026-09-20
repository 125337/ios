// FUN_0027a0e4 @ 0027a0e4

void FUN_0027a0e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0027a410();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0027a1c0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

