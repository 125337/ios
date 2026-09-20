// sidebarExpanded @ 015f5c68

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::sidebarExpanded(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_sidebarExpanded) & 1;
}

