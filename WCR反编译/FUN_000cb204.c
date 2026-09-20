// FUN_000cb204 @ 000cb204

void FUN_000cb204(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_000cb2d8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_000c8824();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar2);
  return;
}

