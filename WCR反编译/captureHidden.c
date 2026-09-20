// captureHidden @ 015f5e60

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::captureHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_captureHidden) & 1;
}

