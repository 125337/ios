// handleFixedTargetInput: @ 01df01f8

/* Function Stack Size: 0x18 bytes */

void WCRefineStepCountSettingsViewController::handleFixedTargetInput_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textFromSender__026b1b18,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQekpe);
    local_34 = 1;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    FUN_01deef5c();
    local_40 = puVar1;
    if ((long)puVar1 < 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQgHeekpe);
      local_34 = 1;
    }
    else {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setStepCountTarget__026c5a40,local_40);
      puVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_stepCountInitial_026a7ee0);
      if (puVar1 == local_40) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lockTodayToSteps__026c5a28,local_40);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_invalidateTodayPlan_026c5a08);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_V_vh_OX_);
      _objc_storeStrong(&local_48,0);
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

