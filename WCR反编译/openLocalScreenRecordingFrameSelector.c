// openLocalScreenRecordingFrameSelector @ 017f51c8

/* Function Stack Size: 0x10 bytes */

void WCRefineAssistFunctionViewController::openLocalScreenRecordingFrameSelector
               (ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_canUseScreenRecordingFrameBetaFe_026b58c8);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_showScreenRecordingFrameBetaRest_026b58d8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR_s_presentLocalVideoPickerWithAssoc_026b5968,
               &cf_wcrefine_localScreenRecordingFramePicker);
  }
  return;
}

