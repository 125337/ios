// wcr_observingPhotoLibrary @ 0070928c

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenRecordingFrameProcessor::wcr_observingPhotoLibrary(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xe) & 1;
}

