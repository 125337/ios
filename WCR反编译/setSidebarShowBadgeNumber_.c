// setSidebarShowBadgeNumber: @ 015f5c38

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setSidebarShowBadgeNumber_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_sidebarShowBadgeNumber) = (byte)param_3 & 1;
  return;
}

