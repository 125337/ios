// needRedStyle @ 0219c540

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::needRedStyle(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

