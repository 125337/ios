// setJumpToContactInfoWhenTapAvatar: @ 01c6deb8

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setJumpToContactInfoWhenTapAvatar_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_jumpToContactInfoWhenTapAvatar) = (byte)param_3 & 1;
  return;
}

