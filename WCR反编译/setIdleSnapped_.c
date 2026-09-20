// setIdleSnapped: @ 015f6178

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setIdleSnapped_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_idleSnapped) = (byte)param_3 & 1;
  return;
}

