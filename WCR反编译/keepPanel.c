// keepPanel @ 00248c80

/* Function Stack Size: 0x10 bytes */

bool WCREmoticonGroupAlertBridge::keepPanel(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

