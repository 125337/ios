// setScreenshotPassThrough: @ 015f5ee8

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setScreenshotPassThrough_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_screenshotPassThrough) = (byte)param_3 & 1;
  return;
}

