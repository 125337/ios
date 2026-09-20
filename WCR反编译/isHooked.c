// isHooked @ 00924ec8

/* Function Stack Size: 0x10 bytes */

bool WCNavigationMonitor::isHooked(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xc) & 1;
}

