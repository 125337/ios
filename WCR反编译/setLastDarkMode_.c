// setLastDarkMode: @ 015f5f44

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setLastDarkMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_lastDarkMode) = (byte)param_3 & 1;
  return;
}

