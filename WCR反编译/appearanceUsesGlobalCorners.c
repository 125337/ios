// appearanceUsesGlobalCorners @ 01e5c8e8

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramTabStripView::appearanceUsesGlobalCorners(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_appearanceUsesGlobalCorners) & 1;
}

