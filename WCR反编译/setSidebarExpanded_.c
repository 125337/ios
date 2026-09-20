// setSidebarExpanded: @ 015f5c94

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setSidebarExpanded_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_sidebarExpanded) = (byte)param_3 & 1;
  return;
}

