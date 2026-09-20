// hasUnfilteredSnapshot @ 01525edc

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramGroupingStore::hasUnfilteredSnapshot(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

