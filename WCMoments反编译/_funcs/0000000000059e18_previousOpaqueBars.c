// previousOpaqueBars @0x59e18

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::previousOpaqueBars(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_previousOpaqueBars) & 1;
}

