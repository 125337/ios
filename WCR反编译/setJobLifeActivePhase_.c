// setJobLifeActivePhase: @ 014fa1c0

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsEngine::setJobLifeActivePhase_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xe) = (byte)param_3 & 1;
  return;
}

