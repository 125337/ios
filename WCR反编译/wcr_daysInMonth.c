// wcr_daysInMonth @ 00574154

/* Function Stack Size: 0x10 bytes */

long_long WCRMomentsScheduledDatePickerPanel::wcr_daysInMonth(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_a8;
  undefined *local_58;
  undefined *local_40 [3];
  undefined *local_28;
  SEL local_20;
  undefined *local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSDateComponents_026ce788;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDateComponents_026ce788,PTR_s_new_0269d288);
  puVar3 = local_18;
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_year_0269fa28);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setYear__026a52a0,puVar3);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_month_026a52a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMonth__026a52b0,puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDay__026a52b8,1);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_calendar_026a52c0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_calendar_026a52c0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_40[0] == (undefined *)0x0;
  if (bVar1) {
    local_a8 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a8;
  }
  else {
    local_a8 = local_40[0];
  }
  puVar3 = PTR_s_rangeOfUnit_inUnit_forDate__026a52d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_rangeOfUnit_inUnit_forDate__026a52d0,0x10,8,local_a8);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return (long_long)puVar3;
}

