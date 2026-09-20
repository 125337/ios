// canPreserveOnHome @ 003589b8

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingItem::canPreserveOnHome(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 8) & 1;
}

