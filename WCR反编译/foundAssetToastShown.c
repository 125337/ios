// foundAssetToastShown @ 007090c4

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::foundAssetToastShown(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

