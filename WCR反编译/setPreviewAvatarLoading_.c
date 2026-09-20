// setPreviewAvatarLoading: @ 018440c4

/* Function Stack Size: 0x14 bytes */

void WCRefineAvatarFrameSpecialUserDetailViewController::setPreviewAvatarLoading_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_previewAvatarLoading) = (byte)param_3 & 1;
  return;
}

