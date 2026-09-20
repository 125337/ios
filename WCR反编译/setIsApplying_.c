// setIsApplying: @ 01867e84

/* Function Stack Size: 0x14 bytes */

void WCRefineBatchRemarkViewController::setIsApplying_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isApplying) = (byte)param_3 & 1;
  return;
}

