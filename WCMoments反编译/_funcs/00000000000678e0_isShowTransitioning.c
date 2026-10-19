// isShowTransitioning @0x678e0

/* Function Stack Size: 0x10 bytes */

bool WCMYBImageBrowser::isShowTransitioning(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_showTransitioning) & 1;
}

