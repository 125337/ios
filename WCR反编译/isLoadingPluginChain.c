// isLoadingPluginChain @ 014da974

/* Function Stack Size: 0x10 bytes */

bool WCRefineSearchManager::isLoadingPluginChain(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

