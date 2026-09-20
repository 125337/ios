// setCommitted: @ 01bb847c

/* Function Stack Size: 0x14 bytes */

void WCRMessageSyncMultiSelectViewController::setCommitted_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_committed) = (byte)param_3 & 1;
  return;
}

