// changeHidePassword @ 01c89970

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginContainerSettingsViewController::changeHidePassword(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_setAssociatedObject(local_18,DAT_028c6900,0,1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_promptSetHidePasswordWithMessage_026c2a18,&cf_n_);
  }
  else {
    pcVar3 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_cancelHidePasswordChange_026c2a20);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&::cf_N,local_18,
               PTR_s_handleHideCurrentPassword__026c2a28);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_show_0269d280);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

