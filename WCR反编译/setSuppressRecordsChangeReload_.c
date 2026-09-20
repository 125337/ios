// setSuppressRecordsChangeReload: @ 01b1edf0

/* Function Stack Size: 0x14 bytes */

void WCRefineKeywordAlertHistoryCardViewController::setSuppressRecordsChangeReload_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_suppressRecordsChangeReload) = (byte)param_3 & 1;
  return;
}

