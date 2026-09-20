// canManage @ 01d8d008

/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsActivityViewController::canManage(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_canManage) & 1;
}

