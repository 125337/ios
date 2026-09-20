// setDidRequestRun: @ 01ddd1a8

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsViewController::setDidRequestRun_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_didRequestRun) = (byte)param_3 & 1;
  return;
}

