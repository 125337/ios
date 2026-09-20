// hasLoadedPlugins @ 014da5b4

/* Function Stack Size: 0x10 bytes */

bool WCRefineSearchManager::hasLoadedPlugins(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

