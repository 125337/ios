// setAutoHideProjectiveView: @0x67884

/* Function Stack Size: 0x14 bytes */

void WCMYBImageBrowser::setAutoHideProjectiveView_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_autoHideProjectiveView) = (byte)param_3 & 1;
  return;
}

