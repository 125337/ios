// wcr_restoreAfterScreenCapture @ 015e5c60

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::wcr_restoreAfterScreenCapture(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_cancelCaptureVisualRestore_026b1288);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_endScreenshotPassThrough_026b1268);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_captureHidden_026b1278);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setCaptureHidden__026b1280,0);
    IVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyActiveBallAlpha_026b1290);
  }
  return;
}

