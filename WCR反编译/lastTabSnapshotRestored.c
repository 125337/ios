// lastTabSnapshotRestored @ 01525f6c

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramGroupingStore::lastTabSnapshotRestored(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

