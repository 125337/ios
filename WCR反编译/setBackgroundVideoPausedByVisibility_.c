// setBackgroundVideoPausedByVisibility: @ 01e9ae24

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoCardView::setBackgroundVideoPausedByVisibility_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_backgroundVideoPausedByVisibility) = (byte)param_3 & 1;
  return;
}

