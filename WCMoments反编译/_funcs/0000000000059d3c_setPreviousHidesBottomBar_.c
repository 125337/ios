// setPreviousHidesBottomBar: @0x59d3c

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setPreviousHidesBottomBar_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_previousHidesBottomBar) = (byte)param_3 & 1;
  return;
}

