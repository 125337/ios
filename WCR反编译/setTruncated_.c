// setTruncated: @ 014dd14c

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsResult::setTruncated_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 9) = (byte)param_3 & 1;
  return;
}

