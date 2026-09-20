// screenRecordingFrameRandomModeChanged: @ 017f2a6c

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::screenRecordingFrameRandomModeChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  if ((lVar1 < 0) || (local_30 = lVar1, 2 < lVar1)) {
    local_30 = 0;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_30 == 1) {
    pcVar3 = "WCUIAlertView";
    _objc_getClass(0);
    local_38 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_40 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_addBtnTitle_target_sel__0269d278,&cf_bwSN,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
      _objc_storeStrong(&local_40,0);
    }
  }
  else if (local_30 == 2) {
    pcVar3 = "WCUIAlertView";
    _objc_getClass(0);
    local_48 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_50 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_addBtnTitle_target_sel__0269d278,&cf_bwSN,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
      _objc_storeStrong(&local_50,0);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

