// isDoubleMode @ 01d5e274

/* Function Stack Size: 0x10 bytes */

bool WCRefineScreenshotFrameEditorViewController::isDoubleMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isDoubleMode) & 1;
}

