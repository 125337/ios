// hasScheduledInitialLiveRefresh @ 014da9bc

/* Function Stack Size: 0x10 bytes */

bool WCRefineSearchManager::hasScheduledInitialLiveRefresh(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xc) & 1;
}

