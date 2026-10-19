// setPreviousOpaqueBars: @0x59e44

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setPreviousOpaqueBars_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_previousOpaqueBars) = (byte)param_3 & 1;
  return;
}

