// onLiveToggle: @ 00fdb9e0

/* Function Stack Size: 0x18 bytes */

void WCRIconNameCaptureFloatWindow::onLiveToggle_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setLiveCaptureArmed__026ad358,uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshChrome_026ad2a8);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__f_PbS);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_scheduleAutoCapture_026ad300);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf__);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

