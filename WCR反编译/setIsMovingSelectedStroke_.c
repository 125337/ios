// setIsMovingSelectedStroke: @ 01683568

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::setIsMovingSelectedStroke_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isMovingSelectedStroke) = (byte)param_3 & 1;
  return;
}

