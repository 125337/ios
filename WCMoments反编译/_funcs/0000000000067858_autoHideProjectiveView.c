// autoHideProjectiveView @0x67858

/* Function Stack Size: 0x10 bytes */

bool WCMYBImageBrowser::autoHideProjectiveView(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_autoHideProjectiveView) & 1;
}

