// setMuted: @0x2b5cc

/* Function Stack Size: 0x14 bytes */

void WCMVideoController::setMuted_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_muted) = (byte)param_3 & 1;
  return;
}

