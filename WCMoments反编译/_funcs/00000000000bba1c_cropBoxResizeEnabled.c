// cropBoxResizeEnabled @0xbba1c

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::cropBoxResizeEnabled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_cropBoxResizeEnabled) & 1;
}

