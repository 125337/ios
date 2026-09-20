// setConverting: @ 019f6afc

/* Function Stack Size: 0x14 bytes */

void WCRefineFontConvertViewController::setConverting_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_converting) = (byte)param_3 & 1;
  return;
}

