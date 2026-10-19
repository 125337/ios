// nativeListDirty @0x5a62c

/* Function Stack Size: 0x10 bytes */

bool WCMFeedController::nativeListDirty(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_nativeListDirty) & 1;
}

