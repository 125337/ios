// metadataRefreshPending @0x5ab9c

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::metadataRefreshPending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_metadataRefreshPending) & 1;
}

