// setWcr_suspendPlayback: @ 0013cee0

/* Function Stack Size: 0x14 bytes */

void WCRAttachmentVideoBackgroundView::setWcr_suspendPlayback_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_wcr_suspendPlayback) = (byte)param_3 & 1;
  return;
}

