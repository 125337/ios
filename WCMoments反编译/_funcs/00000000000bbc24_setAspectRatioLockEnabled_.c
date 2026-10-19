// setAspectRatioLockEnabled: @0xbbc24

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setAspectRatioLockEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_aspectRatioLockEnabled) = (byte)param_3 & 1;
  return;
}

