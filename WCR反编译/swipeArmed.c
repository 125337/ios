// swipeArmed @ 01dc6ec0

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsLayoutViewController::swipeArmed(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_swipeArmed) & 1;
}

