// translucencyAlwaysHidden @0xbbef4

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::translucencyAlwaysHidden(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_translucencyAlwaysHidden) & 1;
}

