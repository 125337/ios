// setSecureShieldOn: @ 015f5d70

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatWindow::setSecureShieldOn_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_secureShieldOn) = (byte)param_3 & 1;
  return;
}

