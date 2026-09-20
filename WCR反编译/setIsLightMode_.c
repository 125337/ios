// setIsLightMode: @ 01912bc4

/* Function Stack Size: 0x14 bytes */

void WCRefineColorPickerController::setIsLightMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isLightMode) = (byte)param_3 & 1;
  return;
}

