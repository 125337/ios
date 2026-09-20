// tableView:titleForHeaderInSection: @ 01ea1430

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoHistoryViewController::tableView_titleForHeaderInSection_
             (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  long_long local_38;
  undefined8 local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_20;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_groups_026a1048);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  puVar4 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
  _objc_alloc_init();
  puVar5 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
             &cf_zh_CN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setLocale__0269d1c0);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_dd);
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dateFromString__026aa6a8,local_40);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_40;
  local_50 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_54 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSCalendar_026ce070;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (((ulong)puVar5 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSCalendar_026ce070;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (((ulong)puVar5 & 1) == 0) {
        pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSDateFormatter_026ce098;
        _objc_alloc_init();
        puVar4 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
        local_60 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                   &cf_zh_CN);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setLocale__0269d1c0);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setDateFormat__0269d1c8,&::cf_M);
        pcVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_stringFromDate__0269d1d8,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_54 = 1;
        local_18 = pcVar1;
        _objc_storeStrong(&local_60,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf__f_Y;
        local_54 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_N_Y;
      local_54 = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

