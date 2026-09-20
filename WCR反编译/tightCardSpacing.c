// tightCardSpacing @ 01dba84c

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsBoardView::tightCardSpacing(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_tightCardSpacing) & 1;
}

