// alwaysShowCroppingGrid @0xbbec8

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::alwaysShowCroppingGrid(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_alwaysShowCroppingGrid) & 1;
}

