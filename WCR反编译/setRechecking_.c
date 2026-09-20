// setRechecking: @ 00f7ca50

/* Function Stack Size: 0x14 bytes */

void WCRefineFriendRelationChecker::setRechecking_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 9) = (byte)param_3 & 1;
  return;
}

