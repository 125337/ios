// wcr_frameAlbumMaxWaitScheduled @ 00716ed4

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenshotFrameProcessor::wcr_frameAlbumMaxWaitScheduled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

