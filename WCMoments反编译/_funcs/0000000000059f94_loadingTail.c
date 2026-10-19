// loadingTail @0x59f94

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::loadingTail(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_loadingTail) & 1;
}

