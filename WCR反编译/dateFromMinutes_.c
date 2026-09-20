// dateFromMinutes: @ 00f287e4

/* Function Stack Size: 0x18 bytes */

ID WCRefineDoNotDisturbSupport::dateFromMinutes_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_80;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  long_long local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_38 = param_3;
  if ((long)param_3 < 0) {
    local_38 = 0;
  }
  if (0x59f < (long)local_38) {
    local_38 = 0x59f;
  }
  puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_components_fromDate__026a44c0,0x1c);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setHour__026a52f0,(long)local_38 / 0x3c);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setMinute__026a52f8,(long)local_38 % 0x3c);
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setSecond__026a5308,0);
  puVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_dateFromComponents__026a52c8,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_80 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_50 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_80;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

