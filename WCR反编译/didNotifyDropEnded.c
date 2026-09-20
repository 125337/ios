// didNotifyDropEnded @ 00eba954

/* Function Stack Size: 0x10 bytes */

bool WCRefineBackgroundKeepAlive::didNotifyDropEnded(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

