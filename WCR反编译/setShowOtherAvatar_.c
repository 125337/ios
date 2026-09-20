// setShowOtherAvatar: @ 01c6dda4

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setShowOtherAvatar_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showOtherAvatar) = (byte)param_3 & 1;
  return;
}

