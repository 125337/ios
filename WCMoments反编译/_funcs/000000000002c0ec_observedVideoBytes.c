// observedVideoBytes @0x2c0ec

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCMVideoController::observedVideoBytes(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_observedVideoBytes);
}

