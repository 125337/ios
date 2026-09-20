// setWebSnapshotViewportSize: @ 01e9b33c

/* Function Stack Size: 0x20 bytes */

void WCRefineToDoCardView::setWebSnapshotViewportSize_(ID param_1,SEL param_2,CGSize param_3)

{
  long lVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  
  lVar1 = (long)_webSnapshotViewportSize;
  ((undefined8 *)(param_1 + lVar1))[1] = in_d1;
  *(undefined8 *)(param_1 + lVar1) = in_d0;
  return;
}

