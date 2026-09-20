// setLastDarkModeValid: @ 015f5fa0

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setLastDarkModeValid_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_lastDarkModeValid) = (byte)param_3 & 1;
  return;
}

