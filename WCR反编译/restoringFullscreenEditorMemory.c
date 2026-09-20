// restoringFullscreenEditorMemory @ 01684468

/* Function Stack Size: 0x10 bytes */

bool WCRSuperFloatCropViewController::restoringFullscreenEditorMemory(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_restoringFullscreenEditorMemory) & 1;
}

