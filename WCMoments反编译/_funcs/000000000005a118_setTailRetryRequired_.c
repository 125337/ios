// setTailRetryRequired: @0x5a118

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setTailRetryRequired_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_tailRetryRequired) = (byte)param_3 & 1;
  return;
}

