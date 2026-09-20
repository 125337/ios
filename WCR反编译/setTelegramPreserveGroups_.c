// setTelegramPreserveGroups: @ 01ab1d38

/* Function Stack Size: 0x14 bytes */

void WCRGroupCreateViewController::setTelegramPreserveGroups_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_telegramPreserveGroups) = (byte)param_3 & 1;
  return;
}

