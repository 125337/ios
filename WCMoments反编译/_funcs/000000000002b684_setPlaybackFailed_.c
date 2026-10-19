// setPlaybackFailed: @0x2b684

/* Function Stack Size: 0x14 bytes */

void WCMVideoController::setPlaybackFailed_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_playbackFailed) = (byte)param_3 & 1;
  return;
}

