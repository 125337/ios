// setLongPressOpenTriggered: @ 01e9b564

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoCardView::setLongPressOpenTriggered_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_longPressOpenTriggered) = (byte)param_3 & 1;
  return;
}

