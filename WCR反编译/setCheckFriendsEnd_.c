// setCheckFriendsEnd: @ 00fc502c

/* Function Stack Size: 0x14 bytes */

void WCRefineHelper::setCheckFriendsEnd_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0x20) = (byte)param_3 & 1;
  return;
}

