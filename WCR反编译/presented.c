// presented @ 00f7324c

/* Function Stack Size: 0x10 bytes */

bool WCRFriendRelationProgressPresenter::presented(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

