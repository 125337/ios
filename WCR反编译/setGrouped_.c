// setGrouped: @ 019b1d10

/* Function Stack Size: 0x14 bytes */

void WCRFilePathListViewController::setGrouped_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_grouped) = (byte)param_3 & 1;
  return;
}

