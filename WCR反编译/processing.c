// processing @ 00708fe0

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::processing(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

