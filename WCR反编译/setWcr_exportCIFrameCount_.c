// setWcr_exportCIFrameCount: @ 007092f0

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::setWcr_exportCIFrameCount_
               (ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + 0x58) = param_3;
  return;
}

