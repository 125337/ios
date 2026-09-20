// leftWhileRunning @ 01ddd6f4

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsViewController::leftWhileRunning(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_leftWhileRunning) & 1;
}

