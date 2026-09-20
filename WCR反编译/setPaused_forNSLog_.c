// setPaused:forNSLog: @ 0091a1c0

/* Function Stack Size: 0x18 bytes */

void WCNavigationMonitor::setPaused_forNSLog_(ID param_1,SEL param_2,bool param_3,bool param_4)

{
  if ((param_4 & 1) == 0) {
    *(byte *)(param_1 + 10) = (byte)param_3 & 1;
  }
  else {
    *(byte *)(param_1 + 0xb) = (byte)param_3 & 1;
  }
  return;
}

