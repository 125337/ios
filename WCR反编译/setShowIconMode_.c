// setShowIconMode: @ 0219c638

/* Function Stack Size: 0x14 bytes */

void WCRefineConfig::setShowIconMode_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + 0xc) = (byte)param_3 & 1;
  return;
}

