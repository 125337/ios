// invalidated @ 0112b560

/* Function Stack Size: 0x10 bytes */

bool WCRefineProgressToast::invalidated(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

