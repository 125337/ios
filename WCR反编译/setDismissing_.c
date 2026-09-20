// setDismissing: @ 00ff2ee0

/* Function Stack Size: 0x14 bytes */

void WCRKeywordAlertDanmakuBubbleView::setDismissing_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_dismissing) = (byte)param_3 & 1;
  return;
}

