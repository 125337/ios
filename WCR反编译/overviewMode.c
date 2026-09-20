// overviewMode @ 01ddd064

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsViewController::overviewMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_overviewMode) & 1;
}

