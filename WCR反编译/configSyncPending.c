// configSyncPending @ 016029e4

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::configSyncPending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xf) & 1;
}

