// canBeReset @0xbba48

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::canBeReset(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_canBeReset) & 1;
}

