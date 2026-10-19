// setCroppedFrame: @0xadfe8

/* Function Stack Size: 0x30 bytes */

void WCMTOCroppedImageAttributes::setCroppedFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  *(double *)(param_1 + 0x28) = param_3.field0_0x0.field1_0x8;
  *(double *)(param_1 + 0x20) = param_3.field0_0x0.field0_0x0;
  *(double *)(param_1 + 0x38) = param_3.field1_0x10.field1_0x8;
  *(double *)(param_1 + 0x30) = param_3.field1_0x10.field0_0x0;
  return;
}

