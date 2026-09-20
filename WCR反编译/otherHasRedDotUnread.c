// otherHasRedDotUnread @ 003568d4

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingSnapshot::otherHasRedDotUnread(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 10) & 1;
}

