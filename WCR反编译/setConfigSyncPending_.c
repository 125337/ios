// setConfigSyncPending: @ 01602a04

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatRuntime::setConfigSyncPending_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xf) = (byte)param_3 & 1;
  return;
}

