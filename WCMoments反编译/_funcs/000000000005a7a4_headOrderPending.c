// headOrderPending @0x5a7a4

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::headOrderPending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_headOrderPending) & 1;
}

