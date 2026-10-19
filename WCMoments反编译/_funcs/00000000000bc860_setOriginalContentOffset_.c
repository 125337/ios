// setOriginalContentOffset: @0xbc860

/* Function Stack Size: 0x20 bytes */

void WCMTOCropView::setOriginalContentOffset_(ID param_1,SEL param_2,CGPoint param_3)

{
  long lVar1;
  
  lVar1 = (long)_originalContentOffset;
  ((double *)(param_1 + lVar1))[1] = param_3.field1_0x8;
  *(double *)(param_1 + lVar1) = param_3.field0_0x0;
  return;
}

