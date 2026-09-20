// setSkipLimitEditingDuration: @ 018105cc

/* Function Stack Size: 0x14 bytes */

void WCRefineAutoParseLinkSettingsViewController::setSkipLimitEditingDuration_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_skipLimitEditingDuration) = (byte)param_3 & 1;
  return;
}

