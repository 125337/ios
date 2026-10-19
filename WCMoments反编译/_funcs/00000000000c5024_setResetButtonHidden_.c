// setResetButtonHidden: @0xc5024

/* Function Stack Size: 0x14 bytes */

void WCMTOCropToolbar::setResetButtonHidden_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 local_30;
  
  if ((*(byte *)(param_1 + (long)_resetButtonHidden) & 1) != ((byte)param_3 & 1)) {
    *(byte *)(param_1 + (long)_resetButtonHidden) = (byte)param_3 & 1;
    _objc_msgSend_setNeedsLayout(param_1,local_30);
  }
  return;
}

