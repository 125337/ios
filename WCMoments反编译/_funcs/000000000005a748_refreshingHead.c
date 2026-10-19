// refreshingHead @0x5a748

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::refreshingHead(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_refreshingHead) & 1;
}

