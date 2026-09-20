// setBallDragging: @ 015f61d4

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setBallDragging_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_ballDragging) = (byte)param_3 & 1;
  return;
}

