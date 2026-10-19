// setLastWebScrollTime: @0x59674

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::setLastWebScrollTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastWebScrollTime) = param_3;
  return;
}

