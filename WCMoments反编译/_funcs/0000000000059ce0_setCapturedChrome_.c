// setCapturedChrome: @0x59ce0

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setCapturedChrome_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_capturedChrome) = (byte)param_3 & 1;
  return;
}

