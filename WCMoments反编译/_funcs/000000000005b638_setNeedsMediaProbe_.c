// setNeedsMediaProbe: @0x5b638

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setNeedsMediaProbe_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_needsMediaProbe) = (byte)param_3 & 1;
  return;
}

