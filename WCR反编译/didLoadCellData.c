// didLoadCellData @ 00356d40

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingNativeRowRecord::didLoadCellData(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + 9) & 1;
}

