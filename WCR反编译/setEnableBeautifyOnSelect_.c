// setEnableBeautifyOnSelect: @ 019e0a84

/* Function Stack Size: 0x14 bytes */

void WCRefineFontBeautifyViewController::setEnableBeautifyOnSelect_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_enableBeautifyOnSelect) = (byte)param_3 & 1;
  return;
}

