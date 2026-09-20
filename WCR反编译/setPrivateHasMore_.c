// setPrivateHasMore: @ 0160289c

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatRuntime::setPrivateHasMore_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 10) = (byte)param_3 & 1;
  return;
}

