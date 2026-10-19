// setInTransition: @0xac1b8

/* Function Stack Size: 0x14 bytes */

void WCMTOCropViewController::setInTransition_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_inTransition) = (byte)param_3 & 1;
  return;
}

