// asRedDot @ 015e00e4

/* Function Stack Size: 0x10 bytes */

bool WCRQuickChatItem::asRedDot(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

