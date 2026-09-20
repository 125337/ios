// setDraggingDeleteArmed: @ 01b1ed34

/* Function Stack Size: 0x14 bytes */

void WCRefineKeywordAlertHistoryCardViewController::setDraggingDeleteArmed_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_draggingDeleteArmed) = (byte)param_3 & 1;
  return;
}

