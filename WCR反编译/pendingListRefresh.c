// pendingListRefresh @ 0160272c

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::pendingListRefresh(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

