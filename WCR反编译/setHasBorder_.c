// setHasBorder: @ 00806538

/* Function Stack Size: 0x14 bytes */

void WBTouchTrailView::setHasBorder_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_hasBorder) = (byte)param_3 & 1;
  return;
}

