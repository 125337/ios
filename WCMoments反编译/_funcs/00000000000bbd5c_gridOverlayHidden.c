// gridOverlayHidden @0xbbd5c

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::gridOverlayHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_gridOverlayHidden) & 1;
}

