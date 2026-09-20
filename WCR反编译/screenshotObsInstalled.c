// screenshotObsInstalled @ 015f5fd0

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::screenshotObsInstalled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_screenshotObsInstalled) & 1;
}

