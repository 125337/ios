// setIndexComplete: @ 01bde954

/* Function Stack Size: 0x14 bytes */

void WCRefineMomentsCacheViewController::setIndexComplete_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_indexComplete) = (byte)param_3 & 1;
  return;
}

