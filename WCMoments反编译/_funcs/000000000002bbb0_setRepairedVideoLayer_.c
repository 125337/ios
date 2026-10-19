// setRepairedVideoLayer: @0x2bbb0

/* Function Stack Size: 0x14 bytes */

void WCMVideoController::setRepairedVideoLayer_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_repairedVideoLayer) = (byte)param_3 & 1;
  return;
}

