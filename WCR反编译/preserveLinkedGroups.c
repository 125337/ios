// preserveLinkedGroups @ 0151717c

/* Function Stack Size: 0x10 bytes */

bool WCRefineTelegramTab::preserveLinkedGroups(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

