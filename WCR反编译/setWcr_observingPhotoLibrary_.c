// setWcr_observingPhotoLibrary: @ 007092ac

/* Function Stack Size: 0x14 bytes */

void WCRefineScreenRecordingFrameProcessor::setWcr_observingPhotoLibrary_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xe) = (byte)param_3 & 1;
  return;
}

