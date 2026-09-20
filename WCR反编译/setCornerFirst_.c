// setCornerFirst: @ 01be6800

/* Function Stack Size: 0x14 bytes */

void WCRMomentsDraftRowView::setCornerFirst_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_cornerFirst) = (byte)param_3 & 1;
  return;
}

