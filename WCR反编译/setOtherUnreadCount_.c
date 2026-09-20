// setOtherUnreadCount: @ 00356820

/* Function Stack Size: 0x18 bytes */

void WCRGroupingSnapshot::setOtherUnreadCount_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x80) = param_3;
  return;
}

