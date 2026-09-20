// FUN_00f1ed60 @ 00f1ed60

void FUN_00f1ed60(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_currentThread_026a11e0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,
               &cf_com_qimiao_WCRefine_DateFormatHelper_FormatterCache);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_38 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,
                 &cf_com_qimiao_WCRefine_DateFormatHelper_FormatterCache);
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,local_20)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
      _objc_alloc_init();
      puVar2 = local_40;
      local_40 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                 &cf_en_US_POSIX);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setLocale__0269d1c0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_localTimeZone_0269f9d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setTimeZone__0269f9d8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDateFormat__0269d1c8,local_20);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,local_20);
    }
    puVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar2;
    local_24 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

