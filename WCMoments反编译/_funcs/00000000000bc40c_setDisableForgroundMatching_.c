// setDisableForgroundMatching: @0xbc40c

/* Function Stack Size: 0x14 bytes */

void WCMTOCropView::setDisableForgroundMatching_(ID param_1,SEL param_2,bool param_3)

{
  *(byte *)(param_1 + (long)_disableForgroundMatching) = (byte)param_3 & 1;
  return;
}

