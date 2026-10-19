// setObservedVideoBytes: @0x2c110

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::setObservedVideoBytes_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + (long)_observedVideoBytes) = param_3;
  return;
}

