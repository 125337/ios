// pendingBadgeRecompute @ 0160299c

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatRuntime::pendingBadgeRecompute(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 0xe) & 1;
}

