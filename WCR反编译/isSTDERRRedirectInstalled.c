// isSTDERRRedirectInstalled @ 00924f90

/* Function Stack Size: 0x10 bytes */

bool WCNavigationMonitor::isSTDERRRedirectInstalled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xd) & 1;
}

