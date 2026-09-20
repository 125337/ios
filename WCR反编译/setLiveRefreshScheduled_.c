// setLiveRefreshScheduled: @ 00370b48

/* Function Stack Size: 0x14 bytes */

void WCRGroupingSessionListViewController::setLiveRefreshScheduled_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_liveRefreshScheduled) = (byte)param_3 & 1;
  return;
}

