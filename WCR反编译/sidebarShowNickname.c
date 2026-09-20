// sidebarShowNickname @ 015f5b54

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::sidebarShowNickname(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_sidebarShowNickname) & 1;
}

