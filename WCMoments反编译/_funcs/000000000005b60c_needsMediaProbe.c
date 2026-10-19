// needsMediaProbe @0x5b60c

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::needsMediaProbe(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_needsMediaProbe) & 1;
}

