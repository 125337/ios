// jobPreferCreateTime @ 014f9840

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsEngine::jobPreferCreateTime(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

