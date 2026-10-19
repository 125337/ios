// setLastSeenCreateTime: @0x59ac0

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setLastSeenCreateTime_(ID param_1,SEL param_2,unsigned_int param_3)

{
  *(unsigned_int *)(param_1 + (long)_lastSeenCreateTime) = param_3;
  return;
}

