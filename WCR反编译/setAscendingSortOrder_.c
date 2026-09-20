// setAscendingSortOrder: @ 01b32768

/* Function Stack Size: 0x14 bytes */

void WCRefineKeywordAlertHistoryViewController::setAscendingSortOrder_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_ascendingSortOrder) = (byte)param_3 & 1;
  return;
}

