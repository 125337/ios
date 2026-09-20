// setCropUsingFullScreenPrefs: @ 01683dac

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::setCropUsingFullScreenPrefs_
               (ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_cropUsingFullScreenPrefs) = (byte)param_3 & 1;
  return;
}

