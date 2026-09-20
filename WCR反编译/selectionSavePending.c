// selectionSavePending @ 01526134

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramGroupingStore::selectionSavePending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xc) & 1;
}

