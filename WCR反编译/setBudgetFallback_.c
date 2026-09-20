// setBudgetFallback: @ 00356a18

/* Function Stack Size: 0x14 bytes */

void WCRGroupingSnapshot::setBudgetFallback_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xc) = (byte)param_3 & 1;
  return;
}

