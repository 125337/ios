// cancelled @ 014ddd60

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsOverviewResult::cancelled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

