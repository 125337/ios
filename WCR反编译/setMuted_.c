// setMuted: @ 0013ce84

/* Function Stack Size: 0x14 bytes */

void WCRAttachmentVideoBackgroundView::setMuted_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_muted) = (byte)param_3 & 1;
  return;
}

