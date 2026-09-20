// setShowInPrivate: @ 01c6df14

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setShowInPrivate_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showInPrivate) = (byte)param_3 & 1;
  return;
}

