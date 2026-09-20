// screenshotPassThrough @ 015f5ebc

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::screenshotPassThrough(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_screenshotPassThrough) & 1;
}

