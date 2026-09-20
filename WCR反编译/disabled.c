// disabled @ 01ad24c4

/* Function Stack Size: 0x10 bytes */

bool WCRefineGroup::disabled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

