// hasCompletedPluginScan @ 014daa04

/* Function Stack Size: 0x10 bytes */

bool WCRefineSearchManager::hasCompletedPluginScan(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xd) & 1;
}

