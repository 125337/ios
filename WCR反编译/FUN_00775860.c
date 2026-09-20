// FUN_00775860 @ 00775860

void FUN_00775860(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_78;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  local_18 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_en_US_POSIX);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTimeZone__0269f9d8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_dd);
  pcVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringFromDate__0269d1d8);
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_78 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_78);
  return;
}

