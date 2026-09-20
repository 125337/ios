// setCellLongPressConsumed: @ 015f628c

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setCellLongPressConsumed_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_cellLongPressConsumed) = (byte)param_3 & 1;
  return;
}

