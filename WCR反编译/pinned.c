// pinned @ 015e012c

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatItem::pinned(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

