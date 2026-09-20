// yieldedForHostCall @ 00eba99c

/* Function Stack Size: 0x10 bytes */

bool WCRefineBackgroundKeepAlive::yieldedForHostCall(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

