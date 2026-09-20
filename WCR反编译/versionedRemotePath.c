// versionedRemotePath @ 00f05c54

/* Function Stack Size: 0x10 bytes */

ID WCRefineCloudBackupService::versionedRemotePath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_en_US_POSIX);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTimeZone__0269f9d8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDateFormat__0269d1c8,&cf_yyyyMMdd_HHmmss);
  puVar1 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringFromDate__0269d1d8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    _objc_storeStrong(&local_30,&::cf_0);
  }
  IVar3 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_WCRefineBackup____zip);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_pathByAppendingFileName__026abb78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

