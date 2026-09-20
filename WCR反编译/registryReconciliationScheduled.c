// registryReconciliationScheduled @ 0177d08c

/* Function Stack Size: 0x10 bytes */

bool WCRefinePluginHubManager::registryReconciliationScheduled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

