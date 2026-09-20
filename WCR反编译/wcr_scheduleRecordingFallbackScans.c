// wcr_scheduleRecordingFallbackScans @ 006eac24

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_scheduleRecordingFallbackScans
               (ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4008000000000000,param_1,PTR_s_performSelector_withObject_after_026a4990,
             PTR_s_wcr_processPendingRecordingScan_026a6ee0);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4018000000000000,param_1,PTR_s_performSelector_withObject_after_026a4990,
             PTR_s_wcr_processPendingRecordingScan_026a6ee0,0);
  return;
}

