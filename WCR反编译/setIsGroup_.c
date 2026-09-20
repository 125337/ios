// setIsGroup: @ 01ddd034

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsViewController::setIsGroup_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isGroup) = (byte)param_3 & 1;
  return;
}

