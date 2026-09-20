// hidePinned @ 01517258

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramTab::hidePinned(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

