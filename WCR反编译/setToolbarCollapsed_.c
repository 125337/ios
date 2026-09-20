// setToolbarCollapsed: @ 01684084

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::setToolbarCollapsed_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_toolbarCollapsed) = (byte)param_3 & 1;
  return;
}

