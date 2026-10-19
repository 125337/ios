// resetAspectRatioEnabled @0xbbcb0

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::resetAspectRatioEnabled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_resetAspectRatioEnabled) & 1;
}

