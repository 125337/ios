// homeOnlineMode @ 01c6d564

/* Function Stack Size: 0x10 bytes */

bool WCRefineNavigationAvatarViewController::homeOnlineMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_homeOnlineMode) & 1;
}

