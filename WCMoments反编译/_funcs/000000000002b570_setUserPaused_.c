// setUserPaused: @0x2b570

/* Function Stack Size: 0x14 bytes */

void WCMVideoController::setUserPaused_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_userPaused) = (byte)param_3 & 1;
  return;
}

