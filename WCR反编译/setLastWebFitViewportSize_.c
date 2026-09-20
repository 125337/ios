// setLastWebFitViewportSize: @ 01e9b4b8

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoCardView::setLastWebFitViewportSize_(ID param_1,SEL param_2,CGSize param_3)

{
  long lVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  
  lVar1 = (long)_lastWebFitViewportSize;
  ((undefined8 *)(param_1 + lVar1))[1] = in_d1;
  *(undefined8 *)(param_1 + lVar1) = in_d0;
  return;
}

