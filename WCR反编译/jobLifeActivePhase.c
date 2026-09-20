// jobLifeActivePhase @ 014fa1a0

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsEngine::jobLifeActivePhase(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xe) & 1;
}

