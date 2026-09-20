// wcr_suspendPlayback @ 0013ceb4

/* Function Stack Size: 0x10 bytes */

bool WCRAttachmentVideoBackgroundView::wcr_suspendPlayback(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_wcr_suspendPlayback) & 1;
}

