// setHeadOrderPending: @0x5a7d0

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setHeadOrderPending_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_headOrderPending) = (byte)param_3 & 1;
  return;
}

