// lastCapturedState @ 00708e08

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::lastCapturedState(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

