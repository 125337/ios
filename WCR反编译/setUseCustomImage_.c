// setUseCustomImage: @ 00806650

/* Function Stack Size: 0x14 bytes */

void WBTouchTrailView::setUseCustomImage_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_useCustomImage) = (byte)param_3 & 1;
  return;
}

