// pillDocked @ 00fdd5d4

/* Function Stack Size: 0x10 bytes */

bool WCRIconNameCaptureFloatWindow::pillDocked(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_pillDocked) & 1;
}

