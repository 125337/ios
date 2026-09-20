// themeBoxGroupTopModeChanged: @ 01f44738

/* Function Stack Size: 0x18 bytes */

void WCRefineUICleanViewController::themeBoxGroupTopModeChanged_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &::cf_newline_s_;
  if (local_30 == 1) {
    _objc_storeStrong(0,&local_38,&::cf_newline_s_);
  }
  else if (local_30 == 2) {
    _objc_storeStrong(0,&local_38,&::cf_newline_s_);
  }
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zT_T,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_zsS_T,local_18,
             PTR_s_handleImmediateRestart__026bc4b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

