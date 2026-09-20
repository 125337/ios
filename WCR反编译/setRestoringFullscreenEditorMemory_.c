// setRestoringFullscreenEditorMemory: @ 01684494

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::setRestoringFullscreenEditorMemory_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_restoringFullscreenEditorMemory) = (byte)param_3 & 1;
  return;
}

