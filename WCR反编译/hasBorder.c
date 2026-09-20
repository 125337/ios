// hasBorder @ 0080650c

/* Function Stack Size: 0x10 bytes */

bool WBTouchTrailView::hasBorder(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_hasBorder) & 1;
}

