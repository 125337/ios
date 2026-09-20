// setLeftWhileRunning: @ 01ddd720

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsViewController::setLeftWhileRunning_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_leftWhileRunning) = (byte)param_3 & 1;
  return;
}

