// setIsLoadingPluginChain: @ 014da994

/* Function Stack Size: 0x14 bytes */

void WCRefineSearchManager::setIsLoadingPluginChain_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xb) = (byte)param_3 & 1;
  return;
}

