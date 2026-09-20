// setShowInGroup: @ 01c6df70

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setShowInGroup_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showInGroup) = (byte)param_3 & 1;
  return;
}

