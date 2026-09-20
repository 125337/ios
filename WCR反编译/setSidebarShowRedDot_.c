// setSidebarShowRedDot: @ 015f5bdc

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setSidebarShowRedDot_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_sidebarShowRedDot) = (byte)param_3 & 1;
  return;
}

