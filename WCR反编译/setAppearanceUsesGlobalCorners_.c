// setAppearanceUsesGlobalCorners: @ 01e5c914

/* Function Stack Size: 0x14 bytes */

void WCRefineTelegramTabStripView::setAppearanceUsesGlobalCorners_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_appearanceUsesGlobalCorners) = (byte)param_3 & 1;
  return;
}

