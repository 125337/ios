// registryPublishScheduled @ 0177d0d4

/* Function Stack Size: 0x10 bytes */

bool WCRefinePluginHubManager::registryPublishScheduled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

