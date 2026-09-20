// FUN_014e2868 @ 014e2868

void FUN_014e2868(double param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_58;
  cfstringStruct *local_28;
  undefined8 local_20;
  long *local_18;
  
  if (1000000000.0 < param_1) {
    local_18 = &DAT_028e3738;
    local_20 = 0;
    _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_025861b8);
    if (*local_18 + 1 != 0) {
      _dispatch_once(*local_18 + 1,local_18,local_20);
    }
    _objc_storeStrong(&local_20,0);
    pcVar2 = DAT_028e3730;
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR__OBJC_CLASS___NSDate_026cdf88,
               PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_58 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_58;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

