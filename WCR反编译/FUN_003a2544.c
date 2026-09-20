// FUN_003a2544 @ 003a2544

void FUN_003a2544(double param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  double local_20;
  cfstringStruct *local_18;
  
  local_20 = param_1;
  if (param_1 <= 0.0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    goto LAB_003a27b0;
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
            );
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  local_28 = puVar1;
  _objc_alloc_init();
  puVar1 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_currentLocale_026a32b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isDateInToday__026a32b8,local_28);
  if (((ulong)puVar1 & 1) == 0) {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isDateInYesterday__026a32c0,local_28);
    if (((ulong)puVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDateFormat__0269d1c8,&cf_M);
      goto LAB_003a2700;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__f_Y;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDateFormat__0269d1c8,&cf_HH_mm);
LAB_003a2700:
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringFromDate__0269d1d8,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_68 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
LAB_003a27b0:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

