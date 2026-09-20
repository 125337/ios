// dateByCombiningDay:time: @ 01f1255c

/* Function Stack Size: 0x20 bytes */

ID WCRefineToDoStore::dateByCombiningDay_time_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_88;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if ((local_30 == (undefined *)0x0) && (local_38 == 0)) {
    local_18 = (undefined *)0x0;
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCalendar_026ce070;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 0;
    bVar1 = local_30 == (undefined *)0x0;
    local_48 = puVar2;
    if (bVar1) {
      local_88 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_88;
    }
    else {
      local_88 = local_30;
    }
    local_59 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_88;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_components_fromDate__026a44c0,0x1c,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar2;
    if (local_38 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setHour__026a52f0,9);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMinute__026a52f8,0);
    }
    else {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_components_fromDate__026a44c0,0x60,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_hour_026a44c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setHour__026a52f0,puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_minute_026a44d0);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMinute__026a52f8,puVar2);
      _objc_storeStrong(&local_70,0);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_dateFromComponents__026a52c8,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = puVar2;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

