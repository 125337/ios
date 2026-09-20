// setDidAutoSelectFullScreen: @ 01682a7c

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::setDidAutoSelectFullScreen_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_didAutoSelectFullScreen) = (byte)param_3 & 1;
  return;
}

