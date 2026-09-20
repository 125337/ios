// handleMetricValueInput: @ 01d0d8fc

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineQuickChatSettingsViewController::handleMetricValueInput_
          (WCRefineQuickChatSettingsViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  double in_d0;
  double local_c0;
  double local_b8;
  double local_60;
  double local_58;
  ID local_48;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e4728);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_metricAlert__026ba928,0);
    local_34 = 1;
  }
  else {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    IVar2 = local_18;
    local_40 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromSender__026b1b18,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setWcr_metricAlert__026ba928,0);
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf__,&::cf___);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_48;
    local_48 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (IVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQpeW_);
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_doubleValue_026ca608);
      local_58 = 0.0;
      local_60 = 100.0;
      if (local_40 == 1) {
        local_58 = 0.0;
        local_60 = 88.0;
      }
      else if (local_40 == 2) {
        local_58 = 0.0;
        local_60 = 100.0;
      }
      else if (local_40 == 3) {
        local_58 = 56.0;
        local_60 = 120.0;
      }
      else if (local_40 == 4) {
        local_58 = 0.0;
        local_60 = 800.0;
      }
      else if (local_40 == 5) {
        local_58 = 8.0;
        local_60 = 48.0;
      }
      else if (local_40 == 6) {
        local_58 = 20.0;
        local_60 = 100.0;
      }
      else if (local_40 == 7) {
        local_58 = 28.0;
        local_60 = 64.0;
      }
      else if (local_40 == 8) {
        local_58 = 0.0;
        local_60 = 40.0;
      }
      else if (local_40 == 9) {
        local_58 = 0.0;
        local_60 = 20.0;
      }
      local_b8 = in_d0;
      if (local_60 < in_d0) {
        local_b8 = local_60;
      }
      if (local_b8 <= local_58) {
        local_c0 = local_58;
      }
      else {
        local_c0 = local_b8;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)
                ((long)local_c0,local_18,PTR_s_applyMetricValue_forTag__026c3d50,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyRuntime_026c3d60);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      local_34 = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

