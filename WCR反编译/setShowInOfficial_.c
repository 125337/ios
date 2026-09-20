// setShowInOfficial: @ 01c6dfcc

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setShowInOfficial_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showInOfficial) = (byte)param_3 & 1;
  return;
}

