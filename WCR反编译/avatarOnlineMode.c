// avatarOnlineMode @ 01c6d678

/* Function Stack Size: 0x10 bytes */

bool WCRefineNavigationAvatarViewController::avatarOnlineMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_avatarOnlineMode) & 1;
}

