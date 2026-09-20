// FUN_00014db8 @ 00014db8

void FUN_00014db8(double param_1,uint param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_30 [3];
  uint local_14;
  
  local_14 = param_2;
  if (param_2 == 0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_14 = (uint)param_1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  _objc_alloc_init();
  puVar1 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  local_30[0] = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_zh_CN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_dd);
  pcVar2 = local_30[0];
  uVar3 = NEON_ucvtf((ulong)local_14);
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringFromDate__0269d1d8);
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(local_30,0);
  _objc_autoreleaseReturnValue(local_80);
  return;
}

