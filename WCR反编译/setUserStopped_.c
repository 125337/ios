// setUserStopped: @ 01ddd6c4

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsViewController::setUserStopped_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_userStopped) = (byte)param_3 & 1;
  return;
}

