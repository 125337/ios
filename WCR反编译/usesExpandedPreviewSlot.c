// usesExpandedPreviewSlot @ 01e9aafc

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoCardView::usesExpandedPreviewSlot(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_usesExpandedPreviewSlot) & 1;
}

