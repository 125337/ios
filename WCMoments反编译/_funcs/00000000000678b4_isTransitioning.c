// isTransitioning @0x678b4

/* Function Stack Size: 0x10 bytes */

bool WCMYBImageBrowser::isTransitioning(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_transitioning) & 1;
}

