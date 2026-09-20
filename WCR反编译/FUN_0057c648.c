// FUN_0057c648 @ 0057c648

void FUN_0057c648(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_68;
  long local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__gn_;
  }
  else {
    local_18 = &DAT_028cb610;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_0257e0b8);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    pcVar1 = DAT_028cb608;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028cb608,PTR_s_stringFromDate__0269d1d8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_68 = &cf__gn_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

