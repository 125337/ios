// setIsNSLogMonitoring: @ 00924e10

/* Function Stack Size: 0x14 bytes */

void WCNavigationMonitor::setIsNSLogMonitoring_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 9) = (byte)param_3 & 1;
  return;
}

