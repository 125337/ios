// setRegistryReconciliationScheduled: @ 0177d0ac

/* Function Stack Size: 0x14 bytes */

void WCRefinePluginHubManager::setRegistryReconciliationScheduled_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 8) = (byte)param_3 & 1;
  return;
}

