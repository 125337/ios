// gridHidden @0xbe87c

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropOverlayView::gridHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_gridHidden) & 1;
}

