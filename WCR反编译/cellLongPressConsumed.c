// cellLongPressConsumed @ 015f6260

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::cellLongPressConsumed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_cellLongPressConsumed) & 1;
}

