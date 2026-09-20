// wcr_endScreenshotPassThrough @ 015e5924

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::wcr_endScreenshotPassThrough(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_cancelPassThroughRestore_026b1260);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_screenshotPassThrough_026b1270);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setScreenshotPassThrough__026b1258,0);
  }
  return;
}

