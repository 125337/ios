// livePreviewEnabled @ 01912a7c

/* Function Stack Size: 0x10 bytes */

bool WCRefineColorPickerController::livePreviewEnabled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_livePreviewEnabled) & 1;
}

