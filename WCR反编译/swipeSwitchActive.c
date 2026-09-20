// swipeSwitchActive @ 01525f24

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramGroupingStore::swipeSwitchActive(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

