// pendingSeenIDs @0x59b4c

/* Function Stack Size: 0x10 bytes */

ID WCMFeedController::pendingSeenIDs(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_pendingSeenIDs);
}

