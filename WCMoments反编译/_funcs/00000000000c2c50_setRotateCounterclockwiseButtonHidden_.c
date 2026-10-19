// setRotateCounterclockwiseButtonHidden: @0xc2c50

/* Function Stack Size: 0x14 bytes */

void WCMTOCropToolbar::setRotateCounterclockwiseButtonHidden_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 local_30;
  
  if ((*(byte *)(param_1 + (long)_rotateCounterclockwiseButtonHidden) & 1) != ((byte)param_3 & 1)) {
    *(byte *)(param_1 + (long)_rotateCounterclockwiseButtonHidden) = (byte)param_3 & 1;
    _objc_msgSend_setNeedsLayout(param_1,local_30);
  }
  return;
}

