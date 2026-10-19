// ready @0x59c58

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::ready(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_ready) & 1;
}

