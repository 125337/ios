// toggleHideMainFrameNativeSearch: @ 01b54a7c

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::toggleHideMainFrameNativeSearch_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  char *local_38;
  char *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn__0269dc80,puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar3 & 1) != 0) {
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    local_30 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_38 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,local_18,
                 PTR_s_alertCancel_026b2910);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

