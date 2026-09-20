// timeRangeText @ 01f11018

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoEntry::timeRangeText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_startTime_026c74b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
               &cf_zh_CN);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setLocale__0269d1c0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDateFormat__0269d1c8,&cf_H_mm);
    puVar1 = local_30;
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_startTime_026c74b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_endTime_026c74c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = local_30;
    puVar1 = local_38;
    if (IVar3 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_3c = 1;
    }
    else {
      IVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_endTime_026c74c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringFromDate__0269d1d8);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      local_3c = 1;
      local_18 = puVar1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

