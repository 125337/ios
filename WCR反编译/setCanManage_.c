// setCanManage: @ 01d8d034

/* Function Stack Size: 0x14 bytes */

void WCRefineSessionStatsActivityViewController::setCanManage_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_canManage) = (byte)param_3 & 1;
  return;
}

