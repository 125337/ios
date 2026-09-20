// setLoadingNextSessionPage: @ 01602974

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatRuntime::setLoadingNextSessionPage_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xd) = (byte)param_3 & 1;
  return;
}

