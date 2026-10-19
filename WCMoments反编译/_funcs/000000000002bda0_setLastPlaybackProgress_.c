// setLastPlaybackProgress: @0x2bda0

/* Function Stack Size: 0x18 bytes */

void WCMVideoController::setLastPlaybackProgress_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastPlaybackProgress) = param_3;
  return;
}

