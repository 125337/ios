// wcr_sheetConfirmDates @ 01dd2d98

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::wcr_sheetConfirmDates(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *local_60;
  undefined *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  byte local_31;
  undefined *local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
             &cf_Asia_Shanghai);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  local_60 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_60 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
               &cf_Asia_Chongqing);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_60;
  }
  local_31 = puVar2 == (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTimeZone__0269f9d8,local_60);
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetStart_026c55f0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_startOfDayForDate__0269cfb0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar3 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sheetEnd_026c5608);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_startOfDayForDate__0269cfb0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_compare__0269cd10,local_48);
  if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    _objc_storeStrong(0,&local_48,local_40);
  }
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSessionStatsCustomUseDates__026c5190,1);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_timeIntervalSince1970_0269cfc8);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSessionStatsCustomStart__026c5198);
  puVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x40f517f000000000,local_48,PTR_s_dateByAddingTimeInterval__0269cd18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSessionStatsCustomEnd__026c51a0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_dismissRangeSheet_026c55c0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_applyTimeRange__026c5618,5);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  return;
}

