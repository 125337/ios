// setPullDistance: @0x5a600

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::setPullDistance_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_pullDistance) = param_3;
  return;
}

