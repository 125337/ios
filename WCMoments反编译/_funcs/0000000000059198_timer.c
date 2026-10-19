// timer @0x59198

/* Function Stack Size: 0x10 bytes */

ID WCMFeedController::timer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_timer);
}

