// setHidesNavigationBar: @0xabcdc

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setHidesNavigationBar_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_hidesNavigationBar) = (byte)param_3 & 1;
  return;
}

