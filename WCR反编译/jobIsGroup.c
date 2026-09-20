// jobIsGroup @ 014f9294

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsEngine::jobIsGroup(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

