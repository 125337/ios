// backgroundVideoPausedByVisibility @ 01e9adf8

/* Function Stack Size: 0x10 bytes */

bool WCRefineToDoCardView::backgroundVideoPausedByVisibility(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_backgroundVideoPausedByVisibility) & 1;
}

