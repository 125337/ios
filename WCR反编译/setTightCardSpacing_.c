// setTightCardSpacing: @ 01dba878

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsBoardView::setTightCardSpacing_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_tightCardSpacing) = (byte)param_3 & 1;
  return;
}

