// setSeparateSessions: @ 015f59d4

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setSeparateSessions_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_separateSessions) = (byte)param_3 & 1;
  return;
}

