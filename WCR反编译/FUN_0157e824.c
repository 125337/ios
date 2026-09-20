// FUN_0157e824 @ 0157e824

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0157e824(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  _objc_alloc_init();
  puVar2 = DAT_028e3a40;
  DAT_028e3a40 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_zh_CN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3a40,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3a40,PTR_s_setDateFormat__0269d1c8,&cf_y);
  return;
}

