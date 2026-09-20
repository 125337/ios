// previewAppearanceLocked @ 018cef08

/* Function Stack Size: 0x10 bytes */

bool WCRefineChatToolbarViewController::previewAppearanceLocked(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_previewAppearanceLocked) & 1;
}

