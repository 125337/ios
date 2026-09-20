// setLocatingHistoryRecord: @ 01b326b0

/* Function Stack Size: 0x14 bytes */

void WCRefineKeywordAlertHistoryViewController::setLocatingHistoryRecord_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_locatingHistoryRecord) = (byte)param_3 & 1;
  return;
}

