// sessionHasMore @ 0160290c

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::sessionHasMore(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xc) & 1;
}

