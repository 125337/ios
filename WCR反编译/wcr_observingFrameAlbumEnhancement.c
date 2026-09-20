// wcr_observingFrameAlbumEnhancement @ 00716fb4

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenshotFrameProcessor::wcr_observingFrameAlbumEnhancement(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

