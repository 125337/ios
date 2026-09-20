// secureShieldOn @ 015f5d44

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatWindow::secureShieldOn(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_secureShieldOn) & 1;
}

