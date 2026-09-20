// setWcr_exportStuckTickCount: @ 007093f0

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::setWcr_exportStuckTickCount_
               (ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + 0x78) = param_3;
  return;
}

