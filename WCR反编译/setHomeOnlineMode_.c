// setHomeOnlineMode: @ 01c6d590

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setHomeOnlineMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_homeOnlineMode) = (byte)param_3 & 1;
  return;
}

