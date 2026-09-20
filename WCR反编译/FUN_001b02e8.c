// FUN_001b02e8 @ 001b02e8

void FUN_001b02e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_50;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_001b0414();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar2;
  if (lVar2 == 0) {
    local_50 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_50);
  return;
}

