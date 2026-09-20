// toggleIconNameCaptureEnabled: @ 01f31434

/* Function Stack Size: 0x18 bytes */

void WCRefineUIBeautifyViewController::toggleIconNameCaptureEnabled_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if (((uVar1 & 1) == 0) ||
     (puVar2 = PTR_WCRefineIconNameCaptureSupport_026cec30,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_isCloudAllowed_026ad3a0),
     ((ulong)puVar2 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_syncFloatingControl_026ad4f8);
    }
    else {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (((ulong)puVar3 & 1) == 0) {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineIconNameCaptureSupport_026cec30,
                   PTR_s_expandFloatingCaptureWindow_026ad4f0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_syncFloatingControl_026ad4f8);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOn_animated__026a8098,0,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__nc_y
               ,&cf_OSVhbS_NQR,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  _objc_storeStrong(&local_28,0);
  return;
}

