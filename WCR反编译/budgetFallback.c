// budgetFallback @ 003569f8

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingSnapshot::budgetFallback(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xc) & 1;
}

