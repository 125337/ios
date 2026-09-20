// setSingleColorMode: @ 01912a4c

/* Function Stack Size: 0x14 bytes */

void WCRefineColorPickerController::setSingleColorMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_singleColorMode) = (byte)param_3 & 1;
  return;
}

