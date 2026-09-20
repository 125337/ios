// dateFromDateKey: @ 0092972c

/* Function Stack Size: 0x18 bytes */

ID WCRefineCrashMonitorViewController::dateFromDateKey_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 < 6) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
               &cf_en_US_POSIX);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLocale__0269d1c0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTimeZone__0269f9d8);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDateFormat__0269d1c8,&cf_yyMMdd);
    puVar2 = local_40;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringToIndex__0269d6c0,6);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_dateFromString__026aa6a8);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

