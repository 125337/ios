// setSkipUnchanged: @ 01867cd8

/* Function Stack Size: 0x14 bytes */

void WCRefineBatchRemarkViewController::setSkipUnchanged_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_skipUnchanged) = (byte)param_3 & 1;
  return;
}

