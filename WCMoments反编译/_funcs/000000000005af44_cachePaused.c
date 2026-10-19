// cachePaused @0x5af44

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::cachePaused(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_cachePaused) & 1;
}

