// setScreenshotObsInstalled: @ 015f5ffc

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setScreenshotObsInstalled_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_screenshotObsInstalled) = (byte)param_3 & 1;
  return;
}

