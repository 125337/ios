// setXzyDesiredFrame: @0x1079bc


/* Function Stack Size: 0x30 bytes */



void XZYPinnedTimeLabel::setXzyDesiredFrame_(ID param_1,SEL param_2,CGRect param_3)



{

  double *pdVar1;

  

  pdVar1 = (double *)(param_1 + (long)_xzyDesiredFrame);

  *pdVar1 = param_3.field0_0x0.field0_0x0;

  pdVar1[1] = param_3.field0_0x0.field1_0x8;

  pdVar1[2] = param_3.field1_0x10.field0_0x0;

  pdVar1[3] = param_3.field1_0x10.field1_0x8;

  return;

}




