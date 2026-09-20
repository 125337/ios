// useCustomImage @ 00806624

/* Function Stack Size: 0x10 bytes */

bool WBTouchTrailView::useCustomImage(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_useCustomImage) & 1;
}

