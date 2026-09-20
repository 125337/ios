// setIsNew: @ 01eae160

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoItemEditViewController::setIsNew_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_isNew) = (byte)param_3 & 1;
  return;
}

