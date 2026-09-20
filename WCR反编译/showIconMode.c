// showIconMode @ 0219c618

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::showIconMode(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xc) & 1;
}

