// setIsAligned: @ 01d5e1f4

/* Function Stack Size: 0x14 bytes */

void WCRefineScreenshotFrameEditorViewController::setIsAligned_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isAligned) = (byte)param_3 & 1;
  return;
}

