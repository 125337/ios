// navigationPaused @ 00924e38

/* Function Stack Size: 0x10 bytes */

bool WCNavigationMonitor::navigationPaused(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

