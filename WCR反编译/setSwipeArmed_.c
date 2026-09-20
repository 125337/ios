// setSwipeArmed: @ 01dc6eec

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsLayoutViewController::setSwipeArmed_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_swipeArmed) = (byte)param_3 & 1;
  return;
}

