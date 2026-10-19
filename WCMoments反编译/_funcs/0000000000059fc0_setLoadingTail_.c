// setLoadingTail: @0x59fc0

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setLoadingTail_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_loadingTail) = (byte)param_3 & 1;
  return;
}

