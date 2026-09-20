// FUN_00f7d474 @ 00f7d474

void FUN_00f7d474(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = local_20 == (cfstringStruct *)0x0;
  if (bVar1) {
    local_38 = &cf_nil;
  }
  else {
    local_38 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_38;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

