// mediaReloadScheduled @0x5a910

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::mediaReloadScheduled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_mediaReloadScheduled) & 1;
}

