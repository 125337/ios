// setIsDoubleMode: @ 01d5e2a0

/* Function Stack Size: 0x14 bytes */

void WCRefineScreenshotFrameEditorViewController::setIsDoubleMode_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isDoubleMode) = (byte)param_3 & 1;
  return;
}

