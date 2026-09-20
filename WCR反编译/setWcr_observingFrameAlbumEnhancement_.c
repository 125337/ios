// setWcr_observingFrameAlbumEnhancement: @ 00716fd4

/* Function Stack Size: 0x14 bytes */

void WCRefineScreenshotFrameProcessor::setWcr_observingFrameAlbumEnhancement_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 10) = (byte)param_3 & 1;
  return;
}

