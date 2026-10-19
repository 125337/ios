// simpleRenderMode @0xbbb40

/* Function Stack Size: 0x10 bytes */

bool WCMTOCropView::simpleRenderMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_simpleRenderMode) & 1;
}

