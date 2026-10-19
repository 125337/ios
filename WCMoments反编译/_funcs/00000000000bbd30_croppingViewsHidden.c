// croppingViewsHidden @0xbbd30

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::croppingViewsHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_croppingViewsHidden) & 1;
}

