// wcrSuppressAutoScroll @ 0195a6a4

/* Function Stack Size: 0x10 bytes */

bool WCRFileEditorTextView::wcrSuppressAutoScroll(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_wcrSuppressAutoScroll) & 1;
}

