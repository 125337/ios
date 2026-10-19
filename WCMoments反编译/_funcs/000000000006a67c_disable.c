// disable @0x6a67c

/* Function Stack Size: 0x10 bytes */

bool WCMYBIBInteractionProfile::disable(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

