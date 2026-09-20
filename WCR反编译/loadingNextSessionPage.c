// loadingNextSessionPage @ 01602954

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::loadingNextSessionPage(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xd) & 1;
}

