// setCachedFeedShown: @0x5a344

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setCachedFeedShown_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_cachedFeedShown) = (byte)param_3 & 1;
  return;
}

