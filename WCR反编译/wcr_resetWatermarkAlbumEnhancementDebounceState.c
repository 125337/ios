// wcr_resetWatermarkAlbumEnhancementDebounceState @ 00726ae0

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotWatermarkProcessor::wcr_resetWatermarkAlbumEnhancementDebounceState
               (ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             param_1,PTR_s_processWatermarkAlbumEnhancement_026a79f0);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSObject_026ce188,PTR_s_cancelPreviousPerformRequestsWit_026a4988,
             param_1,PTR_s_wcr_processWatermarkAlbumEnhance_026a79f8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setWcr_albumMaxWaitScheduled__026a7a00,0);
  return;
}

