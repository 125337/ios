// setInitialHeadPending: @0x5ac84

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setInitialHeadPending_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_initialHeadPending) = (byte)param_3 & 1;
  return;
}

