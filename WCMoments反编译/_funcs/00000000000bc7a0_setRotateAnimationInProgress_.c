// setRotateAnimationInProgress: @0xbc7a0

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setRotateAnimationInProgress_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_rotateAnimationInProgress) = (byte)param_3 & 1;
  return;
}

