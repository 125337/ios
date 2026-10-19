// setLastTrim: @0x5a448

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::setLastTrim_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastTrim) = param_3;
  return;
}

