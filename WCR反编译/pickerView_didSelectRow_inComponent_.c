// pickerView:didSelectRow:inComponent: @ 00578234

/* Function Stack Size: 0x28 bytes */

void WCRMomentsScheduledDatePickerPanel::pickerView_didSelectRow_inComponent_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (param_5 == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_minYear_026a52d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setYear__026a52a0,IVar1 + param_4);
  }
  else if (param_5 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMonth__026a52b0,param_4 + 1);
  }
  else if (param_5 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDay__026a52b8,param_4 + 1);
  }
  else if (param_5 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHour__026a52f0,param_4);
  }
  else if (param_5 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMinute__026a52f8,param_4);
  }
  else if (param_5 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSecond__026a5308,param_4);
  }
  if ((long)param_5 < 2) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_daysInMonth_026a52e8);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_day_026a4c38);
    if ((long)IVar1 < (long)IVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDay__026a52b8,IVar1);
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pickerView_026a5310);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pickerView_026a5310);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_day_026a4c38);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_selectRow_inComponent_animated__026a5320,IVar2 - 1,2,0);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

