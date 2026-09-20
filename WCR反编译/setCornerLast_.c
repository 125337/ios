// setCornerLast: @ 01be685c

/* Function Stack Size: 0x14 bytes */

void WCRMomentsDraftRowView::setCornerLast_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_cornerLast) = (byte)param_3 & 1;
  return;
}

