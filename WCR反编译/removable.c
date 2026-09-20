// removable @ 015172e0

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramTab::removable(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

