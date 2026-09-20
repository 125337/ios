// setWcrSuppressAutoScroll: @ 0195a6d0

/* Function Stack Size: 0x14 bytes */

void WCRFileEditorTextView::setWcrSuppressAutoScroll_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_wcrSuppressAutoScroll) = (byte)param_3 & 1;
  return;
}

