// displayDateFromDateKey: @ 00929910

/* Function Stack Size: 0x18 bytes */

ID WCRefineCrashMonitorViewController::displayDateFromDateKey_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  undefined4 local_3c;
  ID local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dateFromDateKey__026aa6b0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar1;
  if (IVar1 == 0) {
    if (local_30 == (cfstringStruct *)0x0) {
      local_58 = &::cf___;
    }
    else {
      local_58 = local_30;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_58;
    local_3c = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    puVar3 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
               &cf_zh_CN);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setLocale__0269d1c0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTimeZone__0269f9d8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_dd);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_stringFromDate__0269d1d8,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

