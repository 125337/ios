// badgeText @ 01f11808

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoEntry::badgeText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ID local_60;
  undefined *local_58;
  undefined1 *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined1 *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dueDate_026c74b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 != 0) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isOverdue_026c7128);
    if ((IVar2 & 1) == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isDueToday_026c7130);
      if ((IVar2 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___NSCalendar_026ce070;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_WCRefineToDoStore_026cf6a0;
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        local_38 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_startOfDay__026c7648);
        _objc_retainAutoreleasedReturnValue();
        local_40 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar1 = PTR_WCRefineToDoStore_026cf6a0;
        IVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dueDate_026c74b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_startOfDay__026c7648);
        _objc_retainAutoreleasedReturnValue();
        local_48 = puVar1;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_components_fromDate_toDate_optio_0269fa20,0x10,local_40,local_48,0
                  );
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_day_026a4c38);
        if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf_f_Y);
        }
        else {
          puVar5 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_day_026a4c38);
          if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf_T_Y);
          }
          else {
            puVar1 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
            _objc_alloc_init();
            puVar3 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
            local_58 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSLocale_026ce0a0,
                       PTR_s_localeWithLocaleIdentifier__0269d1b8,&cf_zh_CN);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setLocale__0269d1c0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDateFormat__0269d1c8,&cf_M_d);
            puVar3 = local_30;
            puVar1 = local_58;
            IVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dueDate_026c74b0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringFromDate__0269d1d8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(IVar2);
            _objc_storeStrong(&local_58,0);
          }
        }
        _objc_storeStrong(&local_50);
        _objc_storeStrong(&local_48,0);
        _objc_storeStrong(&local_40,0);
        _objc_storeStrong(&local_38,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf_N_Y);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,&cf_>g);
    }
  }
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_timeRangeText_026c81c0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_60);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

