// setRefreshingHead: @0x5a774

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setRefreshingHead_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_refreshingHead) = (byte)param_3 & 1;
  return;
}

