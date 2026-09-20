// wcr_setDate: @ 005744ac

/* Function Stack Size: 0x18 bytes */

void WCRMomentsScheduledDatePickerPanel::wcr_setDate_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_268;
  ID local_260;
  ID local_250;
  ID local_248;
  ID local_238;
  ID local_230;
  ID local_220;
  ID local_218;
  ID local_200;
  ID local_1f8;
  ID local_1e8;
  ID local_1e0;
  undefined *local_198;
  ID local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_59 = 0;
  bVar1 = local_38 == (undefined *)0x0;
  if (bVar1) {
    local_198 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4072c00000000000,PTR__OBJC_CLASS___NSDate_026cdf88,
               PTR_s_dateWithTimeIntervalSinceNow__0269cf50);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_198;
  }
  else {
    local_198 = local_38;
  }
  local_59 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_198;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_calendar_026a52c0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_1e8 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_minYear_026a52d8);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_maxYear_026a52e0);
  local_1e0 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_year_0269fa28);
  if ((long)IVar2 < (long)local_1e0) {
    local_1e0 = IVar2;
  }
  if ((long)local_1e8 < (long)local_1e0) {
    local_1e8 = local_1e0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setYear__026a52a0,local_1e8);
  local_1f8 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_month_026a52a8);
  if (0xc < (long)local_1f8) {
    local_1f8 = 0xc;
  }
  if ((long)local_1f8 < 2) {
    local_200 = 1;
  }
  else {
    local_200 = local_1f8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMonth__026a52b0,local_200);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_daysInMonth_026a52e8);
  local_218 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_day_026a4c38);
  if ((long)IVar2 < (long)local_218) {
    local_218 = IVar2;
  }
  if ((long)local_218 < 2) {
    local_220 = 1;
  }
  else {
    local_220 = local_218;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDay__026a52b8,local_220);
  local_230 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hour_026a44c8);
  if (0x17 < (long)local_230) {
    local_230 = 0x17;
  }
  if ((long)local_230 < 1) {
    local_238 = 0;
  }
  else {
    local_238 = local_230;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHour__026a52f0,local_238);
  local_248 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_minute_026a44d0);
  if (0x3b < (long)local_248) {
    local_248 = 0x3b;
  }
  if ((long)local_248 < 1) {
    local_250 = 0;
  }
  else {
    local_250 = local_248;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setMinute__026a52f8,local_250);
  local_260 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_second_026a5300);
  if (0x3b < (long)local_260) {
    local_260 = 0x3b;
  }
  if ((long)local_260 < 1) {
    local_268 = 0;
  }
  else {
    local_268 = local_260;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSecond__026a5308,local_268);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pickerView_026a5310);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pickerView_026a5310);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_year_0269fa28);
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_minYear_026a52d8);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_selectRow_inComponent_animated__026a5320,IVar3 - IVar4,0,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pickerView_026a5310);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_month_026a52a8);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_selectRow_inComponent_animated__026a5320,IVar3 - 1,1,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pickerView_026a5310);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_day_026a4c38);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_selectRow_inComponent_animated__026a5320,IVar3 - 1,2,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pickerView_026a5310);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hour_026a44c8);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_selectRow_inComponent_animated__026a5320,IVar3,3,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pickerView_026a5310);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_minute_026a44d0);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_selectRow_inComponent_animated__026a5320,IVar3,4,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pickerView_026a5310);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_second_026a5300);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_selectRow_inComponent_animated__026a5320,IVar3,5,0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

