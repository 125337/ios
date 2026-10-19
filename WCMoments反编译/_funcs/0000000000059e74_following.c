// following @0x59e74

/* Function Stack Size: 0x10 bytes */

ID WCMFeedController::following(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_following);
}

