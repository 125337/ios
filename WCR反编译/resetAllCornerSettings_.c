// resetAllCornerSettings: @ 0193ac4c

/* Function Stack Size: 0x18 bytes */

void WCRefineCornerViewController::resetAllCornerSettings_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_n_,local_18,
             PTR_s_confirmResetAllCornerSettings_026b9510);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

