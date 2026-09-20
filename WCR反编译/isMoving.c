// isMoving @ 00806568

/* Function Stack Size: 0x10 bytes */

bool WBTouchTrailView::isMoving(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_isMoving) & 1;
}

