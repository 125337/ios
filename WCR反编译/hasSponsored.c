// hasSponsored @ 01c9a568

/* Function Stack Size: 0x10 bytes */

bool WCRefinePluginFeatureManagementViewController::hasSponsored(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_hasSponsored) & 1;
}

