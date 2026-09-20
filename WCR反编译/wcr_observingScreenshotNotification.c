// wcr_observingScreenshotNotification @ 00716f6c

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenshotFrameProcessor::wcr_observingScreenshotNotification(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

