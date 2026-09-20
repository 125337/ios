// setShowTopSession: @ 0219c5a8

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setShowTopSession_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 10) = (byte)param_3 & 1;
  return;
}

