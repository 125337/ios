// setCropShadowInner: @ 01683d50

/* Function Stack Size: 0x14 bytes */

void WCRSuperFloatCropViewController::setCropShadowInner_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_cropShadowInner) = (byte)param_3 & 1;
  return;
}

