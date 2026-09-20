// loadingSticky @ 01ddd870

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsViewController::loadingSticky(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_loadingSticky) & 1;
}

