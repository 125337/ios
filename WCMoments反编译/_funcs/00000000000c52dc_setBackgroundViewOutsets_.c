// setBackgroundViewOutsets: @0xc52dc

/* Function Stack Size: 0x30 bytes */

void WCMTOCropToolbar::setBackgroundViewOutsets_(ID param_1,SEL param_2,UIEdgeInsets param_3)

{
  double *pdVar1;
  
  pdVar1 = (double *)(param_1 + (long)_backgroundViewOutsets);
  pdVar1[1] = param_3.field1_0x8;
  *pdVar1 = param_3.field0_0x0;
  pdVar1[3] = param_3.field3_0x18;
  pdVar1[2] = param_3.field2_0x10;
  return;
}

