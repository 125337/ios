// shouldHideStatusBar @0x67938

/* Function Stack Size: 0x10 bytes */

bool WCMYBImageBrowser::shouldHideStatusBar(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_shouldHideStatusBar) & 1;
}

