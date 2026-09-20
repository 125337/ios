// clearDoubleModeCache @ 007166f4

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameProcessor::clearDoubleModeCache(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCachedFirstScreenshot__026a7698);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCachedFirstScreenshotAsset__026a76a0,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCachedFirstScreenshotLocalIde_026a76a8,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCachedFirstScreenshotTime__026a76b0,0);
  return;
}

