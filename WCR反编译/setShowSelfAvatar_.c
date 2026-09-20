// setShowSelfAvatar: @ 01c6dd48

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setShowSelfAvatar_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showSelfAvatar) = (byte)param_3 & 1;
  return;
}

