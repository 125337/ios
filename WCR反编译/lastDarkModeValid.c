// lastDarkModeValid @ 015f5f74

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::lastDarkModeValid(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_lastDarkModeValid) & 1;
}

