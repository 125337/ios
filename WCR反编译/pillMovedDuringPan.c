// pillMovedDuringPan @ 00fdd578

/* Function Stack Size: 0x10 bytes */

bool WCRIconNameCaptureFloatWindow::pillMovedDuringPan(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_pillMovedDuringPan) & 1;
}

