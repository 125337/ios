// wcr_processFrameAlbumEnhancementScanMaxWait @ 00710b40

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameProcessor::wcr_processFrameAlbumEnhancementScanMaxWait
               (ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWcr_frameAlbumMaxWaitSchedule_026a7700,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             param_1,PTR_s_processAlbumEnhancementScanFromL_026a76e0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_processAlbumEnhancementScanFromL_026a76e0);
  return;
}

