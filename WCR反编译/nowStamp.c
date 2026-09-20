// nowStamp @ 00f0246c

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::nowStamp(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_zh_CN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDateFormat__0269d1c8,&cf_MM_ddHH_mm);
  pcVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringFromDate__0269d1d8);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_50;
}

