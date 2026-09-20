// setShowNickname: @ 01c6e398

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setShowNickname_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showNickname) = (byte)param_3 & 1;
  return;
}

