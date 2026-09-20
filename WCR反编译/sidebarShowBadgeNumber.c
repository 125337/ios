// sidebarShowBadgeNumber @ 015f5c0c

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::sidebarShowBadgeNumber(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_sidebarShowBadgeNumber) & 1;
}

