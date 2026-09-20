// setStartsWithFullScreen: @ 01684438

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::setStartsWithFullScreen_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_startsWithFullScreen) = (byte)param_3 & 1;
  return;
}

