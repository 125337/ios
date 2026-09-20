// registered @ 00275b1c

/* Function Stack Size: 0x10 bytes */

bool WCRFinderDLWaiter::registered(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

