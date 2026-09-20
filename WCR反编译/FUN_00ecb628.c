// FUN_00ecb628 @ 00ecb628

void FUN_00ecb628(undefined8 param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00ec4b28(local_20,&cf_m_delegate);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    lVar1 = local_20;
    FUN_00ec4b28(local_20,&cf_delegate);
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

