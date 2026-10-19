// setNativeListDirty: @0x5a658

/* Function Stack Size: 0x14 bytes */

void WCMFeedController::setNativeListDirty_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_nativeListDirty) = (byte)param_3 & 1;
  return;
}

