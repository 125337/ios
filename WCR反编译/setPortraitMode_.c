// setPortraitMode: @ 01ddd0ec

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsViewController::setPortraitMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_portraitMode) = (byte)param_3 & 1;
  return;
}

