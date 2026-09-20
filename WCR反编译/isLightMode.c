// isLightMode @ 01912b98

/* Function Stack Size: 0x10 bytes */

bool WCRefineColorPickerController::isLightMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isLightMode) & 1;
}

