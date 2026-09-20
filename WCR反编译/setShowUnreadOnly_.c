// setShowUnreadOnly: @ 0219c680

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setShowUnreadOnly_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xd) = (byte)param_3 & 1;
  return;
}

