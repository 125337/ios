// isNSLogMonitoringEnabled @ 0091a1a0

/* Function Stack Size: 0x10 bytes */

bool WCNavigationMonitor::isNSLogMonitoringEnabled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

