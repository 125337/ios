// observersRegistered @ 00eba8bc

/* Function Stack Size: 0x10 bytes */

bool WCRefineBackgroundKeepAlive::observersRegistered(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

