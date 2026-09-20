// FUN_01b34a74 @ 01b34a74

void FUN_01b34a74(undefined8 param_1)

{
  long lVar1;
  long local_30;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_01b391b0();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_30 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_30);
  return;
}

