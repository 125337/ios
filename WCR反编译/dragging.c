// dragging @ 01877b20

/* Function Stack Size: 0x10 bytes */

bool WCRBubbleCutGuideView::dragging(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_dragging) & 1;
}

