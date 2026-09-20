// onConfirm @ 005792f8

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRMomentsScheduledDatePickerPanel::onConfirm
          (WCRMomentsScheduledDatePickerPanel *this,ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  double in_d0;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  undefined4 local_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_selectedDate_026a5378);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeIntervalSinceNow_0269cd28);
  if (60.0 <= in_d0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeIntervalSinceNow_0269cd28);
    if (in_d0 <= 31622400.0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_completion_0269fb98);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_18;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_0057959c;
      local_58 = &DAT_02579e20;
      local_40 = IVar3;
      (*(code *)PTR__objc_retain_02578638)();
      IVar1 = local_28;
      local_48 = IVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_dismissAnimated_completion__026a5370,1,&local_70);
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
      local_38 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Se);
      local_38 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Se_ZfNS_MR);
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

