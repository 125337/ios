// FUN_014df574 @ 014df574

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_014df574(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined *local_40;
  byte local_31;
  undefined *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
             &cf_Asia_Shanghai);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  local_50 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_50 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
               &cf_Asia_Chongqing);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_50;
  }
  local_31 = puVar1 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_zh_CN);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  local_40 = puVar1;
  _objc_alloc_init();
  puVar1 = DAT_028e3698;
  DAT_028e3698 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3698,PTR_s_setLocale__0269d1c0,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3698,PTR_s_setTimeZone__0269f9d8,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3698,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_dd);
  puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  _objc_alloc_init();
  puVar1 = DAT_028e36a0;
  DAT_028e36a0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e36a0,PTR_s_setLocale__0269d1c0,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e36a0,PTR_s_setTimeZone__0269f9d8,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e36a0,PTR_s_setDateFormat__0269d1c8,&cf_M);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

