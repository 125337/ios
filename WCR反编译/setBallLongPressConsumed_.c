// setBallLongPressConsumed: @ 015f6230

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setBallLongPressConsumed_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_ballLongPressConsumed) = (byte)param_3 & 1;
  return;
}

