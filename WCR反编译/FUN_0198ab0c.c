// FUN_0198ab0c @ 0198ab0c

void FUN_0198ab0c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  long local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
  }
  else {
    local_18 = &DAT_028e43d8;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0258a818);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    pcVar1 = DAT_028e43d0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e43d0,PTR_s_stringFromDate__0269d1d8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

