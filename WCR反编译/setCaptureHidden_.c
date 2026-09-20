// setCaptureHidden: @ 015f5e8c

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setCaptureHidden_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_captureHidden) = (byte)param_3 & 1;
  return;
}

