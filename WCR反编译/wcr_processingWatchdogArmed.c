// wcr_processingWatchdogArmed @ 00709468

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_processingWatchdogArmed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xf) & 1;
}

