// toggleLongPressScreenshotQuickSend: @ 01a562d4

/* Function Stack Size: 0x18 bytes */

void WCRefineGeneralFunctionViewController::toggleLongPressScreenshotQuickSend_
               (ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) != 0) {
    cVar1 = -0x20;
    FUN_01a19cf0(&cf_screenshot_quick_send,1,0x612e94f0,local_28);
    if (cVar1 != '\x03') {
      if (cVar1 == '\x02') {
        puVar3 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      }
      goto LAB_01a564f0;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
               &cf_WCRefine,&::cf___,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
LAB_01a564f0:
  _objc_storeStrong(&local_28,0);
  return;
}

