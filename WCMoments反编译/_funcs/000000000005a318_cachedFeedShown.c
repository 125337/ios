// cachedFeedShown @0x5a318

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::cachedFeedShown(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_cachedFeedShown) & 1;
}

