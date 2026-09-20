// ballDragging @ 015f61a8

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::ballDragging(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_ballDragging) & 1;
}

