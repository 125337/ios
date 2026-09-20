// openSettingsButtonIconPicker @ 01c88cbc

/* Function Stack Size: 0x10 bytes */

void WCRefinePluginContainerSettingsViewController::openSettingsButtonIconPicker
               (ID param_1,SEL param_2)

{
  char *pcVar1;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_bVh,local_18,
             PTR_s_presentSettingsButtonIconSelecto_026c29f0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_Y,local_18,
             PTR_s_resetSettingsButtonIcon_026c29f8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_show_0269d280);
  _objc_storeStrong(&local_28,0);
  return;
}

