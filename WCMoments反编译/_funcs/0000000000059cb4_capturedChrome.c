// capturedChrome @0x59cb4

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::capturedChrome(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_capturedChrome) & 1;
}

