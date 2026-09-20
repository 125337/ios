// setDidLoadCellData: @ 00356d60

/* Function Stack Size: 0x14 bytes */

void WCRGroupingNativeRowRecord::setDidLoadCellData_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 9) = (byte)param_3 & 1;
  return;
}

