// setLastWarm: @0x2c020

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::setLastWarm_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastWarm) = param_3;
  return;
}

