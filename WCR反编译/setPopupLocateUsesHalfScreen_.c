// setPopupLocateUsesHalfScreen: @ 01b32a04

/* Function Stack Size: 0x14 bytes */

void WCRefineKeywordAlertHistoryViewController::setPopupLocateUsesHalfScreen_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_popupLocateUsesHalfScreen) = (byte)param_3 & 1;
  return;
}

