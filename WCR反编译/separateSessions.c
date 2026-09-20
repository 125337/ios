// separateSessions @ 015f59a8

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::separateSessions(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_separateSessions) & 1;
}

