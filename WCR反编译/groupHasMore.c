// groupHasMore @ 016028c4

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::groupHasMore(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xb) & 1;
}

