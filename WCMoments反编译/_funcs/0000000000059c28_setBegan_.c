// setBegan: @0x59c28

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setBegan_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_began) = (byte)param_3 & 1;
  return;
}

