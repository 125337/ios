// setOverviewMode: @ 01ddd090

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsViewController::setOverviewMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_overviewMode) = (byte)param_3 & 1;
  return;
}

