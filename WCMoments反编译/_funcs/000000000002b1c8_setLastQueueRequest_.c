// setLastQueueRequest: @0x2b1c8

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::setLastQueueRequest_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastQueueRequest) = param_3;
  return;
}

