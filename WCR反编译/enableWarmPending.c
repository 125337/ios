// enableWarmPending @ 01602a2c

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::enableWarmPending(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0x10) & 1;
}

