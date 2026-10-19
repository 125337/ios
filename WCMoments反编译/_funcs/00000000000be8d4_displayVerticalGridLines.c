// displayVerticalGridLines @0xbe8d4

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropOverlayView::displayVerticalGridLines(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_displayVerticalGridLines) & 1;
}

