// setPreviousPlaybackTime: @0x2bdf0

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::setPreviousPlaybackTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_previousPlaybackTime) = param_3;
  return;
}

