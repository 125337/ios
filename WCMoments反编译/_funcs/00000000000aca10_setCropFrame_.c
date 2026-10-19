// setCropFrame: @0xaca10

/* Function Stack Size: 0x30 bytes */

void WCMTOActivityCroppedImageProvider::setCropFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  double *pdVar1;
  
  pdVar1 = (double *)(param_1 + (long)_cropFrame);
  pdVar1[1] = param_3.field0_0x0.field1_0x8;
  *pdVar1 = param_3.field0_0x0.field0_0x0;
  pdVar1[3] = param_3.field1_0x10.field1_0x8;
  pdVar1[2] = param_3.field1_0x10.field0_0x0;
  return;
}

