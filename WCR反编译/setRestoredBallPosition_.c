// setRestoredBallPosition: @ 015f5cf0

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setRestoredBallPosition_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_restoredBallPosition) = (byte)param_3 & 1;
  return;
}

