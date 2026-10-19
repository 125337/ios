// setExhausted: @0x5a01c

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setExhausted_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_exhausted) = (byte)param_3 & 1;
  return;
}

