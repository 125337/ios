// isRunning @ 014f91b8

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsEngine::isRunning(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

