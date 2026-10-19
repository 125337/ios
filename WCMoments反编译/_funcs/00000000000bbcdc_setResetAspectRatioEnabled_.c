// setResetAspectRatioEnabled: @0xbbcdc

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setResetAspectRatioEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_resetAspectRatioEnabled) = (byte)param_3 & 1;
  return;
}

