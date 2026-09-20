// setUnread: @ 015e00c0

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatItem::setUnread_(ID param_1,SEL param_2,unsigned_int param_3)

{
  *(unsigned_int *)(param_1 + 0xc) = param_3;
  return;
}

