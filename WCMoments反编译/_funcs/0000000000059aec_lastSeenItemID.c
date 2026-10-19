// lastSeenItemID @0x59aec

/* Function Stack Size: 0x10 bytes */

ID WCMFeedController::lastSeenItemID(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_lastSeenItemID);
}

