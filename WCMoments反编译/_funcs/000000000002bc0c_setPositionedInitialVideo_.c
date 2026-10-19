// setPositionedInitialVideo: @0x2bc0c

/* Function Stack Size: 0x14 bytes */

void WCMVideoController::setPositionedInitialVideo_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_positionedInitialVideo) = (byte)param_3 & 1;
  return;
}

