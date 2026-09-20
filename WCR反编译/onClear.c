// onClear @ 00fdbd58

/* Function Stack Size: 0x10 bytes */

void WCRIconNameCaptureFloatWindow::onClear(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_clearResults_026ad368);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshChrome_026ad2a8);
  puVar1 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_isLiveCaptureArmed_026ad250);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nzz);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_scheduleAutoCapture_026ad300);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__nzz__bSS_MRu);
  }
  return;
}

