// specificPageLockEnabled @ 0219c6f0

/* Function Stack Size: 0x10 bytes */

bool WCRefineConfig::specificPageLockEnabled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xf) & 1;
}

