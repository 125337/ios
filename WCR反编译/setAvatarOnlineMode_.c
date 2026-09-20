// setAvatarOnlineMode: @ 01c6d6a4

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setAvatarOnlineMode_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_avatarOnlineMode) = (byte)param_3 & 1;
  return;
}

