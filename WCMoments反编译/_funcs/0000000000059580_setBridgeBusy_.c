// setBridgeBusy: @0x59580

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setBridgeBusy_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_bridgeBusy) = (byte)param_3 & 1;
  return;
}

