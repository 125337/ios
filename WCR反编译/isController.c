// isController @ 0176d668

/* Function Stack Size: 0x10 bytes */

bool WCRefinePluginHubItem::isController(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

