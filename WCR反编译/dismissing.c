// dismissing @ 00ff2eb4

/* Function Stack Size: 0x10 bytes */

bool WCRKeywordAlertDanmakuBubbleView::dismissing(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_dismissing) & 1;
}

