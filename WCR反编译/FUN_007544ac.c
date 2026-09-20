// FUN_007544ac @ 007544ac

void FUN_007544ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_18;
  
  local_18 = 0;
  FUN_0074998c();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_sync();
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar1 = local_18;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

