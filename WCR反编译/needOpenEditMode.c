// needOpenEditMode @ 0219c6a8

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::needOpenEditMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xe) & 1;
}

