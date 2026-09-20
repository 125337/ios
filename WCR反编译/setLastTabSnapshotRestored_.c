// setLastTabSnapshotRestored: @ 01525f8c

/* Function Stack Size: 0x14 bytes */

void WCRefineTelegramGroupingStore::setLastTabSnapshotRestored_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 10) = (byte)param_3 & 1;
  return;
}

