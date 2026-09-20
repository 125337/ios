// wcr_disarmProcessingWatchdog @ 007008d4

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_disarmProcessingWatchdog(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_processingWatchdogArmed_026a73a8);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWcr_processingWatchdogArmed__026a7398,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
               param_1,PTR_s_wcr_processingWatchdogFired_026a73a0,0);
  }
  return;
}

