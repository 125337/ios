// chainCancelled @ 014da88c

/* Function Stack Size: 0x10 bytes */

bool WCRefineSearchManager::chainCancelled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

