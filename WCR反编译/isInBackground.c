// isInBackground @ 00eba834

/* Function Stack Size: 0x10 bytes */

bool WCRefineBackgroundKeepAlive::isInBackground(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

