// displayHorizontalGridLines @0xbe8a8

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropOverlayView::displayHorizontalGridLines(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_displayHorizontalGridLines) & 1;
}

