// setLivePreviewEnabled: @ 01912aa8

/* Function Stack Size: 0x14 bytes */

void WCRefineColorPickerController::setLivePreviewEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_livePreviewEnabled) = (byte)param_3 & 1;
  return;
}

