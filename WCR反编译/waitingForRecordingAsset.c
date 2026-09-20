// waitingForRecordingAsset @ 0070907c

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::waitingForRecordingAsset(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

