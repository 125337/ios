// setRestoredScrollOffset: @ 00370a2c

/* Function Stack Size: 0x14 bytes */

void WCRGroupingSessionListViewController::setRestoredScrollOffset_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_restoredScrollOffset) = (byte)param_3 & 1;
  return;
}

