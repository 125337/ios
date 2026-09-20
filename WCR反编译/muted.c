// muted @ 0013ce58

/* Function Stack Size: 0x10 bytes */

bool WCRAttachmentVideoBackgroundView::muted(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_muted) & 1;
}

