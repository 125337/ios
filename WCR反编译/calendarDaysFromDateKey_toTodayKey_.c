// calendarDaysFromDateKey:toTodayKey: @ 00929b18

/* Function Stack Size: 0x20 bytes */

long_long WCRefineCrashMonitorViewController::calendarDaysFromDateKey_toTodayKey_
                    (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_4c;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dateFromDateKey__026aa6b0,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_20;
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dateFromDateKey__026aa6b0,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar2;
  if ((local_40 == 0) || (IVar2 == 0)) {
    local_18 = (undefined *)0x7fffffffffffffff;
    local_4c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSCalendar_026ce070;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_components_fromDate_toDate_optio_0269fa20,0x10,local_40,local_48,0);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_day_026a4c38);
    local_4c = 1;
    local_18 = puVar3;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

