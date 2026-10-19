// setLastVideoTrace: @0x2bd50

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::setLastVideoTrace_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastVideoTrace) = param_3;
  return;
}

