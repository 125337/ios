// setEntryTipPresented: @ 019acb60

/* Function Stack Size: 0x14 bytes */

void WCRefineFileManagerViewController::setEntryTipPresented_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_entryTipPresented) = (byte)param_3 & 1;
  return;
}

