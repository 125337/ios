// ballLongPressConsumed @ 015f6204

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::ballLongPressConsumed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_ballLongPressConsumed) & 1;
}

