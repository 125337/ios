// setHasScheduledInitialLiveRefresh: @ 014da9dc

/* Function Stack Size: 0x14 bytes */

void WCRefineSearchManager::setHasScheduledInitialLiveRefresh_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xc) = (byte)param_3 & 1;
  return;
}

