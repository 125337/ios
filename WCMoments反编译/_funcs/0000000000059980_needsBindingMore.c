// needsBindingMore @0x59980

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::needsBindingMore(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_needsBindingMore) & 1;
}

