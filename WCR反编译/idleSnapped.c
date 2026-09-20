// idleSnapped @ 015f614c

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::idleSnapped(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_idleSnapped) & 1;
}

