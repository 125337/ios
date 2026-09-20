// setPillDocked: @ 00fdd600

/* Function Stack Size: 0x14 bytes */

void WCRIconNameCaptureFloatWindow::setPillDocked_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_pillDocked) = (byte)param_3 & 1;
  return;
}

