// setGroupHasMore: @ 016028e4

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatRuntime::setGroupHasMore_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xb) = (byte)param_3 & 1;
  return;
}

