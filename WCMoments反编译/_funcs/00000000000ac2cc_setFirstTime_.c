// setFirstTime: @0xac2cc

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setFirstTime_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_firstTime) = (byte)param_3 & 1;
  return;
}

