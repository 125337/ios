// sidebarShowRedDot @ 015f5bb0

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::sidebarShowRedDot(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_sidebarShowRedDot) & 1;
}

