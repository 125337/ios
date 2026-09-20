// setUsesExpandedPreviewSlot: @ 01e9ab28

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoCardView::setUsesExpandedPreviewSlot_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_usesExpandedPreviewSlot) = (byte)param_3 & 1;
  return;
}

