// jobAppMsgPhase @ 014f9888

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsEngine::jobAppMsgPhase(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

