// setSeeking: @0x2b628

/* Function Stack Size: 0x14 bytes */

void WCMVideoController::setSeeking_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_seeking) = (byte)param_3 & 1;
  return;
}

