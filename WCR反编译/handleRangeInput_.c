// handleRangeInput: @ 01defb58

/* Function Stack Size: 0x18 bytes */

void WCRefineStepCountSettingsViewController::handleRangeInput_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_48;
  uint local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  local_38 = 0;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromSender__026b1b18,local_28);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  FUN_01defd08();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  bVar1 = (IVar3 & 1) != 0;
  if (bVar1) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setStepCountRandomMin__026c59f8,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setStepCountRandomMax__026c5a00,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_invalidateTodayPlan_026c5a08);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gV_OX_);
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_<h_6);
  }
  local_3c = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

