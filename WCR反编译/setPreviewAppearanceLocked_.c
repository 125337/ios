// setPreviewAppearanceLocked: @ 018cef34

/* Function Stack Size: 0x14 bytes */

void WCRefineChatToolbarViewController::setPreviewAppearanceLocked_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_previewAppearanceLocked) = (byte)param_3 & 1;
  return;
}

