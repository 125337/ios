// setCachePaused: @0x5af70

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setCachePaused_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_cachePaused) = (byte)param_3 & 1;
  return;
}

