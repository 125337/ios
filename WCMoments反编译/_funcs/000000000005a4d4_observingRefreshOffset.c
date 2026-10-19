// observingRefreshOffset @0x5a4d4

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::observingRefreshOffset(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_observingRefreshOffset) & 1;
}

