// isCustomUI @ 01d75e5c

/* Function Stack Size: 0x10 bytes */

bool PluginConfig::isCustomUI(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

