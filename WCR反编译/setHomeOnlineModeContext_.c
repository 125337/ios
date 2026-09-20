// setHomeOnlineModeContext: @ 01c6d534

/* Function Stack Size: 0x14 bytes */

void WCRefineNavigationAvatarViewController::setHomeOnlineModeContext_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_homeOnlineModeContext) = (byte)param_3 & 1;
  return;
}

