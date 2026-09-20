// setHasSponsored: @ 01c9a594

/* Function Stack Size: 0x14 bytes */

void WCRefinePluginFeatureManagementViewController::setHasSponsored_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_hasSponsored) = (byte)param_3 & 1;
  return;
}

