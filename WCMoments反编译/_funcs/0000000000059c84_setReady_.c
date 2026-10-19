// setReady: @0x59c84

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setReady_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_ready) = (byte)param_3 & 1;
  return;
}

