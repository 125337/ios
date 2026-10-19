// pendingFeedPreferLatest @0x594f8

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::pendingFeedPreferLatest(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_pendingFeedPreferLatest) & 1;
}

