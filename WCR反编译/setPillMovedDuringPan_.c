// setPillMovedDuringPan: @ 00fdd5a4

/* Function Stack Size: 0x14 bytes */

void WCRIconNameCaptureFloatWindow::setPillMovedDuringPan_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_pillMovedDuringPan) = (byte)param_3 & 1;
  return;
}

