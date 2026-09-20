// setRealtimePreviewNeedsRebuild: @ 01ba4764

/* Function Stack Size: 0x14 bytes */

void WCRefineMessageBannerBeautifyViewController::setRealtimePreviewNeedsRebuild_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_realtimePreviewNeedsRebuild) = (byte)param_3 & 1;
  return;
}

