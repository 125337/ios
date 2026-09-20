// FUN_0032baec @ 0032baec

void FUN_0032baec(undefined8 param_1)

{
  bool bVar1;
  long local_58;
  long local_38;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = local_20 == 0;
  if (bVar1) {
    local_58 = 0;
  }
  else {
    local_58 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_58;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

