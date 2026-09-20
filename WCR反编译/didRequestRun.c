// didRequestRun @ 01ddd17c

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsViewController::didRequestRun(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_didRequestRun) & 1;
}

