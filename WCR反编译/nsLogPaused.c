// nsLogPaused @ 00924e80

/* Function Stack Size: 0x10 bytes */

bool WCNavigationMonitor::nsLogPaused(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

