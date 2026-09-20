// FUN_014fac80 @ 014fac80

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_014fac80(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_50;
  undefined *local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  _objc_alloc_init();
  puVar2 = DAT_028e3730;
  DAT_028e3730 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_zh_CN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3730,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
             &cf_Asia_Shanghai);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_28 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
               &cf_Asia_Chongqing);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3730,PTR_s_setTimeZone__0269f9d8,local_50);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3730,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss);
  return;
}

