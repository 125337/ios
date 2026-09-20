// setDidStartLoad: @ 01bde688

/* Function Stack Size: 0x14 bytes */

void WCRefineMomentsCacheViewController::setDidStartLoad_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_didStartLoad) = (byte)param_3 & 1;
  return;
}

