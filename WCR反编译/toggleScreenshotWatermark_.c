// toggleScreenshotWatermark: @ 017fc9c8

/* Function Stack Size: 0x18 bytes */

void WCRefineAssistFunctionViewController::toggleScreenshotWatermark_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,uVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setValue_forKey__0269d300,puVar3,&cf_screenshotWatermarkEnabled);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar3 = local_30;
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setValue_forKey__0269d300,puVar1,&cf_screenshotWatermark1Enabled);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_saveConfig_0269e5d0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

