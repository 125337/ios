// setTargetSection: @ 00356400

/* Function Stack Size: 0x18 bytes */

void WCRGroupingSnapshot::setTargetSection_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + 0x10) = param_3;
  return;
}

