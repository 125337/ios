// wcr_armProcessingWatchdog @ 0070084c

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_armProcessingWatchdog(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_disarmProcessingWatchdog_026a7390);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWcr_processingWatchdogArmed__026a7398,1);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4082c00000000000,param_1,PTR_s_performSelector_withObject_after_026a4990,
             PTR_s_wcr_processingWatchdogFired_026a73a0,0);
  return;
}

