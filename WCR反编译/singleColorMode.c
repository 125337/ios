// singleColorMode @ 01912a20

/* Function Stack Size: 0x10 bytes */

bool WCRefineColorPickerController::singleColorMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_singleColorMode) & 1;
}

