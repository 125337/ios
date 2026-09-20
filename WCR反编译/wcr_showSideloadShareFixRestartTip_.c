// wcr_showSideloadShareFixRestartTip: @ 01a487dc

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::wcr_showSideloadShareFixRestartTip_
               (ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  char *local_38;
  char *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,local_28,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zT_T,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zsS_T,local_18,
               PTR_s_handleImmediateRestart__026bc4b8);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

