// toggleVoiceClone: @ 01f657c4

/* Function Stack Size: 0x18 bytes */

void WCRefineVoiceCloneSettingsViewController::toggleVoiceClone_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_voiceCloneVisibleForCurrentUser_026a9dd8);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn_animated__026a8098,0,1);
    local_2c = 1;
  }
  else {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    if ((uVar2 & 1) == 0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn_animated__026a8098,0,1);
      pcVar3 = "WCUIAlertView";
      _objc_getClass();
      local_38 = pcVar3;
      if (pcVar3 == (char *)0x0) {
        local_2c = 1;
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_40 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_N_uN,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_br_bb,local_18,
                   PTR_s_confirmVoiceCloneEnable__026c96e8);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
        _objc_storeStrong(&local_40,0);
        local_2c = 0;
      }
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

