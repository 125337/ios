// setWebHostedOnTable: @ 01e9b120

/* Function Stack Size: 0x14 bytes */

void WCRefineToDoCardView::setWebHostedOnTable_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_webHostedOnTable) = (byte)param_3 & 1;
  return;
}

