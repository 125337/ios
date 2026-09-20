// setShowingDuplicateRecords: @ 01b3270c

/* Function Stack Size: 0x14 bytes */

void WCRefineKeywordAlertHistoryViewController::setShowingDuplicateRecords_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_showingDuplicateRecords) = (byte)param_3 & 1;
  return;
}

