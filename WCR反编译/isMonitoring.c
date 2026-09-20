// isMonitoring @ 00924da8

/* Function Stack Size: 0x10 bytes */

bool WCNavigationMonitor::isMonitoring(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

