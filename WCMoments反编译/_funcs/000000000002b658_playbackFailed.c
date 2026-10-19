// playbackFailed @0x2b658

/* Function Stack Size: 0x10 bytes */

bool WCMVideoController::playbackFailed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_playbackFailed) & 1;
}

