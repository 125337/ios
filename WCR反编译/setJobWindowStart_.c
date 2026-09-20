// setJobWindowStart: @ 014f938c

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsEngine::setJobWindowStart_(ID param_1,SEL param_2,unsigned_int param_3)

{
  *(unsigned_int *)(param_1 + 0x10) = param_3;
  return;
}

