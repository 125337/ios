// exhausted @0x59ff0

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::exhausted(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_exhausted) & 1;
}

