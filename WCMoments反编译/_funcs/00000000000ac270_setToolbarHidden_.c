// setToolbarHidden: @0xac270

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setToolbarHidden_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_toolbarHidden) = (byte)param_3 & 1;
  return;
}

