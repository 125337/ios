// lastFilterCacheHit @ 01525fb4

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramGroupingStore::lastFilterCacheHit(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

