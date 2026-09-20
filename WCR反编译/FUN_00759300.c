// FUN_00759300 @ 00759300

void FUN_00759300(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_88;
  cfstringStruct *local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
            );
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = &cf_HH_mm_ss;
    if (((ulong)puVar3 & 1) == 0) {
      pcVar2 = &cf_MM_ddHH_mm;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setDateFormat__0269d1c8,pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringFromDate__0269d1d8,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_88 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

