// wcr_changed @ 01dbbedc

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsDateViewController::wcr_changed(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_startPicker_0269cfa8);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_endPicker_0269cfb8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_compare__0269cd10,local_30);
  if (IVar1 == 1) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_endPicker_0269cfb8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_30,local_28);
  }
  puVar3 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar4 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
             &cf_Asia_Shanghai);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_a0 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_a0 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
               &cf_Asia_Chongqing);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_a0;
  }
  local_41 = puVar4 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setTimeZone__0269f9d8,local_a0);
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startOfDayForDate__0269cfb0,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_38;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_startOfDayForDate__0269cfb0,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x40f517f000000000,puVar4,PTR_s_dateByAddingTimeInterval__0269cd18);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setSessionStatsCustomUseDates__026c5190,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_timeIntervalSince1970_0269cfc8);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSessionStatsCustomStart__026c5198);
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_timeIntervalSince1970_0269cfc8);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSessionStatsCustomEnd__026c51a0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setSessionStatsTimeRange__026c51a8,5);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

