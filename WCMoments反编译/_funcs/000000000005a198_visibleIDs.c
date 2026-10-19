// visibleIDs @0x5a198

/* Function Stack Size: 0x10 bytes */

ID WCMFeedController::visibleIDs(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_visibleIDs);
}

