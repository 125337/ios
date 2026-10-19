// setPendingFeedPreferLatest: @0x59524

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setPendingFeedPreferLatest_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_pendingFeedPreferLatest) = (byte)param_3 & 1;
  return;
}

