// initialHeadPending @0x5ac58

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::initialHeadPending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_initialHeadPending) & 1;
}

