// liveRefreshScheduled @ 00370b1c

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingSessionListViewController::liveRefreshScheduled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_liveRefreshScheduled) & 1;
}

