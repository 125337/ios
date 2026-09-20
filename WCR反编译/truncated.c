// truncated @ 014dd12c

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsResult::truncated(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

