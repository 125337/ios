// checkFriendsEnd @ 00fc500c

/* Function Stack Size: 0x10 bytes */

bool WCRefineHelper::checkFriendsEnd(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x20) & 1;
}

