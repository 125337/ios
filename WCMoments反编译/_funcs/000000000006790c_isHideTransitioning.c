// isHideTransitioning @0x6790c

/* Function Stack Size: 0x10 bytes */

bool WCMYBImageBrowser::isHideTransitioning(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_hideTransitioning) & 1;
}

