// avatarEnabled @ 01cb025c

/* Function Stack Size: 0x10 bytes */

bool WCRefinePluginTopViewController::avatarEnabled(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_avatarEnabled) & 1;
}

