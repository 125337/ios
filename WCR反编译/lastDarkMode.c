// lastDarkMode @ 015f5f18

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::lastDarkMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_lastDarkMode) & 1;
}

