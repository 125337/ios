// setNeedsBindingMore: @0x599ac

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setNeedsBindingMore_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_needsBindingMore) = (byte)param_3 & 1;
  return;
}

