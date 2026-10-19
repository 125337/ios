// setRefreshedThisDrag: @0x5a55c

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setRefreshedThisDrag_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_refreshedThisDrag) = (byte)param_3 & 1;
  return;
}

