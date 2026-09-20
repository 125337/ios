// wcr_selectedDate @ 005750a8

/* Function Stack Size: 0x10 bytes */

ID WCRMomentsScheduledDatePickerPanel::wcr_selectedDate(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_d0;
  undefined *local_90;
  undefined *local_60;
  undefined *local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSDateComponents_026ce788;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDateComponents_026ce788,PTR_s_new_0269d288);
  puVar2 = local_20;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_year_0269fa28);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setYear__026a52a0,puVar2);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_month_026a52a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setMonth__026a52b0,puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_day_026a4c38);
  local_90 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_daysInMonth_026a52e8);
  if ((long)puVar1 < (long)local_90) {
    local_90 = puVar1;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setDay__026a52b8,local_90);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hour_026a44c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHour__026a52f0,puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_minute_026a44d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setMinute__026a52f8,puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_second_026a5300);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setSecond__026a5308,puVar1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_calendar_026a52c0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_60 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_d0;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

