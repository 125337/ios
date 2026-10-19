// previousHidesBottomBar @0x59d10

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::previousHidesBottomBar(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_previousHidesBottomBar) & 1;
}

