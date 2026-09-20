// isMovingSelectedStroke @ 0168353c

/* Function Stack Size: 0x10 bytes */

bool WCRSuperFloatCropViewController::isMovingSelectedStroke(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isMovingSelectedStroke) & 1;
}

